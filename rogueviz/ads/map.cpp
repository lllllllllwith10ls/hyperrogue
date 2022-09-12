namespace hr {

namespace ads_game {

enum eObjType { oRock, oMissile, oParticle };

struct ads_object {
  eObjType type;
  cell *owner;
  ads_matrix at;
  color_t col;
  
  ld life_start, life_end;
  cross_result pt_main;
  vector<cross_result> pts;
  
  ads_object(eObjType t, cell *_owner, const ads_matrix& T, color_t _col) : type(t), owner(_owner), at(T), col(_col) { 
    life_start = -HUGE_VAL;
    life_end = HUGE_VAL;
    }
  };

enum eWalltype { wtNone, wtDestructible, wtSolid, wtGate };

struct cellinfo {
  int mpd_terrain; /* 0 = fully generated terrain */
  int rock_dist; /* rocks generated in this radius */
  vector<ads_object> rocks;
  eWalltype type;
  cellinfo() {
    mpd_terrain = 4;
    rock_dist = -1;
    type = wtNone;
    }
  };

std::unordered_map<cell*, cellinfo> ci_at;

using worldline_visitor = std::function<bool(cell*, ld)>;

void compute_life(cell *c, transmatrix S1, const worldline_visitor& wv) {
  ld t = 0;

  int iter = 0;
  cell *cur_c = c;
  auto cur_w = hybrid::get_where(c);
  while(t < 2 * M_PI) {
    iter++;
    auto last_w = cur_w;
    auto next_w = cur_w;
    transmatrix next_S1;
    ld next_t;
    ld last_time = t;
    cell *next_c = nullptr;
    binsearch(t, t+M_PI/2, [&] (ld t1) { 
      S1 = S1 * chg_shift(t1 - last_time);
      last_time = t1;
      virtualRebase(cur_c, S1);
      cur_w = hybrid::get_where(cur_c);
      if(cur_w.first != last_w.first) {
        next_c = cur_c;
        next_w = cur_w;
        next_S1 = S1;
        next_t = t1;
        return true;
        }
      return false;
      }, 20);
    if(!next_c) return;
    S1 = next_S1;
    cur_w = next_w;
    t = next_t;
    cur_c = next_c;
    if(iter > 1000) {
      println(hlog, "compute_life c=", cur_c, " w=", cur_w, "t=", t, " S1=", S1);
      fixmatrix_ads(S1);
      }
    if(iter > 1100) break;
    if(wv(cur_w.first, t)) break;
    }
  }

map<int, int> genstats;

int gen_budget;

void gen_terrain(cell *c, cellinfo& ci, int level = 0) {
  if(level >= ci.mpd_terrain) return;
  if(ci.mpd_terrain > level + 1) gen_terrain(c, ci, level+1);
  forCellCM(c1, c) gen_terrain(c1, ci_at[c1], level+1);
  genstats[level]++;
  
  if(level == 2) {
    int r = hrand(100);
    if(r < 5) {
      forCellCM(c1, c) if(hrand(100) < 50)
        forCellCM(c2, c1)  if(hrand(100) < 50)
          if(ci_at[c2].type == wtNone) ci_at[c2].type = wtDestructible;
      }
    else if(r < 10) {
      forCellCM(c1, c) if(hrand(100) < 50)
        forCellCM(c2, c1)  if(hrand(100) < 50)
          if(ci_at[c2].type < wtSolid)
            ci_at[c2].type = wtSolid;
      }
    else if(r < 12)
      ci_at[c].type = wtGate;
    }
  ci.mpd_terrain = level;
  }

void gen_rocks(cell *c, cellinfo& ci, int radius) {
  if(radius <= ci.rock_dist) return;
  if(ci.rock_dist < radius - 1) gen_rocks(c, ci, radius-1);
  forCellCM(c1, c) gen_rocks(c1, ci_at[c1], radius-1);
  if(geometry != gNormal) { println(hlog, "wrong geometry detected in gen_rocks 1!");  exit(1); }

  if(radius == 0) {
    hybrid::in_actual([&] {
      int q = rpoisson(.25);
      
      auto add_rock = [&] (ads_object&& r) {
        if(geometry != gRotSpace) { println(hlog, "wrong geometry detected in gen_rocks 2!");  exit(1); }
        compute_life(hybrid::get_at(c, 0), unshift(r.at), [&] (cell *c, ld t) {
          auto& ci = ci_at[c];
          hybrid::in_underlying_geometry([&] { gen_terrain(c, ci); });
          ci.type = wtNone;
          return false;
          });
        ci.rocks.emplace_back(r);
        };
      
      for(int i=0; i<q; i++) {
        int kind = hrand(100);
        if(kind < 50) 
          add_rock(ads_object(oRock, c, ads_matrix(rots::uxpush(randd() * .6 - .3) * rots::uypush(randd() * .6 - .3)), 0xC0C0C0FF));
        else
          add_rock(ads_object(oRock, c, ads_matrix(rots::uypush(randd() * .6 - .3) * lorentz(0, 3, 0.5 + randd() * 1)), 0xC04040FF));
        }        
      });
    }
  ci.rock_dist = radius;
  }

void gen_particles(int qty, cell *c, shiftmatrix from, color_t col, ld t) {
  auto& ro = ci_at[c].rocks;
  for(int i=0; i<qty; i++) {
    ro.emplace_back(ads_object{oParticle, c, from * spin(randd() * TAU) * lorentz(0, 2, 1 + randd()), col });
    auto& r = ro.back();
    r.life_end = randd() * t;
    r.life_start = 0;
    }
  }

void handle_crashes() {
  vector<ads_object*> missiles;
  vector<ads_object*> rocks;
  for(auto m: displayed) {
    if(m->type == oMissile)
      missiles.push_back(m);
    if(m->type == oRock)
      rocks.push_back(m);
    }
  hybrid::in_underlying_geometry([&] {
    for(auto m: missiles) {
      hyperpoint h = kleinize(m->pt_main.h);
      for(auto r: rocks) {
        int winding = 0;
        vector<hyperpoint> kleins;
        for(auto& p: r->pts) kleins.push_back(kleinize(p.h) - h);
        auto take = [&] (hyperpoint& a, hyperpoint& b) {
          if(asign(a[1], b[1]) && xcross(b[0], b[1], a[0], a[1]) < 1e-6)
            winding++;
          };
        for(int i=1; i<isize(kleins); i++) take(kleins[i-1], kleins[i]);
        take(kleins.back(), kleins[0]);
        if(winding & 1) {
          println(hlog, "winding = ", winding);
          println(hlog, "kleins = ", kleins);
          m->life_end = m->pt_main.shift;
          r->life_end = r->pt_main.shift;
          hybrid::in_actual([&] {
            gen_particles(8, m->owner, m->at * ads_matrix(Id, m->life_end), missile_color, 0.1);
            gen_particles(8, r->owner, r->at * ads_matrix(Id, r->life_end), r->col, 0.5);
            });
          }
        }
      }
    });
  }

}}