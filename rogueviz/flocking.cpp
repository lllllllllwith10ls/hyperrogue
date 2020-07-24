// flocking simulations
// Copyright (C) 2018 Zeno and Tehora Rogue, see 'hyper.cpp' for details

// based on Flocking by Daniel Shiffman (which in turn implements Boids by Craig Reynold)
// https://processing.org/examples/flocking.html

// Our implementation simplifies some equations a bit.

// example parameters: 

// flocking on a torus:
//    -t2 3 0 0 3 0 -geo 1 -flocking 10 -rvshape 3

// flocking on the Zebra quotient:
//    -geo 4 -flocking 10 -rvshape 3 -zoom .9

// press 'o' when flocking active to change the parameters.

#ifdef USE_THREADS
#include <thread>
int threads = 1;
#endif

template<class T> auto parallelize(long long N, T action) -> decltype(action(0,0)) {
#ifndef USE_THREADS
  return action(0,N);
#else
  if(threads == 1) return action(0,N);
  std::vector<std::thread> v;
  typedef decltype(action(0,0)) Res;
  std::vector<Res> results(threads);
  for(int k=0; k<threads; k++)
    v.emplace_back([&,k] () { 
      results[k] = action(N*k/threads, N*(k+1)/threads); 
      });
  for(std::thread& t:v) t.join();
  Res res = 0;
  for(Res r: results) res += r;
  return res;
#endif
  }

#include "rogueviz.h"

namespace rogueviz {

namespace flocking {

  int flock_id;

  int N;
  
  bool draw_lines = false;
  
  int follow = 0;
  string follow_names[3] = {"nothing", "specific boid", "center of mass"};
  
  map<cell*, map<cell*, transmatrix>> relmatrices;

  ld ini_speed = .5;
  ld max_speed = 1;

  ld sep_factor = 1.5;
  ld sep_range = .25;

  ld align_factor = 1;
  ld align_range = .5;
  
  ld coh_factor = 1;
  ld coh_range = 2.5;
  
  ld check_range = 2.5;
  
  char shape = 'b';
  
  vector<tuple<hyperpoint, hyperpoint, color_t> > lines;
  
  // parameters of each boid
  // m->base: the cell it is currently on
  // m->vel: velocity
  // m->at: determines the position and speed:
  //        m->at * (0, 0, 1) is the current position (in Minkowski hyperboloid coordinates relative to m->base)
  //        m->at * (m->vel, 0, 0) is the current velocity vector (tangent to the Minkowski hyperboloid)
  // m->pat: like m->at but relative to the screen

  void init() {
    if(!bounded) {
      addMessage("Flocking simulation needs a bounded space.");
      return;
      }
    stop_game();
    rogueviz::init(&flock_id, RV_GRAPH);
    vdata.resize(N);
    
    const auto v = currentmap->allcells();
    
    printf("computing relmatrices...\n");
    // relmatrices[c1][c2] is the matrix we have to multiply by to 
    // change from c1-relative coordinates to c2-relative coordinates
    for(cell* c1: v) {
      manual_celllister cl;
      cl.add(c1);
      for(int i=0; i<isize(cl.lst); i++) {
        cell *c2 = cl.lst[i];
        transmatrix T = calc_relative_matrix(c2, c1, C0);
        if(hypot_d(WDIM, inverse_exp(tC0(T))) <= check_range) {
          relmatrices[c1][c2] = T;
          forCellEx(c3, c2) cl.add(c3);
          }
        }
      }

    printf("setting up...\n");
    for(int i=0; i<N; i++) {
      vertexdata& vd = vdata[i];
      // set initial base and at to random cell and random position there 
      createViz(i, v[hrand(isize(v))], Id);
      rotate_object(vd.m->pat, vd.m->ori, random_spin());
      apply_parallel_transport(vd.m->pat, vd.m->ori, xtangent(hrand(100) / 200.));
      
      vd.name = its(i+1);
      vd.cp = dftcolor;
      vd.cp.color2 = ((hrand(0x1000000) << 8) + 0xFF) | 0x808080FF;
      vd.cp.shade = shape;
      vd.m->vel = ini_speed;
      }
  
    storeall();
    printf("done\n");
    }
  
  int precision = 10;
  
  void simulate(int delta) {
    int iter = 0;
    while(delta > precision && iter < 100) { 
      simulate(precision); delta -= precision; 
      iter++;
      }      
    ld d = delta / 1000.;
    int N = isize(vdata);
    vector<transmatrix> pats(N);
    vector<transmatrix> oris(N);
    vector<ld> vels(N);
    using shmup::monster;
    
    map<cell*, vector<monster*>> monsat;

    for(int i=0; i<N; i++) {
      vertexdata& vd = vdata[i];
      auto m = vd.m;
      monsat[m->base].push_back(m);
      }
    
    lines.clear();

    parallelize(N, [&monsat, &d, &vels, &pats, &oris] (int a, int b) { for(int i=a; i<b; i++) {
      vertexdata& vd = vdata[i];
      auto m = vd.m;
      
      transmatrix I, Rot;
      bool use_rot = true;
      
      if(prod) {
        I = inverse(m->at);
        Rot = inverse(m->ori);
        }
      else if(nonisotropic) {
        I = gpushxto0(tC0(m->at));
        Rot = inverse(I * m->at);
        }
      else {
        I = inverse(m->at);
        Rot = Id;
        use_rot = false;
        }
      
      // we do all the computations here in the frame of reference
      // where m is at (0,0,1) and its velocity is (m->vel,0,0)
      
      hyperpoint velvec = hpxyz(m->vel, 0, 0);
      
      hyperpoint sep = hpxyz(0, 0, 0);
      int sep_count = 0;

      hyperpoint align = hpxyz(0, 0, 0);
      int align_count = 0;
      
      hyperpoint coh = hpxyz(0, 0, 0);
      int coh_count = 0;
      
      for(auto& p: relmatrices[m->base]) {
        auto f = monsat.find(p.first);
        if(f != monsat.end()) for(auto m2: f->second) if(m != m2) {
          ld vel2 = m2->vel;
          transmatrix at2 = I * p.second * m2->at;

          // at2 is like m2->at but relative to m->at
          
          // m2's position relative to m (tC0 means *(0,0,1))
          hyperpoint ac = inverse_exp(tC0(at2));
          if(use_rot) ac = Rot * ac;
          
          // distance and azimuth to m2
          ld di = hypot_d(WDIM, ac);

          color_t col = 0;
            
          if(di < align_range) {
            // we need to transfer m2's velocity vector to m's position
            // this is done by applying an isometry which sends m2 to m1
            // and maps the straight line on which m1 and m2 are to itself
            
            // note: in nonisotropic it is not clear whether we should
            // use gpushxto0, or parallel transport along the shortest geodesic
            align += gpushxto0(tC0(at2)) * at2 * hpxyz(vel2, 0, 0);
            align_count++;
            col |= 0xFF0040;
            }
          
          if(di < coh_range) {
            coh += tangent_length(ac, di);
            coh_count++;
            col |= 0xFF40;
            }
          
          if(di < sep_range && di > 0) {
            sep -= tangent_length(ac, 1 / di);
            sep_count++;
            col |= 0xFF000040;
            }
          
          if(col && draw_lines)
            lines.emplace_back(m->pat * C0, m->pat * at2 * C0, col);          
          }
        }
      
      // a bit simpler rules than original
      
      if(sep_count) velvec += sep * (d * sep_factor / sep_count);
      if(align_count) velvec += align * (d * align_factor / align_count);
      if(coh_count) velvec += coh * (d * coh_factor / coh_count);
      
      // hypot2 is the length of a vector in R^2
      vels[i] = hypot_d(2, velvec);
      
      transmatrix alphaspin = rspintox(velvec); // spin(-atan2(velvec));

      if(vels[i] > max_speed) { 
        velvec = velvec * (max_speed / vels[i]);
        vels[i] = max_speed;
        }      
      
      pats[i] = m->at;
      oris[i] = m->ori;
      rotate_object(pats[i], oris[i], alphaspin);
      
      apply_parallel_transport(pats[i], oris[i], xtangent(vels[i] * d));
      fixmatrix(pats[i]);
      
      /* RogueViz does not correctly rotate them */
      if(prod) {
        hyperpoint h = oris[i] * xtangent(1);
        pats[i] = pats[i] * spin(-atan2(h[1], h[0]));
        oris[i] = spin(+atan2(h[1], h[0])) * oris[i];
        }
      
      } return 0; });
      
    for(int i=0; i<N; i++) {
      vertexdata& vd = vdata[i];
      auto m = vd.m;
      // these two functions compute new base and at, based on pats[i]
      m->at = pats[i];
      m->ori = oris[i];
      virtualRebase(m);
      m->vel = vels[i];
      }
    shmup::fixStorage();
    
    }

  bool turn(int delta) {
    if(vizid != &flock_id) return false;
    simulate(delta), timetowait = 0;
    
    if(follow) {

      if(follow == 1) {
        gmatrix.clear();
        vdata[0].m->pat = View * calc_relative_matrix(vdata[0].m->base, centerover, C0) * vdata[0].m->at;
        View = inverse(vdata[0].m->pat) * View;
        if(prod) {
          NLP = inverse(vdata[0].m->ori);
          
          NLP = hr::cspin(1, 2, 90 * degree) * spin(90 * degree) * NLP;

          if(NLP[0][2]) {
            auto downspin = -atan2(NLP[0][2], NLP[1][2]);
            NLP = spin(downspin) * NLP;
            }
          }          
        else {
          View =spin(90 * degree) * View;
          if(GDIM == 3) {
            View = hr::cspin(1, 2, 90 * degree) * View;
            }
          }        
        }

      if(follow == 2) {
        // we take the average in R^3 of all the boid positions of the Minkowski hyperboloid
        // (in quotient spaces, the representants closest to the current view
        // are taken), and normalize the result to project it back to the hyperboloid
        // (the same method is commonly used on the sphere AFAIK)
        hyperpoint h = Hypc;
        int cnt = 0;
        ld lev = 0;
        for(int i=0; i<N; i++) if(gmatrix.count(vdata[i].m->base)) {
          vdata[i].m->pat = gmatrix[vdata[i].m->base] * vdata[i].m->at;
          auto h1 = tC0(vdata[i].m->pat);
          cnt++;          
          if(prod) {
            auto d1 = product_decompose(h1);
            lev += d1.first;
            h += d1.second;
            }
          else
            h += h1;
          }
        if(cnt) {
          h = normalize_flat(h);
          if(prod) h = zshift(h, lev / cnt);
          View = inverse(actual_view_transform) * gpushxto0(h) * actual_view_transform * View;
          }
        }

      optimizeview();
      compute_graphical_distance();
      gmatrix.clear();
      playermoved = false;
      }

    return false;
    // shmup::pc[0]->rebase();
    }
  
  #if CAP_COMMANDLINE
  int readArgs() {
    using namespace arg;
             
  // options before reading
    if(0) ;
    else if(argis("-flocking")) {
      PHASEFROM(2);
      shift(); N = argi();
      init();
      }
    else if(argis("-cohf")) {
      shift(); coh_factor = argf();
      }
    else if(argis("-alignf")) {
      shift(); align_factor = argf();
      }
    else if(argis("-sepf")) {
      shift(); sep_factor = argf();
      }
    else if(argis("-checkr")) {
      shift(); check_range = argf();
      }
    else if(argis("-cohr")) {
      shift(); coh_range = argf();
      }
    else if(argis("-alignr")) {
      shift(); align_range = argf();
      }
    else if(argis("-sepr")) {
      shift(); sep_range = argf();
      }
    else if(argis("-flockfollow")) {
      shift(); follow = argi();
      }
    else if(argis("-flockprec")) {
      shift(); precision = argi();
      }
    else if(argis("-flockshape")) {
      shift(); shape = argcs()[0];
      for(int i=0; i<N; i++) 
        vdata[i].cp.shade = shape;
      }
    else if(argis("-flockspd")) {
      shift(); ini_speed = argf();
      shift(); max_speed = argf();
      }
    #ifdef USE_THREADS
    else if(argis("-threads")) {
      shift(); threads = argi();
      }
    #endif
    else return 1;
    return 0;
    }
  
  void flock_marker() {
    if(draw_lines)
      for(auto p: lines) queueline(get<0>(p), get<1>(p), get<2>(p), 0);
    }

  void show() {
    cmode = sm::SIDE | sm::MAYDARK;
    gamescreen(0);
    dialog::init(XLAT("flocking"), iinf[itPalace].color, 150, 0);
    
    dialog::addSelItem("initial speed", fts(ini_speed), 'i');
    dialog::add_action([]() {
      dialog::editNumber(ini_speed, 0, 2, .1, .5, "", "");
      });
  
    dialog::addSelItem("max speed", fts(max_speed), 'm');
    dialog::add_action([]() {
      dialog::editNumber(max_speed, 0, 2, .1, .5, "", "");
      });

    dialog::addSelItem("separation factor", fts(sep_factor), 's');
    dialog::add_action([]() {
      dialog::editNumber(sep_factor, 0, 2, .1, 1.5, "", "");
      });
    
    string rangehelp = "Increasing this parameter may also require increasing the 'check range' parameter.";
  
    dialog::addSelItem("separation range", fts(sep_range), 'S');
    dialog::add_action([rangehelp]() {
      dialog::editNumber(sep_range, 0, 2, .1, .5, "", rangehelp);
      });
  
    dialog::addSelItem("alignment factor", fts(align_factor), 'a');
    dialog::add_action([]() {
      dialog::editNumber(align_factor, 0, 2, .1, 1.5, "", "");
      });
  
    dialog::addSelItem("alignment range", fts(align_range), 'A');
    dialog::add_action([rangehelp]() {
      dialog::editNumber(align_range, 0, 2, .1, .5, "", rangehelp);
      });
  
    dialog::addSelItem("cohesion factor", fts(coh_factor), 'c');
    dialog::add_action([]() {
      dialog::editNumber(coh_factor, 0, 2, .1, 1.5, "", "");
      });
  
    dialog::addSelItem("cohesion range", fts(coh_range), 'C');
    dialog::add_action([rangehelp]() {
      dialog::editNumber(coh_range, 0, 2, .1, .5, "", rangehelp);
      });
  
    dialog::addSelItem("check range", fts(check_range), 't');
    dialog::add_action([]() {
      ld radius = 0;
      for(cell *c: currentmap->allcells())
      for(int i=0; i<c->degree(); i++) {
        hyperpoint h = nearcorner(c, i);
        radius = max(radius, hdist0(h));
        }
      dialog::editNumber(check_range, 0, 2, .1, .5, "", 
        "Value used in the algorithm: "
        "only other boids in cells whose centers are at most 'check range' from the center of the current cell are considered. "
        "Should be more than the other ranges by at least double the cell radius (in the current geometry, double the radius is " + fts(radius*2) + "); "
        "but too large values slow the simulation down.\n\n"
        "Restart the simulation to apply the changes to this parameter. In quotient spaces, the simulation may not work correctly when the same cell is in range check_range "
        "in multiple directions."
        );
      });
  
    dialog::addSelItem("number of boids", its(N), 'n');
    dialog::add_action([]() {
      dialog::editNumber(N, 0, 1000, 1, 20, "", "");
      });

    dialog::addSelItem("precision", its(precision), 'p');
    dialog::add_action([]() {
      dialog::editNumber(precision, 0, 1000, 1, 10, "", "smaller number = more precise simulation");
      });

    dialog::addSelItem("change geometry", XLAT(ginf[geometry].shortname), 'g');
    hr::showquotients = true;
    dialog::add_action(runGeometryExperiments);

    dialog::addBoolItem_action("draw forces", draw_lines, 'l');
  
    dialog::addSelItem("follow", follow_names[follow], 'f');
    dialog::add_action([] () { follow++; follow %= 3; });
  
    dialog::addBreak(100);

    dialog::addItem("restart", 'r');
    dialog::add_action(init);

    dialog::addBack();
    dialog::display();
    }
    
  void o_key(o_funcs& v) {
    if(vizid == &flock_id) v.push_back(named_dialog("flocking", show));
    }

  auto hooks  = 
    addHook(hooks_args, 100, readArgs) +
    addHook(shmup::hooks_turn, 100, turn) + 
    addHook(hooks_frame, 100, flock_marker) +
    addHook(hooks_o_key, 80, o_key) +
    0;
  #endif

  }

}
