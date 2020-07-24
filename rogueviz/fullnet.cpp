// Hyperbolic Rogue
// Copyright (C) 2011-2016 Zeno Rogue, see 'hyper.cpp' for details

// a CLI option to label tiles

#include "rogueviz.h"

namespace rogueviz {

namespace fullnet {

int fullnet_id;

void drawExtra() {
  
  if(vizid == &fullnet_id) {
    for(map<cell*, transmatrix>::iterator it = gmatrix.begin(); it != gmatrix.end(); it++) {
      cell *c = it->first;
      c->wall = waChasm;
      }
    int index = 0;

    for(map<cell*, transmatrix>::iterator it = gmatrix.begin(); it != gmatrix.end(); it++) {
      cell *c = it->first;
      bool draw = true;
      for(int i=0; i<isize(named); i++) if(named[i] == c) draw = false;
      if(draw && gmatrix.count(c))
        queuedisk(it->second, dftcolor, false, NULL, index++);
        // queuepolyat(it->second, shDisk, dftcolor., PPR::LINE);
      }
    
    for(int i=0; i<isize(named); i++) if(gmatrix.count(named[i])) {
      string s = ""; s += 'A'+i;
      queuestr(gmatrix[named[i]], 1, s, forecolor, 1);
      }
    
    canmove = true; items[itOrbAether] = true;
    }
  }

auto hooks =
  addHook(hooks_frame, 0, drawExtra) +
  addHook(hooks_args, 100, [] {
    using namespace arg;
    if(argis("-net")) {
      PHASE(3);
      init(&fullnet_id, 0);
      linepatterns::patTriTree.color = 0x30;
      linepatterns::patTriOther.color = 0x10;
      linepatterns::patTriRings.color = 0xFF;
      return 0;
      }
    return 1;
    });

}}
