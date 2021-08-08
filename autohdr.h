// This file is generated automatically by makeh.cpp.

namespace hr {

  // implemented in: classes.cpp

#line 64 "classes.cpp"
  extern const char *trollhelp2;
#line 296 "classes.cpp"
  extern const char *rosedesc;
#line 304 "classes.cpp"
  extern const char *warpdesc;
#line 424 "classes.cpp"
  enum eSlimegroup { sgNone, sgCave, sgWater, sgFloorA, sgFloorB, sgVine, sgTree,  sgSlime1, sgSlime2,  sgSlime3, sgSlime4};
#line 428 "classes.cpp"
  // we use CF not MF to avoid confusion with MF_ movement flags
  static const flagtype CF_NOGHOST = Flag(0);
  static const flagtype CF_RAIDER = Flag(1);
  static const flagtype CF_PRINCESS = Flag(2);
  static const flagtype CF_MIMIC = Flag(3);
  static const flagtype CF_GOK = Flag(4);
  static const flagtype CF_NONLIVING = Flag(5);
  static const flagtype CF_METAL = Flag(6);
  static const flagtype CF_STUNNABLE = Flag(7);
  static const flagtype CF_HP = Flag(8);
  static const flagtype CF_MOUNTABLE = Flag(9);
  static const flagtype CF_FRIENDLY = Flag(10);
  static const flagtype CF_PLAYER = Flag(11);
  static const flagtype CF_BUG = Flag(12);
  static const flagtype CF_IVY = Flag(13);
  static const flagtype CF_PART = Flag(14);
  static const flagtype CF_MUTANTIVY = Flag(15);
  static const flagtype CF_ANYIVY = Flag(16);
  static const flagtype CF_BULLET = Flag(17);
  static const flagtype CF_DEMON = Flag(18);
  static const flagtype CF_WORM = Flag(19);
  static const flagtype CF_WITCH = Flag(20);
  static const flagtype CF_BIRD = Flag(21);
  static const flagtype CF_SLOWMOVER = Flag(22);
  static const flagtype CF_MAGNETIC = Flag(23);
  static const flagtype CF_SWITCH = Flag(24);
  static const flagtype CF_GHOST = Flag(25);
  static const flagtype CF_SHARK = Flag(26);
  static const flagtype CF_SLIME = Flag(27);
  static const flagtype CF_DRAGON = Flag(28);
  static const flagtype CF_KRAKEN = Flag(29);
  static const flagtype CF_NOBLOW = Flag(30);
  static const flagtype CF_MULTITILE = Flag(31);
  static const flagtype CF_LEADER = Flag(32);
  static const flagtype CF_FLYING = Flag(33);
  static const flagtype CF_ATTACK_THRU_VINE = Flag(34);
  static const flagtype CF_ATTACK_NONADJACENT = Flag(35);
  static const flagtype CF_NOHIGHLIGHT = Flag(36);
  static const flagtype CF_INACTIVE = Flag(37);
  static const flagtype CF_UNARMED = Flag(38);
  static const flagtype CF_IGNORE_PLATE = Flag(39);
  static const flagtype CF_BULL = Flag(40);
  static const flagtype CF_TROLL = Flag(41);
  static const flagtype CF_IGNORE_SMELL = Flag(42);
  static const flagtype CF_RATLING = Flag(43);
  static const flagtype CF_POWER = Flag(44);
  static const flagtype CF_GHOSTMOVER = Flag(45);
  static const flagtype CF_TECHNICAL = Flag(46);
  static const flagtype CF_MOVED = Flag(47);
  static const flagtype CF_FACING = Flag(48);
  static const flagtype CF_FACE_UP = Flag(49);
  static const flagtype CF_FACE_SIDE = Flag(50);
  static const flagtype CF_HIGH_THREAT = Flag(51);
  static const flagtype CF_SPAM = Flag(52);
  static const flagtype CF_ANT = Flag(53);
  
  enum eMonster {
  #define MONSTER(a,b,c,d,e,f,g,h) d,
  #include "content.cpp"
  motypes
  };
  
  struct monstertype {
  char  glyph;
  color_t color;
  const char *name;
  flagtype flags;
  enum eMonster mgroup;
  const char *help;
  };
#line 500 "classes.cpp"
  extern monstertype minf[motypes];
#line 506 "classes.cpp"
  #define NUM_GS 8
  struct genderswitch_t {
  int gender;
  eMonster m;
  const char *name;
  const char *desc;
  };
#line 515 "classes.cpp"
  extern genderswitch_t genderswitch[NUM_GS];
#line 538 "classes.cpp"
  enum eOrbshape { osNone, osLove, osRanged, osOffensive, osFriend, osUtility, osDirectional, osWarping, osFrog, osPowerUtility, osProtective, osMovement, osTerraform };
  
  static const flagtype ZERO = 0;
  
  static const flagtype IF_SHARD = Flag(0);
  static const flagtype IF_FIREPROOF = Flag(1);
  static const flagtype IF_PROTECTION = Flag(2);
  static const flagtype IF_EMPATHY = Flag(3);
  static const flagtype IF_RANGED = Flag(4);
  static const flagtype IF_SHMUPLIFE = Flag(5);
  static const flagtype IF_REVIVAL = Flag(6);
  static const flagtype IF_CURSE = Flag(7);
  
  // 0 = basic treasure, 1 = other item, 2 = power orb, 3 = not an item
  #define IC_TREASURE 0
  #define IC_OTHER 1
  #define IC_ORB 2
  #define IC_NAI 3
  
  struct itemtype {
  char  glyph;
  color_t color;
  const char *name;
  int itemclass;
  flagtype flags;
  eOrbshape orbshape;
  const char *help;
  };
  
  enum eItem { 
  #define ITEM(a,b,c,d,e,f,g,h,i) d,
  #include "content.cpp"
  ittypes
  };
#line 574 "classes.cpp"
  extern itemtype iinf[ittypes];
#line 582 "classes.cpp"
  static const flagtype WF_WATER = Flag(0);
  static const flagtype WF_BOAT = Flag(1);
  static const flagtype WF_CHASM = Flag(2);
  static const flagtype WF_NOFLIGHT = Flag(3);
  static const flagtype WF_FIRE = Flag(4);
  static const flagtype WF_THUMPER = Flag(5);
  static const flagtype WF_ACTIVABLE = Flag(6);
  static const flagtype WF_ALCHEMY = Flag(7);
  static const flagtype WF_RED = Flag(8);
  static const flagtype WF_WALL = Flag(9);
  static const flagtype WF_PUSHABLE = Flag(10);
  static const flagtype WF_CONE = Flag(11);
  static const flagtype WF_STDTREE = Flag(12);
  static const flagtype WF_GRAVE = Flag(13);
  static const flagtype WF_REPTILE = Flag(14);
  static const flagtype WF_HEATCOLOR = Flag(15);
  static const flagtype WF_HIGHWALL = Flag(16);
  static const flagtype WF_THORNY = Flag(17);
  static const flagtype WF_TIMEOUT = Flag(18);
  static const flagtype WF_CISLAND = Flag(19);
  static const flagtype WF_SULPHURIC = Flag(20);
  static const flagtype WF_HALFVINE = Flag(21);
  static const flagtype WF_SEAL = Flag(22);
  
  struct walltype {
  char  glyph;
  color_t color;
  const char *name;
  flagtype flags;
  int snakelevel;
  eSlimegroup sg;
  const char *help;
  };
  
  enum eWall { 
  #define WALL(a,b,c,d,e,f,g,h,i) d,
  #include "content.cpp"
  walltypes
  };
#line 623 "classes.cpp"
  extern walltype winf[walltypes];
#line 631 "classes.cpp"
  static const flagtype LF_GENERATE_ALL = Flag(0);
  static const flagtype LF_ICY = Flag(1);
  static const flagtype LF_GRAVITY = Flag(2);
  static const flagtype LF_EQUI = Flag(3);
  static const flagtype LF_WARPED = Flag(4);
  static const flagtype LF_CYCLIC = Flag(5);
  static const flagtype LF_TECHNICAL = Flag(6);
  static const flagtype LF_MIRROR = Flag(7);
  static const flagtype LF_SEA = Flag(8);
  static const flagtype LF_COASTAL = Flag(9);
  static const flagtype LF_PURESEA = Flag(10);
  static const flagtype LF_ELEMENTAL = Flag(11);
  static const flagtype LF_HAUNTED = Flag(12);
  static const flagtype LF_TROLL = Flag(13);
  static const flagtype LF_INMIRROR = Flag(14);
  static const flagtype LF_INMIRRORORWALL = Flag(15);
  static const flagtype LF_ELECTRIC = Flag(17);
  
  struct landtype {
  color_t color;
  const char *name;
  flagtype flags;
  eItem treasure;
  const char *help;
  };
  
  enum eLand {
  #define LAND(a,b,c,d,e,f,g) c,
  #include "content.cpp"
  landtypes
  };
  
  extern color_t floorcolors[landtypes];
#line 666 "classes.cpp"
  extern const landtype linf[landtypes];
#line 672 "classes.cpp"
  struct landtacinfo { eLand l; int tries, multiplier; };
#line 675 "classes.cpp"
  extern vector<landtacinfo> land_tac;
#line 714 "classes.cpp"
  extern vector<eLand> randlands;
#line 722 "classes.cpp"
  enum eGeometry {
  gNormal, gEuclid, gSphere, gElliptic, gZebraQuotient, gFieldQuotient, gTorus, gOctagon, g45, g46, g47, gSmallSphere, gTinySphere, gEuclidSquare, gSmallElliptic, 
  gKleinQuartic, gBolza, gBolza2, gMinimal, gBinaryTiling, gArchimedean, 
  gMacbeath, gBring, gSchmutzM2, gSchmutzM3, gCrystal, gOctahedron, 
  gBinary3, gCubeTiling, gCell120, gECell120, gRhombic3, gBitrunc3, 
  gSpace534, gSpace435, 
  gCell5, 
  gCell16, gECell16,
  gCell8, gECell8,
  gCell24, gECell24,
  gCell600, gECell600,
  gHoroTris, gHoroRec, gHoroHex,
  gField435, gField534,
  gBinary4, gSol,
  gKiteDart2, gKiteDart3, gNil, gProduct, gRotSpace,
  gTernary, gNIH, gSolN, gInfOrder, gSpace336, gSpace344, gCrystal344,
  gArnoldCat, gArbitrary, gInfOrder4, gCrystal534,
  gSpace535, gSpace536, gSeifertCover, gSeifertWeber, gHomologySphere,
  gInfOrderMixed, gSpace436, gFake,
  gSpace345, gSpace353, gSpace354, gSpace355,
  gGUARD};
  
  enum eGeometryClass { gcHyperbolic, gcEuclid, gcSphere, gcSolNIH, gcNil, gcProduct, gcSL2 };
  
  enum class eVariation { bitruncated, pure, goldberg, irregular, dual, untruncated, warped, unrectified, subcubes, coxeter, dual_subcubes, bch, bch_oct };
  
  typedef int modecode_t;
  
  /** only the actual geometry */
  struct geometryinfo1 {
  /** geometry class */
  eGeometryClass kind;
  /** dimension of the gameplay (2 for crystal) */
  int gameplay_dimension;
  /** dimension of the graphics, may be greater than gameplay_dimension with vid.always3 on */
  int graphical_dimension;
  /** dimension of the homogeneous vector space used, usually graphical_dimension+1, but 3 in product */
  int homogeneous_dimension;
  /** signature of the scalar product used */
  int sig[4];
  };
  
  struct geometryinfo {
  std::string tiling_name;
  std::string quotient_name;
  const char* menu_displayed_name;
  const char* shortname;
  int sides;
  int vertex;
  flagtype flags;
  geometryinfo1 g;
  std::array<int,2> distlimit; // bitrunc, non-bitrunc
  eVariation default_variation;
  };
  
  static const flagtype qBOUNDED         = 1;
  static const flagtype qANYQ            = 2;
  static const flagtype qNONORIENTABLE   = 4;
  static const flagtype qSMALL           = 8;
  
  static const flagtype qFIELD           = 16;
  static const flagtype qDOCKS           = 32;
  static const flagtype qZEBRA           = 64;
  
  static const flagtype qELLIPTIC        = 128;
  
  static const flagtype qBINARY          = 256;
  static const flagtype qKITE            = 512;
  
  static const flagtype qREGULAR         = 1024; /* not set! */
  static const flagtype qARCHI           = 2048;
  static const flagtype qHYBRID          = 4096;
  static const flagtype qCRYSTAL         = 8192;
  static const flagtype qSOL             = 16384;
  static const flagtype qEXPERIMENTAL    = 32768;
  static const flagtype qNIH             = 65536;
  
  static const flagtype qIDEAL           = 131072;
  static const flagtype qHUGE_BOUNDED    = 262144;
  static const flagtype qOPTQ            = Flag(19);
  static const flagtype qSINGLE          = Flag(20);
  
  static const flagtype qDEPRECATED      = Flag(21);
  static const flagtype qINFMIXED        = Flag(22);
  
  static const flagtype qRAYONLY         = Flag(23);
  static const flagtype qAFFINE          = Flag(24);
  
  static const flagtype qULTRA           = Flag(25);
  
  static const flagtype qPORTALSPACE     = Flag(26);
  
  static const flagtype qSTRETCHABLE     = Flag(27);
  
  static const flagtype qCAT             = Flag(28);
  
  // note: dnext assumes that x&7 equals 7
  static const int SEE_ALL = 50;
  static const int OINF = 100;
  
  extern eGeometry geometry;
  extern eVariation variation;
#line 841 "classes.cpp"
  extern geometryinfo1 giEuclid2;
#line 842 "classes.cpp"
  extern geometryinfo1 giHyperb2;
#line 843 "classes.cpp"
  extern geometryinfo1 giSphere2;
#line 845 "classes.cpp"
  extern geometryinfo1 giEuclid3;
#line 846 "classes.cpp"
  extern geometryinfo1 giHyperb3;
#line 847 "classes.cpp"
  extern geometryinfo1 giSphere3;
#line 849 "classes.cpp"
  extern geometryinfo1 giSolNIH;
#line 850 "classes.cpp"
  extern geometryinfo1 giNil;
#line 851 "classes.cpp"
  extern geometryinfo1 giProduct;
#line 852 "classes.cpp"
  extern geometryinfo1 giSL2;
#line 854 "classes.cpp"
  extern modecode_t no_code;
#line 857 "classes.cpp"
  extern vector<geometryinfo> ginf;
#line 941 "classes.cpp"
  namespace mf {
  static const flagtype azimuthal = 1;
  static const flagtype cylindrical = 2;
  static const flagtype equiarea = 4;
  static const flagtype equidistant = 8;
  static const flagtype conformal = 16;
  static const flagtype euc_boring = 32;
  static const flagtype space = 64;
  static const flagtype hyper_only = 128;
  static const flagtype hyper_or_torus = 256;
  static const flagtype pseudocylindrical = 512; /* includes cylindrical */
  static const flagtype equivolume = 1024;
  static const flagtype twopoint = 2048;
  static const flagtype uses_bandshift = 4096;
  static const flagtype broken = 8192; /* in spherical case, these are broken along the meridian 180 deg */
  
  static const flagtype band = (cylindrical | pseudocylindrical | uses_bandshift);
  static const flagtype pseudoband = (pseudocylindrical | uses_bandshift);
  }
  
  struct modelinfo {
  const char *name_hyperbolic;
  const char *name_euclidean;
  const char *name_spherical;  
  
  flagtype flags;
  
  int is_azimuthal;
  int is_band;
  int is_equiarea;
  int is_equidistant;
  int is_conformal;
  const char* name;
  };
  
  enum eModel : int {
  mdDisk, mdHalfplane, mdBand, mdPolygonal, mdFormula,
  // 5..8.
  mdEquidistant, mdEquiarea, mdBall, mdHyperboloid, 
  // 9..13
  mdHemisphere, mdBandEquidistant, mdBandEquiarea, mdSinusoidal, mdTwoPoint, 
  // 14..16
  mdFisheye, mdJoukowsky, mdJoukowskyInverted,
  // 17..19
  mdRotatedHyperboles, mdSpiral, mdPerspective,
  // 20..24
  mdEquivolume, mdCentralInversion, mdSimulatedPerspective, mdTwoHybrid, mdGeodesic,
  // 25..27
  mdMollweide, mdCentralCyl, mdCollignon, 
  // 28..31 
  mdHorocyclic, mdQuadrant, mdAxial, mdAntiAxial,
  // 32..38
  mdWerner, mdAitoff, mdHammer, mdLoximuthal, mdMiller, mdGallStereographic, mdWinkelTripel,
  // 39..
  mdPoorMan, mdPanini, mdRetroCraig, mdRetroLittrow, mdRetroHammer, mdThreePoint,
  // 45..
  mdGUARD, mdPixel, mdHyperboloidFlat, mdPolynomial, mdManual
  };
#line 1008 "classes.cpp"
  extern vector<modelinfo> mdinf;
#line 1062 "classes.cpp"
  static inline bool orbProtection(eItem it) { return false; } // not implemented
  
  // these markers use lands which never appear on barrier sides
  
  const eLand NOWALLSEP = laNone;
  const eLand NOWALLSEP_SWAP = laMountain;
  const eLand NOWALLSEP_WALL = laHauntedWall;
  const eLand NOWALLSEP_USED = laWhirlpool;
  const eLand NOWALLSEP_WALL_CPOS = laBarrier;
  const eLand NOWALLSEP_WALL_CNEG = laOceanWall;
  const eLand NOWALLSEP_WALL_EPOS = laClearing;
  const eLand NOWALLSEP_WALL_ENEG = laPrincessQuest;
  

  // implemented in: locations.cpp

#line 18 "locations.cpp"
  
  extern int cellcount, heptacount;
  
  #define NODIR 126
  #define NOBARRIERS 127
  
  /** \brief Cell information for the game. struct cell builds on this */
  struct gcell {
  
  #if CAP_BITFIELD
  /** \brief which land does this cell belong to */
  eLand land : 8;
  /** \brief wall type (waNone for no walls) */
  eWall wall : 8;
  /** \brief monster on this cell -- note that player characters are handled separately */
  eMonster monst : 8;
  /** \brief item on this cell */
  eItem item : 8;
  
  /** \brief if this is a barrier, what lands on are on the sides? */
  eLand barleft : 8, barright : 8; 
  
  /** \brief is it currently sparkling with lightning? */
  unsigned ligon : 1;
  /** \brief is it about to be? */
  unsigned weakligon : 1;
  
  signed 
  mpdist : 7,         ///< minimum player distance, the smaller value, the more generated it is */
  pathdist : 8,       ///< distance from the target -- actual meaning may change
  cpdist : 8;         ///< current distance to the player
  
  unsigned 
  mondir : 8,         ///< which direction the monster is facing (if relevant), also used for boats
  bardir : 8,         ///< may equal NODIR (no barrier here), NOBARRIERS (barriers not allowed here), or the barrier direction
  stuntime : 8,       ///< for stunned monsters, stun time left; also used for Mutant Ivy timing
  hitpoints : 7,      ///< hitpoints left, for Palace monsters, Dragons, Krakens etc. Also reused as cpid for mirrors
  monmirror : 1;      ///< monster mirroring state for nonorientable geometries
  
  unsigned landflags : 8; ///< some lands need additional flags
  #else
  eLand land;
  eWall wall;
  eMonster monst;
  eItem item;
  eLand barleft, barright;
  bool ligon, monmirror;
  signed char pathdist, cpdist, mpdist;
  
  unsigned char mondir, bardir, stuntime, hitpoints;
  unsigned char landflags;
  #endif
  
  /** 'landparam' is used for: 
  *  heat in Icy/Cocytus; 
  *  heat in Dry (0..10); 
  *  CR2 structure; 
  *  hive Weird Rock color / pheromones;
  *  Ocean/coast depth;
  *  Bomberbird Egg hatch time / mine marking;
  *  number of Ancient Jewelry;
  *  improved tracking in Trollheim
  */
  union { 
  int32_t landpar; 
  unsigned int landpar_color;
  float heat; 
  char bytes[4]; 
  struct fieldinfo { 
  uint16_t fieldval;
  unsigned rval : 4;
  unsigned flowerdist : 4;
  unsigned walldist : 4;
  unsigned walldist2 : 4;
  } fi;
  
  } LHU;
  
  /** \brief wall parameter, used e.g. for remaining power of Bonfires and Thumpers */
  char wparam;
  
  #ifdef CELLID
  int cellid;
  #endif
  
  gcell() {
  #ifdef CELLID
  cellid = cellcount;  
  #endif
  }
  };
  
  #define landparam LHU.landpar
  #define landparam_color LHU.landpar_color
  #define fval LHU.fi.fieldval
  
  #define FULL_EDGE 120
  
  template<class T> struct walker;
  
  /** Connection tables are used by heptagon and cell structures. They basically
  *  describe the structure of the graph on the given manifold. We assume that 
  *  the class T has a field c of type connection_table<T>,
  *  as its last field. Edges are listed in the clockwise order (for 2D tilings, 
  *  for 3D tilings the order is more arbitrary). For each edge we remember which other T
  *  we are connected to, as well as the index of this edge in the other T, and whether it is 
  *  mirrored (for graphs on non-orientable manifolds).
  *  To conserve memory, these classes need to be allocated with tailored_alloc
  *  and freed with tailored_free.
  */
  
  int gmod(int i, int j);
  
  template<class T> struct connection_table {
  
  /** \brief Table of moves. This is the maximum size, but tailored_alloc allocates less. */
  T* move_table[FULL_EDGE + (FULL_EDGE + sizeof(char*) - 1) / sizeof(char*)];
  
  unsigned char *spintable() { return (unsigned char*) (&move_table[full()->degree()]); }
  
  /** \brief get the full T from the pointer to this connection table */
  T* full() { return (T*)((char*)this - offsetof(T, c)); }
  /** \brief for the edge d, set the `spin` and `mirror` attributes */
  void setspin(int d, int spin, bool mirror) { 
  unsigned char& c = spintable() [d];
  c = spin;
  if(mirror) c |= 128;
  }
  /** \brief we are spin(i)-th neighbor of move[i] */
  int spin(int d) { return spintable() [d] & 127; }
  /** \brief on non-orientable surfaces, the d-th edge may be mirrored */
  bool mirror(int d) { return spintable() [d] & 128; }  
  /** \brief 'fix' the edge number d to get the actual index in [0, degree()) */
  int fix(int d) { return gmod(d, full()->degree()); }
  /** \brief T in the direction i */
  T*& move(int i) { return move_table[i]; }
  /** \brief T in the direction i, modulo degree() */
  T*& modmove(int i) { return move(fix(i)); }
  unsigned char modspin(int i) { return spin(fix(i)); }
  /** \brief initialize the table */
  void fullclear() { 
  for(int i=0; i<full()->degree(); i++) move_table[i] = NULL;
  }
  /** \brief connect this in direction d0 to c1 in direction d1, possibly mirrored */
  void connect(int d0, T* c1, int d1, bool m) {
  move(d0) = c1;
  c1->move(d1) = full();
  setspin(d0, d1, m);
  c1->c.setspin(d1, d0, m);    
  }
  /* like the other connect, but take the parameters of the other cell from a walker */
  void connect(int d0, walker<T> hs) {
  connect(d0, hs.at, hs.spin, hs.mirrored);
  }
  };
  
  /** \brief Allocate a class T with a connection_table, but with only `degree` connections. 
  *
  *  Also set yet unknown connections to NULL.
  *
  * Generating the hyperbolic world consumes lots of
  * RAM, so we really need to be careful on low memory devices. 
  */
  
  template<class T> T* tailored_alloc(int degree) {
  T* result;
  #ifndef NO_TAILORED_ALLOC
  int b = offsetof(T, c) + offsetof(connection_table<T>, move_table) + sizeof(T*) * degree + degree;
  result = (T*) new char[b];
  new (result) T();
  #else
  result = new T;
  #endif
  result->type = degree;
  for(int i=0; i<degree; i++) result->c.move_table[i] = NULL;
  return result;
  }
  
  /** \brief Counterpart to hr::tailored_alloc(). */
  template<class T> void tailored_delete(T* x) {
  x->~T();  
  delete[] ((char*) (x));
  }
  
  static const struct wstep_t { wstep_t() {} } wstep;
  static const struct wmirror_t { wmirror_t() {}} wmirror;
  static const struct rev_t { rev_t() {} } rev;
  static const struct revstep_t { revstep_t() {}} revstep;
  
  extern int hrand(int);
  
  /** \brief the walker structure is used for walking on surfaces defined via \ref connection_table. */
  template<class T> struct walker {
  /** \brief where we are at */
  T *at;
  /** \brief in which direction (edge) we are facing */
  int spin;
  /** \brief are we mirrored */
  bool mirrored;
  walker<T> (T *at = NULL, int s = 0, bool m = false) : at(at), spin(s), mirrored(m) { if(at) s = at->c.fix(s); }
  /** \brief spin by i to the left (or right, when mirrored */
  walker<T>& operator += (int i) {
  spin = at->c.fix(spin+(mirrored?-i:i));
  return (*this);
  }
  /** \brief spin by i to the right (or left, when mirrored */
  walker<T>& operator -= (int i) {
  spin = at->c.fix(spin-(mirrored?-i:i));
  return (*this);
  }
  /** \brief add wmirror to mirror this walker */
  walker<T>& operator += (wmirror_t) {
  mirrored = !mirrored;
  return (*this);
  }
  /** \brief add wstep to make a single step, after which we are facing the T we were originally on */
  walker<T>& operator += (wstep_t) {
  at->cmove(spin);
  int nspin = at->c.spin(spin);
  if(at->c.mirror(spin)) mirrored = !mirrored;
  at = at->move(spin);
  spin = nspin;
  return (*this);
  }
  /** \brief add wrev to face the other direction, may be non-deterministic and use hrand */
  walker<T>& operator += (rev_t) {
  auto rd = reverse_directions(at, spin);
  if(rd.size() == 1) spin = rd[0];
  else spin = rd[hrand(rd.size())];
  return (*this);
  }
  /** \brief adding revstep is equivalent to adding rev and step */
  walker<T>& operator += (revstep_t) {
  (*this) += rev; return (*this) += wstep; 
  }
  bool operator != (const walker<T>& x) const {
  return at != x.at || spin != x.spin || mirrored != x.mirrored;
  }
  bool operator == (const walker<T>& x) const {
  return at == x.at && spin == x.spin && mirrored == x.mirrored;
  }
  
  bool operator < (const walker<T>& cw2) const {
  return tie(at, spin, mirrored) < tie(cw2.at, cw2.spin, cw2.mirrored);
  }
  
  /** how much should we spin to face direction dir */
  int to_spin(int dir) {
  return gmod(dir - spin, at->type) * (mirrored ? -1 : 1);
  }
  
  walker<T>& operator ++ (int) { return (*this) += 1; }
  walker<T>& operator -- (int) { return (*this) -= 1; }
  template<class U> walker operator + (U t) const { walker<T> w = *this; w += t; return w; }
  template<class U> walker operator - (U t) const { walker<T> w = *this; w += (-t); return w; }
  /** \brief what T are we facing, without creating it */
  T*& peek() { return at->move(spin); }
  /** \brief what T are we facing, with creating it */
  T* cpeek() { return at->cmove(spin); }
  /** \brief would we create a new T if we stepped forwards? */
  bool creates() { return !peek(); }
  /** \brief mirror this walker with respect to the d-th edge */
  walker<T> mirrorat(int d) { return walker<T> (at, at->c.fix(d+d - spin), !mirrored); }
  };
  
  struct cell;
  
  // automaton state
  enum hstate { hsOrigin, hsA, hsB, hsError, hsA0, hsA1, hsB0, hsB1, hsC };
  
  struct cell *createMov(struct cell *c, int d);
  struct heptagon *createStep(struct heptagon *c, int d);
  
  struct cdata_or_heptagon { virtual ~cdata_or_heptagon() {} };
  
  struct cdata : cdata_or_heptagon {
  int val[4];
  int bits;
  };
  
  /** \brief Limit on the 'distance' value in heptagon. 
  * 
  *  This value is signed (negative distances are used
  *  in horocycle implementation. Distance is currently a short, and we need a bit of breathing room.
  *  It would not be a technical problem to use a larger type, but 32000 is close to what fits in
  *  the memory of a normal computer. Farlands appear close to this limit.
  **/
  
  constexpr int global_distance_limit = 32000;
  
  /** This value is used in iterative algorithms to prevent infinite loops created by incorrect
  data (e.g., circular dragon). It should be larger than global_distance_limit */
  constexpr int iteration_limit = 10000000;
  
  /** \brief underlying tiling
  *  in bitruncated/irregular/Goldberg geometries, heptagons form the 
  *  underlying regular tiling (not necessarily heptagonal); in pure
  *  geometries, they correspond 1-1 to tiles; in 'masterless' geometries
  *  heptagons are unused
  */
  
  struct heptagon : cdata_or_heptagon {
  /** \brief Automata are used to generate the standard maps. s is the state of this automaton */
  hstate s : 6;
  /** \brief distance modulo 4, in heptagons */
  unsigned int dm4: 2;
  /** \brief distance from the origin; based on the final geometry of cells, not heptagons themselves */
  short distance;
  /** \brief Emerald/wineyard generator. May have different meaning in other geometries. */
  short emeraldval;
  /** \brief Palace pattern generator. May have different meaning in other geometries. */
  short fiftyval;
  /** \brief Zebra pattern generator. May have different meaning in other geometries. */
  short zebraval;
  /** \brief Field quotient pattern ID. May have different meaning in other geometries. */
  int fieldval : 24;
  /** \brief the number of adjacent heptagons */
  unsigned char type : 8;
  /** \brief data for fractal landscapes */
  short rval0, rval1;
  /** for the main map, it contains the fractal landscape data
  *
  *  For alternate structures, cdata contains the pointer to the original.
  */
  struct cdata *cdata;
  /** \brief which central cell does this heptagon correspond too
  *  
  *  For alternate geometries, c7 is NULL
  */
  cell *c7;
  /** \brief associated generator of alternate structure, for Camelot and horocycles */
  heptagon *alt;
  /** \brief connection table */
  connection_table<heptagon> c;
  // DO NOT add any fields after connection_table! (see tailored_alloc)
  heptagon*& move(int d) { return c.move(d); }
  heptagon*& modmove(int d) { return c.modmove(d); }
  // functions
  heptagon () { heptacount++; }
  ~heptagon () { heptacount--; }
  heptagon *cmove(int d) { return createStep(this, d); }
  heptagon *cmodmove(int d) { return createStep(this, c.fix(d)); }
  inline int degree() { return type; }
  
  // prevent accidental copying
  heptagon(const heptagon&) = delete;
  heptagon& operator=(const heptagon&) = delete;
  };
  
  struct cell : gcell {
  char type;        ///< our degree
  int degree() { return type; }
  
  int listindex;    ///< used by celllister  
  heptagon *master; ///< heptagon who owns us; for 'masterless' tilings it contains coordinates instead
  
  connection_table<cell> c;
  // DO NOT add any fields after connection_table! (see tailored_alloc)
  
  cell*& move(int d) { return c.move(d); }
  cell*& modmove(int d) { return c.modmove(d); }
  cell* cmove(int d) { return createMov(this, d); }
  cell* cmodmove(int d) { return createMov(this, c.fix(d)); }
  cell() {}
  
  // prevent accidental copying
  cell(const cell&) = delete;
  heptagon& operator=(const cell&) = delete;
  };
  
  /** abbreviations */
  typedef walker<heptagon> heptspin;
  typedef walker<cell> cellwalker;
  
  /** \brief A structure useful when walking on the cell graph in arbitrary way, or listing cells in general.
  *
  * Only one celllister may be active at a time, using the stack semantics.
  * Only the most recently created one works; the previous one will resume 
  * working when this one is destroyed.
  */
  struct manual_celllister {
  /** \brief list of cells in this list */
  vector<cell*> lst;
  vector<int> tmps;
  
  /** \brief is the given cell on the list? */
  bool listed(cell *c) {
  return c->listindex >= 0 && c->listindex < isize(lst) && lst[c->listindex] == c;
  }
  
  /** \brief add a cell to the list */
  bool add(cell *c) {
  if(listed(c)) return false;
  tmps.push_back(c->listindex);
  c->listindex = isize(lst);
  lst.push_back(c);
  return true;
  }
  
  ~manual_celllister() {     
  for(int i=0; i<isize(lst); i++) lst[i]->listindex = tmps[i];
  }  
  };
  
  /** \brief automatically generate a list of nearby cells */
  struct celllister : manual_celllister {
  vector<int> dists;
  
  void add_at(cell *c, int d) {
  if(add(c)) dists.push_back(d);
  }
  
  /** \brief automatically generate a list of nearby cells
  @param orig where to start
  @param maxdist maximum distance to cover
  @param maxcount maximum number of cells to cover
  @param breakon we are actually looking for this cell, so stop when reaching it
  */
  celllister(cell *orig, int maxdist, int maxcount, cell *breakon) {
  add_at(orig, 0);
  cell *last = orig;
  for(int i=0; i<isize(lst); i++) {
  cell *c = lst[i];
  if(maxdist) forCellCM(c2, c) {
  add_at(c2, dists[i]+1);
  if(c2 == breakon) return;
  }
  if(c == last) {
  if(isize(lst) >= maxcount || dists[i]+1 == maxdist) break;
  last = lst[isize(lst)-1];
  }
  }
  }
  
  /** \brief for a given cell c on the list, return its distance from orig */
  int getdist(cell *c) { return dists[c->listindex]; }
  };
  
  /** \brief translate heptspins to cellwalkers and vice versa */
  static const struct cth_t { cth_t() {}} cth;
  inline heptspin operator+ (cellwalker cw, cth_t) { return heptspin(cw.at->master, cw.spin * DUALMUL, cw.mirrored); }
  inline cellwalker operator+ (heptspin hs, cth_t) { return cellwalker(hs.at->c7, hs.spin / DUALMUL, hs.mirrored); }
  
#line 463 "locations.cpp"
  bool proper(cell *c, int d);
#line 466 "locations.cpp"
  
  constexpr int STRONGWIND = 99;
  constexpr int FALL = 98;
  constexpr int NO_SPACE = 97;
  constexpr int TELEPORT = 96;
  constexpr int JUMP = 95;
  constexpr int STAY = 94;
  
  namespace whirlwind { cell *jumpDestination(cell*); }
  
  /** \brief a structure for representing movements 
  *
  *  mostly for 'proper' moves where s->move(d) == t,
  *  but also sometimes for other moves
  */
  
  struct movei {
  cell *s;
  cell *t;
  int d;
  bool op() { return s != t; }
  bool proper() const { return d >= 0 && d < s->type && s->move(d) == t; }
  movei(cell *_s, int _d) : s(_s), d(_d) {
  if(d == STRONGWIND) t = whirlwind::jumpDestination(s);
  else if(d < 0 || d >= s->type) t = s;
  else t = s->move(d);
  }
  movei(cell *_s, cell *_t, int _d) : s(_s), t(_t), d(_d) {}
  movei(cellwalker cw) : s(cw.at), t(cw.cpeek()), d(cw.spin) {}
  movei rev() const { return movei(t, s, rev_dir_or(d)); }
  int dir_or(int x) const { return proper() ? d : x; }
  int rev_dir_or(int x) const { return proper() ? s->c.spin(d) : x; }
  int rev_dir_mirror() const { return proper() ? s->c.spin(d) : d; }
  int rev_dir_force() const { hassert(proper()); return s->c.spin(d); }
  int dir_force() const { hassert(proper()); return d; }
  bool mirror() { return s->c.mirror(d); }
  };
#line 505 "locations.cpp"
  movei moveimon(cell *c);
#line 507 "locations.cpp"
  movei match(cell *f, cell *t);

  // implemented in: colors.cpp

#line 14 "colors.cpp"
  unsigned char& part(color_t& col, int i);
#line 28 "colors.cpp"
  static const color_t NOCOLOR = 0;
  
  struct colortable: vector<color_t> {
  color_t& operator [] (int i) { i %= size(); if(i<0) i += size(); return ((vector<color_t>&)(*this)) [i]; }
  const color_t& operator [] (int i) const { i %= size(); if(i<0) i += size(); return ((vector<color_t>&)(*this)) [i]; }
  colortable(std::initializer_list<color_t> v) : vector(v) {}
  colortable() : vector({0}) {}
  };
#line 40 "colors.cpp"
  color_t darkena3(color_t c, int lev, int a);
#line 44 "colors.cpp"
  color_t darkena(color_t c, int lev, int a);
#line 48 "colors.cpp"
  int darkenedby(int c, int lev);
#line 58 "colors.cpp"
  color_t darkened(color_t c);
#line 75 "colors.cpp"
  color_t gradient(color_t c0, color_t c1, ld v0, ld v, ld v1);
#line 86 "colors.cpp"
  color_t rcolor();
#line 96 "colors.cpp"
  color_t rainbow_color(ld sat, ld hue);
#line 116 "colors.cpp"
  color_t align(color_t col);
#line 125 "colors.cpp"
  enum class eNeon { none, neon, no_boundary, neon2, illustration};
#line 128 "colors.cpp"
  extern eNeon neon_mode;
#line 129 "colors.cpp"
  extern bool neon_nofill;
#line 131 "colors.cpp"
  void apply_neon(color_t& col, int& r);
#line 149 "colors.cpp"
  color_t magentize(color_t x);
#line 161 "colors.cpp"
  color_t monochromatize(color_t x);
#line 169 "colors.cpp"
  extern bool cblind;
#line 172 "colors.cpp"
  void apply_neon_color(color_t col, color_t& pcolor, color_t& poutline, flagtype flags);
#line 230 "colors.cpp"
  int cloakcolor(int rtr);
#line 243 "colors.cpp"
  int firegradient(double p);
#line 247 "colors.cpp"
  int firecolor(int phase IS(0), int mul IS(1));
#line 251 "colors.cpp"
  int watercolor(int phase);
#line 255 "colors.cpp"
  int aircolor(int phase);
#line 259 "colors.cpp"
  int fghostcolor(cell *c);
#line 268 "colors.cpp"
  int weakfirecolor(int phase);
#line 274 "colors.cpp"
  int sealcolor(int phase IS(0));
#line 278 "colors.cpp"
  int barriercolor(int phase IS(0));
#line 282 "colors.cpp"
  int hurricanecolor(int phase IS(0), int type IS(0));
#line 294 "colors.cpp"
  int colorfulcolor(int phase);

  // implemented in: hyperpoint.cpp

#line 16 "hyperpoint.cpp"
  static const ld full_circle = 2 * M_PI;
  static const ld quarter_circle = M_PI / 2;
  static const ld degree = M_PI / 180;
  static const ld golden_phi = (sqrt(5)+1)/2;
  static const ld log_golden_phi = log(golden_phi);
#line 28 "hyperpoint.cpp"
  /** \brief A point in our continuous space
  *
  *  Originally used for representing points in the hyperbolic plane.
  *  Currently used for all kinds of supported spaces, as well as
  *  for all vector spaces (up to 4 dimensions). We are using
  *  the normalized homogeneous coordinates, which allows us to work with most
  *  geometries in HyperRogue in a uniform way.
  
  *  In the hyperbolic plane, this is the Minkowski hyperboloid model:
  *  (x,y,z) such that x*x+y*y-z*z == -1 and z > 0.
  *
  *  In spherical geometry, we have x*x+y*y+z*z == 1.
  *
  *  In Euclidean geometry, we have z = 1.
  *
  *  In isotropic 3D geometries an extra coordinate is added.
  *
  *  In nonisotropic coordinates h[3] == 1.
  *
  *  In product geometries the 'z' coordinate is modelled by multiplying all 
  *  three coordinates with exp(z).
  *
  */
  
  struct hyperpoint : array<ld, MAXMDIM> {
  hyperpoint() {}
  
  #if MAXMDIM == 4
  constexpr hyperpoint(ld x, ld y, ld z, ld w) : array<ld, MAXMDIM> {{x,y,z,w}} {}
  #else
  constexpr hyperpoint(ld x, ld y, ld z, ld w) : array<ld, MAXMDIM> {{x,y,z}} {}
  #endif
  
  inline hyperpoint& operator *= (ld d) {
  for(int i=0; i<MXDIM; i++) self[i] *= d;
  return self;
  }
  
  inline hyperpoint& operator /= (ld d) { 
  for(int i=0; i<MXDIM; i++) self[i] /= d;
  return self;
  }
  
  inline hyperpoint& operator += (const hyperpoint h2) { 
  for(int i=0; i<MXDIM; i++) self[i] += h2[i];
  return self;
  }
  
  inline hyperpoint& operator -= (const hyperpoint h2) { 
  for(int i=0; i<MXDIM; i++) self[i] -= h2[i];
  return self;
  }
  
  inline friend hyperpoint operator * (ld d, hyperpoint h) { return h *= d; }  
  inline friend hyperpoint operator * (hyperpoint h, ld d) { return h *= d; }  
  inline friend hyperpoint operator / (hyperpoint h, ld d) { return h /= d; }  
  inline friend hyperpoint operator + (hyperpoint h, hyperpoint h2) { return h += h2; }
  inline friend hyperpoint operator - (hyperpoint h, hyperpoint h2) { return h -= h2; }
  
  inline friend hyperpoint operator - (hyperpoint h) { return h * -1; }
  
  // cross product  
  inline friend hyperpoint operator ^ (hyperpoint h1, hyperpoint h2) {
  return hyperpoint(
  h1[1] * h2[2] - h1[2] * h2[1],
  h1[2] * h2[0] - h1[0] * h2[2],
  h1[0] * h2[1] - h1[1] * h2[0],
  0
  );
  }
  
  friend ld dot_d(int c, hyperpoint h1, hyperpoint h2) {
  ld sum = 0;
  for(int i=0; i<c; i++) sum += h1[i] * h2[i];
  return sum;
  }
  
  // Euclidean inner product
  inline friend ld operator | (hyperpoint h1, hyperpoint h2) {
  return dot_d(MXDIM, h1, h2);
  }    
  };
  
  /** \brief A matrix acting on hr::hyperpoint 
  *
  *  Since we are using homogeneous coordinates for hr::hyperpoint,
  *  rotations and translations can be represented
  *  as matrix multiplications. Other applications of matrices in HyperRogue 
  *  (in dimension up to 4) are also implemented using transmatrix.
  */
  struct transmatrix {
  ld tab[MAXMDIM][MAXMDIM];
  hyperpoint& operator [] (int i) { return (hyperpoint&)tab[i][0]; }
  const hyperpoint& operator [] (int i) const { return (const hyperpoint&)tab[i]; }
  
  inline friend hyperpoint operator * (const transmatrix& T, const hyperpoint& H) {
  hyperpoint z;
  for(int i=0; i<MXDIM; i++) {
  z[i] = 0;
  for(int j=0; j<MXDIM; j++) z[i] += T[i][j] * H[j];
  }
  return z;
  }
  
  inline friend transmatrix operator * (const transmatrix& T, const transmatrix& U) {
  transmatrix R;
  for(int i=0; i<MXDIM; i++) for(int j=0; j<MXDIM; j++) {
  R[i][j] = 0;
  for(int k=0; k<MXDIM; k++)
  R[i][j] += T[i][k] * U[k][j];
  }
  return R;
  }  
  };
  
  /** @brief hyperpoint with shift 
  *  shift has two uses:
  *  (1) in the 'universal cover of SL' geometry, shift is used for the extra angular coordinate
  *  (2) in band models, shift is used to draw faraway points correctly
  */
  struct shiftpoint {
  hyperpoint h;
  ld shift;
  ld& operator [] (int i) { return h[i]; }
  const ld& operator [] (int i) const { return h[i]; }
  inline friend shiftpoint operator + (const shiftpoint& h, const hyperpoint& h2) {
  return shiftpoint{h.h+h2, h.shift};
  }
  inline friend shiftpoint operator - (const shiftpoint& h, const hyperpoint& h2) {
  return shiftpoint{h.h-h2, h.shift};
  }
  };
  
  inline shiftpoint shiftless(const hyperpoint& h, ld shift = 0) {
  shiftpoint res; res.h = h; res.shift = shift; return res;
  }
  
  struct shiftmatrix {
  transmatrix T;
  ld shift;
  hyperpoint& operator [] (int i) { return T[i]; }
  const hyperpoint& operator [] (int i) const { return T[i]; }
  inline friend shiftpoint operator * (const shiftmatrix& T, const hyperpoint& h) {
  return shiftpoint{T.T*h, T.shift};
  }
  inline friend shiftmatrix operator * (const shiftmatrix& T, const transmatrix& U) {
  return shiftmatrix{T.T*U, T.shift};
  }
  };
  
  inline shiftmatrix shiftless(const transmatrix& T, ld shift = 0) {
  shiftmatrix res; res.T = T; res.shift = shift; return res;
  }
  
  /** returns a diagonal matrix */
  constexpr transmatrix diag(ld a, ld b, ld c, ld d) {
  #if MAXMDIM==3
  return transmatrix{{{a,0,0}, {0,b,0}, {0,0,c}}};
  #else
  return transmatrix{{{a,0,0,0}, {0,b,0,0}, {0,0,c,0}, {0,0,0,d}}};
  #endif
  }
  
  constexpr hyperpoint Hypc = hyperpoint(0, 0, 0, 0);
  
  /** identity matrix */
  constexpr transmatrix Id = diag(1,1,1,1);
  
  /** zero matrix */
  constexpr transmatrix Zero = diag(0,0,0,0);
  
  /** mirror image */
  constexpr transmatrix Mirror = diag(1,-1,1,1);
  
  /** mirror image: flip in the Y coordinate */
  constexpr transmatrix MirrorY = diag(1,-1,1,1);
  
  /** mirror image: flip in the X coordinate */
  constexpr transmatrix MirrorX = diag(-1,1,1,1);
  
  /** mirror image: flip in the Z coordinate */
  constexpr transmatrix MirrorZ = diag(1,1,-1,1);
  
  /** rotate by PI in the XY plane */
  constexpr transmatrix pispin = diag(-1,-1,1,1);
  
  /** central symmetry matrix */
  constexpr transmatrix centralsym = diag(-1,-1,-1,-1);
  
  inline hyperpoint hpxyz(ld x, ld y, ld z) { return MDIM == 3 ? hyperpoint(x,y,z,0) : hyperpoint(x,y,0,z); }
  inline hyperpoint hpxyz3(ld x, ld y, ld z, ld w) { return MDIM == 3 ? hyperpoint(x,y,w,0) : hyperpoint(x,y,z,w); }
  constexpr hyperpoint point3(ld x, ld y, ld z) { return hyperpoint(x,y,z,0); }
  constexpr hyperpoint point30(ld x, ld y, ld z) { return hyperpoint(x,y,z,0); }
  constexpr hyperpoint point31(ld x, ld y, ld z) { return hyperpoint(x,y,z,1); }
  constexpr hyperpoint point2(ld x, ld y) { return hyperpoint(x,y,0,0); }
  
  constexpr hyperpoint C02 = hyperpoint(0,0,1,0);
  constexpr hyperpoint C03 = hyperpoint(0,0,0,1);
  
  /** C0 is the origin in our space */
  #define C0 (MDIM == 3 ? C02 : C03)
#line 238 "hyperpoint.cpp"
  ld squar(ld x);
#line 240 "hyperpoint.cpp"
  int sig(int z);
#line 242 "hyperpoint.cpp"
  int curvature();
#line 252 "hyperpoint.cpp"
  ld sin_auto(ld x);
#line 263 "hyperpoint.cpp"
  ld asin_auto(ld x);
#line 274 "hyperpoint.cpp"
  ld acos_auto(ld x);
#line 285 "hyperpoint.cpp"
  ld volume_auto(ld r);
#line 295 "hyperpoint.cpp"
  ld area_auto(ld r);
#line 305 "hyperpoint.cpp"
  ld wvolarea_auto(ld r);
#line 310 "hyperpoint.cpp"
  ld asin_clamp(ld x);
#line 312 "hyperpoint.cpp"
  ld acos_clamp(ld x);
#line 314 "hyperpoint.cpp"
  ld asin_auto_clamp(ld x);
#line 324 "hyperpoint.cpp"
  ld acos_auto_clamp(ld x);
#line 334 "hyperpoint.cpp"
  ld cos_auto(ld x);
#line 345 "hyperpoint.cpp"
  ld tan_auto(ld x);
#line 356 "hyperpoint.cpp"
  ld atan_auto(ld x);
#line 367 "hyperpoint.cpp"
  ld atan2_auto(ld y, ld x);
#line 381 "hyperpoint.cpp"
  ld edge_of_triangle_with_angles(ld alpha, ld beta, ld gamma);
#line 385 "hyperpoint.cpp"
  hyperpoint hpxy(ld x, ld y);
#line 391 "hyperpoint.cpp"
  hyperpoint hpxy3(ld x, ld y, ld z);
#line 396 "hyperpoint.cpp"
  // a point (I hope this number needs no comments ;) )
  constexpr hyperpoint Cx12 = hyperpoint(1,0,1.41421356237,0);
  constexpr hyperpoint Cx13 = hyperpoint(1,0,0,1.41421356237);
  
  #define Cx1 (GDIM==2?Cx12:Cx13)
#line 403 "hyperpoint.cpp"
  bool zero_d(int d, hyperpoint h);
#line 414 "hyperpoint.cpp"
  ld intval(const hyperpoint &h1, const hyperpoint &h2);
#line 425 "hyperpoint.cpp"
  ld quickdist(const hyperpoint &h1, const hyperpoint &h2);
#line 431 "hyperpoint.cpp"
  ld sqhypot_d(int d, const hyperpoint& h);
#line 438 "hyperpoint.cpp"
  ld hypot_d(int d, const hyperpoint& h);
#line 445 "hyperpoint.cpp"
  transmatrix to_other_side(hyperpoint h1, hyperpoint h2);
#line 467 "hyperpoint.cpp"
  ld material(const hyperpoint& h);
#line 474 "hyperpoint.cpp"
  ld zlevel(const hyperpoint &h);
#line 483 "hyperpoint.cpp"
  ld hypot_auto(ld x, ld y);
#line 497 "hyperpoint.cpp"
  hyperpoint normalize(hyperpoint H);
#line 505 "hyperpoint.cpp"
  hyperpoint ultra_normalize(hyperpoint H);
#line 513 "hyperpoint.cpp"
  hyperpoint normalize_flat(hyperpoint h);
#line 520 "hyperpoint.cpp"
  hyperpoint mid(const hyperpoint& H1, const hyperpoint& H2);
#line 529 "hyperpoint.cpp"
  shiftpoint mid(const shiftpoint& H1, const shiftpoint& H2);
#line 534 "hyperpoint.cpp"
  hyperpoint midz(const hyperpoint& H1, const hyperpoint& H2);
#line 550 "hyperpoint.cpp"
  transmatrix cspin(int a, int b, ld alpha);
#line 558 "hyperpoint.cpp"
  transmatrix spin(ld alpha);
#line 560 "hyperpoint.cpp"
  transmatrix random_spin3();
#line 567 "hyperpoint.cpp"
  transmatrix random_spin();
#line 572 "hyperpoint.cpp"
  transmatrix eupush(ld x, ld y);
#line 579 "hyperpoint.cpp"
  transmatrix euclidean_translate(ld x, ld y, ld z);
#line 587 "hyperpoint.cpp"
  transmatrix euscale(ld x, ld y);
#line 594 "hyperpoint.cpp"
  transmatrix euscale3(ld x, ld y, ld z);
#line 602 "hyperpoint.cpp"
  transmatrix eupush(hyperpoint h, ld co IS(1));
#line 609 "hyperpoint.cpp"
  transmatrix eupush3(ld x, ld y, ld z);
#line 614 "hyperpoint.cpp"
  transmatrix euscalezoom(hyperpoint h);
#line 623 "hyperpoint.cpp"
  transmatrix euaffine(hyperpoint h);
#line 630 "hyperpoint.cpp"
  transmatrix cpush(int cid, ld alpha);
#line 642 "hyperpoint.cpp"
  transmatrix cmirror(int cid);
#line 649 "hyperpoint.cpp"
  transmatrix xpush(ld alpha);
#line 651 "hyperpoint.cpp"
  bool eqmatrix(transmatrix A, transmatrix B, ld eps IS(.01));
  #if MAXMDIM >= 4
#line 661 "hyperpoint.cpp"
  hyperpoint orthogonal_move(const hyperpoint& h, ld z);
  #endif
#line 675 "hyperpoint.cpp"
  transmatrix ypush(ld alpha);
#line 677 "hyperpoint.cpp"
  transmatrix zpush(ld z);
#line 679 "hyperpoint.cpp"
  transmatrix matrix3(ld a, ld b, ld c, ld d, ld e, ld f, ld g, ld h, ld i);
#line 690 "hyperpoint.cpp"
  transmatrix matrix4(ld a, ld b, ld c, ld d, ld e, ld f, ld g, ld h, ld i, ld j, ld k, ld l, ld m, ld n, ld o, ld p);
  #if MAXMDIM >= 4
#line 699 "hyperpoint.cpp"
  void swapmatrix(transmatrix& T);
#line 710 "hyperpoint.cpp"
  void swapmatrix(hyperpoint& h);
  #endif
#line 715 "hyperpoint.cpp"
  transmatrix parabolic1(ld u);
#line 728 "hyperpoint.cpp"
  transmatrix parabolic13(ld u, ld v);
#line 742 "hyperpoint.cpp"
  hyperpoint parabolic10(hyperpoint h);
#line 748 "hyperpoint.cpp"
  hyperpoint deparabolic10(const hyperpoint h);
#line 755 "hyperpoint.cpp"
  transmatrix spintoc(const hyperpoint& H, int t, int f);
#line 769 "hyperpoint.cpp"
  transmatrix rspintoc(const hyperpoint& H, int t, int f);
#line 782 "hyperpoint.cpp"
  transmatrix spintox(const hyperpoint& H);
#line 790 "hyperpoint.cpp"
  transmatrix rspintox(const hyperpoint& H);
#line 800 "hyperpoint.cpp"
  transmatrix pushxto0(const hyperpoint& H);
#line 808 "hyperpoint.cpp"
  void set_column(transmatrix& T, int i, const hyperpoint& H);
#line 813 "hyperpoint.cpp"
  hyperpoint get_column(transmatrix& T, int i);
#line 821 "hyperpoint.cpp"
  transmatrix build_matrix(hyperpoint h1, hyperpoint h2, hyperpoint h3, hyperpoint h4);
#line 836 "hyperpoint.cpp"
  transmatrix rpushxto0(const hyperpoint& H);
#line 843 "hyperpoint.cpp"
  transmatrix ggpushxto0(const hyperpoint& H, ld co);
#line 866 "hyperpoint.cpp"
  transmatrix gpushxto0(const hyperpoint& H);
#line 871 "hyperpoint.cpp"
  transmatrix rgpushxto0(const hyperpoint& H);
#line 875 "hyperpoint.cpp"
  shiftmatrix rgpushxto0(const shiftpoint& H);
#line 886 "hyperpoint.cpp"
  void fixmatrix(transmatrix& T);
#line 901 "hyperpoint.cpp"
  void fixmatrix_euclid(transmatrix& T);
#line 914 "hyperpoint.cpp"
  void orthonormalize(transmatrix& T);
#line 926 "hyperpoint.cpp"
  void fix_rotation(transmatrix& rot);
#line 934 "hyperpoint.cpp"
  ld det2(const transmatrix& T);
#line 939 "hyperpoint.cpp"
  ld det3(const transmatrix& T);
#line 949 "hyperpoint.cpp"
  ld det(const transmatrix& T);
#line 981 "hyperpoint.cpp"
  transmatrix inverse3(const transmatrix& T);
#line 996 "hyperpoint.cpp"
  transmatrix inverse(const transmatrix& T);
#line 1036 "hyperpoint.cpp"
  transmatrix ortho_inverse(transmatrix T);
#line 1044 "hyperpoint.cpp"
  transmatrix pseudo_ortho_inverse(transmatrix T);
#line 1055 "hyperpoint.cpp"
  transmatrix iso_inverse(const transmatrix& T);
#line 1081 "hyperpoint.cpp"
  transmatrix z_inverse(const transmatrix& T);
#line 1086 "hyperpoint.cpp"
  transmatrix view_inverse(transmatrix T);
#line 1093 "hyperpoint.cpp"
  transmatrix iview_inverse(transmatrix T);
#line 1099 "hyperpoint.cpp"
  pair<ld, hyperpoint> product_decompose(hyperpoint h);
#line 1105 "hyperpoint.cpp"
  ld hdist0(const hyperpoint& mh);
#line 1137 "hyperpoint.cpp"
  ld hdist0(const shiftpoint& mh);
#line 1142 "hyperpoint.cpp"
  ld circlelength(ld r);
#line 1156 "hyperpoint.cpp"
  ld hdist(const hyperpoint& h1, const hyperpoint& h2);
#line 1180 "hyperpoint.cpp"
  ld hdist(const shiftpoint& h1, const shiftpoint& h2);
#line 1184 "hyperpoint.cpp"
  hyperpoint mscale(const hyperpoint& t, double fac);
#line 1193 "hyperpoint.cpp"
  shiftpoint mscale(const shiftpoint& t, double fac);
#line 1197 "hyperpoint.cpp"
  transmatrix mscale(const transmatrix& t, double fac);
#line 1213 "hyperpoint.cpp"
  shiftmatrix mscale(const shiftmatrix& t, double fac);
#line 1217 "hyperpoint.cpp"
  transmatrix xyscale(const transmatrix& t, double fac);
#line 1228 "hyperpoint.cpp"
  transmatrix xyzscale(const transmatrix& t, double fac, double facz);
#line 1241 "hyperpoint.cpp"
  shiftmatrix xyzscale(const shiftmatrix& t, double fac, double facz);
#line 1245 "hyperpoint.cpp"
  transmatrix mzscale(const transmatrix& t, double fac);
#line 1259 "hyperpoint.cpp"
  shiftmatrix mzscale(const shiftmatrix& t, double fac);
#line 1263 "hyperpoint.cpp"
  hyperpoint mid3(hyperpoint h1, hyperpoint h2, hyperpoint h3);
#line 1267 "hyperpoint.cpp"
  hyperpoint mid_at(hyperpoint h1, hyperpoint h2, ld v);
#line 1272 "hyperpoint.cpp"
  hyperpoint mid_at_actual(hyperpoint h, ld v);
#line 1277 "hyperpoint.cpp"
  hyperpoint orthogonal_of_C0(hyperpoint h0, hyperpoint h1, hyperpoint h2);
#line 1291 "hyperpoint.cpp"
  hyperpoint zshift(hyperpoint x, ld z);
#line 1298 "hyperpoint.cpp"
  hyperpoint hpxd(ld d, ld x, ld y, ld z);
#line 1304 "hyperpoint.cpp"
  ld signum(ld x);
#line 1306 "hyperpoint.cpp"
  bool asign(ld y1, ld y2);
#line 1308 "hyperpoint.cpp"
  ld xcross(ld x1, ld y1, ld x2, ld y2);
#line 1310 "hyperpoint.cpp"
  transmatrix parallel_transport(const transmatrix Position, const transmatrix& ori, const hyperpoint direction);
#line 1319 "hyperpoint.cpp"
  void apply_parallel_transport(transmatrix& Position, const transmatrix orientation, const hyperpoint direction);
#line 1323 "hyperpoint.cpp"
  void rotate_object(transmatrix& Position, transmatrix& orientation, transmatrix R);
#line 1328 "hyperpoint.cpp"
  transmatrix spin_towards(const transmatrix Position, transmatrix& ori, const hyperpoint goal, int dir, int back);
#line 1352 "hyperpoint.cpp"
  shiftmatrix spin_towards(const shiftmatrix Position, transmatrix& ori, const shiftpoint goal, int dir, int back);
#line 1356 "hyperpoint.cpp"
  ld ortho_error(transmatrix T);
#line 1371 "hyperpoint.cpp"
  transmatrix transpose(transmatrix T);
#line 1380 "hyperpoint.cpp"
  namespace slr { 
  hyperpoint xyz_point(ld x, ld y, ld z); 
  hyperpoint polar(ld r, ld theta, ld phi); 
  }
  
  inline hyperpoint cpush0(int c, ld x) { 
  hyperpoint h = Hypc;
  if(sl2) return slr::xyz_point(c==0?x:0, c==1?x:0, c==2?x:0);
  if(c == 2 && prod) {
  h[2] = exp(x);
  return h;
  }
  h[LDIM] = cos_auto(x);
  h[c] = sin_auto(x);
  return h;
  }
  
  inline hyperpoint xspinpush0(ld alpha, ld x) { 
  if(sl2) return slr::polar(x, -alpha, 0);
  hyperpoint h = Hypc;
  h[LDIM] = cos_auto(x);
  h[0] = sin_auto(x) * cos(alpha);
  h[1] = sin_auto(x) * -sin(alpha);
  return h;
  }
  
  inline hyperpoint xpush0(ld x) { return cpush0(0, x); }
  inline hyperpoint ypush0(ld x) { return cpush0(1, x); }
  inline hyperpoint zpush0(ld x) { return cpush0(2, x); }
  
  /** T * C0, optimized */
  inline hyperpoint tC0(const transmatrix &T) {
  hyperpoint z;
  for(int i=0; i<MXDIM; i++) z[i] = T[i][LDIM];
  return z;
  }
  
  inline hyperpoint tC0_t(const transmatrix &T) { return tC0(T); }
  
  inline shiftpoint tC0(const shiftmatrix &T) {
  return shiftpoint{tC0(T.T), T.shift};
  }
#line 1425 "hyperpoint.cpp"
  hyperpoint ctangent(int c, ld x);
#line 1428 "hyperpoint.cpp"
  hyperpoint xtangent(ld x);
#line 1431 "hyperpoint.cpp"
  hyperpoint ztangent(ld z);
#line 1434 "hyperpoint.cpp"
  hyperpoint tangent_length(hyperpoint dir, ld length);
#line 1441 "hyperpoint.cpp"
  hyperpoint direct_exp(hyperpoint v);
#line 1457 "hyperpoint.cpp"
  constexpr flagtype pfNO_INTERPOLATION = 1; /**< in tables (sol/nih geometries), do not use interpolations */
  constexpr flagtype pfNO_DISTANCE      = 2; /**< we just need the directions -- this makes it a bit faster in sol/nih geometries */
  constexpr flagtype pfLOW_BS_ITER      = 4; /**< low iterations in binary search (nil geometry, sl2 not affected currently) */
  
  constexpr flagtype pQUICK     = pfNO_INTERPOLATION | pfLOW_BS_ITER;
  
  constexpr flagtype pNORMAL    = 0;
#line 1467 "hyperpoint.cpp"
  hyperpoint inverse_exp(const shiftpoint h, flagtype prec IS(pNORMAL));
#line 1486 "hyperpoint.cpp"
  ld geo_dist(const hyperpoint h1, const hyperpoint h2, flagtype prec IS(pNORMAL));
#line 1491 "hyperpoint.cpp"
  ld geo_dist(const shiftpoint h1, const shiftpoint h2, flagtype prec IS(pNORMAL));
#line 1496 "hyperpoint.cpp"
  ld geo_dist_q(const hyperpoint h1, const hyperpoint h2, flagtype prec IS(pNORMAL));
#line 1502 "hyperpoint.cpp"
  hyperpoint lp_iapply(const hyperpoint h);
#line 1506 "hyperpoint.cpp"
  hyperpoint lp_apply(const hyperpoint h);
#line 1510 "hyperpoint.cpp"
  hyperpoint smalltangent();
#line 1512 "hyperpoint.cpp"
  void cyclefix(ld& a, ld b);
#line 1517 "hyperpoint.cpp"
  ld raddif(ld a, ld b);
#line 1525 "hyperpoint.cpp"
  unsigned bucketer(ld x);
#line 1529 "hyperpoint.cpp"
  unsigned bucketer(hyperpoint h);
  #if MAXMDIM >= 4
#line 1544 "hyperpoint.cpp"
  hyperpoint project_on_triangle(hyperpoint h1, hyperpoint h2, hyperpoint h3);
  #endif
#line 1561 "hyperpoint.cpp"
  hyperpoint lerp(hyperpoint a0, hyperpoint a1, ld x);
#line 1565 "hyperpoint.cpp"
  hyperpoint linecross(hyperpoint a, hyperpoint b, hyperpoint c, hyperpoint d);
#line 1587 "hyperpoint.cpp"
  ld inner2(hyperpoint h1, hyperpoint h2);
#line 1594 "hyperpoint.cpp"
  hyperpoint circumscribe(hyperpoint a, hyperpoint b, hyperpoint c);
#line 1643 "hyperpoint.cpp"
  ld inner3(hyperpoint h1, hyperpoint h2);
#line 1651 "hyperpoint.cpp"
  hyperpoint circumscribe(hyperpoint a, hyperpoint b, hyperpoint c, hyperpoint d);
#line 1680 "hyperpoint.cpp"
  bool clockwise(hyperpoint h1, hyperpoint h2);

  // implemented in: geometry.cpp

#line 12 "geometry.cpp"
  struct usershapelayer {
  vector<hyperpoint> list;
  bool sym;
  int rots;
  color_t color;
  hyperpoint shift, spin;
  ld zlevel;
  int texture_offset;
  PPR prio;
  };
  
  extern int usershape_changes;
  
  static const int USERLAYERS = 32;
  
  struct usershape { usershapelayer d[USERLAYERS]; };
  
  struct hpcshape {
  int s, e;
  PPR prio;
  int flags;
  hyperpoint intester;
  struct basic_textureinfo *tinf;
  int texture_offset;
  int shs, she;
  void clear() { s = e = shs = she = texture_offset = 0; prio = PPR::ZERO; tinf = NULL; flags = 0; }
  };
  
  #define SIDE_SLEV 0
  #define SIDE_WTS3 3
  #define SIDE_WALL 4
  #define SIDE_LAKE 5
  #define SIDE_LTOB 6
  #define SIDE_BTOI 7
  #define SIDE_SKY  8
  #define SIDE_HIGH 9
  #define SIDE_HIGH2 10
  #define SIDE_ASHA 11
  #define SIDE_BSHA 12
  #define SIDEPARS  13
  
  /** GOLDBERG_BITS controls the size of tables for Goldberg: 2*(x+y) should be below (1<<GOLDBERG_BITS) */
  
  #ifndef GOLDBERG_BITS
  #define GOLDBERG_BITS 5
  #endif
  
  static const int GOLDBERG_LIMIT = (1<<GOLDBERG_BITS);
  static const int GOLDBERG_MASK = (GOLDBERG_LIMIT-1);
  
  #ifndef BADMODEL
  #define BADMODEL 0
  #endif
  
  #ifndef WINGS
  static const int WINGS = (BADMODEL ? 1 : 4);
  #endif
  
  typedef array<hpcshape, WINGS+1> hpcshape_animated;
  
  extern vector<hpcshape> shPlainWall3D, shWireframe3D, shWall3D, shMiniWall3D;
  
  struct floorshape {
  bool is_plain;
  int shapeid;
  int id;
  int pstrength; // pattern strength in 3D
  int fstrength; // frame strength in 3D
  PPR prio;
  vector<hpcshape> b, shadow, side[SIDEPARS], levels[SIDEPARS], cone[2];
  vector<vector<hpcshape>> gpside[SIDEPARS];
  floorshape() { prio = PPR::FLOOR; pstrength = fstrength = 10; }
  };
  
  struct plain_floorshape : floorshape {
  ld rad0, rad1;
  void configure(ld r0, ld r1) { rad0 = r0; rad1 = r1; }
  };
  
  extern vector<ld> equal_weights;
  
  // noftype: 0 (shapeid2 is heptagonal or just use shapeid1), 1 (shapeid2 is pure heptagonal), 2 (shapeid2 is Euclidean), 3 (shapeid2 is hexagonal)
  struct escher_floorshape : floorshape {
  int shapeid0, shapeid1, noftype, shapeid2;
  ld scale;
  };
  
  struct basic_textureinfo {
  int texture_id;
  vector<glvertex> tvertices; 
  vector<glvertex> colors; 
  };
  
  /** additional modules can add extra shapes etc. */
  struct gi_extension {
  virtual ~gi_extension() {}
  };
  
  /** both for 'heptagon' 3D cells and subdivided 3D cells */
  struct subcellshape {
  /** \brief raw coordinates of vertices of all faces */
  vector<vector<hyperpoint>> faces;
  /** \brief raw coordinates of all vertices in one vector */
  vector<hyperpoint> vertices_only;
  /** \brief cooked coordinates of vertices of all faces, computed from faces as: from_cellcenter * final_coords(v) */
  vector<vector<hyperpoint>> faces_local;
  /** \brief cooked coordinates of all vertices in one vector */
  vector<hyperpoint> vertices_only_local;
  /** \brief weights -- used to generate wall shapes in some geometries, empty otherwise */
  vector<vector<double>> weights;
  /** the center of every raw face */
  vector<hyperpoint> face_centers;
  vector<vector<char>> dirdist;
  hyperpoint cellcenter;
  transmatrix to_cellcenter;
  transmatrix from_cellcenter;
  /** \brief for adjacent directions a,b, next_dir[a][b] is the next direction adjacent to a, in (counter?)clockwise order from b */
  vector<vector<char>> next_dir;
  /** useful in product geometries */
  vector<hyperpoint> walltester;
  
  /** compute all the properties based on `faces`, for the main heptagon cellshape */
  void compute_hept();
  
  /** compute all the properties based on `faces`, for subcells */
  void compute_sub();
  
  /** common part of compute_hept and compute_sub */
  void compute_common();
  };
  
  /** basic geometry parameters */
  struct geometry_information {
  
  /** distance from heptagon center to another heptagon center */
  ld tessf;
  
  /** distance from heptagon center to adjacent cell center (either hcrossf or tessf) */
  ld crossf;
  
  /** distance from heptagon center to small heptagon vertex */
  ld hexf;
  
  /** distance from heptagon center to big heptagon vertex */
  ld hcrossf;
  
  /** distance between adjacent hexagon vertices */
  ld hexhexdist;
  
  /** distance between hexagon vertex and hexagon center */
  ld hexvdist;
  
  /** distance between heptagon vertex and hexagon center (either hcrossf or something else) */
  ld hepvdist;
  
  /** distance from heptagon center to heptagon vertex (either hexf or hcrossf) */
  ld rhexf;
  
  /** basic parameters for 3D geometries */
  map<int, int> close_distances;
  
  int loop, face, schmid;
  
  transmatrix spins[32], adjmoves[32];
  
  unique_ptr<struct subcellshape> heptshape;  
  vector<struct subcellshape> subshapes;
  
  ld adjcheck;
  ld strafedist;
  
  ld ultra_mirror_dist, ultra_material_part, ultra_mirror_part;
  
  vector<transmatrix> ultra_mirrors;  
  
  vector<pair<string, string> > rels;
  int xp_order, r_order, rx_order;
  
  transmatrix full_X, full_R, full_P;
  
  /** for 2D geometries */
  vector<transmatrix> heptmove, hexmove, invhexmove;
  
  int base_distlimit;
  
  /** size of the Sword (from Orb of the Sword), used in the shmup mode */
  ld sword_size;
  /** scale factor for the graphics of most things*/
  ld scalefactor;
  ld orbsize, floorrad0, floorrad1, zhexf;
  ld corner_bonus;
  ld hexshift;
  ld asteroid_size[8];
  ld wormscale;
  ld tentacle_length;
  /** level in product geometries */
  ld plevel;
  /** level for a z-step */
  int single_step;
  /** the number of levels in PSL */
  int psl_steps;
  
  /** for binary tilings */
  transmatrix direct_tmatrix[14];
  transmatrix inverse_tmatrix[14];
  
  /** a bitmask for hr::bt::use_direct_for */  
  int use_direct;
  
  /** various parameters related to the 3D view */
  ld INFDEEP, BOTTOM, HELLSPIKE, LAKE, WALL, FLOOR, STUFF,
  SLEV[4], FLATEYE,
  LEG0, LEG1, LEG, LEG3, GROIN, GROIN1, GHOST,
  BODY, BODY1, BODY2, BODY3,
  NECK1, NECK, NECK3, HEAD, HEAD1, HEAD2, HEAD3,
  ALEG0, ALEG, ABODY, AHEAD, BIRD, LOWSKY, SKY, HIGH, HIGH2,
  SHALLOW;
  ld human_height, slev;
  
  ld eyelevel_familiar, eyelevel_human, eyelevel_dog;
  
  #if CAP_SHAPES
  hpcshape 
  shSemiFloorSide[SIDEPARS],
  shBFloor[2],
  shWave[8][2],  
  shCircleFloor,
  shBarrel,
  shWall[2], shMineMark[2], shBigMineMark[2], shFan,
  shZebra[5],
  shSwitchDisk,
  shTower[11],
  shEmeraldFloor[6],
  shSemiFeatherFloor[2], 
  shSemiFloor[2], shSemiBFloor[2], shSemiFloorShadow,
  shMercuryBridge[2],
  shTriheptaSpecial[14], 
  shCross, shGiantStar[2], shLake, shMirror,
  shHalfFloor[6], shHalfMirror[3],
  shGem[2], shStar, shDisk, shDiskT, shDiskS, shDiskM, shDiskSq, shRing,   
  shTinyBird, shTinyShark,
  shEgg,
  shSpikedRing, shTargetRing, shSawRing, shGearRing, shPeaceRing, shHeptaRing,
  shSpearRing, shLoveRing,
  shFrogRing, 
  shPowerGearRing, shProtectiveRing, shTerraRing, shMoveRing, shReserved4, shMoonDisk,
  shDaisy, shTriangle, shNecro, shStatue, shKey, shWindArrow,
  shGun,
  shFigurine, shTreat,
  shElementalShard,
  // shBranch, 
  shIBranch, shTentacle, shTentacleX, shILeaf[3], 
  shMovestar,
  shWolf, shYeti, shDemon, shGDemon, shEagle, shGargoyleWings, shGargoyleBody,
  shFoxTail1, shFoxTail2,
  shDogBody, shDogHead, shDogFrontLeg, shDogRearLeg, shDogFrontPaw, shDogRearPaw,
  shDogTorso,
  shHawk,
  shCatBody, shCatLegs, shCatHead, shFamiliarHead, shFamiliarEye,
  shWolf1, shWolf2, shWolf3,
  shRatEye1, shRatEye2, shRatEye3,
  shDogStripes,
  shPBody, shPSword, shPKnife,
  shFerocityM, shFerocityF, 
  shHumanFoot, shHumanLeg, shHumanGroin, shHumanNeck, shSkeletalFoot, shYetiFoot,
  shMagicSword, shMagicShovel, shSeaTentacle, shKrakenHead, shKrakenEye, shKrakenEye2,
  shArrow,
  shBrushHandle, shBrushBrush,
  shPalette, shPaletteCol1, shPaletteCol2, shPaletteCol3, shPaletteCol4,
  shPHead, shPFace, shGolemhead, shHood, shArmor, 
  shAztecHead, shAztecCap,
  shSabre, shTurban1, shTurban2, shVikingHelmet, shRaiderHelmet, shRaiderArmor, shRaiderBody, shRaiderShirt,
  shWestHat1, shWestHat2, shGunInHand,
  shKnightArmor, shKnightCloak, shWightCloak,
  shGhost, shEyes, shSlime, shJelly, shJoint, shWormHead, shTentHead, shShark, shWormSegment, shSmallWormSegment, shWormTail, shSmallWormTail,
  shSlimeEyes, shDragonEyes, shWormEyes, shGhostEyes,
  shMiniGhost, shMiniEyes,
  shHedgehogBlade, shHedgehogBladePlayer,
  shWolfBody, shWolfHead, shWolfLegs, shWolfEyes,
  shWolfFrontLeg, shWolfRearLeg, shWolfFrontPaw, shWolfRearPaw,
  shFemaleBody, shFemaleHair, shFemaleDress, shWitchDress,
  shWitchHair, shBeautyHair, shFlowerHair, shFlowerHand, shSuspenders, shTrophy,
  shBugBody, shBugArmor, shBugLeg, shBugAntenna,
  shPickAxe, shPike, shFlailBall, shFlailTrunk, shFlailChain, shHammerHead,
  shBook, shBookCover, shGrail,
  shBoatOuter, shBoatInner, shCompass1, shCompass2, shCompass3,
  shKnife, shTongue, shFlailMissile, shTrapArrow,
  shPirateHook, shPirateHood, shEyepatch, shPirateX,
  // shScratch, 
  shHeptaMarker, shSnowball, shHugeDisk, shSun, shNightStar, shEuclideanSky,
  shSkeletonBody, shSkull, shSkullEyes, shFatBody, shWaterElemental,
  shPalaceGate, shFishTail,
  shMouse, shMouseLegs, shMouseEyes,
  shPrincessDress, shPrinceDress,
  shWizardCape1, shWizardCape2,
  shBigCarpet1, shBigCarpet2, shBigCarpet3,
  shGoatHead, shRose, shRoseItem, shThorns,
  shRatHead, shRatTail, shRatEyes, shRatCape1, shRatCape2,
  shWizardHat1, shWizardHat2,
  shTortoise[13][6],
  shDragonLegs, shDragonTail, shDragonHead, shDragonSegment, shDragonNostril, 
  shDragonWings, 
  shSolidBranch, shWeakBranch, shBead0, shBead1,
  shBatWings, shBatBody, shBatMouth, shBatFang, shBatEye,
  shParticle[16], shAsteroid[8],
  shReptile[5][4],
  shReptileBody, shReptileHead, shReptileFrontFoot, shReptileRearFoot,
  shReptileFrontLeg, shReptileRearLeg, shReptileTail, shReptileEye,
  
  shTrylobite, shTrylobiteHead, shTrylobiteBody,
  shTrylobiteFrontLeg, shTrylobiteRearLeg, shTrylobiteFrontClaw, shTrylobiteRearClaw,
  
  shBullBody, shBullHead, shBullHorn, shBullRearHoof, shBullFrontHoof,
  
  shButterflyBody, shButterflyWing, shGadflyBody, shGadflyWing, shGadflyEye,
  
  shTerraArmor1, shTerraArmor2, shTerraArmor3, shTerraHead, shTerraFace, 
  shJiangShi, shJiangShiDress, shJiangShiCap1, shJiangShiCap2,
  
  shPikeBody, shPikeEye,
  
  shAsymmetric,
  
  shPBodyOnly, shPBodyArm, shPBodyHand, shPHeadOnly,
  
  shDodeca;
  
  hpcshape shFrogRearFoot, shFrogFrontFoot, shFrogRearLeg, shFrogFrontLeg, shFrogRearLeg2, shFrogBody, shFrogEye, shFrogStripe, shFrogJumpFoot, shFrogJumpLeg;
  
  hpcshape_animated 
  shAnimatedEagle, shAnimatedTinyEagle, shAnimatedGadfly, shAnimatedHawk, shAnimatedButterfly, 
  shAnimatedGargoyle, shAnimatedGargoyle2, shAnimatedBat, shAnimatedBat2;
  
  hpcshape shTinyArrow;
  
  hpcshape shReserved[16];
  
  int orb_inner_ring; //< for shDisk* shapes, the number of vertices in the inner ring
  int res1, res2;
  
  map<int, hpcshape> shPipe;
  
  vector<hpcshape> shPlainWall3D, shWireframe3D, shWall3D, shMiniWall3D;
  vector<hyperpoint> walltester;
  
  vector<int> wallstart;
  vector<transmatrix> raywall;
  
  vector<struct plain_floorshape*> all_plain_floorshapes;
  vector<struct escher_floorshape*> all_escher_floorshapes;
  
  plain_floorshape
  shFloor, 
  shMFloor, shMFloor2, shMFloor3, shMFloor4, shFullFloor,
  shBigTriangle, shTriheptaFloor, shBigHepta;
  
  escher_floorshape    
  shStarFloor, shCloudFloor, shCrossFloor, shChargedFloor,
  shSStarFloor, shOverFloor, shTriFloor, shFeatherFloor,
  shBarrowFloor, shNewFloor, shTrollFloor, shButterflyFloor,
  shLavaFloor, shLavaSeabed, shSeabed, shCloudSeabed,
  shCaveSeabed, shPalaceFloor, shDemonFloor, shCaveFloor,
  shDesertFloor, shPowerFloor, shRoseFloor, shSwitchFloor,
  shTurtleFloor, shRedRockFloor[3], shDragonFloor;
  
  ld dlow_table[SIDEPARS], dhi_table[SIDEPARS], dfloor_table[SIDEPARS];
  
  int prehpc;
  vector<hyperpoint> hpc;
  bool first;
  
  bool validsidepar[SIDEPARS];
  
  vector<glvertex> ourshape;
  #endif
  
  hpcshape shFullCross[2];
  hpcshape *last;
  
  int SD3, SD6, SD7, S12, S14, S21, S28, S42, S36, S84;
  
  vector<pair<int, cell*>> walloffsets;
  
  vector<array<int, 3>> symmetriesAt;
  
  struct cellrotation_t {
  transmatrix M;
  vector<int> mapping;
  int inverse_id;
  };
  
  vector<cellrotation_t> cellrotations;  
  
  #ifndef SCALETUNER
  static constexpr
  #endif
  double bscale7 = 1, brot7 = 0, bscale6 = 1, brot6 = 0;
  
  vector<hpcshape*> allshapes;
  
  transmatrix shadowmulmatrix;
  
  map<usershapelayer*, hpcshape> ushr;
  
  void prepare_basics();
  void prepare_compute3();
  void prepare_shapes();
  void prepare_usershapes();
  
  void hpcpush(hyperpoint h);
  void hpcsquare(hyperpoint h1, hyperpoint h2, hyperpoint h3, hyperpoint h4);
  void chasmifyPoly(double fac, double fac2, int k);
  void shift(hpcshape& sh, double dx, double dy, double dz);
  void initPolyForGL();
  void extra_vertices();
  transmatrix ddi(int a, ld x);
  void drawTentacle(hpcshape &h, ld rad, ld var, ld divby);
  hyperpoint hpxyzsc(double x, double y, double z);
  hyperpoint turtlevertex(int u, double x, double y, double z);
  
  void bshape(hpcshape& sh, PPR prio);
  void finishshape();
  void bshape(hpcshape& sh, PPR prio, double shzoom, int shapeid, double bonus = 0, flagtype flags = 0);
  
  void copyshape(hpcshape& sh, hpcshape& orig, PPR prio);
  void zoomShape(hpcshape& old, hpcshape& newsh, double factor, PPR prio);
  void pushShape(usershapelayer& ds);
  void make_sidewalls();
  void procedural_shapes();
  void make_wall(int id, const vector<hyperpoint> vertices, vector<ld> weights = equal_weights);
  
  void reserve_wall3d(int i);
  void compute_cornerbonus();
  void create_wall3d();
  void configure_floorshapes();
  
  void init_floorshapes();
  void bshape2(hpcshape& sh, PPR prio, int shapeid, struct matrixlist& m);
  void bshape_regular(floorshape &fsh, int id, int sides, ld shift, ld size, cell *model);
  void generate_floorshapes_for(int id, cell *c, int siid, int sidir);
  void generate_floorshapes();
  void make_floor_textures_here();
  
  vector<hyperpoint> get_shape(hpcshape sh);
  void add_cone(ld z0, const vector<hyperpoint>& vh, ld z1);
  void add_prism_sync(ld z0, vector<hyperpoint> vh0, ld z1, vector<hyperpoint> vh1);
  void add_prism(ld z0, vector<hyperpoint> vh0, ld z1, vector<hyperpoint> vh1);
  void shift_last(ld z);
  void shift_shape(hpcshape& sh, ld z);
  void shift_shape_orthogonally(hpcshape& sh, ld z);
  void add_texture(hpcshape& sh);
  void make_ha_3d(hpcshape& sh, bool isarmor, ld scale);
  void make_humanoid_3d(hpcshape& sh);
  void addtri(array<hyperpoint, 3> hs, int kind);
  void make_armor_3d(hpcshape& sh, int kind = 1); 
  void make_foot_3d(hpcshape& sh);
  void make_head_only();
  void make_head_3d(hpcshape& sh);
  void make_paw_3d(hpcshape& sh, hpcshape& legsh);
  void make_abody_3d(hpcshape& sh, ld tail);
  void make_ahead_3d(hpcshape& sh);
  void make_skeletal(hpcshape& sh, ld push = 0);
  void make_revolution(hpcshape& sh, int mx = 180, ld push = 0);
  void make_revolution_cut(hpcshape &sh, int each = 180, ld push = 0, ld width = 99);
  void clone_shape(hpcshape& sh, hpcshape& target);
  void animate_bird(hpcshape& orig, hpcshape_animated& animated, ld body);
  void slimetriangle(hyperpoint a, hyperpoint b, hyperpoint c, ld rad, int lev);
  void balltriangle(hyperpoint a, hyperpoint b, hyperpoint c, ld rad, int lev);
  void make_ball(hpcshape& sh, ld rad, int lev);
  void make_star(hpcshape& sh, ld rad);
  void make_euclidean_sky();
  void adjust_eye(hpcshape& eye, hpcshape head, ld shift_eye, ld shift_head, int q, ld zoom=1);
  void shift_last_straight(ld z);
  void queueball(const transmatrix& V, ld rad, color_t col, eItem what);
  void make_shadow(hpcshape& sh);
  void make_3d_models();
  
  /* Goldberg parameters */
  #if CAP_GP
  struct gpdata_t {
  vector<array<array<array<transmatrix, 6>, GOLDBERG_LIMIT>, GOLDBERG_LIMIT>> Tf;
  transmatrix corners;
  ld alpha;
  int area;
  int pshid[3][8][GOLDBERG_LIMIT][GOLDBERG_LIMIT][8];
  int nextid;
  };
  shared_ptr<gpdata_t> gpdata = nullptr;
  #endif
  
  int state = 0;
  int usershape_state = 0;
  
  /** contains the texture point coordinates for 3D models */
  basic_textureinfo models_texture;
  
  geometry_information() { last = NULL; }
  
  void require_basics() { if(state & 1) return; state |= 1; prepare_basics(); }
  void require_shapes() { if(state & 2) return; state |= 2; prepare_shapes(); }
  void require_usershapes() { if(usershape_state == usershape_changes) return; usershape_state = usershape_changes; prepare_usershapes(); }
  int timestamp;
  
  hpcshape& generate_pipe(ld length, ld width);
  
  map<string, unique_ptr<gi_extension>> ext;
  };
#line 521 "geometry.cpp"
  subcellshape& get_hsh();
#line 526 "geometry.cpp"
  void add_wall(int i, const vector<hyperpoint>& h);
#line 538 "geometry.cpp"
  static const ld hcrossf7 = 0.620672, hexf7 = 0.378077, tessf7 = 1.090550, hexhexdist7 = 0.566256;
#line 541 "geometry.cpp"
  bool scale_used();
#line 543 "geometry.cpp"
  bool is_subcube_based(eVariation var);
#line 547 "geometry.cpp"
  bool is_reg3_variation(eVariation var);
#line 804 "geometry.cpp"
  transmatrix xspinpush(ld dir, ld dist);
#line 811 "geometry.cpp"
  extern purehookset hooks_swapdim;
  namespace geom3 {
#line 822 "geometry.cpp"
    ld abslev_to_projection(ld abslev);
#line 841 "geometry.cpp"
    ld factor_to_projection(ld fac);
#line 845 "geometry.cpp"
    ld lev_to_factor(ld lev);
#line 851 "geometry.cpp"
    ld factor_to_lev(ld fac);
#line 857 "geometry.cpp"
    void do_auto_eye();
#line 869 "geometry.cpp"
    ld scale_at_lev(ld lev);
#line 874 "geometry.cpp"
    extern string invalid;
#line 876 "geometry.cpp"
    ld actual_wall_height();
    }
  namespace geom3 {
#line 999 "geometry.cpp"
    void apply_always3();
    #if MAXMDIM >= 4
#line 1018 "geometry.cpp"
    void switch_always3();
    #endif
#line 1030 "geometry.cpp"
    void switch_tpp();
#line 1051 "geometry.cpp"
    void switch_fpp();
    }
#line 1104 "geometry.cpp"
  extern geometry_information *cgip;
#line 1105 "geometry.cpp"
  extern map<string, geometry_information> cgis;
#line 1108 "geometry.cpp"
  #define cgi (*cgip)
#line 1111 "geometry.cpp"
  extern int last_texture_step;
#line 1115 "geometry.cpp"
  extern hookset<void(string&)> hooks_cgi_string;
#line 1117 "geometry.cpp"
  string cgi_string();
#line 1192 "geometry.cpp"
  void check_cgi();

  // implemented in: goldberg.cpp

#line 14 "goldberg.cpp"
  struct hrmap;
  extern hrmap *currentmap;
  namespace gp {
#line 21 "goldberg.cpp"
    struct loc : pair<int, int> {
    loc() {}
    
    loc(int x, int y) : pair<int,int> (x,y) {}
    
    loc operator+(loc e2) {
    return loc(first+e2.first, second+e2.second);
    }
    
    loc operator-(loc e2) {
    return loc(first-e2.first, second-e2.second);
    }
    
    loc operator*(loc e2) {
    return loc(first*e2.first-second*e2.second, 
    first*e2.second + e2.first*second + (S3 == 3 ? second*e2.second : 0));
    }
    
    loc operator*(int i) {
    return loc(first*i, second*i);
    }  
    
    int operator %(int i) {
    return gmod(first, i) + gmod(second, i);
    }
    
    loc operator /(int i) {
    return loc(first/i, second/i);
    }
    
    loc conj() {
    if(S3 == 4) return loc(first, -second);
    return loc(first+second, -second);
    }
    
    };
    
    struct local_info {
    int last_dir;
    loc relative;
    int first_dir;
    int total_dir;
    };
#line 66 "goldberg.cpp"
    extern local_info current_li;
#line 67 "goldberg.cpp"
    extern cell *li_for;
#line 69 "goldberg.cpp"
    loc eudir(int d);
#line 91 "goldberg.cpp"
    int length(loc p);
    #if CAP_GP
#line 96 "goldberg.cpp"
    extern loc param;
#line 98 "goldberg.cpp"
    extern hyperpoint next;
#line 108 "goldberg.cpp"
    int fixg6(int x);
#line 113 "goldberg.cpp"
    int get_code(const local_info& li);
#line 121 "goldberg.cpp"
    local_info get_local_info(cell *c);
#line 157 "goldberg.cpp"
    int last_dir(cell *c);
#line 161 "goldberg.cpp"
    loc get_coord(cell *c);
#line 165 "goldberg.cpp"
    int pseudohept_val(cell *c);
#line 231 "goldberg.cpp"
    extern bool do_adjm;
#line 285 "goldberg.cpp"
    extern map<pair<cell*, int>, transmatrix> gp_adj;
#line 287 "goldberg.cpp"
    transmatrix& get_adj(cell *c, int i);
#line 297 "goldberg.cpp"
    void extend_map(cell *c, int d);
#line 536 "goldberg.cpp"
    hyperpoint loctoh_ort(loc at);
#line 623 "goldberg.cpp"
    hyperpoint get_corner_position(const local_info& li, int cid, ld cf IS(3));
#line 633 "goldberg.cpp"
    hyperpoint get_corner_position(cell *c, int cid, ld cf IS(3));
#line 639 "goldberg.cpp"
    void compute_geometry(bool inv);
#line 686 "goldberg.cpp"
    loc human_representation(loc v);
#line 693 "goldberg.cpp"
    eVariation variation_for(loc xy);
#line 912 "goldberg.cpp"
    loc univ_param();
#line 918 "goldberg.cpp"
    void configure();
#line 925 "goldberg.cpp"
    void be_in_triangle(local_info& li);
#line 942 "goldberg.cpp"
    int solve_triangle(int dmain, int d0, int d1, loc at);
#line 993 "goldberg.cpp"
    hyperpoint get_master_coordinates(cell *c);
#line 999 "goldberg.cpp"
    int compute_dist(cell *c, int master_function(cell*));
#line 1023 "goldberg.cpp"
    int dist_2();
#line 1027 "goldberg.cpp"
    int dist_3();
#line 1031 "goldberg.cpp"
    int dist_1();
#line 1035 "goldberg.cpp"
    int dist_1();
#line 1036 "goldberg.cpp"
    int dist_2();
#line 1037 "goldberg.cpp"
    int dist_3();
    #endif
#line 1040 "goldberg.cpp"
    array<heptagon*, 3> get_masters(cell *c);
#line 1063 "goldberg.cpp"
    string operation_name();
#line 1113 "goldberg.cpp"
    extern hrmap *pmap;
#line 1337 "goldberg.cpp"
    hrmap* new_inverse();
#line 1341 "goldberg.cpp"
    hrmap* get_underlying_map();
#line 1342 "goldberg.cpp"
    cell* get_mapped(cell *c);
#line 1343 "goldberg.cpp"
    int untruncated_shift(cell *c);
#line 1345 "goldberg.cpp"
    void delete_mapped(cell *c);
#line 1352 "goldberg.cpp"
    cell *inverse_move(cell *c, int d);
#line 1355 "goldberg.cpp"
    template<class T> auto in_underlying_geometry(const T& f) -> decltype(f()) {
    if(!INVERSE) return f();
    dynamicval<hrmap*> gpm(pmap, currentmap);
    dynamicval<eVariation> gva(variation, variation_for(param));
    dynamicval<hrmap*> gu(currentmap, get_underlying_map());
    // dynamicval<geometry_information*> gc(cgip, underlying_cgip);
    return f();
    }
    
    #define UIU(x) hr::gp::in_underlying_geometry([&] { return (x); })
    }

  // implemented in: floorshapes.cpp

  #if CAP_SHAPES
#line 14 "floorshapes.cpp"
  struct qfloorinfo {
  transmatrix spin;
  const struct hpcshape *shape;
  floorshape *fshape;
  struct textureinfo *tinf;
  int usershape;
  };
  
  extern qfloorinfo qfi;
#line 25 "floorshapes.cpp"
  extern vector<basic_textureinfo> floor_texture_vertices;
#line 26 "floorshapes.cpp"
  extern vector<glvertex> floor_texture_map;
#line 27 "floorshapes.cpp"
  extern struct renderbuffer *floor_textures;
#line 130 "floorshapes.cpp"
  hyperpoint kleinize(hyperpoint h);
#line 135 "floorshapes.cpp"
  hyperpoint may_kleinize(hyperpoint h);
  #if CAP_GP
  namespace gp {
#line 845 "floorshapes.cpp"
    void clear_plainshapes();
#line 870 "floorshapes.cpp"
    int get_plainshape_id(cell *c);
    }
  #endif
#line 920 "floorshapes.cpp"
  void set_no_floor();
#line 927 "floorshapes.cpp"
  void set_floor(floorshape& sh);
#line 934 "floorshapes.cpp"
  void set_floor(hpcshape& sh);
#line 942 "floorshapes.cpp"
  void set_floor(const transmatrix& spin, hpcshape& sh);
#line 949 "floorshapes.cpp"
  int shvid(cell *c);
#line 997 "floorshapes.cpp"
  struct dqi_poly *draw_shapevec(cell *c, const shiftmatrix& V, const vector<hpcshape> &shv, color_t col, PPR prio IS(PPR::DEFAULT));
#line 1036 "floorshapes.cpp"
  void draw_floorshape(cell *c, const shiftmatrix& V, const floorshape &fsh, color_t col, PPR prio IS(PPR::DEFAULT));
#line 1041 "floorshapes.cpp"
  void draw_qfi(cell *c, const shiftmatrix& V, color_t col, PPR prio IS(PPR::DEFAULT), vector<hpcshape> floorshape::* tab IS(&floorshape::b));
#line 1060 "floorshapes.cpp"
  extern bool floorshape_debug;
#line 1061 "floorshapes.cpp"
  void viewmat();
  #endif
  #if MAXMDIM < 4 || !CAP_GL
#line 1092 "floorshapes.cpp"
  void ensure_vertex_number(basic_textureinfo& bti, int qty);
#line 1093 "floorshapes.cpp"
  void ensure_vertex_number(hpcshape& sh);
#line 1094 "floorshapes.cpp"
  void bind_floor_texture(hpcshape& li, int id);
  #endif
  #if MAXMDIM >= 4 && CAP_GL
#line 1099 "floorshapes.cpp"
  extern ld floor_texture_square_size;
#line 1193 "floorshapes.cpp"
  void ensure_vertex_number(basic_textureinfo& bti, int qty);
#line 1202 "floorshapes.cpp"
  void ensure_vertex_number(hpcshape& sh);
#line 1206 "floorshapes.cpp"
  void bind_floor_texture(hpcshape& li, int id);
#line 1212 "floorshapes.cpp"
  const int FLOORTEXTURESIZE = 4096;
#line 1300 "floorshapes.cpp"
  void make_floor_textures();
  #endif

  // implemented in: cell.cpp

#line 14 "cell.cpp"
  extern int default_levs();
  
  struct hrmap {
  virtual heptagon *getOrigin() { return NULL; }
  virtual cell *gamestart() { return getOrigin()->c7; }
  virtual ~hrmap() { }
  virtual vector<cell*>& allcells();
  virtual void verify() { }
  virtual void on_dim_change() { }
  virtual bool link_alt(heptagon *h, heptagon *alt, hstate firststate, int dir);
  virtual void extend_altmap(heptagon *h, int levs = default_levs(), bool link_cdata = true);
  heptagon *may_create_step(heptagon *h, int direction) {
  if(h->move(direction)) return h->move(direction);
  return create_step(h, direction);
  }
  virtual heptagon *create_step(heptagon *h, int direction);
  private:
  virtual transmatrix relative_matrixh(heptagon *h2, heptagon *h1, const hyperpoint& hint);
  virtual transmatrix relative_matrixc(cell *c2, cell *c1, const hyperpoint& hint);
  public:
  transmatrix relative_matrix(heptagon *h2, heptagon *h1, const hyperpoint& hint) { return relative_matrixh(h2, h1, hint); }
  transmatrix relative_matrix(cell *h2, cell *h1, const hyperpoint& hint) { return relative_matrixc(h2, h1, hint); }
  
  virtual transmatrix adj(cell *c, int i) { return adj(c->master, i); }
  virtual transmatrix adj(heptagon *h, int i);
  transmatrix iadj(cell *c, int i) { cell *c1 = c->cmove(i); return adj(c1, c->c.spin(i)); }
  transmatrix iadj(heptagon *h, int d) { 
  heptagon *h1 = h->cmove(d); return adj(h1, h->c.spin(d));
  }
  virtual void draw_all();
  virtual void draw_at(cell *at, const shiftmatrix& where);
  
  virtual void virtualRebase(heptagon*& base, transmatrix& at);
  
  static constexpr ld SPIN_NOT_AVAILABLE = 1e5;
  virtual ld spin_angle(cell *c, int d) { return SPIN_NOT_AVAILABLE; }
  
  virtual transmatrix spin_to(cell *c, int d, ld bonus=0);
  virtual transmatrix spin_from(cell *c, int d, ld bonus=0);
  
  virtual double spacedist(cell *c, int i) { return hdist0(tC0(adj(c, i))); }
  
  virtual bool strict_tree_rules() { return false; }
  
  virtual void find_cell_connection(cell *c, int d);
  virtual int shvid(cell *c) { return 0; }
  virtual int full_shvid(cell *c) { return shvid(c); }
  virtual hyperpoint get_corner(cell *c, int cid, ld cf=3) { return C0; }
  virtual transmatrix master_relative(cell *c, bool get_inverse = false) { return Id; }
  virtual int wall_offset(cell *c);
  
  virtual transmatrix ray_iadj(cell *c, int i);
  
  virtual subcellshape& get_cellshape(cell *c);
  
  /** \brief in 3D honeycombs, returns a cellwalker res at cw->move(j) such that the face pointed at by cw and res share an edge */
  virtual cellwalker strafe(cellwalker cw, int j);
  
  /** \brief in 3D honeycombs, returns a vector<bool> v, where v[j] iff faces i and j are adjacent */
  const vector<char>& dirdist(cellwalker cw) { return get_cellshape(cw.at).dirdist[cw.spin]; }
  
  /** \brief the sequence of heptagon movement direction to get from c->master to c->move(i)->master; implemented only for reg3 */
  virtual const vector<int>& get_move_seq(cell *c, int i);
  };
  
  /** hrmaps which are based on regular non-Euclidean 2D tilings, possibly quotient  
  *  Operators can be applied to these maps. 
  *  Liskov substitution warning: maps which produce both tiling like above and 3D tilings
  *  (e.g. Euclidean and Crystal) also inherit from hrmap_standard
  **/
  struct hrmap_standard : hrmap {
  void draw_at(cell *at, const shiftmatrix& where) override;
  transmatrix relative_matrixh(heptagon *h2, heptagon *h1, const hyperpoint& hint) override;
  transmatrix relative_matrixc(cell *c2, cell *c1, const hyperpoint& hint) override;
  heptagon *create_step(heptagon *h, int direction) override;
  transmatrix adj(cell *c, int d) override;
  transmatrix adj(heptagon *h, int d) override;
  ld spin_angle(cell *c, int d) override;
  double spacedist(cell *c, int i) override;
  void find_cell_connection(cell *c, int d) override;
  virtual int shvid(cell *c) override;
  virtual hyperpoint get_corner(cell *c, int cid, ld cf) override;
  virtual transmatrix master_relative(cell *c, bool get_inverse) override;
  virtual bool link_alt(heptagon *h, heptagon *alt, hstate firststate, int dir) override;
  };
  
  void clearfrom(heptagon*);
  void verifycells(heptagon*);
  
  struct hrmap_hyperbolic : hrmap_standard {
  heptagon *origin;
  hrmap_hyperbolic();
  hrmap_hyperbolic(heptagon *origin);
  heptagon *getOrigin() override { return origin; }
  ~hrmap_hyperbolic() {
  // verifycells(origin);
  // printf("Deleting hyperbolic map: %p\n", hr::voidp(this));
  clearfrom(origin);
  }
  void verify() override { verifycells(origin); }
  void virtualRebase(heptagon*& base, transmatrix& at) override;
  };
#line 200 "cell.cpp"
  int dirdiff(int dd, int t);
#line 207 "cell.cpp"
  extern int cellcount;
#line 209 "cell.cpp"
  void destroy_cell(cell *c);
#line 214 "cell.cpp"
  cell *newCell(int type, heptagon *master);
#line 226 "cell.cpp"
  extern hrmap *currentmap;
#line 227 "cell.cpp"
  extern vector<hrmap*> allmaps;
#line 229 "cell.cpp"
  hrmap *newAltMap(heptagon *o);
#line 240 "cell.cpp"
  heptagon* hyperbolic_origin();
#line 313 "cell.cpp"
  cell *createMov(cell *c, int d);
#line 321 "cell.cpp"
  void eumerge(cell* c1, int s1, cell *c2, int s2, bool mirror);
#line 329 "cell.cpp"
  extern hookset<hrmap*()> hooks_newmap;
#line 332 "cell.cpp"
  void initcells();
#line 375 "cell.cpp"
  void clearcell(cell *c);
#line 392 "cell.cpp"
  extern heptagon deletion_marker;
#line 405 "cell.cpp"
  void clearHexes(heptagon *at);
#line 424 "cell.cpp"
  void clear_heptagon(heptagon *at);
#line 429 "cell.cpp"
  void clearfrom(heptagon *at);
#line 473 "cell.cpp"
  void verifycell(cell *c);
#line 487 "cell.cpp"
  void verifycells(heptagon *at);
#line 498 "cell.cpp"
  int compdist(int dx[]);
#line 515 "cell.cpp"
  int celldist(cell *c);
#line 541 "cell.cpp"
  static const int ALTDIST_BOUNDARY = 99999;
  static const int ALTDIST_UNKNOWN = 99998;
  static const int ALTDIST_ERROR = 90000;
#line 546 "cell.cpp"
  int celldistAlt(cell *c);
#line 602 "cell.cpp"
  int updir(heptagon *h);
#line 618 "cell.cpp"
  int updir_alt(heptagon *h);
#line 632 "cell.cpp"
  static const int RPV_MODULO = 5;
  static const int RPV_RAND = 0;
  static const int RPV_ZEBRA = 1;
  static const int RPV_EMERALD = 2;
  static const int RPV_PALACE = 3;
  static const int RPV_CYCLE = 4;
#line 646 "cell.cpp"
  bool randpattern(cell *c, int rval);
#line 689 "cell.cpp"
  string describeRPM(eLand l);
#line 709 "cell.cpp"
  int randpatternCode(cell *c, int rval);
#line 724 "cell.cpp"
  #define RANDITER 31
#line 729 "cell.cpp"
  void clearMemoRPM();
#line 734 "cell.cpp"
  bool randpatternMajority(cell *c, int ival, int iterations);
#line 761 "cell.cpp"
  bool geometry_supports_cdata();
#line 783 "cell.cpp"
  bool dmeq(int a, int b);
  #if CAP_ARCM
#line 1000 "cell.cpp"
  gp::loc pseudocoords(cell *c);
#line 1005 "cell.cpp"
  cdata *arcmCdata(cell *c);
  #endif
#line 1019 "cell.cpp"
  int getCdata(cell *c, int j);
#line 1045 "cell.cpp"
  int getBits(cell *c);
#line 1071 "cell.cpp"
  cell *heptatdir(cell *c, int d);
#line 1081 "cell.cpp"
  int heptdistance(heptagon *h1, heptagon *h2);
#line 1099 "cell.cpp"
  int heptdistance(cell *c1, cell *c2);
#line 1109 "cell.cpp"
  extern set<cell*> keep_distances_from;
#line 1115 "cell.cpp"
  void compute_saved_distances(cell *c1, int max_range, int climit);
#line 1123 "cell.cpp"
  void permanent_long_distances(cell *c1);
#line 1131 "cell.cpp"
  void erase_saved_distances();
#line 1138 "cell.cpp"
  int max_saved_distance(cell *c);
#line 1144 "cell.cpp"
  cell *random_in_distance(cell *c, int d);
#line 1152 "cell.cpp"
  int bounded_celldistance(cell *c1, cell *c2);
#line 1175 "cell.cpp"
  int clueless_celldistance(cell *c1, cell *c2);
#line 1192 "cell.cpp"
  int celldistance(cell *c1, cell *c2);
#line 1242 "cell.cpp"
  vector<cell*> build_shortest_path(cell *c1, cell *c2);
#line 1295 "cell.cpp"
  void clearCellMemory();
#line 1311 "cell.cpp"
  bool isNeighbor(cell *c1, cell *c2);
#line 1316 "cell.cpp"
  bool isNeighborCM(cell *c1, cell *c2);
#line 1321 "cell.cpp"
  int neighborId(cell *ofWhat, cell *whichOne);
#line 1326 "cell.cpp"
  extern int mine_adjacency_rule;
#line 1328 "cell.cpp"
  extern map<cell*, vector<cell*>> adj_memo;
#line 1330 "cell.cpp"
  bool geometry_has_alt_mine_rule();
#line 1337 "cell.cpp"
  vector<cell*> adj_minefield_cells(cell *c);
#line 1384 "cell.cpp"
  vector<int> reverse_directions(cell *c, int dir);
#line 1393 "cell.cpp"
  vector<int> reverse_directions(heptagon *c, int dir);
#line 1436 "cell.cpp"
  bool standard_tiling();
#line 1440 "cell.cpp"
  int valence();
#line 1451 "cell.cpp"
  bool is_boundary(cell *c);
#line 1457 "cell.cpp"
  int auto_compute_range(cell *c);
#line 1477 "cell.cpp"
  extern cell out_of_bounds;
#line 1478 "cell.cpp"
  extern heptagon oob;

  // implemented in: multi.cpp

  namespace multi {
#line 14 "multi.cpp"
    static const int MAXJOY = 8;
    static const int MAXBUTTON = 64;
    static const int MAXAXE = 16;
    static const int MAXHAT = 4;
    
    struct config {
    char keyaction[512];
    char joyaction[MAXJOY][MAXBUTTON];
    char axeaction[MAXJOY][MAXAXE];
    char hataction[MAXJOY][MAXHAT][4];
    int  deadzoneval[MAXJOY][MAXAXE];
    };
#line 28 "multi.cpp"
    extern config scfg;  
#line 29 "multi.cpp"
    extern charstyle scs[MAXPLAYER];
#line 31 "multi.cpp"
    extern int players;
#line 32 "multi.cpp"
    extern cellwalker player[MAXPLAYER];
#line 33 "multi.cpp"
    extern vector<int> revive_queue; // queue for revival
#line 35 "multi.cpp"
    extern cell *origpos[MAXPLAYER], *origtarget[MAXPLAYER];
#line 37 "multi.cpp"
    extern bool flipped[MAXPLAYER];
#line 40 "multi.cpp"
    extern int treasures[MAXPLAYER], kills[MAXPLAYER], deaths[MAXPLAYER];
#line 42 "multi.cpp"
    extern bool alwaysuse;
#line 44 "multi.cpp"
    void recall();
#line 58 "multi.cpp"
    extern shiftmatrix whereis[MAXPLAYER];
#line 59 "multi.cpp"
    extern shiftmatrix crosscenter[MAXPLAYER];
#line 60 "multi.cpp"
    extern double ccdist[MAXPLAYER];
#line 61 "multi.cpp"
    extern cell *ccat[MAXPLAYER];
#line 65 "multi.cpp"
    extern int cpid; // player id -- an extra parameter for player-related functions
#line 66 "multi.cpp"
    extern int cpid_edit; // cpid currently being edited
#line 68 "multi.cpp"
    extern movedir whereto[MAXPLAYER]; // player's target cell  
#line 70 "multi.cpp"
    extern double mdx[MAXPLAYER], mdy[MAXPLAYER]; // movement vector for the next move
#line 113 "multi.cpp"
    #define SHMUPAXES_BASE 4
    #define SHMUPAXES ((SHMUPAXES_BASE) + 4 * (MAXPLAYER))
    #define SHMUPAXES_CUR ((SHMUPAXES_BASE) + 4 * playercfg)
#line 118 "multi.cpp"
    extern const char* axemodes[SHMUPAXES];
#line 153 "multi.cpp"
    extern const char* axemodes3[4];
#line 160 "multi.cpp"
    extern int centerplayer;
#line 204 "multi.cpp"
    void resetScores();
#line 213 "multi.cpp"
    string player_count_name(int p);
#line 302 "multi.cpp"
    reaction_t get_key_configurer(int sc, vector<string>& sct, string caption);
#line 306 "multi.cpp"
    reaction_t get_key_configurer(int sc, vector<string>& sct);
#line 381 "multi.cpp"
    extern const char *axmodes[7];
#line 492 "multi.cpp"
    void configure();
#line 496 "multi.cpp"
    void showConfigureMultiplayer();
#line 530 "multi.cpp"
    #define NUMACT 128
    
    enum pcmds {
    pcForward, pcBackward, pcTurnLeft, pcTurnRight,
    pcMoveUp, pcMoveRight, pcMoveDown, pcMoveLeft,
    pcFire, pcFace, pcFaceFire,
    pcDrop, pcCenter, pcOrbPower, pcOrbKey
    };
#line 540 "multi.cpp"
    extern int actionspressed[NUMACT], axespressed[SHMUPAXES], lactionpressed[NUMACT];
#line 547 "multi.cpp"
    bool notremapped(int sym);
#line 555 "multi.cpp"
    void initConfig();
#line 713 "multi.cpp"
    void handleInput(int delta);
#line 811 "multi.cpp"
    extern int tableid[7];
#line 813 "multi.cpp"
    void leaveGame(int i);
#line 820 "multi.cpp"
    bool playerActive(int p);
#line 825 "multi.cpp"
    int activePlayers();
#line 831 "multi.cpp"
    cell *multiPlayerTarget(int i);
#line 842 "multi.cpp"
    void checklastmove();
#line 856 "multi.cpp"
    void handleMulti(int delta);
#line 997 "multi.cpp"
    void mousemovement(cell *c);
    }

  // implemented in: shmup.cpp

  namespace shmupballs {
#line 13 "shmup.cpp"
    extern int xmove, xfire, yb, rad;
#line 15 "shmup.cpp"
    void calc();
    }
#line 30 "shmup.cpp"
  #define SCALE cgi.scalefactor
  #define SCALE2 (SCALE*SCALE)
  namespace shmup {
#line 37 "shmup.cpp"
    struct monster {
    eMonster type;
    cell *base;
    cell *torigin; 
    // tortoises: origin
    // butterflies: last position
    transmatrix at;
    shiftmatrix pat;
    /** orientation for the product geometry */
    transmatrix ori;
    eMonster stk;
    bool dead;
    bool notpushed;
    bool inBoat;
    bool no_targetting;
    monster *parent; // who shot this missile
    int nextshot;    // when will it be able to shot (players/flailers)
    int pid;         // player ID
    int hitpoints;   // hitpoints; or time elapsed in Asteroids
    int stunoff;
    int blowoff;
    double swordangle; // sword angle wrt at
    double vel;        // velocity, for flail balls
    double footphase;
    bool isVirtual;  // off the screen: gmatrix is unknown, and pat equals at
    hyperpoint inertia;// for frictionless lands
    
    int refs;         // +1 for every reference (parent, lists of active monsters)
    
    monster() { 
    dead = false; inBoat = false; parent = NULL; nextshot = 0; 
    stunoff = 0; blowoff = 0; footphase = 0; no_targetting = false;
    swordangle = 0; inertia = Hypc; ori = Id; refs = 1;
    }
    
    eMonster get_parenttype() { return parent ? parent->type : moNone; }
    
    void store();
    
    void findpat();
    
    cell *findbase(const shiftmatrix& T, int maxsteps);
    
    void rebasePat(const shiftmatrix& new_pat, cell *tgt);
    
    void remove_reference() {
    refs--;
    if(!refs) {
    if(parent) parent->remove_reference();
    delete this;
    }
    }
    
    void set_parent(monster *par) {
    if(parent) parent->remove_reference();
    parent = par;
    parent->refs++;
    }
    
    };  
#line 106 "shmup.cpp"
    extern bool on;
#line 107 "shmup.cpp"
    extern bool delayed_safety;
#line 108 "shmup.cpp"
    extern eLand delayed_safety_land;
#line 112 "shmup.cpp"
    extern multimap<cell*, monster*> monstersAt;
#line 115 "shmup.cpp"
    typedef multimap<cell*, monster*>::iterator mit;
#line 255 "shmup.cpp"
    extern monster *pc[MAXPLAYER], *mousetarget, *lmousetarget;
#line 257 "shmup.cpp"
    extern int curtime, nextmove, nextdragon;
#line 265 "shmup.cpp"
    extern hookset<bool(shmup::monster*)> hooks_kill;
#line 292 "shmup.cpp"
    void pushmonsters();
#line 302 "shmup.cpp"
    void popmonsters();
#line 321 "shmup.cpp"
    void degradeDemons();
#line 329 "shmup.cpp"
    extern double playerturn[MAXPLAYER], playergo[MAXPLAYER], playerstrafe[MAXPLAYER], playerturny[MAXPLAYER], playergoturn[MAXPLAYER], godir[MAXPLAYER];
#line 330 "shmup.cpp"
    extern transmatrix playersmallspin[MAXPLAYER];
#line 377 "shmup.cpp"
    void visibleFor(int t);
#line 437 "shmup.cpp"
    void killThePlayer(eMonster m);
#line 599 "shmup.cpp"
    extern transmatrix swordmatrix[MAXPLAYER];
#line 642 "shmup.cpp"
    void activateArrow(cell *c);
#line 1379 "shmup.cpp"
    monster *getPlayer();
#line 1402 "shmup.cpp"
    int reflect(cell*& c2, cell*& mbase, shiftmatrix& nat);
#line 1493 "shmup.cpp"
    bool verifyTeleport();
#line 1505 "shmup.cpp"
    void teleported();
#line 1554 "shmup.cpp"
    eItem targetRangedOrb(orbAction a);
#line 1638 "shmup.cpp"
    int protect_pid(int i);
#line 1869 "shmup.cpp"
    bool dragonbreath(cell *dragon);
#line 2503 "shmup.cpp"
    void fixStorage();
#line 2515 "shmup.cpp"
    extern hookset<bool(int)> hooks_turn;
#line 2517 "shmup.cpp"
    void turn(int delta);
#line 2777 "shmup.cpp"
    void recall();
#line 2791 "shmup.cpp"
    void init();
#line 2821 "shmup.cpp"
    bool boatAt(cell *c);
#line 2831 "shmup.cpp"
    extern hookset<bool(const shiftmatrix&, cell*, shmup::monster*)> hooks_draw;
#line 2833 "shmup.cpp"
    void clearMonsters();
#line 2843 "shmup.cpp"
    void clearMemory();
#line 2873 "shmup.cpp"
    cell *playerpos(int i);
#line 2878 "shmup.cpp"
    bool playerInBoat(int i);
#line 2883 "shmup.cpp"
    void destroyBoats(cell *c);
#line 2889 "shmup.cpp"
    void virtualRebase(shmup::monster *m);
#line 2893 "shmup.cpp"
    extern hookset<bool(shmup::monster*, string&)> hooks_describe;
#line 2895 "shmup.cpp"
    void addShmupHelp(string& out);
#line 2917 "shmup.cpp"
    void switch_shmup();
    }

  // implemented in: pattern2.cpp

#line 15 "pattern2.cpp"
  enum cpatterntype { 
  cpFootball, cpThree, cpChess, cpSingle, cpSingleSym, cpOddEven, cpLarge, cpZebra, cpUnknown
  };
#line 20 "pattern2.cpp"
  void enable_canvas();
#line 26 "pattern2.cpp"
  int ctof(cell *c);
#line 38 "pattern2.cpp"
  int ctof012(cell *c);
#line 67 "pattern2.cpp"
  bool ishept(cell *c);
#line 75 "pattern2.cpp"
  bool ishex1(cell *c);
#line 95 "pattern2.cpp"
  int chessvalue(cell *c);
#line 131 "pattern2.cpp"
  int emeraldval(heptagon *h);
#line 133 "pattern2.cpp"
  int emeraldval(cell *c);
#line 182 "pattern2.cpp"
  int cdist50(cell *c);
#line 214 "pattern2.cpp"
  bool polara50(cell *c);
#line 226 "pattern2.cpp"
  bool polarb50(cell *c);
#line 243 "pattern2.cpp"
  int fiftyval049(heptagon *h);
#line 259 "pattern2.cpp"
  int fiftyval049(cell *c);
#line 296 "pattern2.cpp"
  int fiftyval200(cell *c);
#line 334 "pattern2.cpp"
  int zebra40(cell *c);
#line 396 "pattern2.cpp"
  int zebra3(cell *c);
  #if CAP_FIELD
  namespace fieldpattern {
#line 416 "pattern2.cpp"
    pair<int, bool> fieldval(cell *c);
#line 422 "pattern2.cpp"
    int fieldval_uniq(cell *c);
#line 465 "pattern2.cpp"
    int fieldval_uniq_rand(cell *c, int randval);
    }
  #endif
#line 512 "pattern2.cpp"
  int getHemisphere(heptagon *h, int which);
#line 541 "pattern2.cpp"
  int getHemisphere(cell *c, int which);
  namespace patterns {
#line 617 "pattern2.cpp"
    enum ePattern : char {
    PAT_NONE = 0,
    PAT_TYPES = 'T',
    PAT_ZEBRA = 'z',
    PAT_EMERALD = 'f',
    PAT_PALACE = 'p',
    PAT_FIELD = 'F',
    PAT_DOWN = 'H',
    PAT_COLORING = 'C',
    PAT_SIBLING = 'S',
    PAT_CHESS = 'c',
    PAT_SINGLETYPE = 't'
    };  
    
    static const int SPF_ROT = 1;
    static const int SPF_SYM01 = 2;
    static const int SPF_SYM02 = 4;
    static const int SPF_SYM03 = 8;
    static const int SPF_CHANGEROT = 16;
    static const int SPF_TWOCOL = 32;
    static const int SPF_EXTRASYM = 64;
    static const int SPF_ALTERNATE = 128;
    static const int SPF_FOOTBALL = 256;
    static const int SPF_FULLSYM = 512;
    static const int SPF_DOCKS = 1024;
    static const int SPF_NO_SUBCODES = 2048;
    
    static const int SPF_SYM0123 = SPF_SYM01 | SPF_SYM02 | SPF_SYM03;
    
    struct patterninfo {
    int id;
    int dir;
    bool reflect;
    /** 1 if all symmetries, c->type if no symmetries */
    int symmetries;
    };
#line 702 "pattern2.cpp"
    int downdir(cell *c, const cellfunction& cf);
#line 785 "pattern2.cpp"
    void val38(cell *c, patterninfo &si, int sub, int pat);
#line 1013 "pattern2.cpp"
    extern ePattern whichPattern;
#line 1015 "pattern2.cpp"
    extern int subpattern_flags;
#line 1052 "pattern2.cpp"
    patterninfo getpatterninfo(cell *c, ePattern pat, int sub);
#line 1275 "pattern2.cpp"
    inline patterninfo getpatterninfo0(cell *c) {
    return getpatterninfo(c, whichPattern, subpattern_flags);
    }
    }
#line 1282 "pattern2.cpp"
  bool geosupport_chessboard();
#line 1295 "pattern2.cpp"
  int geosupport_threecolor();
#line 1316 "pattern2.cpp"
  int geosupport_football();
#line 1346 "pattern2.cpp"
  int pattern_threecolor(cell *c);
#line 1470 "pattern2.cpp"
  bool pseudohept(cell *c);
#line 1506 "pattern2.cpp"
  bool kraken_pseudohept(cell *c);
#line 1530 "pattern2.cpp"
  bool warptype(cell *c);
#line 1539 "pattern2.cpp"
  extern map<char, colortable> colortables;
  namespace patterns {
#line 1588 "pattern2.cpp"
    extern int canvasback;
#line 1589 "pattern2.cpp"
    extern int subcanvas;
#line 1590 "pattern2.cpp"
    extern bool displaycodes;
#line 1591 "pattern2.cpp"
    extern char whichShape;
#line 1592 "pattern2.cpp"
    extern char whichCanvas;
#line 1593 "pattern2.cpp"
    extern bool innerwalls;
#line 1601 "pattern2.cpp"
    extern string color_formula;
#line 1754 "pattern2.cpp"
    extern hookset<int(cell*)> hooks_generate_canvas;
#line 1756 "pattern2.cpp"
    extern int jhole;
#line 1757 "pattern2.cpp"
    extern int jblock;
#line 1758 "pattern2.cpp"
    extern int rwalls;
#line 1760 "pattern2.cpp"
    void edit_rwalls();
#line 1766 "pattern2.cpp"
    int generateCanvas(cell *c);
#line 2159 "pattern2.cpp"
    void showPrePattern();
#line 2160 "pattern2.cpp"
    void showPrePatternNoninstant();
#line 2169 "pattern2.cpp"
    void showPattern();
#line 2345 "pattern2.cpp"
    bool compatible(cpatterntype oldp, cpatterntype newp);
#line 2455 "pattern2.cpp"
    extern cpatterntype cgroup, old_cgroup;
#line 2526 "pattern2.cpp"
    void computeCgroup();
#line 2553 "pattern2.cpp"
    void pushChangeablePatterns();
    }
#line 2559 "pattern2.cpp"
  bool is_master(cell *c);
  namespace linepatterns {
#line 2567 "pattern2.cpp"
    struct linepattern {
    string lpname;
    color_t color;
    ld multiplier;
    function<bool()> is_available;
    function<void(linepattern*)> renderer;
    
    linepattern(string _lpname, color_t _color, function<bool()> _av, function<void(linepattern*)> _rend) : 
    lpname(_lpname), color(_color), multiplier(1), is_available(_av), renderer(_rend) {}
    };
#line 2723 "pattern2.cpp"
    extern linepattern patZebraTriangles;
#line 2736 "pattern2.cpp"
    extern linepattern patZebraLines;
#line 2789 "pattern2.cpp"
    extern linepattern patPalace;
#line 2934 "pattern2.cpp"
    extern linepattern patTriTree, patTriRings, patTriOther;
#line 2937 "pattern2.cpp"
    extern vector<linepattern*> patterns;
#line 2947 "pattern2.cpp"
    void clearAll();
#line 2951 "pattern2.cpp"
    extern ld width;
#line 2953 "pattern2.cpp"
    void drawAll();
#line 2972 "pattern2.cpp"
    void showMenu();
    }

  // implemented in: mapeditor.cpp

  namespace mapeditor {
#line 13 "mapeditor.cpp"
    extern bool drawing_tool;
#line 14 "mapeditor.cpp"
    extern bool intexture;
#line 17 "mapeditor.cpp"
    enum eShapegroup { sgPlayer, sgMonster, sgItem, sgFloor, sgWall };
    static const int USERSHAPEGROUPS = 5;
#line 21 "mapeditor.cpp"
    extern color_t dtfill;
#line 22 "mapeditor.cpp"
    extern color_t dtcolor;
#line 23 "mapeditor.cpp"
    extern ld dtwidth;
#line 157 "mapeditor.cpp"
    void clear_dtshapes();
#line 159 "mapeditor.cpp"
    void draw_dtshapes();
#line 197 "mapeditor.cpp"
    void dt_add_line(shiftpoint h1, shiftpoint h2, int maxl);
#line 215 "mapeditor.cpp"
    void dt_add_circle(shiftpoint h1, shiftpoint h2);
#line 229 "mapeditor.cpp"
    void dt_add_text(shiftpoint h, ld size, string cap);
#line 262 "mapeditor.cpp"
    void dt_finish();
#line 267 "mapeditor.cpp"
    void dt_add_free(shiftpoint h);
#line 285 "mapeditor.cpp"
    void dt_erase(shiftpoint h);
#line 303 "mapeditor.cpp"
    extern shiftpoint lstart;
#line 304 "mapeditor.cpp"
    extern hyperpoint lstart_rel;
#line 312 "mapeditor.cpp"
    struct editwhat {
    double dist;
    int rotid, symid, pointid;
    bool side;
    cell *c;
    };
#line 319 "mapeditor.cpp"
    extern editwhat ew, ewsearch;
#line 320 "mapeditor.cpp"
    extern bool autochoose;
#line 322 "mapeditor.cpp"
    void scaleall(ld z, bool keep_mouse);
    #if CAP_EDIT
#line 349 "mapeditor.cpp"
    extern map<int, cell*> modelcell;
#line 353 "mapeditor.cpp"
    void applyModelcell(cell *c);
    #endif
    }
#line 378 "mapeditor.cpp"
  struct hstream;
  struct fhstream;
  namespace mapstream {
    #if CAP_EDIT
#line 385 "mapeditor.cpp"
    extern std::map<cell*, int> cellids;
#line 386 "mapeditor.cpp"
    extern vector<cell*> cellbyid;
#line 387 "mapeditor.cpp"
    extern vector<char> relspin;
#line 430 "mapeditor.cpp"
    int fixspin(int rspin, int dir, int t, int vernum);
    #endif
#line 442 "mapeditor.cpp"
    void save_geometry(hstream& f);
#line 517 "mapeditor.cpp"
    void load_geometry(hstream& f);
#line 635 "mapeditor.cpp"
    extern hookset<void(fhstream&)> hooks_savemap, hooks_loadmap_old;
#line 636 "mapeditor.cpp"
    extern hookset<void(fhstream&, int)> hooks_loadmap;
#line 638 "mapeditor.cpp"
    cell *save_start();
    #if CAP_EDIT  
#line 986 "mapeditor.cpp"
    bool saveMap(const char *fname);
#line 998 "mapeditor.cpp"
    bool loadMap(const string& fname);
    #endif
    }
  namespace mapeditor {
#line 1023 "mapeditor.cpp"
    extern bool drawplayer;
#line 1025 "mapeditor.cpp"
    extern cell *drawcell;
    #if CAP_EDIT
#line 1160 "mapeditor.cpp"
    extern set<cell*> affected;
#line 1161 "mapeditor.cpp"
    extern set<int> affected_id;
#line 1163 "mapeditor.cpp"
    void showMapEditor();
#line 1206 "mapeditor.cpp"
    eShapegroup drawcellShapeGroup();
#line 1214 "mapeditor.cpp"
    int drawcellShapeID();
#line 1617 "mapeditor.cpp"
    extern shiftmatrix drawtrans, drawtransnew;
#line 1629 "mapeditor.cpp"
    void drawGhosts(cell *c, const shiftmatrix& V, int ct);
#line 1658 "mapeditor.cpp"
    shiftpoint find_mouseh3();
#line 1700 "mapeditor.cpp"
    void drawGrid();
#line 1816 "mapeditor.cpp"
    void showDrawEditor();
    #endif
#line 2693 "mapeditor.cpp"
    void initdraw(cell *c);
#line 2708 "mapeditor.cpp"
    void queue_hcircle(shiftmatrix Ctr, ld radius);
    #if CAP_POLY
#line 2722 "mapeditor.cpp"
    bool haveUserShape(eShapegroup group, int id);
    #endif
    #if CAP_TEXTURE      
#line 2732 "mapeditor.cpp"
    void draw_texture_ghosts(cell *c, const shiftmatrix& V);
    #endif
    #if CAP_POLY
#line 2768 "mapeditor.cpp"
    bool drawUserShape(const shiftmatrix& V, eShapegroup group, int id, color_t color, cell *c, PPR prio IS(PPR::DEFAULT));
    #endif
#line 2911 "mapeditor.cpp"
    void map_settings();
    }
  #if CAP_EDIT
#line 2949 "mapeditor.cpp"
  extern string levelfile;
#line 2950 "mapeditor.cpp"
  extern const char *loadlevel;
#line 2951 "mapeditor.cpp"
  extern string picfile;
  #endif

  // implemented in: graph.cpp

#line 11 "graph.cpp"
  extern int last_firelimit;
#line 12 "graph.cpp"
  extern int firelimit;
#line 14 "graph.cpp"
  extern int inmirrorcount;
#line 17 "graph.cpp"
  extern bool wallopt;
#line 19 "graph.cpp"
  bool in_wallopt();
#line 21 "graph.cpp"
  extern bool spatial_graphics;
#line 22 "graph.cpp"
  extern bool wmspatial, wmescher, wmplain, wmblack, wmascii, wmascii3;
#line 23 "graph.cpp"
  extern bool mmspatial, mmhigh, mmmon, mmitem;
#line 25 "graph.cpp"
  extern ld panini_alpha;
#line 26 "graph.cpp"
  extern ld stereo_alpha;
#line 28 "graph.cpp"
  extern int detaillevel;
#line 30 "graph.cpp"
  extern bool first_cell_to_draw;
#line 32 "graph.cpp"
  bool in_perspective();
#line 36 "graph.cpp"
  bool in_perspective_v();
#line 40 "graph.cpp"
  bool hide_player();
#line 66 "graph.cpp"
  extern hookset<bool(int sym, int uni)> hooks_handleKey;
#line 67 "graph.cpp"
  extern hookset<bool(cell *c, const shiftmatrix& V)> hooks_drawcell;
#line 68 "graph.cpp"
  extern purehookset hooks_frame, hooks_markers;
#line 70 "graph.cpp"
  extern ld animation_factor;
#line 71 "graph.cpp"
  extern int animation_lcm;
#line 73 "graph.cpp"
  ld ptick(int period, ld phase IS(0));
#line 78 "graph.cpp"
  ld fractick(int period, ld phase IS(0));
#line 85 "graph.cpp"
  ld sintick(int period, ld phase IS(0));
#line 89 "graph.cpp"
  transmatrix spintick(int period, ld phase IS(0));
#line 101 "graph.cpp"
  extern bool inHighQual; // taking high quality screenshot
#line 102 "graph.cpp"
  extern bool auraNOGL;    // aura without GL
#line 107 "graph.cpp"
  extern int ticks;
#line 108 "graph.cpp"
  extern int frameid;
#line 110 "graph.cpp"
  extern bool camelotcheat;
#line 111 "graph.cpp"
  extern bool nomap;
#line 113 "graph.cpp"
  extern eItem orbToTarget;
#line 114 "graph.cpp"
  extern eMonster monsterToSummon;
#line 116 "graph.cpp"
  extern int sightrange_bonus;
#line 118 "graph.cpp"
  extern string mouseovers;
#line 120 "graph.cpp"
  extern int darken;
#line 131 "graph.cpp"
  bool doHighlight();
#line 143 "graph.cpp"
  int flip_dark(int f, int a0, int a1);
#line 166 "graph.cpp"
  extern int lightat, safetyat;
#line 167 "graph.cpp"
  void drawLightning();
#line 168 "graph.cpp"
  void drawSafety();
#line 247 "graph.cpp"
  ld cheilevel(ld v);
#line 251 "graph.cpp"
  transmatrix chei(const transmatrix V, int a, int b);
#line 260 "graph.cpp"
  shiftmatrix chei(const shiftmatrix V, int a, int b);
#line 327 "graph.cpp"
  void drawPlayerEffects(const shiftmatrix& V, cell *c, bool onplayer);
  namespace tortoise {
#line 496 "graph.cpp"
    int getMatchColor(int bits);
    }
#line 517 "graph.cpp"
  extern bool ivoryz;
#line 574 "graph.cpp"
  extern bool noshadow;
  #if CAP_SHAPES
#line 577 "graph.cpp"
  void ShadowV(const shiftmatrix& V, const hpcshape& bp, PPR prio IS(PPR::MONSTER_SHADOW));
  #endif
#line 702 "graph.cpp"
  bool drawstar(cell *c);
#line 710 "graph.cpp"
  bool drawing_usershape_on(cell *c, mapeditor::eShapegroup sg);
#line 718 "graph.cpp"
  color_t kind_outline(eItem it);
#line 728 "graph.cpp"
  shiftmatrix face_the_player(const shiftmatrix V);
#line 744 "graph.cpp"
  hpcshape& orbshape(eOrbshape s);
#line 775 "graph.cpp"
  color_t orb_auxiliary_color(eItem it);
#line 793 "graph.cpp"
  void draw_ascii(const shiftmatrix& V, char glyph, color_t col, ld size);
#line 803 "graph.cpp"
  bool drawItemType(eItem it, cell *c, const shiftmatrix& V, color_t icol, int pticks, bool hidden);
  #if CAP_SHAPES
#line 1057 "graph.cpp"
  void drawTerraWarrior(const shiftmatrix& V, int t, int hp, double footphase);
  #endif
#line 1077 "graph.cpp"
  void drawPlayer(eMonster m, cell *where, const shiftmatrix& V, color_t col, double footphase, bool stop IS(false));
#line 1259 "graph.cpp"
  int wingphase(int period, int phase IS(0));
#line 1352 "graph.cpp"
  bool drawMonsterType(eMonster m, cell *where, const shiftmatrix& V1, color_t col, double footphase, color_t asciicol);
#line 2436 "graph.cpp"
  extern shiftmatrix playerV;
#line 2438 "graph.cpp"
  bool applyAnimation(cell *c, shiftmatrix& V, double& footphase, int layer);
#line 2543 "graph.cpp"
  int cellcolor(cell *c);
#line 2588 "graph.cpp"
  extern bool dont_face_pc;
#line 2590 "graph.cpp"
  extern shiftmatrix die_target;
#line 2592 "graph.cpp"
  bool drawMonster(const shiftmatrix& Vparam, int ct, cell *c, color_t col, color_t asciicol);
#line 3058 "graph.cpp"
  int haveaura();
#line 3072 "graph.cpp"
  void clearaura();
#line 3092 "graph.cpp"
  void addauraspecial(shiftpoint h, color_t col, int dir);
#line 3099 "graph.cpp"
  void addaura(shiftpoint h, color_t col, int fd);
#line 3132 "graph.cpp"
  void drawaura();
#line 3291 "graph.cpp"
  extern colortable minecolors;
#line 3296 "graph.cpp"
  extern colortable distcolors;
#line 3301 "graph.cpp"
  extern const char* minetexts[8];
#line 3312 "graph.cpp"
  int countMinesAround(cell *c);
#line 3320 "graph.cpp"
  transmatrix applyPatterndir(cell *c, const patterns::patterninfo& si);
#line 3328 "graph.cpp"
  transmatrix applyDowndir(cell *c, const cellfunction& cf);
#line 3379 "graph.cpp"
  int celldistAltPlus(cell *c);
#line 3385 "graph.cpp"
  color_t reptilecolor(cell *c);
#line 3415 "graph.cpp"
  extern colortable nestcolors;
#line 3419 "graph.cpp"
  void init_floorcolors();
#line 3466 "graph.cpp"
  color_t magma_color(int id);
#line 3480 "graph.cpp"
  bool has_nice_dual();
#line 3500 "graph.cpp"
  bool is_nice_dual(cell *c);
#line 3504 "graph.cpp"
  bool use_swapped_duals();
  #if CAP_SHAPES
#line 3509 "graph.cpp"
  void floorShadow(cell *c, const shiftmatrix& V, color_t col);
#line 3522 "graph.cpp"
  bool use_warp_graphics();
#line 3529 "graph.cpp"
  void escherSidewall(cell *c, int sidepar, const shiftmatrix& V, color_t col);
#line 3558 "graph.cpp"
  bool placeSidewall(cell *c, int i, int sidepar, const shiftmatrix& V, color_t col);
  #endif
#line 3610 "graph.cpp"
  extern color_t stdgridcolor;
#line 3612 "graph.cpp"
  int gridcolor(cell *c1, cell *c2);
  #if CAP_SHAPES
#line 3636 "graph.cpp"
  void pushdown(cell *c, int& q, const shiftmatrix &V, double down, bool rezoom, bool repriority);
  #endif
#line 3697 "graph.cpp"
  int shallow(cell *c);
#line 3718 "graph.cpp"
  extern bool bright;
#line 3721 "graph.cpp"
  int getfd(cell *c);
#line 3782 "graph.cpp"
  extern bool just_gmatrix;
#line 3784 "graph.cpp"
  int colorhash(color_t i);
#line 3788 "graph.cpp"
  bool isWall3(cell *c, color_t& wcol);
#line 3797 "graph.cpp"
  bool isWall3(cell *c);
#line 3799 "graph.cpp"
  bool isSulphuric(eWall w);
#line 3807 "graph.cpp"
  color_t transcolor(cell *c, cell *c2, color_t wcol);
#line 3840 "graph.cpp"
  int get_darkval(cell *c, int d);
#line 3877 "graph.cpp"
  ld mousedist(shiftmatrix T);
#line 3888 "graph.cpp"
  extern int noclipped;
#line 3890 "graph.cpp"
  extern bool frustum_culling;
#line 3892 "graph.cpp"
  extern ld threshold, xyz_threshold;
#line 3894 "graph.cpp"
  extern bool clip_checked;
#line 3994 "graph.cpp"
  extern ld precise_width;
#line 3998 "graph.cpp"
  extern bool fat_edges;
#line 4000 "graph.cpp"
  void gridline(const shiftmatrix& V1, const hyperpoint h1, const shiftmatrix& V2, const hyperpoint h2, color_t col, int prec);
#line 4034 "graph.cpp"
  void gridline(const shiftmatrix& V, const hyperpoint h1, const hyperpoint h2, color_t col, int prec);
#line 4038 "graph.cpp"
  subcellshape& generate_subcellshape_if_needed(cell *c, int id);
#line 4118 "graph.cpp"
  void queue_transparent_wall(const shiftmatrix& V, hpcshape& sh, color_t color);
  #if MAXMDIM >= 4
#line 4131 "graph.cpp"
  int ceiling_category(cell *c);
  #endif
#line 4248 "graph.cpp"
  void set_detail_level(const shiftmatrix& V);
#line 4282 "graph.cpp"
  void drawBubble(cell *c, color_t col, string s, ld size);
#line 4290 "graph.cpp"
  void drawFlash(cell *c);
#line 4293 "graph.cpp"
  void drawBigFlash(cell *c);
#line 4297 "graph.cpp"
  void drawParticleSpeed(cell *c, color_t col, int speed);
#line 4302 "graph.cpp"
  void drawParticle(cell *c, color_t col, int maxspeed IS(100));
#line 4306 "graph.cpp"
  void drawDirectionalParticle(cell *c, int dir, color_t col, int maxspeed IS(100));
#line 4318 "graph.cpp"
  void drawParticles(cell *c, color_t col, int qty, int maxspeed IS(100));
#line 4322 "graph.cpp"
  void drawFireParticles(cell *c, int qty, int maxspeed IS(100));
#line 4327 "graph.cpp"
  void fallingFloorAnimation(cell *c, eWall w IS(waNone), eMonster m IS(moNone));
#line 4335 "graph.cpp"
  void fallingMonsterAnimation(cell *c, eMonster m, int id IS(multi::cpid));
  #if CAP_QUEUE
#line 4395 "graph.cpp"
  void queuecircleat1(cell *c, const shiftmatrix& V, double rad, color_t col);
#line 4434 "graph.cpp"
  void queuecircleat(cell *c, double rad, color_t col);
  #endif
#line 4447 "graph.cpp"
  cell *forwardcell();
#line 4458 "graph.cpp"
  extern bool draw_centerover;
#line 4460 "graph.cpp"
  bool should_draw_mouse_cursor();
#line 4467 "graph.cpp"
  void drawMarkers();
  #if CAP_QUEUE
#line 4710 "graph.cpp"
  void draw_flash(struct flashdata& f, const shiftmatrix& V, bool& kill);
  #endif
#line 4799 "graph.cpp"
  bool allowIncreasedSight();
#line 4813 "graph.cpp"
  bool allowChangeRange();
#line 4824 "graph.cpp"
  extern purehookset hooks_drawmap;
#line 4826 "graph.cpp"
  extern transmatrix actual_view_transform;
#line 4828 "graph.cpp"
  ld wall_radar(cell *c, transmatrix T, transmatrix LPe, ld max);
#line 4848 "graph.cpp"
  void make_actual_view();
#line 4889 "graph.cpp"
  shiftmatrix cview(ld base_shift IS(0));
#line 4893 "graph.cpp"
  void precise_mouseover();
#line 4930 "graph.cpp"
  extern transmatrix Viewbase;
#line 4932 "graph.cpp"
  extern bool no_wall_rendering;
#line 4934 "graph.cpp"
  void drawthemap();
#line 5105 "graph.cpp"
  void drawmovestar(double dx, double dy);
#line 5160 "graph.cpp"
  extern bool dronemode;
#line 5164 "graph.cpp"
  extern int corner_centering;
#line 5166 "graph.cpp"
  extern bool permaside;
#line 5168 "graph.cpp"
  void calcparam();
#line 5234 "graph.cpp"
  extern function<void()> wrap_drawfullmap;
#line 5238 "graph.cpp"
  void drawfullmap();
#line 5304 "graph.cpp"
  extern bool just_refreshing;
#line 5306 "graph.cpp"
  void gamescreen(int _darken);
#line 5396 "graph.cpp"
  void emptyscreen();
#line 5402 "graph.cpp"
  extern bool nohelp;
#line 5403 "graph.cpp"
  extern bool no_find_player;
#line 5405 "graph.cpp"
  void normalscreen();
#line 5434 "graph.cpp"
  extern vector< function<void()> > screens;
#line 5437 "graph.cpp"
  template<class T> void pushScreen(const T& x) { screens.push_back(x); } 
  inline void popScreen() { if(isize(screens)>1) screens.pop_back(); }
  inline void popScreenAll() { while(isize(screens)>1) popScreen(); }
  typedef void (*cfunction)();
#line 5443 "graph.cpp"
  cfunction current_screen_cfunction();
#line 5450 "graph.cpp"
  namespace sm {
  static const int NORMAL = 1;
  static const int MISSION = 2;
  static const int HELP = 4;
  static const int MAP = 8;
  static const int DRAW = 16;
  static const int NUMBER = 32;
  static const int SHMUPCONFIG = 64;
  static const int OVERVIEW = 128;
  static const int SIDE = 256;
  static const int DOTOUR = 512;
  static const int CENTER = 1024;
  static const int ZOOMABLE = 4096;
  static const int TORUSCONFIG = 8192;
  static const int MAYDARK = 16384;
  static const int DIALOG_STRICT_X = 32768; // do not interpret dialog clicks outside of the X region
  static const int EXPANSION = (1<<16);
  static const int HEXEDIT = (1<<17);
  static const int VR_MENU = (1<<18); // always show the menu in VR
  }
#line 5472 "graph.cpp"
  extern int cmode;
#line 5474 "graph.cpp"
  void drawscreen();
#line 5600 "graph.cpp"
  void restartGraph();
#line 5610 "graph.cpp"
  void clearAnimations();
#line 5635 "graph.cpp"
  struct animation {
  int ltick;
  double footphase;
  transmatrix wherenow;
  int attacking; /** 0 = no attack animation, 1 = first phase, 2 = second phase, 3 = hugging */
  transmatrix attackat;
  bool mirrored;
  eItem thrown_item; /** for thrown items */
  };
  
  // we need separate animation layers for Orb of Domination and Tentacle+Ghost,
  // and also to mark Boats
  #define ANIMLAYERS 4
  #define LAYER_BIG   0 // for worms and krakens
  #define LAYER_SMALL 1 // for others
  #define LAYER_BOAT  2 // mark that a boat has moved
  #define LAYER_THROW 3 // for thrown items
#line 5654 "graph.cpp"
  extern array<map<cell*, animation>, ANIMLAYERS> animations;
#line 5656 "graph.cpp"
  int revhint(cell *c, int hint);
#line 5661 "graph.cpp"
  transmatrix adj(const movei& m);
#line 5666 "graph.cpp"
  transmatrix iadj(const movei& m);
#line 5671 "graph.cpp"
  void animateMovement(const movei& m, int layer);
#line 5694 "graph.cpp"
  void animate_item_throw(cell *from, cell *to, eItem it);
#line 5713 "graph.cpp"
  void animateAttackOrHug(const movei& m, int layer, int phase, ld ratio, ld delta);
#line 5725 "graph.cpp"
  void animateAttack(const movei& m, int layer);
#line 5729 "graph.cpp"
  void animateHug(const movei& m, int layer);
#line 5735 "graph.cpp"
  void indAnimateMovement(const movei& m, int layer);
#line 5755 "graph.cpp"
  void commitAnimations(int layer);
#line 5762 "graph.cpp"
  void drawBug(const cellwalker& cw, color_t col);
#line 5772 "graph.cpp"
  bool inscreenrange(cell *c);

  // implemented in: textures.cpp

  #if CAP_TEXTURE
#line 13 "textures.cpp"
  struct texture_triangle {
  array<hyperpoint, 3> v;
  array<shiftpoint, 3> tv;
  texture_triangle(array<hyperpoint, 3> _v, array<shiftpoint, 3> _tv) : v(_v), tv(_tv) {}
  };
  
  struct textureinfo : basic_textureinfo {
  shiftmatrix M;
  vector<texture_triangle> triangles;
  vector<glvertex> vertices;
  cell *c;
  vector<shiftmatrix> matrices;
  
  // these are required to adjust to geometry changes
  int current_type, symmetries;
  };
  namespace texture {
#line 34 "textures.cpp"
    enum eTextureState {
    tsOff, tsAdjusting, tsActive
    };
    
    struct texture_data {
    GLuint textureid;
    
    int twidth, theight;
    bool stretched, original;
    int tx, ty, origdim;
    
    int strx, stry, base_x, base_y;
    
    texture_data() { textureid = 0; twidth = 2048; theight = 0; stretched = false; original = false; }
    
    vector<color_t> texture_pixels;
    
    color_t& get_texture_pixel(int x, int y) {
    return texture_pixels[(y&(theight-1))*twidth+(x&(twidth-1))];
    }
    
    vector<pair<color_t*, color_t>> undos;
    vector<tuple<cell*, shiftpoint, int> > pixels_to_draw;
    
    bool loadTextureGL();
    bool whitetexture();
    bool readtexture(string tn);
    void saveRawTexture(string tn);
    
    void undo();
    void undoLock();
    void update();
    };
    
    struct texture_config {
    string texturename;
    string configname;
    eTextureState tstate;
    eTextureState tstate_max;
    
    transmatrix itt;
    
    color_t grid_color;
    color_t mesh_color;
    color_t master_color;
    color_t slave_color;
    
    int color_alpha;
    
    int gsplits;
    
    int recolor(color_t col);
    
    typedef tuple<eGeometry, eVariation, char, int, eModel, ld, ld> texture_parameters; 
    texture_parameters orig_texture_parameters;
    
    map<int, textureinfo> texture_map, texture_map_orig;
    set<cell*> models;
    
    basic_textureinfo tinf3;
    
    bool texture_tuned;
    string texture_tuner;
    vector<shiftpoint*> tuned_vertices;
    
    bool apply(cell *c, const shiftmatrix &V, color_t col);
    void mark_triangles();
    
    void clear_texture_map();
    void perform_mapping();
    void mapTextureTriangle(textureinfo &mi, const array<hyperpoint, 3>& v, const array<shiftpoint, 3>& tv, int splits);
    void mapTextureTriangle(textureinfo &mi, const array<hyperpoint, 3>& v, const array<shiftpoint, 3>& tv) { mapTextureTriangle(mi, v, tv, gsplits); }
    void mapTexture2(textureinfo& mi);
    void finish_mapping();
    void true_remap();
    void remap();
    bool correctly_mapped;
    hyperpoint texture_coordinates(shiftpoint);
    
    void drawRawTexture();
    void saveFullTexture(string tn);
    
    bool save();
    bool load();
    
    texture_data data;
    
    texture_config() {
    // argh, no member initialization in some of my compilers
    texturename = "textures/hyperrogue-texture.png";
    configname = "textures/hyperrogue.txc";
    itt = Id; 
    grid_color = 0;
    mesh_color = 0;
    master_color = 0xFFFFFF30;
    slave_color = 0xFF000008;
    color_alpha = 128;
    gsplits = 1;
    texture_tuned = false;
    }
    
    };
#line 138 "textures.cpp"
    extern cpatterntype cgroup;
#line 172 "textures.cpp"
    extern texture_config config;
#line 174 "textures.cpp"
    extern bool saving;
#line 487 "textures.cpp"
    extern bool texture_aura;
#line 489 "textures.cpp"
    bool using_aura();
#line 732 "textures.cpp"
    extern vector<string> mpnames;
    #if CAP_EDIT
#line 1254 "textures.cpp"
    void start_editor();
    #endif
#line 1267 "textures.cpp"
    void showMenu();
#line 1574 "textures.cpp"
    extern bool texturesym;
#line 1591 "textures.cpp"
    void drawPixel(cell *c, shiftpoint h, color_t col);
#line 1595 "textures.cpp"
    extern cell *where;
#line 1597 "textures.cpp"
    void drawPixel(shiftpoint h, color_t col);
#line 1619 "textures.cpp"
    void drawLine(shiftpoint h1, shiftpoint h2, color_t col, int steps IS(10));
    #if CAP_TEXTURE
#line 1708 "textures.cpp"
    double get_txp(ld x, ld y, int p);
    #endif
    }
  #endif

  // implemented in: hprint.cpp

#line 11 "hprint.cpp"
  extern FILE *debugfile;
#line 14 "hprint.cpp"
  #define DF_INIT              1 // always display these
  #define DF_MSG               2 // always display these
  #define DF_WARN              4 // always display these
  #define DF_ERROR             8 // always display these
  #define DF_STEAM            16
  #define DF_GRAPH            32
  #define DF_TURN             64
  #define DF_FIELD           128
  #define DF_GEOM            256
  #define DF_MEMORY          512
  #define DF_TIME           1024 // a flag to display timestamps
  #define DF_GP             2048
  #define DF_POLY           4096
  #define DF_LOG            8192
  #define DF_VERTEX        16384
  #define DF_KEYS "imwesxufgbtoplv"
#line 32 "hprint.cpp"
  extern int debugflags;
#line 34 "hprint.cpp"
  extern string s0;
#line 36 "hprint.cpp"
  string its(int i);
#line 38 "hprint.cpp"
  string itsh8(int i);
#line 40 "hprint.cpp"
  string fts(ld x, int prec IS(6));
#line 47 "hprint.cpp"
  extern map<void*, int> pointer_indices;
#line 49 "hprint.cpp"
  string index_pointer(void *v);
#line 61 "hprint.cpp"
  extern int stamplen;
#line 63 "hprint.cpp"
  string get_stamp();
#line 76 "hprint.cpp"
  inline string ONOFF(bool b) { return b ? XLAT("ON") : XLAT("OFF"); }
  
  struct hstream {
  virtual void write_char(char c) = 0;
  virtual void write_chars(const char* c, size_t q) { while(q--) write_char(*(c++)); }
  virtual char read_char() = 0;
  virtual void read_chars(char* c, size_t q) { while(q--) *(c++) = read_char(); }
  virtual color_t get_vernum() { return VERNUM_HEX; }
  
  template<class T> void write(const T& t) { hwrite(*this, t); }
  template<class T> void read(T& t) { hread(*this, t); }
  template<class T> T get() { T t; hread(*this, t); return t; }
  template<class T> T get_raw() { T t; hread_raw(*this, t); return t; }
  };
  
  template<class T> void hwrite_raw(hstream& hs, const T& c) { hs.write_chars((char*) &c, sizeof(T)); }
  template<class T> void hread_raw(hstream& hs, T& c) { hs.read_chars((char*) &c, sizeof(T)); }
  
  template<class T, typename = typename std::enable_if<std::is_integral<T>::value || std::is_enum<T>::value>::type> void hwrite(hstream& hs, const T& c) { hwrite_raw(hs, c); }
  template<class T, typename = typename std::enable_if<std::is_integral<T>::value || std::is_enum<T>::value>::type> void hread(hstream& hs, T& c) { hread_raw(hs, c); }
  
  inline void hwrite(hstream& hs, const string& s) {
  if(isize(s) >= 255) {
  hs.write_char((char)255);
  hs.write<int>(isize(s));
  }
  else 
  hs.write_char(isize(s));    
  for(char c: s) hs.write_char(c);
  }
  inline void hread(hstream& hs, string& s) {
  s = ""; int l = (unsigned char) hs.read_char(); 
  if(l == 255) l = hs.get<int>();
  for(int i=0; i<l; i++) s += hs.read_char();
  }
  inline void hwrite(hstream& hs, const ld& h) { double d = h; hs.write_chars((char*) &d, sizeof(double)); }
  inline void hread(hstream& hs, ld& h) { double d; hs.read_chars((char*) &d, sizeof(double)); h = d; }
  
  template<class T, size_t X> void hwrite(hstream& hs, const array<T, X>& a) { for(auto &ae: a) hwrite(hs, ae); }
  template<class T, size_t X> void hread(hstream& hs, array<T, X>& a) { for(auto &ae: a) hread(hs, ae); }
  
  inline void hread(hstream& hs, hyperpoint& h) { for(int i=0; i<MDIM; i++) hread(hs, h[i]); }
  inline void hwrite(hstream& hs, hyperpoint h) { for(int i=0; i<MDIM; i++) hwrite(hs, h[i]); }
  
  template<class T> void hwrite(hstream& hs, const vector<T>& a) { hwrite<int>(hs, isize(a)); for(auto &ae: a) hwrite(hs, ae); }
  template<class T> void hread(hstream& hs, vector<T>& a) { a.resize(hs.get<int>()); for(auto &ae: a) hread(hs, ae); }
  
  template<class T, class U> void hwrite(hstream& hs, const map<T,U>& a) { 
  hwrite<int>(hs, isize(a)); for(auto &ae: a) hwrite(hs, ae.first, ae.second);
  }
  template<class T, class U> void hread(hstream& hs, map<T,U>& a) { 
  a.clear();
  int N = hs.get<int>();
  for(int i=0; i<N; i++) {
  T key; hread(hs, key);
  hread(hs, a[key]);
  }
  }
  
  template<class C, class C1, class... CS> void hwrite(hstream& hs, const C& c, const C1& c1, const CS&... cs) { hwrite(hs, c); hwrite(hs, c1, cs...); }
  template<class C, class C1, class... CS> void hread(hstream& hs, C& c, C1& c1, CS&... cs) { hread(hs, c); hread(hs, c1, cs...); }
  
  struct hstream_exception : hr_exception { hstream_exception() {} };
  
  struct fhstream : hstream {
  color_t vernum;
  FILE *f;
  explicit fhstream() { f = NULL; vernum = VERNUM_HEX; }
  explicit fhstream(const string pathname, const char *mode) { f = fopen(pathname.c_str(), mode); vernum = VERNUM_HEX; }
  ~fhstream() { if(f) fclose(f); }
  color_t get_vernum() override { return vernum; }
  void write_char(char c) override { write_chars(&c, 1); }
  void write_chars(const char* c, size_t i) override { if(fwrite(c, i, 1, f) != 1) throw hstream_exception(); }
  void read_chars(char* c, size_t i) override { if(fread(c, i, 1, f) != 1) throw hstream_exception(); }
  char read_char() override { char c; read_chars(&c, 1); return c; }
  };
  
  struct shstream : hstream { 
  color_t vernum;
  string s;
  int pos;
  explicit shstream(const string& t = "") : s(t) { pos = 0; vernum = VERNUM_HEX; }
  color_t get_vernum() override { return vernum; }
  void write_char(char c) override { s += c; }
  char read_char() override { if(pos == isize(s)) throw hstream_exception(); return s[pos++]; }
  };
  
  inline void print(hstream& hs) {}
  
  template<class... CS> string sprint(const CS&... cs) { shstream hs; print(hs, cs...); return hs.s; }
  
  template<class C, class C1, class... CS> void print(hstream& hs, const C& c, const C1& c1, const CS&... cs) { print(hs, c); print(hs, c1, cs...); }
  
  template<class... CS> void println(hstream& hs, const CS&... cs) { print(hs, cs...); hs.write_char('\n'); }
  
  inline string spaced(int i) { return its(i); }
  inline string spaced(color_t col) { return itsh8(col); }
  inline string spaced(const string& s) { return s; }
  inline string spaced(ld x) { return fts(x, 10); }
  template<class T> string spaced_of(T a[], int q) { string s = spaced(a[0]); for(int i=1; i<q; i++) s += ' ', s += spaced(a[i]); return s; }
  template<class T, int i> string spaced(const array<T,i>& a) { return spaced_of(&a[0], isize(a)); }
  template<class C, class C1, class... CS> string spaced(const C& c, const C1& c1, const CS&... cs) { return spaced(c) + " " + spaced(c1, cs...); }
  
  bool scan(fhstream& hs, int&);
  bool scan(fhstream& hs, ld&);
  bool scan(fhstream& hs, string&);
  bool scan(fhstream& hs, color_t& c);
  template<class C, class C1, class... CS> bool scan(fhstream& hs, C& c, C1& c1, CS&... cs) { return scan(hs, c) && scan(hs, c1, cs...); }
  
  string scanline(fhstream& hs);
  template<class T> T scan(fhstream& hs) { T t {}; scan(hs, t); return t; }
  
  // copied from: https://stackoverflow.com/questions/16387354/template-tuple-calling-a-function-on-each-element
  
  namespace detail
  {
  template<int... Is>
  struct seq { };
  
  template<int N, int... Is>
  struct gen_seq : gen_seq<N - 1, N - 1, Is...> { };
  
  template<int... Is>
  struct gen_seq<0, Is...> : seq<Is...> { };
  
  template<typename T, typename F, int... Is>
  void for_each(T&& t, F f, seq<Is...>)
  {
  auto l = { (f(std::get<Is>(t)), 0)... }; ignore(l);
  }
  }
  
  template<typename... Ts, typename F>
  void for_each_in_tuple(std::tuple<Ts...> const& t, F f)
  {
  detail::for_each(t, f, detail::gen_seq<sizeof...(Ts)>());
  }
  
  inline void print(hstream& hs, const string& s) { hs.write_chars(s.c_str(), isize(s)); }
  inline void print(hstream& hs, int i) { print(hs, its(i)); }
  inline void print(hstream& hs, ld x) { print(hs, fts(x, 6)); }
  inline void print(hstream& hs, color_t col) { print(hs, itsh8(col)); }
  
  template<class T> void print(hstream& hs, const walker<T>& w) { print(hs, "[", w.at, "/", w.spin, "/", w.mirrored, "]"); }
  
  struct comma_printer {
  bool first;
  hstream& hs;
  template<class T> void operator() (const T& t) { if(first) first = false; else print(hs, ","); print(hs, t); }
  comma_printer(hstream& hs) : first(true), hs(hs) {}
  };
  
  template<class T, size_t X> void print(hstream& hs, const array<T, X>& a) { print(hs, "("); comma_printer c(hs); for(const T& t: a) c(t); print(hs, ")"); }
  template<class T> void print(hstream& hs, const vector<T>& a) { print(hs, "("); comma_printer c(hs); for(const T& t: a) c(t); print(hs, ")"); }
  
  template<class T, class U> void print(hstream& hs, const map<T,U>& a) { print(hs, "("); comma_printer c(hs); for(auto& t: a) c(t); print(hs, ")"); }
  
  inline void print(hstream& hs, const hyperpoint h) { print(hs, (const array<ld, MAXMDIM>&)h); }
  inline void print(hstream& hs, const transmatrix T) { 
  print(hs, "("); comma_printer c(hs);
  for(int i=0; i<MDIM; i++)
  for(int j=0; j<MDIM; j++) c(T[i][j]);
  print(hs, ")"); }
  
  inline void print(hstream& hs, const shiftpoint h) { print(hs, h.h, "@", h.shift); }
  inline void print(hstream& hs, const shiftmatrix T) { print(hs, T.T, "@", T.shift); }
  
  template<class T, class U> void print(hstream& hs, const pair<T, U> & t) { print(hs, "(", t.first, ",", t.second, ")"); }
  
  template<class... T> void print(hstream& hs, const tuple<T...> & t) { 
  print(hs, "(");
  comma_printer p(hs);
  for_each_in_tuple(t, p);
  print(hs, ")");
  }
  
  #ifndef SPECIAL_LOGGER
  inline void special_log(char c) { if(debugfile) fputc(c, debugfile); putchar(c); }
  #endif
  
  #if !CAP_SDL && CAP_TIMEOFDAY
  int SDL_GetTicks();
  #endif
  
  struct logger : hstream {
  int indentation;
  bool doindent;
  explicit logger() { doindent = false; }
  void write_char(char c) override;  
  char read_char() override { throw hstream_exception(); }
  };
  
  extern logger hlog;
  template<class... T> void println_log(T... t) { println(hlog, t...); }
  template<class... T> void print_log(T... t) { print(hlog, t...); }
  
  #ifdef __GNUC__
  __attribute__((__format__ (__printf__, 1, 2)))
  #endif
  inline string format(const char *fmt, ...) {
  char buf[1000];
  va_list ap;
  va_start(ap, fmt);
  vsnprintf(buf, 1000, fmt, ap);
  va_end(ap);
  return buf;
  }
  
  inline void print(hstream& hs, heptagon* h) { print(hs, "H", index_pointer(h)); }
  inline void print(hstream& hs, cell* h) { print(hs, "C", index_pointer(h)); }
  inline void print(hstream& hs, hrmap* h) { print(hs, "M", index_pointer(h)); }
  
  inline void print(hstream& hs, cellwalker cw) { 
  if(cw.at) print(hs, "[", cw.at, "/", cw.at->type, ":", cw.spin, ":", cw.mirrored, "]");
  else print(hs, "[NULL]");
  }
  
  struct indenter {
  dynamicval<int> ind;
  
  explicit indenter(int i = 2) : ind(hlog.indentation, hlog.indentation + (i)) {}
  };
  
  struct indenter_finish : indenter {
  explicit indenter_finish(bool b = true): indenter(b ? 2:0) {}
  ~indenter_finish() { if(hlog.indentation != ind.backup) println(hlog, "(done)"); }
  };
  
#line 322 "hprint.cpp"
  void print(hstream& hs, cld x);
#line 338 "hprint.cpp"
  string fts_fixed(ld x, int prec IS(6));
#line 374 "hprint.cpp"
  string cts(char c);
#line 375 "hprint.cpp"
  string llts(long long i);
#line 381 "hprint.cpp"
  string itsh(unsigned int i);
#line 382 "hprint.cpp"
  string itsh(int i);
#line 383 "hprint.cpp"
  string itsh2(int i);
#line 385 "hprint.cpp"
  string itsh(unsigned long long i);
#line 392 "hprint.cpp"
  extern logger hlog;
#line 397 "hprint.cpp"
  ld kz(ld x);
#line 402 "hprint.cpp"
  hyperpoint kz(hyperpoint h);
#line 407 "hprint.cpp"
  transmatrix kz(transmatrix h);
#line 415 "hprint.cpp"
  template<class T> vector<T> kz(vector<T> v) {
  for(auto& el: v) el = kz(el);
  return v;
  }
#line 421 "hprint.cpp"
  string pick123();
#line 422 "hprint.cpp"
  string pick12();
#line 425 "hprint.cpp"
  template<class T> string serialize(const T& data) {
  shstream shs;
  hwrite(shs, data);
  return shs.s;
  }
  
  template<class T> T deserialize(const string& s) {
  shstream shs;
  shs.s = s;
  T data;
  hread(shs, data);
  return data;
  }
#line 440 "hprint.cpp"
  string as_hexstring(string o);
#line 450 "hprint.cpp"
  string from_hexstring(string o);
#line 464 "hprint.cpp"
  string as_cstring(string o);
#line 472 "hprint.cpp"
  string as_nice_cstring(string o);
#line 486 "hprint.cpp"
  #if ISANDROID
  #define DEBB(r,x)
  #define DEBB0(r,x)
  #define DEBBI(r,x)
  #else
  #define DEBB(r,x) { if(debugflags & (r)) { println_log x; } }
  #define DEBB0(r,x) { if(debugflags & (r)) { print_log x; } }
  #define DEBBI(r,x) { if(debugflags & (r)) { println_log x; } } indenter_finish _debbi(debugflags & (r));
  #endif
  #if CAP_GMP
#line 498 "hprint.cpp"
  string its(mpq_class x);
#line 499 "hprint.cpp"
  void print(hstream& hs, const mpq_class& x);
  #endif
#line 505 "hprint.cpp"
  template<class... T> string lalign(int len, T... t) {
  shstream hs;
  print(hs, t...);
  while(isize(hs.s) < len) hs.s += " ";
  return hs.s;
  }

  // implemented in: language.cpp

#line 13 "language.cpp"
  const string dnameof(eMonster m);
#line 14 "language.cpp"
  const string dnameof(eLand l);
#line 15 "language.cpp"
  const string dnameof(eWall w);
#line 16 "language.cpp"
  const string dnameof(eItem i);
#line 19 "language.cpp"
  #define NUMLAN 7
  
  struct stringpar {
  string v;
  stringpar(string s) : v(s) { }
  stringpar(const char* s) : v(s) { }
  stringpar(eMonster m) { v= minf[m].name; }
  stringpar(eLand l) { v= linf[l].name; }
  stringpar(eWall w) { v= winf[w].name; }
  stringpar(eItem i) { v= iinf[i].name; }  
  };
  #if !CAP_TRANS
#line 66 "language.cpp"
  #define NUMEXTRA 12
  extern const char* natchars[NUMEXTRA];
  #endif
  #if CAP_TRANS
#line 116 "language.cpp"
  bool translation_exists(const string& x);
  #endif
#line 328 "language.cpp"
  string XLAT(string x);
#line 333 "language.cpp"
  string XLAT(string x, stringpar p1);
#line 339 "language.cpp"
  string XLAT(string x, stringpar p1, stringpar p2);
#line 346 "language.cpp"
  string XLAT(string x, stringpar p1, stringpar p2, stringpar p3);
#line 354 "language.cpp"
  string XLAT(string x, stringpar p1, stringpar p2, stringpar p3, stringpar p4);
#line 363 "language.cpp"
  string XLAT(string x, stringpar p1, stringpar p2, stringpar p3, stringpar p4, stringpar p5);
#line 375 "language.cpp"
  string XLATN(string x);
#line 385 "language.cpp"
  string XLAT1(string x);
#line 395 "language.cpp"
  string XLATT1(stringpar p);
#line 397 "language.cpp"
  bool shapename_available(int id);
#line 399 "language.cpp"
  string shapename(int id);

  // implemented in: util.cpp

  #if CAP_TIMEOFDAY
  #if !CAP_SDL
#line 16 "util.cpp"
  int SDL_GetTicks();
  #endif
  #endif
#line 30 "util.cpp"
  long double sqr(long double x);
#line 32 "util.cpp"
  ld round_nearest(ld x);
#line 33 "util.cpp"
  ld round_nearest(ld x, ld multiple_of);
#line 35 "util.cpp"
  int gcd(int i, int j);
#line 39 "util.cpp"
  int gmod(int i, int j);
#line 44 "util.cpp"
  int zgmod(int a, int b);
#line 46 "util.cpp"
  int szgmod(int a, int b);
#line 53 "util.cpp"
  int gdiv(int i, int j);
#line 57 "util.cpp"
  ld frac(ld x);
#line 63 "util.cpp"
  ld lerp(ld a0, ld a1, ld x);
#line 67 "util.cpp"
  cld lerp(cld a0, cld a1, ld x);
#line 71 "util.cpp"
  ld ilerp(ld a0, ld a1, ld x);
#line 75 "util.cpp"
  extern purehookset hooks_tests;
#line 77 "util.cpp"
  string simplify(const string& s);
#line 83 "util.cpp"
  bool appears(const string& haystack, const string& needle);
#line 88 "util.cpp"
  struct hr_parse_exception : hr_exception {
  string s;
  hr_parse_exception(const string& z) : s(z) {}
  ~hr_parse_exception() noexcept(true) {}
  };
  
  struct exp_parser {
  string s;
  int at;
  int line_number, last_line;
  exp_parser() { at = 0; line_number = 1; last_line = 0; }
  
  string where() { 
  if(s.find('\n')) return "(line " + its(line_number) + ", pos " + its(at-last_line) + ")";
  else return "(pos " + its(at) + ")";
  }
  
  map<string, cld> extra_params;
  
  bool ok() { return at == isize(s); }
  char next(int step=0) { if(at >= isize(s)-step) return 0; else return s[at+step]; }
  
  bool eat(const char *c) {
  int orig_at = at;
  while(*c && *c == next()) at++, c++;
  if(*c == 0) return true;
  else at = orig_at;
  return false;
  }
  
  void skip_white();
  
  string next_token();
  
  char snext(int step=0) { skip_white(); return next(step); }
  
  cld parse(int prio = 0);
  
  ld rparse(int prio = 0) { return validate_real(parse(prio)); }
  int iparse(int prio = 0) { return int(floor(rparse(prio) + .5)); }
  
  cld parsepar() {
  cld res = parse();
  force_eat(")");
  return res;
  }
  
  ld validate_real(cld x) {
  if(kz(imag(x))) throw hr_parse_exception("expected real number but " + lalign(-1, x) + " found at " + where());
  return real(x);
  }
  
  void force_eat(const char *c) {
  skip_white();
  if(!eat(c)) throw hr_parse_exception("expected: " + string(c) + " at " + where());
  }
  
  };
#line 404 "util.cpp"
  ld parseld(const string& s);
#line 410 "util.cpp"
  int parseint(const string& s);
#line 416 "util.cpp"
  string available_functions();
#line 421 "util.cpp"
  string available_constants();
#line 427 "util.cpp"
  struct bignum {
  static const int BASE = 1000000000;
  static const long long BASE2 = BASE * (long long)BASE;
  vector<int> digits;
  bignum() {}
  bignum(int i) : digits() { digits.push_back(i); }
  void be(int i) { digits.resize(1); digits[0] = i; }
  bignum& operator +=(const bignum& b);
  void addmul(const bignum& b, int factor);
  string get_str(int max_length) const;
  bignum(ld d);
  
  bool operator < (const bignum&) const;
  bool operator > (const bignum& b) const { return b < self; }
  
  ld leading() const {
  switch(isize(digits)) {
  case 0:
  return 0;
  case 1:
  return digits.back();
  default:
  return digits.back() + ld(digits[isize(digits)-2]) / BASE;
  }
  }
  
  ld approx() const {
  return leading() * pow(BASE, isize(digits) - 1);
  }
  
  ld log_approx() const {
  return log(leading()) * log(BASE) * (isize(digits) - 1);
  }
  
  ld approx_div(const bignum& b) const {
  return leading() / b.leading() * pow(BASE, isize(digits) - isize(b.digits));
  }
  
  int approx_int() const {
  if(isize(digits) > 1) return BASE;
  if(digits.empty()) return 0;
  return digits[0];
  }
  
  bool nonzero() { return approx_ld() != 0; }
  
  bignum randomized_div(int x) const;
  
  ld approx_ld() const {
  ld res = 0;
  for(int i=0; i<isize(digits); i++) res += digits[i] * pow(BASE, i);
  return res;
  }
  
  long long approx_ll() const {
  if(isize(digits) > 2) return BASE2;
  if(digits.empty()) return 0;
  if(isize(digits) == 1) return digits[0];
  return digits[0] + digits[1] * (long long) BASE;
  }
  
  #if CAP_GMP
  mpq_class as_mpq() const {
  string s = get_str(999999);
  string t;
  for(char c: s) if(c != ' ') t += c;
  return mpq_class(t);
  }
  #endif
  
  friend inline bignum operator +(bignum a, const bignum& b) { a.addmul(b, 1); return a; }
  friend inline bignum operator -(bignum a, const bignum& b) { a.addmul(b, -1); return a; }
  };
#line 564 "util.cpp"
  bignum hrand(bignum b);
#line 575 "util.cpp"
  void operator ++(bignum &b, int);
#line 590 "util.cpp"
  void operator --(bignum &b, int);
#line 622 "util.cpp"
  string short_form(bignum b);
#line 655 "util.cpp"
  void replace_str(string& s, string a, string b);
  #if CAP_ZLIB
#line 663 "util.cpp"
  string compress_string(string s);
#line 684 "util.cpp"
  string decompress_string(string s);
  #endif
#line 703 "util.cpp"
  bool file_exists(string fname);
#line 707 "util.cpp"
  void open_url(string s);
#line 729 "util.cpp"
  void open_wiki(const char *title);
#line 743 "util.cpp"
  void floyd_warshall(vector<vector<char>>& v);

  // implemented in: complex.cpp

  namespace whirlwind {
#line 15 "complex.cpp"
    int fzebra3(cell *c);
#line 34 "complex.cpp"
    void switchTreasure(cell *c);
#line 44 "complex.cpp"
    int cat(cell *c);
#line 56 "complex.cpp"
    extern int dfrom[2], dto[2];
#line 57 "complex.cpp"
    extern int qdirs;
#line 61 "complex.cpp"
    void calcdirs(cell *c);
#line 91 "complex.cpp"
    int winddir(int d);
#line 150 "complex.cpp"
    void move();
#line 164 "complex.cpp"
    cell *jumpFromWhereTo(cell *c, bool player);
#line 178 "complex.cpp"
    cell *jumpDestination(cell *c);
    }
  namespace elec { 
#line 192 "complex.cpp"
    extern bool havecharge, haveelec, havethunder;
#line 193 "complex.cpp"
    extern bool afterOrb; // extra charge from the Orb of Lightning
#line 196 "complex.cpp"
    enum eCharge {
    ecCharged, ecGrounded, ecIsolator, ecConductor
    };
#line 207 "complex.cpp"
    eCharge getCharge(cell *c);
#line 388 "complex.cpp"
    void init();
#line 427 "complex.cpp"
    void cleanup();
#line 451 "complex.cpp"
    bool affected(cell *c);
#line 458 "complex.cpp"
    struct builder {
    builder() { init(); }
    ~builder() { cleanup(); }
    };
#line 464 "complex.cpp"
    void act();
#line 476 "complex.cpp"
    extern int lightningfast;
#line 477 "complex.cpp"
    void checklightningfast();
    }
  namespace princess {
#line 496 "complex.cpp"
    #define OUT_OF_PRISON 200
    #define OUT_OF_PALACE 250
    #define PRADIUS0 (141)
    #define PRADIUS1 (150)
    
    struct info {
    int id;         // id of this info
    cell *prison;   // where was the Princess locked
    heptagon *alt;  // alt of the prison
    int bestdist;   // best dist achieved
    int bestnear;   // best dist achieved, by the player
    int value;      // number of Rugs at 120
    cell *princess; // where is the Princess currently
    int together;   // in which turn have we been together -- for the hug animation
    };
    
#line 514 "complex.cpp"
    gp::loc coords();
#line 516 "complex.cpp"
    extern bool generating;
#line 517 "complex.cpp"
    extern bool challenge;
#line 518 "complex.cpp"
    extern bool saved;
#line 519 "complex.cpp"
    extern bool everSaved;
#line 521 "complex.cpp"
    extern bool forceVizier;
#line 522 "complex.cpp"
    extern bool forceMouse;
#line 523 "complex.cpp"
    extern bool gotoPrincess;
#line 524 "complex.cpp"
    extern bool nodungeon;
#line 525 "complex.cpp"
    extern bool squeaked;
#line 527 "complex.cpp"
    extern int saveHP;
#line 528 "complex.cpp"
    extern int saveArmedHP;
#line 530 "complex.cpp"
    extern int reviveAt;
#line 532 "complex.cpp"
    extern vector<info*> infos;
#line 538 "complex.cpp"
    int newInfo(cell *c);
#line 552 "complex.cpp"
    void newFakeInfo(cell *c);
#line 565 "complex.cpp"
    info *getPrisonInfo(cell *c);
#line 575 "complex.cpp"
    info *getPrincessInfo(cell *c);
#line 588 "complex.cpp"
    int dist(cell *c);
#line 620 "complex.cpp"
    void bringBack();
#line 656 "complex.cpp"
    void save(cell *princess);
#line 663 "complex.cpp"
    void move(const movei& mi);
#line 696 "complex.cpp"
    void mouseSqueak(cell *c);
#line 720 "complex.cpp"
    void line(cell *c);
#line 791 "complex.cpp"
    void playernear(cell *c);
    }
  namespace clearing {
#line 811 "complex.cpp"
    struct clearingdata {
    cell *root;
    int dist;
    bool buggy;
    clearingdata() { root = nullptr; }
    };
#line 819 "complex.cpp"
    extern std::map<heptagon*, clearingdata> bpdata;
#line 821 "complex.cpp"
    extern cell *current_root;
#line 823 "complex.cpp"
    void new_root();
#line 890 "complex.cpp"
    void generate(cell *c);
#line 994 "complex.cpp"
    extern bignum imputed;
#line 997 "complex.cpp"
    extern int direct;
#line 1011 "complex.cpp"
    void imput(cell *c);
    }
  namespace whirlpool {
#line 1037 "complex.cpp"
    extern bool escaped;
#line 1041 "complex.cpp"
    cell *get(cell *c, int next);
#line 1074 "complex.cpp"
    void generate(cell *wto);
#line 1156 "complex.cpp"
    void move();
    }
  namespace mirror {
#line 1174 "complex.cpp"
    static const int SPINSINGLE = 1;
    static const int SPINMULTI = 2;
    static const int GO = 4;
    static const int ATTACK = 8;
#line 1180 "complex.cpp"
    bool build(cell *c);
#line 1212 "complex.cpp"
    extern vector<pair<int, cellwalker>> mirrors;
#line 1214 "complex.cpp"
    constexpr int LIGHTNING = -1; // passed instead of cpid
#line 1253 "complex.cpp"
    void destroyAll();
#line 1259 "complex.cpp"
    void createMirror(cellwalker cw, int cpid);
#line 1311 "complex.cpp"
    void createMirrors(cellwalker cw, int cpid);
#line 1349 "complex.cpp"
    void createMirages(cellwalker cw, int cpid);
#line 1401 "complex.cpp"
    void createHere(cellwalker cw, int cpid);
#line 1409 "complex.cpp"
    void breakMirror(cellwalker cw, int pid);
#line 1424 "complex.cpp"
    bool isKilledByMirror(cell *c);
#line 1486 "complex.cpp"
    void act(int d, int flags);
#line 1503 "complex.cpp"
    void breakAll();
#line 1522 "complex.cpp"
    int mirrordir(cell *c);
#line 1640 "complex.cpp"
    cellwalker reflect(const cellwalker& cw);
    }
  namespace hive {
#line 1670 "complex.cpp"
    int hivehard();
#line 1675 "complex.cpp"
    eMonster randomHyperbug();
#line 1709 "complex.cpp"
    extern int bugcount[BUGCOLORS];
#line 1814 "complex.cpp"
    void movebugs();
#line 1941 "complex.cpp"
    void createBugArmy(cell *c);
    }
#line 2029 "complex.cpp"
  inline float& HEAT(cell *c) { return c->LHU.heat; }
  namespace heat {
#line 2034 "complex.cpp"
    void affect(cell *c, double delta);
#line 2038 "complex.cpp"
    double absheat(cell *c);
#line 2044 "complex.cpp"
    double celsius(cell *c);
#line 2049 "complex.cpp"
    extern vector<cell*> offscreen_heat, offscreen_fire; // offscreen cells to take care off
#line 2051 "complex.cpp"
    void processheat(double rate IS(1));
#line 2179 "complex.cpp"
    #define MELTCOLOR 0xA04040
#line 2212 "complex.cpp"
    void processfires();
    }
#line 2330 "complex.cpp"
  void doLightningNextTurn();
#line 2422 "complex.cpp"
  void livecaves();
#line 2591 "complex.cpp"
  void hurricaneWind();
#line 2638 "complex.cpp"
  void hurricaneMoveBoat(cell *c);
  namespace tortoise {
#line 2677 "complex.cpp"
    extern map<cell*, int> emap;
#line 2678 "complex.cpp"
    extern map<cell*, int> babymap;
#line 2679 "complex.cpp"
    extern int last;
#line 2682 "complex.cpp"
    enum tflag {
    tfShell, tfScute0, tfScute1, tfScute2, tfScute3,
    tfEdge1, tfEdge, tfEdge3,
    tfLongNeck, tfFront, tfRear, tfTail,
    tfEyeHue, tfShellHue, tfScuteHue, tfSkinHue,
    tfShellSat, tfScuteSat, tfSkinSat,
    tfShellDark, tfSkinDark,
    tfCOUNT
    };
#line 2693 "complex.cpp"
    extern const int numbits;
#line 2694 "complex.cpp"
    extern const int mask;
#line 2696 "complex.cpp"
    int getb(cell *where);
#line 2701 "complex.cpp"
    int countBits(int c);
#line 2707 "complex.cpp"
    int getBit(int bits, int id);
#line 2709 "complex.cpp"
    int getRandomBits();
#line 2711 "complex.cpp"
    bool seek();
#line 2712 "complex.cpp"
    extern int seekbits;
#line 2724 "complex.cpp"
    extern bool shading_enabled;
#line 2726 "complex.cpp"
    bool shading_on();
#line 2730 "complex.cpp"
    void updateVals(int delta);
#line 2738 "complex.cpp"
    double getScent(int bits);
#line 2757 "complex.cpp"
    int diff(int bits);
#line 2760 "complex.cpp"
    string measure(int bits);
#line 2764 "complex.cpp"
    void move_baby(cell *c1, cell *c2);
#line 2768 "complex.cpp"
    void move_adult(cell *c1, cell *c2);
    }
  namespace dragon {
#line 2775 "complex.cpp"
    extern int whichturn; // which turn has the target been set on
#line 2776 "complex.cpp"
    extern cell *target; // actually for all Orb of Domination
#line 2794 "complex.cpp"
    cell *findhead(cell *c);
#line 2823 "complex.cpp"
    int bodypart(cell *c, cell *head);
#line 2840 "complex.cpp"
    void kill(cell *c, eMonster who);
#line 2872 "complex.cpp"
    int totalhp(cell *c);
#line 2924 "complex.cpp"
    bool move(const movei& mi);
    }
  namespace sword {
#line 2962 "complex.cpp"
    struct sworddir {
    int angle;
    transmatrix T;
    };
    
    /** dimensions available to the Sword */
    #define SWORDDIM (hybri ? 2 : WDIM)
    
#line 2972 "complex.cpp"
    extern int sword_angles;
#line 2974 "complex.cpp"
    extern array<sworddir, MAXPLAYER> dir;
#line 2978 "complex.cpp"
    void determine_sword_angles();
#line 2999 "complex.cpp"
    cell *pos2(cell *c, int s);
#line 3011 "complex.cpp"
    cell *pos(cell *c, const sworddir& sd, bool rev);
#line 3026 "complex.cpp"
    int orbcount(bool rev);
#line 3028 "complex.cpp"
    cell *pos(int id, bool rev);
#line 3033 "complex.cpp"
    bool at(cell *where, bool noplayer IS(false));
#line 3041 "complex.cpp"
    bool isnear(cell *where);
#line 3048 "complex.cpp"
    sworddir shift(movei mi, sworddir d);
#line 3080 "complex.cpp"
    sworddir initial(cell *c);
#line 3094 "complex.cpp"
    void reset();
    }
  namespace kraken {
#line 3106 "complex.cpp"
    cell *head(cell *c);
#line 3112 "complex.cpp"
    void kill(cell *c, eMonster who);
#line 3134 "complex.cpp"
    int totalhp(cell *c);
#line 3150 "complex.cpp"
    void attacks();
#line 3188 "complex.cpp"
    void trymove(cell *c);
    }
  #if CAP_FIELD
  namespace prairie {
#line 3263 "complex.cpp"
    void spread(cell *c, cell *from);
#line 3347 "complex.cpp"
    bool no_worms(cell *c);
#line 3353 "complex.cpp"
    bool isriver(cell *c);
#line 3361 "complex.cpp"
    bool nearriver(cell *c);
#line 3383 "complex.cpp"
    cell *next(cell *c, int pv IS(1));
#line 3407 "complex.cpp"
    extern vector<cell*> beaststogen;
#line 3409 "complex.cpp"
    void generateBeast(cell *c);
#line 3468 "complex.cpp"
    void move();
#line 3492 "complex.cpp"
    void generateTreasure(cell *c);
#line 3508 "complex.cpp"
    void treasures();
    }
  #endif
  namespace ca {
#line 3538 "complex.cpp"
    extern ld prob;
#line 3542 "complex.cpp"
    extern eWall wlive;
#line 3544 "complex.cpp"
    extern set<cell*> changed;
#line 3546 "complex.cpp"
    void list_adj(cell *c);
#line 3554 "complex.cpp"
    string fillup(string s);
#line 3559 "complex.cpp"
    void init();
#line 3604 "complex.cpp"
    void simulate();
    }
  #if CAP_FIELD
  namespace windmap {
#line 3711 "complex.cpp"
    static const int NOWINDBELOW = 8;
    static const int NOWINDFROM = 120;  
#line 3719 "complex.cpp"
    int getId(cell *c);
#line 3731 "complex.cpp"
    extern vector<unsigned char> windcodes;
#line 3747 "complex.cpp"
    void create();
#line 3836 "complex.cpp"
    int at(cell *c);
    }
  #endif
  namespace halloween {
#line 3846 "complex.cpp"
    extern cell *dragoncells[4];
#line 3924 "complex.cpp"
    void getTreat(cell *where);
#line 3930 "complex.cpp"
    void after_treat();
#line 4096 "complex.cpp"
    void start_all();
    }
  namespace dungeon {
#line 4415 "complex.cpp"
    void all(cell *c, int d);
    }

  // implemented in: 3d-models.cpp

  #if MAXMDIM >= 4
#line 24 "3d-models.cpp"
  extern hyperpoint front_leg, rear_leg;
#line 25 "3d-models.cpp"
  extern transmatrix front_leg_move, rear_leg_move, front_leg_move_inverse, rear_leg_move_inverse;
#line 26 "3d-models.cpp"
  extern ld leg_length;
#line 40 "3d-models.cpp"
  ld zc(ld z);
#line 788 "3d-models.cpp"
  void queueball(const shiftmatrix& V, ld rad, color_t col, eItem what);
  #endif

  // implemented in: achievement.cpp

#line 15 "achievement.cpp"
  extern bool test_achievements;
#line 17 "achievement.cpp"
  extern bool offlineMode;
#line 19 "achievement.cpp"
  extern const char* leadernames[NUMLEADER];
#line 90 "achievement.cpp"
  extern bool haveLeaderboard(int id);
#line 91 "achievement.cpp"
  extern int get_currentscore(int id);
#line 92 "achievement.cpp"
  extern void set_priority_board(int id);
#line 93 "achievement.cpp"
  extern int get_sync_status();
#line 94 "achievement.cpp"
  extern bool score_loaded(int id);
#line 95 "achievement.cpp"
  extern int score_default(int id);
#line 97 "achievement.cpp"
  extern void upload_score(int id, int v);
#line 102 "achievement.cpp"
  extern vector<string> achievementsReceived;
#line 107 "achievement.cpp"
  bool wrongMode(char flags);
#line 141 "achievement.cpp"
  extern set<string> got_achievements;
#line 143 "achievement.cpp"
  void achievement_gain_once(const string& s, char flags IS(0));
#line 154 "achievement.cpp"
  void achievement_log(const char* s, char flags);
#line 188 "achievement.cpp"
  extern void achievement_init();
#line 189 "achievement.cpp"
  extern string myname();
#line 190 "achievement.cpp"
  extern void achievement_close();
#line 196 "achievement.cpp"
  extern void achievement_gain(const char* s, char flags IS(0));
#line 214 "achievement.cpp"
  void achievement_collection(eItem it);
#line 218 "achievement.cpp"
  void achievement_collection2(eItem it, int q);
#line 561 "achievement.cpp"
  void achievement_count(const string& s, int current, int prev);
#line 611 "achievement.cpp"
  void improve_score(int i, eItem what);
#line 626 "achievement.cpp"
  void achievement_score(int cat, int number);
#line 652 "achievement.cpp"
  void improveItemScores();
#line 726 "achievement.cpp"
  void achievement_final(bool really_final);
#line 834 "achievement.cpp"
  extern bool hadtotalvictory;
#line 836 "achievement.cpp"
  void check_total_victory();
#line 851 "achievement.cpp"
  void achievement_victory(bool hyper);
#line 925 "achievement.cpp"
  extern void achievement_pump();
#line 927 "achievement.cpp"
  string get_rich_presence_text();
#line 990 "achievement.cpp"
  void achievement_display();
#line 1012 "achievement.cpp"
  bool isAscending(int i);
#line 1016 "achievement.cpp"
  int score_default(int i);
  #ifndef HAVE_ACHIEVEMENTS
#line 1022 "achievement.cpp"
  int get_sync_status();
#line 1023 "achievement.cpp"
  void set_priority_board(int);
  #endif

  // implemented in: arbitrile.cpp

  namespace arb {
#line 15 "arbitrile.cpp"
    extern int affine_limit;
#line 17 "arbitrile.cpp"
    extern bool legacy; /* angleofs command */
#line 20 "arbitrile.cpp"
    
    /** a type used to specify the connections between shapes */
    struct connection_t {
    /** the index of the connected shape in the 'shapes' table */
    int sid;
    /** the index of the edge in the 'shapes' table */
    int eid;
    /** 1 if this connection mirrored, 0 otherwise. do_unmirror() removes all mirrors by doubling shapes */
    int mirror;
    };
    
    inline void print(hstream& hs, const connection_t& conn) { print(hs, tie(conn.sid, conn.eid, conn.mirror)); }
    
    /** \brief each shape of the arb tessellation
    *  note: the usual HyperRogue convention is: vertex 0, edge 0, vertex 1, edge 1, ... 
    *  note: the tesfile convention is: edge 0, vertex 0, edge 1, vertex 1, ...
    */
    
    struct shape {
    /** index in the arbi_tiling::shapes */
    int id;
    /** flags such as sfLINE and sfPH */
    int flags;
    /** list of vertices in the usual convention */
    vector<hyperpoint> vertices;
    /** list of vertices in the tesfile convention */
    vector<ld> angles;
    /** list of edge lengths */
    vector<ld> edges;
    /** list of edge connections */
    vector<connection_t> connections;
    int size() const { return isize(vertices); }
    void build_from_angles_edges();
    vector<pair<int, int> > sublines;
    vector<pair<ld, ld>> stretch_shear;
    int repeat_value;
    /** if a tile/edge combination may be connected to edges j1 and j2 of this, j1-j2 must be divisible by cycle_length */
    int cycle_length;
    /** list of valences of vertices in the tesfile convention */
    vector<int> vertex_valence;
    };
    
    struct slider {
    string name;
    ld zero;
    ld current;
    ld min;
    ld max;
    };
    
    struct arbi_tiling {
    
    int order;
    bool have_line, have_ph, have_tree;
    int yendor_backsteps;
    
    vector<shape> shapes;
    string name;
    string comment;
    
    vector<slider> sliders;
    
    ld cscale;
    int range;
    ld floor_scale;
    ld boundary_ratio;
    string filename;
    
    int min_valence, max_valence;
    
    geometryinfo1& get_geometry();
    eGeometryClass get_class() { return get_geometry().kind; }
    
    ld scale();
    };
#line 97 "arbitrile.cpp"
    extern arbi_tiling current;
#line 99 "arbitrile.cpp"
    extern bool using_slided;
#line 101 "arbitrile.cpp"
    extern arbi_tiling slided;
#line 103 "arbitrile.cpp"
    bool in_slided();
#line 105 "arbitrile.cpp"
    arbi_tiling& current_or_slided();
#line 111 "arbitrile.cpp"
    short& id_of(heptagon *h);
#line 114 "arbitrile.cpp"
    struct hr_polygon_error : hr_exception {
    vector<transmatrix> v;
    eGeometryClass c;
    int id;
    transmatrix end;
    map<string, cld> params;
    hr_polygon_error(const vector<transmatrix>& _v, int _id, transmatrix _e) : v(_v), c(cgclass), id(_id), end(_e) {}
    ~hr_polygon_error() noexcept(true) {}
    string generate_error();
    };
#line 216 "arbitrile.cpp"
    bool correct_index(int index, int size);
#line 223 "arbitrile.cpp"
    void load_tile(exp_parser& ep, arbi_tiling& c, bool unit);
#line 258 "arbitrile.cpp"
    extern bool do_unmirror;
#line 261 "arbitrile.cpp"
    void unmirror();
#line 295 "arbitrile.cpp"
    void compute_vertex_valence();
#line 383 "arbitrile.cpp"
    void load(const string& fname, bool after_sliding IS(false));
#line 760 "arbitrile.cpp"
    extern map<heptagon*, pair<heptagon*, transmatrix>> arbi_matrix;
#line 762 "arbitrile.cpp"
    extern hrmap *current_altmap;
#line 766 "arbitrile.cpp"
    transmatrix get_adj(arbi_tiling& c, int t, int dl, int t1, int xdl);
#line 979 "arbitrile.cpp"
    hrmap *new_map();
#line 981 "arbitrile.cpp"
    void run(string fname);
#line 1023 "arbitrile.cpp"
    void sliders_changed();
#line 1042 "arbitrile.cpp"
    void set_sliders();
    namespace convert {
#line 1062 "arbitrile.cpp"
      extern eGeometry base_geometry;
#line 1063 "arbitrile.cpp"
      extern eVariation base_variation;
#line 1141 "arbitrile.cpp"
      void convert();
#line 1260 "arbitrile.cpp"
      bool in();
#line 1265 "arbitrile.cpp"
      void activate();
      }
#line 1321 "arbitrile.cpp"
    bool in();
#line 1323 "arbitrile.cpp"
    extern string tes;
#line 1325 "arbitrile.cpp"
    bool linespattern(cell *c);
#line 1329 "arbitrile.cpp"
    bool pseudohept(cell *c);
#line 1334 "arbitrile.cpp"
    void choose();
    }

  // implemented in: archimedean.cpp

  namespace arcm {
#line 15 "archimedean.cpp"
    bool in();
#line 17 "archimedean.cpp"
    extern ld euclidean_edge_length;
#line 20 "archimedean.cpp"
    struct hr_archimedean_error : hr_exception {
    hr_archimedean_error(string _s) : hr_exception(_s) {}
    };
    
    struct archimedean_tiling {
    
    int coloring;
    
    string symbol;
    
    vector<int> faces;
    vector<int> adj;
    vector<bool> invert;
    vector<int> nflags;
    
    bool have_ph, have_line, have_symmetry;
    int real_faces;
    int real_face_type;
    
    int repetition;
    int N;
    
    bool regular;
    
    ld euclidean_angle_sum;
    
    vector<int> flags;
    
    vector<vector<pair<int, int>>> adjacent;
    vector<vector<pair<ld, ld>>> triangles;
    
    void make_match(int a, int i, int b, int j);
    void prepare();
    void compute_sum();
    void compute_geometry();
    
    void parse();
    void parse(string s) { symbol = s; parse(); }
    
    ld edgelength;
    
    vector<ld> inradius, circumradius, alphas;
    
    vector<vector<int>> matches;
    vector<int> periods;
    vector<int> tilegroup;
    vector<int> groupoffset;
    int tilegroups;
    
    int errors;
    string errormsg;
    
    pair<int, int>& get_adj(heptagon *h, int cid);
    pair<int, int>& get_adj(heptspin hs) { return get_adj(hs.at, hs.spin); }
    pair<ld, ld>& get_triangle(heptagon *h, int cid);
    pair<ld, ld>& get_triangle(heptspin hs) { return get_triangle(hs.at, hs.spin); }
    pair<ld, ld>& get_triangle(const pair<int, int>& p, int delta = 0);
    pair<int, int>& get_adj(const pair<int, int>& p, int delta = 0);
    
    int support_threecolor();
    int support_threecolor_bitruncated();
    int support_football();
    bool support_chessboard();
    void regroup();
    string world_size();
    void get_nom_denom(int& anom, int& adenom);
    
    geometryinfo1& get_geometry(ld mul = 1);
    eGeometryClass get_class() { return get_geometry().kind; }
    
    bool get_step_values(int& steps, int& single_step);
    
    transmatrix adjcell_matrix(heptagon *h, int d);
    
    ld scale();
    };
#line 99 "archimedean.cpp"
    static const int sfPH = 1;
    static const int sfLINE = 2;
    static const int sfCHESS = 4;
    static const int sfTHREE = 8;
    static const int sfSEMILINE = 16;
    #if CAP_ARCM
#line 108 "archimedean.cpp"
    extern archimedean_tiling current;
#line 109 "archimedean.cpp"
    extern archimedean_tiling fake_current;
#line 111 "archimedean.cpp"
    archimedean_tiling& current_or_fake();
#line 122 "archimedean.cpp"
    short& id_of(heptagon *h);
#line 128 "archimedean.cpp"
    short& parent_index_of(heptagon *h);
#line 134 "archimedean.cpp"
    int neighbors_of(heptagon *h);
#line 138 "archimedean.cpp"
    int gcd(int x, int y);
#line 509 "archimedean.cpp"
    extern map<heptagon*, pair<heptagon*, transmatrix>> archimedean_gmatrix;
#line 511 "archimedean.cpp"
    extern hrmap *current_altmap;
#line 521 "archimedean.cpp"
    extern bool use_gmatrix;
#line 527 "archimedean.cpp"
    extern geometry_information *alt_cgip;
#line 529 "archimedean.cpp"
    geometry_information *find_alt_cgip();
#line 820 "archimedean.cpp"
    hrmap *new_map();
#line 940 "archimedean.cpp"
    int fix(heptagon *h, int spin);
#line 1080 "archimedean.cpp"
    bool pseudohept(cell *c);
#line 1091 "archimedean.cpp"
    bool chessvalue(cell *c);
#line 1097 "archimedean.cpp"
    bool linespattern(cell *c);
#line 1101 "archimedean.cpp"
    int threecolor(cell *c);
#line 1124 "archimedean.cpp"
    extern vector<pair<string, int> > samples;
#line 1228 "archimedean.cpp"
    void next_variation();
#line 1236 "archimedean.cpp"
    void enable(archimedean_tiling& arct);
#line 1274 "archimedean.cpp"
    void show();
#line 1478 "archimedean.cpp"
    int degree(heptagon *h);
#line 1482 "archimedean.cpp"
    bool is_vertex(heptagon *h);
#line 1504 "archimedean.cpp"
    int valence();
#line 1517 "archimedean.cpp"
    map<gp::loc, cdata>& get_cdata();
    #endif
    }

  // implemented in: asonov.cpp

  namespace asonov {
    #if !CAP_SOLV
#line 20 "asonov.cpp"
    inline bool in() { return false; }
    #endif
#line 24 "asonov.cpp"
    extern int period_xy;
#line 25 "asonov.cpp"
    extern int period_z;
    #if CAP_SOLV
#line 29 "asonov.cpp"
    bool in();
#line 31 "asonov.cpp"
    extern hyperpoint tx, ty, tz;
#line 32 "asonov.cpp"
    extern transmatrix straighten;
#line 35 "asonov.cpp"
    struct coord: public array<int,3> {
    coord() {}
    coord(int x, int y, int z) : array<int,3>(make_array(zgmod(x, period_xy), zgmod(y, period_xy), zgmod(z, period_z))) {}
    coord shift(int x, int y, int z=0) { return coord(self[0]+x, self[1]+y, self[2]+z); }
    coord up() { return coord(self[0]*2-self[1], self[1]-self[0], self[2]+1); }
    coord down() { return coord(self[0]+self[1], self[0]+self[1]*2, self[2]-1); }  
    coord addmove(int d);
    coord operator - (coord b);
    };
#line 64 "asonov.cpp"
    void prepare();
#line 111 "asonov.cpp"
    void prepare_walls();
#line 158 "asonov.cpp"
    transmatrix adjmatrix(int i);
#line 206 "asonov.cpp"
    hrmap *new_map();
#line 208 "asonov.cpp"
    coord get_coord(heptagon *h);
#line 210 "asonov.cpp"
    heptagon *get_at(coord where);
#line 212 "asonov.cpp"
    extern int period_xy_edit, period_z_edit;
#line 214 "asonov.cpp"
    void set_flags();
#line 222 "asonov.cpp"
    void prepare_config();
#line 227 "asonov.cpp"
    void show_config();
    #endif
    }

  // implemented in: attack.cpp

#line 12 "attack.cpp"
  extern array<int, motypes> kills;
#line 66 "attack.cpp"
  int tkills();
#line 72 "attack.cpp"
  int killtypes();
#line 79 "attack.cpp"
  bool arrow_stuns(eMonster m);
#line 83 "attack.cpp"
  bool canAttack(cell *c1, eMonster m1, cell *c2, eMonster m2, flagtype flags);
#line 184 "attack.cpp"
  bool petrify(cell *c, eWall walltype, eMonster m);
#line 224 "attack.cpp"
  void killIvy(cell *c, eMonster who);
#line 234 "attack.cpp"
  void prespill(cell* c, eWall t, int rad, cell *from);
#line 314 "attack.cpp"
  void spillfix(cell* c, eWall t, int rad);
#line 323 "attack.cpp"
  void spill(cell* c, eWall t, int rad);
#line 327 "attack.cpp"
  void degradeDemons();
#line 343 "attack.cpp"
  void stunMonster(cell *c2, eMonster killer, flagtype flags);
#line 376 "attack.cpp"
  bool attackJustStuns(cell *c2, flagtype f, eMonster attacker);
#line 391 "attack.cpp"
  void minerEffect(cell *c);
#line 414 "attack.cpp"
  void killMutantIvy(cell *c, eMonster who);
#line 424 "attack.cpp"
  bignum ivy_total();
#line 430 "attack.cpp"
  void killMonster(cell *c, eMonster who, flagtype deathflags IS(0));
#line 835 "attack.cpp"
  void fightmessage(eMonster victim, eMonster attacker, bool stun, flagtype flags);
#line 937 "attack.cpp"
  bool notthateasy(eMonster m);
#line 942 "attack.cpp"
  bool attackMonster(cell *c, flagtype flags, eMonster killer);
#line 1020 "attack.cpp"
  void pushMonster(const movei& mi);
#line 1049 "attack.cpp"
  void killFriendlyIvy();
#line 1054 "attack.cpp"
  bool monsterPushable(cell *c2);
#line 1060 "attack.cpp"
  bool should_switchplace(cell *c1, cell *c2);
#line 1068 "attack.cpp"
  bool switchplace_prevent(cell *c1, cell *c2, struct pcmove& m);
#line 1083 "attack.cpp"
  void handle_switchplaces(cell *c1, cell *c2, bool& switchplaces);
#line 1104 "attack.cpp"
  bool flashWouldKill(cell *c, flagtype extra);
#line 1121 "attack.cpp"
  vector<cell*> gun_targets(cell *c);
#line 1135 "attack.cpp"
  void fallMonster(cell *c, flagtype flags IS(0));
#line 1139 "attack.cpp"
  void killHardcorePlayer(int id, flagtype flags);
#line 1167 "attack.cpp"
  void killThePlayer(eMonster m, int id, flagtype flags);
#line 1199 "attack.cpp"
  void killThePlayerAt(eMonster m, cell *c, flagtype flags);
#line 1206 "attack.cpp"
  template<class T> void do_swords(movei mi, eMonster who, const T& f) {
  for(int bb=0; bb<2; bb++) if(who == moPlayer && sword::orbcount(bb)) {
  cell *sf = sword::pos(mi.s, sword::dir[multi::cpid], bb);
  cell *st = sword::pos(mi.t, sword::shift(mi, sword::dir[multi::cpid]), bb);
  f(st, bb);
  if(sf != st && !isNeighbor(sf,st)) {
  // also attack the in-transit cell
  if(S3 == 3) {
  forCellEx(sb, sf) if(isNeighbor(sb, st) && sb != mi.s && sb != mi.t) f(sb, bb);
  }
  else {
  forCellEx(sb, mi.s) if(isNeighbor(sb, st) && sb != mi.t) f(sb, bb);
  forCellEx(sb, mi.t) if(isNeighbor(sb, sf) && sb != mi.s) f(sb, bb);
  }
  }
  }
  }
#line 1227 "attack.cpp"
  void stabbingAttack(movei mi, eMonster who, int bonuskill IS(0));

  // implemented in: barriers.cpp

#line 11 "barriers.cpp"
  bool checkBarriersFront(cellwalker bb, int q IS(5), bool cross IS(false));
#line 36 "barriers.cpp"
  bool hasbardir(cell *c);
#line 40 "barriers.cpp"
  void preventbarriers(cell *c);
#line 45 "barriers.cpp"
  bool checkBarriersBack(cellwalker bb, int q IS(5), bool cross IS(false));
#line 70 "barriers.cpp"
  bool warped_version(eLand l1, eLand l2);
#line 74 "barriers.cpp"
  int get_valence(cellwalker bb, int dir, bool& ok);
#line 85 "barriers.cpp"
  void set_and_wall(cell *c, eLand l);
#line 93 "barriers.cpp"
  void surround_by(bool setit, cellwalker bb, int dir, int a, int b, eLand which, bool swapped, bool& ok);
#line 109 "barriers.cpp"
  void spin_around_by(cellwalker& bb, int dir, int q);
#line 116 "barriers.cpp"
  bool on_wall(eLand ws);
#line 132 "barriers.cpp"
  bool general_barrier_advance(cellwalker& bb, int& dir, eLand& l1, eLand& l2, eLand& ws, bool setit);
#line 243 "barriers.cpp"
  bool general_barrier_check(cellwalker bb, int q, int dir, eLand ws, eLand l1 IS(laNone), eLand l2 IS(laNone));
#line 266 "barriers.cpp"
  bool general_barrier_check_after(cellwalker bb, int steps, int q, int dir, eLand ws, eLand l1 IS(laNone), eLand l2 IS(laNone));
#line 271 "barriers.cpp"
  eWall getElementalWall(eLand l);
#line 279 "barriers.cpp"
  void setbarrier(cell *c, eLand l1, eLand l2, bool setbar);
#line 308 "barriers.cpp"
  void setbarrier(cell *c);
#line 312 "barriers.cpp"
  void setland(cell *c, eLand l);
#line 322 "barriers.cpp"
  void extendcheck(cell *c);
#line 329 "barriers.cpp"
  bool mirrorwall(cell *c);
#line 333 "barriers.cpp"
  void extendBarrierFront(cell *c);
#line 383 "barriers.cpp"
  void extendBarrierBack(cell *c);
#line 415 "barriers.cpp"
  void general_barrier_extend(cell *c);
#line 509 "barriers.cpp"
  void extendCR5(cell *c);
#line 536 "barriers.cpp"
  bool isbar4(cell *c);
#line 543 "barriers.cpp"
  bool barrier_cross(eLand l, eLand r);
#line 549 "barriers.cpp"
  void extendBarrier(cell *c);
#line 636 "barriers.cpp"
  void buildBarrierForce(cell *c, int d, eLand l);
#line 651 "barriers.cpp"
  void buildBarrier(cell *c, int d, eLand l IS(laNone));
#line 665 "barriers.cpp"
  bool buildBarrier6(cellwalker cw, int type);
#line 776 "barriers.cpp"
  bool buildBarrier4(cell *c, int d, int mode, eLand ll, eLand lr);
#line 837 "barriers.cpp"
  void buildBarrierStrong(cell *c, int d, bool oldleft, eLand newland);
#line 850 "barriers.cpp"
  void buildBarrierStrong(cell *c, int d, bool oldleft);
#line 854 "barriers.cpp"
  void buildCrossroads2(cell *c);
  #if MAXMDIM >= 4
#line 953 "barriers.cpp"
  bool bufferzone();
#line 954 "barriers.cpp"
  int basic_tests();
#line 956 "barriers.cpp"
  bool valid_dir(const vector<char>& ad, int j, cell *c);
#line 970 "barriers.cpp"
  void extend3D(cell *c);
#line 1027 "barriers.cpp"
  bool buildBarrier3D(cell *c, eLand l2, int forced_dir);
  #endif
#line 1082 "barriers.cpp"
  bool buildBarrierNowall(cell *c, eLand l2, int forced_dir IS(NODIR));
#line 1086 "barriers.cpp"
  bool general_barrier_build(eLand ws, cell *c, eLand l2, int forced_dir IS(NODIR));

  // implemented in: basegraph.cpp

#line 12 "basegraph.cpp"
  /** configuration of the current view */
  struct display_data {
  /** The cell which is currently in the center. */
  cell *precise_center;
  /** The current rotation, relative to precise_center. */
  transmatrix view_matrix;
  /** Camera rotation, used in nonisotropic geometries. */
  transmatrix local_perspective;
  /** The view relative to the player character. */
  shiftmatrix player_matrix;
  /** On-screen coordinates for all the visible cells. */
  map<cell*, shiftmatrix> cellmatrices, old_cellmatrices;
  /** Position of the current map view, relative to the screen (0 to 1). */
  ld xmin, ymin, xmax, ymax;
  /** Position of the current map view, in pixels. */
  ld xtop, ytop, xsize, ysize;
  display_data() { xmin = ymin = 0; xmax = ymax = 1; }
  
  /** Center of the current map view, in pixels. */
  int xcenter, ycenter;
  ld radius;
  int scrsize;  
  bool sidescreen;
  
  ld tanfov;
  flagtype next_shader_flags;
  
  ld eyewidth();
  bool stereo_active();
  bool in_anaglyph();
  
  void set_viewport(int ed);
  void set_projection(int ed, ld shift);
  void set_mask(int ed);
  
  void set_all(int ed, ld shift);
  /** Which copy of the player cell? */
  transmatrix which_copy;
  /** On-screen coordinates for all the visible cells. */
  map<cell*, vector<shiftmatrix>> all_drawn_copies;
  };
  
  #define View (::hr::current_display->view_matrix)
  #define cwtV (::hr::current_display->player_matrix)
  #define centerover (::hr::current_display->precise_center)
  #define gmatrix (::hr::current_display->cellmatrices)
  #define gmatrix0 (::hr::current_display->old_cellmatrices)
  #define NLP (::hr::current_display->local_perspective)
  
#line 63 "basegraph.cpp"
  extern display_data default_display;
#line 64 "basegraph.cpp"
  extern display_data *current_display;
#line 67 "basegraph.cpp"
  extern unsigned backcolor;
#line 68 "basegraph.cpp"
  extern unsigned bordcolor;
#line 69 "basegraph.cpp"
  extern unsigned forecolor;
#line 79 "basegraph.cpp"
  int get_sightrange();
#line 81 "basegraph.cpp"
  int get_sightrange_ambush();
#line 107 "basegraph.cpp"
  int getnext(const char* s, int& i);
  #if CAP_SDL
  #if !CAP_SDL2
#line 145 "basegraph.cpp"
  typedef SDL_Surface SDL_Renderer;
  #define srend s
  #endif
#line 150 "basegraph.cpp"
  extern SDL_Surface *s;
#line 151 "basegraph.cpp"
  extern SDL_Surface *s_screen;
  #if CAP_SDL2
#line 153 "basegraph.cpp"
  extern SDL_Renderer *s_renderer, *s_software_renderer;
#line 155 "basegraph.cpp"
  #define srend s_software_renderer
#line 157 "basegraph.cpp"
  extern SDL_Texture *s_texture;
#line 158 "basegraph.cpp"
  extern SDL_Window *s_window;
  #endif
#line 161 "basegraph.cpp"
  extern color_t qpixel_pixel_outside;
#line 163 "basegraph.cpp"
  color_t& qpixel(SDL_Surface *surf, int x, int y);
#line 171 "basegraph.cpp"
  void present_surface();
#line 182 "basegraph.cpp"
  void present_screen();
  #endif
  #if CAP_SDLTTF
#line 200 "basegraph.cpp"
  extern string fontpath;
  #endif
  #if !CAP_GL
#line 248 "basegraph.cpp"
  void setcameraangle(bool b);
  #endif
  #if !CAP_GL
#line 252 "basegraph.cpp"
  void reset_projection();
#line 253 "basegraph.cpp"
  void glflush();
#line 254 "basegraph.cpp"
  bool model_needs_depth();
  #endif
  #if CAP_GL
#line 260 "basegraph.cpp"
  void eyewidth_translate(int ed);
#line 266 "basegraph.cpp"
  extern bool new_projection_needed;
#line 268 "basegraph.cpp"
  inline void reset_projection() { new_projection_needed = true; }
#line 271 "basegraph.cpp"
  extern ld lband_shift;
#line 311 "basegraph.cpp"
  bool model_needs_depth();
#line 315 "basegraph.cpp"
  void setGLProjection(color_t col IS(backcolor));
#line 364 "basegraph.cpp"
   int next_p2 (int a );
  #if CAP_GLFONT
#line 376 "basegraph.cpp"
  struct charinfo_t {
  int w, h;
  float tx0, ty0, tx1, ty1;
  };
  
  struct glfont_t {
  GLuint texture;                                     // Holds The Texture Id
  //GLuint list_base;                                   // Holds The First Display List ID  
  vector<charinfo_t> chars; 
  };
  
  const int max_glfont_size = 72;
#line 390 "basegraph.cpp"
  extern glfont_t *glfont[max_glfont_size+1];
#line 436 "basegraph.cpp"
  void init_glfont(int size);
  #endif
#line 622 "basegraph.cpp"
  extern purehookset hooks_resetGL;
#line 624 "basegraph.cpp"
  void resetGL();
  #endif
  #if CAP_XGD
#line 666 "basegraph.cpp"
  void gdpush(int t);
#line 670 "basegraph.cpp"
  bool displaychr(int x, int y, int shift, int size, char chr, color_t col);
#line 705 "basegraph.cpp"
  bool displayfr(int x, int y, int b, int size, const string &s, color_t color, int align);
#line 717 "basegraph.cpp"
  bool displaystr(int x, int y, int shift, int size, const string &s, color_t color, int align);
#line 721 "basegraph.cpp"
  bool displaystr(int x, int y, int shift, int size, char const *s, color_t color, int align);
  #endif
  #if !CAP_XGD
#line 727 "basegraph.cpp"
  bool displaystr(int x, int y, int shift, int size, const char *str, color_t color, int align);
#line 795 "basegraph.cpp"
  bool displaystr(int x, int y, int shift, int size, const string &s, color_t color, int align);
#line 799 "basegraph.cpp"
  bool displayfrSP(int x, int y, int sh, int b, int size, const string &s, color_t color, int align, int p);
#line 816 "basegraph.cpp"
  bool displayfr(int x, int y, int b, int size, const string &s, color_t color, int align);
#line 820 "basegraph.cpp"
  bool displaychr(int x, int y, int shift, int size, char chr, color_t col);
  #endif
#line 829 "basegraph.cpp"
  struct msginfo {
  int stamp;
  time_t rtstamp;
  int gtstamp;
  int turnstamp;
  char flashout;
  char spamtype;
  int quantity;
  string msg;
  };
#line 841 "basegraph.cpp"
  extern vector<msginfo> msgs;
#line 843 "basegraph.cpp"
  extern vector<msginfo> gamelog;
#line 845 "basegraph.cpp"
  void flashMessages();
#line 853 "basegraph.cpp"
  string fullmsg(msginfo& m);
#line 877 "basegraph.cpp"
  void clearMessages();
#line 879 "basegraph.cpp"
  void addMessage(string s, char spamtype);
#line 894 "basegraph.cpp"
  color_t colormix(color_t a, color_t b, color_t c);
#line 900 "basegraph.cpp"
  int rhypot(int a, int b);
#line 902 "basegraph.cpp"
  ld realradius();
#line 916 "basegraph.cpp"
  void drawmessage(const string& s, int& y, color_t col);
#line 953 "basegraph.cpp"
  void drawmessages();
#line 988 "basegraph.cpp"
  void drawCircle(int x, int y, int size, color_t color, color_t fillcolor IS(0));
#line 1039 "basegraph.cpp"
  void displayButton(int x, int y, const string& name, int key, int align, int rad IS(0));
#line 1047 "basegraph.cpp"
  #define SETMOUSEKEY 5000
#line 1050 "basegraph.cpp"
  extern char mousekey;
#line 1051 "basegraph.cpp"
  extern char newmousekey;
#line 1053 "basegraph.cpp"
  void displaymm(char c, int x, int y, int rad, int size, const string& title, int align);
#line 1060 "basegraph.cpp"
  bool displayButtonS(int x, int y, const string& name, color_t col, int align, int size);
#line 1068 "basegraph.cpp"
  void displayColorButton(int x, int y, const string& name, int key, int align, int rad, color_t color, color_t color2 IS(0));
#line 1079 "basegraph.cpp"
  void compute_fsize();
#line 1089 "basegraph.cpp"
  extern bool graphics_on;
#line 1091 "basegraph.cpp"
  bool want_vsync();
#line 1097 "basegraph.cpp"
  bool need_to_reopen_window();
#line 1107 "basegraph.cpp"
  bool need_to_apply_screen_settings();
#line 1117 "basegraph.cpp"
  void close_renderer();
#line 1126 "basegraph.cpp"
  void close_window();
#line 1133 "basegraph.cpp"
  void apply_screen_settings();
#line 1164 "basegraph.cpp"
  pair<int, int> get_requested_resolution();
#line 1182 "basegraph.cpp"
  extern bool resizable;
#line 1184 "basegraph.cpp"
  void setvideomode_android();
  #if CAP_SDL
#line 1192 "basegraph.cpp"
  extern int current_window_flags;
#line 1194 "basegraph.cpp"
  void setvideomode();
  #endif
#line 1330 "basegraph.cpp"
  extern bool noGUI;
  #if CAP_SDL
#line 1333 "basegraph.cpp"
  extern bool sdl_on;
#line 1334 "basegraph.cpp"
  int SDL_Init1(Uint32 flags);
  #endif
#line 1344 "basegraph.cpp"
  void init_font();
#line 1353 "basegraph.cpp"
  void close_font();
#line 1369 "basegraph.cpp"
  void init_graph();
#line 1427 "basegraph.cpp"
  void initialize_all();
#line 1474 "basegraph.cpp"
  void quit_all();
#line 1486 "basegraph.cpp"
  int calcfps();
  namespace subscreens {
#line 1499 "basegraph.cpp"
    extern vector<display_data> player_displays;
#line 1500 "basegraph.cpp"
    extern bool in;
#line 1501 "basegraph.cpp"
    extern int current_player;
#line 1503 "basegraph.cpp"
    bool is_current_player(int id);
#line 1508 "basegraph.cpp"
    void prepare();
#line 1528 "basegraph.cpp"
    bool split(reaction_t what);
    }

  // implemented in: bigstuff.cpp

#line 20 "bigstuff.cpp"
  int newRoundTableRadius();
  #if CAP_COMPLEX2
#line 25 "bigstuff.cpp"
  int getAnthraxData(cell *c, bool b);
  #endif
#line 42 "bigstuff.cpp"
  int roundTableRadius(cell *c);
#line 51 "bigstuff.cpp"
  int celldistAltRelative(cell *c);
#line 68 "bigstuff.cpp"
  gp::loc camelot_coords();
#line 70 "bigstuff.cpp"
  int euclidAlt(short x, short y);
#line 97 "bigstuff.cpp"
  int cylinder_alt(cell *c);
#line 111 "bigstuff.cpp"
  int compassDist(cell *c);
#line 118 "bigstuff.cpp"
  cell *findcompass(cell *c);
#line 137 "bigstuff.cpp"
  bool grailWasFound(cell *c);
#line 142 "bigstuff.cpp"
  int default_levs();
#line 155 "bigstuff.cpp"
  namespace altmap {
  /** h->move(relspin(h->alt)) corresponds to h->alt->move(0) */
  inline short& relspin(heptagon *alt) { return alt->zebraval; }
  
  /** for Camelot, the radius */
  inline short& radius(heptagon *alt) { return alt->emeraldval; }
  
  /** type of the horocycle -- currently used in Land of Storms which has two types */
  inline short& which(heptagon *alt) { return alt->emeraldval; }
  
  /** the original land, for altmaps which may appear in multiple lands (Camelot) */
  inline short& orig_land(heptagon *alt) { return alt->fiftyval; }
  
  /** NOTE: do not use fieldval, because it would conflict with the map generation for hrmap_h3_rule and hrmap_rulegen */
  }
  #if MAXMDIM >= 4
#line 209 "bigstuff.cpp"
  int hrandom_adjacent(cellwalker cw);
  #endif
#line 217 "bigstuff.cpp"
  heptagon *create_altmap(cell *c, int rad, hstate firststate, int special IS(0));
#line 315 "bigstuff.cpp"
  void beCIsland(cell *c);
#line 323 "bigstuff.cpp"
  void generateTreasureIsland(cell *c);
#line 385 "bigstuff.cpp"
  extern bool generatingEquidistant;
#line 387 "bigstuff.cpp"
  cell *buildAnotherEquidistant(cell *c, int radius);
#line 477 "bigstuff.cpp"
  void buildAnotherEquidistant(cell *c);
#line 491 "bigstuff.cpp"
  int coastval(cell *c, eLand base);
#line 516 "bigstuff.cpp"
  bool checkInTree(cell *c, int maxv);
#line 536 "bigstuff.cpp"
  void buildEquidistant(cell *c);
#line 810 "bigstuff.cpp"
  cell *randomDown(cell *c);
#line 819 "bigstuff.cpp"
  int edgeDepth(cell *c);
#line 829 "bigstuff.cpp"
  int getHauntedDepth(cell *c);
#line 837 "bigstuff.cpp"
  int towerval(cell *c, const cellfunction& cf);
#line 848 "bigstuff.cpp"
  void setLandWeird(cell *c);
#line 859 "bigstuff.cpp"
  void setLandQuotient(cell *c);
#line 879 "bigstuff.cpp"
  void elementalXY(cell *c, int x, int y, bool make_wall);
#line 898 "bigstuff.cpp"
  void setLandSphere(cell *c);
#line 934 "bigstuff.cpp"
  eLand& get_euland(int c);
#line 939 "bigstuff.cpp"
  void clear_euland(eLand first);
#line 952 "bigstuff.cpp"
  eLand switchable(eLand nearland, eLand farland, int c);
#line 983 "bigstuff.cpp"
  eLand getEuclidLand(int c);
#line 996 "bigstuff.cpp"
  void setLandSol(cell *c);
#line 1021 "bigstuff.cpp"
  void setLandHybrid(cell *c);
#line 1063 "bigstuff.cpp"
  void setLandNil(cell *c);
#line 1117 "bigstuff.cpp"
  void setLandEuclid(cell *c);
#line 1241 "bigstuff.cpp"
  eLand get_euland3(int x);
#line 1248 "bigstuff.cpp"
  void set_euland3(cell *c, int co10, int co11, int alt, int hash);
#line 1302 "bigstuff.cpp"
  extern bool easy_to_find_specialland;
#line 1304 "bigstuff.cpp"
  bool quickfind(eLand l);
#line 1317 "bigstuff.cpp"
  extern hookset<int(cell*, bool)> hooks_wallchance;
#line 1319 "bigstuff.cpp"
  int wallchance(cell *c, bool deepOcean);
#line 1357 "bigstuff.cpp"
  bool horo_ok();
#line 1364 "bigstuff.cpp"
  bool horo_or_eubinary();
#line 1369 "bigstuff.cpp"
  bool have_alt(cell *c);
#line 1374 "bigstuff.cpp"
  void gen_alt(cell *c);
#line 1379 "bigstuff.cpp"
  void gen_alt_around(cell *c);
#line 1388 "bigstuff.cpp"
  bool greater_alt(cell *c, cell *c2);
#line 1392 "bigstuff.cpp"
  int horo_gen_distance();
#line 1396 "bigstuff.cpp"
  bool single_horo(eLand horoland);
#line 1400 "bigstuff.cpp"
  bool in_single_horo(cell *c, eLand horoland);
#line 1404 "bigstuff.cpp"
  bool inside_starting_horo(cell *c, eLand horoland);
#line 1408 "bigstuff.cpp"
  bool extend_alt(cell *c, eLand horoland, eLand overland, bool extend_in_single IS(true), int dist IS(horo_gen_distance()));
#line 1419 "bigstuff.cpp"
  bool can_start_horo(cell *c);
#line 1425 "bigstuff.cpp"
  bool gp_wall_test();
#line 1435 "bigstuff.cpp"
  bool deep_ocean_at(cell *c, cell *from);
#line 1465 "bigstuff.cpp"
  bool good_for_wall(cell *c);
#line 1473 "bigstuff.cpp"
  bool walls_not_implemented();
#line 1479 "bigstuff.cpp"
  bool old_nice_walls();
#line 1483 "bigstuff.cpp"
  bool nice_walls_available();
#line 1489 "bigstuff.cpp"
  void build_barrier_good(cell *c, eLand l IS(laNone));
#line 1501 "bigstuff.cpp"
  void build_walls(cell *c, cell *from);
#line 1636 "bigstuff.cpp"
  void start_camelot(cell *c);
#line 1645 "bigstuff.cpp"
  void build_horocycles(cell *c, cell *from);
#line 1706 "bigstuff.cpp"
  void buildBigStuff(cell *c, cell *from);
#line 1714 "bigstuff.cpp"
  bool openplains(cell *c);
#line 1740 "bigstuff.cpp"
  void buildCamelotWall(cell *c);
#line 1752 "bigstuff.cpp"
  bool no_barriers_in_radius(cell *c, int rad);
#line 1758 "bigstuff.cpp"
  eMonster camelot_monster();
#line 1768 "bigstuff.cpp"
  void buildCamelot(cell *c);
#line 1834 "bigstuff.cpp"
  int masterAlt(cell *c);
#line 1843 "bigstuff.cpp"
  int temple_layer_size();
#line 1854 "bigstuff.cpp"
  void gen_temple(cell *c);
#line 1924 "bigstuff.cpp"
  void moreBigStuff(cell *c);
#line 1982 "bigstuff.cpp"
  void generate_mines();
#line 1998 "bigstuff.cpp"
  extern vector<eLand> currentlands;
#line 2000 "bigstuff.cpp"
  void pregen();

  // implemented in: binary-tiling.cpp

  namespace bt {
#line 14 "binary-tiling.cpp"
    bool in();
    #if !CAP_BT
#line 23 "binary-tiling.cpp"
    int updir();
    #endif
    #if CAP_BT
#line 28 "binary-tiling.cpp"
    enum bindir {
    bd_right = 0,
    bd_up_right = 1,
    bd_up = 2,
    bd_up_left = 3,
    bd_left = 4,
    bd_down = 5, /* for cells of degree 6 */
    bd_down_left = 5, /* for cells of degree 7 */
    bd_down_right = 6 /* for cells of degree 7 */
    };
#line 40 "binary-tiling.cpp"
    int type_of(heptagon *h);
#line 45 "binary-tiling.cpp"
    int mapside(heptagon *h);
#line 67 "binary-tiling.cpp"
    heptagon *path(heptagon *h, int d, int d1, std::initializer_list<int> p);
#line 98 "binary-tiling.cpp"
    heptagon *pathc(heptagon *h, int d, int d1, std::vector<std::initializer_list<int>> p);
#line 104 "binary-tiling.cpp"
    extern ld hororec_scale;
#line 105 "binary-tiling.cpp"
    extern ld horohex_scale;
#line 107 "binary-tiling.cpp"
    void make_binary_lands(heptagon *parent, heptagon *h);
#line 124 "binary-tiling.cpp"
    heptagon *build(heptagon *parent, int d, int d1, int t, int side, int delta);
    #if MAXMDIM==4
#line 176 "binary-tiling.cpp"
    heptagon *build3(heptagon *parent, int d, int d1, int delta);
    #endif
#line 547 "binary-tiling.cpp"
    hrmap *new_map();
#line 555 "binary-tiling.cpp"
    hrmap *new_alt_map(heptagon *o);
#line 561 "binary-tiling.cpp"
    bool use_direct_for(int dir);
#line 566 "binary-tiling.cpp"
    int expansion_coordinate();
#line 572 "binary-tiling.cpp"
    ld area_expansion_rate();
#line 605 "binary-tiling.cpp"
    ld expansion();
#line 625 "binary-tiling.cpp"
    transmatrix normalized_at(hyperpoint h);
#line 666 "binary-tiling.cpp"
    transmatrix normalized_at(ld x, ld y, ld z IS(0));
#line 670 "binary-tiling.cpp"
    int updir();
#line 679 "binary-tiling.cpp"
    int dirs_outer();
#line 689 "binary-tiling.cpp"
    int dirs_inner();
#line 694 "binary-tiling.cpp"
    void build_tmatrix();
    #if MAXMDIM == 4
#line 779 "binary-tiling.cpp"
    void queuecube(const shiftmatrix& V, ld size, color_t linecolor, color_t facecolor);
    #endif
#line 812 "binary-tiling.cpp"
    transmatrix parabolic(ld u);
#line 816 "binary-tiling.cpp"
    transmatrix parabolic3(ld y, ld z);
#line 822 "binary-tiling.cpp"
    ld horo_level(hyperpoint h);
#line 830 "binary-tiling.cpp"
    hyperpoint deparabolic3(hyperpoint h);
#line 844 "binary-tiling.cpp"
    bool pseudohept(cell *c);
#line 855 "binary-tiling.cpp"
    pair<gp::loc, gp::loc> gpvalue(heptagon *h);
#line 862 "binary-tiling.cpp"
    int tridist(gp::loc v);
#line 871 "binary-tiling.cpp"
    int equalize(heptagon*& c1, heptagon*& c2);
#line 880 "binary-tiling.cpp"
    int celldistance3_tri(heptagon *c1, heptagon *c2);
#line 907 "binary-tiling.cpp"
    int celldistance3_rec(heptagon *c1, heptagon *c2);
#line 928 "binary-tiling.cpp"
    int celldistance3_square(heptagon *c1, heptagon *c2);
#line 953 "binary-tiling.cpp"
    int celldistance3_hex(heptagon *c1, heptagon *c2);
#line 984 "binary-tiling.cpp"
    int celldistance3_approx(heptagon *c1, heptagon *c2);
#line 1001 "binary-tiling.cpp"
    int celldistance3(heptagon *c1, heptagon *c2);
#line 1015 "binary-tiling.cpp"
    int celldistance3(cell *c1, cell *c2);
#line 1017 "binary-tiling.cpp"
    hyperpoint get_horopoint(ld y, ld x);
#line 1021 "binary-tiling.cpp"
    hyperpoint get_horopoint(hyperpoint h);
#line 1025 "binary-tiling.cpp"
    hyperpoint get_corner_horo_coordinates(cell *c, int i);
#line 1079 "binary-tiling.cpp"
    void create_faces();
    #endif
    }

  // implemented in: blizzard.cpp

#line 21 "blizzard.cpp"
  struct blizzardcell;
#line 37 "blizzard.cpp"
  extern map<cell*, blizzardcell> blizzardcells;
#line 39 "blizzard.cpp"
  void set_blizzard_frame(cell *c, int frameid);
#line 43 "blizzard.cpp"
  extern vector<blizzardcell*> bcells;
#line 47 "blizzard.cpp"
  blizzardcell* getbcell(cell *c);
#line 54 "blizzard.cpp"
  void drawBlizzards();
#line 218 "blizzard.cpp"
  extern vector<cell*> arrowtraps;
#line 220 "blizzard.cpp"
  void drawArrowTraps();

  // implemented in: celldrawer.cpp

#line 5 "celldrawer.cpp"
  int coastvalEdge(cell *c);
  
  struct celldrawer {
  cell *c;
  shiftmatrix V;
  
  color_t fcol;
  color_t wcol;
  color_t asciicol;
  color_t aura_color;
  int fd;
  int chasmg;
  int ct6;
  bool error;
  bool onradar;
  char asciichar;
  shiftmatrix Vboat;
  shiftmatrix Vd;
  int sl;
  color_t asciiborder;
  color_t asciicol1;
  char asciichar1;
  
  void addaura();
  void setcolors();
  void tune_colors();
  int getSnakelevColor(int i, int last);
  void draw_wall();
  void draw_boat();
  void draw_grid();
  void draw_ceiling();
  void draw_halfvine();
  void draw_mirrorwall();
  bool set_randompattern_floor();
  void draw_features();
  void draw_features_and_walls_3d();
  void check_rotations();
  void drawcell_in_radar();
  void bookkeeping();
  void draw_cellstat();
  void draw_wall_full();
  void draw_item_full();
  void draw_monster_full();
  void add_map_effects();
  void draw();
  bool cell_clipped();
  void draw_fallanims();
  bool draw_shmup_monster();
  void draw_gravity_particles();
  
  void set_land_floor(const shiftmatrix& Vf);
  void set_towerfloor(const cellfunction& cf = coastvalEdge);
  void set_zebrafloor();
  void set_maywarp_floor();
  void set_reptile_floor(const shiftmatrix& V, color_t col, bool nodetails = false);
  void set_emeraldfloor();
  void shmup_gravity_floor();
  
  void draw_reptile(color_t col);
  
  void radar_grid();
  
  void do_viewdist();
  };
  
  inline void drawcell(cell *c, const shiftmatrix& V) {
  celldrawer dd;
  dd.c = c;
  dd.V = V;
  dd.draw();
  }
#line 627 "celldrawer.cpp"
  color_t w_monochromatize(color_t x, int d);
#line 833 "celldrawer.cpp"
  int grid_prec();
#line 1806 "celldrawer.cpp"
  struct downseek_t {
  cell *best;
  hyperpoint total;
  hyperpoint point;
  ld speed;
  ld depth;
  int qty;
  void reset() {
  qty = 0;
  total = Hypc;
  depth = 0;
  best = nullptr;
  }
  };
#line 1822 "celldrawer.cpp"
  extern downseek_t downseek;
  #if CAP_SHAPES
#line 2641 "celldrawer.cpp"
  extern shiftmatrix ocwtV;
  #endif

  // implemented in: checkmove.cpp

#line 13 "checkmove.cpp"
  #define PUREHARDCORE_LEVEL 10
#line 17 "checkmove.cpp"
  extern bool hardcore;
#line 19 "checkmove.cpp"
  extern int hardcoreAt;
#line 21 "checkmove.cpp"
  extern bool casual;
#line 23 "checkmove.cpp"
  bool pureHardcore();
#line 26 "checkmove.cpp"
  extern bool canmove;
#line 29 "checkmove.cpp"
  extern eMonster who_kills_me;
#line 31 "checkmove.cpp"
  extern int lastkills;
#line 33 "checkmove.cpp"
  extern vector<bool> legalmoves;
#line 36 "checkmove.cpp"
  extern vector<int> move_issues;
#line 39 "checkmove.cpp"
  static const int miVALID = 10000;
  static const int miENTITY = 11000;
  static const int miRESTRICTED = 10100;
  static const int miTHREAT = 10010;
  static const int miWALL = 10001;
#line 46 "checkmove.cpp"
  extern int checked_move_issue;
#line 47 "checkmove.cpp"
  extern int yasc_code;
#line 49 "checkmove.cpp"
  void check_if_monster();
#line 55 "checkmove.cpp"
  bool hasSafeOrb(cell *c);
#line 64 "checkmove.cpp"
  struct player_move_info {
  movei mi;
  cell *swordlast[2], *swordtransit[2], *swordnext[2];
  player_move_info(movei mi);
  };
#line 71 "checkmove.cpp"
  extern vector<player_move_info> pmi;
#line 72 "checkmove.cpp"
  extern vector<cell*> pushes;
#line 94 "checkmove.cpp"
  bool krakensafe(cell *c);
#line 100 "checkmove.cpp"
  bool monstersnear(cell *c, eMonster who);
#line 202 "checkmove.cpp"
  bool monstersnear_aux();
#line 246 "checkmove.cpp"
  bool monstersnear_add_pmi(player_move_info pmi0);
#line 253 "checkmove.cpp"
  bool multimove();
  namespace multi { 
#line 272 "checkmove.cpp"
    extern bool checkonly;
#line 273 "checkmove.cpp"
    extern bool aftermove;
    }
#line 276 "checkmove.cpp"
  bool swordConflict(const player_move_info& sm1, const player_move_info& sm2);
#line 285 "checkmove.cpp"
  void checkmove();

  // implemented in: commandline.cpp

  #ifdef RESOURCEDESTDIR
#line 12 "commandline.cpp"
  extern string rsrcdir;
  #endif
  #ifndef RESOURCEDESTDIR
#line 16 "commandline.cpp"
  extern string rsrcdir;
  #endif
  #if CAP_COMMANDLINE
#line 20 "commandline.cpp"
  extern const char *scorefile;
  namespace arg {
#line 23 "commandline.cpp"
    eLand readland(const string& ss);
#line 35 "commandline.cpp"
    eItem readItem(const string& ss);
#line 43 "commandline.cpp"
    eMonster readMonster(const string& ss);
    }
#line 53 "commandline.cpp"
  void initializeCLI();
  namespace arg {
#line 73 "commandline.cpp"
    extern int curphase;
#line 75 "commandline.cpp"
    extern vector<string> argument;
#line 76 "commandline.cpp"
    extern int pos;
#line 78 "commandline.cpp"
    void lshift();
#line 79 "commandline.cpp"
    void unshift();
#line 81 "commandline.cpp"
    void shift();
#line 85 "commandline.cpp"
    bool nomore();
#line 87 "commandline.cpp"
    const string& args();
#line 88 "commandline.cpp"
    const char* argcs();
#line 89 "commandline.cpp"
    int argi();
#line 91 "commandline.cpp"
    int shift_argi();
#line 92 "commandline.cpp"
    const string& shift_args();
#line 94 "commandline.cpp"
    unsigned arghex();
#line 95 "commandline.cpp"
    ld argf();
#line 104 "commandline.cpp"
    bool argis(const string& s);
#line 106 "commandline.cpp"
    void shift_arg_formula(ld& x, const reaction_t& r IS(reaction_t()));
#line 115 "commandline.cpp"
    
    // an useful macro
    #define PHASE(x) { if(arg::curphase > x) arg::phaseerror(x); else if(arg::curphase < x) return 2; }
    #define PHASEFROM(x) { if(arg::curphase < x) return 2; }
    
    #define TOGGLE(x, param, act) \
    else if(args()[0] == '-' && args()[1] == x && !args()[2]) { PHASEFROM(2); showstartmenu = false; act; } \
    else if(args()[0] == '-' && args()[1] == x && args()[2] == '1') { PHASEFROM(2); showstartmenu = false; if(!param) act; } \
    else if(args()[0] == '-' && args()[1] == x && args()[2] == '0') { PHASEFROM(2); showstartmenu = false; if(param) act; }
    
#line 127 "commandline.cpp"
    void cheat();
#line 129 "commandline.cpp"
    void init(int argc, char **argv);
#line 131 "commandline.cpp"
    void phaseerror(int x);
#line 138 "commandline.cpp"
    void launch_dialog(const reaction_t& r IS(reaction_t()));
#line 147 "commandline.cpp"
    extern int readCommon();
#line 148 "commandline.cpp"
    extern int readLocal();  
#line 149 "commandline.cpp"
    extern void read(int phase);
    }
#line 379 "commandline.cpp"
  extern purehookset hooks_config;
#line 381 "commandline.cpp"
  extern hookset<int()> hooks_args;
#line 383 "commandline.cpp"
  extern map<string, pair<int, reaction_t>> *added_commands;
  namespace arg {
#line 401 "commandline.cpp"
    int add_at(const string& s, int at, const reaction_t& r);
#line 408 "commandline.cpp"
    int add1(const string& s, const reaction_t& r);
#line 409 "commandline.cpp"
    int add2(const string& s, const reaction_t& r);
#line 410 "commandline.cpp"
    int add3(const string& s, const reaction_t& r);
    }
  #endif
  #if !CAP_COMMANDLINE
  namespace arg {
#line 432 "commandline.cpp"
    int add1(const string& s, const reaction_t& r);
#line 433 "commandline.cpp"
    int add2(const string& s, const reaction_t& r);
#line 434 "commandline.cpp"
    int add3(const string& s, const reaction_t& r);
    }
  #endif

  // implemented in: complex2.cpp

  #if CAP_COMPLEX2
  namespace brownian {
#line 18 "complex2.cpp"
    const int level = 5;
#line 82 "complex2.cpp"
    void dissolve_brownian(cell *c, int x);
#line 94 "complex2.cpp"
    void dissolve(cell *c, int x);
#line 109 "complex2.cpp"
    void init(cell *c);
#line 115 "complex2.cpp"
    void init_further(cell *c);
#line 149 "complex2.cpp"
    void apply_futures(cell *c);
#line 160 "complex2.cpp"
    void build(cell *c, int d);
#line 180 "complex2.cpp"
    extern colortable colors;
#line 182 "complex2.cpp"
    color_t get_color(int y);
#line 190 "complex2.cpp"
    color_t& get_color_edit(int y);
    }
  namespace westwall {
#line 210 "complex2.cpp"
    void switchTreasure(cell *c);
#line 219 "complex2.cpp"
    int coastvalEdge1(cell *c);
#line 260 "complex2.cpp"
    void move();
    }
  namespace variant {
#line 281 "complex2.cpp"
    struct feature {
    color_t color_change;
    int rate_change;
    eMonster wanderer;
    void (*build)(cell*);
    };
    
    extern array<feature, 21> features;
    }
  namespace camelot {
#line 334 "complex2.cpp"
    extern int knighted;
#line 337 "complex2.cpp"
    extern int anthraxBonus;
#line 360 "complex2.cpp"
    string knight_name(cell *c);
#line 365 "complex2.cpp"
    void move_knight(cell *c1, cell *c2);
#line 373 "complex2.cpp"
    void roundTableMessage(cell *c2);
#line 400 "complex2.cpp"
    void knightFlavorMessage(cell *c2);
    }
  namespace mine {
#line 518 "complex2.cpp"
    extern int victory_time;
#line 520 "complex2.cpp"
    void count_status();
#line 532 "complex2.cpp"
    bool in_minesweeper();
#line 536 "complex2.cpp"
    bool uncoverMines(cell *c, int lev, int dist, bool just_checking);
#line 577 "complex2.cpp"
    bool mightBeMine(cell *c);
#line 581 "complex2.cpp"
    extern hookset<bool(cell*)> hooks_mark;
#line 583 "complex2.cpp"
    void performMarkCommand(cell *c);
#line 602 "complex2.cpp"
    bool marked_mine(cell *c);
#line 609 "complex2.cpp"
    bool marked_safe(cell *c);
#line 616 "complex2.cpp"
    bool safe();
#line 620 "complex2.cpp"
    void uncover_full(cell *c2);
#line 638 "complex2.cpp"
    void auto_teleport_charges();
    }
  namespace terracotta {
#line 649 "complex2.cpp"
    // predictable or not
    static constexpr bool randterra = false;
#line 653 "complex2.cpp"
    void check(cell *c);
#line 674 "complex2.cpp"
    void check_around(cell *c);
#line 679 "complex2.cpp"
    void check();
    }
  namespace ambush {
#line 694 "complex2.cpp"
    void mark(cell *c, manual_celllister& cl);
#line 701 "complex2.cpp"
    extern int distance;
#line 702 "complex2.cpp"
    extern bool ambushed;
#line 704 "complex2.cpp"
    void check_state();
#line 741 "complex2.cpp"
    extern int fixed_size;
#line 743 "complex2.cpp"
    int size(cell *c, eItem what);
#line 831 "complex2.cpp"
    void ambush(cell *c, int dogs);
    }
  namespace dice {
#line 966 "complex2.cpp"
    extern vector<struct die_structure*> die_list;
    
    struct die_data {
    struct die_structure *which;
    int val; /* the current face value */
    int dir; /* which direction is the first side (which->sides[val][0]) of the current face */
    bool mirrored;
    int happy();
    };
#line 977 "complex2.cpp"
    int shape_faces(die_structure *w);
#line 979 "complex2.cpp"
    string die_name(die_structure *w);
#line 987 "complex2.cpp"
    die_structure *get_by_id(unsigned i);
#line 988 "complex2.cpp"
    int get_die_id(die_structure *ds);
#line 995 "complex2.cpp"
    extern map<cell*, die_data> data;
#line 997 "complex2.cpp"
    void generate_specific(cell *c, die_structure *ds, int min_hardness, int max_hardness);
#line 1016 "complex2.cpp"
    int die_possible(cell *c);
#line 1025 "complex2.cpp"
    bool can_roll(int sides, int cur, movei mi);
#line 1031 "complex2.cpp"
    bool can_roll(movei mi);
#line 1037 "complex2.cpp"
    bool generate_random(cell *c);
#line 1047 "complex2.cpp"
    void generate_full(cell *c, int hard);
#line 1115 "complex2.cpp"
    die_data roll_effect(movei mi, die_data dd);
#line 1156 "complex2.cpp"
    bool on(cell *c);
#line 1160 "complex2.cpp"
    string describe(cell *c);
#line 1166 "complex2.cpp"
    void roll(movei mi);
#line 1176 "complex2.cpp"
    void draw_die(cell *c, const shiftmatrix& V, ld scale, color_t color);
#line 1424 "complex2.cpp"
    bool swap_forbidden(cell *ca, cell *cb);
#line 1429 "complex2.cpp"
    void chaos_swap(cellwalker wa, cellwalker wb);
    }
  #endif

  // implemented in: config.cpp

#line 12 "config.cpp"
  enum eCentering { face, edge, vertex };
#line 15 "config.cpp"
  extern eCentering centering;
#line 17 "config.cpp"
  extern function<bool()> auto_restrict;
#line 19 "config.cpp"
  extern void add_to_changed(struct setting *f);
#line 21 "config.cpp"
  bool return_false();
#line 24 "config.cpp"
  struct supersaver {
  string name;
  virtual string save() = 0;
  virtual void load(const string& s) = 0;
  virtual bool dosave() = 0;
  virtual void reset() = 0;
  virtual bool affects(void* v) { return false; }
  virtual void set_default() = 0;
  virtual ~supersaver() = default;
  };
  
  typedef vector<shared_ptr<supersaver>> saverlist;
  
  extern saverlist savers;
  
  struct setting {
  function<bool()> restrict;
  string parameter_name;
  string config_name;
  string menu_item_name;
  string help_text;
  reaction_t reaction;
  char default_key;
  cld last_value;
  bool is_editable;
  virtual bool available() { if(restrict) return restrict(); return true; }
  virtual bool affects(void *v) { return false; }
  virtual void add_as_saver() {}
  void show_edit_option() { show_edit_option(default_key); }
  virtual void show_edit_option(char key) {
  println(hlog, "default called!"); }
  virtual string search_key() { 
  return parameter_name + "|" + config_name + "|" + menu_item_name + "|" + help_text;
  }
  virtual cld get_cld() = 0;
  explicit setting() { restrict = auto_restrict; is_editable = false; }
  virtual void check_change() {
  cld val = get_cld();
  if(val != last_value) {
  last_value = val;
  add_to_changed(this);
  }
  }
  reaction_t sets;
  setting *set_sets(const reaction_t& s) { sets = s; return this; }
  setting *set_extra(const reaction_t& r);
  setting *set_reaction(const reaction_t& r);
  virtual ~setting() = default;
  virtual void load_from(const string& s) {
  println(hlog, "cannot load this parameter");
  exit(1);
  }
  };
#line 87 "config.cpp"
  extern map<string, std::unique_ptr<setting>> params;
#line 89 "config.cpp"
  extern void show_edit_option_enum(char* value, const string& name, const vector<pair<string, string>>& options, char key, setting *s);
#line 92 "config.cpp"
  struct list_setting : setting {
  virtual int get_value() = 0;
  virtual void set_value(int i) = 0;
  vector<pair<string, string> > options;
  list_setting* editable(const vector<pair<string, string> >& o, string menu_item_name, char key) {
  is_editable = true;
  options = o;
  this->menu_item_name = menu_item_name;
  default_key = key;
  return this;
  }
  void show_edit_option(char key) override;
  };
  
  template<class T> struct enum_setting : list_setting {
  T *value;
  T dft;
  int get_value() override { return (int) *value; }
  void set_value(int i) override { *value = (T) i; }
  bool affects(void* v) override { return v == value; }
  void add_as_saver() override;
  cld get_cld() override { return get_value(); }
  void load_from(const string& s) override {
  *value = (T) parseint(s);
  }
  };
  
  struct float_setting : public setting {
  ld *value;
  ld dft;
  ld min_value, max_value, step;
  string unit;
  float_setting *editable(ld min_value, ld max_value, ld step, string menu_item_name, string help_text, char key) {
  is_editable = true;
  this->min_value = min_value;
  this->max_value = max_value;
  this->menu_item_name = menu_item_name;
  this->help_text = help_text;
  this->step = step;
  default_key = key;
  return this;
  }
  function<void(float_setting*)> modify_me;
  float_setting *modif(const function<void(float_setting*)>& r) { modify_me = r; return this; }
  void add_as_saver() override;
  bool affects(void *v) override { return v == value; }
  void show_edit_option(char key) override;
  cld get_cld() override { return *value; }
  void load_from(const string& s) override;
  };
  
  struct int_setting : public setting {
  int *value;
  int dft;
  int min_value, max_value;
  ld step;
  void add_as_saver() override;
  function<void(int_setting*)> modify_me;
  int_setting *modif(const function<void(int_setting*)>& r) { modify_me = r; return this; }
  bool affects(void *v) override { return v == value; }
  void show_edit_option(char key) override;
  cld get_cld() override { return *value; }
  int_setting *editable(int min_value, int max_value, ld step, string menu_item_name, string help_text, char key) {
  this->min_value = min_value;
  this->max_value = max_value;
  this->menu_item_name = menu_item_name;
  this->help_text = help_text;
  this->step = step;
  default_key = key;
  return this;
  }
  
  void load_from(const string& s) override {
  *value = parseint(s);
  }
  };
  
  struct bool_setting : public setting {
  bool *value;
  bool dft;
  void add_as_saver() override;
  reaction_t switcher;
  bool_setting* editable(string cap, char key ) {
  is_editable = true;
  menu_item_name = cap; default_key = key; return this; 
  } 
  bool affects(void *v) override { return v == value; }
  void show_edit_option(char key) override;
  cld get_cld() override { return *value ? 1 : 0; }
  void load_from(const string& s) override {
  *value = parseint(s);
  }
  };
  
  struct custom_setting : public setting {  
  function<void(char)> custom_viewer;
  function<cld()> custom_value;
  function<bool(void*)> custom_affect;
  void show_edit_option(char key) override { custom_viewer(key); }
  cld get_cld() override { return custom_value(); }
  bool affects(void *v) override { return custom_affect(v); }
  };
  
  #if CAP_CONFIG
  
  template<class T> struct dsaver : supersaver {
  T& val;
  T dft;
  bool dosave() override { return val != dft; }
  void reset() override { val = dft; }
  explicit dsaver(T& val) : val(val) { }
  bool affects(void* v) override { return v == &val; }
  void set_default() override { dft = val; }
  };
  
  template<class T> struct saver : dsaver<T> {};
  
  template<class T, class U, class V> void addsaver(T& i, U name, V dft) {
  auto s = make_shared<saver<T>> (i);
  s->dft = dft;
  s->name = name;
  savers.push_back(s);
  }
  
  template<class T> void addsaver(T& i, string name) {
  addsaver(i, name, i);
  }
  
  template<class T> void removesaver(T& val) {
  for(int i=0; i<isize(savers); i++)
  if(savers[i]->affects(&val))
  savers.erase(savers.begin() + i);
  }
  
  template<class T> void set_saver_default(T& val) {
  for(auto sav: savers)
  if(sav->affects(&val))
  sav->set_default();
  }
  
  template<class T> struct saverenum : supersaver {
  T& val;
  T dft;
  explicit saverenum(T& v) : val(v) { }
  bool dosave() override { return val != dft; }
  void reset() override { val = dft; }
  string save() override { return its(int(val)); }
  void load(const string& s) override { val = (T) atoi(s.c_str()); }
  bool affects(void* v) override { return v == &val; }
  void set_default() override { dft = val; }
  };
  
  template<class T, class U> void addsaverenum(T& i, U name, T dft) {
  auto s = make_shared<saverenum<T>> (i);
  s->dft = dft;
  s->name = name;
  savers.push_back(s);
  }
  
  template<class T, class U> void addsaverenum(T& i, U name) {
  addsaverenum(i, name, i);
  }
  
  template<> struct saver<int> : dsaver<int> {
  explicit saver(int& val) : dsaver<int>(val) { }
  string save() override { return its(val); }
  void load(const string& s) override { val = atoi(s.c_str()); }
  };
  
  template<> struct saver<char> : dsaver<char> {
  explicit saver(char& val) : dsaver<char>(val) { }
  string save() override { return its(val); }
  void load(const string& s) override { val = atoi(s.c_str()); }
  };
  
  template<> struct saver<bool> : dsaver<bool> {
  explicit saver(bool& val) : dsaver<bool>(val) { }
  string save() override { return val ? "yes" : "no"; }
  void load(const string& s) override { val = isize(s) && s[0] == 'y'; }
  };
  
  template<> struct saver<unsigned> : dsaver<unsigned> {
  explicit saver(unsigned& val) : dsaver<unsigned>(val) { }
  string save() override { return itsh(val); }
  void load(const string& s) override { val = (unsigned) strtoll(s.c_str(), NULL, 16); }
  };
  
  template<> struct saver<string> : dsaver<string> {
  explicit saver(string& val) : dsaver<string>(val) { }
  string save() override { return val; }
  void load(const string& s) override { val = s; }
  };
  
  template<> struct saver<ld> : dsaver<ld> {
  explicit saver(ld& val) : dsaver<ld>(val) { }
  string save() override { return fts(val, 10); }
  void load(const string& s) override {
  if(s == "0.0000000000e+000") ; // ignore!
  else val = atof(s.c_str()); 
  }
  };
  #endif
#line 355 "config.cpp"
  float_setting *param_f(ld& val, const string p, const string s, ld dft);
#line 379 "config.cpp"
  string param_esc(string s);
#line 389 "config.cpp"
  int_setting *param_i(int& val, const string s, int dft);
#line 412 "config.cpp"
  int_setting *param_i(int& val, const string s);
#line 414 "config.cpp"
  bool_setting *param_b(bool& val, const string s, bool dft);
#line 430 "config.cpp"
  bool_setting *param_b(bool& val, const string s);
#line 433 "config.cpp"
  template<class T> void enum_setting<T>::add_as_saver() { 
  #if CAP_CONFIG
  addsaverenum(*value, config_name, dft);
  #endif
  }
  
  template<class T> enum_setting<T> *param_enum(T& val, const string p, const string s, T dft) {
  unique_ptr<enum_setting<T>> u ( new enum_setting<T> );
  u->parameter_name = p;
  u->config_name = s;
  u->menu_item_name = s;
  u->value = &val;
  u->dft = dft;
  val = dft;
  u->last_value = u->get_cld();
  u->add_as_saver();
  auto f = &*u;
  params[p] = std::move(u);
  return f;
  }
#line 455 "config.cpp"
  float_setting* param_f(ld& val, const string s);
#line 459 "config.cpp"
  float_setting* param_f(ld& val, const string p, const string s);
#line 463 "config.cpp"
  float_setting* param_f(ld& val, const string s, ld dft);
#line 468 "config.cpp"
  template<class T>
  custom_setting* param_custom(T& val, const string& s, function<void(char)> menuitem, char key) {
  unique_ptr<custom_setting> u ( new custom_setting );
  u->parameter_name = param_esc(s);
  u->config_name = s;
  u->menu_item_name = s;
  u->last_value = (int) val;
  u->custom_viewer = menuitem;
  u->custom_value = [&val] () { return (int) val; };
  u->custom_affect = [&val] (void *v) { return &val == v; };
  u->default_key = key;
  u->is_editable = true;
  auto f = &*u;
  params[s] = std::move(u);
  return f;  
  }
#line 486 "config.cpp"
  extern ld bounded_mine_percentage;
#line 487 "config.cpp"
  extern int bounded_mine_quantity, bounded_mine_max;
#line 489 "config.cpp"
  extern const char *conffile;
#line 492 "config.cpp"
  extern array<ld, gGUARD+64> sightranges;
#line 494 "config.cpp"
  extern videopar vid;
#line 499 "config.cpp"
  void android_settings_changed();
#line 507 "config.cpp"
  charstyle& getcs(int id IS(multi::cpid));
#line 520 "config.cpp"
  void hread(hstream& hs, charstyle& cs);
#line 538 "config.cpp"
  void hwrite(hstream& hs, const charstyle& cs);
#line 545 "config.cpp"
  string csnameid(int id);
#line 556 "config.cpp"
  string csname(charstyle& cs);
#line 560 "config.cpp"
  int playergender();
#line 563 "config.cpp"
  int princessgender();
#line 569 "config.cpp"
  extern int default_language;
#line 571 "config.cpp"
  int lang();
#line 577 "config.cpp"
  extern bool autojoy;
#line 593 "config.cpp"
  void addsaver(charstyle& cs, string s);
#line 614 "config.cpp"
  void initcs(charstyle &cs);
#line 626 "config.cpp"
  void savecolortable(colortable& ct, string name);
#line 631 "config.cpp"
  extern purehookset hooks_configfile;
#line 633 "config.cpp"
  void initConfig();
#line 1073 "config.cpp"
  bool inSpecialMode();
#line 1084 "config.cpp"
  bool have_current_settings();
#line 1105 "config.cpp"
  bool have_current_graph_settings();
#line 1116 "config.cpp"
  void reset_graph_settings();
#line 1127 "config.cpp"
  void resetModes(char leave IS('c'));
  #if CAP_CONFIG  
#line 1165 "config.cpp"
  void resetConfig();
  #endif
  #if CAP_CONFIG
#line 1177 "config.cpp"
  void saveConfig();
#line 1217 "config.cpp"
  void parseline(const string& str);
#line 1232 "config.cpp"
  void loadNewConfig(FILE *f);
#line 1247 "config.cpp"
  void loadConfig();
  #endif
#line 1276 "config.cpp"
  void add_cells_drawn(char c IS('C'));
#line 1307 "config.cpp"
  void menuitem_sightrange_bonus(char c);
#line 1320 "config.cpp"
  void edit_sightrange();
#line 1401 "config.cpp"
  void menuitem_sightrange_style(char c IS('c'));
#line 1428 "config.cpp"
  void menuitem_sightrange(char c IS('c'));
#line 1443 "config.cpp"
  void sets_sfx_volume();
#line 1456 "config.cpp"
  void sets_music_volume();
#line 1477 "config.cpp"
  void showSpecialEffects();
#line 1493 "config.cpp"
  void show_vector_settings();
#line 1542 "config.cpp"
  void showGraphConfig();
#line 1690 "config.cpp"
  void edit_whatever(char type, int index);
#line 1711 "config.cpp"
  void configureOther();
#line 1749 "config.cpp"
  void configureInterface();
  #if CAP_SDLJOY
#line 1803 "config.cpp"
  void showJoyConfig();
  #endif
#line 1854 "config.cpp"
  void projectionDialog();
#line 1886 "config.cpp"
  void menuitem_projection_distance(char key);
#line 1891 "config.cpp"
  void explain_detail();
#line 1900 "config.cpp"
  ld max_fov_angle();
#line 1906 "config.cpp"
  void add_edit_fov(char key IS('f'), bool pop IS(false));
#line 1973 "config.cpp"
  void showStereo();
#line 2044 "config.cpp"
  void add_edit_wall_quality(char c);
#line 2070 "config.cpp"
  void edit_levellines(char c);
#line 2092 "config.cpp"
  void show3D();
#line 2258 "config.cpp"
  extern int config3;
#line 2400 "config.cpp"
  void switchcolor(unsigned int& c, unsigned int* cs);
#line 2408 "config.cpp"
  void showCustomizeChar();
#line 2480 "config.cpp"
  void refresh_canvas();
#line 2494 "config.cpp"
  void edit_color_table(colortable& ct, const reaction_t& r IS(reaction_t()), bool has_bit IS(false));
#line 2518 "config.cpp"
  void show_color_dialog();
  #if CAP_CONFIG
#line 2632 "config.cpp"
  void resetConfigMenu();
  #endif
  #if CAP_TRANS
#line 2664 "config.cpp"
  void selectLanguageScreen();
  #endif
#line 2722 "config.cpp"
  void configureMouse();
#line 2766 "config.cpp"
  void add_to_changed(setting *f);
#line 2777 "config.cpp"
  setting *find_edit(void *val);
#line 2786 "config.cpp"
  void add_edit_ptr(void *val);
#line 2797 "config.cpp"
  template<class T> void add_edit(T& val) {
  add_edit_ptr(&val);
  }
#line 2802 "config.cpp"
  void find_setting();
#line 2836 "config.cpp"
  void edit_all_settings();
#line 2878 "config.cpp"
  void showSettings();
  #if CAP_COMMANDLINE
#line 2932 "config.cpp"
  int read_color_args();
#line 2975 "config.cpp"
  int read_config_args();
#line 3220 "config.cpp"
  int read_param_args();
#line 3237 "config.cpp"
  int read_gamemode_args();
  #endif

  // implemented in: control.cpp

#line 11 "control.cpp"
  extern int frames;
#line 12 "control.cpp"
  extern bool outoffocus;
#line 14 "control.cpp"
  extern int mousex, mousey;
#line 15 "control.cpp"
  extern shiftpoint mouseh, mouseoh;
#line 17 "control.cpp"
  extern bool pandora_leftclick, pandora_rightclick;
#line 19 "control.cpp"
  extern bool lshiftclick, rshiftclick, lctrlclick, rctrlclick, anyshiftclick, anyctrlclick, wheelclick;
#line 21 "control.cpp"
  extern bool targetclick, hiliteclick, forcetarget, numlock_on;
#line 22 "control.cpp"
  extern bool gtouched;
#line 24 "control.cpp"
  extern bool holdmouse;
#line 26 "control.cpp"
  extern int getcstat, lgetcstat;
#line 27 "control.cpp"
  extern ld getcshift;
#line 28 "control.cpp"
  extern bool inslider;
#line 29 "control.cpp"
  extern int slider_x;
#line 31 "control.cpp"
  extern function <void(int sym, int uni)> keyhandler;
#line 32 "control.cpp"
  extern function <bool(SDL_Event &ev)> joyhandler;
#line 35 "control.cpp"
  // what part of the compass does 'skip turn'
  static const auto SKIPFAC = .4;
#line 40 "control.cpp"
  extern bool mousing;
#line 44 "control.cpp"
  extern int which_pointer;
#line 47 "control.cpp"
  extern bool mousepressed;
#line 48 "control.cpp"
  extern bool mousemoved;
#line 49 "control.cpp"
  extern bool actonrelease;
#line 51 "control.cpp"
  extern bool mousepan, oldmousepan;
  #if CAP_MOUSEGRAB
#line 53 "control.cpp"
  extern ld mouseaim_x, mouseaim_y;
  #endif
#line 55 "control.cpp"
  extern ld mouseaim_sensitivity;
#line 57 "control.cpp"
  extern int timetowait;
  #if CAP_SDLJOY
#line 60 "control.cpp"
  extern int joyx, joyy, panjoyx, panjoyy; 
#line 61 "control.cpp"
  extern movedir joydir;
  #endif
#line 64 "control.cpp"
  extern movedir mousedest;
#line 65 "control.cpp"
  extern ld shiftmul;
#line 67 "control.cpp"
  extern cell *mouseover, *mouseover2, *lmouseover, *lmouseover_distant;
#line 68 "control.cpp"
  extern ld modist, modist2;
#line 70 "control.cpp"
  extern int lastt;
#line 72 "control.cpp"
  bool mouseout();
#line 77 "control.cpp"
  bool mouseout2();
#line 82 "control.cpp"
  movedir vectodir(hyperpoint P);
#line 119 "control.cpp"
  void remission();
#line 123 "control.cpp"
  hyperpoint move_destination_vec(int d);
#line 131 "control.cpp"
  void movepckeydir(int d);
#line 142 "control.cpp"
  void movevrdir(hyperpoint vec);
#line 147 "control.cpp"
  void calcMousedest();
#line 180 "control.cpp"
  void mousemovement();
  #if CAP_SDLJOY
#line 211 "control.cpp"
  extern SDL_Joystick* sticks[8];
#line 212 "control.cpp"
  extern int numsticks;
#line 214 "control.cpp"
  void initJoysticks();
#line 237 "control.cpp"
  void closeJoysticks();
#line 246 "control.cpp"
  extern bool joy_ignore_next;
#line 248 "control.cpp"
  void checkjoy();
#line 285 "control.cpp"
  void checkpanjoy(double t);
  #endif
#line 302 "control.cpp"
  extern bool quitmainloop;
#line 304 "control.cpp"
  bool doexiton(int sym, int uni);
#line 321 "control.cpp"
  extern bool didsomething;
#line 325 "control.cpp"
  extern bool smooth_scrolling;
#line 334 "control.cpp"
  void zoom_or_fov(ld t);
#line 346 "control.cpp"
  extern ld camera_speed;
#line 347 "control.cpp"
  extern ld camera_rot_speed;
#line 349 "control.cpp"
  void full_forward_camera(ld t);
#line 359 "control.cpp"
  void full_strafe_camera(ld t);
#line 367 "control.cpp"
  void full_rotate_camera(int dir, ld val);
#line 412 "control.cpp"
  void full_rotate_view(ld h, ld v);
#line 423 "control.cpp"
  void handlePanning(int sym, int uni);
#line 482 "control.cpp"
  extern purehookset hooks_fixticks;
#line 484 "control.cpp"
  extern array<int, 8> keys_vi;
#line 485 "control.cpp"
  extern array<int, 8> keys_wasd;
#line 486 "control.cpp"
  extern array<int, 8> keys_numpad;
#line 488 "control.cpp"
  void handleKeyNormal(int sym, int uni);
#line 615 "control.cpp"
  extern bool need_mouseh;
#line 617 "control.cpp"
  void fix_mouseh();
#line 642 "control.cpp"
  void handlekey(int sym, int uni);
#line 649 "control.cpp"
  extern void resize_screen_to(int x, int y);
  #if !CAP_SDL
#line 652 "control.cpp"
  void mainloopiter();
  #endif
  #if CAP_SDL
#line 661 "control.cpp"
  void resize_screen_to(int x, int y);
#line 679 "control.cpp"
  extern int sc_ticks;
#line 681 "control.cpp"
  bool mouseaiming(bool shmupon);
#line 686 "control.cpp"
  void mainloopiter();
#line 940 "control.cpp"
  extern bool need_refresh;
#line 942 "control.cpp"
  void handle_event(SDL_Event& ev);
  #endif
#line 1220 "control.cpp"
  void mainloop();
  #if ISMOBILE
#line 1232 "control.cpp"
  void displayabutton(int px, int py, string s, int col);
  #endif
#line 1254 "control.cpp"
  bool interpret_as_direction(int sym, int uni);
#line 1262 "control.cpp"
  int get_direction_key(int sym, int uni);
#line 1279 "control.cpp"
  bool gmodekeys(int sym, int uni);
#line 1318 "control.cpp"
  bool haveMobileCompass();
#line 1328 "control.cpp"
  bool handleCompass();
  #if CAP_ORIENTATION
#line 1353 "control.cpp"
  extern transmatrix getOrientation();
  #endif
  namespace ors {
#line 1359 "control.cpp"
    extern int mode;
#line 1366 "control.cpp"
    extern string choices[3];
    #if CAP_ORIENTATION
#line 1369 "control.cpp"
    transmatrix getOrientation();
    #endif
#line 1374 "control.cpp"
    void reset();
#line 1387 "control.cpp"
    void show();
#line 1470 "control.cpp"
    void unrotate(transmatrix& T);
#line 1474 "control.cpp"
    void rerotate(transmatrix& T);
#line 1480 "control.cpp"
    void check_orientation();
    }

  // implemented in: crystal.cpp

  namespace crystal {
#line 14 "crystal.cpp"
    static const int MAXDIM = 7;
    static const int MAX_EDGE_CRYSTAL = 2 * MAXDIM;
    
    struct coord : public array<int, MAXDIM> {
    coord operator + (coord b) { for(int i=0; i<MAXDIM; i++) b[i] += self[i]; return b; }  
    coord operator - (coord b) { for(int i=0; i<MAXDIM; i++) b[i] = self[i] - b[i]; return b; }  
    coord operator * (int x) { coord res; for(int i=0; i<MAXDIM; i++) res[i] = x * self[i]; return res; } 
    };
    
    static const coord c0 = {};
    
    struct ldcoord : public array<ld, MAXDIM> {
    friend ldcoord operator + (ldcoord a, ldcoord b) { ldcoord r; for(int i=0; i<MAXDIM; i++) r[i] = a[i] + b[i]; return r; }
    friend ldcoord operator - (ldcoord a, ldcoord b) { ldcoord r; for(int i=0; i<MAXDIM; i++) r[i] = a[i] - b[i]; return r; }
    friend ldcoord operator * (ldcoord a, ld v) { ldcoord r; for(int i=0; i<MAXDIM; i++) r[i] = a[i] * v; return r; }
    friend ldcoord operator / (ldcoord a, ld v) { ldcoord r; for(int i=0; i<MAXDIM; i++) r[i] = a[i] / v; return r; }
    friend ld operator | (ldcoord a, ldcoord b) { ld r=0; for(int i=0; i<MAXDIM; i++) r += a[i] * b[i]; return r; }
    };
    
    static const ldcoord ldc0 = {};
    #if CAP_CRYSTAL
#line 47 "crystal.cpp"
    bool pure();
#line 51 "crystal.cpp"
    extern bool view_coordinates;
#line 54 "crystal.cpp"
    extern bool used_compass_inside;
#line 56 "crystal.cpp"
    ldcoord told(coord c);
#line 60 "crystal.cpp"
    extern ld compass_probability;
#line 465 "crystal.cpp"
    extern int crystal_period;
#line 697 "crystal.cpp"
    heptagon *get_heptagon_at(coord c);
#line 698 "crystal.cpp"
    coord get_coord(heptagon *h);
#line 699 "crystal.cpp"
    ldcoord get_ldcoord(cell *c);
#line 701 "crystal.cpp"
    int get_dim();
    #if MAXMDIM >= 4
#line 704 "crystal.cpp"
    transmatrix get_adj(heptagon *h, int d);
    #endif
#line 717 "crystal.cpp"
    color_t colorize(cell *c, char whichCanvas);
#line 798 "crystal.cpp"
    extern colortable coordcolors;
#line 800 "crystal.cpp"
    ld compass_angle();
#line 805 "crystal.cpp"
    bool crystal_cell(cell *c, shiftmatrix V);
#line 836 "crystal.cpp"
    vector<cell*> build_shortest_path(cell *c1, cell *c2);
#line 889 "crystal.cpp"
    int precise_distance(cell *c1, cell *c2);
#line 953 "crystal.cpp"
    ld space_distance(cell *c1, cell *c2);
#line 960 "crystal.cpp"
    ld space_distance_camelot(cell *c);
#line 965 "crystal.cpp"
    int dist_relative(cell *c);
#line 1088 "crystal.cpp"
    int dist_alt(cell *c);
#line 1110 "crystal.cpp"
    void init_rotation();
#line 1131 "crystal.cpp"
    void random_rotation();
#line 1149 "crystal.cpp"
    void next_home_orientation();
#line 1154 "crystal.cpp"
    void flip_z();
    #if CAP_RUG
#line 1172 "crystal.cpp"
    void switch_z_coordinate();
#line 1181 "crystal.cpp"
    void apply_rotation(const transmatrix t);
#line 1191 "crystal.cpp"
    void centerrug(ld aspd);
    #if MAXMDIM >= 4
#line 1237 "crystal.cpp"
    void build_rugdata();
    #endif
    #endif
#line 1298 "crystal.cpp"
    void set_land(cell *c);
#line 1312 "crystal.cpp"
    void set_crystal(int sides);
#line 1354 "crystal.cpp"
    void set_crystal_period_flags();
#line 1414 "crystal.cpp"
    hrmap *new_map();
#line 1418 "crystal.cpp"
    string compass_help();
#line 1443 "crystal.cpp"
    void crystal_knight_help();
#line 1466 "crystal.cpp"
    void show();
#line 1581 "crystal.cpp"
    string get_table_volume();
#line 1629 "crystal.cpp"
    string get_table_boundary();
#line 1639 "crystal.cpp"
    void may_place_compass(cell *c);
    #endif
    #if CAP_CRYSTAL && MAXMDIM >= 4
#line 1801 "crystal.cpp"
    void add_crystal_transform(char c);
    #endif
    }

  // implemented in: debug.cpp

#line 11 "debug.cpp"
  extern int steplimit;
#line 12 "debug.cpp"
  extern int cstep;
#line 13 "debug.cpp"
  extern bool buggyGeneration;
#line 14 "debug.cpp"
  extern bool debug_cellnames;
#line 16 "debug.cpp"
  extern vector<cell*> buggycells;
#line 19 "debug.cpp"
  template<class... T>
  void limitgen(T... args) {
  if(steplimit) {
  cstep++;
  printf("%6d ", cstep);
  printf(args...);
  if(cstep == steplimit) buggyGeneration = true;
  }
  }
#line 30 "debug.cpp"
  cell *pathTowards(cell *pf, cell *pt);
#line 46 "debug.cpp"
  void describeCell(cell *c);
#line 95 "debug.cpp"
  extern eLand cheatdest;
#line 97 "debug.cpp"
  void cheatMoveTo(eLand l);
#line 104 "debug.cpp"
  bool applyCheat(char u, cell *c IS(NULL));
#line 323 "debug.cpp"
  extern vector<pair<cellwalker,int> > drawbugs;
#line 512 "debug.cpp"
  void push_debug_screen();
#line 518 "debug.cpp"
  void showCheatMenu();
#line 561 "debug.cpp"
  void viewall();
#line 625 "debug.cpp"
  void modalDebug(cell *c);
#line 648 "debug.cpp"
  void raiseBuggyGeneration(cell *c, const char *s);
#line 931 "debug.cpp"
  extern bool ldebug;
#line 933 "debug.cpp"
  void breakhere();

  // implemented in: dialogs.cpp

#line 11 "dialogs.cpp"
  extern const char* COLORBAR;
  namespace dialog {
#line 16 "dialogs.cpp"
    #define IFM(x) (mousing?"":x)
    
    static const int DONT_SHOW = 16;
    
    enum tDialogItem {diTitle, diItem, diBreak, diHelp, diInfo, diIntSlider, diSlider, diBigItem, diKeyboard};
    
    struct item {
    tDialogItem type;
    string body;
    string value;
    int key;
    color_t color, colorv, colork, colors, colorc;
    int scale;
    double param;
    int p1, p2, p3;
    int position;
    };
    
    struct scaler {
    ld (*direct) (ld);
    ld (*inverse) (ld);
    bool positive;
    };
    
    static inline ld identity_f(ld x) { return x; }
    
    const static scaler identity = {identity_f, identity_f, false};
    const static scaler logarithmic = {log, exp, true};
    const static scaler asinhic = {asinh, sinh, false};
    const static scaler asinhic100 = {[] (ld x) { return asinh(x*100); }, [] (ld x) { return sinh(x)/100; }, false};
    
    struct numberEditor {
    ld *editwhat;
    string s;
    ld vmin, vmax, step, dft;
    string title, help;
    scaler sc;
    int *intval; ld intbuf;
    bool animatable;
    };
    
    extern numberEditor ne;
    
    inline void scaleLog() { ne.sc = logarithmic; }
    inline void scaleSinh() { ne.sc = asinhic; }
    inline void scaleSinh100() { ne.sc = asinhic100; }  
#line 64 "dialogs.cpp"
    extern color_t dialogcolor;
#line 66 "dialogs.cpp"
    void addBack();
#line 73 "dialogs.cpp"
    void addHelp();
    namespace zoom {
#line 97 "dialogs.cpp"
      bool displayfr(int x, int y, int b, int size, const string &s, color_t color, int align);
#line 101 "dialogs.cpp"
      bool displayfr_highlight(int x, int y, int b, int size, const string &s, color_t color, int align, int hicolor IS(0xFFFF00));
      }
    #if CAP_MENUSCALING && CAP_SDL
#line 109 "dialogs.cpp"
    void handleZooming(SDL_Event &ev);
    #endif
    #if !(CAP_MENUSCALING && CAP_SDL)
#line 119 "dialogs.cpp"
    void handleZooming(SDL_Event &ev);
    #endif
#line 122 "dialogs.cpp"
    extern vector<item> items;
#line 124 "dialogs.cpp"
    item& lastItem();
#line 126 "dialogs.cpp"
    item& titleItem();
#line 128 "dialogs.cpp"
    extern map<int, reaction_t> key_actions;
#line 130 "dialogs.cpp"
    void add_key_action(int key, const reaction_t& action);
#line 134 "dialogs.cpp"
    void add_key_action_adjust(int& key, const reaction_t& action);
#line 139 "dialogs.cpp"
    void extend();
#line 143 "dialogs.cpp"
    void add_action(const reaction_t& action);
#line 147 "dialogs.cpp"
    void add_action_push(const reaction_t& action);
#line 149 "dialogs.cpp"
    void add_action_push_clear(const reaction_t& action);
#line 151 "dialogs.cpp"
    void handler(int sym, int uni);
#line 156 "dialogs.cpp"
    void init();
#line 162 "dialogs.cpp"
    string keyname(int k);
#line 179 "dialogs.cpp"
    void addSlider(double d1, double d2, double d3, int key);
#line 189 "dialogs.cpp"
    void addIntSlider(int d1, int d2, int d3, int key);
#line 200 "dialogs.cpp"
    void addSelItem(string body, string value, int key);
#line 217 "dialogs.cpp"
    void addBoolItem(string body, bool value, int key);
#line 221 "dialogs.cpp"
    int displaycolor(color_t col);
#line 227 "dialogs.cpp"
    void addKeyboardItem(string keys);
#line 237 "dialogs.cpp"
    void addColorItem(string body, int value, int key);
#line 251 "dialogs.cpp"
    void addHelp(string body);
#line 262 "dialogs.cpp"
    void addInfo(string body, color_t color IS(dialogcolor));
#line 271 "dialogs.cpp"
    void addItem(string body, int key);
#line 284 "dialogs.cpp"
    void addBigItem(string body, int key);
#line 296 "dialogs.cpp"
    int addBreak(int val);
#line 304 "dialogs.cpp"
    void addTitle(string body, color_t color, int scale);
#line 313 "dialogs.cpp"
    void init(string title, color_t color IS(0xE8E8E8), int scale IS(150), int brk IS(60));
#line 319 "dialogs.cpp"
    extern int dcenter, dwidth;
#line 321 "dialogs.cpp"
    extern int dialogflags;
#line 323 "dialogs.cpp"
    int displayLong(string str, int siz, int y, bool measure);
#line 356 "dialogs.cpp"
    extern int tothei, dialogwidth, dfsize, dfspace, leftwidth, rightwidth, innerwidth, itemx, keyx, valuex;
#line 358 "dialogs.cpp"
    extern string highlight_text;
#line 360 "dialogs.cpp"
    void measure();
#line 387 "dialogs.cpp"
    extern purehookset hooks_display_dialog;
#line 389 "dialogs.cpp"
    extern vector<int> key_queue;
#line 391 "dialogs.cpp"
    void queue_key(int key);
#line 393 "dialogs.cpp"
    void display();
#line 542 "dialogs.cpp"
    void handle_actions(int &sym, int &uni);
#line 555 "dialogs.cpp"
    void handleNavigation(int &sym, int &uni);
#line 617 "dialogs.cpp"
    extern color_t *palette;
#line 623 "dialogs.cpp"
    void handleKeyColor(int sym, int uni);
#line 668 "dialogs.cpp"
    extern bool colorAlpha;
#line 670 "dialogs.cpp"
    void drawColorDialog();
#line 732 "dialogs.cpp"
    void openColorDialog(unsigned int& col, unsigned int *pal IS(palette));
#line 741 "dialogs.cpp"
    extern numberEditor ne;
#line 743 "dialogs.cpp"
    bool editingDetail();
#line 752 "dialogs.cpp"
    string disp(ld x);
#line 757 "dialogs.cpp"
    extern reaction_t reaction;
#line 758 "dialogs.cpp"
    extern reaction_t reaction_final;
#line 760 "dialogs.cpp"
    extern reaction_t extra_options;
#line 762 "dialogs.cpp"
    void apply_slider();
#line 772 "dialogs.cpp"
    void use_hexeditor();
#line 777 "dialogs.cpp"
    void apply_edit();
#line 794 "dialogs.cpp"
    void bound_low(ld val);
#line 805 "dialogs.cpp"
    void bound_up(ld val);
#line 816 "dialogs.cpp"
    extern int numberdark;
#line 818 "dialogs.cpp"
    void formula_keyboard(bool lr);
#line 827 "dialogs.cpp"
    extern bool onscreen_keyboard;
#line 829 "dialogs.cpp"
    void number_dialog_help();
#line 871 "dialogs.cpp"
    void parser_help();
#line 878 "dialogs.cpp"
    void drawNumberDialog();
#line 980 "dialogs.cpp"
    int handlePage(int& nl, int& nlm, int perpage);
#line 1001 "dialogs.cpp"
    void displayPageButtons(int i, bool pages);
#line 1018 "dialogs.cpp"
    bool handlePageButtons(int uni);
#line 1028 "dialogs.cpp"
    void editNumber(ld& x, ld vmin, ld vmax, ld step, ld dft, string title, string help);
#line 1053 "dialogs.cpp"
    void editNumber(int& x, int vmin, int vmax, ld step, int dft, string title, string help);
#line 1059 "dialogs.cpp"
    void helpToEdit(int& x, int vmin, int vmax, int step, int dft);
#line 1092 "dialogs.cpp"
    void drawFileDialog();
#line 1146 "dialogs.cpp"
    void handleKeyFile(int sym, int uni);
#line 1189 "dialogs.cpp"
    void openFileDialog(string& filename, string fcap, string ext, bool_reaction_t action);
#line 1199 "dialogs.cpp"
    extern string infix;
#line 1204 "dialogs.cpp"
    bool hasInfix(const string &s);
#line 1226 "dialogs.cpp"
    bool editInfix(int uni);
#line 1235 "dialogs.cpp"
    extern vector<pair<string, color_t> > v;  
#line 1237 "dialogs.cpp"
    void vpush(color_t color, const char *name);
#line 1244 "dialogs.cpp"
    extern string *edited_string;
#line 1246 "dialogs.cpp"
    string view_edited_string();
#line 1254 "dialogs.cpp"
    void start_editing(string& s);
#line 1259 "dialogs.cpp"
    string editchecker(int sym, int uni);
#line 1264 "dialogs.cpp"
    bool handle_edit_string(int sym, int uni, function<string(int, int)> checker IS(editchecker));
#line 1284 "dialogs.cpp"
    void string_edit_dialog();
#line 1315 "dialogs.cpp"
    void edit_string(string& s, string title, string help);
#line 1328 "dialogs.cpp"
    void confirm_dialog(const string& text, const reaction_t& act);
#line 1342 "dialogs.cpp"
    void addBoolItem_action(const string& s, bool& b, char c);
#line 1347 "dialogs.cpp"
    void addBoolItem_action_neg(const string& s, bool& b, char c);
#line 1352 "dialogs.cpp"
    bool cheat_forbidden();
#line 1364 "dialogs.cpp"
    void add_action_confirmed(const reaction_t& act);
#line 1369 "dialogs.cpp"
    
    template<class T> void addBoolItem_choice(const string&  s, T& b, T val, char c) {
    addBoolItem(s, b == val, c);
    add_action([&b, val] { b = val; });
    }
    
    inline void cheat_if_confirmed(const reaction_t& act) {
    if(cheat_forbidden())
    return;
    if(needConfirmationEvenIfSaved()) pushScreen([act] () { confirm_dialog(XLAT("This will enable the cheat mode, making this game ineligible for scoring. Are you sure?"), act); });
    else act();
    }
    
    inline void do_if_confirmed(const reaction_t& act) {
    if(needConfirmationEvenIfSaved()) pushScreen([act] () { confirm_dialog(XLAT("This will end your current game and start a new one. Are you sure?"), act); });
    else act();
    }
    
    inline void push_confirm_dialog(const reaction_t& act, const string& s) {
    pushScreen([act, s] () { confirm_dialog(s, act); });
    }
    
    inline reaction_t add_confirmation(const reaction_t& act) {
    return [act] { do_if_confirmed(act); };
    }
    }

  // implemented in: dpgen.cpp

  namespace dpgen {
#line 14 "dpgen.cpp"
    extern bool in;
#line 181 "dpgen.cpp"
    void check();
#line 195 "dpgen.cpp"
    void show_menu();
    }

  // implemented in: drawing.cpp

#line 12 "drawing.cpp"
  static const int POLY_DRAWLINES = 1;            // draw the lines
  static const int POLY_DRAWAREA = 2;             // draw the area
  static const int POLY_INVERSE = 4;              // draw the inverse -- useful in stereographic projection
  static const int POLY_ISSIDE = 8;               // never draw in inverse
  static const int POLY_BEHIND = 16;              // there are points behind the camera
  static const int POLY_TOOLARGE = 32;            // some coordinates are too large -- best not to draw to avoid glitches
  static const int POLY_INFRONT = 64;             // on the sphere (orthogonal projection), do not draw without any points in front
  static const int POLY_HASWALLS = 128;           // floor shapes which have their sidewalls
  static const int POLY_PLAIN = 256;              // plain floors
  static const int POLY_FULL = 512;               // full floors
  static const int POLY_HASSHADOW = 1024;         // floor shapes which have their shadows, or can use shFloorShadow
  static const int POLY_GP = 2048;                // Goldberg shapes
  static const int POLY_VCONVEX = 4096;           // Convex shape (vertex)
  static const int POLY_CCONVEX = 8192;           // Convex shape (central)
  static const int POLY_CENTERIN = 16384;         // new system of side checking 
  static const int POLY_FORCEWIDE = (1<<15);      // force wide lines
  static const int POLY_NOTINFRONT = (1<<16);     // points not in front
  static const int POLY_NIF_ERROR = (1<<17);      // points moved to the outline cross the image, disable
  static const int POLY_BADCENTERIN = (1<<18);    // new system of side checking 
  static const int POLY_PRECISE_WIDE = (1<<19);   // precise width calculation
  static const int POLY_FORCE_INVERTED = (1<<20); // force inverted
  static const int POLY_ALWAYS_IN = (1<<21);      // always draw this
  static const int POLY_TRIANGLES = (1<<22);      // made of TRIANGLES, not TRIANGLE_FAN
  static const int POLY_INTENSE = (1<<23);        // extra intense colors
  static const int POLY_DEBUG = (1<<24);          // debug this shape
  static const int POLY_PRINTABLE = (1<<25);      // these walls are printable
  static const int POLY_FAT = (1<<26);            // fatten this model in WRL export (used for Rug)
  static const int POLY_SHADE_TEXTURE = (1<<27);  // texture has 'z' coordinate for shading
  static const int POLY_ONE_LEVEL = (1<<28);      // only one level of the universal cover in SL(2,R)
  
  /** \brief A graphical element that can be drawn. Objects are not drawn immediately but rather queued.
  *
  *  HyperRogue map rendering functions do not draw its data immediately; instead, they call the 'queue' functions
  *  which store the data to draw in hr::ptds. This approach lets us draw the elements in the correct order. 
  */
  
  struct drawqueueitem {
  /** \brief The higher the priority, the earlier we should draw this object. */
  PPR prio;
  /** \brief Color of this object. */
  color_t color;
  /** \brief Some priorities need extra sorting inside the given class. This attribute is used to specify the inner sorting priority. */
  int subprio;
  /** \brief Draw the object. */
  virtual void draw() = 0;
  /** \brief Draw the object as background. */
  virtual void draw_back() {}
  virtual ~drawqueueitem() = default;
  /** \brief When minimizing OpenGL calls, we need to group items of the same color, etc. together. This value is used as an extra sorting key. */
  virtual color_t outline_group() = 0;
  };
  
  /** \brief Drawqueueitem used to draw polygons. The majority of drawqueueitems fall here. */
  struct dqi_poly : drawqueueitem {
  /** \brief matrix used to transform the model */
  shiftmatrix V;
  /** \brief a vector of GL vertices where the model is stored */
  const vector<glvertex> *tab;
  /** \brief the where does the model start */
  int offset;
  /** \brief how many vertices in the model */
  int cnt;
  /** \brief the offset in the texture vertices */
  int offset_texture;
  /** \brief outline color */
  color_t outline;
  /** \brief width of boundary lines */
  double linewidth;
  /** \brief various flags */
  int flags;
  /** \brief Texture data for textured polygons. Requires POLY_TRIANGLES flag */
  struct basic_textureinfo *tinf;
  /** \brief used to find the correct side to draw in spherical geometries */
  hyperpoint intester;
  /** \brief temporarily cached data */
  float cache;
  void draw() override;
  #if CAP_GL
  void gldraw();
  #endif
  void draw_back() override;
  color_t outline_group() override { return outline; }
  };
  
  /** \brief Drawqueueitem used to draw lines */
  struct dqi_line : drawqueueitem {
  /** \brief starting and ending point */
  shiftpoint H1, H2;
  /** \brief how accurately to render the line */
  int prf;
  /** \brief width of this line */
  double width;
  void draw() override;
  void draw_back() override;
  color_t outline_group() override { return color; }
  };
  
  /** \brief Drawqueueitem used to draw strings, using sccreen coodinates */      
  struct dqi_string : drawqueueitem {
  /** \brief text */
  string str;
  /** onscreen position */
  int x, y;
  /** shift in anaglyph mode */
  int shift;
  /** font size */
  int size;
  /** frame color */
  int frame;
  /** alignment (0-8-16) */
  int align;
  void draw() override;
  color_t outline_group() override { return 1; }
  };
  
  /** Drawqueueitem used to draw circles, using screen coordinates */
  struct dqi_circle : drawqueueitem {
  /** \brief onscreen position */
  int x, y;
  /** \brief circle size */
  int size;
  /** \brief which color should it be filled with */
  color_t fillcolor;
  /** \brief width of the circle */
  double linewidth;
  void draw() override;
  color_t outline_group() override { return 2; }
  };
  
  /** \brief Perform an arbitrary action. May temporarily change the model, etc. */
  struct dqi_action : drawqueueitem {
  reaction_t action;
  explicit dqi_action(const reaction_t& a) : action(a) {}
  void draw() override { action(); }
  color_t outline_group() override { return 2; }
  };
#line 150 "drawing.cpp"
  extern bool in_vr_sphere;
#line 155 "drawing.cpp"
  extern color_t poly_outline;
#line 157 "drawing.cpp"
  extern vector<unique_ptr<drawqueueitem>> ptds;
  #if CAP_GL
#line 160 "drawing.cpp"
  extern color_t text_color;
#line 161 "drawing.cpp"
  extern int text_shift;
#line 162 "drawing.cpp"
  extern GLuint text_texture;
#line 163 "drawing.cpp"
  extern int texts_merged;
#line 164 "drawing.cpp"
  extern int shapes_merged;
#line 173 "drawing.cpp"
  void glflush();
  #endif
  #if CAP_POLY
#line 252 "drawing.cpp"
  #define POLYMAX 60000
#line 255 "drawing.cpp"
  extern vector<glvertex> glcoords;
  #endif
#line 259 "drawing.cpp"
  extern int spherespecial, spherephase;
  #if CAP_POLY
#line 264 "drawing.cpp"
  extern int polyx[POLYMAX], polyxr[POLYMAX], polyy[POLYMAX];
#line 299 "drawing.cpp"
  bool two_sided_model();
#line 318 "drawing.cpp"
  int get_side(const hyperpoint& H);
#line 359 "drawing.cpp"
  bool correct_side(const hyperpoint& H);
  #if CAP_SDLGFX
#line 560 "drawing.cpp"
  void filledPolygonColorI(SDL_Renderer *s, int* px, int *py, int polyi, color_t col);
  #endif
#line 611 "drawing.cpp"
  extern int global_projection;
#line 782 "drawing.cpp"
  ld scale_at(const shiftmatrix& T);
#line 792 "drawing.cpp"
  extern int perfect_linewidth;
#line 794 "drawing.cpp"
  ld linewidthat(const shiftpoint& h);
#line 814 "drawing.cpp"
  void set_width(ld w);
  namespace s2xe {
#line 1077 "drawing.cpp"
    extern int qrings;
    }
#line 1330 "drawing.cpp"
  extern int berger_limit;
  namespace ods {
    #if CAP_ODS
#line 1428 "drawing.cpp"
    bool project(hyperpoint h, hyperpoint& h1, hyperpoint& h2, bool eye);
    #endif
    }
#line 2013 "drawing.cpp"
  void prettypoint(const hyperpoint& h);
#line 2017 "drawing.cpp"
  void prettylinesub(const hyperpoint& h1, const hyperpoint& h2, int lev);
#line 2026 "drawing.cpp"
  void prettyline(hyperpoint h1, hyperpoint h2, ld shift, color_t col, int lev, int flags, PPR prio);
#line 2045 "drawing.cpp"
  void prettypoly(const vector<hyperpoint>& t, color_t fillcol, color_t linecol, int lev);
#line 2068 "drawing.cpp"
  void queuereset(eModel m, PPR prio);
#line 2102 "drawing.cpp"
  void initquickqueue();
#line 2107 "drawing.cpp"
  void sortquickqueue();
#line 2116 "drawing.cpp"
  void quickqueue();
#line 2137 "drawing.cpp"
  extern ld backbrightness;
#line 2139 "drawing.cpp"
  extern purehookset hooks_drawqueue;
#line 2167 "drawing.cpp"
  void sort_drawqueue();
#line 2207 "drawing.cpp"
  void reverse_priority(PPR p);
#line 2211 "drawing.cpp"
  void reverse_side_priorities();
#line 2218 "drawing.cpp"
  void draw_backside();
#line 2253 "drawing.cpp"
  void reverse_transparent_walls();
#line 2258 "drawing.cpp"
  void set_vr_sphere();
#line 2274 "drawing.cpp"
  void draw_main();
#line 2365 "drawing.cpp"
  void drawqueue();
#line 2503 "drawing.cpp"
  template<class T, class... U> T& queuea(PPR prio, U... u) {
  ptds.push_back(unique_ptr<T>(new T (u...)));
  ptds.back()->prio = prio;  
  return (T&) *ptds.back();
  }
  #if CAP_SHAPES
#line 2511 "drawing.cpp"
  dqi_poly& queuepolyat(const shiftmatrix& V, const hpcshape& h, color_t col, PPR prio);
  #endif
#line 2532 "drawing.cpp"
  dqi_poly& queuetable(const shiftmatrix& V, const vector<glvertex>& f, int cnt, color_t linecol, color_t fillcol, PPR prio);
  #if CAP_SHAPES
#line 2550 "drawing.cpp"
  dqi_poly& queuepoly(const shiftmatrix& V, const hpcshape& h, color_t col);
  #endif
#line 2559 "drawing.cpp"
  void curvepoint(const hyperpoint& H1);
#line 2563 "drawing.cpp"
  dqi_poly& queuecurve(const shiftmatrix& V, color_t linecol, color_t fillcol, PPR prio);
#line 2570 "drawing.cpp"
  dqi_action& queueaction(PPR prio, const reaction_t& action);
#line 2574 "drawing.cpp"
  dqi_line& queueline(const shiftpoint& H1, const shiftpoint& H2, color_t col, int prf IS(0), PPR prio IS(PPR::LINE));
#line 2586 "drawing.cpp"
  void queuestr(int x, int y, int shift, int size, string str, color_t col, int frame IS(0), int align IS(8));
#line 2598 "drawing.cpp"
  void queuecircle(int x, int y, int size, color_t color, PPR prio IS(PPR::CIRCLE), color_t fillcolor IS(0));
#line 2608 "drawing.cpp"
  void getcoord0(const shiftpoint& h, int& xc, int &yc, int &sc);
#line 2617 "drawing.cpp"
  ld scale_in_pixels(const shiftmatrix& V);
#line 2621 "drawing.cpp"
  bool getcoord0_checked(const shiftpoint& h, int& xc, int &yc, int &zc);
#line 2628 "drawing.cpp"
  void queuestr(const shiftpoint& h, int size, const string& chr, color_t col, int frame IS(0));
#line 2634 "drawing.cpp"
  extern basic_textureinfo finf;
  #if CAP_GL
#line 2638 "drawing.cpp"
  using pointfunction = function<hyperpoint(ld, ld)>;
#line 2641 "drawing.cpp"
  hyperpoint default_pointfunction(ld x, ld y);
  #if !CAP_EXTFONT
#line 2646 "drawing.cpp"
  void write_in_space(const shiftmatrix& V, int fsize, double size, const string& s, color_t col, int frame IS(0), int align IS(8), PPR prio IS(PPR::TEXT), pointfunction pf IS(default_pointfunction));
  #endif
  #endif
#line 2702 "drawing.cpp"
  void queuestr(const shiftmatrix& V, double size, const string& chr, color_t col, int frame IS(0), int align IS(8));
#line 2722 "drawing.cpp"
  void queuestrn(const shiftmatrix& V, double size, const string& chr, color_t col, int frame IS(0), int align IS(8));
#line 2755 "drawing.cpp"
  void queuecircle(const shiftmatrix& V, double size, color_t col);
  #endif

  // implemented in: environment.cpp

#line 13 "environment.cpp"
  #define HF_BUG        Flag(0)
  #define HF_EARTH      Flag(1)
  #define HF_BIRD       Flag(2)
  #define HF_LEADER     Flag(3)
  #define HF_HEX        Flag(4)
  #define HF_WHIRLPOOL  Flag(5)
  #define HF_WATER      Flag(6)
  #define HF_AIR        Flag(7)
  #define HF_MUTANT     Flag(8)
  #define HF_OUTLAW     Flag(9)
  #define HF_WHIRLWIND  Flag(10)
  #define HF_ROSE       Flag(11)
  #define HF_DRAGON     Flag(12)
  #define HF_KRAKEN     Flag(13)
  #define HF_SHARK      Flag(14)
  #define HF_BATS       Flag(15)
  #define HF_REPTILE    Flag(16)
  #define HF_EAGLES     Flag(17)
  #define HF_SLOW       Flag(18)
  #define HF_FAST       Flag(19)
  #define HF_WARP       Flag(20)
  #define HF_MOUSE      Flag(21)
  #define HF_RIVER      Flag(22)
  #define HF_MIRROR     Flag(23)
  #define HF_VOID       Flag(24)
  #define HF_HUNTER     Flag(25)
  #define HF_FAILED_AMBUSH     Flag(26)
  #define HF_MAGNET     Flag(27)
  #define HF_HEXD       Flag(28)
  #define HF_ALT        Flag(29)
  #define HF_MONK       Flag(30)
  #define HF_WESTWALL   Flag(31)
  #define HF_JUMP       Flag(32)
  #define HF_DICE       Flag(33)
  #define HF_ANT        Flag(34)
#line 50 "environment.cpp"
  extern flagtype havewhat, hadwhat;
#line 53 "environment.cpp"
  extern vector<cell*> worms, ivies, ghosts, golems, hexsnakes, ants;
#line 63 "environment.cpp"
  extern vector<int> reachedfrom;
#line 66 "environment.cpp"
  extern int first7;           
#line 69 "environment.cpp"
  extern vector<cell*> dcal;
#line 71 "environment.cpp"
  extern vector<cell*> pathq;
#line 74 "environment.cpp"
  extern int statuecount;
#line 77 "environment.cpp"
  extern int wetslime;
#line 80 "environment.cpp"
  extern vector<cell*> pathqm;
#line 83 "environment.cpp"
  extern set<int> snaketypes;
#line 85 "environment.cpp"
  extern int gamerange_bonus;
#line 86 "environment.cpp"
  int gamerange();
#line 89 "environment.cpp"
  extern cell *pd_from;
#line 90 "environment.cpp"
  extern int pd_range;
#line 92 "environment.cpp"
  void onpath(cell *c, int d);
#line 97 "environment.cpp"
  void onpath(cell *c, int d, int sp);
#line 103 "environment.cpp"
  void clear_pathdata();
#line 110 "environment.cpp"
  extern int pathlock;
#line 112 "environment.cpp"
  void compute_graphical_distance();
#line 174 "environment.cpp"
  void computePathdist(eMonster param, bool include_allies IS(true));
#line 239 "environment.cpp"
  struct pathdata {
  void checklock() { 
  if(pd_from) pd_from = NULL, clear_pathdata();
  if(pathlock) printf("path error\n"); 
  pathlock++; 
  }
  ~pathdata() {
  pathlock--;
  clear_pathdata();
  }
  pathdata(eMonster m, bool include_allies IS(true)) { 
  checklock();
  computePathdist(m, include_allies); 
  }
  pathdata(int i) { 
  checklock();
  }
  };
#line 261 "environment.cpp"
  void bfs();
#line 523 "environment.cpp"
  void moverefresh(bool turn IS(true));
#line 745 "environment.cpp"
  void settemp(cell *c);
#line 750 "environment.cpp"
  void findWormIvy(cell *c);
#line 796 "environment.cpp"
  void monstersTurn();

  // implemented in: euclid.cpp

  namespace euc {
#line 14 "euclid.cpp"
    struct coord : array<int, 3> {
    coord() {}
    coord(int x, int y, int z) { self[0] = x; self[1] = y; self[2] = z; }
    coord& operator += (coord b) { for(int i: {0,1,2}) self[i] += b[i]; return self; }
    coord& operator -= (coord b) { for(int i: {0,1,2}) self[i] -= b[i]; return self; }
    coord operator + (coord b) const { coord a = self; return a += b; }
    coord operator - (coord b) const { coord a = self; return a -= b; }
    coord operator -() const { return coord(-self[0], -self[1], -self[2]); }
    coord& operator +() { return self; }
    const coord& operator +() const { return self; }
    coord operator *(int x) const { return coord(x*self[0], x*self[1], x*self[2]); }
    friend coord operator *(int x, const coord& y) { return coord(x*y[0], x*y[1], x*y[2]); }
    };
    
    typedef array<coord, 3> intmatrix;
#line 31 "euclid.cpp"
    extern const coord euzero;
#line 32 "euclid.cpp"
    extern const coord eutester;
#line 33 "euclid.cpp"
    extern intmatrix euzeroall;
#line 37 "euclid.cpp"
    vector<coord> get_shifttable();
#line 79 "euclid.cpp"
    extern coord basic_canonicalize(coord x);
#line 82 "euclid.cpp"
    struct torus_config {
    /** periods entered by the user */
    intmatrix user_axes;
    /** OR'ed flags: 1 -- flip X in 3D, 2 -- flip Y in 3D, 4 -- flip X/Y in 3D, 8 -- Klein bottle in 2D, 16 -- third turn in 3D, 32 -- Hantzsche-Wendt in 3D */
    int twisted;
    
    torus_config() {}
    torus_config(intmatrix user_axes, int twisted) : user_axes(user_axes), twisted(twisted) {}
    };
    
    struct torus_config_full : torus_config {
    /** optimal representation of the periods */
    intmatrix optimal_axes;
    /** regular axes (?) */
    intmatrix regular_axes;
    /** in 2D: the period vector which is reflected */
    gp::loc twisted_vec;
    /** in 2D: a vector orthogonal to twisted_vec */
    gp::loc ortho_vec;
    /** determinant */
    int det;
    /** the number of infinite dimensions */
    int infinite_dims;
    /** ? */  
    intmatrix inverse_axes;
    /** for canonicalization on tori */
    map<coord, int> hash;
    vector<coord> seq;
    int index;
    
    void reset() { index = 0; hash.clear(); seq.clear(); }
    
    /** add to the tori canonicalization list */
    void add(coord val);
    
    /** get the representative on the tori canonicalization list */
    coord get(coord x);
    
    /** find the equivalence class of coo */
    coord compute_cat(coord coo);
    
    /** canonicalize coord x; in case of twisting, adjust d, M, and mirr accordingly */
    void canonicalize(coord& x, coord& d, transmatrix& M, bool& mirr);
    };
#line 127 "euclid.cpp"
    extern torus_config eu_input, eu_edit;
#line 128 "euclid.cpp"
    extern torus_config_full eu;
#line 309 "euclid.cpp"
    vector<coord>& get_current_shifttable();
#line 310 "euclid.cpp"
    map<coord, heptagon*>& get_spacemap();
#line 311 "euclid.cpp"
    map<heptagon*, coord>& get_ispacemap();
#line 312 "euclid.cpp"
    cell *& get_camelot_center();
#line 314 "euclid.cpp"
    heptagon* get_at(coord co);
#line 316 "euclid.cpp"
    hrmap* new_map();
#line 320 "euclid.cpp"
    transmatrix move_matrix(heptagon *h, int i);
#line 324 "euclid.cpp"
    bool pseudohept(cell *c);
#line 336 "euclid.cpp"
    int dist_alt(cell *c);
#line 348 "euclid.cpp"
    bool get_emerald(cell *c);
#line 368 "euclid.cpp"
    int celldistance(coord v);
#line 393 "euclid.cpp"
    int celldistance(cell *c1, cell *c2);
#line 400 "euclid.cpp"
    void set_land(cell *c);
#line 415 "euclid.cpp"
    int dist_relative(cell *c);
#line 448 "euclid.cpp"
    torus_config torus3(int x, int y, int z);
#line 454 "euclid.cpp"
    torus_config clear_torus3();
#line 469 "euclid.cpp"
    bool valid_third_turn(const intmatrix& m);
#line 479 "euclid.cpp"
    torus_config make_hantzsche_wendt(int v);
#line 492 "euclid.cpp"
    bool valid_hantzsche_wendt(const intmatrix& m);
#line 496 "euclid.cpp"
    torus_config make_third_turn(int a, int b, int c);
#line 509 "euclid.cpp"
    torus_config make_quarter_turn(int a, int b, int c);
#line 532 "euclid.cpp"
    bool valid_irr_torus();
#line 551 "euclid.cpp"
    void build_torus3(eGeometry g);
#line 647 "euclid.cpp"
    void build_torus3();
#line 815 "euclid.cpp"
    void prepare_torus3();
#line 819 "euclid.cpp"
    void show_fundamental();
#line 863 "euclid.cpp"
    torus_config rectangular_torus(int x, int y, bool klein);
#line 878 "euclid.cpp"
    extern int quotient_size;
#line 880 "euclid.cpp"
    void show_torus3();
#line 1130 "euclid.cpp"
    int dscalar(gp::loc e1, gp::loc e2);
#line 1134 "euclid.cpp"
    int dsquare(gp::loc e);
#line 1136 "euclid.cpp"
    int dcross(gp::loc e1, gp::loc e2);
#line 1140 "euclid.cpp"
    gp::loc full_coords2(cell *c);
#line 1167 "euclid.cpp"
    cell* at(gp::loc p);
#line 1175 "euclid.cpp"
    coord to_coord(gp::loc p);
#line 1177 "euclid.cpp"
    gp::loc sdxy();
#line 1179 "euclid.cpp"
    pair<bool, string> coord_display(const shiftmatrix& V, cell *c);
#line 1192 "euclid.cpp"
    gp::loc to_loc(const coord& v);
#line 1194 "euclid.cpp"
    map<gp::loc, cdata>& get_cdata();
#line 1196 "euclid.cpp"
    transmatrix eumove(coord co);
#line 1213 "euclid.cpp"
    transmatrix eumove(gp::loc co);
#line 1215 "euclid.cpp"
    bool chiral(gp::loc g);
#line 1227 "euclid.cpp"
    void twist_once(gp::loc coo);
#line 1239 "euclid.cpp"
    int dist(int sx, int sy, bool reduce IS(true));
#line 1249 "euclid.cpp"
    int dist(gp::loc a, gp::loc b);
#line 1253 "euclid.cpp"
    int cyldist(gp::loc a, gp::loc b);
#line 1273 "euclid.cpp"
    void generate();
#line 1357 "euclid.cpp"
    bool in();
#line 1362 "euclid.cpp"
    bool in(int dim);
#line 1363 "euclid.cpp"
    bool in(int dim, int s7);
    }
#line 1367 "euclid.cpp"
  gp::loc euc2_coordinates(cell *c);

  // implemented in: expansion.cpp

#line 25 "expansion.cpp"
  struct expansion_analyzer {
  vector<int> gettype(cell *c);
  int N;
  vector<cell*> samples;  
  map<vector<int>, int> codeid;  
  vector<vector<int> > children;  
  int rootid, diskid;
  int coefficients_known;
  #if CAP_GMP
  vector<mpq_class> coef;
  #else
  vector<int> coef;
  #endif
  int valid_from, tested_to;
  ld growth;
  
  int sample_id(cell *c);
  void preliminary_grouping();
  void reduce_grouping();
  vector<vector<bignum>> descendants;
  bignum& get_descendants(int level);
  bignum& get_descendants(int level, int type);
  void find_coefficients();
  void reset();
  
  expansion_analyzer() { reset(); }
  
  string approximate_descendants(int d, int max_length);
  void view_distances_dialog();
  ld get_growth();
  
  private:
  bool verify(int id);
  int valid(int v, int step);
  };
#line 353 "expansion.cpp"
  int type_in(expansion_analyzer& ea, cell *c, const cellfunction& f);
#line 392 "expansion.cpp"
  bool sizes_known();
#line 405 "expansion.cpp"
  bool trees_known();
#line 424 "expansion.cpp"
  extern string dfnames[3];
#line 429 "expansion.cpp"
  extern string ncnames[5];
#line 436 "expansion.cpp"
  int curr_dist(cell *c);
#line 456 "expansion.cpp"
  int type_in_reduced(expansion_analyzer& ea, cell *c, const cellfunction& f);
#line 468 "expansion.cpp"
  int parent_id(cell *c, int which, const cellfunction& cf);
#line 489 "expansion.cpp"
  void generate_around(cell *c);
  namespace ts {
#line 494 "expansion.cpp"
    cell *verified_add(cell *c, int which, int bonus, const cellfunction& cf);
#line 500 "expansion.cpp"
    cell *verified_add_gen(cell *c, int which, int bonus, const cellfunction& cf);
#line 504 "expansion.cpp"
    cell *add(cell *c, int which, int bonus, const cellfunction& cf);
#line 510 "expansion.cpp"
    cell *left_of(cell *c, const cellfunction& cf);
#line 517 "expansion.cpp"
    cell *right_of(cell *c, const cellfunction& cf);
#line 524 "expansion.cpp"
    cell *child_number(cell *c, int id, const cellfunction& cf);
#line 531 "expansion.cpp"
    inline cell *left_parent(cell *c, const cellfunction& cf) { return verified_add(c, 1, 0, cf); }
    inline cell *right_parent(cell *c, const cellfunction& cf) { return verified_add(c, -1, 0, cf); }
    }
#line 537 "expansion.cpp"
  extern bool viewdists;
#line 538 "expansion.cpp"
  extern bool use_color_codes;
#line 539 "expansion.cpp"
  extern bool use_analyzer;
#line 540 "expansion.cpp"
  extern bool show_distance_lists;
#line 545 "expansion.cpp"
  extern map<int, color_t> expcolors;
#line 554 "expansion.cpp"
  extern bool dist_label_colored;
#line 555 "expansion.cpp"
  extern color_t dist_label_color;
#line 627 "expansion.cpp"
  void viewdist_configure_dialog();
#line 799 "expansion.cpp"
  void enable_viewdists();
#line 952 "expansion.cpp"
  extern expansion_analyzer expansion;
#line 954 "expansion.cpp"
  extern int sibling_limit;
#line 956 "expansion.cpp"
  void set_sibling_limit();
#line 1005 "expansion.cpp"
  int hyperbolic_celldistance(cell *c1, cell *c2);

  // implemented in: fake.cpp

  namespace fake {
#line 9 "fake.cpp"
    extern ld scale;
#line 11 "fake.cpp"
    extern bool multiple;
#line 13 "fake.cpp"
    extern bool multiple_special_draw;
#line 14 "fake.cpp"
    extern bool recursive_draw;
#line 16 "fake.cpp"
    extern eGeometry underlying;
#line 17 "fake.cpp"
    extern geometry_information *underlying_cgip;
#line 18 "fake.cpp"
    extern hrmap *pmap;
#line 19 "fake.cpp"
    extern geometry_information *pcgip;
#line 20 "fake.cpp"
    extern eGeometry actual_geometry;
#line 22 "fake.cpp"
    extern int ordered_mode;
#line 24 "fake.cpp"
    bool in();
#line 26 "fake.cpp"
    void on_dim_change();
#line 29 "fake.cpp"
    bool split();
#line 31 "fake.cpp"
    bool available();
#line 385 "fake.cpp"
    hrmap* new_map();
#line 387 "fake.cpp"
    hrmap* get_umap();
#line 390 "fake.cpp"
    template<class T> auto in_underlying_geometry(const T& f) -> decltype(f()) {
    if(!fake::in()) return f();
    pcgip = cgip; 
    dynamicval<eGeometry> g(geometry, underlying);
    dynamicval<eGeometry> gag(actual_geometry, geometry);
    dynamicval<geometry_information*> gc(cgip, underlying_cgip);
    dynamicval<hrmap*> gpm(pmap, currentmap);
    dynamicval<hrmap*> gm(currentmap, get_umap());
    return f();
    }
    
    #define FPIU(x) hr::fake::in_underlying_geometry([&] { return (x); })
#line 404 "fake.cpp"
    hyperpoint befake(hyperpoint h);
#line 412 "fake.cpp"
    vector<hyperpoint> befake(const vector<hyperpoint>& v);
#line 418 "fake.cpp"
    vector<vector<hyperpoint>> befake(const vector<vector<hyperpoint>>& v);
#line 424 "fake.cpp"
    ld compute_around(bool setup);
#line 480 "fake.cpp"
    void generate();
#line 521 "fake.cpp"
    extern ld around;
#line 524 "fake.cpp"
    ld compute_euclidean();
#line 539 "fake.cpp"
    ld around_orig();
#line 554 "fake.cpp"
    geometryinfo1 geometry_of_curvature(ld curvature, int dim);
#line 564 "fake.cpp"
    void compute_scale();
#line 652 "fake.cpp"
    void change_around();
#line 688 "fake.cpp"
    void configure();
    }

  // implemented in: fieldpattern.cpp

  #if CAP_FIELD
  namespace fieldpattern {
#line 14 "fieldpattern.cpp"
    extern bool use_rule_fp;
#line 16 "fieldpattern.cpp"
    extern bool use_quotient_fp;
#line 23 "fieldpattern.cpp"
    #define currfp fieldpattern::getcurrfp()
    
    struct primeinfo {
    int p;
    int cells;
    bool squared;
    };  
    
    struct fgeomextra {
    eGeometry base;
    vector<primeinfo> primes;
    vector<int> dualval;
    int current_prime_id;
    fgeomextra(eGeometry b, int i) : base(b), current_prime_id(i) {}
    };
#line 40 "fieldpattern.cpp"
    bool isprime(int n);
#line 46 "fieldpattern.cpp"
    #define MWDIM (prod ? 3 : WDIM+1)
    
    struct matrix : array<array<int, MAXMDIM>, MAXMDIM> {
    bool operator == (const matrix& B) const {
    for(int i=0; i<MWDIM; i++) for(int j=0; j<MWDIM; j++)
    if(self[i][j] != B[i][j]) return false;
    return true;
    }
    
    bool operator != (const matrix& B) const {
    for(int i=0; i<MWDIM; i++) for(int j=0; j<MWDIM; j++)
    if(self[i][j] != B[i][j]) return true;
    return false;
    }
    
    bool operator < (const matrix& B) const {
    for(int i=0; i<MWDIM; i++) for(int j=0; j<MWDIM; j++)
    if(self[i][j] != B[i][j]) return self[i][j] < B[i][j];
    return false;
    }
    
    };
#line 70 "fieldpattern.cpp"
    int groupspin(int id, int d, int group);
#line 74 "fieldpattern.cpp"
    int btspin(int id, int d);
#line 79 "fieldpattern.cpp"
    
    static const int ERR = -99;
    
    struct triplet_info {
    int i, j, size;
    };
    
    struct fpattern {
    
    unsigned force_hash;
    
    int Prime, wsquare, Field, dual;
    // we perform our computations in the field Z_Prime[w] where w^2 equals wsquare
    // (or simply Z_Prime for wsquare == 0)
    
    #define EASY
    // 'easy' assumes that all elements of the field actually used
    // are of form n or mw (not n+mw), and cs and ch are both of form n
    // by experimentation, such cs and ch always exist
    // many computations are much simpler under that assumption
    
    #ifndef EASY
    static int neasy;
    
    int m(int x) { x %= Prime; if(x<0) x+= Prime; return x; }
    #endif
    
    int sub(int a, int b) { 
    #ifdef EASY
    return (a + b * (Prime-1)) % Prime;
    #else
    return m(a%Prime-b%Prime) + Prime * m(a/Prime-b/Prime);
    #endif
    }
    
    int add(int a, int b) { 
    #ifdef EASY
    if(a == ERR || b == ERR || a*b<0) return ERR;
    return (a+b)%Prime;
    #else
    return m(a%Prime+b%Prime) + Prime * m(a/Prime+b/Prime);
    #endif
    }
    
    int mul(int tx, int ty) {
    #ifdef EASY
    return (tx*ty*((tx<0&&ty<0)?wsquare:1)) % Prime;
    #else
    if(tx >= Prime && tx % Prime) neasy++; 
    if(ty >= Prime && ty % Prime) neasy++; 
    int x[2], y[2], z[3];
    for(int i=0; i<3; i++) z[i] = 0;
    for(int i=0; i<2; i++) 
    x[i] = tx%Prime, tx /= Prime;
    for(int i=0; i<2; i++) 
    y[i] = ty%Prime, ty /= Prime;
    for(int i=0; i<2; i++)
    for(int j=0; j<2; j++)
    z[i+j] = (z[i+j] + x[i] * y[j]) % Prime;
    z[0] += z[2] * wsquare;
    
    return m(z[0]) + Prime * m(z[1]);
    #endif
    }
    
    int sqr(int x) { return mul(x,x); }
    
    matrix mmul(const matrix& A, const matrix& B) {
    matrix res;
    for(int i=0; i<MWDIM; i++) for(int k=0; k<MWDIM; k++) {
    int t = 0;
    #ifdef EASY
    for(int j=0; j<MWDIM; j++) t += mul(A[i][j], B[j][k]);
    t %= Prime;
    #else
    for(int j=0; j<MWDIM; j++) t = add(t, mul(A[i][j], B[j][k]));
    #endif
    res[i][k] = t;
    }
    return res;
    }
    
    map<matrix, int> matcode;
    vector<matrix> matrices;
    
    vector<string> qpaths;
    
    vector<matrix> qcoords;
    
    // S7 in 2D, but e.g. 4 for a 3D cube
    int rotations;
    
    // S7 in 2D, but e.g. 24 for a 3D cube
    int local_group;
    
    // Id: Identity
    // R : rotate by 1/rotations of the full circle
    // P : make a step and turn backwards
    // X : in 3-dim, turn by 90 degrees
    
    matrix Id, R, P, X;
    
    matrix strtomatrix(string s) {
    matrix res = Id;
    matrix m = Id;
    for(int i=isize(s)-1; i>=0; i--)
    if(s[i] == 'R') res = mmul(R, res);
    else if (s[i] == 'P') res = mmul(P, res);
    else if (s[i] == 'x') { m[0][0] = -1; res = mmul(m, res); m[0][0] = +1; }
    else if (s[i] == 'y') { m[1][1] = -1; res = mmul(m, res); m[1][1] = +1; }
    else if (s[i] == 'z') { m[2][2] = -1; res = mmul(m, res); m[2][2] = +1; }
    return res;
    }
    
    void addas(const matrix& M, int i) {
    if(!matcode.count(M)) {
    matcode[M] = i;
    for(int j=0; j<isize(qcoords); j++)
    addas(mmul(M, qcoords[j]), i);
    }
    }
    
    void add(const matrix& M) {
    if(!matcode.count(M)) {
    int i = isize(matrices);
    matcode[M] = i, matrices.push_back(M);
    for(int j=0; j<isize(qcoords); j++)
    addas(mmul(M, qcoords[j]), i);
    if(WDIM == 3) add(mmul(X, M));
    add(mmul(R, M));
    }
    }
    
    #define MXF 1000000
    
    vector<int> connections;
    
    vector<int> inverses; // NYI in 3D
    
    // 2D only
    vector<int> rrf; // rrf[i] equals gmul(i, rotations-1)
    vector<int> rpf; // rpf[i] equals gmul(i, rotations)
    
    matrix mpow(matrix M, int N) {
    while((N&1) == 0) N >>= 1, M = mmul(M, M);
    matrix res = M;
    N >>= 1;
    while(N) {      
    M = mmul(M,M); if(N&1) res = mmul(res, M);
    N >>= 1;
    }
    return res;
    }
    
    int gmul(int a, int b) { return matcode[mmul(matrices[a], matrices[b])]; }
    int gpow(int a, int N) { return matcode[mpow(matrices[a], N)]; }
    
    int gorder(int a) {
    int b = a;
    int q = 1;
    while(b) b = gmul(b, a), q++;
    return q;
    }
    
    pair<int,bool> gmul(pair<int, bool> a, int b) { 
    return make_pair(gmul(a.first,b), a.second); 
    }
    
    int order(const matrix& M);
    
    string decodepath(int i) {
    string s;
    while(i) {
    if(i % S7) i--, s += 'R';
    else i = connections[i], s += 'P';
    }
    return s;
    }
    
    int orderstats();
    
    int cs, sn, ch, sh;
    
    int solve();
    
    void build();
    
    static const int MAXDIST = 120;
    
    vector<char> disthep;
    vector<char> disthex;
    
    vector<char> distwall, distriver, distwall2, distriverleft, distriverright, distflower;
    int distflower0;
    
    vector<eItem> markers;
    
    int getdist(pair<int,bool> a, vector<char>& dists);
    int getdist(pair<int,bool> a, pair<int,bool> b);
    int dijkstra(vector<char>& dists, vector<int> indist[MAXDIST]);
    void analyze();
    
    int maxdist, otherpole, circrad, wallid, wallorder, riverid;
    
    bool easy(int i) {
    return i < Prime || !(i % Prime);
    }
    
    // 11 * 25
    // (1+z+z^3) * (1+z^3+z^4) ==
    // 1+z+z^7 == 1+z+z^2(z^5) == 1+z+z^2(1+z^2) = 1+z+z^2+z^4
    
    void init(int p) {
    Prime = p;
    if(solve()) {
    printf("error: could not solve the fieldpattern\n");
    exit(1);
    }
    build();
    }
    
    fpattern(int p) {
    force_hash = 0;
    #if CAP_THREAD && MAXMDIM >= 4
    dis = nullptr;
    #endif
    if(!p) return;
    init(p);
    }
    
    void findsubpath();
    
    vector<matrix> generate_isometries();
    
    bool check_order(matrix M, int req);
    
    unsigned compute_hash();
    
    void set_field(int p, int sq);
    
    unsigned hashv;
    
    #if MAXMDIM >= 4
    // general 4D
    vector<transmatrix> fullv;
    
    void add1(const matrix& M);
    void add1(const matrix& M, const transmatrix& Full);
    vector<matrix> generate_isometries3();
    int solve3();
    bool generate_all3();
    
    #if CAP_THREAD
    struct discovery *dis;
    #endif
    #endif
    
    vector<triplet_info> find_triplets();
    void generate_quotientgroup();
    };
    
    #if CAP_THREAD && MAXMDIM >= 4
    struct discovery {
    fpattern experiment;
    std::shared_ptr<std::thread> discoverer;
    std::mutex lock;
    std::condition_variable cv;
    bool is_suspended;
    bool stop_it;
    
    map<unsigned, tuple<int, int, matrix, matrix, matrix, int> > hashes_found;
    discovery() : experiment(0) { is_suspended = false; stop_it = false; experiment.dis = this; experiment.Prime = experiment.Field = experiment.wsquare = 0; }
    
    void activate();
    void suspend();
    void check_suspend();
    void schedule_destruction();
    void discovered();
    ~discovery();
    };
    #endif
    
#line 761 "fieldpattern.cpp"
    extern int triplet_id;
#line 1227 "fieldpattern.cpp"
    void info();
#line 1259 "fieldpattern.cpp"
    extern fpattern current_quotient_field;
#line 1260 "fieldpattern.cpp"
    extern fpattern fp_invalid;
#line 1261 "fieldpattern.cpp"
    extern bool quotient_field_changed;
#line 1266 "fieldpattern.cpp"
    struct fpattern& getcurrfp();
#line 1401 "fieldpattern.cpp"
    extern int subpathid;
#line 1402 "fieldpattern.cpp"
    extern int subpathorder;
#line 1406 "fieldpattern.cpp"
    extern vector<fgeomextra> fgeomextras;
#line 1420 "fieldpattern.cpp"
    extern int current_extra;
#line 1422 "fieldpattern.cpp"
    void nextPrime(fgeomextra& ex);
#line 1444 "fieldpattern.cpp"
    void nextPrimes(fgeomextra& ex);
#line 1449 "fieldpattern.cpp"
    void enableFieldChange();
#line 1464 "fieldpattern.cpp"
    void field_from_current();
    #if CAP_THREAD && MAXMDIM >= 4
#line 1479 "fieldpattern.cpp"
    extern map<string, discovery> discoveries;
    #endif
#line 1540 "fieldpattern.cpp"
    extern purehookset hooks_on_geometry_change;
#line 1542 "fieldpattern.cpp"
    int field_celldistance(cell *c1, cell *c2);
    }
#line 1555 "fieldpattern.cpp"
  int currfp_gmul(int a, int b);
#line 1556 "fieldpattern.cpp"
  int currfp_inverses(int i);
#line 1557 "fieldpattern.cpp"
  int currfp_distwall(int i);
#line 1558 "fieldpattern.cpp"
  int currfp_n();
#line 1559 "fieldpattern.cpp"
  int currfp_get_R();
#line 1560 "fieldpattern.cpp"
  int currfp_get_P();
#line 1561 "fieldpattern.cpp"
  int currfp_get_X();
#line 1563 "fieldpattern.cpp"
  void hread_fpattern(hstream& hs, fieldpattern::fpattern& fp);
#line 1575 "fieldpattern.cpp"
  void hwrite_fpattern(hstream& hs, fieldpattern::fpattern& fp);
  #endif

  // implemented in: flags.cpp

#line 13 "flags.cpp"
  const inline flagtype& classflag(eItem it) { return iinf[it].flags; }
  const inline flagtype& classflag(eWall w) { return winf[w].flags; }
  const inline flagtype& classflag(eMonster m) { return minf[m].flags; }
  const inline flagtype& classflag(eLand l) { return linf[l].flags; }
  
  #define ANYFLAGCHECK(name, cond, field, enum) inline bool name(enum w) { flagtype flag = classflag(w); return cond; } inline bool name(cell *c) { return name(c->field); }
  
  #define MONFLAGCHECK(name, cond) ANYFLAGCHECK(name, cond, monst, eMonster)
  #define WALLFLAGCHECK(name, cond) ANYFLAGCHECK(name, cond, wall, eWall)
  #define ITEMFLAGCHECK(name, cond) ANYFLAGCHECK(name, cond, item, eItem)
  #define LANDFLAGCHECK(name, cond) ANYFLAGCHECK(name, cond, land, eLand)
  
  WALLFLAGCHECK(isWatery, flag & WF_WATER)
  WALLFLAGCHECK(isBoat, flag & WF_BOAT)
  WALLFLAGCHECK(isChasmy, flag & WF_CHASM)
  WALLFLAGCHECK(isWateryOrBoat, (flag & WF_WATER) || w == waBoat)
  WALLFLAGCHECK(isNoFlight, flag & WF_NOFLIGHT)
  WALLFLAGCHECK(isFire, flag & WF_FIRE)
  WALLFLAGCHECK(isThumper, flag & WF_THUMPER)
  WALLFLAGCHECK(isActivable, flag & WF_ACTIVABLE)
  WALLFLAGCHECK(hasTimeout, flag & WF_TIMEOUT)
  WALLFLAGCHECK(isOnCIsland, flag & WF_CISLAND)
  WALLFLAGCHECK(cellHalfvine, flag & WF_HALFVINE)
  WALLFLAGCHECK(isAlch, flag & WF_ALCHEMY)
  WALLFLAGCHECK(isAlchAny, flag & WF_ALCHEMY)
  WALLFLAGCHECK(realred, flag & WF_RED)
  WALLFLAGCHECK(isWall, flag & WF_WALL)
  WALLFLAGCHECK(isPushable, flag & WF_PUSHABLE)
  WALLFLAGCHECK(conegraphtype, flag & WF_CONE)
  WALLFLAGCHECK(isStandardTree, flag & WF_STDTREE)
  WALLFLAGCHECK(isGrave, flag & WF_GRAVE)
  WALLFLAGCHECK(isReptile, flag & WF_REPTILE)
  WALLFLAGCHECK(useHeatColoring, flag & WF_HEATCOLOR)
  WALLFLAGCHECK(isThorny, flag & WF_THORNY)
  WALLFLAGCHECK(isSeal, flag & WF_SEAL)
  
  LANDFLAGCHECK(generateAll, flag & LF_GENERATE_ALL)
  LANDFLAGCHECK(isIcyLand, flag & LF_ICY)
  LANDFLAGCHECK(isGravityLand, flag & LF_GRAVITY)
  LANDFLAGCHECK(isEquidLand, flag & LF_EQUI)
  LANDFLAGCHECK(isWarpedType, flag & LF_WARPED)
  LANDFLAGCHECK(isCyclic, flag & LF_CYCLIC)
  LANDFLAGCHECK(isTechnicalLand, flag & LF_TECHNICAL)
  LANDFLAGCHECK(is_mirrorland, flag & LF_MIRROR)
  LANDFLAGCHECK(isSealand, flag & LF_SEA)
  LANDFLAGCHECK(isCoastal, flag & LF_COASTAL)
  LANDFLAGCHECK(isPureSealand, flag & LF_PURESEA)
  LANDFLAGCHECK(isElemental, flag & LF_ELEMENTAL)
  LANDFLAGCHECK(isHaunted, flag & LF_HAUNTED)
  LANDFLAGCHECK(isTrollLand, flag & LF_TROLL)
  LANDFLAGCHECK(inmirror, flag & LF_INMIRROR)
  LANDFLAGCHECK(inmirrororwall, flag & LF_INMIRRORORWALL)
  LANDFLAGCHECK(isElectricLand, flag & LF_ELECTRIC)
  
  MONFLAGCHECK(isGhostable, !(flag & CF_NOGHOST))
  MONFLAGCHECK(isRaider, flag & CF_RAIDER)
  MONFLAGCHECK(isMimic, flag & CF_MIMIC)
  MONFLAGCHECK(isPrincess, flag & CF_PRINCESS)
  MONFLAGCHECK(isGolemOrKnight, flag & CF_GOK)
  MONFLAGCHECK(isNonliving, flag & CF_NONLIVING)
  MONFLAGCHECK(isMetalBeast, flag & CF_METAL)
  MONFLAGCHECK(isStunnable, flag & CF_STUNNABLE)
  MONFLAGCHECK(hasHitpoints, flag & CF_HP)
  MONFLAGCHECK(isMountable, flag & CF_MOUNTABLE)
  MONFLAGCHECK(isFriendlyType, flag & CF_FRIENDLY)
  MONFLAGCHECK(isFriendlyOrPlayer, flag & (CF_FRIENDLY | CF_PLAYER))
  MONFLAGCHECK(isBug, flag & CF_BUG)
  MONFLAGCHECK(isIvy, flag & CF_IVY)
  MONFLAGCHECK(isMonsterPart, flag & CF_PART)
  MONFLAGCHECK(isMutantIvy, flag & CF_MUTANTIVY)
  MONFLAGCHECK(isAnyIvy, flag & CF_ANYIVY)
  MONFLAGCHECK(isBulletType, flag & CF_BULLET)
  MONFLAGCHECK(isDemon, flag & CF_DEMON)
  MONFLAGCHECK(isWorm, flag & CF_WORM)
  MONFLAGCHECK(isWitch, flag & CF_WITCH)
  MONFLAGCHECK(isAngryBird, (flag & CF_BIRD) && !(flag & CF_FRIENDLY))
  MONFLAGCHECK(isBird, flag & CF_BIRD)
  MONFLAGCHECK(slowMover, flag & CF_SLOWMOVER)
  MONFLAGCHECK(isMagneticPole, flag & CF_MAGNETIC)
  MONFLAGCHECK(isSwitch, flag & CF_SWITCH)
  MONFLAGCHECK(isGhost, flag & CF_GHOST)
  MONFLAGCHECK(isShark, flag & CF_SHARK)
  MONFLAGCHECK(isSlimeMover, flag & CF_SLIME)
  MONFLAGCHECK(isDragon, flag & CF_DRAGON)
  MONFLAGCHECK(isKraken, flag & CF_KRAKEN)
  MONFLAGCHECK(isBlowableMonster, !(flag & CF_NOBLOW))
  MONFLAGCHECK(isMultitile, flag & CF_MULTITILE)
  MONFLAGCHECK(isLeader, flag & CF_LEADER)
  MONFLAGCHECK(isFlyingType, flag & CF_FLYING)
  MONFLAGCHECK(attackThruVine, flag & CF_ATTACK_THRU_VINE)
  MONFLAGCHECK(attackNonAdjacent, flag & CF_ATTACK_NONADJACENT)
  MONFLAGCHECK(noHighlight, flag & CF_NOHIGHLIGHT)
  MONFLAGCHECK(isInactiveEnemyType, flag & CF_INACTIVE)
  MONFLAGCHECK(isUnarmed, flag & CF_UNARMED)
  MONFLAGCHECK(ignoresPlatesType, flag & CF_IGNORE_PLATE)
  MONFLAGCHECK(isBull, flag & CF_BULL)
  MONFLAGCHECK(isTroll, flag & CF_TROLL)
  MONFLAGCHECK(ignoresSmellType, flag & CF_IGNORE_SMELL)
  MONFLAGCHECK(isRatling, flag & CF_RATLING)
  MONFLAGCHECK(isGhostMover, flag & CF_GHOSTMOVER)
  MONFLAGCHECK(isPowerMonster, flag & CF_POWER)
  MONFLAGCHECK(hasFacing, flag & CF_FACING)
  MONFLAGCHECK(isAnt, flag & CF_ANT)
  
  ITEMFLAGCHECK(isElementalShard, flag & IF_SHARD)
  ITEMFLAGCHECK(itemBurns, !(flag & IF_FIREPROOF))
  ITEMFLAGCHECK(isProtectionOrb, flag & IF_PROTECTION)
  ITEMFLAGCHECK(isEmpathyOrb, flag & IF_EMPATHY)
  ITEMFLAGCHECK(isRangedOrb, flag & IF_RANGED)
  ITEMFLAGCHECK(isRevivalOrb, flag & IF_REVIVAL)
#line 129 "flags.cpp"
  bool boatStrandable(cell *c);
#line 135 "flags.cpp"
  bool isFireOrMagma(cell *w);
#line 139 "flags.cpp"
  int mirrorcolor(bool mirrored);
#line 143 "flags.cpp"
  bool isMounted(cell *c);
#line 155 "flags.cpp"
  int itemclass(eItem it);
#line 157 "flags.cpp"
  bool isFriendly(eMonster m);
#line 159 "flags.cpp"
  bool isFriendly(cell *c);
#line 163 "flags.cpp"
  eThreatLevel get_threat_level(cell *c);
#line 171 "flags.cpp"
  bool isFriendlyOrBug(cell *c);
#line 177 "flags.cpp"
  bool cellUnstable(cell *c);
#line 181 "flags.cpp"
  bool cellUnstableOrChasm(cell *c);
#line 187 "flags.cpp"
  eMonster elementalOf(eLand l);
#line 195 "flags.cpp"
  eItem localshardof(eLand l);
#line 199 "flags.cpp"
  int snakelevel(cell *c);
#line 208 "flags.cpp"
  eSlimegroup slimegroup(cell *c);
#line 212 "flags.cpp"
  bool isFlying(eMonster m);
#line 216 "flags.cpp"
  bool survivesChasm(eMonster m);
#line 220 "flags.cpp"
  bool ignoresPlates(eMonster m);
#line 224 "flags.cpp"
  bool isInactiveEnemy(cell *w, eMonster forwho);
#line 236 "flags.cpp"
  bool isActiveEnemy(cell *w, eMonster forwho);
#line 246 "flags.cpp"
  bool isArmedEnemy(cell *w, eMonster forwho);
#line 250 "flags.cpp"
  bool eternalFire(cell *c);
#line 255 "flags.cpp"
  bool haveRangedOrb();
#line 265 "flags.cpp"
  bool isFriendlyGhost(eMonster m);
#line 269 "flags.cpp"
  bool isGhostAether(eMonster m);
#line 273 "flags.cpp"
  bool survivesWater(eMonster m);
#line 286 "flags.cpp"
  bool survivesPoison(eMonster m, eWall p);
#line 293 "flags.cpp"
  bool isPermanentFlying(eMonster m);
#line 297 "flags.cpp"
  bool isLuckyLand(eLand l);
#line 301 "flags.cpp"
  bool survivesFire(eMonster m);
#line 309 "flags.cpp"
  bool survivesWall(eMonster m);
#line 313 "flags.cpp"
  bool survivesThorns(eMonster m);
#line 317 "flags.cpp"
  bool survivesFall(eMonster m);
#line 321 "flags.cpp"
  bool checkOrb(eMonster m1, eItem orb);
#line 327 "flags.cpp"
  bool checkOrb2(eMonster m1, eItem orb);
#line 333 "flags.cpp"
  bool ignoresSmell(eMonster m);
#line 337 "flags.cpp"
  bool highwall(cell *c);
#line 348 "flags.cpp"
  int chasmgraph(cell *c);
#line 358 "flags.cpp"
  bool conegraph(cell *c);
#line 363 "flags.cpp"
  eItem frog_power(eMonster m);
#line 370 "flags.cpp"
  bool hornStuns(cell *c);
#line 381 "flags.cpp"
  bool do_not_touch_this_wall(cell *c);
#line 385 "flags.cpp"
  bool is_paired(eMonster m);
#line 389 "flags.cpp"
  bool isDie(eMonster m);
#line 393 "flags.cpp"
  bool isDie(eWall w);

  // implemented in: game.cpp

#line 19 "game.cpp"
  extern std::mt19937 hrngen;
#line 22 "game.cpp"
  void shrand(int i);
#line 27 "game.cpp"
  int hrandpos();
#line 35 "game.cpp"
  int hrand(int i);
#line 45 "game.cpp"
  template<class T, class... U> T pick(T x, U... u) { std::initializer_list<T> i = {x,u...}; return *(i.begin() + hrand(1+sizeof...(u))); }
  template<class T> void hrandom_shuffle(T* x, int n) { for(int k=1; k<n; k++) swap(x[k], x[hrand(k+1)]); }
  template<class T> void hrandom_shuffle(T& container) { hrandom_shuffle(container.data(), isize(container)); }
  template<class U> auto hrand_elt(U& container) -> decltype(container[0]) { return container[hrand(isize(container))]; }
  template<class T, class U> T hrand_elt(U& container, T default_value) { 
  if(container.empty()) return default_value; 
  return container[hrand(isize(container))]; 
  }
#line 55 "game.cpp"
  vector<int> hrandom_permutation(int qty);
#line 65 "game.cpp"
  ld hrandf();
#line 71 "game.cpp"
  int hrandstate();
#line 76 "game.cpp"
  extern int lastsafety;
#line 78 "game.cpp"
  extern bool usedSafety;
#line 79 "game.cpp"
  extern eLand safetyland;
#line 80 "game.cpp"
  extern int safetyseed;
#line 82 "game.cpp"
  extern bool childbug;
#line 85 "game.cpp"
  bool isChild(cell *w, cell *killed);
#line 106 "game.cpp"
  eMonster active_switch();
#line 110 "game.cpp"
  extern vector<cell*> crush_now, crush_next;
#line 112 "game.cpp"
  int getDistLimit();
#line 114 "game.cpp"
  extern void activateFlashFrom(cell *cf, eMonster who, flagtype flags);
#line 116 "game.cpp"
  bool saved_tortoise_on(cell *c);
#line 122 "game.cpp"
  bool normal_gravity_at(cell *c);
#line 126 "game.cpp"
  int countMyGolems(eMonster m);
#line 135 "game.cpp"
  int savePrincesses();
#line 144 "game.cpp"
  int countMyGolemsHP(eMonster m);
#line 153 "game.cpp"
  void restoreGolems(int qty, eMonster m, int hp IS(0));
#line 168 "game.cpp"
  extern cellwalker recallCell;
#line 169 "game.cpp"
  extern display_data recallDisplay;
#line 171 "game.cpp"
  bool activateRecall();
#line 214 "game.cpp"
  void saveRecall(cellwalker cw2);
#line 222 "game.cpp"
  void teleportToLand(eLand l, bool make_it_safe);
#line 260 "game.cpp"
  void activateSafety(eLand l);
#line 271 "game.cpp"
  void placeGolem(cell *on, cell *moveto, eMonster m);
#line 303 "game.cpp"
  bool multiRevival(cell *on, cell *moveto);
#line 325 "game.cpp"
  extern eMonster passive_switch;
#line 327 "game.cpp"
  void checkSwitch();
#line 331 "game.cpp"
  void pushThumper(const movei& mi);
#line 417 "game.cpp"
  bool canPushThumperOn(movei mi, cell *player);
#line 436 "game.cpp"
  void activateActiv(cell *c, bool msg);
#line 456 "game.cpp"
  void fixWormBug(cell *c);
#line 464 "game.cpp"
  bool isWormhead(eMonster m);
#line 470 "game.cpp"
  cell *worm_tohead(cell *c);
#line 477 "game.cpp"
  cell *wormhead(cell *c);
#line 493 "game.cpp"
  bool sameMonster(cell *c1, cell *c2);
#line 503 "game.cpp"
  eMonster haveMount();
#line 511 "game.cpp"
  eMonster otherpole(eMonster m);

  // implemented in: geom-exp.cpp

#line 139 "geom-exp.cpp"
  extern string bitruncnames[5];
#line 150 "geom-exp.cpp"
  extern bool showquotients;
#line 154 "geom-exp.cpp"
  void ge_land_selection();
#line 241 "geom-exp.cpp"
  void activate_ge_land_selection();
#line 248 "geom-exp.cpp"
  struct geometry_filter {
  string name;
  /** test if the current geometry matches the filter */
  function<bool()> test; 
  };
#line 255 "geom-exp.cpp"
  extern geometry_filter *current_filter;
#line 259 "geom-exp.cpp"
  extern geometry_filter gf_hyperbolic;
#line 260 "geom-exp.cpp"
  extern geometry_filter gf_spherical;
#line 261 "geom-exp.cpp"
  extern geometry_filter gf_euclidean;
#line 262 "geom-exp.cpp"
  extern geometry_filter gf_other;
#line 263 "geom-exp.cpp"
  extern geometry_filter gf_regular_2d;
#line 266 "geom-exp.cpp"
  extern geometry_filter gf_regular_3d;
#line 270 "geom-exp.cpp"
  extern geometry_filter gf_quotient;
#line 274 "geom-exp.cpp"
  extern vector<geometry_filter*> available_filters;
#line 418 "geom-exp.cpp"
  string current_proj_name();
#line 442 "geom-exp.cpp"
  string dim_name();
  #if CAP_THREAD && MAXMDIM >= 4
#line 447 "geom-exp.cpp"
  void showQuotientConfig3();
  #endif
#line 506 "geom-exp.cpp"
  string geometry_name();
#line 547 "geom-exp.cpp"
  void select_quotient_screen();
#line 594 "geom-exp.cpp"
  void select_quotient();
#line 630 "geom-exp.cpp"
  string full_geometry_name();
#line 660 "geom-exp.cpp"
  void menuitem_change_variation(char key);
#line 665 "geom-exp.cpp"
  void menuitem_change_geometry(char key);
#line 670 "geom-exp.cpp"
  void menuitem_projection(char key);
#line 675 "geom-exp.cpp"
  void menuitem_binary_width(char key);
#line 690 "geom-exp.cpp"
  void menuitem_nilwidth(char key);
#line 699 "geom-exp.cpp"
  void edit_stretch();
#line 711 "geom-exp.cpp"
  void showEuclideanMenu();
#line 1122 "geom-exp.cpp"
  void runGeometryExperiments();
  #if CAP_COMMANDLINE
#line 1130 "geom-exp.cpp"
  eGeometry readGeo(const string& ss);
#line 1142 "geom-exp.cpp"
  void field_quotient_3d(int p, unsigned hash);
#line 1155 "geom-exp.cpp"
  void field_quotient_2d(int group, int id, int triplet);
  #endif

  // implemented in: geometry2.cpp

#line 13 "geometry2.cpp"
  void fixelliptic(transmatrix& at);
#line 20 "geometry2.cpp"
  void fixelliptic(hyperpoint& h);
#line 26 "geometry2.cpp"
  transmatrix relative_matrix_recursive(heptagon *h2, heptagon *h1);
#line 88 "geometry2.cpp"
  transmatrix calc_relative_matrix(cell *c2, cell *c1, const hyperpoint& hint);
#line 112 "geometry2.cpp"
  transmatrix relative_matrix_via_masters(cell *c2, cell *c1, const hyperpoint& hint);
#line 201 "geometry2.cpp"
  shiftmatrix &ggmatrix(cell *c);
#line 211 "geometry2.cpp"
  struct horo_distance {
  ld a, b;
  
  void become(hyperpoint h1);
  horo_distance(hyperpoint h) { become(h); }
  horo_distance(shiftpoint h1, const shiftmatrix& T);
  bool operator < (const horo_distance z) const;
  friend void print(hstream& hs, horo_distance x) { print(hs, "[", x.a, ":", x.b, "]"); }
  };
#line 355 "geometry2.cpp"
  void virtualRebase(cell*& base, transmatrix& at);
#line 359 "geometry2.cpp"
  void virtualRebase(cell*& base, hyperpoint& h);
#line 402 "geometry2.cpp"
  bool no_easy_spin();
#line 423 "geometry2.cpp"
  transmatrix ddspin(cell *c, int d, ld bonus IS(0));
#line 424 "geometry2.cpp"
  transmatrix iddspin(cell *c, int d, ld bonus IS(0));
#line 425 "geometry2.cpp"
  ld cellgfxdist(cell *c, int d);
#line 427 "geometry2.cpp"
  transmatrix ddspin_side(cell *c, int d, ld bonus IS(0));
#line 437 "geometry2.cpp"
  transmatrix iddspin_side(cell *c, int d, ld bonus IS(0));
#line 503 "geometry2.cpp"
  double randd();
#line 505 "geometry2.cpp"
  hyperpoint randomPointIn(int t);
#line 525 "geometry2.cpp"
  hyperpoint get_corner_position(cell *c, int cid, ld cf IS(3));
#line 551 "geometry2.cpp"
  extern bool approx_nearcorner;
#line 555 "geometry2.cpp"
  hyperpoint nearcorner(cell *c, int i);
#line 652 "geometry2.cpp"
  hyperpoint farcorner(cell *c, int i, int which);
#line 720 "geometry2.cpp"
  hyperpoint midcorner(cell *c, int i, ld v);
#line 726 "geometry2.cpp"
  hyperpoint get_warp_corner(cell *c, int cid);
#line 737 "geometry2.cpp"
  extern map<cell*, map<cell*, vector<transmatrix>>> brm_structure;
#line 739 "geometry2.cpp"
  void generate_brm(cell *c1);
#line 795 "geometry2.cpp"
  const transmatrix& brm_get(cell *c1, hyperpoint h1, cell *c2, hyperpoint h2);
#line 811 "geometry2.cpp"
  bool exhaustive_distance_appropriate();
#line 826 "geometry2.cpp"
  struct pathgen {
  cellwalker start;
  cellwalker last;
  vector<cell*> path;
  bignum full_id_0;
  int last_id;
  };
#line 835 "geometry2.cpp"
  pathgen generate_random_path_randomdir(cellwalker start, int length, bool for_yendor);
#line 840 "geometry2.cpp"
  pathgen generate_random_path(cellwalker start, int length, bool for_yendor, bool randomdir);

  // implemented in: glhr.cpp

#line 14 "glhr.cpp"
  extern bool detailed_shader;
  namespace glhr {
#line 17 "glhr.cpp"
    glvertex pointtogl(const hyperpoint& t);
#line 24 "glhr.cpp"
    hyperpoint gltopoint(const glvertex& t);
    #if CAP_SHADER
#line 32 "glhr.cpp"
    extern bool noshaders;
    #endif
    #if !CAP_SHADER
#line 35 "glhr.cpp"
    extern bool noshaders;
    #endif
#line 39 "glhr.cpp"
    inline glvertex makevertex(GLfloat x, GLfloat y, GLfloat z) {
    #if SHDIM == 3
    return make_array(x, y, z);
    #else
    return make_array<GLfloat>(x, y, z, 1);
    #endif
    }
    }
  #if CAP_GL
#line 57 "glhr.cpp"
  void glError(const char* GLcall, const char* file, const int line);
#line 65 "glhr.cpp"
  struct glwrap {
  const char* msg;
  int line;
  void act(const char *when);
  glwrap(const char *m, int l) : msg(m), line(l) { act("before"); }
  ~glwrap() { act("after"); }
  };
  #define GLWRAP glwrap w##__line(__FILE__, __LINE__)
#line 83 "glhr.cpp"
  #if CAP_SHADER && CAP_NOSHADER
  #define WITHSHADER(x, y) if(glhr::noshaders) y else x
  #else
  #if CAP_NOSHADER
  #define WITHSHADER(x, y) if(1) y
  #else
  #define WITHSHADER(x, y) if(1) x
  #endif
  #endif
  namespace glhr {
#line 96 "glhr.cpp"
    string to_glsl(ld x);
#line 103 "glhr.cpp"
    struct glmatrix {
    GLfloat a[4][4];
    GLfloat* operator[] (int i) { return a[i]; }
    const GLfloat* operator[] (int i) const { return a[i]; }
    GLfloat* as_array() { return a[0]; }
    const GLfloat* as_array() const { return a[0]; }
    array<float, 16>& as_stdarray() { return *(array<float, 16>*)this; }
    const array<float, 16>& as_stdarray() const { return *(array<float, 16>*)this; }
    };
    
    struct colored_vertex {
    glvertex coords;
    glvec4 color;
    colored_vertex() {}
    colored_vertex(GLfloat x, GLfloat y, GLfloat r, GLfloat g, GLfloat b) {
    coords[0] = x;
    coords[1] = y;
    coords[2] = 0;
    coords[3] = 1;
    color[0] = r;
    color[1] = g;
    color[2] = b;
    color[3] = 1;
    }
    colored_vertex(hyperpoint h, color_t col) {
    coords = pointtogl(h);
    for(int i=0; i<4; i++)
    color[i] = part(col, 3-i) / 255.0;
    }
    };
    
    struct textured_vertex {
    glvertex coords;
    /* texture uses the 'z' for shading with POLY_SHADE_TEXTURE */
    glvec3 texture;
    };
    
    struct ct_vertex {
    glvertex coords;
    glvec4 color;
    glvec2 texture;
    ct_vertex() {}
    ct_vertex(const hyperpoint& h, ld x1, ld y1, ld col) {
    coords = pointtogl(h);
    texture[0] = x1;
    texture[1] = y1;
    color[0] = color[1] = color[2] = col;
    color[3] = 1;
    }
    };  
    
#line 162 "glhr.cpp"
    typedef const void *constvoidptr;
#line 165 "glhr.cpp"
    extern constvoidptr current_vertices, buffered_vertices;
#line 166 "glhr.cpp"
    extern ld current_linewidth;
#line 179 "glhr.cpp"
    glmatrix operator * (glmatrix m1, glmatrix m2);
#line 190 "glhr.cpp"
    extern glmatrix id;
#line 192 "glhr.cpp"
    glmatrix scale(ld x, ld y, ld z);
#line 203 "glhr.cpp"
    glmatrix tmtogl(const transmatrix& T);
#line 211 "glhr.cpp"
    glmatrix tmtogl_transpose(const transmatrix& T);
#line 219 "glhr.cpp"
    glmatrix tmtogl_transpose3(const transmatrix& T);
#line 231 "glhr.cpp"
    glmatrix ortho(ld x, ld y, ld z);
#line 235 "glhr.cpp"
    glmatrix& as_glmatrix(GLfloat o[16]);
#line 241 "glhr.cpp"
    constexpr ld vnear_default = 1e-3;
    constexpr ld vfar_default = 1e9;
#line 245 "glhr.cpp"
    glmatrix frustum(ld x, ld y, ld vnear IS(vnear_default), ld vfar IS(vfar_default));
#line 254 "glhr.cpp"
    glmatrix translate(ld x, ld y, ld z);
#line 271 "glhr.cpp"
    void new_projection();
#line 283 "glhr.cpp"
    void projection_multiply(const glmatrix& m);
#line 292 "glhr.cpp"
    extern void init();
#line 295 "glhr.cpp"
    struct GLprogram {
    GLuint _program;
    GLuint vertShader, fragShader;
    
    GLint uFog, uFogColor, uColor, tTexture, tInvExpTable, tAirMap, uMV, uProjection, uAlpha, uFogBase, uPP;
    GLint uPRECX, uPRECY, uPRECZ, uIndexSL, uIterations, uLevelLines, uSV, uRadarTransform;
    GLint uRotSin, uRotCos, uRotNil;
    GLint uDepthScaling, uCamera, uDepth;
    
    flagtype shader_flags;
    
    string _vsh, _fsh;
    
    GLprogram(string vsh, string fsh);
    
    ~GLprogram();
    };
#line 314 "glhr.cpp"
    extern shared_ptr<GLprogram> current_glprogram;
#line 316 "glhr.cpp"
    extern bool debug_gl;
#line 318 "glhr.cpp"
    int compileShader(int type, const string& s);
#line 460 "glhr.cpp"
    void set_index_sl(ld x);
#line 464 "glhr.cpp"
    void set_sv(ld x);
#line 468 "glhr.cpp"
    void set_sl_iterations(int steps);
#line 472 "glhr.cpp"
    void set_solv_prec(int x, int y, int z);
#line 479 "glhr.cpp"
    extern glmatrix current_matrix, current_modelview, current_projection;
#line 492 "glhr.cpp"
    extern glmatrix eyeshift;
#line 493 "glhr.cpp"
    extern bool using_eyeshift;
#line 495 "glhr.cpp"
    void set_modelview(const glmatrix& modelview);
#line 527 "glhr.cpp"
    void id_modelview();
#line 538 "glhr.cpp"
    array<GLfloat, 4> acolor(color_t color, ld scale IS(1));
#line 546 "glhr.cpp"
    void color2(color_t color, ld scale IS(1));
#line 558 "glhr.cpp"
    void colorClear(color_t color);
#line 562 "glhr.cpp"
    void full_enable(shared_ptr<GLprogram> p);
#line 665 "glhr.cpp"
    void fog_max(ld fogmax, color_t fogcolor);
#line 680 "glhr.cpp"
    void set_fogbase(ld _fogbase);
#line 689 "glhr.cpp"
    void set_ualpha(ld alpha);
    #if CAP_VERTEXBUFFER
#line 742 "glhr.cpp"
    void bindbuffer_vertex(vector<glvertex>& v);
    #endif
#line 748 "glhr.cpp"
    void vertices(const vector<glvertex>& v, int vshift IS(0));
#line 769 "glhr.cpp"
    void vertices_texture(const vector<glvertex>& v, const vector<glvertex>& t, int vshift IS(0), int tshift IS(0));
#line 788 "glhr.cpp"
    void vertices_texture_color(const vector<glvertex>& v, const vector<glvertex>& t, const vector<glvertex>& c, int vshift IS(0), int tshift IS(0));
#line 814 "glhr.cpp"
    void prepare(vector<colored_vertex>& v);
#line 832 "glhr.cpp"
    void prepare(vector<textured_vertex>& v);
#line 851 "glhr.cpp"
    void prepare(vector<ct_vertex>& v);
#line 872 "glhr.cpp"
    void store_in_buffer(vector<glvertex>& v);
#line 887 "glhr.cpp"
    void set_depthtest(bool b);
#line 896 "glhr.cpp"
    void set_depthwrite(bool b);
#line 904 "glhr.cpp"
    void set_linewidth(ld lw);
#line 911 "glhr.cpp"
    void switch_to_text(const vector<glvertex>& v, const vector<glvertex>& t);
#line 918 "glhr.cpp"
    void be_nontextured();
#line 919 "glhr.cpp"
    void be_textured();
#line 920 "glhr.cpp"
    void be_color_textured();
    }
#line 924 "glhr.cpp"
  extern vector<glhr::textured_vertex> text_vertices;
#line 926 "glhr.cpp"
  void texture_vertices(GLfloat *f, int qty, int stride IS(2));
#line 933 "glhr.cpp"
  void oldvertices(GLfloat *f, int qty);
  #endif

  // implemented in: help.cpp

#line 11 "help.cpp"
  extern string help;
#line 13 "help.cpp"
  extern function<void()> help_delegate;
#line 16 "help.cpp"
  struct help_extension {
  char key;
  string text;
  string subtext;
  color_t color;
  reaction_t action;
  help_extension() { color = forecolor; }
  help_extension(char k, string t, reaction_t a) : key(k), text(t), action(a) { color = forecolor; }
  };
#line 27 "help.cpp"
  extern vector<help_extension> help_extensions;
#line 213 "help.cpp"
  string standard_help();
#line 217 "help.cpp"
  void buildCredits();
#line 265 "help.cpp"
  string helptitle(string s, color_t col);
#line 337 "help.cpp"
  string generateHelpForItem(eItem it);
#line 552 "help.cpp"
  string generateHelpForWall(eWall w);
#line 572 "help.cpp"
  string generateHelpForMonster(eMonster m);
#line 693 "help.cpp"
  string generateHelpForLand(eLand l);
#line 787 "help.cpp"
  extern bool instat;
#line 795 "help.cpp"
  string bygen(reaction_t h);
#line 814 "help.cpp"
  void appendHelp(string s);
#line 825 "help.cpp"
  extern hookset<void(cell*)> hooks_mouseover;
#line 831 "help.cpp"
  void describeMouseover();
#line 1061 "help.cpp"
  void showHelp();
#line 1114 "help.cpp"
  extern hookset<bool()> hooks_default_help;
#line 1116 "help.cpp"
  void gotoHelp(const string& h);
#line 1145 "help.cpp"
  void subhelp(const string& h);
#line 1158 "help.cpp"
  void gotoHelpFor(eLand l);

  // implemented in: heptagon.cpp

#line 27 "heptagon.cpp"
  hstate transition(hstate s, int dir);
#line 72 "heptagon.cpp"
  heptagon *buildHeptagon1(heptagon *h, heptagon *parent, int d, hstate s, int pard IS(0));
#line 80 "heptagon.cpp"
  heptagon *init_heptagon(int type);
#line 257 "heptagon.cpp"
  extern hookset<void(heptagon*, int)> hooks_createStep;

  // implemented in: history.cpp

  namespace history {
#line 166 "history.cpp"
    void progress_screen();
#line 171 "history.cpp"
    void progress(string str);
#line 183 "history.cpp"
    extern bool on;
#line 184 "history.cpp"
    extern vector<shmup::monster*> v;
#line 186 "history.cpp"
    extern double phase;
#line 188 "history.cpp"
    extern vector<pair<cell*, eMonster> > killhistory;
#line 189 "history.cpp"
    extern vector<pair<cell*, eItem> > findhistory;
#line 190 "history.cpp"
    extern vector<cell*> movehistory;
#line 192 "history.cpp"
    extern bool includeHistory;
#line 193 "history.cpp"
    extern ld lvspeed;
#line 194 "history.cpp"
    extern int bandhalf;
#line 195 "history.cpp"
    extern int bandsegment;
#line 197 "history.cpp"
    extern int saved_ends;
#line 199 "history.cpp"
    extern cell* first_center_at;
#line 200 "history.cpp"
    extern transmatrix first_center_view;
#line 202 "history.cpp"
    void save_end();
#line 232 "history.cpp"
    extern bool autoband;
#line 233 "history.cpp"
    extern bool autobandhistory;
#line 234 "history.cpp"
    extern bool dospiral;
#line 236 "history.cpp"
    extern ld extra_line_steps;
#line 238 "history.cpp"
    extern vector<cell*> path_for_lineanimation;
#line 240 "history.cpp"
    void clear();
#line 247 "history.cpp"
    void smoothen_line();
#line 278 "history.cpp"
    void create(cell *start, cell *target, transmatrix last);
#line 311 "history.cpp"
    void create_playerpath();
#line 315 "history.cpp"
    void create_recenter_to_view(bool precise);
#line 320 "history.cpp"
    void movetophase();
#line 364 "history.cpp"
    void apply();
    #if CAP_SDL
#line 409 "history.cpp"
    void createImage(const string& name_format, bool dospiral);
#line 529 "history.cpp"
    void open_filedialog_to_create_image(bool ds);
    #endif
#line 539 "history.cpp"
    bool band_renderable_now();
#line 543 "history.cpp"
    void history_menu();
#line 656 "history.cpp"
    extern set<cell*> inmovehistory, inkillhistory, infindhistory;
#line 658 "history.cpp"
    void restore();
#line 680 "history.cpp"
    void restoreBack();
#line 695 "history.cpp"
    void renderAutoband();
    }

  // implemented in: hud.cpp

#line 11 "hud.cpp"
  extern purehookset hooks_stats;
#line 13 "hud.cpp"
  int monsterclass(eMonster m);
#line 19 "hud.cpp"
  int glyphclass(int i);
#line 30 "hud.cpp"
  int subclass(int i);
#line 50 "hud.cpp"
  enum eGlyphsortorder {
  gsoFirstTop, gsoFirstBottom,
  gsoLastTop, gsoLastBottom,
  gsoLand, gsoValue,
  gsoMAX
  };
#line 58 "hud.cpp"
  extern eGlyphsortorder glyphsortorder;
#line 100 "hud.cpp"
  void preparesort();
#line 176 "hud.cpp"
  bool graphglyph(bool isMonster);
#line 332 "hud.cpp"
  extern bool nohud, nomenukey, nomsg;
#line 334 "hud.cpp"
  extern hookset<bool()> hooks_prestats;
#line 377 "hud.cpp"
  extern bool nofps;
#line 379 "hud.cpp"
  extern color_t crosshair_color;
#line 380 "hud.cpp"
  extern ld crosshair_size;
#line 382 "hud.cpp"
  extern bool long_kills;
#line 385 "hud.cpp"
  int hud_margin(int side);
#line 392 "hud.cpp"
  void draw_crosshair();
#line 409 "hud.cpp"
  void drawStats();

  // implemented in: hyper-main.cpp

#line 32 "hyper-main.cpp"
  extern hookset<bool(int argc, char** argv)> hooks_main;
#line 34 "hyper-main.cpp"
  int hyper_main(int argc, char **argv);

  // implemented in: hyperweb.cpp

#line 75 "hyperweb.cpp"
  void offer_download(string sfilename, string smimetype);
#line 108 "hyperweb.cpp"
  void offer_choose_file(reaction_t r);
#line 214 "hyperweb.cpp"
  void get_canvas_size();
#line 243 "hyperweb.cpp"
  void initweb();
#line 264 "hyperweb.cpp"
  void emscripten_get_commandline();

  // implemented in: hypgraph.cpp

#line 15 "hypgraph.cpp"
  inline bool sphereflipped() { return sphere && pconf.alpha > 1.1; }
#line 24 "hypgraph.cpp"
  void camrotate(ld& hx, ld& hy);
#line 32 "hypgraph.cpp"
  bool non_spatial_model();
#line 44 "hypgraph.cpp"
  hyperpoint perspective_to_space(hyperpoint h, ld alpha IS(pconf.alpha), eGeometryClass gc IS(ginf[geometry].cclass));
#line 79 "hypgraph.cpp"
  hyperpoint space_to_perspective(hyperpoint z, ld alpha IS(pconf.alpha));
#line 92 "hypgraph.cpp"
  hyperpoint pointable();
#line 98 "hypgraph.cpp"
  shiftmatrix minimize_point_value(shiftmatrix T, function<ld(const shiftmatrix&)> value);
#line 121 "hypgraph.cpp"
  shiftpoint find_on_screen(hyperpoint hxy, const shiftmatrix& T);
#line 131 "hypgraph.cpp"
  shiftpoint gethyper(ld x, ld y);
#line 230 "hypgraph.cpp"
  ld atan2(hyperpoint h);
#line 371 "hypgraph.cpp"
  ld signed_sqrt(ld x);
#line 373 "hypgraph.cpp"
  extern int axial_x, axial_y;
#line 375 "hypgraph.cpp"
  void apply_perspective(const hyperpoint& H, hyperpoint& ret);
#line 384 "hypgraph.cpp"
  void apply_nil_rotation(hyperpoint& H);
#line 393 "hypgraph.cpp"
  void applymodel(shiftpoint H_orig, hyperpoint& ret);
#line 397 "hypgraph.cpp"
  void vr_sphere(hyperpoint& ret, hyperpoint& H, eModel md);
  #if MAXMDIM >= 4
#line 439 "hypgraph.cpp"
  void threepoint_projection(const hyperpoint& H, hyperpoint& ret);
  #endif
#line 496 "hypgraph.cpp"
  void apply_other_model(shiftpoint H_orig, hyperpoint& ret, eModel md);
#line 1349 "hypgraph.cpp"
  extern transmatrix sphereflip; // on the sphere, flip
#line 1350 "hypgraph.cpp"
  extern bool playerfound; // has player been found in the last drawing?
#line 1352 "hypgraph.cpp"
  bool outofmap(hyperpoint h);
#line 1363 "hypgraph.cpp"
  hyperpoint mirrorif(const hyperpoint& V, bool b);
#line 1368 "hypgraph.cpp"
  shiftmatrix mirrorif(const shiftmatrix& V, bool b);
#line 1374 "hypgraph.cpp"
  int away(const transmatrix& V2);
#line 1385 "hypgraph.cpp"
  double zgrad0(double l1, double l2, int nom, int den);
#line 1390 "hypgraph.cpp"
  bool behindsphere(const hyperpoint& h);
#line 1412 "hypgraph.cpp"
  ld spherity(const hyperpoint& h);
#line 1426 "hypgraph.cpp"
  bool behindsphere(const transmatrix& V);
#line 1430 "hypgraph.cpp"
  bool behindsphere(const shiftmatrix& V);
#line 1434 "hypgraph.cpp"
  ld spherity(const transmatrix& V);
#line 1438 "hypgraph.cpp"
  bool confusingGeometry();
#line 1445 "hypgraph.cpp"
  ld master_to_c7_angle();
#line 1455 "hypgraph.cpp"
  transmatrix actualV(const heptspin& hs, const transmatrix& V);
#line 1472 "hypgraph.cpp"
  shiftmatrix actualV(const heptspin& hs, const shiftmatrix& V);
#line 1476 "hypgraph.cpp"
  bool point_behind(const shiftpoint h);
#line 1490 "hypgraph.cpp"
  bool invalid_matrix(const transmatrix T);
#line 1502 "hypgraph.cpp"
  bool invalid_point(const hyperpoint h);
#line 1506 "hypgraph.cpp"
  bool invalid_point(const shiftpoint h);
#line 1508 "hypgraph.cpp"
  bool in_smart_range(const shiftmatrix& T);
#line 1640 "hypgraph.cpp"
  bool drawcell_subs(cell *c, const shiftmatrix& V);
#line 1777 "hypgraph.cpp"
  bool keep_vertical();
#line 1784 "hypgraph.cpp"
  hyperpoint vertical_vector();
#line 1795 "hypgraph.cpp"
  extern bool down_is_forward;
#line 1797 "hypgraph.cpp"
  void spinEdge(ld aspd);
#line 1881 "hypgraph.cpp"
  transmatrix back_to_view(const shiftmatrix& V);
#line 1887 "hypgraph.cpp"
  void fix_whichcopy(cell *c);
#line 1899 "hypgraph.cpp"
  void centerpc(ld aspd);
#line 1991 "hypgraph.cpp"
  extern transmatrix oView;
#line 1993 "hypgraph.cpp"
  extern purehookset hooks_preoptimize, hooks_postoptimize;
#line 1995 "hypgraph.cpp"
  void optimizeview();
#line 2050 "hypgraph.cpp"
  void resetview();
#line 2098 "hypgraph.cpp"
  void panning(shiftpoint hf0, shiftpoint ht0);
#line 2106 "hypgraph.cpp"
  extern int cells_drawn, cells_generated;
#line 2108 "hypgraph.cpp"
  void fullcenter();
#line 2134 "hypgraph.cpp"
  extern int flat_on;
#line 2140 "hypgraph.cpp"
  void enable_flat_model(int val);
#line 2178 "hypgraph.cpp"
  struct flat_model_enabler {
  flat_model_enabler() { enable_flat_model(+1); }
  ~flat_model_enabler() { enable_flat_model(-1); }
  };
#line 2184 "hypgraph.cpp"
  transmatrix atscreenpos(ld x, ld y, ld size);
#line 2233 "hypgraph.cpp"
  extern color_t periodcolor;
#line 2234 "hypgraph.cpp"
  extern color_t ringcolor;
#line 2235 "hypgraph.cpp"
  extern color_t modelcolor;
  #if CAP_QUEUE
#line 2238 "hypgraph.cpp"
  void draw_model_elements();
#line 2387 "hypgraph.cpp"
  void draw_boundary(int w);
  #endif
#line 2612 "hypgraph.cpp"
  void change_shift(shiftpoint& h, ld by);
#line 2627 "hypgraph.cpp"
  void change_shift(shiftmatrix& T, ld by);
#line 2645 "hypgraph.cpp"
  transmatrix unshift(shiftmatrix T, ld to IS(0));
#line 2650 "hypgraph.cpp"
  hyperpoint unshift(shiftpoint T, ld to IS(0));
#line 2655 "hypgraph.cpp"
  transmatrix inverse_shift(const shiftmatrix& T1, const shiftmatrix& T2);
#line 2659 "hypgraph.cpp"
  hyperpoint inverse_shift(const shiftmatrix& T1, const shiftpoint& T2);
#line 2663 "hypgraph.cpp"
  void optimize_shift(shiftmatrix& T);
#line 2693 "hypgraph.cpp"
  shiftmatrix optimized_shift(const shiftmatrix& T);
  namespace dq {
#line 2700 "hypgraph.cpp"
    extern queue<pair<heptagon*, shiftmatrix>> drawqueue;
#line 2702 "hypgraph.cpp"
    unsigned bucketer(const shiftpoint& T);
#line 2706 "hypgraph.cpp"
    extern set<heptagon*> visited;
#line 2707 "hypgraph.cpp"
    void enqueue(heptagon *h, const shiftmatrix& T);
#line 2713 "hypgraph.cpp"
    extern set<unsigned> visited_by_matrix;
#line 2714 "hypgraph.cpp"
    void enqueue_by_matrix(heptagon *h, const shiftmatrix& T);
#line 2722 "hypgraph.cpp"
    extern queue<pair<cell*, shiftmatrix>> drawqueue_c;
#line 2723 "hypgraph.cpp"
    extern set<cell*> visited_c;
#line 2725 "hypgraph.cpp"
    void enqueue_c(cell *c, const shiftmatrix& T);
#line 2731 "hypgraph.cpp"
    void enqueue_by_matrix_c(cell *c, const shiftmatrix& T);
#line 2739 "hypgraph.cpp"
    void clear_all();
    }
#line 2750 "hypgraph.cpp"
  bool do_draw(cell *c);
#line 2762 "hypgraph.cpp"
  extern ld extra_generation_distance;
#line 2773 "hypgraph.cpp"
  bool do_draw(cell *c, const shiftmatrix& T);
#line 2842 "hypgraph.cpp"
  int cone_side(const shiftpoint H);
#line 2871 "hypgraph.cpp"
  transmatrix& get_view_orientation();
#line 2875 "hypgraph.cpp"
  extern hookset<bool(const transmatrix&)> hooks_rotate_view;
#line 2876 "hypgraph.cpp"
  extern hookset<bool(const hyperpoint&)> hooks_shift_view;
#line 2879 "hypgraph.cpp"
  void rotate_view(transmatrix T);
#line 2887 "hypgraph.cpp"
  transmatrix get_shift_view_of(const hyperpoint H, const transmatrix V);
#line 2903 "hypgraph.cpp"
  void shift_view(hyperpoint H);
#line 2923 "hypgraph.cpp"
  void shift_view_to(shiftpoint H);
#line 2928 "hypgraph.cpp"
  void shift_view_towards(shiftpoint H, ld l);
#line 2940 "hypgraph.cpp"
  void set_view(hyperpoint camera, hyperpoint forward, hyperpoint upward);

  // implemented in: inforder.cpp

  namespace inforder {
#line 16 "inforder.cpp"
    bool in();
#line 18 "inforder.cpp"
    bool mixed();
#line 20 "inforder.cpp"
    extern int alt_degree;
#line 40 "inforder.cpp"
    hrmap* new_map();
#line 42 "inforder.cpp"
    int celldistance(cell *c1, cell *c2);
    }

  // implemented in: inventory.cpp

  namespace inv {
    #if CAP_INV
#line 19 "inventory.cpp"
    extern bool on;
#line 21 "inventory.cpp"
    extern array<int, ittypes> usedup;
#line 23 "inventory.cpp"
    extern array<int, ittypes> remaining;
#line 25 "inventory.cpp"
    extern array<int, ittypes> extra_orbs;
#line 28 "inventory.cpp"
    extern int rseed;
#line 30 "inventory.cpp"
    extern bool usedForbidden;
#line 33 "inventory.cpp"
    void init();
#line 131 "inventory.cpp"
    extern eItem whichorbinfo;
#line 132 "inventory.cpp"
    extern string orbinfoline, extra;
#line 284 "inventory.cpp"
    void compute();
#line 431 "inventory.cpp"
    extern const char* helptext;
#line 476 "inventory.cpp"
    string osminfo(eItem orb);
#line 484 "inventory.cpp"
    extern bool activating;
#line 487 "inventory.cpp"
    void show();
    #if CAP_SAVE
#line 688 "inventory.cpp"
    void applyBox(eItem it);
    #endif
#line 693 "inventory.cpp"
    extern int incheck;
#line 695 "inventory.cpp"
    void check(int delta);
    #endif
    #if !CAP_INV
#line 707 "inventory.cpp"
    extern always_false on, activating;
    #endif
    }

  // implemented in: irregular.cpp

  namespace irr {
#line 13 "irregular.cpp"
    extern int irrid;
    #if CAP_IRR
#line 16 "irregular.cpp"
    extern ld density;
#line 17 "irregular.cpp"
    extern ld quality;
#line 18 "irregular.cpp"
    extern int place_attempts;
#line 19 "irregular.cpp"
    extern int rearrange_max_attempts;
#line 20 "irregular.cpp"
    extern int rearrange_less;
#line 22 "irregular.cpp"
    extern int cellcount;
#line 25 "irregular.cpp"
    struct cellinfo {
    cell *owner;
    map<cell*, transmatrix> relmatrices;
    vector<hyperpoint> jpoints;
    hyperpoint p;
    transmatrix pusher, rpusher;
    vector<int> neid;
    vector<int> spin;
    vector<hyperpoint> vertices;
    int localindex;
    bool is_pseudohept;
    int patterndir;
    int generation;
    };
#line 41 "irregular.cpp"
    extern map<cell*, int> cellindex;
#line 43 "irregular.cpp"
    extern vector<cellinfo> cells;
#line 45 "irregular.cpp"
    extern map<heptagon*, vector<int> > cells_of_heptagon;
#line 62 "irregular.cpp"
    extern hrmap *base;
#line 64 "irregular.cpp"
    extern euc::torus_config_full base_config;
#line 72 "irregular.cpp"
    extern int bitruncations_requested;
#line 73 "irregular.cpp"
    extern int bitruncations_performed;
#line 482 "irregular.cpp"
    void compute_geometry();
#line 516 "irregular.cpp"
    struct heptinfo {
    heptspin base;
    vector<cell*> subcells;
    vector<int> celldists[2];
    };
#line 523 "irregular.cpp"
    extern map<heptagon*, heptinfo> periodmap;
#line 525 "irregular.cpp"
    void link_to_base(heptagon *h, heptspin base);
#line 537 "irregular.cpp"
    void clear_links(heptagon *h);
#line 548 "irregular.cpp"
    void link_start(heptagon *h);
#line 552 "irregular.cpp"
    void link_next(heptagon *parent, int d);
#line 561 "irregular.cpp"
    void may_link_next(heptagon *parent, int d);
#line 567 "irregular.cpp"
    void link_cell(cell *c, int d);
#line 750 "irregular.cpp"
    int celldist(cell *c, bool alts);
#line 953 "irregular.cpp"
    void visual_creator();
#line 981 "irregular.cpp"
    void auto_creator();
#line 1030 "irregular.cpp"
    unsigned char density_code();
#line 1039 "irregular.cpp"
    bool pseudohept(cell* c);
#line 1043 "irregular.cpp"
    bool ctof(cell* c);
#line 1047 "irregular.cpp"
    bool supports(eGeometry g);
#line 1052 "irregular.cpp"
    array<heptagon*, 3> get_masters(cell *c);
    #endif
    }

  // implemented in: items.cpp

#line 12 "items.cpp"
  extern int currentLocalTreasure;
#line 15 "items.cpp"
  extern array<int, ittypes> items;
#line 17 "items.cpp"
  extern map<modecode_t, array<int, ittypes> > hiitems;
#line 19 "items.cpp"
  bool cannotPickupItem(cell *c, bool telekinesis);
#line 23 "items.cpp"
  bool canPickupItemWithMagnetism(cell *c, cell *from);
#line 31 "items.cpp"
  bool doPickupItemsWithMagnetism(cell *c);
#line 67 "items.cpp"
  void pickupMovedItems(cell *c);
#line 80 "items.cpp"
  bool in_lovasz();
#line 84 "items.cpp"
  bool collectItem(cell *c2, bool telekinesis IS(false));
#line 341 "items.cpp"
  void glance_message();
#line 358 "items.cpp"
  void dropGreenStone(cell *c);
#line 393 "items.cpp"
  void moveItem1(cell *from, cell *to, bool activateYendor);
#line 421 "items.cpp"
  void moveItem (cell *from, cell *to, bool activateYendor);
#line 429 "items.cpp"
  bool itemHidden(cell *c);
#line 433 "items.cpp"
  eItem localTreasureType();
#line 438 "items.cpp"
  void countLocalTreasure();
#line 451 "items.cpp"
  static const int NO_TREASURE = 1;
  static const int NO_YENDOR = 2;
  static const int NO_GRAIL = 4;
  static const int NO_LOVE = 8;
#line 457 "items.cpp"
  int gold(int no IS(0));
#line 480 "items.cpp"
  int maxgold();
#line 488 "items.cpp"
  void updateHi_for_code(eItem it, int v, modecode_t xcode);
#line 494 "items.cpp"
  void updateHi(eItem it, int v);
#line 498 "items.cpp"
  void gainItem(eItem it);
#line 559 "items.cpp"
  string itemcounter(int qty);
#line 563 "items.cpp"
  void gainShard(cell *c2, const char *msg);
#line 576 "items.cpp"
  void placeItems(int qty, eItem it);
#line 585 "items.cpp"
  bool cantGetGrimoire(cell *c2, bool verbose IS(true));
#line 596 "items.cpp"
  void gainLife();
#line 601 "items.cpp"
  void collectMessage(cell *c2, eItem which);
#line 719 "items.cpp"
  bool itemHiddenFromSight(cell *c);

  // implemented in: kite.cpp

  namespace kite {
#line 13 "kite.cpp"
    bool in();
    #if CAP_BT
#line 18 "kite.cpp"
    enum pshape {pDart, pKite};
#line 62 "kite.cpp"
    pshape getshape(heptagon *h);
#line 64 "kite.cpp"
    pair<vector<vector<hyperpoint>>, vector<vector<ld>>> make_walls();
#line 124 "kite.cpp"
    extern bool no_adj;
#line 360 "kite.cpp"
    hrmap *new_map();
#line 367 "kite.cpp"
    void find_cell_connection(cell *c, int d);
    #endif
    }

  // implemented in: landgen.cpp

#line 15 "landgen.cpp"
  extern int explore[10], exploreland[10][landtypes], landcount[landtypes];
#line 17 "landgen.cpp"
  extern bool safety;
#line 19 "landgen.cpp"
  extern eLand lastland;
#line 21 "landgen.cpp"
  extern int lastexplore;
#line 23 "landgen.cpp"
  extern bool randomPatternsMode;
#line 24 "landgen.cpp"
  extern int randompattern[landtypes];
#line 26 "landgen.cpp"
  extern int genrange_bonus;
#line 28 "landgen.cpp"
  extern bool chaosUnlocked;
#line 29 "landgen.cpp"
  extern bool chaosAchieved;
#line 31 "landgen.cpp"
  void doOvergenerate();
#line 36 "landgen.cpp"
  bool notDippingFor(eItem i);
#line 45 "landgen.cpp"
  bool notDippingForExtra(eItem i, eItem x);
#line 69 "landgen.cpp"
  extern bool reptilecheat;
#line 107 "landgen.cpp"
  eMonster genRuinMonster(cell *c);
#line 122 "landgen.cpp"
  void createArrowTrapAt(cell *c, eLand land);
#line 148 "landgen.cpp"
  eMonster emerald_monster();
#line 156 "landgen.cpp"
  void build_pool(cell *c, bool with_boat);
#line 167 "landgen.cpp"
  void place_elemental_wall(cell *c);
#line 175 "landgen.cpp"
  int hrand_monster(int x);
#line 186 "landgen.cpp"
  bool is_zebra_trapdoor(cell *c);
#line 232 "landgen.cpp"
  void gen_eclectic_monster(cell *c);
#line 272 "landgen.cpp"
  void giantLandSwitch(cell *c, int d, cell *from);
#line 2883 "landgen.cpp"
  void repairLandgen(cell *c);
#line 2935 "landgen.cpp"
  void setland_randomwalk(cell *c);
#line 2945 "landgen.cpp"
  void set_land_for_geometry(cell *c);
#line 2984 "landgen.cpp"
  extern hookset<bool(cell *c, int d, cell *from)> hooks_cellgen;
#line 2986 "landgen.cpp"
  void setdist(cell *c, int d, cell *from);

  // implemented in: landlock.cpp

#line 11 "landlock.cpp"
  bool in_full_game();
#line 16 "landlock.cpp"
  bool nodisplay(eMonster m);
#line 26 "landlock.cpp"
  int isNative(eLand l, eMonster m);
#line 37 "landlock.cpp"
  eItem treasureType(eLand l);
#line 39 "landlock.cpp"
  eItem treasureTypeUnlock(eLand l, eItem u);
#line 45 "landlock.cpp"
  eLand landof(eItem it);
#line 50 "landlock.cpp"
  int landMultiplier(eLand l);
#line 55 "landlock.cpp"
  bool isCrossroads(eLand l);
#line 60 "landlock.cpp"
  bool bearsCamelot(eLand l);
#line 64 "landlock.cpp"
  bool inmirror(const cellwalker& cw);
#line 68 "landlock.cpp"
  eLand oppositeElement(eLand l, eLand l2);
#line 80 "landlock.cpp"
  extern eLand firstland;
#line 81 "landlock.cpp"
  extern eLand specialland;
#line 84 "landlock.cpp"
  enum eLandStructure { lsNiceWalls, lsChaos, lsPatchedChaos, lsTotalChaos, lsChaosRW, lsWallChaos, lsSingle, lsNoWalls, lsGUARD };
#line 87 "landlock.cpp"
  extern eLandStructure land_structure;
  namespace ls {
#line 91 "landlock.cpp"
    bool single();
#line 93 "landlock.cpp"
    bool any_chaos();
#line 94 "landlock.cpp"
    bool std_chaos();
#line 95 "landlock.cpp"
    bool wall_chaos();
#line 96 "landlock.cpp"
    bool patched_chaos();
#line 98 "landlock.cpp"
    bool any_order();
#line 99 "landlock.cpp"
    bool nice_walls();
#line 100 "landlock.cpp"
    bool no_walls();
#line 102 "landlock.cpp"
    bool any_nowall();
#line 103 "landlock.cpp"
    bool any_wall();
#line 105 "landlock.cpp"
    int chaoticity();
#line 115 "landlock.cpp"
    bool tame_chaos();
    }
#line 118 "landlock.cpp"
  string land_structure_name(bool which);
#line 141 "landlock.cpp"
  void fix_land_structure_choice();
#line 162 "landlock.cpp"
  bool landUnlockedRPM(eLand n);
#line 169 "landlock.cpp"
  int lands_for_hell();
#line 173 "landlock.cpp"
  int variant_unlock_value();
#line 177 "landlock.cpp"
  bool landUnlocked(eLand l);
#line 216 "landlock.cpp"
  bool required_for_hyperstones(eItem ttype);
#line 226 "landlock.cpp"
  void countHyperstoneQuest(int& i1, int& i2);
#line 236 "landlock.cpp"
  bool hyperstonesUnlocked();
#line 244 "landlock.cpp"
  int isRandland(eLand l);
#line 251 "landlock.cpp"
  bool incompatible1(eLand l1, eLand l2);
#line 278 "landlock.cpp"
  eLand randomElementalLand();
#line 284 "landlock.cpp"
  int elementalKills();
#line 289 "landlock.cpp"
  eLand randomElementalLandWeighted();
#line 300 "landlock.cpp"
  bool incompatible(eLand nw, eLand old);
#line 304 "landlock.cpp"
  bool rlyehComplete();
#line 315 "landlock.cpp"
  eLand pickLandRPM(eLand old);
#line 323 "landlock.cpp"
  eLand pickluck(eLand l1, eLand l2);
#line 343 "landlock.cpp"
  eLand getNewSealand(eLand old);
#line 355 "landlock.cpp"
  bool createOnSea(eLand old);
#line 363 "landlock.cpp"
  extern hookset<eLand(eLand)> hooks_nextland;
#line 365 "landlock.cpp"
  extern bool all_unlocked;
#line 367 "landlock.cpp"
  eLand getNewLand(eLand old);
#line 564 "landlock.cpp"
  extern vector<eLand> land_over;
#line 587 "landlock.cpp"
  extern vector<eLand> landlist;
#line 590 "landlock.cpp"
  template<class T> void generateLandList(T t) {
  landlist.clear();
  for(auto l: land_over) if(t(l)) landlist.push_back(l);    
  }
#line 597 "landlock.cpp"
  namespace lv {
  static const flagtype appears_in_geom_exp = 1;
  static const flagtype display_error_message = 2;
  static const flagtype appears_in_full = 4;
  static const flagtype appears_in_ptm = 8;
  static const flagtype display_in_help = 16;
  static const flagtype one_and_half = 32;
  }
  
  struct land_validity_t {
  int quality_level; // 0 (dont show), 1 (1/2), 2 (ok), 3(1!)
  flagtype flags;
  string msg;
  };
#line 613 "landlock.cpp"
  eLand getLandForList(cell *c);
#line 626 "landlock.cpp"
  bool isLandIngame(eLand l);
#line 704 "landlock.cpp"
  extern int old_daily_id;
#line 708 "landlock.cpp"
  extern const int frog_when;
#line 710 "landlock.cpp"
  extern const int cursed_when;
#line 712 "landlock.cpp"
  extern const int walls_when;
#line 715 "landlock.cpp"
  land_validity_t& land_validity(eLand l);

  // implemented in: language-data.cpp

#line 62 "language-data.cpp"
  #if CAP_TRANS
  #define NUMEXTRA 152
  #define NATCHARS {"¨","°","²","´","½","Á","Ä","Ç","È","É","Í","Î","Ö","Ú","Ü","ß","à","á","â","ã","ä","ç","è","é","ê","ì","í","î","ï","ò","ó","ô","õ","ö","ø","ù","ú","ü","ý","ą","ć","Č","č","Ď","ď","Ę","ę","Ě","ě","ğ","İ","ı","Ł","ł","ń","ň","Ř","ř","Ś","ś","Ş","ş","Š","š","Ť","ť","ů","Ź","ź","Ż","ż","Ž","ž","Θ","δ","λ","π","ϕ","Ё","А","Б","В","Г","Д","Е","Ж","З","И","Й","К","Л","М","Н","О","П","Р","С","Т","У","Ф","Х","Ц","Ч","Ш","Щ","Ы","Ь","Э","Ю","Я","а","б","в","г","д","е","ж","з","и","й","к","л","м","н","о","п","р","с","т","у","ф","х","ц","ч","ш","щ","ъ","ы","ь","э","ю","я","ё","ᵈ","ᶻ","⁻","←","→","∞","⌫","⏎","�",}
  extern const char* natchars[NUMEXTRA];
  #endif
#line 71 "language-data.cpp"
  extern int transcompleteness[NUMLAN];

  // implemented in: legacy.cpp

#line 205 "legacy.cpp"
  modecode_t legacy_modecode();

  // implemented in: mapeffects.cpp

#line 11 "mapeffects.cpp"
  void initcell(cell *c);
#line 30 "mapeffects.cpp"
  bool doesnotFall(cell *c);
#line 41 "mapeffects.cpp"
  bool doesFall(cell *c);
#line 43 "mapeffects.cpp"
  bool doesFallSound(cell *c);
#line 49 "mapeffects.cpp"
  void destroyBoats(cell *c, cell *c2, bool strandedToo);
#line 57 "mapeffects.cpp"
  enum eGravity { gsNormal, gsLevitation, gsAnti };
#line 59 "mapeffects.cpp"
  extern eGravity gravity_state, last_gravity_state;
#line 61 "mapeffects.cpp"
  bool bird_disruption(cell *c);
#line 65 "mapeffects.cpp"
  bool in_gravity_zone(cell *c);
#line 69 "mapeffects.cpp"
  int gravity_zone_diff(cell *c);
#line 77 "mapeffects.cpp"
  bool isJWall(cell *c);
#line 81 "mapeffects.cpp"
  eGravity get_static_gravity(cell *c);
#line 93 "mapeffects.cpp"
  eGravity get_move_gravity(cell *c, cell *c2);
#line 120 "mapeffects.cpp"
  bool isWarped(cell *c);
#line 124 "mapeffects.cpp"
  bool nonAdjacent(cell *c, cell *c2);
#line 135 "mapeffects.cpp"
  bool nonAdjacentPlayer(cell *c, cell *c2);
#line 139 "mapeffects.cpp"
  bool thruVine(cell *c, cell *c2);
#line 144 "mapeffects.cpp"
  void useup(cell *c);
#line 159 "mapeffects.cpp"
  bool earthFloor(cell *c);
#line 209 "mapeffects.cpp"
  bool earthWall(cell *c);
#line 286 "mapeffects.cpp"
  bool applyColor(cell *c);
#line 319 "mapeffects.cpp"
  bool snakepile(cell *c, eMonster m);
#line 390 "mapeffects.cpp"
  bool makeflame(cell *c, int timeout, bool checkonly);
#line 466 "mapeffects.cpp"
  bool makeshallow(cell *c, int timeout, bool checkonly);
#line 512 "mapeffects.cpp"
  void explosion(cell *c, int power, int central);
#line 558 "mapeffects.cpp"
  void explodeMine(cell *c);
#line 570 "mapeffects.cpp"
  void explodeBarrel(cell *c);
#line 579 "mapeffects.cpp"
  bool mayExplodeMine(cell *c, eMonster who);
#line 586 "mapeffects.cpp"
  void flameHalfvine(cell *c, int val);
#line 596 "mapeffects.cpp"
  bool destroyHalfvine(cell *c, eWall newwall IS(waNone), int tval IS(6));
#line 612 "mapeffects.cpp"
  int coastvalEdge(cell *c);
#line 614 "mapeffects.cpp"
  int gravityLevel(cell *c);
#line 624 "mapeffects.cpp"
  int gravityLevelDiff(cell *c, cell *d);
#line 642 "mapeffects.cpp"
  bool canUnstable(eWall w, flagtype flags);
#line 648 "mapeffects.cpp"
  bool cellEdgeUnstable(cell *c, flagtype flags IS(0));
#line 672 "mapeffects.cpp"
  extern int tidalsize, tide[200];
#line 674 "mapeffects.cpp"
  void calcTidalPhase();
#line 706 "mapeffects.cpp"
  int tidespeed();
#line 710 "mapeffects.cpp"
  extern bool recalcTide;
#line 713 "mapeffects.cpp"
  #define SEADIST LHU.bytes[0]
  #define LANDDIST LHU.bytes[1]
  #define CHAOSPARAM LHU.bytes[2]
  #if CAP_FIELD
#line 719 "mapeffects.cpp"
  int lavatide(cell *c, int t);
  #endif
#line 725 "mapeffects.cpp"
  void checkTide(cell *c);
#line 775 "mapeffects.cpp"
  bool makeEmpty(cell *c);
#line 855 "mapeffects.cpp"
  void toggleGates(cell *c, eWall type, int rad);
#line 883 "mapeffects.cpp"
  int toggle_radius(eWall type);
#line 890 "mapeffects.cpp"
  void toggleGates(cell *ct, eWall type);
#line 900 "mapeffects.cpp"
  void destroyTrapsOn(cell *c);
#line 909 "mapeffects.cpp"
  void destroyTrapsAround(cell *c);
#line 913 "mapeffects.cpp"
  void destroyWeakBranch(cell *cf, cell *ct, eMonster who);
#line 932 "mapeffects.cpp"
  bool isCentralTrap(cell *c);
#line 939 "mapeffects.cpp"
  array<cell*, 5> traplimits(cell *c);
#line 957 "mapeffects.cpp"
  void activateArrowTrap(cell *c);
#line 968 "mapeffects.cpp"
  template<class T> 
  movei determinePush(cellwalker who, int subdir, const T& valid) {
  if(subdir != 1 && subdir != -1) {
  subdir = 1;
  static bool first = true;
  if(first)
  first = false,
  addMessage("bad push: " + its(subdir));
  }
  cellwalker push = who;
  push += wstep;
  cell *c2 = push.at;
  if(bt::in()) {
  auto rd = reverse_directions(push.at, push.spin);
  for(int i: rd) {
  push.spin = i;
  movei mi = movei(push.at, i);
  if(valid(mi)) return mi;
  }
  return movei(c2, NO_SPACE);
  }
  int pd = push.at->type/2;
  push += pd * -subdir;
  movei mi(push.at, push.spin);
  push += wstep;
  if(valid(mi)) return mi;
  if(c2->type&1) {
  push = push + wstep - subdir + wstep;
  if(valid(mi)) return mi;
  }
  if(gravityLevelDiff(push.at, c2) < 0) {
  push = push + wstep + 1 + wstep;
  if(gravityLevelDiff(push.at, c2) < 0) {
  push = push + wstep - 2 + wstep;
  }
  if(gravityLevelDiff(push.at, c2) < 0) {
  push = push + wstep + 1 + wstep;
  }
  movei mi = movei(c2, (push+wstep).spin);
  if(valid(mi)) return mi;
  }
  return movei(c2, NO_SPACE);
  }
#line 1014 "mapeffects.cpp"
  void explodeAround(cell *c);
#line 1054 "mapeffects.cpp"
  bool earthMove(const movei& mi);
#line 1069 "mapeffects.cpp"
  bool colorMove(const movei& mi);
#line 1081 "mapeffects.cpp"
  bool cellDangerous(cell *c);

  // implemented in: menus.cpp

#line 15 "menus.cpp"
  extern ld whatever[16];
#line 16 "menus.cpp"
  extern int whateveri[16];
#line 24 "menus.cpp"
  void showOverview();
#line 212 "menus.cpp"
  void showMainMenu();
#line 327 "menus.cpp"
  void editScale();
#line 333 "menus.cpp"
  extern const char *wdmodes[7];
#line 334 "menus.cpp"
  extern const char *mdmodes[6];
#line 335 "menus.cpp"
  extern const char *hlmodes[3];
#line 337 "menus.cpp"
  void showGraphQuickKeys();
#line 370 "menus.cpp"
  void enable_cheat();
#line 394 "menus.cpp"
  void switchHardcore();
#line 408 "menus.cpp"
  void switch_casual();
#line 425 "menus.cpp"
  void showCreative();
#line 502 "menus.cpp"
  void show_chaos();
#line 559 "menus.cpp"
  void mode_higlights();
#line 706 "menus.cpp"
  eLandStructure default_land_structure();
#line 715 "menus.cpp"
  void menuitem_land_structure(char key);
#line 724 "menus.cpp"
  void showChangeMode();
#line 823 "menus.cpp"
  extern bool showstartmenu;
#line 825 "menus.cpp"
  bool showHalloween();
#line 852 "menus.cpp"
  void showStartMenu();
#line 1123 "menus.cpp"
  struct named_functionality {
  std::string first;
  reaction_t second;
  explicit named_functionality() = default;
  explicit named_functionality(std::string s, reaction_t r) : first(std::move(s)), second(std::move(r)) {}
  friend bool operator==(const named_functionality& a, const named_functionality& b) { return a.first == b.first; }
  friend bool operator!=(const named_functionality& a, const named_functionality& b) { return a.first != b.first; }
  };
  inline named_functionality named_dialog(string x, reaction_t dialog) { return named_functionality(x, [dialog] () { pushScreen(dialog); }); }
#line 1135 "menus.cpp"
  using o_funcs = vector<named_functionality>;
#line 1138 "menus.cpp"
  extern hookset<void(o_funcs&)> hooks_o_key;
#line 1140 "menus.cpp"
  named_functionality get_o_key();
#line 1193 "menus.cpp"
  extern int messagelogpos;
#line 1194 "menus.cpp"
  extern int timeformat;
#line 1195 "menus.cpp"
  extern int stampbase;
#line 1197 "menus.cpp"
  string gettimestamp(msginfo& m);
#line 1221 "menus.cpp"
  void showMessageLog();

  // implemented in: mobile.cpp

  #if ISMOBILE
#line 52 "mobile.cpp"
  extern bool clicked;
#line 53 "mobile.cpp"
  extern bool buttonclicked;
#line 201 "mobile.cpp"
  void mobile_draw(MOBPAR_FORMAL);
  #endif

  // implemented in: models.cpp

  namespace polygonal {
#line 23 "models.cpp"
    static const int MSI = 120;
#line 30 "models.cpp"
    extern int SI;
#line 31 "models.cpp"
    extern ld  STAR;
#line 33 "models.cpp"
    extern int deg;
#line 39 "models.cpp"
    extern ld coefr[MSI], coefi[MSI]; 
#line 40 "models.cpp"
    extern int maxcoef, coefid;
#line 42 "models.cpp"
    void solve();
#line 82 "models.cpp"
    pair<ld, ld> compute(ld x, ld y, int prec);
#line 107 "models.cpp"
    pair<ld, ld> compute(ld x, ld y);
    }
#line 111 "models.cpp"
  inline bool mdAzimuthalEqui() { return among(pmodel, mdEquidistant, mdEquiarea, mdEquivolume); }
  inline bool mdBandAny() { return mdinf[pmodel].flags & mf::pseudoband; }
  inline bool mdPseudocylindrical() { return mdBandAny() && !(mdinf[pmodel].flags & mf::cylindrical); }
  namespace models {
#line 118 "models.cpp"
    extern ld rotation;
#line 119 "models.cpp"
    extern ld rotation_xz;
#line 120 "models.cpp"
    extern ld rotation_xy2;
#line 121 "models.cpp"
    extern int do_rotate;
#line 122 "models.cpp"
    extern ld ocos, osin, ocos_yz, osin_yz;
#line 123 "models.cpp"
    extern ld cos_ball, sin_ball;
#line 124 "models.cpp"
    extern bool model_straight, model_straight_yz;
#line 127 "models.cpp"
    // screen coordinates to logical coordinates: apply_orientation(x,y)
    // logical coordinates back to screen coordinates: apply_orientation(y,x)
    template<class A>
    void apply_orientation(A& x, A& y) { if(!model_straight) tie(x,y) = make_pair(x*ocos + y*osin, y*ocos - x*osin); }
    template<class A>
    void apply_orientation_yz(A& x, A& y) { if(!model_straight_yz) tie(x,y) = make_pair(x*ocos_yz + y*osin_yz, y*ocos_yz - x*osin_yz); }
    template<class A>
    void apply_ball(A& x, A& y) { tie(x,y) = make_pair(x*cos_ball + y*sin_ball, y*cos_ball - x*sin_ball); }
#line 137 "models.cpp"
    transmatrix rotmatrix();
#line 144 "models.cpp"
    extern cld spiral_multiplier;
#line 145 "models.cpp"
    extern ld spiral_cone_rad;
#line 146 "models.cpp"
    extern bool ring_not_spiral;
#line 149 "models.cpp"
    extern transmatrix euclidean_spin;
#line 151 "models.cpp"
    void configure();
#line 188 "models.cpp"
    bool model_available(eModel pm);
#line 209 "models.cpp"
    bool has_orientation(eModel m);
#line 219 "models.cpp"
    int get_broken_coord(eModel m);
#line 225 "models.cpp"
    bool is_perspective(eModel m);
#line 229 "models.cpp"
    bool is_3d(const projection_configuration& p);
#line 234 "models.cpp"
    bool has_transition(eModel m);
#line 238 "models.cpp"
    bool product_model(eModel m);
#line 246 "models.cpp"
    string get_model_name(eModel m);
#line 300 "models.cpp"
    void edit_formula();
#line 331 "models.cpp"
    void edit_rotation(ld& which);
#line 355 "models.cpp"
    void model_list();
#line 411 "models.cpp"
    void model_menu();
#line 690 "models.cpp"
    void quick_model();
    }

  // implemented in: monstergen.cpp

#line 11 "monstergen.cpp"
  extern int avengers, mirrorspirits, wandering_jiangshi, jiangshi_on_screen;
#line 13 "monstergen.cpp"
  extern bool timerghost;
#line 14 "monstergen.cpp"
  extern bool gen_wandering;
#line 16 "monstergen.cpp"
  int buildIvy(cell *c, int children, int minleaf);
#line 49 "monstergen.cpp"
  void chasmify(cell *c);
#line 61 "monstergen.cpp"
  void chasmifyEarth(cell *c);
#line 86 "monstergen.cpp"
  void chasmifyElemental(cell *c);
#line 113 "monstergen.cpp"
  eMonster crossroadsMonster();
#line 139 "monstergen.cpp"
  eMonster wanderingCrossroadsMonster();
#line 146 "monstergen.cpp"
  int palaceHP();
#line 162 "monstergen.cpp"
  int hardness_empty();
#line 166 "monstergen.cpp"
  bool redtrolls(cell *c);
#line 173 "monstergen.cpp"
  eMonster pickTroll(cell *c);
#line 180 "monstergen.cpp"
  void dieTroll(cell *c, eMonster m);
#line 187 "monstergen.cpp"
  int reptilemax();
#line 232 "monstergen.cpp"
  int getGhostTimer();
#line 236 "monstergen.cpp"
  int getGhostcount();
#line 251 "monstergen.cpp"
  bool canReachPlayer(cell *cf, eMonster m);
#line 275 "monstergen.cpp"
  bool haveOrbPower();
#line 289 "monstergen.cpp"
  bool haveNonChargingOrbPower();
#line 303 "monstergen.cpp"
  bool haveKraken();
#line 311 "monstergen.cpp"
  eItem wanderingTreasure(cell *c);
#line 334 "monstergen.cpp"
  void wandering();
#line 791 "monstergen.cpp"
  void generateSnake(cell *c, int i, int snakecolor);

  // implemented in: monstermove.cpp

#line 12 "monstermove.cpp"
  extern int turncount;
#line 14 "monstermove.cpp"
  extern int mutantphase;
#line 16 "monstermove.cpp"
  extern int sagephase;
#line 19 "monstermove.cpp"
  extern vector<cell*> targets;
#line 24 "monstermove.cpp"
  extern vector<pair<cell*, int> > butterflies;
#line 26 "monstermove.cpp"
  void addButterfly(cell *c);
#line 35 "monstermove.cpp"
  void makeTrollFootprints(cell *c);
#line 41 "monstermove.cpp"
  bool hasPrincessWeapon(eMonster m);
#line 45 "monstermove.cpp"
  void sageheat(cell *c, double v);
#line 57 "monstermove.cpp"
  void moveEffect(const movei& mi, eMonster m);
#line 112 "monstermove.cpp"
  void moveMonster(const movei& mi);
#line 349 "monstermove.cpp"
  bool cannotGo(eMonster m, cell *c);
#line 355 "monstermove.cpp"
  bool wantsToStay(eMonster m);
#line 359 "monstermove.cpp"
  bool batsAfraid(cell *c);
#line 378 "monstermove.cpp"
  int angledist(int t, int d1, int d2);
#line 386 "monstermove.cpp"
  int angledistButterfly(int t, int d1, int d2, bool mirrored);
#line 393 "monstermove.cpp"
  int angledist(cell *c, int d1, int d2);
#line 397 "monstermove.cpp"
  bool anglestraight(cell *c, int d1, int d2);
#line 401 "monstermove.cpp"
  int bulldist(cell *c);
#line 407 "monstermove.cpp"
  int bulldistance(cell *c, cell *d);
#line 414 "monstermove.cpp"
  int landheattype(cell *c);
#line 424 "monstermove.cpp"
  int moveval(cell *c1, cell *c2, int d, flagtype mf);
#line 551 "monstermove.cpp"
  int stayval(cell *c, flagtype mf);
#line 577 "monstermove.cpp"
  int totalbulldistance(cell *c, int k);
#line 587 "monstermove.cpp"
  void determinizeBull(cell *c, vector<int>& posdir);
#line 604 "monstermove.cpp"
  int determinizeBullPush(cellwalker bull);
#line 620 "monstermove.cpp"
  int pickMoveDirection(cell *c, flagtype mf);
#line 639 "monstermove.cpp"
  int pickDownDirection(cell *c, flagtype mf);
#line 661 "monstermove.cpp"
  void beastAttack(cell *c, bool player, bool targetdir);
#line 697 "monstermove.cpp"
  extern bool quantum;
#line 699 "monstermove.cpp"
  cell *moveNormal(cell *c, flagtype mf);
#line 790 "monstermove.cpp"
  void mountmove(const movei& mi, bool fp);
#line 815 "monstermove.cpp"
  void moveWorm(cell *c);
#line 955 "monstermove.cpp"
  void ivynext(cell *c);
#line 991 "monstermove.cpp"
  void removeIvy(cell *c);
#line 1008 "monstermove.cpp"
  void moveivy();
#line 1078 "monstermove.cpp"
  bool isTargetOrAdjacent(cell *c);
#line 1085 "monstermove.cpp"
  void groupmove2(const movei& mi, eMonster movtype, flagtype mf);
#line 1192 "monstermove.cpp"
  void groupmove(eMonster movtype, flagtype mf);
#line 1255 "monstermove.cpp"
  void moveHexSnake(const movei& mi, bool mounted);
#line 1281 "monstermove.cpp"
  void snakeAttack(cell *c, bool mounted);
#line 1292 "monstermove.cpp"
  bool goodmount(cell *c, bool mounted);
#line 1297 "monstermove.cpp"
  int inpair(cell *c, int colorpair);
#line 1301 "monstermove.cpp"
  int snake_pair(cell *c);
#line 1309 "monstermove.cpp"
  void hexvisit(cell *c, cell *from, int d, bool mounted, int colorpair);
#line 1344 "monstermove.cpp"
  void movehex(bool mounted, int colorpair);
#line 1373 "monstermove.cpp"
  void movehex_rest(bool mounted);
#line 1404 "monstermove.cpp"
  void movemutant();
#line 1452 "monstermove.cpp"
  #define SHSIZE 16
#line 1455 "monstermove.cpp"
  extern vector<array<cell*, MAXPLAYER>> shpos;
#line 1456 "monstermove.cpp"
  extern int cshpos;
#line 1458 "monstermove.cpp"
  extern cell *lastmountpos[MAXPLAYER];
#line 1460 "monstermove.cpp"
  void clearshadow();
#line 1467 "monstermove.cpp"
  void kill_shadow_at(cell *c);
#line 1474 "monstermove.cpp"
  void moveshadow();
#line 1509 "monstermove.cpp"
  void moveghosts();
#line 1566 "monstermove.cpp"
  int stayvalue(eMonster m, cell *c);
#line 1576 "monstermove.cpp"
  int movevalue(eMonster m, cell *c, int dir, flagtype flags);
#line 1683 "monstermove.cpp"
  void movegolems(flagtype flags);
#line 1781 "monstermove.cpp"
  void moveButterflies();
#line 1804 "monstermove.cpp"
  void stormNextTurn(cell *c);
#line 1809 "monstermove.cpp"
  void castWeakLightningBoltFrom(cell *c);
#line 1814 "monstermove.cpp"
  void castWeakLightningBolt(cellwalker lig);
#line 1908 "monstermove.cpp"
  void specialMoves();
#line 2111 "monstermove.cpp"
  void moveworms();
#line 2121 "monstermove.cpp"
  void moveants();
#line 2129 "monstermove.cpp"
  int getAntMove(cell *c);
#line 2163 "monstermove.cpp"
  void refreshFriend(cell *c);
#line 2172 "monstermove.cpp"
  void consMove(cell *c, eMonster param);
#line 2198 "monstermove.cpp"
  void moveNormals(eMonster param);
#line 2219 "monstermove.cpp"
  void movehex_all();
#line 2228 "monstermove.cpp"
  void movemonsters();
#line 2357 "monstermove.cpp"
  bool nogoSlow(cell *to, cell *from);
#line 2363 "monstermove.cpp"
  void beastcrash(cell *c, cell *beast);
#line 2401 "monstermove.cpp"
  void stayEffect(cell *c);
#line 2414 "monstermove.cpp"
  int realstuntime(cell *c);

  // implemented in: multigame.cpp

#line 12 "multigame.cpp"
  /** gamedata structure, for recording the game data in memory temporarily */
  struct gamedata {
  /** important parameters should be visible */
  eGeometry geo;
  eVariation var;
  eLand specland;
  bool active;
  /** other properties are recorded here */
  vector<char> record;
  int index, mode;
  void storegame();
  void restoregame();
  template<class T> void store(T& x) {
  int ssize = sizeof(x);
  if(ssize & 7) ssize = (ssize | 7) + 1;
  if(mode == 0) {
  record.resize(index+ssize);
  T& at = *(new (&record[index]) T());
  at = move(x);
  }
  else {
  T& at = (T&) record[index];
  x = move(at);
  at.~T();
  }
  index += ssize;
  }
  template<class T> void store_ptr(T& x) {
  T* copy;
  if(mode == 0) {
  copy = new T;
  *copy = move(x);
  }
  store(copy);
  if(mode != 0) {
  x = move(*copy);
  delete copy;
  }
  }
  };
#line 97 "multigame.cpp"
  extern hookset<void(gamedata*)> hooks_gamedata;
  namespace gamestack {
#line 103 "multigame.cpp"
    bool pushed();
#line 105 "multigame.cpp"
    void push();
#line 110 "multigame.cpp"
    void pop();
    }
  namespace dual {
#line 121 "multigame.cpp"
    extern int state;
#line 124 "multigame.cpp"
    extern bool one_euclidean;
#line 126 "multigame.cpp"
    extern int currently_loaded;
#line 127 "multigame.cpp"
    extern int main_side;
#line 128 "multigame.cpp"
    extern bool affect_both;
#line 131 "multigame.cpp"
    extern transmatrix player_orientation[2];
#line 152 "multigame.cpp"
    transmatrix get_orientation();
#line 163 "multigame.cpp"
    void switch_to(int k);
#line 174 "multigame.cpp"
    bool movepc(int d, int subdir, bool checkonly);
#line 256 "multigame.cpp"
    void in_subscreen(reaction_t what);
#line 262 "multigame.cpp"
    bool split(reaction_t what);
#line 275 "multigame.cpp"
    void enable();
#line 319 "multigame.cpp"
    void disable();
#line 353 "multigame.cpp"
    bool check_side(eLand l);
#line 357 "multigame.cpp"
    void assign_landsides();
#line 425 "multigame.cpp"
    void add_choice();
#line 438 "multigame.cpp"
    void split_or_do(reaction_t what);
#line 443 "multigame.cpp"
    bool may_split(reaction_t what);
#line 451 "multigame.cpp"
    void may_split_or_do(reaction_t what);
#line 460 "multigame.cpp"
    inline reaction_t mayboth(reaction_t what) { return [=] { may_split_or_do(what); }; }
    }

  // implemented in: netgen.cpp

  #if CAP_MODEL
  namespace netgen {
#line 75 "netgen.cpp"
    extern int mode;
#line 77 "netgen.cpp"
    void buildVertexInfo(cell *c, transmatrix V);
#line 740 "netgen.cpp"
    void run();
    }
  #endif

  // implemented in: nofont.cpp

  #if CAP_TABFONT
#line 130 "nofont.cpp"
  void resetTabFont();
#line 134 "nofont.cpp"
  void loadCompressedChar(int &otwidth, int &otheight, unsigned char *tpix);
  #endif

  // implemented in: nonisotropic.cpp

  namespace nisot {
#line 14 "nonisotropic.cpp"
    inline bool local_perspective_used() { return nonisotropic || prod; }
#line 17 "nonisotropic.cpp"
    extern bool geodesic_movement;
#line 19 "nonisotropic.cpp"
    transmatrix translate(hyperpoint h, ld co IS(1));
    }
  #if !CAP_SOLV
  namespace sn {
#line 46 "nonisotropic.cpp"
    always_false in();
    }
  #endif
  #if CAP_SOLV
  namespace sn {
#line 53 "nonisotropic.cpp"
    bool in();
#line 55 "nonisotropic.cpp"
    eGeometry geom();
#line 61 "nonisotropic.cpp"
    typedef array<float, 3> compressed_point;
    
    inline hyperpoint decompress(compressed_point p) { return point3(p[0], p[1], p[2]); }
    inline compressed_point compress(hyperpoint h) { return make_array<float>(h[0], h[1], h[2]); }
    
    struct tabled_inverses {
    int PRECX, PRECY, PRECZ;
    vector<compressed_point> tab;
    string fname;
    bool loaded;
    
    void load();
    hyperpoint get(ld ix, ld iy, ld iz, bool lazy);
    
    compressed_point& get_int(int ix, int iy, int iz) { return tab[(iz*PRECY+iy)*PRECX+ix]; }
    
    GLuint texture_id;
    bool toload;
    
    GLuint get_texture_id();
    
    tabled_inverses(string s) : fname(s), texture_id(0), toload(true) {}  
    };
#line 171 "nonisotropic.cpp"
    ld x_to_ix(ld u);
#line 185 "nonisotropic.cpp"
    ld ix_to_x(ld ix);
#line 197 "nonisotropic.cpp"
    ld z_to_iz(ld z);
#line 203 "nonisotropic.cpp"
    ld iz_to_z(ld iz);
#line 216 "nonisotropic.cpp"
    hyperpoint azeq_to_table(hyperpoint x);
#line 225 "nonisotropic.cpp"
    hyperpoint table_to_azeq(hyperpoint x);
#line 452 "nonisotropic.cpp"
    pair<heptagon*,heptagon*> getcoord(heptagon *h);
#line 456 "nonisotropic.cpp"
    heptagon *get_at(heptagon *h1, heptagon *h2, bool gen);
#line 462 "nonisotropic.cpp"
    extern string common;
#line 519 "nonisotropic.cpp"
    hyperpoint get_inverse_exp_symsol(hyperpoint h, flagtype flags);
#line 539 "nonisotropic.cpp"
    hyperpoint get_inverse_exp_nsym(hyperpoint h, flagtype flags);
#line 556 "nonisotropic.cpp"
    extern string shader_symsol;
#line 603 "nonisotropic.cpp"
    extern string shader_nsymsol;
#line 641 "nonisotropic.cpp"
    extern string shader_nsym;
#line 663 "nonisotropic.cpp"
    extern ld solrange_xy;
#line 664 "nonisotropic.cpp"
    extern ld solrange_z;
#line 666 "nonisotropic.cpp"
    bool in_table_range(hyperpoint h);
#line 670 "nonisotropic.cpp"
    extern tabled_inverses solt;
#line 671 "nonisotropic.cpp"
    extern tabled_inverses niht;
#line 672 "nonisotropic.cpp"
    extern tabled_inverses sont;
#line 674 "nonisotropic.cpp"
    tabled_inverses& get_tabled();
#line 683 "nonisotropic.cpp"
    int approx_distance(heptagon *h1, heptagon *h2);
#line 692 "nonisotropic.cpp"
    void create_faces();
    }
  #endif
  namespace nilv {
#line 756 "nonisotropic.cpp"
    hyperpoint formula_exp(hyperpoint v);
#line 777 "nonisotropic.cpp"
    hyperpoint get_inverse_exp(hyperpoint h, flagtype prec IS(pNORMAL));
#line 817 "nonisotropic.cpp"
    extern string nilshader;
#line 844 "nonisotropic.cpp"
    struct mvec : array<int, 3> {
    
    mvec() { }
    
    mvec(int x, int y, int z) { 
    auto& a = *this;
    a[0] = x; a[1] = y; a[2] = z;
    }
    mvec inverse() {  
    auto& a = *this;
    return mvec(-a[0], -a[1], -a[2]+a[1] * a[0]); 
    }
    mvec operator * (const mvec b) {
    auto& a = *this;
    return mvec(a[0] + b[0], a[1] + b[1], a[2] + b[2] + a[0] * b[1]);
    }
    };
#line 865 "nonisotropic.cpp"
    extern ld nilwidth;
#line 870 "nonisotropic.cpp"
    struct nilstructure {
    vector<mvec> movevectors;
    vector<vector<hyperpoint>> facevertices;
    };
#line 904 "nonisotropic.cpp"
    nilstructure& current_ns();
#line 906 "nonisotropic.cpp"
    extern array<int,3> nilperiod, nilperiod_edit;
#line 909 "nonisotropic.cpp"
    transmatrix adjmatrix(int i);
#line 954 "nonisotropic.cpp"
    mvec get_coord(heptagon *h);
#line 956 "nonisotropic.cpp"
    heptagon *get_heptagon_at(mvec m);
#line 958 "nonisotropic.cpp"
    void set_flags();
#line 966 "nonisotropic.cpp"
    hyperpoint on_geodesic(hyperpoint s0, hyperpoint s1, ld x);
#line 972 "nonisotropic.cpp"
    color_t colorize(cell *c, char whichCanvas);
#line 993 "nonisotropic.cpp"
    void prepare_niltorus3();
#line 998 "nonisotropic.cpp"
    void show_niltorus3();
#line 1037 "nonisotropic.cpp"
    void create_faces();
    }
#line 1049 "nonisotropic.cpp"
  bool in_s2xe();
#line 1050 "nonisotropic.cpp"
  bool in_h2xe();
#line 1051 "nonisotropic.cpp"
  bool in_e2xe();
  namespace hybrid {
#line 1055 "nonisotropic.cpp"
    extern eGeometry underlying;
#line 1056 "nonisotropic.cpp"
    extern geometry_information *underlying_cgip;
#line 1058 "nonisotropic.cpp"
    eGeometryClass under_class();
#line 1060 "nonisotropic.cpp"
    extern int csteps;
#line 1062 "nonisotropic.cpp"
    extern int disc_quotient;
#line 1064 "nonisotropic.cpp"
    extern map<heptagon*, short> altmap_heights;
#line 1066 "nonisotropic.cpp"
    void configure(eGeometry g);
#line 1105 "nonisotropic.cpp"
    void reconfigure();
#line 1114 "nonisotropic.cpp"
    extern hrmap *pmap;
#line 1115 "nonisotropic.cpp"
    extern geometry_information *pcgip;
#line 1116 "nonisotropic.cpp"
    extern eGeometry actual_geometry;
#line 1141 "nonisotropic.cpp"
    vector<int>& make_shift(cell *c);
#line 1147 "nonisotropic.cpp"
    int& get_shift_current(cellwalker cw);
#line 1151 "nonisotropic.cpp"
    bool have_shift(cellwalker cw);
#line 1155 "nonisotropic.cpp"
    int get_shift(cellwalker cw0);
#line 1199 "nonisotropic.cpp"
    void ensure_shifts(cell *c);
#line 1215 "nonisotropic.cpp"
    int cycle_discrepancy(cellwalker cw0);
#line 1227 "nonisotropic.cpp"
    void fix_bounded_cycles();
#line 1321 "nonisotropic.cpp"
    cell *get_at(cell *base, int level);
#line 1325 "nonisotropic.cpp"
    pair<cell*, int> get_where(cell *c);
#line 1327 "nonisotropic.cpp"
    void find_cell_connection(cell *c, int d);
#line 1350 "nonisotropic.cpp"
    hrmap* get_umap();
#line 1353 "nonisotropic.cpp"
    template<class T> auto in_underlying_geometry(const T& f) -> decltype(f()) {
    if(!hybri) return f();
    dynamicval<eGeometry> g(geometry, underlying);
    dynamicval<eGeometry> gag(actual_geometry, geometry);
    dynamicval<int> gss(underlying_cgip->single_step, cgi.single_step);
    dynamicval<int> gsp(underlying_cgip->psl_steps, cgi.psl_steps);
    dynamicval<geometry_information*> gc(cgip, underlying_cgip);
    dynamicval<hrmap*> gpm(pmap, currentmap);
    dynamicval<hrmap*> gm(currentmap, get_umap());
    return f();
    }
    
    #define PIU(x) hr::hybrid::in_underlying_geometry([&] { return (x); })
#line 1368 "nonisotropic.cpp"
    hyperpoint get_corner(cell *c, int i, int next, ld z);
#line 1405 "nonisotropic.cpp"
    vector<pair<int, cell*>> gen_sample_list();
#line 1417 "nonisotropic.cpp"
    void will_link(cell *c);
#line 1419 "nonisotropic.cpp"
    extern bool in_link;
#line 1421 "nonisotropic.cpp"
    void link();
#line 1445 "nonisotropic.cpp"
    int celldistance(cell *c1, cell *c2);
#line 1472 "nonisotropic.cpp"
    void configure_period();
    }
  namespace product {
#line 1586 "nonisotropic.cpp"
    extern bool current_spin_invalid, cmirror;
#line 1587 "nonisotropic.cpp"
    extern int cspin;
#line 1590 "nonisotropic.cpp"
    hyperpoint inverse_exp(hyperpoint h);
#line 1612 "nonisotropic.cpp"
    hyperpoint direct_exp(hyperpoint h);
#line 1622 "nonisotropic.cpp"
    bool validate_spin();
#line 1644 "nonisotropic.cpp"
    void show_config();
    }
  namespace slr {
#line 1683 "nonisotropic.cpp"
    extern ld range_xy;
#line 1684 "nonisotropic.cpp"
    extern int steps;
#line 1686 "nonisotropic.cpp"
    transmatrix translate(hyperpoint h);
#line 1695 "nonisotropic.cpp"
    hyperpoint polar(ld r, ld theta, ld phi);
#line 1699 "nonisotropic.cpp"
    hyperpoint xyz_point(ld x, ld y, ld z);
#line 1705 "nonisotropic.cpp"
    hyperpoint get_inverse_exp(shiftpoint h);
#line 1882 "nonisotropic.cpp"
    extern string slshader;
    }
  namespace rots {
#line 2026 "nonisotropic.cpp"
    extern ld underlying_scale;
    #if MAXMDIM >= 4
#line 2029 "nonisotropic.cpp"
    transmatrix uxpush(ld x);
#line 2034 "nonisotropic.cpp"
    transmatrix uypush(ld y);
#line 2039 "nonisotropic.cpp"
    transmatrix uzpush(ld z);
#line 2044 "nonisotropic.cpp"
    transmatrix lift_matrix(const transmatrix& T);
#line 2060 "nonisotropic.cpp"
    extern std::map<int, transmatrix> saved_matrices_ray;
#line 2124 "nonisotropic.cpp"
    transmatrix qtm(hyperpoint h);
#line 2171 "nonisotropic.cpp"
    extern bool drawing_underlying;
#line 2173 "nonisotropic.cpp"
    void draw_underlying(bool cornermode);
#line 2237 "nonisotropic.cpp"
    hyperpoint formula_exp(hyperpoint vel);
    #endif
    }
  namespace stretch {
#line 2299 "nonisotropic.cpp"
    extern ld factor;
#line 2301 "nonisotropic.cpp"
    extern bool mstretch;
#line 2303 "nonisotropic.cpp"
    extern transmatrix m_itoa, m_atoi, m_pd;
#line 2304 "nonisotropic.cpp"
    extern ld ms_christoffel[3][3][3];
#line 2306 "nonisotropic.cpp"
    extern transmatrix mstretch_matrix;
#line 2308 "nonisotropic.cpp"
    void enable_mstretch();
#line 2419 "nonisotropic.cpp"
    bool applicable();
#line 2423 "nonisotropic.cpp"
    bool in();
#line 2427 "nonisotropic.cpp"
    transmatrix translate(hyperpoint h);
#line 2437 "nonisotropic.cpp"
    transmatrix itranslate(hyperpoint h);
#line 2451 "nonisotropic.cpp"
    ld squared();
#line 2455 "nonisotropic.cpp"
    ld not_squared();
#line 2459 "nonisotropic.cpp"
    hyperpoint isometric_to_actual(const hyperpoint at, const hyperpoint velocity);
#line 2466 "nonisotropic.cpp"
    hyperpoint actual_to_isometric(const hyperpoint at, const hyperpoint velocity);
#line 2473 "nonisotropic.cpp"
    hyperpoint christoffel(const hyperpoint at, const hyperpoint velocity, const hyperpoint transported);
#line 2499 "nonisotropic.cpp"
    ld sqnorm(hyperpoint at, hyperpoint h);
#line 2506 "nonisotropic.cpp"
    vector<hyperpoint> inverse_exp_all(hyperpoint h, int generations);
    }
  namespace nisot {
#line 2643 "nonisotropic.cpp"
    hyperpoint christoffel(const hyperpoint at, const hyperpoint velocity, const hyperpoint transported);
#line 2652 "nonisotropic.cpp"
    bool in_table_range(hyperpoint h);
#line 2659 "nonisotropic.cpp"
    hyperpoint get_acceleration(const hyperpoint& at, const hyperpoint& vel);
#line 2663 "nonisotropic.cpp"
    void geodesic_step(hyperpoint& at, hyperpoint& vel);
#line 2674 "nonisotropic.cpp"
    extern int rk_steps;
#line 2676 "nonisotropic.cpp"
    hyperpoint numerical_exp(hyperpoint v);
#line 2684 "nonisotropic.cpp"
    transmatrix parallel_transport_bare(transmatrix Pos, hyperpoint h);
#line 2775 "nonisotropic.cpp"
    void fixmatrix(transmatrix& T);
#line 2784 "nonisotropic.cpp"
    transmatrix parallel_transport(const transmatrix Position, const hyperpoint direction);
#line 2791 "nonisotropic.cpp"
    transmatrix spin_towards(const transmatrix Position, const hyperpoint goal, flagtype prec IS(pNORMAL));
#line 2803 "nonisotropic.cpp"
    hrmap *new_map();
    }

  // implemented in: orbgen.cpp

#line 13 "orbgen.cpp"
  enum eOrbLandRelation { 
  olrForbidden, // never appears: forbidden
  olrDangerous, // never appears: would be dangerous
  olrUseless,   // never appears: useless here
  olrNoPrizes,  // no prizes in this land
  olrNoPrizeOrb,// orb not allowed as a prize
  olrPrize25,   // prize for collecting 25
  olrPrize3,    // prize for collecting 3
  olrNative,    // native orb in this land
  olrNative1,   // native orb in this land (1)
  olrGuest,     // extra orb in this land
  olrPNative,   // Land of Power: native
  olrPBasic,    // Land of Power: basic orbs
  olrPPrized,   // Land of Power: prized orbs
  olrPNever,    // Land of Power: foreign orbs
  olrHub,       // hub lands
  olrMonster,   // available from a monster
  olrAlways,    // always available
  olrBurns      // burns
  };
#line 36 "orbgen.cpp"
  namespace orbgenflags {
  // generates in the given land from 10 treasures, in the classic mode
  static const int LOCAL10 = 1;
  // generates in the Crossroads from 10 treasures, in the classic mode
  static const int CROSS10 = 2;
  // generates in other places from 25 treasures, in the classic mode
  static const int GLOBAL25 = 4;
  // in OSM you get it once at 10 treasures
  static const int OSM_AT10 = 8;
  
  
  // 'native' functions return this
  static const int NATIVE = 64;
  // 'local' orb will be also placed in OSM (at 25 treasures); needs LOCAL10
  static const int OSM_LOCAL25 = 128;
  // 'crossroads' orb will be also placed in OSM (at 50 treasures)
  static const int OSM_CROSS50 = 256;
  // 'crossroads' orb will be also placed in OSM (at 25 treasures)
  static const int OSM_CROSS25 = 512;
  // 'global' orb will be also placed in OSM (at 100 treasures)
  static const int OSM_GLOBAL100 = 1024;
  // do not create in the Crossroads in the tactics mode
  static const int NO_TACTIC = (1<<11);
  // guest Orb
  static const int GUEST = (1<<12);
  
  // typical combinations
  static const int S_NATIVE = LOCAL10 | CROSS10 | GLOBAL25 | NATIVE;
  static const int S_GUEST  = LOCAL10 | OSM_AT10 | GUEST;
  static const int S_YENDOR = S_NATIVE | OSM_LOCAL25 | OSM_CROSS50 | OSM_GLOBAL100 | NO_TACTIC;
  static const int S_NAT_NT = S_NATIVE | NO_TACTIC;
  static const int S_NA_O25 = S_NATIVE | OSM_CROSS25;
  }
  
  struct orbinfo {
  int flags;
  eLand l;
  int lchance;
  int gchance;
  eItem orb;
  bool is_native() const { using namespace orbgenflags; return flags & NATIVE; }
  };
#line 80 "orbgen.cpp"
  extern vector<orbinfo> orbinfos;
#line 180 "orbgen.cpp"
  eItem nativeOrbType(eLand l);
#line 200 "orbgen.cpp"
  extern string olrDescriptions[18];
#line 221 "orbgen.cpp"
  eOrbLandRelation getOLR(eItem it, eLand l);
#line 419 "orbgen.cpp"
  int orbsUnlocked();
#line 427 "orbgen.cpp"
  ld orbprizefun(int tr);
#line 433 "orbgen.cpp"
  ld orbcrossfun(int tr);
#line 440 "orbgen.cpp"
  bool buildPrizeMirror(cell *c, int freq);
#line 449 "orbgen.cpp"
  extern cellwalker cwt;
#line 452 "orbgen.cpp"
  eLand getPrizeLand(cell *c IS(cwt.at));
#line 463 "orbgen.cpp"
  void placePrizeOrb(cell *c);
#line 513 "orbgen.cpp"
  int treasureForLocal();
#line 517 "orbgen.cpp"
  bool extra_safety_for_memory(cell *c);
#line 527 "orbgen.cpp"
  void placeLocalOrbs(cell *c);
#line 568 "orbgen.cpp"
  void placeLocalSpecial(cell *c, int outof, int loc IS(1), int priz IS(1));
#line 577 "orbgen.cpp"
  void placeCrossroadOrbs(cell *c);
#line 613 "orbgen.cpp"
  void placeOceanOrbs(cell *c);

  // implemented in: orbs.cpp

#line 11 "orbs.cpp"
  extern bool orbused[ittypes], lastorbused[ittypes];
#line 13 "orbs.cpp"
  bool markOrb(eItem it);
#line 19 "orbs.cpp"
  bool markEmpathy(eItem it);
#line 26 "orbs.cpp"
  bool markEmpathy2(eItem it);
#line 33 "orbs.cpp"
  bool markOrb2(eItem it);
#line 40 "orbs.cpp"
  int fixpower(int qty);
#line 45 "orbs.cpp"
  void useupOrb(eItem it, int qty);
#line 50 "orbs.cpp"
  void drainOrb(eItem it, int target IS(0));
#line 54 "orbs.cpp"
  void empathyMove(const movei& mi);
#line 79 "orbs.cpp"
  int intensify(int val);
#line 83 "orbs.cpp"
  bool reduceOrbPower(eItem it, int cap);
#line 105 "orbs.cpp"
  void reduceOrbPowerAlways(eItem it);
#line 112 "orbs.cpp"
  void reverse_curse(eItem curse, eItem orb, bool cancel);
#line 126 "orbs.cpp"
  void chargeOrbs();
#line 135 "orbs.cpp"
  void reduceOrbPowers();
#line 236 "orbs.cpp"
  void flashAlchemist(cell *c);
#line 245 "orbs.cpp"
  void flashCell(cell *c, eMonster killer, flagtype flags);
#line 308 "orbs.cpp"
  void activateFlashFrom(cell *cf, eMonster who, flagtype flags);
#line 324 "orbs.cpp"
  bool distanceBound(cell *c1, cell *c2, int d);
#line 332 "orbs.cpp"
  void checkFreedom(cell *cf);
#line 366 "orbs.cpp"
  void activateFlash();
#line 383 "orbs.cpp"
  bool reflectingBarrierAt(cell *c);
#line 390 "orbs.cpp"
  bool reflectingBarrierAt(cellwalker& c, int d);
#line 406 "orbs.cpp"
  void killAdjacentSharks(cell *c);
#line 430 "orbs.cpp"
  void castLightningBolt(cellwalker lig);
#line 563 "orbs.cpp"
  void castLightningBoltFrom(cell *c);
#line 567 "orbs.cpp"
  void activateLightning();
#line 591 "orbs.cpp"
  bool haveRangedTarget();
#line 618 "orbs.cpp"
  void teleportTo(cell *dest);
#line 667 "orbs.cpp"
  bool jumpTo(orbAction a, cell *dest, eItem byWhat, int bonuskill IS(0), eMonster dashmon IS(moNone));
#line 808 "orbs.cpp"
  eMonster summonedAt(cell *dest);
#line 1044 "orbs.cpp"
  void checkStunKill(cell *dest);
#line 1179 "orbs.cpp"
  bool monstersnearO(orbAction a, cell *c);
#line 1188 "orbs.cpp"
  bool isCheck(orbAction a);
#line 1189 "orbs.cpp"
  bool isWeakCheck(orbAction a);
#line 1191 "orbs.cpp"
  movei blowoff_destination(cell *c, int& di);
#line 1206 "orbs.cpp"
  int check_jump(cell *cf, cell *ct, flagtype flags, cell*& jumpthru);
#line 1222 "orbs.cpp"
  int check_phase(cell *cf, cell *ct, flagtype flags, cell*& jumpthru);
#line 1238 "orbs.cpp"
  cell *common_neighbor(cell *cf, cell *ct);
#line 1245 "orbs.cpp"
  void apply_impact(cell *c);
#line 1258 "orbs.cpp"
  int check_vault(cell *cf, cell *ct, flagtype flags, cell*& jumpthru);
#line 1276 "orbs.cpp"
  eItem targetRangedOrb(cell *c, orbAction a);
#line 1600 "orbs.cpp"
  int orbcharges(eItem it);
#line 1731 "orbs.cpp"
  bool isShmupLifeOrb(eItem it);
#line 1739 "orbs.cpp"
  void makelava(cell *c, int i);
#line 1747 "orbs.cpp"
  void orboflava(int i);

  // implemented in: passable.cpp

#line 15 "passable.cpp"
  bool againstCurrent(cell *w, cell *from);
#line 32 "passable.cpp"
  bool boatGoesThrough(cell *c);
#line 44 "passable.cpp"
  void become_water(cell *c);
#line 53 "passable.cpp"
  void placeWater(cell *c, cell *c2);
#line 63 "passable.cpp"
  int incline(cell *cfrom, cell *cto);
#line 69 "passable.cpp"
  bool checkflags(flagtype flags, flagtype x);
#line 86 "passable.cpp"
  bool strictlyAgainstGravity(cell *w, cell *from, bool revdir, flagtype flags);
#line 92 "passable.cpp"
  bool anti_alchemy(cell *w, cell *from);
#line 125 "passable.cpp"
  #define P_MONSTER    Flag(0)  // can move through monsters
  #define P_MIRROR     Flag(1)  // can move through mirrors
  #define P_REVDIR     Flag(2)  // reverse direction movement
  #define P_WIND       Flag(3)  // can move against the wind
  #define P_GRAVITY    Flag(4)  // can move against the gravity
  #define P_ISPLAYER   Flag(5)  // player-only moves (like the Round Table jump)
  #define P_ONPLAYER   Flag(6)  // always can step on the player
  #define P_FLYING     Flag(7)  // is flying
  #define P_BULLET     Flag(8)  // bullet can fly through more things
  #define P_MIRRORWALL Flag(9)  // mirror images go through mirror walls
  #define P_JUMP1      Flag(10) // first part of a jump
  #define P_JUMP2      Flag(11) // second part of a jump
  #define P_TELE       Flag(12) // teleport onto
  #define P_BLOW       Flag(13) // Orb of Air -- blow, or push
  #define P_AETHER     Flag(14) // aethereal
  #define P_FISH       Flag(15) // swimming
  #define P_WINTER     Flag(16) // fire resistant
  #define P_USEBOAT    Flag(17) // can use boat
  #define P_NOAETHER   Flag(18) // disable AETHER
  #define P_FRIENDSWAP Flag(19) // can move on friends (to swap with tem)
  #define P_ISFRIEND   Flag(20) // is a friend (can use Empathy + Winter/Aether/Fish combo)
  #define P_LEADER     Flag(21) // can push statues and use boats
  #define P_MARKWATER  Flag(22) // mark Orb of Water as used
  #define P_EARTHELEM  Flag(23) // Earth Elemental
  #define P_WATERELEM  Flag(24) // Water Elemental
  #define P_IGNORE37   Flag(25) // ignore the triheptagonal board
  #define P_CHAIN      Flag(26) // for chaining moves with boats
  #define P_DEADLY     Flag(27) // suicide moves allowed
  #define P_ROSE       Flag(28) // rose smell
  #define P_CLIMBUP    Flag(29) // allow climbing up
  #define P_CLIMBDOWN  Flag(30) // allow climbing down
  #define P_REPTILE    Flag(31) // is reptile
  #define P_VOID       Flag(32) // void beast
  #define P_PHASE      Flag(33) // phasing movement
  #define P_PULLMAGNET Flag(34) // pull the other part of the magnet
  #define P_WATERCURSE Flag(35) // Curse of Water
#line 163 "passable.cpp"
  bool passable(cell *w, cell *from, flagtype flags);
#line 317 "passable.cpp"
  extern vector<pair<cell*, int> > airmap;
#line 319 "passable.cpp"
  int airdist(cell *c);
#line 327 "passable.cpp"
  ld calcAirdir(cell *c);
#line 351 "passable.cpp"
  bool againstWind(cell *cto, cell *cfrom);
#line 379 "passable.cpp"
  bool ghostmove(eMonster m, cell* to, cell* from, flagtype extra);
#line 463 "passable.cpp"
  bool canPushStatueOn(cell *c, flagtype flags);
#line 470 "passable.cpp"
  void moveBoat(const movei& mi);
#line 477 "passable.cpp"
  void moveBoatIfUsingOne(const movei& mi);
#line 505 "passable.cpp"
  bool againstPair(cell *c1, cell *c2, eMonster m);
#line 511 "passable.cpp"
  bool notNearItem(cell *c);
#line 516 "passable.cpp"
  bool isNeighbor1(cell *f, cell *w);
#line 520 "passable.cpp"
  bool passable_for(eMonster m, cell *w, cell *from, flagtype extra);
#line 642 "passable.cpp"
  eMonster movegroup(eMonster m);
#line 644 "passable.cpp"
  bool logical_adjacent(cell *c1, eMonster m1, cell *c2);
#line 658 "passable.cpp"
  void buildAirmap();
#line 674 "passable.cpp"
  extern int rosewave, rosephase;
#line 683 "passable.cpp"
  extern map<cell*, int> rosemap;
#line 685 "passable.cpp"
  int rosedist(cell *c);
#line 693 "passable.cpp"
  bool againstRose(cell *cfrom, cell *cto);
#line 699 "passable.cpp"
  bool withRose(cell *cfrom, cell *cto);
#line 705 "passable.cpp"
  void buildRosemap();
#line 742 "passable.cpp"
  bool scentResistant();

  // implemented in: patterns.cpp

#line 14 "patterns.cpp"
  int emerald_heptagon(int parent, int dir);
#line 377 "patterns.cpp"
  int emerald_hexagon(int a, int b, int c);
#line 1020 "patterns.cpp"
  int firstfiftyval(int d);
#line 1025 "patterns.cpp"
  int nextfiftyval(int par, int gpar, int d);
#line 1034 "patterns.cpp"
  int land50(int x);
#line 1036 "patterns.cpp"
  bool polara50(int x);
#line 1038 "patterns.cpp"
  bool polarb50(int x);
#line 1040 "patterns.cpp"
  int cdist50(int x);
#line 1062 "patterns.cpp"
  extern int zebratable6[28][3];
#line 1073 "patterns.cpp"
  int zebra_heptagon(int parent, int dir);
#line 1125 "patterns.cpp"
  int fifty_38(int f, int d);

  // implemented in: pcmove.cpp

#line 12 "pcmove.cpp"
  extern bool keepLightning;
#line 14 "pcmove.cpp"
  extern bool seenSevenMines;
#line 17 "pcmove.cpp"
  extern bool hauntedWarning;
#line 20 "pcmove.cpp"
  extern bool survivalist;
#line 22 "pcmove.cpp"
  void fail_survivalist();
#line 27 "pcmove.cpp"
  extern bool invismove;
#line 29 "pcmove.cpp"
  extern bool invisfish;
#line 32 "pcmove.cpp"
  extern bool flipplayer;
#line 35 "pcmove.cpp"
  extern cellwalker cwt;
#line 37 "pcmove.cpp"
  cell*& singlepos();
#line 38 "pcmove.cpp"
  inline bool singleused();
#line 41 "pcmove.cpp"
  extern bool playermoved;
#line 44 "pcmove.cpp"
  extern int  cheater;
#line 47 "pcmove.cpp"
  extern bool landvisited[landtypes];
#line 49 "pcmove.cpp"
  extern int noiseuntil; // noise until the given turn
#line 51 "pcmove.cpp"
  void createNoise(int t);
#line 58 "pcmove.cpp"
  enum eLastmovetype { lmSkip, lmMove, lmAttack, lmPush, lmTree, lmInstant };
  extern eLastmovetype lastmovetype, nextmovetype;
  
  enum eForcemovetype { fmSkip, fmMove, fmAttack, fmInstant, fmActivate };
  extern eForcemovetype forcedmovetype;
  namespace orbbull {
#line 76 "pcmove.cpp"
    void gainBullPowers();
#line 82 "pcmove.cpp"
    void check();
    }
#line 186 "pcmove.cpp"
  extern cell *lastmove;
#line 191 "pcmove.cpp"
  struct pcmove {
  bool switchplaces;
  bool checkonly;
  bool errormsgs;
  int origd;
  bool fmsMove, fmsAttack, fmsActivate;
  int d;
  int subdir;
  bool boatmove;
  bool good_tortoise;
  flagtype attackflags;
  
  bool movepcto();
  bool actual_move();
  bool stay();
  bool after_instant(bool kl);
  
  bool perform_actual_move();
  bool after_move();
  bool perform_move_or_jump();
  bool swing();
  bool boat_move();
  bool after_escape();
  bool move_if_okay();
  bool attack();
  
  bool checkNeedMove(bool checkonly, bool attacking);
  
  void tell_why_cannot_attack();
  void tell_why_impassable();
  void handle_friendly_ivy();
  
  movei mi, mip;
  pcmove() : mi(nullptr, nullptr, 0), mip(nullptr, nullptr, 0) {}
  
  bool vmsg(int code);
  };
#line 230 "pcmove.cpp"
  extern cell *global_pushto;
#line 234 "pcmove.cpp"
  bool movepcto(int d, int subdir IS(1), bool checkonly IS(false));
#line 392 "pcmove.cpp"
  void copy_metadata(cell *x, const gcell *y);
#line 408 "pcmove.cpp"
  
  extern void playSound(cell *c, const string& fname, int vol);
  
  /** \brief A structure to keep track of changes made during the player movement.
  *
  *  This is a singleton object, \link hr::changes \endlink.
  */
  
  struct changes_t {
  vector<reaction_t> rollbacks;
  vector<reaction_t> commits;
  bool on;
  bool checking;
  
  /**
  * \brief Start keeping track of changes, perform changes.
  *
  * init(false) if you intend to commit the changes (if successful), or 
  * init(true) if you just want to check whether the move would be successful, 
  * without performing it if it is.
  */
  
  void init(bool ch) {
  on = true; 
  ccell(cwt.at);
  forCellEx(c1, cwt.at) ccell(c1);
  value_keep(kills);
  value_keep(items);
  value_keep(hrngen);
  checking = ch;
  }
  
  /** \brief Commit the changes. Should only be called after init(false). */
  
  void commit() { 
  on = false; 
  for(auto& p: commits) p();
  rollbacks.clear();
  commits.clear();
  }
  
  /** \brief Rollback the changes. */
  
  void rollback(int pos = 0) { 
  on = false;
  while(!rollbacks.empty()) {
  rollbacks.back()();
  rollbacks.pop_back();
  }
  rollbacks.clear();
  commits.clear();
  }
  
  /** \brief The changes to cell c will be rolled back when rollback() is called. */
  void ccell(cell *c) {
  if(!on) return;
  gcell a = *c;
  rollbacks.push_back([c, a] { copy_metadata(c, &a); });
  }
  
  /** \brief Set the value of what to value. This change will be rolled back if necessary. */
  template<class T> void value_set(T& what, T value) {
  if(!on) { what = value; return; }
  if(what == value) return;
  T old = what;
  rollbacks.push_back([&what, old] { what = old; });
  what = value;
  }
  
  /** \brief Add step to the value of what. This change will be rolled back if necessary. */
  
  template<class T> void value_add(T& what, T step) {
  value_keep(what); what += step;
  }
  
  template<class T> void value_inc(T& what) { value_add(what, 1); }
  
  /** \brief Any change to the value of what will be rolled back if necessary. */
  
  template<class T> void value_keep(T& what) {
  if(!on) return;
  T old = what;
  rollbacks.push_back([&what, old] { what = old; });
  }
  
  /** \brief Like value_keep but for maps. */
  
  template<class T, class U, class V> void map_value(map<T, U>& vmap, V& key) {
  if(vmap.count(key)) {
  auto val = vmap[key];
  at_rollback([&vmap, key, val] { vmap[key] = val; });
  }
  else {
  at_rollback([&vmap, key] { vmap.erase(key); });
  }
  }
  
  /** \brief Perform the given action on commit. @see LATE */
  
  void at_commit(reaction_t act) {
  if(!on) act();
  else commits.emplace_back(act);
  }
  
  /** \brief Perform the given action on rollback. */
  
  void at_rollback(reaction_t act) {
  if(on) rollbacks.emplace_back(act);
  }
  
  void push_push(cell *tgt) {
  pushes.push_back(tgt);
  auto v = [] { pushes.pop_back(); };
  rollbacks.push_back(v);
  commits.push_back(v);
  }
  };
#line 528 "pcmove.cpp"
  extern changes_t changes;
#line 539 "pcmove.cpp"
  int chaos_mirror_dir(int dir, cellwalker src, cellwalker dst);
#line 545 "pcmove.cpp"
  template<class T> void swap_data(T& data, cell *c1, cell *c2) {
  changes.map_value(data, c1);
  changes.map_value(data, c2);
  if(data.count(c1) && data.count(c2))
  swap(data[c1], data[c2]);
  else if(data.count(c1))
  data[c2] = data[c1], data.erase(c1);
  else if(data.count(c2))
  data[c1] = data[c2], data.erase(c2);
  }
#line 717 "pcmove.cpp"
  void tortoise_hero_message(cell *c2);
#line 1089 "pcmove.cpp"
  bool chaos_forbidden(cell *c);
#line 1093 "pcmove.cpp"
  int fatigue_cost(const movei& mi);
#line 1281 "pcmove.cpp"
  inline bool movepcto(const movedir& md) { return movepcto(md.d, md.subdir); }
#line 1285 "pcmove.cpp"
  bool warningprotection(const string& s);
#line 1309 "pcmove.cpp"
  bool warningprotection_hit(eMonster m);
#line 1315 "pcmove.cpp"
  bool playerInWater();
#line 1322 "pcmove.cpp"
  int numplayers();
#line 1326 "pcmove.cpp"
  vector<cell*> player_positions();
#line 1334 "pcmove.cpp"
  vector<int> player_indices();
#line 1342 "pcmove.cpp"
  cell *playerpos(int i);
#line 1348 "pcmove.cpp"
  bool allPlayersInBoats();
#line 1354 "pcmove.cpp"
  int whichPlayerOn(cell *c);
#line 1361 "pcmove.cpp"
  bool isPlayerOn(cell *c);
#line 1365 "pcmove.cpp"
  bool isPlayerInBoatOn(cell *c, int i);
#line 1372 "pcmove.cpp"
  bool playerInBoat(int i);
#line 1376 "pcmove.cpp"
  bool isPlayerInBoatOn(cell *c);
#line 1381 "pcmove.cpp"
  bool playerInPower();
#line 1390 "pcmove.cpp"
  void playerMoveEffects(movei mi);
#line 1446 "pcmove.cpp"
  void afterplayermoved();
#line 1457 "pcmove.cpp"
  void produceGhost(cell *c, eMonster victim, eMonster who);
#line 1466 "pcmove.cpp"
  bool swordAttack(cell *mt, eMonster who, cell *c, int bb);
#line 1507 "pcmove.cpp"
  void swordAttackStatic(int bb);
#line 1511 "pcmove.cpp"
  void swordAttackStatic();
#line 1517 "pcmove.cpp"
  extern int plague_kills;
#line 1519 "pcmove.cpp"
  void spread_plague(cell *mf, cell *mt, int dir, eMonster who);
#line 1527 "pcmove.cpp"
  void sideAttackAt(cell *mf, int dir, cell *mt, eMonster who, eItem orb, cell *pf);
#line 1581 "pcmove.cpp"
  void sideAttack(cell *mf, int dir, eMonster who, int bonus, eItem orb);
#line 1592 "pcmove.cpp"
  void sideAttack(cell *mf, int dir, eMonster who, int bonuskill);
#line 1607 "pcmove.cpp"
  eMonster do_we_stab_a_friend(movei mi, eMonster who);
#line 1627 "pcmove.cpp"
  void wouldkill(const char *msg);
#line 1642 "pcmove.cpp"
  void movecost(cell* from, cell *to, int phase);

  // implemented in: polygons.cpp

  #if CAP_SHAPES
#line 14 "polygons.cpp"
  static constexpr ld NEWSHAPE = (-13.5);
#line 308 "polygons.cpp"
  #define SHADMUL (S3==4 ? 1.05 : 1.3)
#line 1495 "polygons.cpp"
  extern vector<long double> polydata;
  #endif

  // implemented in: quit.cpp

#line 11 "quit.cpp"
  bool quitsaves();
#line 16 "quit.cpp"
  bool needConfirmationEvenIfSaved();
#line 20 "quit.cpp"
  bool needConfirmation();
#line 25 "quit.cpp"
  int getgametime();
#line 29 "quit.cpp"
  string getgametime_s(int timespent IS(getgametime()));
#line 35 "quit.cpp"
  extern bool display_yasc_codes;
#line 49 "quit.cpp"
  void noaction();
#line 51 "quit.cpp"
  extern function<void()> cancel;
#line 54 "quit.cpp"
  struct hint {
  time_t last;
  function<bool()> usable;
  function<void()> display;
  function<void()> action;  
  };
#line 62 "quit.cpp"
  extern hint hints[];
#line 301 "quit.cpp"
  extern int hinttoshow;
#line 316 "quit.cpp"
  void showMission();
#line 523 "quit.cpp"
  string safety_help();
#line 536 "quit.cpp"
  void handleKeyQuit(int sym, int uni);
#line 599 "quit.cpp"
  int counthints();
#line 603 "quit.cpp"
  void showMissionScreen();

  // implemented in: quotient.cpp

  namespace quotientspace {
#line 30 "quotient.cpp"
    extern int rvadd;
#line 31 "quotient.cpp"
    extern int rvdir;
#line 36 "quotient.cpp"
    constexpr int symmask = (1<<30);
    
    struct code {
    vector<int> connections;
    
    bool operator == (const code &c2) const { return connections == c2.connections; }
    bool operator < (const code &c2) const { return connections < c2.connections; }
    
    };
    
    struct hrmap_quotient : hrmap_standard {
    
    hrmap_hyperbolic base;
    
    vector<cell*> celllist;
    
    cell *origin;
    
    map<quotientspace::code, int> reachable;
    vector<heptspin> bfsq;
    
    vector<int> connections;
    
    void add(const heptspin& hs);
    
    vector<heptagon*> allh;
    
    void generate_connections();
    
    void build();
    
    explicit hrmap_quotient() {
    generate_connections();    
    build();
    }
    
    explicit hrmap_quotient(const vector<int>& con) : connections(con) {
    build();
    }
    
    heptagon *getOrigin() override { return allh[0]; }
    
    ~hrmap_quotient() {
    for(int i=0; i<isize(allh); i++) {
    clearHexes(allh[i]);
    tailored_delete(allh[i]);
    }
    }
    
    vector<cell*>& allcells() override { return celllist; }
    };
#line 407 "quotient.cpp"
    struct hrmap_quotient* new_map();
    }

  // implemented in: racing.cpp

  namespace racing {
    #if CAP_RACING
#line 17 "racing.cpp"
    extern bool guiding;
#line 19 "racing.cpp"
    extern bool on;
#line 20 "racing.cpp"
    extern bool player_relative;
#line 21 "racing.cpp"
    extern bool standard_centering;
#line 22 "racing.cpp"
    extern bool track_ready;
#line 28 "racing.cpp"
    extern ld race_advance;
#line 33 "racing.cpp"
    extern int ghosts_to_show;
#line 34 "racing.cpp"
    extern int ghosts_to_save;
#line 44 "racing.cpp"
    extern vector<cell*> track;
#line 47 "racing.cpp"
    extern int trophy[MAXPLAYER];
#line 49 "racing.cpp"
    extern string track_code;
#line 55 "racing.cpp"
    void apply_seed();
#line 61 "racing.cpp"
    extern int race_start_tick, race_finish_tick[MAXPLAYER];
#line 333 "racing.cpp"
    void block_cells(vector<cell*> to_block, function<bool(cell*)> blockbound);
#line 390 "racing.cpp"
    void make_bounded_track(cell *s);
#line 426 "racing.cpp"
    extern bool bounded_track;
#line 428 "racing.cpp"
    void generate_track();
#line 746 "racing.cpp"
    extern ld race_angle;
#line 748 "racing.cpp"
    bool force_standard_centering();
#line 752 "racing.cpp"
    bool use_standard_centering();
#line 756 "racing.cpp"
    transmatrix track_matrix(int at, int dir);
#line 771 "racing.cpp"
    bool set_view();
#line 879 "racing.cpp"
    extern vector<eLand> race_lands;
#line 906 "racing.cpp"
    string racetimeformat(int t);
    #if MAXMDIM >= 4
#line 1094 "racing.cpp"
    void thurston_racing();
    #endif
#line 1254 "racing.cpp"
    void configure_race();
#line 1280 "racing.cpp"
    void displayScore(eLand l);
#line 1302 "racing.cpp"
    void race_won();
#line 1393 "racing.cpp"
    int get_percentage(cell *c);
#line 1397 "racing.cpp"
    int get_percentage(int i);
#line 1409 "racing.cpp"
    void drawStats();
#line 1436 "racing.cpp"
    void markers();
#line 1482 "racing.cpp"
    void add_debug(cell *c);
    #if MAXMDIM >= 4
#line 1493 "racing.cpp"
    void start_thurston();
    #endif
    #endif
    #if !CAP_RACING
#line 1504 "racing.cpp"
    extern always_false on;
    #endif
    }

  // implemented in: radar.cpp

#line 5 "radar.cpp"
  struct radarpoint {
  hyperpoint h;
  char glyph;
  color_t color;
  color_t line;
  };
  
  struct radarline {
  hyperpoint h1, h2;
  color_t line;
  };
#line 18 "radar.cpp"
  extern vector<radarpoint> radarpoints;
#line 19 "radar.cpp"
  extern vector<radarline> radarlines;
#line 21 "radar.cpp"
  extern transmatrix radar_transform;
  #if MAXMDIM >= 4
#line 61 "radar.cpp"
  void addradar(const shiftmatrix& V, char ch, color_t col, color_t outline);
#line 68 "radar.cpp"
  void addradar(const shiftpoint h1, const shiftpoint h2, color_t col);
  #endif
#line 99 "radar.cpp"
  void draw_radar(bool cornermode);
  #if MAXMDIM < 4
#line 194 "radar.cpp"
  void addradar(const shiftmatrix& V, char ch, color_t col, color_t outline);
  #endif

  // implemented in: raycaster.cpp

  namespace ray {
    #if CAP_RAY
#line 20 "raycaster.cpp"
    extern bool in_use;
#line 21 "raycaster.cpp"
    extern bool comparison_mode;
#line 24 "raycaster.cpp"
    extern int want_use;
#line 27 "raycaster.cpp"
    extern bool fixed_map;
#line 29 "raycaster.cpp"
    extern ld exp_start;
#line 30 "raycaster.cpp"
    extern ld exp_decay_exp;
#line 31 "raycaster.cpp"
    extern ld exp_decay_poly;
#line 39 "raycaster.cpp"
    extern int gms_array_size;
#line 41 "raycaster.cpp"
    extern ld maxstep_sol;
#line 42 "raycaster.cpp"
    extern ld maxstep_nil;
#line 43 "raycaster.cpp"
    extern ld maxstep_pro;
#line 44 "raycaster.cpp"
    extern ld minstep;
#line 46 "raycaster.cpp"
    extern ld reflect_val;
#line 50 "raycaster.cpp"
    extern ld hard_limit;
#line 52 "raycaster.cpp"
    extern int max_iter_sol;
#line 53 "raycaster.cpp"
    extern int max_iter_iso;
#line 54 "raycaster.cpp"
    extern int max_iter_eyes;
#line 56 "raycaster.cpp"
    extern int max_cells;
#line 57 "raycaster.cpp"
    extern bool rays_generate;
#line 59 "raycaster.cpp"
    ld& exp_decay_current();
#line 64 "raycaster.cpp"
    int& max_iter_current();
#line 70 "raycaster.cpp"
    bool is_eyes();
#line 78 "raycaster.cpp"
    bool is_stepbased();
#line 100 "raycaster.cpp"
    bool available();
#line 134 "raycaster.cpp"
    bool requested();
#line 148 "raycaster.cpp"
    struct raycaster : glhr::GLprogram {
    GLint uStart, uStartid, uM, uLength, uIPD;
    GLint uWallstart, uWallX, uWallY;
    GLint tConnections, tWallcolor, tTextureMap, tVolumetric;
    GLint uBinaryWidth, uPLevel, uLP, uStraighten, uReflectX, uReflectY;
    GLint uLinearSightRange, uExpStart, uExpDecay;
    GLint uBLevel;
    GLint uWallOffset, uSides;
    GLint uITOA, uATOI;
    GLint uToOrig, uFromOrig;
    GLint uProjection;
    GLint uEyeShift, uAbsUnit;
    GLint uMirrorShift;
    
    GLint tM, uInvLengthM;
    GLint tWall, uInvLengthWall;
    
    raycaster(string vsh, string fsh);
    };
#line 264 "raycaster.cpp"
    extern hookset<void(string&, string&)> hooks_rayshader;
#line 265 "raycaster.cpp"
    extern hookset<bool(shared_ptr<raycaster>)> hooks_rayset;
#line 1806 "raycaster.cpp"
    extern bool reset_rmap;
#line 1808 "raycaster.cpp"
    void reset_raycaster();
#line 1814 "raycaster.cpp"
    void reset_raycaster_map();
#line 1818 "raycaster.cpp"
    void cast();
    namespace volumetric {
#line 2073 "raycaster.cpp"
      extern bool on;
#line 2075 "raycaster.cpp"
      extern map<cell*, color_t> vmap;
#line 2079 "raycaster.cpp"
      void enable();
#line 2086 "raycaster.cpp"
      void random_fog();
#line 2092 "raycaster.cpp"
      void menu();
      }
#line 2144 "raycaster.cpp"
    void configure();
    #endif
    #if !CAP_RAY
#line 2355 "raycaster.cpp"
    extern always_false in_use;
#line 2356 "raycaster.cpp"
    extern always_false comparison_mode;
#line 2357 "raycaster.cpp"
    void reset_raycaster();
#line 2358 "raycaster.cpp"
    void cast();
    #endif
    }

  // implemented in: reg3.cpp

  #if MAXMDIM >= 4
#line 16 "reg3.cpp"
  hyperpoint final_coords(hyperpoint h);
  namespace reg3 {
#line 91 "reg3.cpp"
    extern int subcube_count;
#line 93 "reg3.cpp"
    extern flagtype coxeter_param;
#line 100 "reg3.cpp"
    inline short& altdist(heptagon *h) { return h->emeraldval; }
#line 103 "reg3.cpp"
    extern int extra_verification;
#line 105 "reg3.cpp"
    extern bool ultra_mirror_on;
#line 107 "reg3.cpp"
    bool ultra_mirror_in();
#line 109 "reg3.cpp"
    bool in();
#line 114 "reg3.cpp"
    void compute_ultra();
#line 172 "reg3.cpp"
    void make_vertices_only(vector<hyperpoint>& vo, const vector<vector<hyperpoint>>& csh);
#line 182 "reg3.cpp"
    void generate();
#line 344 "reg3.cpp"
    void generate_plain_subcubes();
#line 365 "reg3.cpp"
    void generate_coxeter(flagtype f);
#line 429 "reg3.cpp"
    void generate_special_subcubes(bool bch);
#line 624 "reg3.cpp"
    void generate_bch_oct();
#line 667 "reg3.cpp"
    void generate_subcells();
#line 711 "reg3.cpp"
    /** \brief vertex_adjacencies[heptagon id] is a list of other heptagons which are vertex adjacent 
    *  note: in case of ideal vertices this is just the face adjacency
    **/
    struct vertex_adjacency_info {
    /** id of the adjacent heptagon */
    int h_id;
    /** transition matrix to that heptagon */
    transmatrix T;
    /** the sequence of moves we need to make to get there */
    vector<int> move_sequence;
    };
    
    struct hrmap_closed3 : hrmap {
    vector<heptagon*> allh;
    vector<vector<vector<int>>> strafe_data;
    vector<vector<transmatrix>> tmatrices;    
    vector<vector<transmatrix>> tmatrices_cell;
    vector<cell*> acells;
    map<cell*, pair<int, int> > local_id; /* acells index, subshape index */
    vector<vector<cell*>> acells_by_master;
    vector<vector<vertex_adjacency_info> > vertex_adjacencies;
    vector<vector<vector<int>>> move_sequences;
    
    transmatrix adj(heptagon *h, int d) override { return tmatrices[h->fieldval][d]; }
    transmatrix adj(cell *c, int d) override { return tmatrices_cell[local_id.at(c).first][d]; }
    
    heptagon *getOrigin() override { return allh[0]; }
    
    transmatrix relative_matrixc(cell *h2, cell *h1, const hyperpoint& hint) override;
    
    void initialize(int cell_count);
    vector<cell*>& allcells() override { return acells; }
    
    subcellshape& get_cellshape(cell *c) override {
    if(PURE) return *cgi.heptshape ;
    int id = local_id.at(c).second;
    return cgi.subshapes[id];
    }
    
    transmatrix master_relative(cell *c, bool get_inverse) override {
    int id = local_id.at(c).second;
    auto& ss = cgi.subshapes[id];
    return get_inverse ? ss.from_cellcenter : ss.to_cellcenter;
    }
    
    void make_subconnections();
    
    int wall_offset(cell *c) override;
    int shvid(cell *c) override { return local_id.at(c).second; }
    
    transmatrix ray_iadj(cell *c, int i) override;
    
    cellwalker strafe(cellwalker cw, int j) override {
    int id = local_id.at(cw.at).first;
    return cellwalker(cw.at->cmove(j), strafe_data[id][j][cw.spin]);
    }
    
    const vector<int>& get_move_seq(cell *c, int i) override {
    int id = local_id.at(c).first;
    return move_sequences[id][i];
    }
    };
    
    struct hrmap_quotient3 : hrmap_closed3 { };
#line 794 "reg3.cpp"
    const vector<hyperpoint>& get_face_vertices(cell *c, int d);
#line 798 "reg3.cpp"
    int get_face_vertex_count(cell *c, int d);
    #if CAP_CRYSTAL
#line 1023 "reg3.cpp"
    crystal::coord decode_coord(int a);
    #endif
#line 1675 "reg3.cpp"
    const transmatrix& get_sphere_loc(int v);
#line 2097 "reg3.cpp"
    hrmap *new_alt_map(heptagon *o);
#line 2122 "reg3.cpp"
    extern bool reg3_rule_available;
#line 2123 "reg3.cpp"
    extern string other_rule;
#line 2125 "reg3.cpp"
    string get_rule_filename();
#line 2144 "reg3.cpp"
    bool in_rule();
#line 2148 "reg3.cpp"
    int rule_get_root(int i);
#line 2152 "reg3.cpp"
    const vector<short>& rule_get_children();
#line 2156 "reg3.cpp"
    hrmap* new_map();
#line 2170 "reg3.cpp"
    int quotient_count();
#line 2217 "reg3.cpp"
    int celldistance(cell *c1, cell *c2);
#line 2241 "reg3.cpp"
    bool pseudohept(cell *c);
#line 2284 "reg3.cpp"
    void generate_cellrotations();
    #endif
    #if MAXMDIM >= 4
#line 2412 "reg3.cpp"
    int matrix_order(const transmatrix A);
#line 2421 "reg3.cpp"
    void generate_fulls();
#line 2440 "reg3.cpp"
    void construct_relations();
#line 2508 "reg3.cpp"
    void edit_variation();
#line 2567 "reg3.cpp"
    void configure_variation();
    }
  #endif
  #if MAXMDIM == 3
  namespace reg3 {
#line 2579 "reg3.cpp"
    bool in();
#line 2580 "reg3.cpp"
    bool in_rule();
    }
  #endif

  // implemented in: renderbuffer.cpp

#line 40 "renderbuffer.cpp"
  struct renderbuffer {
  bool valid;
  int x, y;
  
  #if CAP_GL
  int tx, ty;
  GLuint FramebufferName;
  GLuint renderedTexture;
  GLuint depth_stencil_rb;
  Uint32 *expanded_data;
  void use_as_texture();
  #endif
  #if CAP_SDL
  SDL_Surface *srf;
  void make_surface();
  SDL_Surface *render();
  #endif
  
  renderbuffer(int x, int y, bool gl);
  ~renderbuffer();
  void enable();
  void clear(color_t col);
  };
  
  struct resetbuffer {
  GLint drawFboId, readFboId;
  #if CAP_SDL
  SDL_Surface *sreset;
  #endif
  resetbuffer();
  void reset();
  };
#line 171 "renderbuffer.cpp"
  extern int current_rbuffer;

  // implemented in: rug.cpp

  #if CAP_RUG
#line 18 "rug.cpp"
  extern bool rug_failure;
  namespace rug {
#line 22 "rug.cpp"
    extern bool mouse_control_rug;
#line 24 "rug.cpp"
    extern transmatrix rugView;
#line 26 "rug.cpp"
    extern ld lwidth;
#line 28 "rug.cpp"
    bool in_crystal();
#line 33 "rug.cpp"
    struct edge {
    struct rugpoint *target;
    ld len;
    };
    
    struct dexp_data {
    hyperpoint params;
    hyperpoint cont;
    ld remaining_distance;
    };
    
    struct rugpoint {
    double x1, y1;
    bool valid;
    bool inqueue;
    double dist;
    shiftpoint h;      // point in the represented space
    hyperpoint native; // point in the native space
    hyperpoint precompute;
    vector<edge> edges;
    vector<edge> anticusp_edges;
    // Find-Union algorithm
    rugpoint *glue;
    rugpoint *getglue() {
    return glue ? (glue = glue->getglue()) : this;
    }
    hyperpoint& gluenative() {
    return glue->native;
    }
    rugpoint() { glue = NULL; }
    void glueto(rugpoint *x) {
    x = x->getglue();
    auto y = getglue();
    if(x != y) y->glue = x;
    }
    int dexp_id;
    dexp_data surface_point;
    };
    
    struct triangle {
    rugpoint *m[3];
    triangle() { m[0] = m[1] = m[2] = nullptr; }
    triangle(rugpoint *m1, rugpoint *m2, rugpoint *m3) {
    m[0] = m1; m[1] = m2; m[2] = m3;
    }
    };
#line 81 "rug.cpp"
    extern vector<rugpoint*> points;
#line 82 "rug.cpp"
    extern vector<triangle> triangles;
#line 88 "rug.cpp"
    extern bool fast_euclidean;
#line 89 "rug.cpp"
    extern bool good_shape;
#line 90 "rug.cpp"
    extern bool subdivide_first;
#line 91 "rug.cpp"
    extern bool spatial_rug;
#line 93 "rug.cpp"
    extern bool subdivide_further();
#line 94 "rug.cpp"
    extern void subdivide();
#line 96 "rug.cpp"
    extern ld modelscale;
#line 97 "rug.cpp"
    extern ld model_distance;
#line 100 "rug.cpp"
    constexpr eGeometry rgHyperbolic = gSpace534;
    constexpr eGeometry rgEuclid = gCubeTiling;
    constexpr eGeometry rgSphere = gCell120;
    constexpr eGeometry rgElliptic = gECell120;
#line 106 "rug.cpp"
    extern eGeometry gwhere;
#line 109 "rug.cpp"
    #define USING_NATIVE_GEOMETRY_IN_RUG dynamicval<eGeometry> gw(geometry, rug::rugged ? hr::rug::gwhere : geometry)
    #define USING_NATIVE_GEOMETRY dynamicval<eGeometry> gw(geometry, hr::rug::gwhere)
#line 116 "rug.cpp"
    extern bool rugged;
#line 119 "rug.cpp"
    extern int vertex_limit;
#line 121 "rug.cpp"
    extern bool renderonce;
#line 122 "rug.cpp"
    extern int renderlate;
#line 123 "rug.cpp"
    extern bool rendernogl;
#line 124 "rug.cpp"
    extern int  texturesize;
#line 125 "rug.cpp"
    extern ld scale;
#line 127 "rug.cpp"
    extern ld anticusp_factor;
#line 128 "rug.cpp"
    extern ld anticusp_dist;
#line 130 "rug.cpp"
    extern ld err_zero;
#line 132 "rug.cpp"
    extern int queueiter, qvalid, dt;
#line 134 "rug.cpp"
    extern rugpoint *finger_center;
#line 135 "rug.cpp"
    extern ld finger_range;
#line 136 "rug.cpp"
    extern ld finger_force;
#line 140 "rug.cpp"
    bool perspective();
#line 152 "rug.cpp"
    void push_all_points(int coord, ld val);
#line 168 "rug.cpp"
    extern map<cell*, rugpoint*> rug_map;
#line 170 "rug.cpp"
    rugpoint *addRugpoint(shiftpoint h, double dist);
#line 275 "rug.cpp"
    rugpoint *findRugpoint(shiftpoint h);
#line 282 "rug.cpp"
    rugpoint *findOrAddRugpoint(shiftpoint h, double dist);
#line 293 "rug.cpp"
    bool edge_exists(rugpoint *e1, rugpoint *e2);
#line 313 "rug.cpp"
    void addTriangle(rugpoint *t1, rugpoint *t2, rugpoint *t3, ld len IS(1));
#line 341 "rug.cpp"
    void sort_rug_points();
#line 351 "rug.cpp"
    void calcparam_rug();
#line 362 "rug.cpp"
    struct clifford_torus {
    transmatrix T;
    transmatrix iT;
    ld xfactor, yfactor;
    bool flipped;
    hyperpoint xh, yh;
    hyperpoint torus_to_s4(hyperpoint t);  
    hyperpoint actual_to_torus(const hyperpoint& a) {
    return iT * a;
    }
    hyperpoint torus_to_actual(const hyperpoint& t) {
    return T * t;
    }
    clifford_torus();
    ld get_modelscale() {
    return hypot_d(2, xh) * xfactor * 2 * M_PI;
    }
    ld compute_mx();  
    };
    #if MAXMDIM >= 4
#line 427 "rug.cpp"
    void buildTorusRug();
    #endif
#line 529 "rug.cpp"
    void verify();
#line 555 "rug.cpp"
    void buildRug();
#line 629 "rug.cpp"
    void enqueue(rugpoint *m);
#line 687 "rug.cpp"
    void preset(rugpoint *m);
#line 757 "rug.cpp"
    void optimize(rugpoint *m, bool do_preset);
#line 783 "rug.cpp"
    extern int divides;
#line 784 "rug.cpp"
    extern int precision_increases;
#line 787 "rug.cpp"
    bool subdivide_further();
#line 793 "rug.cpp"
    void subdivide();
#line 848 "rug.cpp"
    ld modeldist(const hyperpoint& h1, const hyperpoint& h2);
#line 940 "rug.cpp"
    void addNewPoints();
#line 970 "rug.cpp"
    void physics();
#line 1034 "rug.cpp"
    extern basic_textureinfo tinf;
#line 1056 "rug.cpp"
    extern struct renderbuffer *glbuf;
#line 1058 "rug.cpp"
    void prepareTexture();
#line 1095 "rug.cpp"
    extern bool no_fog;
#line 1097 "rug.cpp"
    extern ld lowrug;
#line 1098 "rug.cpp"
    extern ld hirug;
#line 1100 "rug.cpp"
    extern GLuint alternate_texture;
#line 1102 "rug.cpp"
    bool rug_control();
#line 1105 "rug.cpp"
    
    struct using_rugview {
    using_rugview() { if(rug_control()) swap(View, rugView), swap(geometry, gwhere); }
    ~using_rugview() { if(rug_control()) swap(View, rugView), swap(geometry, gwhere); }
    };
    
#line 1113 "rug.cpp"
    extern purehookset hooks_rugframe;
#line 1115 "rug.cpp"
    void drawRugScene();
#line 1153 "rug.cpp"
    extern transmatrix currentrot;
#line 1155 "rug.cpp"
    void close_glbuf();
#line 1160 "rug.cpp"
    void ensure_glbuf();
#line 1170 "rug.cpp"
    void reopen();
#line 1181 "rug.cpp"
    extern bool display_warning;
#line 1183 "rug.cpp"
    void init_model();
#line 1231 "rug.cpp"
    void reset_view();
#line 1239 "rug.cpp"
    void init();
#line 1246 "rug.cpp"
    void clear_model();
#line 1254 "rug.cpp"
    void close();
#line 1267 "rug.cpp"
    bool handlekeys(int sym, int uni);
#line 1310 "rug.cpp"
    void finger_on(int coord, ld val);
#line 1320 "rug.cpp"
    extern ld move_on_touch;
#line 1322 "rug.cpp"
    void actDraw();
#line 1370 "rug.cpp"
    shiftpoint gethyper(ld x, ld y);
#line 1490 "rug.cpp"
    string makehelp();
#line 1512 "rug.cpp"
    void rug_geometry_choice();
#line 1541 "rug.cpp"
    void show();
#line 1732 "rug.cpp"
    void select();
#line 1737 "rug.cpp"
    void rug_save(string fname);
#line 1777 "rug.cpp"
    void rug_load(string fname);
    }
  #endif
  #if !CAP_RUG
  namespace rug {
#line 1932 "rug.cpp"
    extern bool rugged;
#line 1933 "rug.cpp"
    extern bool renderonce;
#line 1934 "rug.cpp"
    extern bool rendernogl;
#line 1935 "rug.cpp"
    extern bool mouse_control_rug;
#line 1936 "rug.cpp"
    extern int texturesize;
#line 1937 "rug.cpp"
    extern ld scale;
#line 1938 "rug.cpp"
    bool rug_control();
#line 1939 "rug.cpp"
    bool in_crystal();
#line 1940 "rug.cpp"
    void reset_view();
#line 1941 "rug.cpp"
    void close();
#line 1943 "rug.cpp"
    struct using_rugview {};
    }
  #endif

  // implemented in: rulegen.cpp

  namespace rulegen {
#line 15 "rulegen.cpp"
    extern int max_retries;
#line 16 "rulegen.cpp"
    extern int max_tcellcount;
#line 17 "rulegen.cpp"
    extern int max_adv_steps;
#line 18 "rulegen.cpp"
    extern int max_examine_branch;
#line 19 "rulegen.cpp"
    extern int max_bdata;
#line 22 "rulegen.cpp"
    extern int dlbonus;
#line 25 "rulegen.cpp"
    /** exception thrown by this algoritm in case of any problems */
    struct rulegen_failure : hr_exception {
    rulegen_failure(string _s) : hr_exception(_s) {}
    };
    
    /** this exception is thrown if we want to restart the computation -- this is normal, but if thrown more than max_retries times, just surrender */
    struct rulegen_retry : rulegen_failure {
    rulegen_retry(string _s) : rulegen_failure(_s) {}
    };
    
    /** this exception is thrown in case if we run into a special case that is not implemented yet */
    struct rulegen_surrender : rulegen_failure {
    rulegen_surrender(string _s) : rulegen_failure(_s) {}
    };
    
    const int MYSTERY = 31999;
    const int MYSTERY_DIST = 31998;
#line 47 "rulegen.cpp"
    extern int tcellcount;
#line 49 "rulegen.cpp"
    extern int tunified;
#line 52 "rulegen.cpp"
    struct tcell* tmove(tcell *c, int d);
    
    /** rulegen algorithm works on tcells which have their own map generation */
    struct tcell {
    /** tcells form a list */
    tcell *next;
    /** shape ID in arb::current */
    int id;
    /** degree */
    int type;
    /** distance from the root */
    short dist;
    /** cached code */
    short code;
    /** direction to the parent in the tree */
    short parent_dir;
    /** can we assume that dist is correct? if we assumed that the dist is correct but then find out it was wrong, throw an error */
    bool is_solid;
    bool distance_fixed;
    /** sometimes we find out that multiple tcells represent the same actual cell -- in this case we unify them; unified_to is used for the union-find algorithm */
    walker<tcell> unified_to;
    int degree() { return type; }
    connection_table<tcell> c;                           
    tcell*& move(int d) { return c.move(d); }
    tcell*& modmove(int d) { return c.modmove(d); }
    tcell* cmove(int d) { return tmove(this, d); }
    tcell* cmodmove(int d) { return tmove(this, c.fix(d)); }
    tcell() { }
    };
    
    inline void print(hstream& hs, tcell* h) { print(hs, "P", index_pointer(h)); }
    
    using twalker = walker<tcell>;
#line 116 "rulegen.cpp"
    extern tcell *first_tcell;
#line 238 "rulegen.cpp"
    extern vector<tcell*> t_origin;
#line 252 "rulegen.cpp"
    extern vector<twalker> debuglist;
#line 447 "rulegen.cpp"
    void look_for_shortcuts(tcell *c);
#line 540 "rulegen.cpp"
    using aid_t = pair<int, int>;
    
    struct analyzer {
    vector<twalker> spread;
    vector<int> parent_id;
    vector<int> spin;
    void add_step(int pid, int s);
    };
#line 561 "rulegen.cpp"
    extern map<aid_t, analyzer> analyzers;
#line 563 "rulegen.cpp"
    aid_t get_aid(twalker cw);
#line 569 "rulegen.cpp"
    analyzer& get_analyzer(twalker cw);
#line 582 "rulegen.cpp"
    vector<twalker> spread(analyzer& a, twalker cw);
#line 633 "rulegen.cpp"
    using code_t = pair<aid_t, vector<int> >;
    
    struct treestate {
    int id;
    bool known;
    vector<int> rules;
    twalker giver;
    int sid;
    int parent_dir;
    tcell* where_seen;
    code_t code;
    bool is_live;
    bool is_possible_parent;
    bool is_root;
    vector<pair<int, int>> possible_parents;
    };
    
    static const int C_IGNORE = 0;
    static const int C_CHILD = 1;
    static const int C_UNCLE = 2;
    static const int C_EQUAL = 4;
    static const int C_NEPHEW = 6;  
    static const int C_PARENT = 8;
#line 658 "rulegen.cpp"
    extern vector<treestate> treestates;
#line 750 "rulegen.cpp"
    pair<int, int> get_code(tcell *c);
#line 797 "rulegen.cpp"
    extern int rule_root;
#line 801 "rulegen.cpp"
    extern int try_count;
#line 807 "rulegen.cpp"
    /* special codes */
    static const int DIR_UNKNOWN = -1;
    static const int DIR_MULTI_GO_LEFT = -2;
    static const int DIR_MULTI_GO_RIGHT = -3;
    static const int DIR_LEFT = -4;
    static const int DIR_RIGHT = -5;
    static const int DIR_PARENT = -6;
#line 1387 "rulegen.cpp"
    void generate_rules();
#line 1658 "rulegen.cpp"
    int get_arb_dir(cell *c, int dir);
#line 1662 "rulegen.cpp"
    hrmap *new_hrmap_rulegen_alt(heptagon *h);
#line 1666 "rulegen.cpp"
    hrmap *new_hrmap_rulegen();
#line 1668 "rulegen.cpp"
    int get_state(cell *c);
#line 1675 "rulegen.cpp"
    bool known();
#line 1679 "rulegen.cpp"
    bool prepare_rules();
#line 1740 "rulegen.cpp"
    void parse_treestate(arb::arbi_tiling& c, exp_parser& ep);
#line 1780 "rulegen.cpp"
    void verify_parsed_treestates();
#line 1793 "rulegen.cpp"
    void show();
    }

  // implemented in: savemem.cpp

#line 12 "savemem.cpp"
  static const int PSEUDOKEY_MEMORY = 16397;
#line 15 "savemem.cpp"
  extern bool memory_saving_mode;
#line 17 "savemem.cpp"
  extern bool show_memory_warning;
#line 18 "savemem.cpp"
  extern bool ignored_memory_warning;
#line 22 "savemem.cpp"
  extern heptagon *last_cleared;
#line 24 "savemem.cpp"
  void destroycellcontents(cell *c);
#line 40 "savemem.cpp"
  extern vector<cell*> removed_cells;  
#line 96 "savemem.cpp"
  void save_memory();
#line 174 "savemem.cpp"
  extern purehookset hooks_removecells;
#line 176 "savemem.cpp"
  bool is_cell_removed(cell *c);
#line 180 "savemem.cpp"
  void set_if_removed(cell*& c, cell *val);
#line 186 "savemem.cpp"
  extern int reserve_count;
#line 187 "savemem.cpp"
  extern int reserve_limit;
#line 194 "savemem.cpp"
  extern purehookset hooks_clear_cache;
#line 205 "savemem.cpp"
  void apply_memory_reserve();
#line 229 "savemem.cpp"
  void memory_for_lib();
#line 233 "savemem.cpp"
  void show_memory_menu();
#line 287 "savemem.cpp"
  bool protect_memory();
#line 302 "savemem.cpp"
  bool memory_issues();

  // implemented in: screenshot.cpp

#line 11 "screenshot.cpp"
  extern bool hide_hud;
#line 14 "screenshot.cpp"
  namespace shot { void default_screenshot_content(); }
  namespace svg {
    #if !CAP_SVG
#line 21 "screenshot.cpp"
    extern always_false in;
    #endif
    #if CAP_SVG
#line 31 "screenshot.cpp"
    extern bool in;
#line 47 "screenshot.cpp"
    extern int divby;
#line 87 "screenshot.cpp"
    void circle(int x, int y, int size, color_t col, color_t fillcol, double linewidth);
#line 96 "screenshot.cpp"
    extern string link;
#line 111 "screenshot.cpp"
    void text(int x, int y, int size, const string& str, bool frame, color_t col, int align);
#line 153 "screenshot.cpp"
    void polygon(int *polyx, int *polyy, int polyi, color_t col, color_t outline, double linewidth);
#line 172 "screenshot.cpp"
    void render(const string& fname, const function<void()>& what IS(shot::default_screenshot_content));
    #endif
    }
  namespace wrl {
    #if !CAP_WRL
#line 254 "screenshot.cpp"
    extern always_false in;
    #endif
    #if CAP_WRL
#line 258 "screenshot.cpp"
    extern bool in;
#line 260 "screenshot.cpp"
    extern bool print;
#line 261 "screenshot.cpp"
    extern bool textures;
#line 263 "screenshot.cpp"
    extern ld rug_width;
#line 302 "screenshot.cpp"
    void fatten(vector<hyperpoint>& data, vector<glvertex>& tdata);
#line 376 "screenshot.cpp"
    int texture_type(dqi_poly& p);
#line 389 "screenshot.cpp"
    void prepare(dqi_poly& p);
#line 403 "screenshot.cpp"
    void polygon(dqi_poly& p);
#line 490 "screenshot.cpp"
    void render();
#line 521 "screenshot.cpp"
    void take(const string& fname, const function<void()>& what IS(shot::default_screenshot_content));
    #endif
    }
  #if CAP_SHOT
  namespace shot {
#line 640 "screenshot.cpp"
    enum screenshot_format { png, svg, wrl, rawfile };
#line 643 "screenshot.cpp"
    extern int rawfile_handle;
#line 645 "screenshot.cpp"
    extern int shotx;
#line 646 "screenshot.cpp"
    extern int shoty;
#line 647 "screenshot.cpp"
    extern screenshot_format format;
#line 648 "screenshot.cpp"
    extern bool transparent;
#line 649 "screenshot.cpp"
    extern ld gamma;
#line 650 "screenshot.cpp"
    extern int shotformat;
#line 651 "screenshot.cpp"
    extern string caption;
#line 652 "screenshot.cpp"
    extern ld fade;
#line 665 "screenshot.cpp"
    extern int shot_aa;
#line 667 "screenshot.cpp"
    void default_screenshot_content();
    #if CAP_SDL
#line 678 "screenshot.cpp"
    SDL_Surface *empty_surface(int x, int y, bool alpha);
    #endif
    #if CAP_PNG
#line 694 "screenshot.cpp"
    void postprocess(string fname, SDL_Surface *sdark, SDL_Surface *sbright);
    #endif
#line 731 "screenshot.cpp"
    extern purehookset hooks_take;
#line 767 "screenshot.cpp"
    void take(string fname, const function<void()>& what IS(default_screenshot_content));
#line 911 "screenshot.cpp"
    string format_name();
#line 918 "screenshot.cpp"
    string format_extension();
#line 926 "screenshot.cpp"
    void choose_screenshot_format();
#line 946 "screenshot.cpp"
    void menu();
    }
  #endif
  #if CAP_ANIMATIONS
  namespace anims {
#line 1105 "screenshot.cpp"
    enum eMovementAnimation {
    maNone, maTranslation, maRotation, maCircle, maParabolic, maTranslationRotation
    };
#line 1110 "screenshot.cpp"
    extern eMovementAnimation ma;
#line 1112 "screenshot.cpp"
    extern ld shift_angle, movement_angle, movement_angle_2;
#line 1113 "screenshot.cpp"
    extern ld normal_angle;
#line 1114 "screenshot.cpp"
    extern ld period;
#line 1115 "screenshot.cpp"
    extern int noframes;
#line 1116 "screenshot.cpp"
    extern ld cycle_length;
#line 1117 "screenshot.cpp"
    extern ld parabolic_length;
#line 1118 "screenshot.cpp"
    extern ld skiprope_rotation;
#line 1122 "screenshot.cpp"
    extern ld rug_rotation1, rug_rotation2, rug_forward, ballangle_rotation, env_ocean, env_volcano, rug_movement_angle, rug_shift_angle;
#line 1123 "screenshot.cpp"
    extern bool env_shmup;
#line 1124 "screenshot.cpp"
    extern ld rug_angle;
#line 1126 "screenshot.cpp"
    extern ld rotation_distance;
#line 1132 "screenshot.cpp"
    extern ld circle_radius;
#line 1133 "screenshot.cpp"
    extern ld circle_spins;
#line 1135 "screenshot.cpp"
    void moved();
#line 1154 "screenshot.cpp"
    struct animated_parameter {
    ld *value;
    ld last;
    string formula;
    reaction_t reaction;
    };
#line 1162 "screenshot.cpp"
    extern vector<animated_parameter> aps;
#line 1164 "screenshot.cpp"
    void deanimate(ld &x);
#line 1170 "screenshot.cpp"
    void get_parameter_animation(ld &x, string &s);
#line 1176 "screenshot.cpp"
    void animate_parameter(ld &x, string f, const reaction_t& r);
#line 1205 "screenshot.cpp"
    void reflect_view();
#line 1217 "screenshot.cpp"
    extern purehookset hooks_anim;
#line 1219 "screenshot.cpp"
    void animate_rug_movement(ld t);
#line 1228 "screenshot.cpp"
    void apply();
#line 1363 "screenshot.cpp"
    void rollback();
    #if CAP_FILES && CAP_SHOT
#line 1371 "screenshot.cpp"
    extern string animfile;
#line 1373 "screenshot.cpp"
    extern string videofile;
#line 1379 "screenshot.cpp"
    extern hookset<void(int, int)> hooks_record_anim;
#line 1381 "screenshot.cpp"
    bool record_animation_of(reaction_t content);
#line 1416 "screenshot.cpp"
    bool record_animation();
    #endif
#line 1421 "screenshot.cpp"
    extern purehookset hooks_after_video;
    #if CAP_VIDEO
#line 1424 "screenshot.cpp"
    bool record_video(string fname IS(videofile), bool_reaction_t rec IS(record_animation));
#line 1454 "screenshot.cpp"
    bool record_video_std();
    #endif
#line 1491 "screenshot.cpp"
    extern ld a, b;
#line 1495 "screenshot.cpp"
    void rug_angle_options();
#line 1508 "screenshot.cpp"
    void show();
#line 1840 "screenshot.cpp"
    bool any_animation();
#line 1848 "screenshot.cpp"
    bool any_on();
#line 1852 "screenshot.cpp"
    bool center_music();
    }
  #endif
  namespace startanims {
#line 1864 "screenshot.cpp"
    struct startanim {
    string name;
    reaction_t init;
    reaction_t render;
    };
    
    const int EXPLORE_START_ANIMATION = 2003;
    #if CAP_STARTANIM
#line 2041 "screenshot.cpp"
    extern startanim *current;
#line 2043 "screenshot.cpp"
    void pick();
#line 2057 "screenshot.cpp"
    void display();
#line 2066 "screenshot.cpp"
    void explore();
    #endif
    }

  // implemented in: shaders.cpp

#line 11 "shaders.cpp"
  extern ld levellines;
#line 12 "shaders.cpp"
  extern bool disable_texture;
  #if CAP_GL
#line 16 "shaders.cpp"
  constexpr flagtype GF_TEXTURE  = 1;
  constexpr flagtype GF_VARCOLOR = 2;
  constexpr flagtype GF_LIGHTFOG = 4;
  constexpr flagtype GF_LEVELS   = 8;
  constexpr flagtype GF_TEXTURE_SHADED  = 16;
  
  constexpr flagtype GF_which    = 31;
  
  constexpr flagtype SF_PERS3        = 256;
  constexpr flagtype SF_BAND         = 512;
  constexpr flagtype SF_USE_ALPHA    = 1024;
  constexpr flagtype SF_DIRECT       = 2048;
  constexpr flagtype SF_PIXELS       = 4096;
  constexpr flagtype SF_HALFPLANE    = 8192;
  constexpr flagtype SF_ORIENT       = 16384;
  constexpr flagtype SF_BOX          = 32768;
  constexpr flagtype SF_ZFOG         = 65536;
  constexpr flagtype SF_ODSBOX       = (1<<17);
#line 36 "shaders.cpp"
  extern bool solv_all;
#line 39 "shaders.cpp"
  /* standard attribute bindings */
  /* taken from: https://www.opengl.org/sdk/docs/tutorials/ClockworkCoders/attributes.php */
  constexpr int aPosition = 0;
  constexpr int aColor = 3;
  constexpr int aTexture = 8;
  
  /* texture bindings */
  constexpr int INVERSE_EXP_BINDING = 2;
  constexpr int AIR_BINDING = 4;
#line 50 "shaders.cpp"
  extern map<string, shared_ptr<glhr::GLprogram>> compiled_programs;
#line 52 "shaders.cpp"
  extern map<unsigned, shared_ptr<glhr::GLprogram>> matched_programs;
#line 63 "shaders.cpp"
  void reset_all_shaders();
#line 69 "shaders.cpp"
  string panini_shader();
#line 80 "shaders.cpp"
  string stereo_shader();
#line 744 "shaders.cpp"
  void add_if(string& shader, const string& seek, const string& function);
#line 749 "shaders.cpp"
  void add_fixed_functions(string& shader);
#line 772 "shaders.cpp"
  flagtype get_shader_flags();
#line 777 "shaders.cpp"
  void glapplymatrix(const transmatrix& V);
  #endif

  // implemented in: sky.cpp

#line 5 "sky.cpp"
  extern bool context_fog;
#line 7 "sky.cpp"
  extern ld camera_level;
  #if MAXMDIM >= 4 && CAP_GL
#line 10 "sky.cpp"
  int get_skybrightness(int mul IS(1));
#line 34 "sky.cpp"
  extern struct dqi_sky *sky;
#line 36 "sky.cpp"
  void prepare_sky();
#line 282 "sky.cpp"
  extern const ld star_val;
#line 490 "sky.cpp"
  extern struct renderbuffer *airbuf;
#line 492 "sky.cpp"
  void make_air();
  #endif

  // implemented in: sound.cpp

#line 12 "sound.cpp"
  void playSound(cell *c, const string& fname, int vol = 100);
  void resetmusic();
#line 16 "sound.cpp"
  extern const char *musicfile;
#line 17 "sound.cpp"
  extern bool audio;
#line 18 "sound.cpp"
  extern string musiclicense;
#line 19 "sound.cpp"
  extern string musfname[landtypes];
#line 20 "sound.cpp"
  extern int musicvolume;
#line 21 "sound.cpp"
  extern int effvolume;
#line 22 "sound.cpp"
  extern bool music_available;
#line 24 "sound.cpp"
  eLand getCurrentLandForMusic();
#line 32 "sound.cpp"
  void playSeenSound(cell *c);
  #if CAP_SDLAUDIO
#line 99 "sound.cpp"
  extern bool music_out_of_focus;
#line 101 "sound.cpp"
  void handlemusic();
#line 145 "sound.cpp"
  void resetmusic();
#line 154 "sound.cpp"
  bool loadMusicInfo(string dir);
#line 193 "sound.cpp"
  bool loadMusicInfo();
#line 210 "sound.cpp"
  void initAudio();
#line 235 "sound.cpp"
  void playSound(cell *c, const string& fname, int vol);
#line 254 "sound.cpp"
  void reuse_music_memory();
  #endif
  #if !CAP_AUDIO
#line 305 "sound.cpp"
  void playSound(cell *c, const string& fname, int vol);
#line 306 "sound.cpp"
  void resetmusic();
  #endif

  // implemented in: sphere.cpp

#line 13 "sphere.cpp"
  int spherecells();
#line 23 "sphere.cpp"
  extern vector<int> siblings;
#line 182 "sphere.cpp"
  heptagon *getDodecahedron(int i);
#line 189 "sphere.cpp"
  hrmap* new_spherical_map();

  // implemented in: surface.cpp

  #if CAP_SURFACE
  namespace surface {
#line 19 "surface.cpp"
    enum eShape { dsNone, dsTractricoid, dsDini, dsKuen, dsHyperlike, dsHyperboloid, dsHemisphere, dsCrystal };
#line 25 "surface.cpp"
    extern eShape sh;
#line 31 "surface.cpp"
    extern ld dini_b;
#line 33 "surface.cpp"
    extern ld hyper_b;
#line 371 "surface.cpp"
    extern vector<pair<hyperpoint, int> > coverage;
#line 598 "surface.cpp"
    void run_shape(eShape s);
#line 677 "surface.cpp"
    void show_surfaces();
    }
  #endif

  // implemented in: system.cpp

#line 12 "system.cpp"
  /** \brief This namespace has constants used as parameters in functions such as restart_game and wrongmode. */
  namespace rg {
  static const char nothing = 0;
  static const char peace = 'P';
  static const char inv = 'i';
  static const char chaos = 'C';
  static const char tactic = 't';
  static const char tour = 'T';
  static const char yendor = 'y';
  static const char shmup = 's';
  static const char randpattern = 'r';
  static const char princess = 'p';
  static const char daily = 'd';
  static const char daily_off = 'D';
  static const char racing = 'R';
  static const char dualmode = 'U';
  static const char heptagons = '7';
  
  /** \brief wrongmode only -- marks 'global' achievements not related to the current mode */
  static const char global = 'x'; 
  /** \brief wrongmode only -- change vid.scfg.players then restart_game(rg::nothing) instead */
  static const char multi = 'm';
  /** \brief wrongmode only -- mark achievements for special geometries/variations */
  static const char special_geometry = 'g';
  }
#line 40 "system.cpp"
  extern bool game_active;
#line 43 "system.cpp"
  extern bool autocheat;
#line 46 "system.cpp"
  extern eWall canvas_default_wall;
#line 49 "system.cpp"
  extern int truelotus;
#line 51 "system.cpp"
  extern int asteroids_generated, asteroid_orbs_generated;
#line 53 "system.cpp"
  extern time_t timerstart, savetime;
#line 54 "system.cpp"
  extern bool timerstopped;
#line 55 "system.cpp"
  extern int savecount;
#line 56 "system.cpp"
  extern int save_turns;
#line 57 "system.cpp"
  extern bool doCross;
#line 59 "system.cpp"
  extern bool gamegen_failure;
#line 61 "system.cpp"
  extern eLand top_land;
#line 64 "system.cpp"
  bool verless(string v, string cmp);
#line 73 "system.cpp"
  extern hookset<bool()> hooks_welcome_message;
#line 76 "system.cpp"
  void welcomeMessage();
#line 146 "system.cpp"
  extern hookset<void()> hooks_initgame;
#line 149 "system.cpp"
  extern hookset<void()> hooks_post_initgame;
#line 151 "system.cpp"
  extern bool ineligible_starting_land;
#line 154 "system.cpp"
  void initgame();
  #if CAP_SAVE
  namespace scores {
#line 422 "system.cpp"
    /** \brief the amount of boxes reserved for each hr::score item */
    #define MAXBOX 500
    /** \brief currently used boxes in hr::score */
    #define POSSCORE 425
    /** \brief a struct to keep local score from an earlier game */
    struct score {
    /** \brief version used */
    string ver;
    /** \brief all the data of the saved score, see applyBoxes() */
    int box[MAXBOX];
    };
#line 436 "system.cpp"
    extern score save;
#line 438 "system.cpp"
    extern int boxid;
#line 441 "system.cpp"
    extern bool saving, loading, loadingHi;
#line 444 "system.cpp"
    extern string boxname[MAXBOX];
#line 446 "system.cpp"
    extern bool fakebox[MAXBOX];
#line 448 "system.cpp"
    extern bool monsbox[MAXBOX];
#line 469 "system.cpp"
    void applyBoxNum(int& i, string name IS(""));
#line 545 "system.cpp"
    extern modecode_t saved_modecode;
#line 548 "system.cpp"
    void applyBoxes();
#line 943 "system.cpp"
    void saveBox();
    }
  namespace anticheat {
#line 996 "system.cpp"
    extern int certify(const string& s, int a, int b, int c, int d IS(0));
    }
  #if !CAP_CERTIFY
  namespace anticheat {
#line 1005 "system.cpp"
    extern bool tampered;
    }
  #endif
#line 1016 "system.cpp"
  void remove_emergency_save();
#line 1027 "system.cpp"
  void saveStats(bool emergency IS(false));
#line 1156 "system.cpp"
  void loadsave();
#line 1267 "system.cpp"
  void load_last_save();
  #endif
#line 1305 "system.cpp"
  void stop_game();
#line 1344 "system.cpp"
  eModel default_model();
#line 1350 "system.cpp"
  extern purehookset hooks_on_geometry_change;
#line 1352 "system.cpp"
  void set_geometry(eGeometry target);
#line 1402 "system.cpp"
  void set_variation(eVariation target);
#line 1435 "system.cpp"
  void switch_game_mode(char switchWhat);
#line 1564 "system.cpp"
  void start_game();
#line 1609 "system.cpp"
  void restart_game(char switchWhat IS(rg::nothing));
#line 1617 "system.cpp"
  void stop_game_and_switch_mode(char switchWhat IS(rg::nothing));
#line 1622 "system.cpp"
  extern purehookset hooks_clearmemory;
#line 1624 "system.cpp"
  void clearMemory();
#line 1628 "system.cpp"
  extern bool fixseed;
#line 1629 "system.cpp"
  extern int startseed;
#line 1631 "system.cpp"
  extern eLand firstland0;
#line 1633 "system.cpp"
  extern purehookset hooks_initialize;
#line 1635 "system.cpp"
  void initAll();
#line 1669 "system.cpp"
  extern purehookset hooks_final_cleanup;
#line 1671 "system.cpp"
  void finishAll();

  // implemented in: tour.cpp

  #if !CAP_TOUR
  namespace tour {
#line 13 "tour.cpp"
    extern always_false on;
    }
  #endif
  #if CAP_TOUR
  namespace tour {
#line 23 "tour.cpp"
    extern bool on;
#line 26 "tour.cpp"
    extern bool texts;
#line 28 "tour.cpp"
    extern string tourhelp;
#line 31 "tour.cpp"
    extern int currentslide;
#line 34 "tour.cpp"
    /** \brief a parameter for the slides' action function */
    enum presmode { 
    pmStartAll = 0,
    pmStart = 1, pmFrame = 2, pmStop = 3, pmKey = 4, pmRestart = 5,
    pmAfterFrame = 6, pmHelpEx = 7,
    pmGeometry = 11, pmGeometryReset = 13, pmGeometryStart = 15,
    pmGeometrySpecial = 16
    };
    
    /** \brief slide definition */
    struct slide { 
    /** \brief title of this slide */
    string name; 
    /** \brief ID (currently unused */
    int unused_id; 
    /** \brief various flags */
    flagtype flags; 
    /** \brief the helptext */
    string help; 
    /** \brief This function is called while this slide is displayed. Parameter hr::tour::presmode mode says what should be done */
    function<void(presmode mode)> action;
    };  
    
    /** \brief in which geometries does this slide work */
    namespace LEGAL {
    enum flagtype { NONE, UNLIMITED, HYPERBOLIC, ANY, NONEUC, SPECIAL };
    }
    
    /** \brief when Enter pressed while showing the text, skip to the next slide immediately */
    static const flagtype QUICKSKIP=8;
    /** \brief The final slide. Shows where the presentation ends */
    static const flagtype FINALSLIDE=16;
    /** \brief Pressing Enter while in another geometry should change slides immediately */
    static const flagtype QUICKGEO=32;
    /** \brief This slide should be displayed in sidescreen mode */
    static const flagtype SIDESCREEN = 64;
    /** \brief When changing geometries, show the name of the slide, instead of the current land */
    static const flagtype USE_SLIDE_NAME = 128;
    /** \brief do not display any help line */
    static const flagtype NOTITLE = 256;
#line 76 "tour.cpp"
    extern vector<reaction_t> restorers;
#line 79 "tour.cpp"
    template<class T, class U> void slide_backup(T& what, U value) {
    T backup = what;
    restorers.push_back([&what, backup] { what = backup; });
    what = value;
    }
    
    template<class T> void slide_backup(T& what) { slide_backup(what, what); }
#line 88 "tour.cpp"
    void on_restore(const reaction_t& t);
#line 92 "tour.cpp"
    void slide_restore_all();
#line 99 "tour.cpp"
    void slide_url(presmode mode, char key, string text, string url);
#line 107 "tour.cpp"
    void setCanvas(presmode mode, char canv);
#line 128 "tour.cpp"
    extern function<eLand(eLand)> getNext;
#line 129 "tour.cpp"
    extern function<bool(eLand)> quickfind;
#line 130 "tour.cpp"
    extern function<bool(eLand)> showland;
#line 137 "tour.cpp"
    extern string slidecommand;
#line 140 "tour.cpp"
    extern hookset<void(int)> hooks_slide;
#line 143 "tour.cpp"
    void presentation(presmode mode);
#line 189 "tour.cpp"
    void slidehelp();
#line 393 "tour.cpp"
    void checkGoodLand(eLand l);
    namespace ss {
#line 409 "tour.cpp"
      extern slide *wts;
#line 411 "tour.cpp"
      extern string current_folder;
#line 416 "tour.cpp"
      using slideshow_callback = function<void(string, slide*, char)>;
#line 419 "tour.cpp"
      extern hookset<void(slideshow_callback)> hooks_extra_slideshows;
#line 421 "tour.cpp"
      void for_all_slideshows(const slideshow_callback& cb);
#line 426 "tour.cpp"
      void slideshow_menu();
#line 436 "tour.cpp"
      void showMenu();
      }
#line 511 "tour.cpp"
    void initialize_slides();
#line 519 "tour.cpp"
    void print();
#line 534 "tour.cpp"
    void start();
#line 560 "tour.cpp"
    extern slide default_slides[];
#line 1028 "tour.cpp"
    extern slide *slides;
    }
  #endif

  // implemented in: usershapes.cpp

  #if CAP_SHAPES
#line 13 "usershapes.cpp"
  extern int usershape_changes;
#line 15 "usershapes.cpp"
  extern array<map<int, usershape*>, mapeditor::USERSHAPEGROUPS> usershapes;
#line 16 "usershapes.cpp"
  void initShape(int sg, int id);
#line 35 "usershapes.cpp"
  extern basic_textureinfo user_triangles_texture;
  #endif

  // implemented in: vr.cpp

  namespace vrhr {
    #if !CAP_VR
#line 15 "vr.cpp"
    inline bool active() { return false; }
    inline bool rendering() { return false; }
    inline bool rendering_eye() { return false; }
    #endif
    #if CAP_VR
#line 24 "vr.cpp"
    bool active();
#line 26 "vr.cpp"
    bool should_render();
#line 28 "vr.cpp"
    bool rendering();
#line 30 "vr.cpp"
    bool rendering_eye();
#line 33 "vr.cpp"
    enum class eHeadset { none, rotation_only, reference, holonomy, model_viewing };
    enum class eEyes { none, equidistant, truesim };
    enum class eCompScreen { none, reference, single, eyes };
#line 38 "vr.cpp"
    extern eHeadset hsm;
#line 39 "vr.cpp"
    extern eEyes eyes;
#line 40 "vr.cpp"
    extern eCompScreen cscr;
#line 42 "vr.cpp"
    extern bool controllers_on_desktop;
#line 44 "vr.cpp"
    extern cell *forward_cell;
#line 46 "vr.cpp"
    extern ld vraim_x, vraim_y, vrgo_x, vrgo_y;
#line 48 "vr.cpp"
    extern ld pointer_length;
#line 125 "vr.cpp"
    extern transmatrix eyeproj, eyeshift;
#line 155 "vr.cpp"
    extern transmatrix hmd_mv_for[3];
#line 156 "vr.cpp"
    extern transmatrix hmd_pre_for[3];
#line 161 "vr.cpp"
    extern ld pointer_distance;
#line 164 "vr.cpp"
    extern bool enabled;
#line 167 "vr.cpp"
    extern bool failed;
#line 170 "vr.cpp"
    extern string error_msg;
#line 173 "vr.cpp"
    extern int state;
#line 176 "vr.cpp"
    // use E4 when working with real-world matrices to ensure that inverses, multiplications, etc. are computed correctly
    #define E4 dynamicval<eGeometry> g(geometry, gCubeTiling)
#line 227 "vr.cpp"
    extern bool first;
#line 229 "vr.cpp"
    extern transmatrix hmd_at_ui;
#line 230 "vr.cpp"
    extern transmatrix hmd_at;
#line 231 "vr.cpp"
    extern transmatrix hmd_ref_at;
#line 233 "vr.cpp"
    extern transmatrix hmd_mvp, hmd_pre, hmd_mv;
#line 235 "vr.cpp"
    extern transmatrix sm;
#line 237 "vr.cpp"
    extern int ui_xmin, ui_ymin, ui_xmax, ui_ymax;
#line 239 "vr.cpp"
    extern reaction_t change_ui_bounds;
#line 242 "vr.cpp"
    struct frustum_info {
    transmatrix pre;
    transmatrix nlp;
    bool screen;
    transmatrix proj;
    };
#line 250 "vr.cpp"
    extern vector<frustum_info> frusta;
#line 252 "vr.cpp"
    void set_ui_bounds();
#line 261 "vr.cpp"
    void size_and_draw_ui_box();
#line 356 "vr.cpp"
    extern bool need_poses;
#line 433 "vr.cpp"
    extern bool targeting_menu;
#line 435 "vr.cpp"
    void send_click();
#line 445 "vr.cpp"
    void send_release();
#line 452 "vr.cpp"
    void vr_control();
#line 495 "vr.cpp"
    void be_33(transmatrix& T);
#line 500 "vr.cpp"
    void apply_movement(const transmatrix& rel);
#line 511 "vr.cpp"
    void vr_shift();
#line 524 "vr.cpp"
    extern ld absolute_unit_in_meters;
#line 528 "vr.cpp"
    eModel pmodel_3d_version();
#line 535 "vr.cpp"
    transmatrix model_to_controller(int id);
#line 539 "vr.cpp"
    hyperpoint model_location(shiftpoint h, bool& bad);
#line 605 "vr.cpp"
    extern hyperpoint vr_direction;
#line 607 "vr.cpp"
    void compute_vr_direction(int id);
#line 614 "vr.cpp"
    void compute_point(int id, shiftpoint& res, cell*& c, ld& dist);
#line 650 "vr.cpp"
    extern bool vr_clicked;
#line 721 "vr.cpp"
    extern bool always_show_hud;
#line 722 "vr.cpp"
    bool in_actual_menu();
#line 723 "vr.cpp"
    bool in_menu();
#line 756 "vr.cpp"
    void track_actions();
#line 797 "vr.cpp"
    void start_vr();
#line 856 "vr.cpp"
    void shutdown_vr();
#line 871 "vr.cpp"
    void clear();
#line 888 "vr.cpp"
    extern ld ui_depth;
#line 889 "vr.cpp"
    extern ld ui_size;
#line 892 "vr.cpp"
    const ld ui_size_unit = 0.001;
#line 916 "vr.cpp"
    void in_vr_ui(reaction_t what);
#line 958 "vr.cpp"
    void draw_eyes();
#line 993 "vr.cpp"
    void gen_mv();
#line 1021 "vr.cpp"
    extern shiftmatrix master_cview;
#line 1023 "vr.cpp"
    void render();
#line 1126 "vr.cpp"
    void show_vr_demos();
#line 1274 "vr.cpp"
    void show_vr_settings();
#line 1439 "vr.cpp"
    extern bool rec;
#line 1441 "vr.cpp"
    void render_controllers();
#line 1516 "vr.cpp"
    void submit();
#line 1535 "vr.cpp"
    void handoff();
    #endif
    }

  // implemented in: wfcgen.cpp

  namespace wfc {
#line 60 "wfcgen.cpp"
    void load_probs();
#line 109 "wfcgen.cpp"
    extern vector<cell*> centers;
#line 111 "wfcgen.cpp"
    void schedule(cell *c);
#line 185 "wfcgen.cpp"
    extern bool use_eclectic;
#line 187 "wfcgen.cpp"
    void invoke();
#line 242 "wfcgen.cpp"
    void wfc_menu();
    }

  // implemented in: yendor.cpp

#line 13 "yendor.cpp"
  int hiitemsMax(eItem it);
#line 20 "yendor.cpp"
  extern modecode_t modecode(int mode IS(3));
  namespace yendor {
#line 42 "yendor.cpp"
    extern bool on;
#line 43 "yendor.cpp"
    extern bool generating;
#line 44 "yendor.cpp"
    extern bool path;
#line 45 "yendor.cpp"
    extern bool everwon;
#line 46 "yendor.cpp"
    extern bool won;
#line 49 "yendor.cpp"
    extern int challenge; // id of the challenge
#line 50 "yendor.cpp"
    extern int lastchallenge;
#line 53 "yendor.cpp"
    #define YF_DEAD 1
    #define YF_WALLS 2
    #define YF_END 4
    #define YF_DEAD5 8
    
    #define YF_NEAR_IVY   16
    #define YF_NEAR_ELEM  32
    #define YF_NEAR_OVER  64
    #define YF_NEAR_RED   128
    #define YF_REPEAT     512
    #define YF_NEAR_TENT  1024
    
    #define YF_START_AL   2048
    #define YF_START_CR   4096
    #define YF_CHAOS      8192
    #define YF_RECALL     16384
    #define YF_NEAR_FJORD 32768
    
    #define YF_START_ANY  (YF_START_AL|YF_START_CR)  
    
    struct yendorlevel {
    eLand l;
    int flags;
    };
    
    #define YENDORLEVELS 34
#line 81 "yendor.cpp"
    extern map<modecode_t, array<int, YENDORLEVELS>> bestscore;
#line 83 "yendor.cpp"
    extern eLand nexttostart;
#line 141 "yendor.cpp"
    yendorlevel& clev();
#line 143 "yendor.cpp"
    eLand changeland(int i, eLand l);
#line 153 "yendor.cpp"
    struct yendorinfo {
    cell *path[YDIST];
    cell *actualKey;
    bool found;
    bool foundOrb;
    int howfar;
    bignum age;
    yendorinfo() { actualKey = NULL; }
    cell* key() { return path[YDIST-1]; }
    cell *actual_key() { return actualKey ? actualKey : key(); }
    cell* orb() { return path[0]; }
    };
#line 167 "yendor.cpp"
    extern vector<yendorinfo> yi;
#line 170 "yendor.cpp"
    #define NOYENDOR 999999
#line 172 "yendor.cpp"
    extern int yii;
#line 174 "yendor.cpp"
    int hardness();
#line 189 "yendor.cpp"
    enum eState { ysUntouched, ysLocked, ysUnlocked };
#line 192 "yendor.cpp"
    eState state(cell *yendor);
#line 198 "yendor.cpp"
    bool control(pathgen& p, int i, cellwalker& ycw);
#line 238 "yendor.cpp"
    bool check(cell *yendor);
#line 394 "yendor.cpp"
    void onpath();
#line 404 "yendor.cpp"
    eLandStructure get_land_structure();
#line 412 "yendor.cpp"
    void init(int phase);
#line 516 "yendor.cpp"
    extern const char *chelp;
#line 549 "yendor.cpp"
    string name(int i);
#line 570 "yendor.cpp"
    void showMenu();
#line 645 "yendor.cpp"
    void collected(cell* c2);
    }
  namespace tactic {
#line 710 "yendor.cpp"
    extern bool on;
#line 711 "yendor.cpp"
    extern int id;
#line 724 "yendor.cpp"
    int chances(eLand l, modecode_t xc IS(modecode()));
#line 747 "yendor.cpp"
    void record(eLand land, int score, modecode_t xc IS(modecode()));
#line 796 "yendor.cpp"
    void showMenu();
#line 945 "yendor.cpp"
    void start();
    }
#line 953 "yendor.cpp"
  extern map<modecode_t, string> meaning;
#line 981 "yendor.cpp"
  modecode_t modecode(int mode);
#line 1010 "yendor.cpp"
  void load_modecode_line(string s);
  namespace peace {
#line 1023 "yendor.cpp"
    extern bool on;
#line 1024 "yendor.cpp"
    extern bool hint;
#line 1026 "yendor.cpp"
    extern bool otherpuzzles;
#line 1028 "yendor.cpp"
    extern bool explore_other;
    namespace simon {
#line 1115 "yendor.cpp"
      void extend();
#line 1124 "yendor.cpp"
      void init();
#line 1138 "yendor.cpp"
      void restore();
      }
#line 1145 "yendor.cpp"
    extern bool in_minefield, in_dual;
#line 1162 "yendor.cpp"
    void showMenu();
    }
  }
