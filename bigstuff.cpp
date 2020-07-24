// Hyperbolic Rogue -- Big Stuff
// Copyright (C) 2011-2018 Zeno Rogue, see 'hyper.cpp' for details

/** \file bigstuff.cpp 
 *  \brief Large map structures, such as (horo)cycles and equidistants.
 *
 *   This file implements:
 *   * routines related to (horo)cycles
 *   * routines related to equidistants
 *   * 'setland' routines for other geometries
 *   * the buildBigStuff function which calls equidistant/(horo)cycle/barrier generators.
 *  This routines are general, i.e., not necessarily Steam-specific.
 */

#include "hyper.h"
namespace hr {

// horocycles

EX int newRoundTableRadius() {
  return 28 + 2 * items[itHolyGrail];
  }

EX int getAnthraxData(cell *c, bool b) {
  int d = celldistAlt(c);
  int rad = 28 + 3 * camelot::anthraxBonus;
  while(d < -rad) { 
    d += rad + 12;
    rad += 3;
    }
  while(d >= 12) {
    if(rad > 5) rad -= 3;
    else if(rad) rad--;
    d -= rad + 12;
    }
  if(b) return rad;
  return d;
  }

EX int roundTableRadius(cell *c) {
  if(eubinary) return 28;
  if(tactic::on) return getAnthraxData(c, true);
  if(!c->master->alt) return 28;
  return c->master->alt->alt->emeraldval & GRAIL_RADIUS_MASK;
  }

EX int celldistAltRelative(cell *c) {
  #if CAP_CRYSTAL
  if(cryst) return crystal::dist_relative(c);
  #endif
  #if MAXMDIM >= 4
  if(euc::in(3)) return euc::dist_relative(c);
  #endif
  if(euclid && quotient) return celldistAlt(c) - roundTableRadius(c);
  if(sphere || quotient) {
    return celldist(c) - 3;
    }
  if(tactic::on) return getAnthraxData(c, false);
  return celldistAlt(c) - roundTableRadius(c);
  }

EX gp::loc camelot_coords() { return gp::loc(a4 ? 21 : 20, 10); }

EX int euclidAlt(short x, short y) {
  if(among(specialland, laTemple, laClearing, laCanvas)) {
    if(euc::in(2,6))
      return max(int(x), x+y);
    else if(PURE)
      return x + abs(y);
    else
      return max(x, y);
    }
  else if(specialland == laCaribbean || specialland == laWhirlpool || specialland == laMountain) {
    if(euc::in(2,6))
      return 
        min(
          min(max(int(-x), -x-y) + 3,
          max(int(x+y), int(y)) + 3),
          max(int(x), int(-y)) + 3
          );
    else if(PURE)
      return 3 - min(abs(x-y), abs(x+y));
    else
      return 3 - min(abs(x), abs(y));
    }
  else if(specialland == laPrincessQuest)
    return euc::dist(gp::loc(x,y), princess::coords());
  else return euc::dist(gp::loc(x,y), camelot_coords());
  }

EX int cylinder_alt(cell *c) {
  if(specialland == laPrincessQuest)
    return celldistance(c, euc::at(princess::coords()));
  if(specialland == laCamelot)
    return celldistance(c, euc::at(camelot_coords()));
  
  int maxmul = 0;
  for(int d = 0; d < SG6; d++)
    maxmul = max(maxmul, euc::dcross(euc::sdxy(), gp::eudir(d)));
  return 5-abs(gdiv(euc::dcross(euc::sdxy(), euc2_coordinates(c)), maxmul));
  }

const int NOCOMPASS = 1000000;

EX int compassDist(cell *c) {
  if(sphere || quotient) return 0;
  if(eubinary || c->master->alt) return celldistAlt(c);
  if(isHaunted(c->land) || c->land == laGraveyard) return getHauntedDepth(c);
  return NOCOMPASS;
  }

EX cell *findcompass(cell *c) {
  int d = compassDist(c);
  if(d == NOCOMPASS) return NULL;
  
  while(inscreenrange(c)) {
    if(!eubinary && !sphere && !quotient)
      currentmap->generateAlts(c->master);
    forCellEx(c2, c) if(compassDist(c2) < d) {
      c = c2;
      d = compassDist(c2);
      goto nextk;
      }
    break;
    nextk: ;
    }
  
  return c;
  }

EX bool grailWasFound(cell *c) {
  if(eubinary || quotient || sphere) return items[itHolyGrail];
  return c->master->alt->alt->emeraldval & GRAIL_FOUND;
  }

EX int default_levs() {
  if(IRREGULAR)
    return 1;
  if(S3 >= OINF)
    return 1;
  #if MAXMDIM >= 4
  if(reg3::in_rule()) return 0;
  #endif
  return S3-3;
  }

void hrmap::generateAlts(heptagon *h, int levs, bool link_cdata) {
  if(hybri) { PIU ( generateAlts(h, levs, link_cdata) ); }
  if(!h->alt) return;
  preventbarriers(h->c7);
  if(h->c7) forCellEx(c2, h->c7) preventbarriers(c2);
  if(GOLDBERG)
    for(int i=0; i<S7; i++) preventbarriers(createStep(h, i)->c7);
  for(int i=0; i<h->type; i++) 
    createStep(h->alt, i)->alt = h->alt->alt;
  int relspin = -4; // for horocycles it must go the other way
  if(quotient) relspin = 0;
  #if MAXMDIM >= 4
  else if(reg3::in_rule()) relspin = 0;
  #endif
  else {
  for(int j=0; j<h->type; j++) for(int i=0; i<h->type; i++) {
    createStep(h, i);
    if(h->move(i)->alt == h->alt->move(j)) {
      relspin = (i-j+S7) % S7;
      break;
      }
    }
  if(relspin == -4 && geometry != gFieldQuotient) {
    if(h->alt != h->alt->alt) {
      printf("relspin {%p:%p}\n", hr::voidp(h->alt), hr::voidp(h->alt->alt));
      {for(int i=0; i<S7; i++) printf("%p ", hr::voidp(h->alt->move(i)));} printf(" ALT\n");
      {for(int i=0; i<S7; i++) printf("%p ", hr::voidp(h->move(i)));} printf(" REAL\n");
      {for(int i=0; i<S7; i++) printf("%p ", hr::voidp(h->move(i)->alt));} printf(" REAL ALT\n");
      }
    relspin = 3;
    } }
  // h[relspin] matches alt[0]
//printf("{%d~%d}\n", h->distance, h->alt->distance);
  if(h->type != h->alt->type) return;
  for(int i=0; i<h->type; i++) {
    int ir = gmod(i-relspin, h->type);
    heptagon *hm = h->alt->move(ir);
    heptagon *ho = createStep(h, i);
//  printf("[%p:%d ~ %p:%d] %p ~ %p\n", 
//    hr::voidp(h), i, hr::voidp(h->alt), ir, 
//    hr::voidp(ho), hr::voidp(hm));
    if(ho->alt && ho->alt != hm) {
      if(ho->alt->alt == hm->alt && !quotient) {
        printf("ERROR: alt cross! [%d -> %d]\n", ho->alt->distance, hm->distance);
        // exit(1);
        }
      continue;
      }
    ho->alt = hm;
    if(link_cdata) hm->cdata = (cdata*) ho;
    if(levs) currentmap->generateAlts(ho, levs-1, link_cdata);
    if(S3 >= OINF) preventbarriers(ho->c7);
    }
  }

#if MAXMDIM >= 4
EX int hrandom_adjacent(int d) {
  vector<int> choices = {d};
  for(int a=0; a<S7; a++) if(cgi.dirs_adjacent[d][a]) choices.push_back(a);
  return hrand_elt(choices, d);
  }
#endif

EX heptagon *createAlternateMap(cell *c, int rad, hstate firststate, int special IS(0)) {

  if(hybri) {
    if(hybrid::under_class() == gcSphere) return NULL;
    c = hybrid::get_where(c).first;
    return PIU ( createAlternateMap(c, rad, firststate, special) );
    }

  // check for direction
  int gdir = -1;
  for(int i=0; i<c->type; i++) {
    #if MAXMDIM >= 4
    if(!reg3::in_rule()) {
    #else
    if(true) {
    #endif
      if(c->move(i) && c->move(i)->mpdist < c->mpdist) gdir = i;
      }
    else {
      /* mpdist may be incorrect */
      if(c->move(i) && c->move(i)->master->distance < c->master->distance) gdir = i;
      }
    }
  if(gdir < 0) return NULL;
  
  // non-crossing in weird hyperbolic
  if(weirdhyperbolic) {
    if(c->bardir == NOBARRIERS) return NULL;
    forCellCM(c1, c) if(c1->bardir == NOBARRIERS) return NULL;
    if(IRREGULAR)
      for(int i=0; i<S7; i++)
        if(createStep(c->master, i)->c7->bardir != NODIR)
          return NULL;
    }
  
  // check for non-crossing
  int bd = 2;
  cellwalker bb(c, bd);
  if(!weirdhyperbolic && !(checkBarriersFront(bb) && checkBarriersBack(bb))) {
    return NULL;
    }
  
  // if we always go to the opposite tile on a {even,x} tiling,
  // it will be too easy
  int flip = 0;
  if(WDIM == 2 && S7 % 2 == 0) flip = hrand(2) ? 1 : -1;

  // okay, let's go then!
  cellwalker bf(c, gdir);
  std::vector<cell *> cx(rad+1);
  for(int i=0; i<rad; i++) {
    cx[i] = bf.at;
    bf += revstep;
    if(flip && hrand(2) == 0) { bf += flip; flip *= -1; }

    #if MAXMDIM >= 4
    // in 3D honeycombs we vary the direction, but never for three successive i's
    if(WDIM == 3 && firststate == hsOrigin && (i%3))
      bf.spin = hrandom_adjacent(bf.spin);
    #endif
    }
  cx[rad] = bf.at;
  heptagon *h = bf.at->master;

  if(h->alt) {
    printf("Error: creatingAlternateMap while one already exists\n");
    return NULL;
    }
  
  if(special == waPalace) {  
  
    // type 7 is ensured
    cell *c = bf.at;
    
    if(cdist50(c) != 0) return NULL;
    if(!polarb50(c)) return NULL;
    }
  
  heptagon *alt = tailored_alloc<heptagon> (h->type);
  allmaps.push_back(newAltMap(alt));
//printf("new alt {%p}\n", hr::voidp(alt));
  alt->s = firststate;
  alt->emeraldval = 0;
  alt->zebraval = 0;
  alt->distance = 0;
  alt->fieldval = 0;
  if(hybri) alt->fieldval = hybrid::get_where(centerover).second;
  alt->c7 = NULL;
  alt->alt = alt;
  #if MAXMDIM >= 4
  if(reg3::in_rule()) {
    reg3::link_structures(h, alt, firststate);
    if(alt->fiftyval == -1) return nullptr; /* unlinked */
    }
  #endif
  h->alt = alt;
  alt->cdata = (cdata*) h;
  currentmap->link_alt(bf);

  for(int d=rad; d>=0; d--) {
    currentmap->generateAlts(cx[d]->master);  
    preventbarriers(cx[d]);
    }

  if(special == waPalace) {

    cell *c = bf.at;

    princess::generating = true;
    c->land = laPalace;
    for(int j=BARLEV; j>=0; j--)
      setdist(c, j, NULL);
    princess::generating = false;
    
    princess::newInfo(c);
    princess::forceMouse = false;  

    if(princess::gotoPrincess && cheater) princess::gotoPrincess=false, cwt.at = c;
    }
  
  return alt;
//for(int d=rad; d>=0; d--) printf("%3d. %p {%d}\n", d, hr::voidp(cx[d]->master), cx[d]->master->alt->distance);
  }

EX void beCIsland(cell *c) {
  int i = hrand(3);
  if(i == 0) c->wall = waCIsland;
  if(i == 1) c->wall = waCIsland2;
  if(i == 2) c->wall = waCTree;
  return;
  }

EX void generateTreasureIsland(cell *c) {
  if(!eubinary) currentmap->generateAlts(c->master);
  if(isOnCIsland(c)) return;
  
  bool src = hrand(100) < 10;
  if(src) {
    beCIsland(c);
    if(c->wall == waCTree) return;
    }
  vector<cell*> ctab;
  int qlo, qhi;
  for(int i=0; i<c->type; i++) {
    cell *c2 = createMov(c, i);
    if(!eubinary) currentmap->generateAlts(c2->master);
    if((eubinary || (c->master->alt && c2->master->alt)) && celldistAlt(c2) < celldistAlt(c)) {
      ctab.push_back(c2);
      qlo = i; qhi = i;
      while(true && isize(ctab) < c->type) {
        qlo--;
        c2 = c->cmodmove(qlo);
        if(!eubinary && !c2->master->alt) break;
        if(celldistAlt(c2) >= celldistAlt(c)) break;
        ctab.push_back(c2);
        }
      while(true && isize(ctab) < c->type) {
        qhi++;
        c2 = c->cmodmove(qhi);
        if(!eubinary && !c2->master->alt) break;
        if(celldistAlt(c2) >= celldistAlt(c)) break;
        ctab.push_back(c2);
        }
      break;
      }
    }
  if(ctab.empty()) { 
    printf("NO QC\n"); c->wall = waSea; 
    for(int i=0; i<c->type; i++) printf("%d ", celldistAlt(c->move(i)));
    printf("vs %d\n", celldistAlt(c));
    return; 
    }
  cell* c2 = c->cmodmove((qlo+qhi)/2);
  generateTreasureIsland(c2);
  if(!src) {
    c->wall = c2->wall;
    if(c->wall != waCTree && hrand(100) < 15)
      c->wall = (c->wall == waCIsland ? waCIsland2 : waCIsland);
    }
  if(src && c2->wall == waCTree && (eubinary||c->master->alt) && celldistAlt(c) <= -10 && geometry != gRhombic3) {
    bool end = true;
    for(cell *cc: ctab) {
      generateTreasureIsland(cc);
      if(cc->wall != waCTree)
        end = false;
      }
    // printf("%p: end=%d, qc=%d, dist=%d\n", hr::voidp(c), end, qc, celldistAlt(c));
    if(end) c->item = itPirate;
    else c->item = itCompass;
    }
  }

// equidistants 

EX bool generatingEquidistant = false;

EX cell *buildAnotherEquidistant(cell *c, int radius) {
  int gdir = -1;
  for(int i=0; i<c->type; i++) {
    if(c->move(i) && c->move(i)->mpdist < c->mpdist) gdir = i;
    }
  if(gdir == -1) return NULL;
  
  cellwalker cw(c, (gdir+3) % c->type);
  vector<cell*> coastpath;
  
  while(isize(coastpath) < radius || (cw.at->type != 7 && !weirdhyperbolic)) {
    // this leads to bugs for some reason!
    if(cw.at->land == laCrossroads2) {
#ifdef AUTOPLAY
      if(doAutoplay) printf("avoiding the Crossroads II\n"); // todo
#endif
      return NULL;
      }
    if(cw.at->bardir != NODIR) return NULL;
    if(cw.at->landparam && cw.at->landparam < radius) return NULL;

    /* forCellEx(c2, cw.at) if(c2->bardir != NODIR) {
      generatingEquidistant = false;
      return;
      } */
    coastpath.push_back(cw.at);
    if(cw.at->land == laNone && cw.at->mpdist <= 7) {
      raiseBuggyGeneration(cw.at, "landNone 1");
      for(int i=0; i<isize(coastpath); i++) coastpath[i]->item = itPirate;
      return NULL;
      }
    cw = cw + wstep + 3;
    if(ctof(cw.at) && hrand(2) == 0) cw++;
    }
  coastpath.push_back(cw.at);
  // printf("setdists\n");
  for(int i=1; i<isize(coastpath) - 1; i++) {
    if(coastpath[i-1]->land == laNone) {
      raiseBuggyGeneration(cwt.at, "landNone 3");
      int mpd[10];
      for(int i=0; i<10; i++) mpd[i] = coastpath[i]->mpdist;
      {for(int i=0; i<10; i++) printf("%d ", mpd[i]);} printf("\n");
      for(int i=0; i<isize(coastpath); i++) coastpath[i]->item = itPirate;
      return NULL;
      }
    setdist(coastpath[i], BARLEV, coastpath[i-1]);
    setdist(coastpath[i], BARLEV-1, coastpath[i-1]);
    if(i < isize(coastpath) - 5) {
      coastpath[i]->bardir = NOBARRIERS;
//      forCellEx(c2, coastpath[i]) c2->bardir = NOBARRIERS;
      }
    }
  
  //printf("building barrier\n");
  cell *c2 = coastpath[coastpath.size() - 1];
  int bd = 2 + (hrand(2)) * 3;
  
  bool nowall = false;
  
  if(c2->land == laNone) {
    raiseBuggyGeneration(c2, "landNone 2");
    for(int i=0; i<isize(coastpath); i++) coastpath[i]->item = itPirate;
    return NULL;
    }

  // prevent gravity anomalies
  if(c2->land != c->land) return NULL;
  
  bool oc = c->land == laOcean;
  
  // else if(ctof(c) && hrand(10000) < 20 && !isCrossroads(c->land) && gold() >= 200)
  if(oc && weirdhyperbolic && specialland == laCrossroads4 && buildBarrierNowall(c2, getNewLand(laOcean))) {
    nowall = true;
    }
  else if(oc && pseudohept(c2) && gold() >= R200 && hrand(10) < 2 && buildBarrierNowall(c2, laCrossroads4)) {
    nowall = true;
    // raiseBuggyGeneration(c2, "check");
    // return;
    }
  else if(!weirdhyperbolic) buildBarrier(c2, bd);
  //printf("building barrier II\n");
  if(hasbardir(c2)) extendBarrier(c2);

  for(int i=isize(coastpath)-(nowall?1:2); i>=0; i--) {
    for(int j=BARLEV; j>=6; j--)
      setdist(coastpath[i], j, NULL);
    }
    
  return c2;
  }

EX void buildAnotherEquidistant(cell *c) {
  //printf("building another coast\n");
  
  if(yendor::on) return;

  generatingEquidistant = true;
  
  int radius = c->land == laOcean ? 30 : HAUNTED_RADIUS + 5;

  buildAnotherEquidistant(c, radius);
  
  generatingEquidistant = false;
  }

EX int coastval(cell *c, eLand base) {
  if(!c) return UNKNOWN;
  if(c->land == laNone) return UNKNOWN;
  if(base == laGraveyard) {
    if(c->land == laHaunted || c->land == laHauntedWall)
      return 0;
    if(c->land != laGraveyard && c->land != laHauntedBorder) return 30;
    }
  else if(base == laMirrored) {
    if(!inmirror(c)) return 0;
    if(!c->landparam) return UNKNOWN;
    return c->landparam & 255;
    }
  else {
    if(c->land == laOceanWall || c->land == laCaribbean || c->land == laWhirlpool ||
      c->land == laLivefjord || c->land == laWarpSea || c->land == laKraken || c->land == laDocks || c->land == laBrownian || c->land == laHurricane)
      return 30;
    if(c->land  != laOcean && !isGravityLand(c->land) && c->land != laHaunted) {
      return 0;
      }
    }
  if(!c->landparam) return UNKNOWN;
  return c->landparam;
  }

EX bool checkInTree(cell *c, int maxv) {
  if(c->landparam <= 3) return false;
  if(!maxv && WDIM == 3 && bt::in()) {
    forCellEx(c2, c) if(c2->landflags) return true;
    }
  if(!maxv) return false;
  if(c->landflags) return true;
  forCellEx(c2, c)
    if(c2->landparam < c->landparam && checkInTree(c2, maxv-1))
      return true;
  return false;
  }

int loopval = 0;

struct loopchecker {
  loopchecker() { loopval++; }
  ~loopchecker() { loopval--; }
  };

EX void buildEquidistant(cell *c) {
  loopchecker lc;
  // sometimes crashes in Archimedean
  if(loopval > 100) { c->landparam = 0; return; }
  if(!c) return;
  if(c->landparam) return;
  /* if(weirdhyperbolic) {
    c->landparam = 50;
    return;
    } */
  if(sphere || euclid) return;
  eLand b = c->land;
  if(chaosmode && !inmirror(b)) return;
  if(!b) { 
    printf("land missing at %p\n", hr::voidp(c)); 
    describeCell(c);
    for(int i=0; i<c->type; i++) if(c->move(i))
      describeCell(c->move(i));
    // buggycells.push_back(c);
    }
  if(b == laHauntedBorder) b = laGraveyard;
  if(inmirror(b)) b = laMirrored;
  int mcv = UNKNOWN;

  // find the lowest coastval
  for(int i=0; i<c->type; i++) {
    int cv = coastval(createMov(c,i), b);
    if(cv < mcv) mcv = cv;
    }
    
  if(S3 == OINF) {
    c->landparam = mcv + 1;
    return;
    }
  
  int mcv2 = 0;
  
  if(mcv == 0) {
    // if(generatingEquidistant) printf("mcv=0\n");
    c->landparam = 1;
    }
  else if(WDIM == 3) {
    forCellCM(c2, c) if(coastval(c2, b) == mcv) 
      forCellEx(c3, c2) if(coastval(c3, b) < mcv)
        forCellCM(c4, c3) {
          if(c4->land == laNone && c2->mpdist <= BARLEV) setdist(c4, BARLEV, c2);
          buildEquidistant(c4);
          }
    forCellCM(c2, c) {
      int cv = coastval(c2, b);
      if(cv < mcv) mcv = cv;
      }
    c->landparam = mcv + 1;
    }
  else {
    // if it appears twice, increase it
    int qcv = 0;
    int sid = 0;
    for(int i=0; i<c->type; i++) 
      if(coastval(c->move(i), b) == mcv)
        qcv++, sid = i;
      
    // if(generatingEquidistant) printf("qcv=%d mcv=%d\n", qcv, mcv);
    if(qcv >= 2) c->landparam = mcv+1; // (mcv == UNKNOWN ? UNKNOWN : mcv+1);
    else {
      // if(qcv != 1) { printf("qcv = %d\n", qcv);  exit(1); }
      cell *c2 = c->move(sid);
      int bsid = c->c.spin(sid);
      for(int j=0; j<c2->type; j++) {
        int q = gmod(bsid+j, c2->type);
        cell *c3 = c2->move(q);
        if(coastval(c3, b) < mcv) {
          cell *c4 = c2->cmodmove(bsid+1);
          if(c4->land == laNone && c2->mpdist <= BARLEV) setdist(c4, BARLEV, c2);
          buildEquidistant(c4);
          mcv2 = coastval(c4, b);
          break;
          }
        q = gmod(bsid-j, c2->type);
        c3 = c2->move(q);
        if(coastval(c3, b) < mcv) {
          cell *c4 = c2->cmodmove(bsid-1);
          if(c4->land == laNone && c2->mpdist <= BARLEV) setdist(c4, BARLEV, c2);
          buildEquidistant(c4);
          mcv2 = coastval(c4, b);
          break;
          }
        }
      if(mcv2 > mcv) mcv2 = mcv;
      if(mcv2 == 0) mcv2 = mcv;
      c->landparam = mcv2+1;

      /* if(c->heat < 3)
        raiseBuggyGeneration(c, "low heat"); */
      }
    }
  
  if(!c->landparam) {
    // int z = int(c->heat);
    if(c->item || c->monst) 
      printf("building coast over %s/%s, mpdist = %d\n", iinf[c->item].name, minf[c->monst].name,
        c->mpdist);
    if(c->land == laOcean) c->wall = waSea;
    }
  
  if(c->land == laEndorian) {
    int ct = c->type;
    #if CAP_BT
    if(bt::in()) {
      int skip = geometry == gHoroRec ? 3 : 2;
      int up = bt::updir();
      if(c->landparam == 1) 
        c->landflags = (hrand(100) < 20);
      else if(WDIM == 2 && c->type == 6 && (c->landparam % 2) && c->move(bt::bd_down) && c->move(bt::bd_down)->landflags)
        c->landflags = 1;
      else if(WDIM == 2 && c->type == 7 && (c->landparam % 2 == 0)) {
        for(int d: {bt::bd_down_left, bt::bd_down_right})
          if(c->move(d) && c->move(d)->landflags)
            c->landflags = 1;
        }
      else if(WDIM == 3 && c->landparam % skip != 1 && c->move(up) && c->move(up)->landflags)
        c->landflags = 1;
      else if(WDIM == 3 && c->landparam % skip == 1 && c->move(up) && c->move(up)->c.spin(up) == (c->c.spin(up)) && c->move(up)->move(up)->landflags)
        c->landflags = 1;
      if(c->landflags) c->wall = (WDIM == 3 ? waTrunk3 : waTrunk);
      }
    else 
    #endif
    #if MAXMDIM >= 4
    if(WDIM == 3 && hyperbolic) {
      if(c->landparam == 1) 
        c->landflags = (hrand(100) < 20);
      else if(S7 == 12) {
        for(int i=0; i<S7; i++) {
          cellwalker cw(c, i);
          if(!cw.peek()) continue;
          cw += wstep;
          if(cw.at->landparam != c->landparam-1) continue;
          if(!cw.at->landflags) continue;
          if(S7 == 6) c->landflags = 1;
          else for(int j=0; j<S7; j++) if(cw.at->move(j) && cw.at->move(j)->landparam == c->landparam - 2 && !cgi.dirs_adjacent[j][cw.spin])
            if(c->landparam == 2 ? cw.at->move(j)->land != laEndorian : cw.at->move(j)->landparam)
              c->landflags = 1;
          }
        }
      else if(c->landparam == 2) {
        for(int i=0; i<S7; i++) {
          cellwalker cw(c, i);
          if(!cw.peek()) continue;
          cw += wstep;
          if(cw.at->landparam != 1) continue;
          if(!cw.at->landflags) continue;
          cw += rev;
          if(cw.peek() && cw.peek()->land != laEndorian) c->landflags = 1;
          }
        }
      else if(c->landparam % 2 == 1) {
        for(int i=0; i<S7; i++) {
          cellwalker cw(c, i);
          if(!cw.peek()) continue;
          cw += wstep;
          if(cw.at->landparam != c->landparam-1) continue;
          if(!cw.at->landflags) continue;
          if(S7 == 6) c->landflags = 1;
          else for(int j=0; j<S7; j++) if(cw.at->move(j) && cw.at->move(j)->landparam == c->landparam - 2 && !cgi.dirs_adjacent[j][cw.spin] && cw.at->move(j)->landflags)
            c->landflags = 1;
          }
        }
      else {
        for(int i=0; i<S7; i++) {
          cellwalker cw(c, i);
          if(!cw.peek()) continue;
          cw += wstep;
          if(cw.at->landparam != c->landparam-1) continue;
          if(!cw.at->landflags) continue;
          cw += rev;
          if(cw.peek() && cw.peek()->landflags) c->landflags = 1;
          }
        }
      if(c->landflags) c->wall = waTrunk3;
      }
    else
    #endif
    if(c->landparam == 1 && ctof(c)) {
      for(int i=0; i<ct; i++) {
        int i1 = (i+1) % c->type;
        if(c->move(i) && c->move(i)->land != laEndorian && c->move(i)->land != laNone)
        if(c->move(i1) && c->move(i1)->land != laEndorian && c->move(i1)->land != laNone) {
          c->landflags = 2;
          c->wall = waTrunk;
          }
        }
      }
    else if(c->landparam == 1 && !ctof(c)) {
      int ct = c->type;
      for(int i=0; i<ct; i++) {
        int i1 = (i+1) % ct;
        int i2 = (i+2) % ct;
        int i4 = (i+4) % ct;
        int i5 = (i+5) % ct;
        if(c->move(i) && c->move(i)->land == laBarrier && c->move(i)->type == 7)
        if(c->move(i1) && c->move(i1)->land != laBarrier)
        if(c->move(i2) && c->move(i2)->land != laBarrier) 
        if(c->move(i4) && c->move(i4)->land != laBarrier)
        if(c->move(i5) && c->move(i5)->land != laBarrier) {
          c->landflags = 2;
          c->wall = waTrunk;
          }

        if(c->move(i) && c->move(i)->land != laEndorian && c->move(i)->land != laNone && c->move(i)->type == 7)
        if(c->move(i1) && c->move(i1)->land != laEndorian && c->move(i1)->land != laNone)
        if(c->move(i5) && c->move(i5)->land != laEndorian && c->move(i5)->land != laNone) {
          c->landflags = 3;
          c->wall = waTrunk;
          }
        }
      }
    else if(c->landparam > 1) {
      for(int i=0; i<c->type; i++) {
        cell *c2 = c->move(i);
        if(c2 && c2->landparam < c->landparam && c2->landflags) {
          bool ok = false;
          if(c2->landflags == 3)
            ok = true;
          else if(c2->landflags == 2) {
            ok = c->modmove(i+1)->landparam != c->landparam-1
             &&  c->modmove(i-1)->landparam != c->landparam-1;
            }
          else for(int j=0; j<c2->type; j++) {
            cell *c3 = c2->move(j);
            if(c3 && c3->landparam < c2->landparam && c3->landflags)
              if(c->c.spin(i) == (j+3)%c2->type || c->c.spin(i) == (j+c2->type-3)%c2->type)
                ok = true;
            }
          if(ok) {
            c->wall = waTrunk;
            c->landflags = 1;
            }
          }
        if(c2 && c2->landparam < c->landparam && c2->landflags == 1 && ctof(c)) {
          cell *c3 = c->modmove(i+1);
          if(c3 && c3->landparam < c->landparam && c3->landflags == 1) {
            c->wall = waTrunk;
            c->landflags = 2;
            }
          }
        }
      }
    if(!c->landflags && checkInTree(c, 5)) {
      int lev = hrand(100);
      if(lev < 10) c->wall = waSolidBranch;
      else if(lev < 20) c->wall = waWeakBranch;
      else c->wall = waCanopy;
      }
    }
  
  bool chance = true;
  if(weirdhyperbolic) {
    chance = false;
    if(specialland == laCrossroads4)
      chance = hrand(100) < 10;
    }
  
  if(c->landparam > 30 && b == laOcean && !generatingEquidistant && !hybri && hrand(10) < 5 && chance) 
    buildAnotherEquidistant(c);

  if(c->landparam > HAUNTED_RADIUS+5 && b == laGraveyard && !generatingEquidistant && !hybri && hrand(100) < (PURE?25:5) && items[itBone] >= U10 && chance) 
    buildAnotherEquidistant(c);
  }

EX cell *randomDown(cell *c) {
  vector<cell*> tab;
  for(int i=0; i<c->type; i++) 
    if(c->move(i) && coastval(c->move(i), laIvoryTower) < coastval(c, laIvoryTower))
      tab.push_back(c->move(i));
  if(isize(tab)==1) return tab[0];
  return hrand_elt(tab, (cell*)nullptr);
  }

EX int edgeDepth(cell *c) {
  if(c->land == laIvoryTower || c->land == laEndorian || c->land == laDungeon || c->land == laWestWall) 
    return coastvalEdge(c);
  else if(c->land != laBarrier) {
    for(int i=0; i<c->type; i++) if(c->move(i) && c->move(i)->land == laBarrier)
      return -20+c->cpdist;
    }
  return 0;
  }

EX int getHauntedDepth(cell *c) {
  if((tactic::on || euclid) && c->land == laHaunted) return celldist(c);
  if(c->land == laHaunted) return c->landparam;
  if(c->land == laHauntedWall) return 0;
  if(c->land == laHauntedBorder || c->land == laGraveyard) return -c->landparam;
  return -100;
  }

EX int towerval(cell *c, const cellfunction& cf) {
  cell *cp1 = ts::left_of(c, cf);
  if(!cp1) return 0;  
  int under = 0;
  int cfc = cf(c);
  forCellEx(c2, c) if(cf(c2) < cfc) under++;
  return (c->type-6) + 2*(cp1->type-6) + 4*under;
  }

/* other geometries */

EX void setLandWeird(cell *c) {
  // replaced with standard CR4
  /* if(specialland == laIvoryTower || specialland == laEndorian || specialland == laDungeon || specialland == laOcean) {
    int d = celldist(c) - (getDistLimit() - 2);
    if(d <= 0) 
      c->land = laCrossroads4;
    else
      c->land = specialland, c->landparam = d;
    } */
  }

EX void setLandQuotient(cell *c) {
  setland(c, specialland);
  int fv = zebra40(c);
  if(fv/4 == 4 || fv/4 == 6 || fv/4 == 5 || fv/4 == 10) fv ^= 2;
  if(specialland == laWarpCoast)
    if(fv%4==0 || fv%4 == 2) setland(c, laWarpSea);
  if(specialland == laElementalWall)
    setland(c, eLand(laEFire + (fv%4)));
  if(specialland == laClearing)
    c->land = laClearing;
  if(specialland == laIvoryTower || specialland == laEndorian || specialland == laDungeon || specialland == laOcean) {
    int d = celldist(c) - 1;
    if(d <= 0) 
      c->land = laCrossroads4;
    else
      c->land = specialland, c->landparam = d;
    }
  if(specialland == laWestWall) c->land = laCrossroads4;
  }

EX void elementalXY(cell *c, int x, int y, bool make_wall) {
  if(x > 0 && y > 0) setland(c, laEFire);
  else if(x > 0 && y < 0) setland(c, laEAir);
  else if(x < 0 && y < 0) setland(c, laEWater);
  else if(x < 0 && y > 0) setland(c, laEEarth);
  else if(x > 0) 
    c->land = laElementalWall, c->barleft = laEAir, c->barright = laEFire;
  else if(x < 0) 
    c->land = laElementalWall, c->barleft = laEEarth, c->barright = laEWater;
  else if(y > 0) 
    c->land = laElementalWall, c->barleft = laEEarth, c->barright = laEFire;
  else if(y < 0) 
    c->land = laElementalWall, c->barleft = laEAir, c->barright = laEWater;
  if(x == 0 && y == 0)
    c->land = laElementalWall, c->wall = waBarrier;
  else if(c->land == laElementalWall && make_wall)
    c->wall = getElementalWall(hrand(2) ? c->barleft : c->barright);
  }

EX void setLandSphere(cell *c) {
  setland(c, specialland);
  if(specialland == laWarpCoast)
    setland(c, getHemisphere(c, 0) > 0 ? laWarpCoast : laWarpSea);
  if(specialland == laWestWall) c->land = laCrossroads4;
  if(specialland == laClearing)
    c->land = laClearing;
  if(specialland == laElementalWall) {
    int x = getHemisphere(c, 1);
    int y = getHemisphere(c, 2);
    elementalXY(c, x, y, (c->type != 6 || GOLDBERG));
    }
  if(!(euclid && quotient))
  if(specialland == laCrossroads || specialland == laCrossroads2 || specialland == laCrossroads3 || specialland == laTerracotta) {
    int x = getHemisphere(c, 1);
    if(x == 0 && specialland == laTerracotta)
      setland(c, laMercuryRiver), c->wall = waMercury;
    else if(x == 0 || (specialland == laCrossroads3 && getHemisphere(c, 2) == 0)) 
      setland(c, laBarrier), c->wall = waBarrier;
    else setland(c, specialland);
    if(specialland == laCrossroads3 && c->type != 6 && c->master->fiftyval == 1 && !GOLDBERG)
      c->wall = waBigTree;        
    }
  if(specialland == laIvoryTower || specialland == laEndorian || specialland == laDungeon || specialland == laOcean || specialland == laMountain) {
    int d = celldist(c);
    if(d <= 0) 
      c->land = laCrossroads4;
    else
      c->land = specialland, c->landparam = d;
    }
  }

vector<eLand> euland;
map<int, eLand> euland3;
map<int, eLand> euland3_hash;

EX eLand& get_euland(int c) {
  euland.resize(max_vec);
  return euland[c & (max_vec-1)];
  }

EX void clear_euland(eLand first) {
  euland.resize(max_vec);
  for(int i=0; i<max_vec; i++) euland[i] = laNone;
  if(!nonisotropic && !hybri) euland[0] = euland[1] = euland[max_vec-1] = first;
  euland3.clear();
  euland3[0] = laCrossroads;
  }

bool valid_wall_at(int c) {
  if(nonisotropic || hybri) return true;
  return short(c) % 3 == 0;
  }
  
EX eLand switchable(eLand nearland, eLand farland, int c) {
  if(chaosmode) {
    if(hrand(6) == 0)
      return getNewLand(nearland);
    return nearland;
    }
  else if(specialland == laCrossroads4) {
    if((dual::state && nearland == laCrossroads4) || hrand(15) == 0)
      return getNewLand(nearland);
    if(nearland == laCrossroads4 && (nonisotropic || hybri))
      return getNewLand(nearland);
    return nearland;
    }
  else if(nearland == laCrossroads && nonisotropic) {
    return laBarrier;
    }
  else if(nearland == laCrossroads) {
    if(hrand(4) == 0 && valid_wall_at(c))
      return laBarrier;
    return laCrossroads;
    }
  else if(nearland == laBarrier) {
    return getNewLand(farland);
    }
  else {
    if(hrand(20) == 0 && valid_wall_at(c))
      return laBarrier;
    return nearland;
    }
  }

EX eLand getEuclidLand(int c) {
  if(nonorientable && c < 0) c = -c;
  auto& la = get_euland(c);
  if(la) return la;
  if(get_euland(c-2) && !get_euland(c-1)) getEuclidLand(c-1);
  if(get_euland(c-1)) return 
    la = switchable(get_euland(c-1), get_euland(c-2), c);
  if(get_euland(c+2) && !get_euland(c+1)) getEuclidLand(c+1);
  if(get_euland(c+1)) return 
    la = switchable(get_euland(c+1), get_euland(c+2), c);
  return la = laCrossroads;
  }

EX void setLandSol(cell *c) {
  setland(c, specialland);
  if(chaosmode) {
    setland(c, getEuclidLand(c->master->distance));
    return;
    }
  switch(specialland) {
    case laCrossroads4: case laCrossroads: case laCrossroads2:
      setland(c, getEuclidLand(c->master->distance));
      if(c->land == laBarrier && c->master->emeraldval % 3) c->wall = waBarrier;
      break;
    case laTerracotta:
      if((c->master->distance & 15) == 1) {
        setland(c, laMercuryRiver);
        if(c->master->emeraldval % 3) c->wall = waMercury;
        }
      break;
    case laOcean: case laIvoryTower: case laEndorian: case laDungeon:
      if(c->master->distance <= 0) setland(c, laRlyeh);
      else c->landparam = c->master->distance;
      break;
    default: ;
    }
  }

EX void setLandHybrid(cell *c) {
  if(in_s2xe() && !among(specialland, laElementalWall)) {
    auto w = hybrid::get_where(c);
    auto d = w.second;
    
    setland(c, specialland);
    if(chaosmode) {
      setland(c, getEuclidLand(c->master->distance));
      return;
      }
    bool ps = PIU(pseudohept(w.first));
    switch(specialland) {
      case laCrossroads4: case laCrossroads: case laCrossroads2:
        setland(c, getEuclidLand(d));
        if(c->land == laBarrier) c->wall = ps ? waNone : waBarrier;
        break;
      case laTerracotta:
        if((d & 15) == 1) {
          setland(c, laMercuryRiver);
          c->wall = ps ? waNone : waMercury;
          }
        break;
      case laOcean: case laIvoryTower: case laEndorian: case laDungeon:
        if(d < 0) setland(c, laCrossroads);
        else if(d == 0) {
          setland(c, laBarrier); c->wall = ps ? waNone : waBarrier;
          }
        else c->landparam = d;
        break;
      default: ;
      }
    return;
    }
  auto wc = hybrid::get_where(c).first;
  c->barleft = wc->barleft;
  c->barright = wc->barright;
  c->bardir = wc->bardir;
  if(wc->land) setland(c, wc->land);
  if(among(wc->wall, waBarrier, waMercury) || wc->land == laElementalWall)
    c->wall = wc->wall;
  }

EX void setLandNil(cell *c) {
  setland(c, specialland);
  
  if(chaosmode) {
    int hash = (((c->master->zebraval + 4) >> 3) << 16) + ((c->master->emeraldval + 4) >> 3);
    auto& l = euland3_hash[hash];
    if(l == laNone) l = getNewLand(laNone);
    setland(c, l);
    return;
    }
  
  switch(specialland) {
    case laCrossroads: case laCrossroads4:
      setland(c, getEuclidLand(c->master->zebraval));
      if(c->land == laBarrier && c->master->emeraldval % 3) c->wall = waBarrier;
      break;
    case laCrossroads2: 
      setland(c, getEuclidLand(c->master->emeraldval));
      if(c->land == laBarrier && c->master->zebraval % 3) c->wall = waBarrier;
      break;
    case laCrossroads3: {
      int ox = c->master->zebraval - 8;
      int oy = c->master->emeraldval - 8;
      int hash = (((ox + 16) >> 5) << 16) + ((oy + 16) >> 5);
      auto& l = euland3_hash[hash];
      if(l == laNone) l = getNewLand(laCrossroads3);
      if(ox % 16 == 0) setland(c, laBarrier);
      else if(oy % 16 == 0) setland(c, laBarrier);
      else setland(c, l);
      if(c->land == laBarrier && ((c->master->zebraval & 3) || (c->master->emeraldval & 3))) c->wall = waBarrier;
      break;
      }
    case laElementalWall: {
      int ox = c->master->zebraval - 4;
      int oy = c->master->emeraldval - 4;
      int x = (ox & 7) ? ((ox & 8) ? 1 : -1) : 0;
      int y = (oy & 7) ? ((oy & 8) ? 1 : -1) : 0;
      elementalXY(c, x, y, (ox & 3) || (oy & 3));
      break;
      }      
    case laTerracotta:
      if((c->master->zebraval & 7) == 4 && (c->master->emeraldval & 7) == 4) {
        setland(c, laMercuryRiver);
        c->wall = waMercury;
        }
      break;
    case laOcean: case laIvoryTower: case laEndorian: case laDungeon:
      if(c->master->zebraval <= 0) setland(c, laRlyeh);
      else c->landparam = c->master->zebraval;
      break;
    default: ;
    }
  }

EX void setLandEuclid(cell *c) {
  #if CAP_RACING
  if(racing::track_ready) {
    setland(c, laMemory);
    return;
    }
  #endif
  setland(c, specialland);
  if(specialland == laCrossroads4 || chaosmode) {
    auto co = euc2_coordinates(c);
    int y = co.second;
    c->land = getEuclidLand(y);
    }
  if(specialland == laCrossroads) {
    auto co = euc2_coordinates(c);
    int x = co.first, y = co.second;
    setland(c, getEuclidLand(y+2*x));
    }
  if(specialland == laTerracotta) {
    auto co = euc2_coordinates(c);
    int x = co.first, y = co.second;
    if(((y+2*x) & 15) == 1) {
      setland(c, laMercuryRiver);
      c->wall = waMercury;
      }
    }
  if(specialland == laWhirlpool) {
    c->land = laOcean;
    c->landparam = 99;
    }
  if(specialland == laPrincessQuest) setland(c, laPalace);
  if(specialland == laOcean) {
    auto co = euc2_coordinates(c);
    int y = co.second;
    y += 10;
    if(euclid && quotient) y = -celldistAlt(c);
    if(y == 0) 
      { setland(c, laBarrier); if(ishept(c)) c->land = laRlyeh; }
    else if(y<0) setland(c, laRlyeh);
    else c->landparam = y;
    }
  if(specialland == laWestWall) {
    auto co = euc2_coordinates(c);
    int x = co.first;
    x = -5 - x;
    if(x == 0) 
      {setland(c, laBarrier); if(ishept(c)) setland(c, laMotion); }
    else if(x<0) setland(c, laMotion);
    else c->landparam = x;
    }
  if(specialland == laIvoryTower || specialland == laDungeon) {
    auto co = euc2_coordinates(c);
    int y = co.second;
    y = -5 - y;
    if(specialland == laDungeon) y = -10 - y;
    if(euclid && quotient) y = -celldistAlt(c);
    if(y == 0) 
      {setland(c, laBarrier); if(ishept(c)) setland(c, laAlchemist); }
    else if(y<0) setland(c, laAlchemist);
    else {
      c->landparam = y;
      }
    }
  if(specialland == laElementalWall) {
    auto co = euc2_coordinates(c);
    int x = co.first, y = co.second;
    int x0 = euc::in(2,4) ? x : x + (y>>1);
    int y0 = y;
    
    int id = 0;
    if(y0&16) id += 2;
    if(x0&16) id += 1;
    
    x0 += 8; y0 += 8;

    y0--; x0++;
    int id2 = 0;
    if(y0&16) id2 += 2;
    if(x0&16) id2 += 1;
    
    setland(c, eLand(laEFire + id));
    
    if(((y0&15) == 15 && (x0&1)) || ((x0&15) == 0 && ((y0+1)&1))) {
      if(c->land == laEFire) c->wall = waEternalFire;
      if(c->land == laEWater) c->wall = waSea;
      if(c->land == laEAir) c->wall = waChasm;
      if(c->land == laEEarth) c->wall = waStone;
      c->barright = c->land;
      c->barleft = eLand(laEFire+id2);
      setland(c, laElementalWall);
      }
    }
  if(specialland == laCrossroads3) {
    auto co = euc2_coordinates(c);
    int x = co.first, y = co.second;
    int y0 = euc::in(2,4) ? 2 * y - x : y; 
    int x0 = euc::in(2,4) ? 2 * x + y : x + y/2;
    
    x0 += 24; y0 += 8;
    
    int id = 0;
    if(y0&16) id ^= 1;
    if(x0&16) id ^= 1;
    
    setland(c, id ? laCrossroads3 : laDesert);
    
    if(euc::in(2,4) ? (!(y0&15) || !(x0&15)) : ((y0&15) == 15 && (x0&1)) || ((x0&15) == 0 && ((y0+1)&1))) {
      setland(c, laBarrier);
      c->wall = waBarrier;
      }
    }
  if(specialland == laWarpCoast) {
    auto co = euc2_coordinates(c);
    int x = co.first, y = co.second;
    
    int zz = a4 ? x : 2*x+y + 10;
    zz = gmod(zz, 30);
    if(zz >= 15)
      setland(c, laWarpSea);
    else
      setland(c, laWarpCoast);
    }
  }

EX eLand get_euland3(int x) {
  if(euland3.count(x)) return euland3[x]; 
  if(x > 0) return euland3[x] = getNewLand(euland3[x-1]);
  if(x < 0) return euland3[x] = getNewLand(euland3[x+1]);
  return euland3[x] = laCrossroads;
  }

EX void set_euland3(cell *c, int co10, int co11, int alt, int hash) {

  if(chaosmode) {
    setland(c, get_euland3(gdiv(co10, 60)));
    }
  
  else if(specialland == laCrossroads) {
    eLand l1 = get_euland3(gdiv(co10, 360));
    eLand l2 = get_euland3(gdiv(co10+59, 360));
    if(l1 != l2 && hrand(100) < 75) setland(c, laBarrier);
    else setland(c, l1);
    }

  else if(specialland == laCrossroads2) {
    setland(c, get_euland3(alt/4));
    }

  else if(specialland == laCrossroads3) {
    auto& l = euland3_hash[hash];
    if(l == laNone) l = getNewLand(laBarrier);
    setland(c, l);
    }

  else if(specialland == laCrossroads4) {
    setland(c, get_euland3(gdiv(co10, 360)));
    }
  
  else if(specialland == laElementalWall) {
    setland(c, eLand(laEFire + ((co10 / 240)&1?0:2) + ((co11 / 240)&1?0:1)));
    }
  
  if(specialland == laCamelot) {
    setland(c, laCrossroads);
    buildCamelot(c);
    }

  if(specialland == laTerracotta) {
    if(((alt&15) == 8) && hrand(100) < 90)
       c->wall = waMercury;
    }

  if(among(specialland, laOcean, laIvoryTower, laDungeon, laEndorian)) {
    if(alt == 0)
      c->land = laCrossroads4;
    else if(alt > 0)
      c->landparam = alt;
    else
      c->landparam = -alt;
    }
  
  if(specialland == laWarpCoast) {
    if(gmod(co10, 240) >= 120)
      c->land = laWarpSea;
    }
  }

// the main big stuff function

EX bool quickfind(eLand l) {
  if(l == cheatdest) return true;
  if(l == specialland && (weirdhyperbolic || specialland != laIce || cheater)) return true;
#if CAP_TOUR
  if(tour::on && tour::quickfind(l)) return true;
#endif
  return false;
  }

#define INVLUCK (items[itOrbLuck] && inv::on)
#define I2000 (INVLUCK?600:2000)
#define I10000 (INVLUCK?3000:10000)

EX hookset<int(cell*, bool)> hooks_wallchance;

EX int wallchance(cell *c, bool deepOcean) {
  int i = callhandlers(-1, hooks_wallchance, c, deepOcean);
  if(i != -1) return i;
  eLand l = c->land;
  return
    inmirror(c) ? 0 :
    isGravityLand(l) ? 0 :
    generatingEquidistant ? 0 :
    l == laPrairie ? 0 :
    (yendor::on && yendor::nexttostart) ? 10000 :
    princess::challenge ? 0 :
    isElemental(l) ? 4000 : 
    (yendor::on && (yendor::generating || !(yendor::clev().flags & YF_WALLS))) ? 0 :
    (S3 >= OINF && l == laCrossroads) ? 2000 :
    (S3 >= OINF && l == laCrossroads2) ? 2500 :
    (S3 >= OINF && l == laCrossroads3) ? 3333 :
    (S3 >= OINF && l == laCrossroads4) ? 5000 :
    (S3 >= OINF && l == laCrossroads5) ? 10000 :
    l == laCrossroads3 ? 10000 : 
    l == laCrossroads ? 5000 : 
    l == laCrossroads2 ? 10000 : 
    l == laCrossroads5 ? 10000 : 
    l == laCrossroads4 ? (weirdhyperbolic ? 5000 : 0) :
    (l == laMirror && !yendor::generating) ? 6000 :
    l == laTerracotta ? 250 :
    tactic::on ? 0 :
    racing::on ? 0 :
    l == laCaribbean ? 500 :
    (l == laWarpSea || l == laWarpCoast) ? 500 :
    l == laStorms ? 250 :
    l == laCanvas ? 0 :
    l == laHaunted ? 0 :
    (l == laGraveyard && !deepOcean) ? 0 :
    // (l == laGraveyard && items[itBone] >= 10) ? 120 :
    l == laOcean ? (deepOcean ? (PURE ? 250 : 2000) : 0) :
    l == laDragon ? 120 :
    50;
  }

/** should we generate the horocycles in the current geometry? */
EX bool horo_ok() {  
  if(INVERSE) return false;
  return hyperbolic && !bt::in() && !arcm::in() && !kite::in() && !experimental && !hybri;
  }

EX bool gp_wall_test() {
  #if CAP_GP
  if(GOLDBERG) return hrand(gp::dist_3()) == 0;
  #endif
  #if CAP_IRR
  if(IRREGULAR) return hrand(irr::cellcount * 3) < isize(irr::cells_of_heptagon);
  #endif
  return true;
  }

EX bool deep_ocean_at(cell *c, cell *from) {

  if(generatingEquidistant) return false;
  
  if(c->land == laOcean) {
    if(!from) return true;
    else for(int i=0; i<from->type; i++) {
      cell *c2 = from->move(i);
      if(c2 && c2->land == laOcean && c2->landparam > 30) {
        return true;
        }
      if(c2) forCellEx(c3, c2) if(c3 && c3->land == laOcean && c3->landparam > 30)
        return true;
      }
    }
  
  if(c->land == laGraveyard) {
    if(!from) return true;
    else for(int i=0; i<from->type; i++) {
      cell *c2 = from->move(i);
      if(c2 && c2->landparam > HAUNTED_RADIUS+5)
        return true;
      if(c2) forCellEx(c3, c2) if(c3 && c3->land == laGraveyard && c3->landparam > HAUNTED_RADIUS+5)
        return true;
      }
    }
  
  return false;
  }

EX bool good_for_wall(cell *c) {
  if(arcm::in()) return true;
  if(WDIM == 3) return true;
  if(INVERSE) return true;
  return pseudohept(c);
  }

EX bool walls_not_implemented() {
  return WDIM == 3 && (cgflags & qIDEAL);
  }
  
EX void buildBigStuff(cell *c, cell *from) {
  if(sphere || quotient || nonisotropic || (kite::in() && !bt::in()) || experimental) return;
  if(chaosmode > 1) return;
  bool deepOcean = deep_ocean_at(c, from);
  
  // if(weirdhyperbolic && c->land == laOcean) deepOcean = c->landparam >= 30;
  
  // buildgreatwalls
  
  if(hybri) ;  /* Great Walls generated via the underlying geometry */
  
  else if(walls_not_implemented()); // walls not implemented here
  
  else if(geometry == gNormal && celldist(c) < 3 && !GOLDBERG) {
    if(top_land && c == cwt.at->master->move(3)->c7) {
      buildBarrierStrong(c, 6, true, top_land);
      }
    }
  
  else if(chaosmode) {
    if(good_for_wall(c) && hrand(10000) < 9000 && c->land && !inmirror(c) && buildBarrierNowall(c, getNewLand(c->land))) 
      {}
    else if(ctof(c) && c->land == laMirror && hrand(10000) < 2000 && !weirdhyperbolic) {
      int bd = 2 + hrand(2) * 3;
      buildBarrier(c, bd, laMirrored); 
      }
    }
  
  else if(good_for_wall(c) && isWarpedType(c->land) && hrand(10000) < 3000 && c->land && 
    buildBarrierNowall(c, eLand(c->land ^ laWarpSea ^ laWarpCoast))) ;
  
  else if(good_for_wall(c) && c->land == laCrossroads4 && hrand(10000) < 7000 && c->land && !c->master->alt && !tactic::on && !racing::on &&
    buildBarrierNowall(c, getNewLand(laCrossroads4))) ;
  
  else if(good_for_wall(c) && hrand(I10000) < 20 && !generatingEquidistant && !yendor::on && !tactic::on && !racing::on && !isCrossroads(c->land) && 
    gold() >= R200 && !weirdhyperbolic && !c->master->alt &&
    !inmirror(c) && !isSealand(c->land) && !isHaunted(c->land) && !isGravityLand(c->land) && 
    (c->land != laRlyeh || rlyehComplete()) &&
    c->land != laTortoise && c->land != laPrairie && c->land && 
    !(c->land == laGraveyard && !deepOcean) 
    && c->land != laCanvas
    ) {
    buildBarrierNowall(c, laCrossroads4) ;
    }
  
  else if(weirdhyperbolic && specialland == laCrossroads4 && /*pseudohept(c) &&*/ hrand(I10000 /4) < wallchance(c, deepOcean) && gp_wall_test()) {
    buildBarrierNowall(c, getNewLand(c->land));
    }
  
  else if(weirdhyperbolic && yendor::on && yendor::nexttostart) {
    if(buildBarrierNowall(c, yendor::nexttostart))
      yendor::nexttostart = laNone;
    }
  
  else if(weirdhyperbolic && specialland == laElementalWall && hrand(I10000) < 1000 && gp_wall_test()) 
    buildBarrierNowall(c, getNewLand(c->land));

  else if(S3 >= OINF && c->land && hrand(I10000) < wallchance(c, deepOcean) && c->bardir != NOBARRIERS)
    buildBarrierNowall(c, getNewLand(c->land));
  
  else if(weirdhyperbolic) ; // non-Nowall barriers not implemented yet in weird hyperbolic
  
  else if(c->land == laCrossroads2 && BITRUNCATED)
    buildCrossroads2(c);
  
  #if CAP_FIELD
  else if(c->land == laPrairie && c->LHU.fi.walldist == 0 && !euclid) {
    for(int bd=0; bd<7; bd++) {
      int fval2 = createStep(c->master, bd)->fieldval;
      int wd = currfp_gmul(fval2, currfp_inverses(c->fval-1));
      if(currfp_distwall(wd) == 0) {
        buildBarrier(c, bd); 
        break;
        }
      }
    }
  #endif

  else if(ctof(c) && c->land && hrand(I10000) < wallchance(c, deepOcean))
  {
    
    int bd = 2 + hrand(2) * 3;
    
    buildBarrier(c, bd); 

    /* int bd = 2;      
    buildBarrier4(c, bd, 0, getNewLand(c->land), c->land); */
    }
      
  if((!chaosmode) && bearsCamelot(c->land) && is_master(c) && !bt::in() && 
    #if MAXMDIM >= 4
    !(hyperbolic && WDIM == 3 && !reg3::in_rule()) && 
    #endif
    (quickfind(laCamelot) || peace::on || (hrand(I2000) < (c->land == laCrossroads4 ? 800 : 200) && horo_ok() && 
    items[itEmerald] >= U5 && !tactic::on && !racing::on))) {
    int rtr = newRoundTableRadius();
    heptagon *alt = createAlternateMap(c, rtr+(hyperbolic && WDIM == 3 ? 11 : 14), hsOrigin);
    if(alt) {
      alt->emeraldval = rtr;
      alt->fiftyval = c->land;
      }
    }

  if(!chaosmode) {
  
    // buildbigstuff

    if(c->land == laRlyeh && ctof(c) && horo_ok() && 
      (quickfind(laTemple) || peace::on || (hrand(I2000) < 100 && 
      items[itStatue] >= U5 && !randomPatternsMode && 
      !tactic::on && !yendor::on && !racing::on)))
      createAlternateMap(c, horo_gen_distance(), hsA);

    if(c->land == laJungle && ctof(c) && 
      (quickfind(laMountain) || (hrand(I2000) < 100 && horo_ok() && 
      !randomPatternsMode && !tactic::on && !yendor::on && !racing::on && landUnlocked(laMountain))))
      createAlternateMap(c, horo_gen_distance(), hsA);

    if(c->land == laOvergrown && ctof(c) && horo_ok() &&
      (quickfind(laClearing) || (hrand(I2000) < 25 && 
      !randomPatternsMode && items[itMutant] >= U5 &&
      isLandIngame(laClearing) &&
      !tactic::on && !yendor::on && !racing::on))) {
      heptagon *h = createAlternateMap(c, horo_gen_distance(), hsA);
      if(h) clearing::bpdata[h].root = NULL;
      }
    
    if(stdhyperbolic && c->land == laStorms && ctof(c) && hrand(2000) < 1000 && horo_ok() && !randomPatternsMode) {
      heptagon *h = createAlternateMap(c, horo_gen_distance(), hsA);
      if(h) h->alt->emeraldval = hrand(2);
      }

    if(c->land == laOcean && ctof(c) && deepOcean && !generatingEquidistant && !peace::on && horo_ok() && 
      (quickfind(laWhirlpool) || (
        hrand(2000) < (PURE ? 500 : 1000) && !tactic::on && !racing::on && !yendor::on)))
      createAlternateMap(c, horo_gen_distance(), hsA);
    
    #if CAP_COMPLEX2
    if(c->land == laOcean && deepOcean && !generatingEquidistant && hrand(10000) < 20 && no_barriers_in_radius(c, 2) && hyperbolic && !quotient && !tactic::on && !safety) 
      brownian::init_further(c);
    #endif

    if(c->land == laCaribbean && horo_ok() && ctof(c) && !c->master->alt)
      createAlternateMap(c, horo_gen_distance(), hsA);

    if(c->land == laCanvas && horo_ok() && ctof(c) && !c->master->alt)
      createAlternateMap(c, horo_gen_distance(), hsA);

    if(c->land == laPalace && ctof(c) && !princess::generating && !shmup::on && multi::players == 1 && horo_ok() && !weirdhyperbolic &&
      (princess::forceMouse ? canReachPlayer(from, moMouse) :
        (hrand(2000) < (peace::on ? 100 : 20))) && 
      !c->master->alt && 
      (princess::challenge || kills[moVizier] || peace::on) && !tactic::on && !yendor::on && !racing::on) {
      createAlternateMap(c, PRADIUS0, hsOrigin, waPalace);
      celllister cl(c, 5, 1000000, NULL);
      for(cell *c: cl.lst) if(c->master->alt) currentmap->generateAlts(c->master);
      }
    }
  
  if(hasbardir(c)) extendBarrier(c);
  }

EX bool openplains(cell *c) {
  if(chaosmode) {
    forCellEx(c2, c) if(c2->land != laHunting) return false;
    return true;
    }
  int dlimit = getDistLimit();
  if(arcm::in()) dlimit--;
  if(dlimit < 7) {
    celllister cl(c, dlimit, 1000000, NULL);
    int bad = 0;
    for(cell *c: cl.lst) { 
      while(c->mpdist > 8) setdist(c, c->mpdist-1, NULL);
      if(c->land != laHunting) {bad++; if(bad>5) return false;}
      }
    return true;
    }
  else {
    celllister cl(c, dlimit, 1000000, NULL);
    for(cell *c: cl.lst) { 
      while(c->mpdist > 8) setdist(c, c->mpdist-1, NULL);
      if(c->land != laHunting) return false;
      }
    return true;
    }    
  }

EX void buildCamelotWall(cell *c) {
  if(S3 >= OINF) { c->wall = waRubble; return; }
  if(WDIM == 3 && hyperbolic && c->master->fieldval == 0) return;
  c->wall = waCamelot;
  if(WDIM == 3 && hyperbolic) return;
  for(int i=0; i<c->type; i++) {
    cell *c2 = createMov(c, i);
    if(c2->wall == waNone && (eubinary || (c2->master->alt && c->master->alt)) && celldistAlt(c2) > celldistAlt(c) && c2->monst == moNone)
      c2->wall = waCamelotMoat;
    }
  }

EX bool no_barriers_in_radius(cell *c, int rad) {
  celllister cl(c, 2, 1000000, NULL);
  for(cell *c: cl.lst) if(c->bardir != NODIR) return false;
  return true;
  }

EX eMonster camelot_monster() {
  eMonster ms[3] = { moHedge, moLancer, moFlailer };
  eMonster m = ms[hrand(3)];
  if(m == moHedge && valence() > 3)
    m = moPyroCultist;
  if(getDistLimit() <= 2 && m == moLancer) m = moGoblin;
  if(getDistLimit() <= 3 && m == moPyroCultist) m = moCultist;
  return m;
  }

EX void buildCamelot(cell *c) {
  int d = celldistAltRelative(c);
  if(tactic::on || (d <= 14 && roundTableRadius(c) > 20)) {
    if(!eubinary) currentmap->generateAlts(c->master);
    preventbarriers(c);
    if(d == 10) {
      if(weirdhyperbolic ? hrand(100) < 50 : pseudohept(c)) buildCamelotWall(c);
      else {
        if(!eubinary) for(int i=0; i<S7; i++) currentmap->generateAlts(c->master->move(i));
        int q = 0;
        if(weirdhyperbolic) {
          for(int t=0; t<c->type; t++) createMov(c, t);
          q = hrand(100);
          if(q < 10) q = 0;
          else if(q < 50) q = 1;
          }
        else {
          for(int t=0; t<c->type; t++) {
            createMov(c, t);
            if(celldistAltRelative(c->move(t)) == 10 && !pseudohept(c->move(t))) q++;
            }
          }
        if(q == 1) buildCamelotWall(c);
        // towers of Camelot
        if(q == 0 && BITRUNCATED) {
          c->monst = moKnight;
          c->wall = waTower;
          forCellEx(c2, c) {
            int cr = celldistAltRelative(c2);
            if(cr == 9) ;
            else {
              buildCamelotWall(c2);
              if(!ctof(c2))
                c2->wall = waTower, c2->wparam = 1;
              }
            }
          for(int i=0; i<c->type; i++) if(celldistAltRelative(c->move(i)) < d)
            c->mondir = i;
          }
        }
      }
    if(d == 0) c->wall = waRoundTable;
    if(celldistAlt(c) == 0 && !tactic::on) c->item = itHolyGrail;
    if(d < 0 && hrand(7000) <= 10 + items[itHolyGrail] * 5)
      c->monst = camelot_monster();
    if(d == 1) {
      // roughly as many knights as table cells
      if(hrand(1000000) < 1000000 / expansion.get_growth() && !reptilecheat)
        c->monst = moKnight;
      if(!eubinary) for(int i=0; i<S7; i++) currentmap->generateAlts(c->master->move(i));
      for(int i=0; i<c->type; i++) 
        if(c->move(i) && celldistAltRelative(c->move(i)) < d)
          c->mondir = (i+3) % 6;
      }
    if(tactic::on && d >= 2 && d <= 8 && hrand(1000) < 10)
      c->item = itOrbSafety;
    if(d == 5 && tactic::on)
      c->item = itGreenStone;
    if(d <= 10) c->land = laCamelot;
    if(d > 10 && !eubinary && !tactic::on) {
      setland(c, eLand(c->master->alt->alt->fiftyval));
      if(c->land == laNone) printf("Camelot\n"); // NONEDEBUG
      }
    }
  }

EX int masterAlt(cell *c) {
  #if MAXMDIM >= 4
  if(WDIM == 3 && hyperbolic && !reg3::in_rule()) return reg3::altdist(c->master);
  #endif
  return c->master->alt->distance;
  }

/** the distance between two layers of Temple of Cthulhu */
EX int temple_layer_size() {
  if(among(geometry, gHoroRec, gHoroHex, gKiteDart3)) return 3;
  if(sol) return 6;
  if(WDIM == 3 && bt::in()) return 2;
  if(among(geometry, gSpace435, gSpace535)) return 5;
  if(WDIM == 3 && hyperbolic) return 3;
  if(S3 == OINF) return 4;
  return 6;
  }

EX int horo_gen_distance() {
  return  (WDIM == 3 && hyperbolic) ? 1 : 2;
  }

EX void moreBigStuff(cell *c) {

  if((bearsCamelot(c->land) && !euclid && !quotient && !nil) || c->land == laCamelot) 
  if(eubinary || bt::in() || c->master->alt) if(!(bt::in() && specialland != laCamelot)) 
    buildCamelot(c);
  
  if(quotient) return;
  
  if(c->land == laPalace && !eubinary && c->master->alt) {
    int d = celldistAlt(c);
    if(d <= PRADIUS1) currentmap->generateAlts(c->master);
    }

  if(c->land == laCanvas && !eubinary && c->master->alt && !quotient) 
    currentmap->generateAlts(c->master);

  if(c->land == laStorms)
    if(!eubinary && !quotient && !sphere) {
      if(c->master->alt && masterAlt(c) <= horo_gen_distance()) {
        currentmap->generateAlts(c->master);
        preventbarriers(c);
        int d = celldistAlt(c);
        if(d <= -2) {
          c->wall = (c->master->alt->alt->emeraldval & 1) ? waCharged : waGrounded;
          c->item = itNone;
          c->monst = moNone;
          }
        else if(d <= -1)
          c->wall = (hrand(100) < 20) ? waSandstone : waNone;
        else if(d <= 0)
          c->wall = waNone;
        }
      }        

  if(chaosmode && c->land == laTemple) {
    for(int i=0; i<c->type; i++)
      if(pseudohept(c) && c->move(i) && c->move(i)->land != laTemple)
        c->wall = waColumn;
    }
  
  else if((c->land == laRlyeh && !euclid) || c->land == laTemple) if(!(bt::in() && specialland != laTemple && c->land == laRlyeh)) {
    if(eubinary || in_s2xe() || (c->master->alt && (tactic::on || masterAlt(c) <= horo_gen_distance()))) {
      if(!eubinary && !chaosmode) currentmap->generateAlts(c->master);
      preventbarriers(c);
      int d = celldistAlt(c);
      if(d <= 0) {
        c->land = laTemple, c->wall = waNone, c->monst = moNone, c->item = itNone;
        }
      if(d % temple_layer_size()==0) {
        c->landparam = 0;
        if(geometry == gSpace534) {
          int i = 0;
          forCellCM(c2, c) if(celldistAlt(c2) < celldistAlt(c)) i++;
          if(i > 1) c->wall = waColumn;
          }
        else if(geometry == gSpace535) {
          c->wall = (c->master->fieldval % 5) ? waRubble : waColumn;
          }
        else if(geometry == gSpace435) {
          c->wall = waRubble;
          if(c->master->fieldval == 0) c->wall = waColumn;
          forCellCM(c1, c) if(c1->master->fieldval == 0) c->wall = waColumn;
          }
        else if(sol) {
          if(c->master->emeraldval % 3 || c->master->zebraval % 3)
            c->wall = waColumn;
          }
        else if(nih) {
          if(c->master->emeraldval % 2)
            c->wall = waColumn;
          }
        else if(geometry == gHoroTris || geometry == gHoroRec) {
          if(c->c.spin(bt::updir()) != 0) c->wall = waColumn;
          }
        else if(geometry == gKiteDart3) {
          if(kite::getshape(c->master) == kite::pKite) c->wall = waColumn;
          }
        else if(in_s2xe()) {
          auto d = hybrid::get_where(c);
          if(!PIU(pseudohept(d.first))) c->wall = waColumn;
          }
        else if(hybri) {
          auto d = hybrid::get_where(c);
          if(d.first->wall == waColumn || (d.second&1)) c->wall = waColumn;
          }
        else if(WDIM == 3) {
          c->wall = hrand(100) < 10 ? waColumn : waRubble;
          }
        else if(S3 >= OINF) { }
        else if(weirdhyperbolic && !BITRUNCATED) {
          if(hrand(100) < 50) c->wall = waColumn;
          }
        else if(pseudohept(c)) 
          c->wall = waColumn;
        else {
          if(!eubinary) for(int i=0; i<S7; i++) currentmap->generateAlts(c->master->move(i));
          int q = 0;
          for(int t=0; t<c->type; t++) {
            createMov(c, t);
            if(celldistAlt(c->move(t)) % temple_layer_size() == 0 && !ishept(c->move(t))) q++;
            }
          if(q == 2) c->wall = waColumn;
          }
        c->landparam = 1;
        }
      else c->landparam = 2;
      }
    }

  if((c->land == laOvergrown && !euclid) || c->land == laClearing) if(!(bt::in() && specialland != laClearing)) {
    if(eubinary || (c->master->alt && (tactic::on || masterAlt(c) <= horo_gen_distance()))) {
      if(!eubinary) currentmap->generateAlts(c->master);
      preventbarriers(c);
      int d = celldistAlt(c);
      if(d <= 0) {
        c->land = laClearing, c->wall = waNone; // , c->monst = moNone, c->item = itNone;
        }
      else if(d == 1 && !tactic::on && !eubinary)
        c->wall = waSmallTree, c->monst = moNone, c->item = itNone, c->landparam = 1;
      }
    }

  if((c->land == laJungle && !euclid) || c->land == laMountain) if(!(bt::in() && specialland != laMountain)) {
    if(eubinary || (c->master->alt && (tactic::on || masterAlt(c) <= horo_gen_distance()))) {
      if(!eubinary) currentmap->generateAlts(c->master);
      preventbarriers(c);
      int d = celldistAlt(c);
      if(d <= 0 || (firstland == laMountain && tactic::on)) {
        c->land = laMountain, c->wall = waNone; // , c->monst = moNone, c->item = itNone;
        }
      }
    }

  if(among(c->land, laOcean, laWhirlpool, laBrownian)) if(!(bt::in() && specialland != laWhirlpool)) {
    bool fullwhirlpool = false;
    if(tactic::on && specialland == laWhirlpool)
      fullwhirlpool = true;
    if(yendor::on && yendor::clev().l == laWhirlpool)
      fullwhirlpool = true;
    if(eubinary || (c->master->alt && (fullwhirlpool || masterAlt(c) <= 2))) {
      if(!eubinary) currentmap->generateAlts(c->master);
      preventbarriers(c);
      int dd = celldistAlt(c);
      if(dd <= 0 || fullwhirlpool) {
        c->land = laWhirlpool, c->wall = waSea, c->monst = moNone, c->item = itNone;
        }
      }
    }      
  }

EX void generate_mines() {
  vector<cell*> candidates;
  for(cell *c: currentmap->allcells())
    if(c->wall == waMineUnknown) 
      candidates.push_back(c);
  bounded_mine_max = isize(candidates);
  hrandom_shuffle(&candidates[0], bounded_mine_max);
  bounded_mine_quantity = int(bounded_mine_max * bounded_mine_percentage + 0.5);
  for(int i=0; i<bounded_mine_quantity; i++) candidates[i]->wall = waMineMine;
  }

EX vector<eLand> currentlands;

EX void pregen() {
  currentlands.clear();
  if(chaosmode > 1)
    for(eLand l: land_over)
      if(landUnlocked(l) && isLandIngame(l)) 
        currentlands.push_back(l);
  }

auto ccm_bigstuff = addHook(hooks_gamedata, 0, [] (gamedata* gd) {
  gd->store(euland);
  gd->store(euland3);
  gd->store(euland3_hash);
  });

}
