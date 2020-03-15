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
#line 497 "classes.cpp"
  extern monstertype minf[motypes];
#line 503 "classes.cpp"
  #define NUM_GS 8
  struct genderswitch_t {
  int gender;
  eMonster m;
  const char *name;
  const char *desc;
  };
#line 512 "classes.cpp"
  extern genderswitch_t genderswitch[NUM_GS];
#line 535 "classes.cpp"
  enum eOrbshape { osNone, osLove, osRanged, osOffensive, osFriend, osUtility, osDirectional, osWarping, osFrog };
  
  static const flagtype ZERO = 0;
  
  static const flagtype IF_SHARD = Flag(0);
  static const flagtype IF_FIREPROOF = Flag(1);
  static const flagtype IF_PROTECTION = Flag(2);
  static const flagtype IF_EMPATHY = Flag(3);
  static const flagtype IF_RANGED = Flag(4);
  static const flagtype IF_SHMUPLIFE = Flag(5);
  static const flagtype IF_REVIVAL = Flag(6);
  
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
#line 570 "classes.cpp"
  extern itemtype iinf[ittypes];
#line 578 "classes.cpp"
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
#line 619 "classes.cpp"
  extern walltype winf[walltypes];
#line 627 "classes.cpp"
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
#line 662 "classes.cpp"
  extern const landtype linf[landtypes];
#line 668 "classes.cpp"
  struct landtacinfo { eLand l; int tries, multiplier; };
#line 671 "classes.cpp"
  extern vector<landtacinfo> land_tac;
#line 708 "classes.cpp"
  extern vector<eLand> randlands;
#line 715 "classes.cpp"
  enum eGeometry {
  gNormal, gEuclid, gSphere, gElliptic, gZebraQuotient, gFieldQuotient, gTorus, gOctagon, g45, g46, g47, gSmallSphere, gTinySphere, gEuclidSquare, gSmallElliptic, 
  gKleinQuartic, gBolza, gBolza2, gMinimal, gBinaryTiling, gArchimedean, 
  gMacbeath, gBring, gSchmutzM2, gSchmutzM3, gCrystal, gOctahedron, 
  gBinary3, gCubeTiling, gCell120, gECell120, gRhombic3, gBitrunc3, 
  gSpace534, gSpace435, 
  gCell5, 
  gCell8, gECell8,
  gCell16, gECell16,
  gCell24, gECell24,
  gCell600, gECell600,
  gHoroTris, gHoroRec, gHoroHex,
  gField435, gField534,
  gBinary4, gSol,
  gKiteDart2, gKiteDart3, gNil, gProduct, gRotSpace,
  gTernary, gNIH, gSolN, gInfOrder, gSpace336, gSpace344, gCrystal344,
  gArnoldCat, gArbitrary, gInfOrder4, gCrystal534,
  gSpace535, gSpace536, gSeifertCover, gSeifertWeber, gHomologySphere,
  gInfOrderMixed, gSpace436,
  gGUARD};
  
  enum eGeometryClass { gcHyperbolic, gcEuclid, gcSphere, gcSolNIH, gcNil, gcProduct, gcSL2 };
  
  enum class eVariation { bitruncated, pure, goldberg, irregular, dual };  
  
  typedef flagtype modecode_t;
  
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
  modecode_t xcode;
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
  
  // note: dnext assumes that x&7 equals 7
  static const int SEE_ALL = 50;
  static const int OINF = 100;
  
  extern eGeometry geometry;
  extern eVariation variation;
#line 823 "classes.cpp"
  extern geometryinfo1 giEuclid2;
#line 824 "classes.cpp"
  extern geometryinfo1 giHyperb2;
#line 825 "classes.cpp"
  extern geometryinfo1 giSphere2;
#line 827 "classes.cpp"
  extern geometryinfo1 giEuclid3;
#line 828 "classes.cpp"
  extern geometryinfo1 giHyperb3;
#line 829 "classes.cpp"
  extern geometryinfo1 giSphere3;
#line 831 "classes.cpp"
  extern geometryinfo1 giSolNIH;
#line 832 "classes.cpp"
  extern geometryinfo1 giNil;
#line 833 "classes.cpp"
  extern geometryinfo1 giProduct;
#line 834 "classes.cpp"
  extern geometryinfo1 giSL2;
#line 838 "classes.cpp"
  extern vector<geometryinfo> ginf;
#line 917 "classes.cpp"
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
  
  static const flagtype band = (cylindrical | pseudocylindrical | uses_bandshift);
  static const flagtype pseudoband = (pseudocylindrical | uses_bandshift);
  };
  
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
  // 25
  mdMollweide, mdCentralCyl, mdCollignon, mdHorocyclic,
  // 29..
  mdGUARD, mdPixel, mdHyperboloidFlat, mdPolynomial, mdManual
  };
#line 976 "classes.cpp"
  extern vector<modelinfo> mdinf;
#line 1013 "classes.cpp"
  static inline bool orbProtection(eItem it) { return false; } // not implemented
  
  const eLand NOWALLSEP = laNone;
  const eLand NOWALLSEP_USED = laWhirlpool;

  // implemented in: locations.cpp

#line 18 "locations.cpp"
  
  extern int cellcount, heptacount;
  
  #define NODIR 126
  #define NOBARRIERS 127
  
  /** Cell information for the game. struct cell builds on this */
  struct gcell {
  
  #if CAP_BITFIELD
  /** which land does this cell belong to */
  eLand land : 8;
  /** wall type (waNone for no walls) */
  eWall wall : 8;
  /** monster on this cell -- note that player characters are handled separately */
  eMonster monst : 8;
  /** item on this cell */
  eItem item : 8;
  
  /** if this is a barrier, what lands on are on the sides? */
  eLand barleft : 8, barright : 8; 
  
  /** is it currently sparkling with lightning? */
  unsigned ligon : 1;
  /** is it about to be? */
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
  bool ligon, weakligon, monmirror;
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
  
  /** wall parameter, used e.g. for remaining power of Bonfires and Thumpers */
  char wparam;
  
  #ifdef CELLID
  int cellid;
  #endif
  
  gcell() { cellcount++; 
  #ifdef CELLID
  cellid = cellcount;  
  #endif
  }
  ~gcell() { cellcount--; }
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
  
  /** Table of moves. This is the maximum size, but tailored_alloc allocates less. */
  T* move_table[FULL_EDGE + (FULL_EDGE + sizeof(char*) - 1) / sizeof(char*)];
  
  unsigned char *spintable() { return (unsigned char*) (&move_table[full()->degree()]); }
  
  /** get the full T from the pointer to this connection table */
  T* full() { T* x = (T*) this; return (T*)((char*)this - ((char*)(&(x->c)) - (char*)x)); }
  /** for the edge d, set the `spin` and `mirror` attributes */
  void setspin(int d, int spin, bool mirror) { 
  unsigned char& c = spintable() [d];
  c = spin;
  if(mirror) c |= 128;
  }
  /** we are spin(i)-th neighbor of move[i] */
  int spin(int d) { return spintable() [d] & 127; }
  /** on non-orientable surfaces, the d-th edge may be mirrored */
  bool mirror(int d) { return spintable() [d] & 128; }  
  /** 'fix' the edge number d to get the actual index in [0, degree()) */
  int fix(int d) { return gmod(d, full()->degree()); }
  /** T in the direction i */
  T*& move(int i) { return move_table[i]; }
  /** T in the direction i, modulo degree() */
  T*& modmove(int i) { return move(fix(i)); }
  unsigned char modspin(int i) { return spin(fix(i)); }
  /** initialize the table */
  void fullclear() { 
  for(int i=0; i<full()->degree(); i++) move_table[i] = NULL;
  }
  /** connect this in direction d0 to c1 in direction d1, possibly mirrored */
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
  
  /** Allocate a class T with a connection_table, but 
  *  with only `degree` connections. Also set yet
  *  unknown connections to NULL.
  
  * Generating the hyperbolic world consumes lots of
  * RAM, so we really need to be careful on low memory devices. 
  */
  
  template<class T> T* tailored_alloc(int degree) {
  const T* sample = (T*) &degree;
  T* result;
  #ifndef NO_TAILORED_ALLOC
  int b = (char*)&sample->c.move_table[degree] + degree - (char*) sample;
  result = (T*) new char[b];
  new (result) T();
  #else
  result = new T;
  #endif
  result->type = degree;
  for(int i=0; i<degree; i++) result->c.move_table[i] = NULL;
  return result;
  }
  
  /** Counterpart to tailored_alloc(). */
  template<class T> void tailored_delete(T* x) {
  x->~T();  
  delete[] ((char*) (x));
  }
  
  static const struct wstep_t { wstep_t() {} } wstep;
  static const struct wmirror_t { wmirror_t() {}} wmirror;
  static const struct rev_t { rev_t() {} } rev;
  static const struct revstep_t { revstep_t() {}} revstep;
  
  extern int hrand(int);
  
  /** the walker structure is used for walking on surfaces defined via \ref connection_table. */
  template<class T> struct walker {
  /** where we are at */
  T *at;
  /** in which direction (edge) we are facing */
  int spin;
  /** are we mirrored */
  bool mirrored;
  walker<T> (T *at = NULL, int s = 0, bool m = false) : at(at), spin(s), mirrored(m) { if(at) s = at->c.fix(s); }
  /** spin by i to the left (or right, when mirrored */
  walker<T>& operator += (int i) {
  spin = at->c.fix(spin+(mirrored?-i:i));
  return (*this);
  }
  /** spin by i to the right (or left, when mirrored */
  walker<T>& operator -= (int i) {
  spin = at->c.fix(spin-(mirrored?-i:i));
  return (*this);
  }
  /** add wmirror to mirror this walker */
  walker<T>& operator += (wmirror_t) {
  mirrored = !mirrored;
  return (*this);
  }
  /** add wstep to make a single step, after which we are facing the T we were originally on */
  walker<T>& operator += (wstep_t) {
  at->cmove(spin);
  int nspin = at->c.spin(spin);
  if(at->c.mirror(spin)) mirrored = !mirrored;
  at = at->move(spin);
  spin = nspin;
  return (*this);
  }
  /** add wrev to face the other direction, may be non-deterministic and use hrand */
  walker<T>& operator += (rev_t) {
  auto rd = reverse_directions(at, spin);
  if(rd.size() == 1) spin = rd[0];
  else spin = rd[hrand(rd.size())];
  return (*this);
  }
  /** adding revstep is equivalent to adding rev and step */
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
  
  walker<T>& operator ++ (int) { return (*this) += 1; }
  walker<T>& operator -- (int) { return (*this) -= 1; }
  template<class U> walker operator + (U t) const { walker<T> w = *this; w += t; return w; }
  template<class U> walker operator - (U t) const { walker<T> w = *this; w += (-t); return w; }
  /** what T are we facing, without creating it */
  T*& peek() { return at->move(spin); }
  /** what T are we facing, with creating it */
  T* cpeek() { return at->cmove(spin); }
  /** would we create a new T if we stepped forwards? */
  bool creates() { return !peek(); }
  /** mirror this walker with respect to the d-th edge */
  walker<T> mirrorat(int d) { return walker<T> (at, at->c.fix(d+d - spin), !mirrored); }
  };
  
  struct cell;
  
  // automaton state
  enum hstate { hsOrigin, hsA, hsB, hsError, hsA0, hsA1, hsB0, hsB1, hsC };
  
  struct cell *createMov(struct cell *c, int d);
  struct heptagon *createStep(struct heptagon *c, int d);
  
  struct cdata {
  int val[4];
  int bits;
  };
  
  /** Limit on the 'distance' value in heptagon. This value is signed (negative distances are used
  in horocycle implementation. Distance is currently a short, and we need a bit of breathing room.
  It would not be a technical problem to use a larger type, but 32000 is close to what fits in
  the memory of a normal computer. Farlands appear close to this limit.
  */
  
  constexpr int global_distance_limit = 32000;
  
  /** This value is used in iterative algorithms to prevent infinite loops created by incorrect
  data (e.g., circular dragon). It should be larger than global_distance_limit */
  constexpr int iteration_limit = 10000000;
  
  /** in bitruncated/irregular/Goldberg geometries, heptagons form the 
  *  underlying regular tiling (not necessarily heptagonal); in pure
  *  geometries, they correspond 1-1 to tiles; in 'masterless' geometries
  *  heptagons are unused
  */
  
  struct heptagon {
  /** Automata are used to generate the standard maps. s is the state of this automaton */
  hstate s : 6;
  /** distance modulo 4, in heptagons */
  unsigned int dm4: 2;
  /** distance from the origin; based on the final geometry of cells, not heptagons themselves */
  short distance;
  /** Wmerald/wineyard generator. May have different meaning in other geometries. */
  short emeraldval;
  /** Palace pattern generator. May have different meaning in other geometries. */
  short fiftyval;
  /** Zebra pattern generator. May have different meaning in other geometries. */
  short zebraval;
  /** Field quotient pattern ID. May have different meaning in other geometries. */
  int fieldval : 24;
  /** the number of adjacent heptagons */
  unsigned char type : 8;
  /** data for fractal landscapes */
  short rval0, rval1;
  /** for the main map, it contains the fractal landscape data
  *
  *  For alternate structures, cdata contains the pointer to the original.
  */
  struct cdata *cdata;
  /** which central cell does this heptagon correspond too
  *  
  *  For alternate geometries, c7 is NULL
  */
  cell *c7;
  /** associated generator of alternate structure, for Camelot and horocycles */
  heptagon *alt;
  /** connection table */
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
  
  /** A structure useful when walking on the cell graph in arbitrary way, 
  * or listing cells in general.
  * Only one celllister may be active at a time, using the stack semantics.
  * Only the most recently created one works; the previous one will resume 
  * working when this one is destroyed.
  */
  struct manual_celllister {
  /** list of cells in this list */
  vector<cell*> lst;
  vector<int> tmps;
  
  /** is the given cell on the list? */
  bool listed(cell *c) {
  return c->listindex >= 0 && c->listindex < isize(lst) && lst[c->listindex] == c;
  }
  
  /** add a cell to the list */
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
  
  /** automatically generate a list of nearby cells */
  struct celllister : manual_celllister {
  vector<int> dists;
  
  void add_at(cell *c, int d) {
  if(add(c)) dists.push_back(d);
  }
  
  /** automatically generate a list of nearby cells
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
  
  /** for a given cell c on the list, return its distance from orig */
  int getdist(cell *c) { return dists[c->listindex]; }
  };
  
  /** translate heptspins to cellwalkers and vice versa */
  static const struct cth_t { cth_t() {}} cth;
  inline heptspin operator+ (cellwalker cw, cth_t) { return heptspin(cw.at->master, cw.spin * DUALMUL, cw.mirrored); }
  inline cellwalker operator+ (heptspin hs, cth_t) { return cellwalker(hs.at->c7, hs.spin / DUALMUL, hs.mirrored); }
  
#line 456 "locations.cpp"
  /** a structure for representing movements 
  *  mostly for 'proper' moves where s->move(d) == t,
  *  but also sometimes for other moves
  */
  
  constexpr int STRONGWIND = 99;
  constexpr int FALL = 98;
  constexpr int NO_SPACE = 97;
  constexpr int TELEPORT = 96;
  constexpr int JUMP = 95;
  
  namespace whirlwind { cell *jumpDestination(cell*); }
  
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
  int rev_dir() const { return s->c.spin(d); }
  bool mirror() { return s->c.mirror(d); }
  };
#line 490 "locations.cpp"
  movei moveimon(cell *c);
#line 492 "locations.cpp"
  movei match(cell *f, cell *t);

  // implemented in: hyperpoint.cpp

#line 16 "hyperpoint.cpp"
  static const ld degree = M_PI / 180;
#line 24 "hyperpoint.cpp"
  /** \brief A point in our continuous space
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
  for(int i=0; i<MDIM; i++) self[i] *= d;
  return self;
  }
  
  inline hyperpoint& operator /= (ld d) { 
  for(int i=0; i<MDIM; i++) self[i] /= d;
  return self;
  }
  
  inline hyperpoint& operator += (const hyperpoint h2) { 
  for(int i=0; i<MDIM; i++) self[i] += h2[i];
  return self;
  }
  
  inline hyperpoint& operator -= (const hyperpoint h2) { 
  for(int i=0; i<MDIM; i++) self[i] -= h2[i];
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
  
  // inner product
  inline friend ld operator | (hyperpoint h1, hyperpoint h2) {
  ld sum = 0;
  for(int i=0; i<MDIM; i++) sum += h1[i] * h2[i];
  return sum;
  }    
  };
  
  /** \brief A matrix acting on hr::hyperpoint 
  *  Since we are using homogeneous coordinates for hr::hyperpoint,
  *  rotations and translations can be represented
  *  as matrix multiplications. Other applications of matrices in HyperRogue 
  *  (in dimension up to 4) are also implemented using transmatrix.
  */
  struct transmatrix {
  ld tab[MAXMDIM][MAXMDIM];
  hyperpoint& operator [] (int i) { return (hyperpoint&)tab[i][0]; }
  const ld * operator [] (int i) const { return tab[i]; }
  
  inline friend hyperpoint operator * (const transmatrix& T, const hyperpoint& H) {
  hyperpoint z;
  for(int i=0; i<MDIM; i++) {
  z[i] = 0;
  for(int j=0; j<MDIM; j++) z[i] += T[i][j] * H[j];
  }
  return z;
  }
  
  inline friend transmatrix operator * (const transmatrix& T, const transmatrix& U) {
  transmatrix R;
  for(int i=0; i<MDIM; i++) for(int j=0; j<MDIM; j++) {
  R[i][j] = 0;
  for(int k=0; k<MDIM; k++)
  R[i][j] += T[i][k] * U[k][j];
  }
  return R;
  }  
  };
  
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
  constexpr hyperpoint point31(ld x, ld y, ld z) { return hyperpoint(x,y,z,1); }
  constexpr hyperpoint point2(ld x, ld y) { return hyperpoint(x,y,0,0); }
  
  constexpr hyperpoint C02 = hyperpoint(0,0,1,0);
  constexpr hyperpoint C03 = hyperpoint(0,0,0,1);
  
  /** C0 is the origin in our space */
  #define C0 (MDIM == 3 ? C02 : C03)
#line 188 "hyperpoint.cpp"
  ld squar(ld x);
#line 190 "hyperpoint.cpp"
  int sig(int z);
#line 192 "hyperpoint.cpp"
  int curvature();
#line 202 "hyperpoint.cpp"
  ld sin_auto(ld x);
#line 212 "hyperpoint.cpp"
  ld asin_auto(ld x);
#line 222 "hyperpoint.cpp"
  ld acos_auto(ld x);
#line 231 "hyperpoint.cpp"
  ld volume_auto(ld r);
#line 240 "hyperpoint.cpp"
  ld asin_clamp(ld x);
#line 242 "hyperpoint.cpp"
  ld asin_auto_clamp(ld x);
#line 251 "hyperpoint.cpp"
  ld acos_auto_clamp(ld x);
#line 260 "hyperpoint.cpp"
  ld cos_auto(ld x);
#line 270 "hyperpoint.cpp"
  ld tan_auto(ld x);
#line 280 "hyperpoint.cpp"
  ld atan_auto(ld x);
#line 290 "hyperpoint.cpp"
  ld atan2_auto(ld y, ld x);
#line 303 "hyperpoint.cpp"
  ld edge_of_triangle_with_angles(ld alpha, ld beta, ld gamma);
#line 307 "hyperpoint.cpp"
  hyperpoint hpxy(ld x, ld y);
#line 311 "hyperpoint.cpp"
  hyperpoint hpxy3(ld x, ld y, ld z);
#line 316 "hyperpoint.cpp"
  // a point (I hope this number needs no comments ;) )
  constexpr hyperpoint Cx12 = hyperpoint(1,0,1.41421356237,0);
  constexpr hyperpoint Cx13 = hyperpoint(1,0,0,1.41421356237);
  
  #define Cx1 (GDIM==2?Cx12:Cx13)
#line 323 "hyperpoint.cpp"
  bool zero_d(int d, hyperpoint h);
#line 334 "hyperpoint.cpp"
  ld intval(const hyperpoint &h1, const hyperpoint &h2);
#line 345 "hyperpoint.cpp"
  ld quickdist(const hyperpoint &h1, const hyperpoint &h2);
#line 351 "hyperpoint.cpp"
  ld sqhypot_d(int d, const hyperpoint& h);
#line 358 "hyperpoint.cpp"
  ld hypot_d(int d, const hyperpoint& h);
#line 362 "hyperpoint.cpp"
  ld zlevel(const hyperpoint &h);
#line 371 "hyperpoint.cpp"
  ld hypot_auto(ld x, ld y);
#line 385 "hyperpoint.cpp"
  hyperpoint normalize(hyperpoint H);
#line 393 "hyperpoint.cpp"
  hyperpoint normalize_flat(hyperpoint h);
#line 400 "hyperpoint.cpp"
  hyperpoint mid(const hyperpoint& H1, const hyperpoint& H2);
#line 410 "hyperpoint.cpp"
  hyperpoint midz(const hyperpoint& H1, const hyperpoint& H2);
#line 426 "hyperpoint.cpp"
  transmatrix cspin(int a, int b, ld alpha);
#line 434 "hyperpoint.cpp"
  transmatrix spin(ld alpha);
#line 436 "hyperpoint.cpp"
  transmatrix random_spin();
#line 446 "hyperpoint.cpp"
  transmatrix eupush(ld x, ld y);
#line 453 "hyperpoint.cpp"
  transmatrix eupush(hyperpoint h);
#line 460 "hyperpoint.cpp"
  transmatrix eupush3(ld x, ld y, ld z);
#line 465 "hyperpoint.cpp"
  transmatrix euscalezoom(hyperpoint h);
#line 474 "hyperpoint.cpp"
  transmatrix euaffine(hyperpoint h);
#line 481 "hyperpoint.cpp"
  transmatrix cpush(int cid, ld alpha);
#line 494 "hyperpoint.cpp"
  transmatrix xpush(ld alpha);
#line 496 "hyperpoint.cpp"
  bool eqmatrix(transmatrix A, transmatrix B, ld eps IS(.01));
  #if MAXMDIM >= 4
#line 506 "hyperpoint.cpp"
  hyperpoint orthogonal_move(const hyperpoint& h, ld z);
  #endif
#line 520 "hyperpoint.cpp"
  transmatrix ypush(ld alpha);
#line 522 "hyperpoint.cpp"
  transmatrix zpush(ld z);
#line 524 "hyperpoint.cpp"
  transmatrix matrix3(ld a, ld b, ld c, ld d, ld e, ld f, ld g, ld h, ld i);
#line 535 "hyperpoint.cpp"
  transmatrix matrix4(ld a, ld b, ld c, ld d, ld e, ld f, ld g, ld h, ld i, ld j, ld k, ld l, ld m, ld n, ld o, ld p);
  #if MAXMDIM >= 4
#line 544 "hyperpoint.cpp"
  void swapmatrix(transmatrix& T);
#line 555 "hyperpoint.cpp"
  void swapmatrix(hyperpoint& h);
  #endif
#line 560 "hyperpoint.cpp"
  transmatrix parabolic1(ld u);
#line 573 "hyperpoint.cpp"
  transmatrix parabolic13(ld u, ld v);
#line 587 "hyperpoint.cpp"
  hyperpoint parabolic10(hyperpoint h);
#line 593 "hyperpoint.cpp"
  hyperpoint deparabolic10(const hyperpoint h);
#line 600 "hyperpoint.cpp"
  transmatrix spintoc(const hyperpoint& H, int t, int f);
#line 614 "hyperpoint.cpp"
  transmatrix rspintoc(const hyperpoint& H, int t, int f);
#line 627 "hyperpoint.cpp"
  transmatrix spintox(const hyperpoint& H);
#line 635 "hyperpoint.cpp"
  transmatrix rspintox(const hyperpoint& H);
#line 645 "hyperpoint.cpp"
  transmatrix pushxto0(const hyperpoint& H);
#line 653 "hyperpoint.cpp"
  void set_column(transmatrix& T, int i, const hyperpoint& H);
#line 659 "hyperpoint.cpp"
  transmatrix build_matrix(hyperpoint h1, hyperpoint h2, hyperpoint h3, hyperpoint h4);
#line 673 "hyperpoint.cpp"
  transmatrix rpushxto0(const hyperpoint& H);
#line 680 "hyperpoint.cpp"
  transmatrix ggpushxto0(const hyperpoint& H, ld co);
#line 704 "hyperpoint.cpp"
  transmatrix gpushxto0(const hyperpoint& H);
#line 709 "hyperpoint.cpp"
  transmatrix rgpushxto0(const hyperpoint& H);
#line 719 "hyperpoint.cpp"
  void fixmatrix(transmatrix& T);
#line 750 "hyperpoint.cpp"
  ld det(const transmatrix& T);
#line 786 "hyperpoint.cpp"
  transmatrix inverse(const transmatrix& T);
#line 836 "hyperpoint.cpp"
  pair<ld, hyperpoint> product_decompose(hyperpoint h);
#line 842 "hyperpoint.cpp"
  ld hdist0(const hyperpoint& mh);
#line 873 "hyperpoint.cpp"
  ld circlelength(ld r);
#line 887 "hyperpoint.cpp"
  ld hdist(const hyperpoint& h1, const hyperpoint& h2);
#line 911 "hyperpoint.cpp"
  hyperpoint mscale(const hyperpoint& t, double fac);
#line 920 "hyperpoint.cpp"
  transmatrix mscale(const transmatrix& t, double fac);
#line 932 "hyperpoint.cpp"
  transmatrix xyscale(const transmatrix& t, double fac);
#line 939 "hyperpoint.cpp"
  transmatrix xyzscale(const transmatrix& t, double fac, double facz);
#line 948 "hyperpoint.cpp"
  transmatrix mzscale(const transmatrix& t, double fac);
#line 962 "hyperpoint.cpp"
  hyperpoint mid3(hyperpoint h1, hyperpoint h2, hyperpoint h3);
#line 966 "hyperpoint.cpp"
  hyperpoint mid_at(hyperpoint h1, hyperpoint h2, ld v);
#line 971 "hyperpoint.cpp"
  hyperpoint mid_at_actual(hyperpoint h, ld v);
#line 976 "hyperpoint.cpp"
  hyperpoint orthogonal_of_C0(hyperpoint h0, hyperpoint h1, hyperpoint h2);
#line 990 "hyperpoint.cpp"
  hyperpoint zshift(hyperpoint x, ld z);
#line 997 "hyperpoint.cpp"
  hyperpoint hpxd(ld d, ld x, ld y, ld z);
#line 1003 "hyperpoint.cpp"
  ld signum(ld x);
#line 1005 "hyperpoint.cpp"
  bool asign(ld y1, ld y2);
#line 1007 "hyperpoint.cpp"
  ld xcross(ld x1, ld y1, ld x2, ld y2);
#line 1009 "hyperpoint.cpp"
  transmatrix parallel_transport(const transmatrix Position, const transmatrix& ori, const hyperpoint direction, int precision IS(100));
#line 1018 "hyperpoint.cpp"
  void apply_parallel_transport(transmatrix& Position, const transmatrix orientation, const hyperpoint direction);
#line 1022 "hyperpoint.cpp"
  void rotate_object(transmatrix& Position, transmatrix& orientation, transmatrix R);
#line 1027 "hyperpoint.cpp"
  transmatrix spin_towards(const transmatrix Position, transmatrix& ori, const hyperpoint goal, int dir, int back);
#line 1051 "hyperpoint.cpp"
  ld ortho_error(transmatrix T);
#line 1066 "hyperpoint.cpp"
  transmatrix transpose(transmatrix T);
#line 1075 "hyperpoint.cpp"
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
  for(int i=0; i<MDIM; i++) z[i] = T[i][LDIM];
  return z;
  }
#line 1114 "hyperpoint.cpp"
  hyperpoint ctangent(int c, ld x);
#line 1117 "hyperpoint.cpp"
  hyperpoint xtangent(ld x);
#line 1120 "hyperpoint.cpp"
  hyperpoint ztangent(ld z);
#line 1123 "hyperpoint.cpp"
  hyperpoint tangent_length(hyperpoint dir, ld length);
#line 1130 "hyperpoint.cpp"
  hyperpoint direct_exp(hyperpoint v, int steps);
#line 1142 "hyperpoint.cpp"
  enum iePrecision { iLazy, iTable };
#line 1146 "hyperpoint.cpp"
  hyperpoint inverse_exp(const hyperpoint h, iePrecision p, bool just_direction IS(true));
#line 1165 "hyperpoint.cpp"
  ld geo_dist(const hyperpoint h1, const hyperpoint h2, iePrecision p);
#line 1170 "hyperpoint.cpp"
  hyperpoint lp_iapply(const hyperpoint h);
#line 1174 "hyperpoint.cpp"
  hyperpoint lp_apply(const hyperpoint h);
#line 1178 "hyperpoint.cpp"
  hyperpoint smalltangent();
#line 1180 "hyperpoint.cpp"
  void cyclefix(ld& a, ld b);
#line 1185 "hyperpoint.cpp"
  ld raddif(ld a, ld b);
#line 1193 "hyperpoint.cpp"
  int bucketer(ld x);
#line 1197 "hyperpoint.cpp"
  int bucketer(hyperpoint h);

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
  
  #define BADMODEL 0
  
  static const int WINGS = (BADMODEL ? 1 : 4);
  
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
  /** the number of levels in SL2 */
  int steps;
  
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
  shFrogRing, shReserved1, shReserved2,
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
  shHeptaMarker, shSnowball, shSun, shNightStar, shEuclideanSky,
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
  
  vector<int> walloffsets;
  
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
  vector<array<array<array<transmatrix, 6>, 32>, 32>> Tf;
  transmatrix corners;
  ld alpha;
  int area;
  };
  shared_ptr<gpdata_t> gpdata;
  #endif
  
  int state;
  int usershape_state;
  
  /** contains the texture point coordinates for 3D models */
  basic_textureinfo models_texture;
  
  geometry_information() { last = NULL; state = usershape_state = 0; gpdata = NULL; }
  
  void require_basics() { if(state & 1) return; state |= 1; prepare_basics(); }
  void require_shapes() { if(state & 2) return; state |= 2; prepare_shapes(); }
  void require_usershapes() { if(usershape_state == usershape_changes) return; usershape_state = usershape_changes; prepare_usershapes(); }
  int timestamp;
  
  hpcshape& generate_pipe(ld length, ld width);
  };
#line 433 "geometry.cpp"
  static const ld hcrossf7 = 0.620672, hexf7 = 0.378077, tessf7 = 1.090550, hexhexdist7 = 0.566256;
#line 436 "geometry.cpp"
  bool scale_used();
#line 596 "geometry.cpp"
  transmatrix xspinpush(ld dir, ld dist);
#line 603 "geometry.cpp"
  extern purehookset hooks_swapdim;
  namespace geom3 {
#line 633 "geometry.cpp"
    ld factor_to_projection(ld fac);
#line 637 "geometry.cpp"
    ld lev_to_factor(ld lev);
#line 643 "geometry.cpp"
    ld factor_to_lev(ld fac);
#line 649 "geometry.cpp"
    void do_auto_eye();
#line 661 "geometry.cpp"
    ld scale_at_lev(ld lev);
#line 666 "geometry.cpp"
    extern string invalid;
#line 668 "geometry.cpp"
    ld actual_wall_height();
    }
  namespace geom3 {
#line 791 "geometry.cpp"
    void apply_always3();
    #if MAXMDIM >= 4
#line 810 "geometry.cpp"
    void switch_always3();
    #endif
#line 820 "geometry.cpp"
    void switch_tpp();
#line 841 "geometry.cpp"
    void switch_fpp();
    }
#line 886 "geometry.cpp"
  extern geometry_information *cgip;
#line 887 "geometry.cpp"
  extern map<string, geometry_information> cgis;
#line 890 "geometry.cpp"
  #define cgi (*cgip)
#line 893 "geometry.cpp"
  extern int last_texture_step;
#line 897 "geometry.cpp"
  void check_cgi();

  // implemented in: goldberg.cpp

  namespace gp {
#line 16 "goldberg.cpp"
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
    };
    
    struct local_info {
    int last_dir;
    loc relative;
    int first_dir;
    int total_dir;
    };
#line 47 "goldberg.cpp"
    extern local_info draw_li;
#line 49 "goldberg.cpp"
    loc eudir(int d);
#line 71 "goldberg.cpp"
    int length(loc p);
    #if CAP_GP
#line 76 "goldberg.cpp"
    extern loc param;
#line 78 "goldberg.cpp"
    extern hyperpoint next;
#line 88 "goldberg.cpp"
    int fixg6(int x);
#line 90 "goldberg.cpp"
    int get_code(const local_info& li);
#line 98 "goldberg.cpp"
    local_info get_local_info(cell *c);
#line 130 "goldberg.cpp"
    int last_dir(cell *c);
#line 134 "goldberg.cpp"
    loc get_coord(cell *c);
#line 138 "goldberg.cpp"
    int pseudohept_val(cell *c);
#line 204 "goldberg.cpp"
    extern bool do_adjm;
#line 258 "goldberg.cpp"
    extern map<pair<cell*, int>, transmatrix> gp_adj;
#line 260 "goldberg.cpp"
    transmatrix& get_adj(cell *c, int i);
#line 270 "goldberg.cpp"
    void extend_map(cell *c, int d);
#line 509 "goldberg.cpp"
    hyperpoint loctoh_ort(loc at);
#line 596 "goldberg.cpp"
    hyperpoint get_corner_position(const local_info& li, int cid, ld cf IS(3));
#line 606 "goldberg.cpp"
    hyperpoint get_corner_position(cell *c, int cid, ld cf IS(3));
#line 612 "goldberg.cpp"
    void compute_geometry();
#line 657 "goldberg.cpp"
    loc human_representation(loc v);
#line 806 "goldberg.cpp"
    loc univ_param();
#line 812 "goldberg.cpp"
    void configure();
#line 819 "goldberg.cpp"
    void be_in_triangle(local_info& li);
#line 836 "goldberg.cpp"
    int solve_triangle(int dmain, int d0, int d1, loc at);
#line 887 "goldberg.cpp"
    hyperpoint get_master_coordinates(cell *c);
#line 893 "goldberg.cpp"
    int compute_dist(cell *c, int master_function(cell*));
#line 916 "goldberg.cpp"
    int dist_2();
#line 920 "goldberg.cpp"
    int dist_3();
#line 924 "goldberg.cpp"
    int dist_1();
#line 928 "goldberg.cpp"
    int dist_1();
#line 929 "goldberg.cpp"
    int dist_2();
#line 930 "goldberg.cpp"
    int dist_3();
    #endif
#line 933 "goldberg.cpp"
    array<heptagon*, 3> get_masters(cell *c);
#line 952 "goldberg.cpp"
    string operation_name();
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
  #if CAP_GP
  namespace gp {
#line 778 "floorshapes.cpp"
    void clear_plainshapes();
    }
  #endif
#line 832 "floorshapes.cpp"
  void set_no_floor();
#line 839 "floorshapes.cpp"
  void set_floor(floorshape& sh);
#line 846 "floorshapes.cpp"
  void set_floor(hpcshape& sh);
#line 854 "floorshapes.cpp"
  void set_floor(const transmatrix& spin, hpcshape& sh);
#line 861 "floorshapes.cpp"
  int shvid(cell *c);
#line 916 "floorshapes.cpp"
  struct dqi_poly *draw_shapevec(cell *c, const transmatrix& V, const vector<hpcshape> &shv, color_t col, PPR prio IS(PPR::DEFAULT));
#line 952 "floorshapes.cpp"
  void draw_floorshape(cell *c, const transmatrix& V, const floorshape &fsh, color_t col, PPR prio IS(PPR::DEFAULT));
#line 956 "floorshapes.cpp"
  void draw_qfi(cell *c, const transmatrix& V, color_t col, PPR prio IS(PPR::DEFAULT), vector<hpcshape> floorshape::* tab IS(&floorshape::b));
#line 974 "floorshapes.cpp"
  extern bool floorshape_debug;
#line 975 "floorshapes.cpp"
  void viewmat();
  #endif
  #if MAXMDIM >= 4
#line 1087 "floorshapes.cpp"
  void ensure_vertex_number(basic_textureinfo& bti, int qty);
#line 1095 "floorshapes.cpp"
  void ensure_vertex_number(hpcshape& sh);
#line 1099 "floorshapes.cpp"
  void bind_floor_texture(hpcshape& li, int id);
#line 1186 "floorshapes.cpp"
  void make_floor_textures();
  #endif

  // implemented in: cell.cpp

#line 14 "cell.cpp"
  extern int default_levs();
  
  struct hrmap {
  virtual heptagon *getOrigin() { return NULL; }
  virtual cell *gamestart() { return getOrigin()->c7; }
  virtual ~hrmap() { };
  virtual vector<cell*>& allcells();
  virtual void verify() { }
  virtual void link_alt(const cellwalker& hs) { }
  virtual void generateAlts(heptagon *h, int levs = default_levs(), bool link_cdata = true);
  heptagon *may_create_step(heptagon *h, int direction) {
  if(h->move(direction)) return h->move(direction);
  return create_step(h, direction);
  }
  virtual heptagon *create_step(heptagon *h, int direction) {
  printf("create_step called unexpectedly\n"); exit(1);
  return NULL;
  }
  virtual struct transmatrix relative_matrix(heptagon *h2, heptagon *h1, const hyperpoint& hint) {
  printf("relative_matrix called unexpectedly\n"); 
  return Id;
  }
  virtual struct transmatrix relative_matrix(cell *c2, cell *c1, const hyperpoint& hint) {
  return relative_matrix(c2->master, c1->master, hint);
  }
  virtual struct transmatrix adj(cell *c, int i) { return adj(c->master, i); }
  virtual struct transmatrix adj(heptagon *h, int i);
  struct transmatrix iadj(cell *c, int i) { cell *c1 = c->cmove(i); return adj(c1, c->c.spin(i)); }
  transmatrix iadj(heptagon *h, int d) { return adj(h->cmove(d), h->c.spin(d)); }
  virtual void draw() {
  printf("undrawable\n");
  }
  virtual vector<hyperpoint> get_vertices(cell*);
  
  virtual void virtualRebase(heptagon*& base, transmatrix& at) {
  printf("virtualRebase called unexpectedly\n"); 
  return;
  }
  
  static constexpr ld SPIN_NOT_AVAILABLE = 1e5;
  virtual ld spin_angle(cell *c, int d) { return SPIN_NOT_AVAILABLE; }
  
  virtual transmatrix spin_to(cell *c, int d, ld bonus=0) {
  ld sa = spin_angle(c, d);
  if(sa != SPIN_NOT_AVAILABLE) { return spin(bonus + sa); }
  transmatrix T = rspintox(tC0(adj(c, d)));
  if(WDIM == 3) return T * cspin(2, 0, bonus);
  return T * spin(bonus);
  }
  
  virtual transmatrix spin_from(cell *c, int d, ld bonus=0) {
  ld sa = spin_angle(c, d);
  if(sa != SPIN_NOT_AVAILABLE) { return spin(bonus - sa); }
  transmatrix T = spintox(tC0(adj(c, d)));
  if(WDIM == 3) return T * cspin(2, 0, bonus);
  return T * spin(bonus);
  }
  
  virtual double spacedist(cell *c, int i) { return hdist0(tC0(adj(c, i))); }
  };
  
  /** hrmaps which are based on regular non-Euclidean 2D tilings, possibly quotient  
  *  Operators can be applied to these maps. 
  *  Liskov substitution warning: maps which produce both tiling like above and 3D tilings
  *  (e.g. Euclidean and Crystal) also inherit from hrmap_standard
  **/
  struct hrmap_standard : hrmap {
  void draw() override;
  transmatrix relative_matrix(heptagon *h2, heptagon *h1, const hyperpoint& hint) override;
  transmatrix relative_matrix(cell *c2, cell *c1, const hyperpoint& hint) override;
  heptagon *create_step(heptagon *h, int direction) override;
  transmatrix adj(cell *c, int d) override;
  transmatrix adj(heptagon *h, int d) override;
  ld spin_angle(cell *c, int d) override;
  double spacedist(cell *c, int i) override;
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
  // printf("Deleting hyperbolic map: %p\n", this);
  clearfrom(origin);
  }
  void verify() override { verifycells(origin); }
  void virtualRebase(heptagon*& base, transmatrix& at) override;
  };
#line 127 "cell.cpp"
  int dirdiff(int dd, int t);
#line 134 "cell.cpp"
  extern int cellcount;
#line 136 "cell.cpp"
  cell *newCell(int type, heptagon *master);
#line 147 "cell.cpp"
  extern hrmap *currentmap;
#line 148 "cell.cpp"
  extern vector<hrmap*> allmaps;
#line 150 "cell.cpp"
  hrmap *newAltMap(heptagon *o);
#line 159 "cell.cpp"
  heptagon* hyperbolic_origin();
#line 182 "cell.cpp"
  cell *createMov(cell *c, int d);
#line 263 "cell.cpp"
  void eumerge(cell* c1, int s1, cell *c2, int s2, bool mirror);
#line 271 "cell.cpp"
  extern hookset<hrmap*()> *hooks_newmap;
#line 274 "cell.cpp"
  void initcells();
#line 312 "cell.cpp"
  void clearcell(cell *c);
#line 328 "cell.cpp"
  extern heptagon deletion_marker;
#line 341 "cell.cpp"
  void clearHexes(heptagon *at);
#line 360 "cell.cpp"
  void clear_heptagon(heptagon *at);
#line 365 "cell.cpp"
  void clearfrom(heptagon *at);
#line 409 "cell.cpp"
  void verifycell(cell *c);
#line 423 "cell.cpp"
  void verifycells(heptagon *at);
#line 434 "cell.cpp"
  int compdist(int dx[]);
#line 451 "cell.cpp"
  int celldist(cell *c);
#line 472 "cell.cpp"
  static const int ALTDIST_BOUNDARY = 99999;
  static const int ALTDIST_UNKNOWN = 99998;
  static const int ALTDIST_ERROR = 90000;
#line 477 "cell.cpp"
  int celldistAlt(cell *c);
#line 527 "cell.cpp"
  int updir(heptagon *h);
#line 541 "cell.cpp"
  int updir_alt(heptagon *h);
#line 558 "cell.cpp"
  static const int RPV_MODULO = 5;
  static const int RPV_RAND = 0;
  static const int RPV_ZEBRA = 1;
  static const int RPV_EMERALD = 2;
  static const int RPV_PALACE = 3;
  static const int RPV_CYCLE = 4;
#line 572 "cell.cpp"
  bool randpattern(cell *c, int rval);
#line 615 "cell.cpp"
  string describeRPM(eLand l);
#line 635 "cell.cpp"
  int randpatternCode(cell *c, int rval);
#line 650 "cell.cpp"
  #define RANDITER 31
#line 655 "cell.cpp"
  void clearMemoRPM();
#line 660 "cell.cpp"
  bool randpatternMajority(cell *c, int ival, int iterations);
#line 687 "cell.cpp"
  bool geometry_supports_cdata();
#line 709 "cell.cpp"
  bool dmeq(int a, int b);
#line 892 "cell.cpp"
  gp::loc pseudocoords(cell *c);
#line 897 "cell.cpp"
  cdata *arcmCdata(cell *c);
#line 904 "cell.cpp"
  int getCdata(cell *c, int j);
#line 922 "cell.cpp"
  int getBits(cell *c);
#line 940 "cell.cpp"
  cell *heptatdir(cell *c, int d);
#line 950 "cell.cpp"
  int heptdistance(heptagon *h1, heptagon *h2);
#line 968 "cell.cpp"
  int heptdistance(cell *c1, cell *c2);
#line 978 "cell.cpp"
  extern set<cell*> keep_distances_from;
#line 984 "cell.cpp"
  void compute_saved_distances(cell *c1, int max_range, int climit);
#line 992 "cell.cpp"
  void permanent_long_distances(cell *c1);
#line 1000 "cell.cpp"
  void erase_saved_distances();
#line 1007 "cell.cpp"
  int max_saved_distance(cell *c);
#line 1013 "cell.cpp"
  cell *random_in_distance(cell *c, int d);
#line 1021 "cell.cpp"
  int bounded_celldistance(cell *c1, cell *c2);
#line 1042 "cell.cpp"
  int clueless_celldistance(cell *c1, cell *c2);
#line 1059 "cell.cpp"
  int celldistance(cell *c1, cell *c2);
#line 1098 "cell.cpp"
  vector<cell*> build_shortest_path(cell *c1, cell *c2);
#line 1151 "cell.cpp"
  void clearCellMemory();
#line 1167 "cell.cpp"
  bool isNeighbor(cell *c1, cell *c2);
#line 1172 "cell.cpp"
  bool isNeighborCM(cell *c1, cell *c2);
#line 1177 "cell.cpp"
  int neighborId(cell *ofWhat, cell *whichOne);
#line 1182 "cell.cpp"
  extern int mine_adjacency_rule;
#line 1184 "cell.cpp"
  extern map<cell*, vector<cell*>> adj_memo;
#line 1186 "cell.cpp"
  bool geometry_has_alt_mine_rule();
#line 1193 "cell.cpp"
  vector<cell*> adj_minefield_cells(cell *c);
#line 1232 "cell.cpp"
  vector<int> reverse_directions(cell *c, int dir);
#line 1241 "cell.cpp"
  vector<int> reverse_directions(heptagon *c, int dir);
#line 1284 "cell.cpp"
  bool standard_tiling();
#line 1288 "cell.cpp"
  int valence();

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
    extern transmatrix whereis[MAXPLAYER];
#line 59 "multi.cpp"
    extern transmatrix crosscenter[MAXPLAYER];
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
#line 160 "multi.cpp"
    extern int centerplayer;
#line 200 "multi.cpp"
    void resetScores();
#line 209 "multi.cpp"
    string player_count_name(int p);
#line 305 "multi.cpp"
    reaction_t get_key_configurer(int sc, vector<string>& sct);
#line 480 "multi.cpp"
    void configure();
#line 484 "multi.cpp"
    void showConfigureMultiplayer();
#line 518 "multi.cpp"
    #define NUMACT 128
    
    enum pcmds {
    pcForward, pcBackward, pcTurnLeft, pcTurnRight,
    pcMoveUp, pcMoveRight, pcMoveDown, pcMoveLeft,
    pcFire, pcFace, pcFaceFire,
    pcDrop, pcCenter, pcOrbPower, pcOrbKey
    };
#line 528 "multi.cpp"
    extern int actionspressed[NUMACT], axespressed[SHMUPAXES], lactionpressed[NUMACT];
#line 535 "multi.cpp"
    bool notremapped(int sym);
#line 543 "multi.cpp"
    void initConfig();
#line 661 "multi.cpp"
    void handleInput(int delta);
#line 759 "multi.cpp"
    extern int tableid[7];
#line 761 "multi.cpp"
    void leaveGame(int i);
#line 768 "multi.cpp"
    bool playerActive(int p);
#line 773 "multi.cpp"
    int activePlayers();
#line 779 "multi.cpp"
    cell *multiPlayerTarget(int i);
#line 790 "multi.cpp"
    void checklastmove();
#line 804 "multi.cpp"
    void handleMulti(int delta);
#line 938 "multi.cpp"
    void mousemovement(cell *c);
    }

  // implemented in: shmup.cpp

  namespace shmupballs {
#line 13 "shmup.cpp"
    extern int xmove, xfire, yb, rad;
#line 15 "shmup.cpp"
    void calc();
    }
#line 42 "shmup.cpp"
  #define SCALE cgi.scalefactor
  #define SCALE2 (SCALE*SCALE)
  namespace shmup {
#line 49 "shmup.cpp"
    struct monster {
    eMonster type;
    cell *base;
    cell *torigin; 
    // tortoises: origin
    // butterflies: last position
    transmatrix at;
    transmatrix pat;
    /** orientation for the product geometry */
    transmatrix ori;
    eMonster stk;
    bool dead;
    bool notpushed;
    bool inBoat;
    bool no_targetting;
    monster *parent; // who shot this missile
    eMonster parenttype; // type of the parent
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
    
    monster() { 
    dead = false; inBoat = false; parent = NULL; nextshot = 0; 
    stunoff = 0; blowoff = 0; footphase = 0; no_targetting = false;
    swordangle = 0; inertia = Hypc; if(prod) ori = Id;
    }
    
    void store();
    
    void findpat();
    
    cell *findbase(const transmatrix& T, int maxsteps);
    
    void rebasePat(const transmatrix& new_pat, cell *tgt);
    
    };  
#line 101 "shmup.cpp"
    extern bool on;
#line 102 "shmup.cpp"
    extern bool delayed_safety;
#line 106 "shmup.cpp"
    extern multimap<cell*, monster*> monstersAt;
#line 109 "shmup.cpp"
    typedef multimap<cell*, monster*>::iterator mit;
#line 229 "shmup.cpp"
    extern monster *pc[MAXPLAYER], *mousetarget, *lmousetarget;
#line 231 "shmup.cpp"
    extern int curtime, nextmove, nextdragon;
#line 239 "shmup.cpp"
    extern hookset<bool(shmup::monster*)> *hooks_kill;
#line 266 "shmup.cpp"
    void pushmonsters();
#line 276 "shmup.cpp"
    void popmonsters();
#line 295 "shmup.cpp"
    void degradeDemons();
#line 303 "shmup.cpp"
    extern double playerturn[MAXPLAYER], playergo[MAXPLAYER], playerstrafe[MAXPLAYER], playerturny[MAXPLAYER], playergoturn[MAXPLAYER], godir[MAXPLAYER];
#line 304 "shmup.cpp"
    extern transmatrix playersmallspin[MAXPLAYER];
#line 352 "shmup.cpp"
    void visibleFor(int t);
#line 414 "shmup.cpp"
    void killThePlayer(eMonster m);
#line 576 "shmup.cpp"
    extern transmatrix swordmatrix[MAXPLAYER];
#line 619 "shmup.cpp"
    void activateArrow(cell *c);
#line 1325 "shmup.cpp"
    monster *getPlayer();
#line 1348 "shmup.cpp"
    int reflect(cell*& c2, cell*& mbase, transmatrix& nat);
#line 1439 "shmup.cpp"
    bool verifyTeleport();
#line 1451 "shmup.cpp"
    void teleported();
#line 1501 "shmup.cpp"
    eItem targetRangedOrb(orbAction a);
#line 1587 "shmup.cpp"
    int protect_pid(int i);
#line 1817 "shmup.cpp"
    bool dragonbreath(cell *dragon);
#line 2447 "shmup.cpp"
    void fixStorage();
#line 2459 "shmup.cpp"
    extern hookset<bool(int)> *hooks_turn;
#line 2461 "shmup.cpp"
    void turn(int delta);
#line 2720 "shmup.cpp"
    void recall();
#line 2734 "shmup.cpp"
    void init();
#line 2764 "shmup.cpp"
    bool boatAt(cell *c);
#line 2774 "shmup.cpp"
    extern hookset<bool(const transmatrix&, cell*, shmup::monster*)> *hooks_draw;
#line 2776 "shmup.cpp"
    void clearMonsters();
#line 2786 "shmup.cpp"
    void clearMemory();
#line 2816 "shmup.cpp"
    cell *playerpos(int i);
#line 2821 "shmup.cpp"
    bool playerInBoat(int i);
#line 2826 "shmup.cpp"
    void destroyBoats(cell *c);
#line 2832 "shmup.cpp"
    void virtualRebase(shmup::monster *m);
#line 2836 "shmup.cpp"
    extern hookset<bool(shmup::monster*, string&)> *hooks_describe;
#line 2838 "shmup.cpp"
    void addShmupHelp(string& out);
#line 2860 "shmup.cpp"
    void switch_shmup();
    }

  // implemented in: pattern2.cpp

#line 15 "pattern2.cpp"
  enum cpatterntype { 
  cpFootball, cpThree, cpChess, cpSingle, cpSingleSym, cpOddEven, cpLarge, cpZebra, cpUnknown
  };
#line 20 "pattern2.cpp"
  int ctof(cell *c);
#line 32 "pattern2.cpp"
  int ctof012(cell *c);
#line 59 "pattern2.cpp"
  bool ishept(cell *c);
#line 66 "pattern2.cpp"
  bool ishex1(cell *c);
#line 93 "pattern2.cpp"
  int emeraldval(heptagon *h);
#line 95 "pattern2.cpp"
  int emeraldval(cell *c);
#line 144 "pattern2.cpp"
  int cdist50(cell *c);
#line 171 "pattern2.cpp"
  bool polara50(cell *c);
#line 183 "pattern2.cpp"
  bool polarb50(cell *c);
#line 200 "pattern2.cpp"
  int fiftyval049(heptagon *h);
#line 216 "pattern2.cpp"
  int fiftyval049(cell *c);
#line 253 "pattern2.cpp"
  int fiftyval200(cell *c);
#line 291 "pattern2.cpp"
  int zebra40(cell *c);
#line 348 "pattern2.cpp"
  int zebra3(cell *c);
  #if CAP_FIELD
  namespace fieldpattern {
#line 368 "pattern2.cpp"
    pair<int, bool> fieldval(cell *c);
#line 374 "pattern2.cpp"
    int fieldval_uniq(cell *c);
#line 409 "pattern2.cpp"
    int fieldval_uniq_rand(cell *c, int randval);
    }
  #endif
#line 450 "pattern2.cpp"
  int getHemisphere(heptagon *h, int which);
#line 479 "pattern2.cpp"
  int getHemisphere(cell *c, int which);
  namespace patterns {
#line 554 "pattern2.cpp"
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
    int symmetries;
    };
#line 638 "pattern2.cpp"
    int downdir(cell *c, const cellfunction& cf);
#line 721 "pattern2.cpp"
    void val38(cell *c, patterninfo &si, int sub, int pat);
#line 949 "pattern2.cpp"
    extern ePattern whichPattern;
#line 951 "pattern2.cpp"
    extern int subpattern_flags;
#line 988 "pattern2.cpp"
    patterninfo getpatterninfo(cell *c, ePattern pat, int sub);
#line 1200 "pattern2.cpp"
    inline patterninfo getpatterninfo0(cell *c) {
    return getpatterninfo(c, whichPattern, subpattern_flags);
    }
    }
#line 1207 "pattern2.cpp"
  bool geosupport_chessboard();
#line 1218 "pattern2.cpp"
  int geosupport_threecolor();
#line 1238 "pattern2.cpp"
  int geosupport_football();
#line 1267 "pattern2.cpp"
  int pattern_threecolor(cell *c);
#line 1391 "pattern2.cpp"
  bool pseudohept(cell *c);
#line 1426 "pattern2.cpp"
  bool kraken_pseudohept(cell *c);
#line 1450 "pattern2.cpp"
  bool warptype(cell *c);
#line 1459 "pattern2.cpp"
  extern map<char, colortable> colortables;
  namespace patterns {
#line 1508 "pattern2.cpp"
    extern int canvasback;
#line 1509 "pattern2.cpp"
    extern int subcanvas;
#line 1510 "pattern2.cpp"
    extern bool displaycodes;
#line 1511 "pattern2.cpp"
    extern char whichShape;
#line 1512 "pattern2.cpp"
    extern char whichCanvas;
#line 1513 "pattern2.cpp"
    extern bool innerwalls;
#line 1521 "pattern2.cpp"
    extern string color_formula;
#line 1668 "pattern2.cpp"
    extern hookset<int(cell*)> *hooks_generate_canvas;
#line 1670 "pattern2.cpp"
    int generateCanvas(cell *c);
#line 2036 "pattern2.cpp"
    void showPrePattern();
#line 2037 "pattern2.cpp"
    void showPrePatternNoninstant();
#line 2046 "pattern2.cpp"
    void showPattern();
#line 2222 "pattern2.cpp"
    bool compatible(cpatterntype oldp, cpatterntype newp);
#line 2332 "pattern2.cpp"
    extern cpatterntype cgroup, old_cgroup;
#line 2403 "pattern2.cpp"
    void computeCgroup();
#line 2429 "pattern2.cpp"
    void pushChangeablePatterns();
    }
#line 2435 "pattern2.cpp"
  bool is_master(cell *c);
  namespace linepatterns {
#line 2443 "pattern2.cpp"
    struct linepattern {
    string lpname;
    color_t color;
    ld multiplier;
    function<bool()> is_available;
    function<void(linepattern*)> renderer;
    
    linepattern(string _lpname, color_t _color, function<bool()> _av, function<void(linepattern*)> _rend) : 
    lpname(_lpname), color(_color), multiplier(1), is_available(_av), renderer(_rend) {}
    };
#line 2803 "pattern2.cpp"
    extern linepattern patTriTree, patTriRings, patTriOther;
#line 2806 "pattern2.cpp"
    extern vector<linepattern*> patterns;
#line 2816 "pattern2.cpp"
    void clearAll();
#line 2820 "pattern2.cpp"
    extern ld width;
#line 2822 "pattern2.cpp"
    void drawAll();
#line 2841 "pattern2.cpp"
    void showMenu();
    }

  // implemented in: mapeditor.cpp

  namespace mapeditor {
#line 14 "mapeditor.cpp"
    enum eShapegroup { sgPlayer, sgMonster, sgItem, sgFloor, sgWall };
    static const int USERSHAPEGROUPS = 5;
#line 26 "mapeditor.cpp"
    struct editwhat {
    double dist;
    int rotid, symid, pointid;
    bool side;
    cell *c;
    };
#line 33 "mapeditor.cpp"
    extern editwhat ew, ewsearch;
#line 34 "mapeditor.cpp"
    extern bool autochoose;
#line 36 "mapeditor.cpp"
    void scaleall(ld z);
    #if CAP_EDIT
#line 69 "mapeditor.cpp"
    extern map<int, cell*> modelcell;
#line 73 "mapeditor.cpp"
    void applyModelcell(cell *c);
    #endif
#line 605 "mapeditor.cpp"
    extern bool drawplayer;
#line 607 "mapeditor.cpp"
    extern cell *drawcell;
    #if CAP_EDIT
#line 742 "mapeditor.cpp"
    extern unordered_set<cell*> affected;
#line 743 "mapeditor.cpp"
    extern unordered_set<int> affected_id;
#line 745 "mapeditor.cpp"
    void showMapEditor();
#line 788 "mapeditor.cpp"
    eShapegroup drawcellShapeGroup();
#line 796 "mapeditor.cpp"
    int drawcellShapeID();
#line 1160 "mapeditor.cpp"
    extern transmatrix drawtrans, drawtransnew;
#line 1172 "mapeditor.cpp"
    void drawGhosts(cell *c, const transmatrix& V, int ct);
#line 1234 "mapeditor.cpp"
    void drawGrid();
#line 1351 "mapeditor.cpp"
    void showDrawEditor();
    #endif
#line 2147 "mapeditor.cpp"
    void initdraw(cell *c);
    #if CAP_POLY
#line 2178 "mapeditor.cpp"
    bool haveUserShape(eShapegroup group, int id);
    #endif
    #if CAP_TEXTURE      
#line 2188 "mapeditor.cpp"
    void draw_texture_ghosts(cell *c, const transmatrix& V);
    #endif
    #if CAP_POLY
#line 2224 "mapeditor.cpp"
    bool drawUserShape(const transmatrix& V, eShapegroup group, int id, color_t color, cell *c, PPR prio IS(PPR::DEFAULT));
    #endif
#line 2365 "mapeditor.cpp"
    void map_settings();
    }
  #if CAP_EDIT
#line 2400 "mapeditor.cpp"
  extern string levelfile;
#line 2401 "mapeditor.cpp"
  extern const char *loadlevel;
#line 2402 "mapeditor.cpp"
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
  extern int detaillevel;
#line 27 "graph.cpp"
  extern bool first_cell_to_draw;
#line 29 "graph.cpp"
  bool in_perspective();
#line 33 "graph.cpp"
  bool hide_player();
#line 43 "graph.cpp"
  extern hookset<bool(int sym, int uni)> *hooks_handleKey;
#line 44 "graph.cpp"
  extern hookset<bool(cell *c, const transmatrix& V)> *hooks_drawcell;
#line 45 "graph.cpp"
  extern purehookset hooks_frame, hooks_markers;
#line 47 "graph.cpp"
  extern ld animation_factor;
#line 48 "graph.cpp"
  extern int animation_lcm;
#line 50 "graph.cpp"
  ld ptick(int period, ld phase IS(0));
#line 55 "graph.cpp"
  ld fractick(int period, ld phase IS(0));
#line 62 "graph.cpp"
  ld sintick(int period, ld phase IS(0));
#line 66 "graph.cpp"
  transmatrix spintick(int period, ld phase IS(0));
#line 78 "graph.cpp"
  extern bool inHighQual; // taking high quality screenshot
#line 79 "graph.cpp"
  extern bool auraNOGL;    // aura without GL
#line 84 "graph.cpp"
  extern int ticks;
#line 85 "graph.cpp"
  extern int frameid;
#line 87 "graph.cpp"
  extern bool camelotcheat;
#line 88 "graph.cpp"
  extern bool nomap;
#line 90 "graph.cpp"
  extern eItem orbToTarget;
#line 91 "graph.cpp"
  extern eMonster monsterToSummon;
#line 93 "graph.cpp"
  extern int sightrange_bonus;
#line 95 "graph.cpp"
  extern string mouseovers;
#line 97 "graph.cpp"
  extern int darken;
#line 108 "graph.cpp"
  bool doHighlight();
#line 119 "graph.cpp"
  int cloakcolor(int rtr);
#line 136 "graph.cpp"
  int firecolor(int phase IS(0), int mul IS(1));
#line 140 "graph.cpp"
  int watercolor(int phase);
#line 144 "graph.cpp"
  int aircolor(int phase);
#line 149 "graph.cpp"
  int sealcolor(int phase IS(0));
#line 153 "graph.cpp"
  int barriercolor(int phase IS(0));
#line 157 "graph.cpp"
  int hurricanecolor(int phase IS(0), int type IS(0));
#line 169 "graph.cpp"
  int colorfulcolor(int phase);
#line 180 "graph.cpp"
  int fghostcolor(cell *c);
#line 189 "graph.cpp"
  int weakfirecolor(int phase);
#line 206 "graph.cpp"
  extern int lightat, safetyat;
#line 207 "graph.cpp"
  void drawLightning();
#line 208 "graph.cpp"
  void drawSafety();
#line 287 "graph.cpp"
  ld cheilevel(ld v);
#line 291 "graph.cpp"
  transmatrix chei(const transmatrix V, int a, int b);
#line 346 "graph.cpp"
  void drawPlayerEffects(const transmatrix& V, cell *c, bool onplayer);
  namespace tortoise {
#line 507 "graph.cpp"
    int getMatchColor(int bits);
    }
#line 528 "graph.cpp"
  extern bool ivoryz;
#line 585 "graph.cpp"
  extern bool noshadow;
  #if CAP_SHAPES
#line 588 "graph.cpp"
  void ShadowV(const transmatrix& V, const hpcshape& bp, PPR prio IS(PPR::MONSTER_SHADOW));
  #endif
#line 713 "graph.cpp"
  bool drawstar(cell *c);
#line 721 "graph.cpp"
  bool drawing_usershape_on(cell *c, mapeditor::eShapegroup sg);
#line 729 "graph.cpp"
  color_t kind_outline(eItem it);
#line 739 "graph.cpp"
  transmatrix face_the_player(const transmatrix V);
#line 748 "graph.cpp"
  hpcshape& orbshape(eOrbshape s);
#line 762 "graph.cpp"
  color_t orb_auxiliary_color(eItem it);
#line 779 "graph.cpp"
  bool drawItemType(eItem it, cell *c, const transmatrix& V, color_t icol, int pticks, bool hidden);
  #if CAP_SHAPES
#line 1017 "graph.cpp"
  void drawTerraWarrior(const transmatrix& V, int t, int hp, double footphase);
  #endif
#line 1033 "graph.cpp"
  void drawPlayer(eMonster m, cell *where, const transmatrix& V, color_t col, double footphase, bool stop IS(false));
#line 1204 "graph.cpp"
  int wingphase(int period, int phase IS(0));
#line 1295 "graph.cpp"
  bool drawMonsterType(eMonster m, cell *where, const transmatrix& V1, color_t col, double footphase, color_t asciicol);
#line 2361 "graph.cpp"
  extern transmatrix playerV;
#line 2363 "graph.cpp"
  bool applyAnimation(cell *c, transmatrix& V, double& footphase, int layer);
#line 2453 "graph.cpp"
  int cellcolor(cell *c);
#line 2498 "graph.cpp"
  extern bool dont_face_pc;
#line 2500 "graph.cpp"
  bool drawMonster(const transmatrix& Vparam, int ct, cell *c, color_t col, color_t asciicol);
#line 2937 "graph.cpp"
  int haveaura();
#line 2950 "graph.cpp"
  void clearaura();
#line 2970 "graph.cpp"
  void addauraspecial(hyperpoint h, color_t col, int dir);
#line 2977 "graph.cpp"
  void addaura(hyperpoint h, color_t col, int fd);
#line 3152 "graph.cpp"
  extern colortable minecolors;
#line 3157 "graph.cpp"
  extern colortable distcolors;
#line 3173 "graph.cpp"
  int countMinesAround(cell *c);
#line 3181 "graph.cpp"
  transmatrix applyPatterndir(cell *c, const patterns::patterninfo& si);
#line 3189 "graph.cpp"
  transmatrix applyDowndir(cell *c, const cellfunction& cf);
#line 3221 "graph.cpp"
  int celldistAltPlus(cell *c);
#line 3227 "graph.cpp"
  color_t reptilecolor(cell *c);
#line 3255 "graph.cpp"
  extern colortable nestcolors;
#line 3259 "graph.cpp"
  void init_floorcolors();
#line 3305 "graph.cpp"
  color_t magma_color(int id);
#line 3319 "graph.cpp"
  bool has_nice_dual();
#line 3339 "graph.cpp"
  bool is_nice_dual(cell *c);
#line 3343 "graph.cpp"
  bool use_swapped_duals();
  #if CAP_SHAPES
#line 3348 "graph.cpp"
  void floorShadow(cell *c, const transmatrix& V, color_t col);
#line 3361 "graph.cpp"
  bool use_warp_graphics();
#line 3368 "graph.cpp"
  void escherSidewall(cell *c, int sidepar, const transmatrix& V, color_t col);
#line 3397 "graph.cpp"
  bool placeSidewall(cell *c, int i, int sidepar, const transmatrix& V, color_t col);
  #endif
#line 3442 "graph.cpp"
  extern color_t stdgridcolor;
#line 3444 "graph.cpp"
  int gridcolor(cell *c1, cell *c2);
  #if CAP_SHAPES
#line 3468 "graph.cpp"
  void pushdown(cell *c, int& q, const transmatrix &V, double down, bool rezoom, bool repriority);
  #endif
#line 3529 "graph.cpp"
  int shallow(cell *c);
#line 3550 "graph.cpp"
  extern bool bright;
#line 3553 "graph.cpp"
  int getfd(cell *c);
#line 3613 "graph.cpp"
  extern bool just_gmatrix;
#line 3615 "graph.cpp"
  int colorhash(color_t i);
#line 3619 "graph.cpp"
  bool isWall3(cell *c, color_t& wcol);
#line 3628 "graph.cpp"
  bool isWall3(cell *c);
#line 3630 "graph.cpp"
  bool isSulphuric(eWall w);
#line 3638 "graph.cpp"
  color_t transcolor(cell *c, cell *c2, color_t wcol);
#line 3671 "graph.cpp"
  int get_darkval(cell *c, int d);
#line 3704 "graph.cpp"
  ld mousedist(transmatrix T);
#line 3715 "graph.cpp"
  extern int noclipped;
#line 3769 "graph.cpp"
  extern ld precise_width;
#line 3773 "graph.cpp"
  extern bool fat_edges;
#line 3775 "graph.cpp"
  void gridline(const transmatrix& V1, const hyperpoint h1, const transmatrix& V2, const hyperpoint h2, color_t col, int prec);
#line 3807 "graph.cpp"
  void gridline(const transmatrix& V, const hyperpoint h1, const hyperpoint h2, color_t col, int prec);
#line 3811 "graph.cpp"
  int wall_offset(cell *c);
#line 3817 "graph.cpp"
  void queue_transparent_wall(const transmatrix& V, hpcshape& sh, color_t color);
  #if MAXMDIM >= 4
#line 3830 "graph.cpp"
  int ceiling_category(cell *c);
  #endif
#line 3942 "graph.cpp"
  void set_detail_level(const transmatrix& V);
#line 3976 "graph.cpp"
  void drawBubble(cell *c, color_t col, string s, ld size);
#line 3984 "graph.cpp"
  void drawFlash(cell *c);
#line 3987 "graph.cpp"
  void drawBigFlash(cell *c);
#line 3991 "graph.cpp"
  void drawParticleSpeed(cell *c, color_t col, int speed);
#line 3996 "graph.cpp"
  void drawParticle(cell *c, color_t col, int maxspeed IS(100));
#line 4000 "graph.cpp"
  void drawDirectionalParticle(cell *c, int dir, color_t col, int maxspeed IS(100));
#line 4012 "graph.cpp"
  void drawParticles(cell *c, color_t col, int qty, int maxspeed IS(100));
#line 4016 "graph.cpp"
  void drawFireParticles(cell *c, int qty, int maxspeed IS(100));
#line 4021 "graph.cpp"
  void fallingFloorAnimation(cell *c, eWall w IS(waNone), eMonster m IS(moNone));
#line 4029 "graph.cpp"
  void fallingMonsterAnimation(cell *c, eMonster m, int id IS(multi::cpid));
  #if CAP_QUEUE
#line 4089 "graph.cpp"
  void queuecircleat1(cell *c, const transmatrix& V, double rad, color_t col);
#line 4129 "graph.cpp"
  void queuecircleat(cell *c, double rad, color_t col);
  #endif
#line 4141 "graph.cpp"
  cell *forwardcell();
#line 4147 "graph.cpp"
  void drawMarkers();
  #if CAP_QUEUE
#line 4364 "graph.cpp"
  void draw_flash(struct flashdata& f, const transmatrix& V, bool& kill);
  #endif
#line 4453 "graph.cpp"
  bool allowIncreasedSight();
#line 4466 "graph.cpp"
  bool allowChangeRange();
#line 4478 "graph.cpp"
  extern purehookset hooks_drawmap;
#line 4480 "graph.cpp"
  extern transmatrix actual_view_transform;
#line 4482 "graph.cpp"
  ld wall_radar(cell *c, transmatrix T, transmatrix LPe, ld max);
#line 4502 "graph.cpp"
  void make_actual_view();
#line 4543 "graph.cpp"
  transmatrix cview();
#line 4547 "graph.cpp"
  void precise_mouseover();
#line 4588 "graph.cpp"
  extern transmatrix Viewbase;
#line 4590 "graph.cpp"
  extern bool no_wall_rendering;
#line 4592 "graph.cpp"
  void drawthemap();
#line 4765 "graph.cpp"
  void drawmovestar(double dx, double dy);
#line 4821 "graph.cpp"
  extern bool dronemode;
#line 4825 "graph.cpp"
  extern int corner_centering;
#line 4827 "graph.cpp"
  extern bool permaside;
#line 4829 "graph.cpp"
  void calcparam();
#line 4894 "graph.cpp"
  void drawfullmap();
#line 4963 "graph.cpp"
  void gamescreen(int _darken);
#line 5039 "graph.cpp"
  extern bool nohelp;
#line 5041 "graph.cpp"
  void normalscreen();
#line 5070 "graph.cpp"
  extern vector< function<void()> > screens;
#line 5073 "graph.cpp"
  template<class T> void pushScreen(const T& x) { screens.push_back(x); } 
  inline void popScreen() { if(isize(screens)>1) screens.pop_back(); }
  inline void popScreenAll() { while(isize(screens)>1) popScreen(); }
  typedef void (*cfunction)();
#line 5079 "graph.cpp"
  cfunction current_screen_cfunction();
#line 5086 "graph.cpp"
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
  };
#line 5107 "graph.cpp"
  extern int cmode;
#line 5109 "graph.cpp"
  void drawscreen();
#line 5215 "graph.cpp"
  void restartGraph();
#line 5225 "graph.cpp"
  void clearAnimations();
#line 5250 "graph.cpp"
  struct animation {
  int ltick;
  double footphase;
  transmatrix wherenow;
  int attacking;
  transmatrix attackat;
  bool mirrored;
  };
  
  // we need separate animation layers for Orb of Domination and Tentacle+Ghost,
  // and also to mark Boats
  #define ANIMLAYERS 3
  #define LAYER_BIG   0 // for worms and krakens
  #define LAYER_SMALL 1 // for others
  #define LAYER_BOAT  2 // mark that a boat has moved
#line 5267 "graph.cpp"
  extern array<map<cell*, animation>, ANIMLAYERS> animations;
#line 5269 "graph.cpp"
  int revhint(cell *c, int hint);
#line 5274 "graph.cpp"
  transmatrix adj(const movei& m);
#line 5279 "graph.cpp"
  transmatrix iadj(const movei& m);
#line 5284 "graph.cpp"
  void animateMovement(const movei& m, int layer);
#line 5306 "graph.cpp"
  void animateAttack(const movei& m, int layer);
#line 5319 "graph.cpp"
  void indAnimateMovement(const movei& m, int layer);
#line 5339 "graph.cpp"
  void commitAnimations(int layer);
#line 5346 "graph.cpp"
  void drawBug(const cellwalker& cw, color_t col);
#line 5356 "graph.cpp"
  bool inscreenrange(cell *c);

  // implemented in: textures.cpp

  #if CAP_TEXTURE
#line 13 "textures.cpp"
  struct texture_triangle {
  array<hyperpoint, 3> v;
  array<hyperpoint, 3> tv;
  texture_triangle(array<hyperpoint, 3> _v, array<hyperpoint, 3> _tv) : v(_v), tv(_tv) {}
  };
  
  struct textureinfo : basic_textureinfo {
  transmatrix M;
  vector<texture_triangle> triangles;
  vector<glvertex> vertices;
  cell *c;
  vector<transmatrix> matrices;
  
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
    
    int twidth;
    int tx, ty, origdim;
    
    texture_data() { textureid = 0; twidth = 2048; }
    
    vector<color_t> texture_pixels;
    
    color_t& get_texture_pixel(int x, int y) {
    return texture_pixels[(y&(twidth-1))*twidth+(x&(twidth-1))];
    }
    
    vector<pair<color_t*, color_t>> undos;
    vector<tuple<cell*, hyperpoint, int> > pixels_to_draw;
    
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
    color_t paint_color;
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
    vector<hyperpoint*> tuned_vertices;
    
    bool apply(cell *c, const transmatrix &V, color_t col);
    void mark_triangles();
    
    void clear_texture_map();
    void perform_mapping();
    void mapTextureTriangle(textureinfo &mi, const array<hyperpoint, 3>& v, const array<hyperpoint, 3>& tv, int splits);
    void mapTextureTriangle(textureinfo &mi, const array<hyperpoint, 3>& v, const array<hyperpoint, 3>& tv) { mapTextureTriangle(mi, v, tv, gsplits); }
    void mapTexture2(textureinfo& mi);
    void finish_mapping();
    void true_remap();
    void remap();
    bool correctly_mapped;
    hyperpoint texture_coordinates(hyperpoint);
    
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
    paint_color = 0x000000FF;
    grid_color = 0;
    mesh_color = 0;
    master_color = 0xFFFFFF30;
    slave_color = 0xFF000008;
    color_alpha = 128;
    gsplits = 1;
    texture_tuned = false;
    }
    
    };
#line 137 "textures.cpp"
    extern cpatterntype cgroup;
#line 171 "textures.cpp"
    extern texture_config config;
#line 173 "textures.cpp"
    extern bool saving;
#line 456 "textures.cpp"
    extern bool texture_aura;
#line 458 "textures.cpp"
    bool using_aura();
    #if CAP_EDIT
#line 1214 "textures.cpp"
    void start_editor();
    #endif
#line 1226 "textures.cpp"
    void showMenu();
#line 1452 "textures.cpp"
    extern ld penwidth;
#line 1553 "textures.cpp"
    extern bool texturesym;
#line 1570 "textures.cpp"
    void drawPixel(cell *c, hyperpoint h, color_t col);
#line 1574 "textures.cpp"
    extern cell *where;
#line 1576 "textures.cpp"
    void drawPixel(hyperpoint h, color_t col);
#line 1598 "textures.cpp"
    void drawLine(hyperpoint h1, hyperpoint h2, color_t col, int steps IS(10));
    #if CAP_TEXTURE
#line 1682 "textures.cpp"
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
  #define DF_KEYS "imwesxufgbtopl"
#line 31 "hprint.cpp"
  extern int debugflags;
#line 33 "hprint.cpp"
  extern string s0;
#line 35 "hprint.cpp"
  string its(int i);
#line 37 "hprint.cpp"
  string itsh8(int i);
#line 39 "hprint.cpp"
  string fts(ld x, int prec IS(6));
#line 48 "hprint.cpp"
  string index_pointer(void *v);
#line 58 "hprint.cpp"
  inline string ONOFF(bool b) { return XLAT(b ? "ON" : "OFF"); }
  
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
  virtual color_t get_vernum() override { return vernum; }
  FILE *f;
  virtual void write_char(char c) override { write_chars(&c, 1); }
  virtual void write_chars(const char* c, size_t i) override { if(fwrite(c, i, 1, f) != 1) throw hstream_exception(); }
  virtual void read_chars(char* c, size_t i) override { if(fread(c, i, 1, f) != 1) throw hstream_exception(); }
  virtual char read_char() override { char c; read_chars(&c, 1); return c; }
  fhstream() { f = NULL; vernum = VERNUM_HEX; }
  fhstream(const string pathname, const char *mode) { f = fopen(pathname.c_str(), mode); vernum = VERNUM_HEX; }
  ~fhstream() { if(f) fclose(f); }
  };
  
  struct shstream : hstream { 
  string s;
  int pos;
  shstream(const string& t = "") : s(t) { pos = 0; }
  virtual void write_char(char c) { s += c; }
  virtual char read_char() { if(pos == isize(s)) throw hstream_exception(); return s[pos++]; }
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
  
  inline void print(hstream& hs, const hyperpoint h) { print(hs, (const array<ld, MAXMDIM>&)h); }
  inline void print(hstream& hs, const transmatrix T) { 
  print(hs, "("); comma_printer c(hs);
  for(int i=0; i<MDIM; i++)
  for(int j=0; j<MDIM; j++) c(T[i][j]);
  print(hs, ")"); }
  
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
  
  #if !CAP_SDL && !ISFAKEMOBILE
  int SDL_GetTicks();
  #endif
  
  struct logger : hstream {
  int indentation;
  bool doindent;
  logger() { doindent = false; }
  virtual void write_char(char c) { if(doindent) { doindent = false; 
  if(debugflags & DF_TIME) { int t = SDL_GetTicks(); if(t < 0) t = 999999; t %= 1000000; string s = its(t); while(isize(s) < 6) s = "0" + s; for(char c: s) special_log(c); special_log(' '); }
  for(int i=0; i<indentation; i++) special_log(' '); } special_log(c); if(c == 10) doindent = true; if(c == 10 && debugfile) fflush(debugfile); }
  virtual char read_char() { throw hstream_exception(); }
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
  
  indenter(int i = 2) : ind(hlog.indentation, hlog.indentation + (i)) {}
  };
  
  struct indenter_finish : indenter {
  indenter_finish(bool b = true): indenter(b ? 2:0) {}
  ~indenter_finish() { if(hlog.indentation != ind.backup) println(hlog, "(done)"); }
  };
  
#line 281 "hprint.cpp"
  string fts_fixed(ld x, int prec IS(6));
#line 317 "hprint.cpp"
  string cts(char c);
#line 318 "hprint.cpp"
  string llts(long long i);
#line 324 "hprint.cpp"
  string itsh(unsigned int i);
#line 325 "hprint.cpp"
  string itsh(int i);
#line 326 "hprint.cpp"
  string itsh2(int i);
#line 328 "hprint.cpp"
  string itsh(unsigned long long i);
#line 335 "hprint.cpp"
  extern logger hlog;
#line 340 "hprint.cpp"
  ld kz(ld x);
#line 345 "hprint.cpp"
  hyperpoint kz(hyperpoint h);
#line 350 "hprint.cpp"
  transmatrix kz(transmatrix h);
#line 357 "hprint.cpp"
  string pick123();
#line 358 "hprint.cpp"
  string pick12();
#line 361 "hprint.cpp"
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
#line 376 "hprint.cpp"
  string as_cstring(string o);
#line 385 "hprint.cpp"
  #if ISANDROID
  #define DEBB(r,x)
  #define DEBB0(r,x)
  #define DEBBI(r,x)
  #else
  #define DEBB(r,x) { if(debugflags & (r)) { println_log x; } }
  #define DEBB0(r,x) { if(debugflags & (r)) { print_log x; } }
  #define DEBBI(r,x) { if(debugflags & (r)) { println_log x; } } indenter_finish _debbi(debugflags & (r));
  #endif

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
#line 319 "language.cpp"
  string XLAT(string x);
#line 324 "language.cpp"
  string XLAT(string x, stringpar p1);
#line 330 "language.cpp"
  string XLAT(string x, stringpar p1, stringpar p2);
#line 337 "language.cpp"
  string XLAT(string x, stringpar p1, stringpar p2, stringpar p3);
#line 345 "language.cpp"
  string XLAT(string x, stringpar p1, stringpar p2, stringpar p3, stringpar p4);
#line 354 "language.cpp"
  string XLAT(string x, stringpar p1, stringpar p2, stringpar p3, stringpar p4, stringpar p5);
#line 366 "language.cpp"
  string XLATN(string x);
#line 376 "language.cpp"
  string XLAT1(string x);
#line 386 "language.cpp"
  string XLATT1(stringpar p);
#line 388 "language.cpp"
  bool shapename_available(int id);
#line 390 "language.cpp"
  string shapename(int id);

  // implemented in: util.cpp

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
  ld ilerp(ld a0, ld a1, ld x);
  #if CAP_PROFILING
#line 86 "util.cpp"
  void profile_start(int t);
#line 87 "util.cpp"
  void profile_stop(int t);
  #endif
  #if !CAP_PROFILING
#line 104 "util.cpp"
  #define profile_frame()
  #define profile_start(t)
  #define profile_stop(t)
  #define profile_info()
  #endif
#line 111 "util.cpp"
  extern purehookset hooks_tests;
#line 113 "util.cpp"
  string simplify(const string& s);
#line 119 "util.cpp"
  bool appears(const string& haystack, const string& needle);
#line 124 "util.cpp"
  struct hr_parse_exception : hr_exception {
  string s;
  hr_parse_exception(const string& z) : s(z) {}
  ~hr_parse_exception() noexcept(true) {}
  };
  
  struct exp_parser {
  string s;
  int at;
  exp_parser() { at = 0; }
  
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
  
  ld rparse(int prio = 0) { return real(parse(prio)); }
  int iparse(int prio = 0) { return int(floor(rparse(prio) + .5)); }
  
  cld parsepar() {
  cld res = parse();
  force_eat(")");
  return res;
  }
  
  void force_eat(const char *c) {
  skip_white();
  if(!eat(c)) throw hr_parse_exception("expected: " + string(c));
  }
  
  };
#line 318 "util.cpp"
  ld parseld(const string& s);
#line 324 "util.cpp"
  string parser_help();
#line 330 "util.cpp"
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
  
  friend inline bignum operator +(bignum a, const bignum& b) { a.addmul(b, 1); return a; }
  friend inline bignum operator -(bignum a, const bignum& b) { a.addmul(b, -1); return a; }
  };
#line 458 "util.cpp"
  bignum hrand(bignum b);
#line 469 "util.cpp"
  void operator ++(bignum &b, int);
#line 484 "util.cpp"
  void operator --(bignum &b, int);
#line 516 "util.cpp"
  string short_form(bignum b);
  #if CAP_ZLIB
#line 551 "util.cpp"
  string compress_string(string s);
#line 572 "util.cpp"
  string decompress_string(string s);
  #endif

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
    };
    
#line 513 "complex.cpp"
    gp::loc coords();
#line 515 "complex.cpp"
    extern bool generating;
#line 516 "complex.cpp"
    extern bool challenge;
#line 517 "complex.cpp"
    extern bool saved;
#line 518 "complex.cpp"
    extern bool everSaved;
#line 520 "complex.cpp"
    extern bool forceVizier;
#line 521 "complex.cpp"
    extern bool forceMouse;
#line 522 "complex.cpp"
    extern bool gotoPrincess;
#line 523 "complex.cpp"
    extern bool nodungeon;
#line 524 "complex.cpp"
    extern bool squeaked;
#line 526 "complex.cpp"
    extern int saveHP;
#line 527 "complex.cpp"
    extern int saveArmedHP;
#line 529 "complex.cpp"
    extern int reviveAt;
#line 537 "complex.cpp"
    int newInfo(cell *c);
#line 550 "complex.cpp"
    void newFakeInfo(cell *c);
#line 562 "complex.cpp"
    info *getPrisonInfo(cell *c);
#line 572 "complex.cpp"
    info *getPrincessInfo(cell *c);
#line 585 "complex.cpp"
    int dist(cell *c);
#line 617 "complex.cpp"
    void bringBack();
#line 653 "complex.cpp"
    void save(cell *princess);
#line 660 "complex.cpp"
    void move(const movei& mi);
#line 679 "complex.cpp"
    void mouseSqueak(cell *c);
#line 703 "complex.cpp"
    void line(cell *c);
#line 774 "complex.cpp"
    void playernear(cell *c);
    }
  namespace clearing {
#line 794 "complex.cpp"
    struct clearingdata {
    cell *root;
    int dist;
    bool buggy;
    clearingdata() { root = nullptr; }
    };
#line 802 "complex.cpp"
    extern std::map<heptagon*, clearingdata> bpdata;
#line 804 "complex.cpp"
    extern cell *current_root;
#line 806 "complex.cpp"
    void new_root();
#line 879 "complex.cpp"
    void generate(cell *c);
#line 986 "complex.cpp"
    extern bignum imputed;
#line 989 "complex.cpp"
    extern int direct;
#line 1003 "complex.cpp"
    void imput(cell *c);
    }
  namespace whirlpool {
#line 1029 "complex.cpp"
    extern bool escaped;
#line 1033 "complex.cpp"
    cell *get(cell *c, int next);
#line 1066 "complex.cpp"
    void generate(cell *wto);
#line 1148 "complex.cpp"
    void move();
    }
  namespace mirror {
#line 1166 "complex.cpp"
    static const int SPINSINGLE = 1;
    static const int SPINMULTI = 2;
    static const int GO = 4;
    static const int ATTACK = 8;
#line 1172 "complex.cpp"
    bool build(cell *c);
#line 1204 "complex.cpp"
    extern vector<pair<int, cellwalker>> mirrors;
#line 1206 "complex.cpp"
    constexpr int LIGHTNING = -1; // passed instead of cpid
#line 1245 "complex.cpp"
    void destroyAll();
#line 1251 "complex.cpp"
    void createMirror(cellwalker cw, int cpid);
#line 1303 "complex.cpp"
    void createMirrors(cellwalker cw, int cpid);
#line 1341 "complex.cpp"
    void createMirages(cellwalker cw, int cpid);
#line 1393 "complex.cpp"
    void createHere(cellwalker cw, int cpid);
#line 1401 "complex.cpp"
    void breakMirror(cellwalker cw, int pid);
#line 1416 "complex.cpp"
    bool isKilledByMirror(cell *c);
#line 1478 "complex.cpp"
    void act(int d, int flags);
#line 1495 "complex.cpp"
    void breakAll();
#line 1514 "complex.cpp"
    int mirrordir(cell *c);
#line 1632 "complex.cpp"
    cellwalker reflect(const cellwalker& cw);
    }
  namespace hive {
#line 1662 "complex.cpp"
    int hivehard();
#line 1667 "complex.cpp"
    eMonster randomHyperbug();
#line 1701 "complex.cpp"
    extern int bugcount[BUGCOLORS];
#line 1806 "complex.cpp"
    void movebugs();
#line 1933 "complex.cpp"
    void createBugArmy(cell *c);
    }
#line 2021 "complex.cpp"
  inline float& HEAT(cell *c) { return c->LHU.heat; }
  namespace heat {
#line 2026 "complex.cpp"
    void affect(cell *c, double delta);
#line 2030 "complex.cpp"
    double absheat(cell *c);
#line 2036 "complex.cpp"
    double celsius(cell *c);
#line 2041 "complex.cpp"
    extern vector<cell*> offscreen_heat, offscreen_fire; // offscreen cells to take care off
#line 2043 "complex.cpp"
    void processheat(double rate IS(1));
#line 2171 "complex.cpp"
    #define MELTCOLOR 0xA04040
#line 2204 "complex.cpp"
    void processfires();
    }
#line 2323 "complex.cpp"
  void doLightningNextTurn();
#line 2414 "complex.cpp"
  void livecaves();
#line 2581 "complex.cpp"
  void hurricaneWind();
#line 2628 "complex.cpp"
  void hurricaneMoveBoat(cell *c);
  namespace tortoise {
#line 2667 "complex.cpp"
    extern map<cell*, int> emap;
#line 2668 "complex.cpp"
    extern map<cell*, int> babymap;
#line 2669 "complex.cpp"
    extern int last;
#line 2672 "complex.cpp"
    enum tflag {
    tfShell, tfScute0, tfScute1, tfScute2, tfScute3,
    tfEdge1, tfEdge, tfEdge3,
    tfLongNeck, tfFront, tfRear, tfTail,
    tfEyeHue, tfShellHue, tfScuteHue, tfSkinHue,
    tfShellSat, tfScuteSat, tfSkinSat,
    tfShellDark, tfSkinDark,
    tfCOUNT
    };
#line 2683 "complex.cpp"
    extern const int numbits;
#line 2684 "complex.cpp"
    extern const int mask;
#line 2686 "complex.cpp"
    int getb(cell *where);
#line 2691 "complex.cpp"
    int countBits(int c);
#line 2697 "complex.cpp"
    int getBit(int bits, int id);
#line 2699 "complex.cpp"
    int getRandomBits();
#line 2701 "complex.cpp"
    bool seek();
#line 2702 "complex.cpp"
    extern int seekbits;
#line 2714 "complex.cpp"
    void updateVals(int delta);
#line 2722 "complex.cpp"
    double getScent(int bits);
#line 2741 "complex.cpp"
    int diff(int bits);
#line 2744 "complex.cpp"
    string measure(int bits);
    }
  namespace dragon {
#line 2751 "complex.cpp"
    extern int whichturn; // which turn has the target been set on
#line 2752 "complex.cpp"
    extern cell *target; // actually for all Orb of Control
#line 2770 "complex.cpp"
    cell *findhead(cell *c);
#line 2799 "complex.cpp"
    int bodypart(cell *c, cell *head);
#line 2816 "complex.cpp"
    void kill(cell *c, eMonster who);
#line 2848 "complex.cpp"
    int totalhp(cell *c);
#line 2900 "complex.cpp"
    bool move(const movei& mi);
    }
  namespace sword {
#line 2938 "complex.cpp"
    struct sworddir {
    int angle;
    transmatrix T;
    };
    
    /** dimensions available to the Sword */
    #define SWORDDIM (hybri ? 2 : WDIM)
    
#line 2948 "complex.cpp"
    extern int sword_angles;
#line 2950 "complex.cpp"
    extern array<sworddir, MAXPLAYER> dir;
#line 2954 "complex.cpp"
    void determine_sword_angles();
#line 2969 "complex.cpp"
    cell *pos2(cell *c, int s);
#line 2981 "complex.cpp"
    cell *pos(cell *c, const sworddir& sd, bool rev);
#line 2996 "complex.cpp"
    int orbcount(bool rev);
#line 2998 "complex.cpp"
    cell *pos(int id, bool rev);
#line 3003 "complex.cpp"
    bool at(cell *where, bool noplayer IS(false));
#line 3011 "complex.cpp"
    bool isnear(cell *where);
#line 3018 "complex.cpp"
    sworddir shift(cell *c1, cell *c2, sworddir d);
#line 3046 "complex.cpp"
    sworddir initial(cell *c);
#line 3060 "complex.cpp"
    void reset();
    }
  namespace kraken {
#line 3072 "complex.cpp"
    cell *head(cell *c);
#line 3078 "complex.cpp"
    void kill(cell *c, eMonster who);
#line 3100 "complex.cpp"
    int totalhp(cell *c);
#line 3116 "complex.cpp"
    void attacks();
#line 3153 "complex.cpp"
    void trymove(cell *c);
    }
  #if CAP_FIELD
  namespace prairie {
#line 3228 "complex.cpp"
    void spread(cell *c, cell *from);
#line 3312 "complex.cpp"
    bool no_worms(cell *c);
#line 3318 "complex.cpp"
    bool isriver(cell *c);
#line 3326 "complex.cpp"
    bool nearriver(cell *c);
#line 3348 "complex.cpp"
    cell *next(cell *c, int pv IS(1));
#line 3372 "complex.cpp"
    extern vector<cell*> beaststogen;
#line 3374 "complex.cpp"
    void generateBeast(cell *c);
#line 3428 "complex.cpp"
    void move();
#line 3452 "complex.cpp"
    void generateTreasure(cell *c);
#line 3468 "complex.cpp"
    void treasures();
    }
  #endif
  namespace ca {
#line 3498 "complex.cpp"
    extern ld prob;
#line 3502 "complex.cpp"
    extern eWall wlive;
#line 3506 "complex.cpp"
    string fillup(string s);
#line 3511 "complex.cpp"
    void init();
#line 3550 "complex.cpp"
    void simulate();
    }
  #if CAP_FIELD
  namespace windmap {
#line 3646 "complex.cpp"
    static const int NOWINDBELOW = 8;
    static const int NOWINDFROM = 120;  
#line 3654 "complex.cpp"
    int getId(cell *c);
#line 3666 "complex.cpp"
    extern vector<unsigned char> windcodes;
#line 3682 "complex.cpp"
    void create();
#line 3770 "complex.cpp"
    int at(cell *c);
    }
  #endif
  namespace halloween {
#line 3780 "complex.cpp"
    extern cell *dragoncells[4];
#line 3858 "complex.cpp"
    void getTreat(cell *where);
    }
  namespace dungeon {
#line 4330 "complex.cpp"
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
#line 784 "3d-models.cpp"
  void queueball(const transmatrix& V, ld rad, color_t col, eItem what);
  #endif

  // implemented in: achievement.cpp

#line 15 "achievement.cpp"
  extern bool offlineMode;
#line 17 "achievement.cpp"
  extern const char* leadernames[NUMLEADER];
#line 86 "achievement.cpp"
  extern bool haveLeaderboard(int id);
#line 87 "achievement.cpp"
  extern int get_currentscore(int id);
#line 88 "achievement.cpp"
  extern void set_priority_board(int id);
#line 89 "achievement.cpp"
  extern int get_sync_status();
#line 90 "achievement.cpp"
  extern bool score_loaded(int id);
#line 91 "achievement.cpp"
  extern int score_default(int id);
#line 93 "achievement.cpp"
  extern void upload_score(int id, int v);
#line 98 "achievement.cpp"
  extern vector<string> achievementsReceived;
#line 103 "achievement.cpp"
  bool wrongMode(char flags);
#line 131 "achievement.cpp"
  extern set<string> got_achievements;
#line 133 "achievement.cpp"
  void achievement_gain_once(const string& s);
#line 140 "achievement.cpp"
  void achievement_log(const char* s, char flags);
#line 170 "achievement.cpp"
  extern void achievement_init();
#line 171 "achievement.cpp"
  extern string myname();
#line 172 "achievement.cpp"
  extern void achievement_close();
#line 178 "achievement.cpp"
  extern void achievement_gain(const char* s, char flags IS(0));
#line 196 "achievement.cpp"
  void achievement_collection(eItem it);
#line 528 "achievement.cpp"
  void achievement_count(const string& s, int current, int prev);
#line 577 "achievement.cpp"
  void improve_score(int i, eItem what);
#line 592 "achievement.cpp"
  void achievement_score(int cat, int number);
#line 614 "achievement.cpp"
  void improveItemScores();
#line 685 "achievement.cpp"
  void achievement_final(bool really_final);
#line 790 "achievement.cpp"
  extern bool hadtotalvictory;
#line 792 "achievement.cpp"
  void check_total_victory();
#line 807 "achievement.cpp"
  void achievement_victory(bool hyper);
#line 879 "achievement.cpp"
  extern void achievement_pump();
#line 881 "achievement.cpp"
  string get_rich_presence_text();
#line 943 "achievement.cpp"
  void achievement_display();
#line 965 "achievement.cpp"
  bool isAscending(int i);
#line 969 "achievement.cpp"
  int score_default(int i);
  #ifndef HAVE_ACHIEVEMENTS
#line 975 "achievement.cpp"
  int get_sync_status();
#line 976 "achievement.cpp"
  void set_priority_board(int);
  #endif

  // implemented in: arbitrile.cpp

  namespace arb {
#line 16 "arbitrile.cpp"
    
    struct shape {
    int id;
    int flags;
    vector<hyperpoint> vertices;
    vector<ld> angles;
    vector<ld> edges;
    vector<tuple<int, int, int>> connections;
    int size() const { return isize(vertices); }
    void build_from_angles_edges();
    vector<pair<int, int> > sublines;
    };
    
    struct arbi_tiling {
    
    int order;
    bool have_line, have_ph;
    
    vector<shape> shapes;
    string name;
    string comment;
    
    geometryinfo1& get_geometry();
    eGeometryClass get_class() { return get_geometry().kind; }
    
    ld scale();
    };
#line 45 "arbitrile.cpp"
    extern arbi_tiling current;
#line 50 "arbitrile.cpp"
    short& id_of(heptagon *h);
#line 250 "arbitrile.cpp"
    extern map<heptagon*, pair<heptagon*, transmatrix>> arbi_matrix;
#line 252 "arbitrile.cpp"
    extern hrmap *current_altmap;
#line 455 "arbitrile.cpp"
    hrmap *new_map();
#line 483 "arbitrile.cpp"
    bool in();
#line 485 "arbitrile.cpp"
    extern string tes;
#line 487 "arbitrile.cpp"
    bool linespattern(cell *c);
#line 491 "arbitrile.cpp"
    bool pseudohept(cell *c);
#line 495 "arbitrile.cpp"
    void choose();
    }

  // implemented in: archimedean.cpp

  namespace arcm {
#line 15 "archimedean.cpp"
    bool in();
#line 18 "archimedean.cpp"
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
    
    ld euclidean_angle_sum;
    
    vector<int> flags;
    
    vector<vector<pair<int, int>>> adjacent;
    vector<vector<pair<ld, ld>>> triangles;
    
    void make_match(int a, int i, int b, int j);
    void prepare();
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
    
    geometryinfo1& get_geometry();
    eGeometryClass get_class() { return get_geometry().kind; }
    
    bool get_step_values(int& steps, int& single_step);
    
    ld scale();
    };
    #if CAP_ARCM
#line 90 "archimedean.cpp"
    static const int sfPH = 1;
    static const int sfLINE = 2;
    static const int sfCHESS = 4;
    static const int sfTHREE = 8;
    static const int sfSEMILINE = 16;
#line 97 "archimedean.cpp"
    extern archimedean_tiling current;
#line 105 "archimedean.cpp"
    short& id_of(heptagon *h);
#line 111 "archimedean.cpp"
    short& parent_index_of(heptagon *h);
#line 117 "archimedean.cpp"
    int neighbors_of(heptagon *h);
#line 121 "archimedean.cpp"
    int gcd(int x, int y);
#line 447 "archimedean.cpp"
    extern map<heptagon*, pair<heptagon*, transmatrix>> archimedean_gmatrix;
#line 449 "archimedean.cpp"
    extern hrmap *current_altmap;
#line 700 "archimedean.cpp"
    hrmap *new_map();
#line 820 "archimedean.cpp"
    int fix(heptagon *h, int spin);
#line 953 "archimedean.cpp"
    bool pseudohept(cell *c);
#line 964 "archimedean.cpp"
    bool chessvalue(cell *c);
#line 970 "archimedean.cpp"
    bool linespattern(cell *c);
#line 974 "archimedean.cpp"
    int threecolor(cell *c);
#line 1098 "archimedean.cpp"
    void next_variation();
#line 1106 "archimedean.cpp"
    void enable(archimedean_tiling& arct);
#line 1144 "archimedean.cpp"
    void show();
#line 1348 "archimedean.cpp"
    int degree(heptagon *h);
#line 1352 "archimedean.cpp"
    bool is_vertex(heptagon *h);
#line 1374 "archimedean.cpp"
    int valence();
    #endif
#line 1389 "archimedean.cpp"
    map<gp::loc, cdata>& get_cdata();
    }

  // implemented in: asonov.cpp

#line 17 "asonov.cpp"
  int zgmod(int a, int b);
  namespace asonov {
#line 22 "asonov.cpp"
    bool in();
#line 24 "asonov.cpp"
    extern hyperpoint tx, ty, tz;
#line 25 "asonov.cpp"
    extern transmatrix straighten;
#line 27 "asonov.cpp"
    extern int period_xy;
#line 28 "asonov.cpp"
    extern int period_z;
#line 31 "asonov.cpp"
    struct coord: public array<int,3> {
    coord() {}
    coord(int x, int y, int z) : array<int,3>(make_array(zgmod(x, period_xy), zgmod(y, period_xy), zgmod(z, period_z))) {}
    coord shift(int x, int y, int z=0) { return coord(self[0]+x, self[1]+y, self[2]+z); }
    coord up() { return coord(self[0]*2-self[1], self[1]-self[0], self[2]+1); }
    coord down() { return coord(self[0]+self[1], self[0]+self[1]*2, self[2]-1); }  
    coord addmove(int d);
    coord operator - (coord b);
    };
#line 60 "asonov.cpp"
    void prepare();
#line 130 "asonov.cpp"
    transmatrix adjmatrix(int i);
#line 202 "asonov.cpp"
    hrmap *new_map();
#line 204 "asonov.cpp"
    coord get_coord(heptagon *h);
#line 206 "asonov.cpp"
    heptagon *get_at(coord where);
#line 208 "asonov.cpp"
    extern int period_xy_edit, period_z_edit;
#line 210 "asonov.cpp"
    void set_flags();
#line 218 "asonov.cpp"
    void prepare_config();
#line 223 "asonov.cpp"
    void show_config();
    }

  // implemented in: attack.cpp

#line 12 "attack.cpp"
  extern array<int, motypes> kills;
#line 63 "attack.cpp"
  int tkills();
#line 69 "attack.cpp"
  int killtypes();
#line 76 "attack.cpp"
  bool arrow_stuns(eMonster m);
#line 80 "attack.cpp"
  bool canAttack(cell *c1, eMonster m1, cell *c2, eMonster m2, flagtype flags);
#line 177 "attack.cpp"
  bool petrify(cell *c, eWall walltype, eMonster m);
#line 217 "attack.cpp"
  void killIvy(cell *c, eMonster who);
#line 227 "attack.cpp"
  void prespill(cell* c, eWall t, int rad, cell *from);
#line 307 "attack.cpp"
  void spillfix(cell* c, eWall t, int rad);
#line 316 "attack.cpp"
  void spill(cell* c, eWall t, int rad);
#line 320 "attack.cpp"
  void degradeDemons();
#line 335 "attack.cpp"
  void stunMonster(cell *c2, eMonster killer, flagtype flags);
#line 367 "attack.cpp"
  bool attackJustStuns(cell *c2, flagtype f, eMonster attacker);
#line 380 "attack.cpp"
  void minerEffect(cell *c);
#line 403 "attack.cpp"
  void killMutantIvy(cell *c, eMonster who);
#line 413 "attack.cpp"
  bignum ivy_total();
#line 419 "attack.cpp"
  void killMonster(cell *c, eMonster who, flagtype deathflags IS(0));
#line 814 "attack.cpp"
  void fightmessage(eMonster victim, eMonster attacker, bool stun, flagtype flags);
#line 916 "attack.cpp"
  bool notthateasy(eMonster m);
#line 921 "attack.cpp"
  bool attackMonster(cell *c, flagtype flags, eMonster killer);
#line 999 "attack.cpp"
  void pushMonster(const movei& mi);
#line 1011 "attack.cpp"
  void killFriendlyIvy();
#line 1016 "attack.cpp"
  bool monsterPushable(cell *c2);
#line 1020 "attack.cpp"
  bool should_switchplace(cell *c1, cell *c2);
#line 1028 "attack.cpp"
  bool switchplace_prevent(cell *c1, cell *c2, bool checkonly);
#line 1039 "attack.cpp"
  void handle_switchplaces(cell *c1, cell *c2, bool& switchplaces);
#line 1060 "attack.cpp"
  bool flashWouldKill(cell *c, flagtype extra);
#line 1076 "attack.cpp"
  vector<cell*> gun_targets(cell *c);
#line 1090 "attack.cpp"
  void fallMonster(cell *c, flagtype flags IS(0));
#line 1094 "attack.cpp"
  void killHardcorePlayer(int id, flagtype flags);
#line 1122 "attack.cpp"
  void killThePlayer(eMonster m, int id, flagtype flags);
#line 1154 "attack.cpp"
  void killThePlayerAt(eMonster m, cell *c, flagtype flags);
#line 1161 "attack.cpp"
  template<class T> void do_swords(cell *mf, cell *mt, eMonster who, const T& f) {
  for(int bb=0; bb<2; bb++) if(who == moPlayer && sword::orbcount(bb)) {
  cell *sf = sword::pos(mf, sword::dir[multi::cpid], bb);
  cell *st = sword::pos(mt, sword::shift(mf, mt, sword::dir[multi::cpid]), bb);
  f(st, bb);
  if(sf != st && !isNeighbor(sf,st)) {
  // also attack the in-transit cell
  if(S3 == 3) {
  forCellEx(sb, sf) if(isNeighbor(sb, st) && sb != mf && sb != mt) f(sb, bb);
  }
  else {
  forCellEx(sb, mf) if(isNeighbor(sb, st) && sb != mt) f(sb, bb);
  forCellEx(sb, mt) if(isNeighbor(sb, sf) && sb != mf) f(sb, bb);
  }
  }
  }
  }
#line 1182 "attack.cpp"
  void stabbingAttack(cell *mf, cell *mt, eMonster who, int bonuskill IS(0));

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
  bool checkBarriersNowall(cellwalker bb, int q, int dir, eLand l1 IS(laNone), eLand l2 IS(laNone));
#line 115 "barriers.cpp"
  eWall getElementalWall(eLand l);
#line 123 "barriers.cpp"
  void setbarrier(cell *c);
#line 153 "barriers.cpp"
  void setland(cell *c, eLand l);
#line 163 "barriers.cpp"
  void extendcheck(cell *c);
#line 170 "barriers.cpp"
  bool mirrorwall(cell *c);
#line 174 "barriers.cpp"
  void extendBarrierFront(cell *c);
#line 224 "barriers.cpp"
  void extendBarrierBack(cell *c);
#line 256 "barriers.cpp"
  void extendNowall(cell *c);
#line 313 "barriers.cpp"
  void extendCR5(cell *c);
#line 338 "barriers.cpp"
  bool isbar4(cell *c);
#line 345 "barriers.cpp"
  void extendBarrier(cell *c);
#line 435 "barriers.cpp"
  void buildBarrierForce(cell *c, int d, eLand l);
#line 450 "barriers.cpp"
  void buildBarrier(cell *c, int d, eLand l IS(laNone));
#line 458 "barriers.cpp"
  bool buildBarrier6(cellwalker cw, int type);
#line 569 "barriers.cpp"
  bool buildBarrier4(cell *c, int d, int mode, eLand ll, eLand lr);
#line 630 "barriers.cpp"
  void buildBarrierStrong(cell *c, int d, bool oldleft, eLand newland);
#line 643 "barriers.cpp"
  void buildBarrierStrong(cell *c, int d, bool oldleft);
#line 647 "barriers.cpp"
  void buildCrossroads2(cell *c);
  #if MAXMDIM >= 4
#line 743 "barriers.cpp"
  void extend3D(cell *c);
#line 780 "barriers.cpp"
  bool buildBarrier3D(cell *c, eLand l2, int forced_dir);
  #endif
#line 823 "barriers.cpp"
  bool buildBarrierNowall(cell *c, eLand l2, int forced_dir IS(NODIR));

  // implemented in: basegraph.cpp

#line 11 "basegraph.cpp"
  extern int fontscale;
#line 14 "basegraph.cpp"
  /** configuration of the current view */
  struct display_data {
  /** The cell which is currently in the center. */
  cell *precise_center;
  /** The current rotation, relative to precise_center. */
  transmatrix view_matrix;
  /** Camera rotation, used in nonisotropic geometries. */
  transmatrix local_perspective;
  /** The view relative to the player character. */
  transmatrix player_matrix;
  /** On-screen coordinates for all the visible cells. */
  unordered_map<cell*, transmatrix> cellmatrices, old_cellmatrices;
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
  void set_projection(int ed);
  void set_mask(int ed);
  
  void set_all(int ed);
  /** Which copy of the player cell? */
  transmatrix which_copy;
  /** On-screen coordinates for all the visible cells. */
  unordered_map<cell*, vector<transmatrix>> all_drawn_copies;
  };
  
  #define View (::hr::current_display->view_matrix)
  #define cwtV (::hr::current_display->player_matrix)
  #define centerover (::hr::current_display->precise_center)
  #define gmatrix (::hr::current_display->cellmatrices)
  #define gmatrix0 (::hr::current_display->old_cellmatrices)
  #define NLP (::hr::current_display->local_perspective)
  
#line 65 "basegraph.cpp"
  extern display_data default_display;
#line 66 "basegraph.cpp"
  extern display_data *current_display;
#line 69 "basegraph.cpp"
  extern unsigned backcolor;
#line 70 "basegraph.cpp"
  extern unsigned bordcolor;
#line 71 "basegraph.cpp"
  extern unsigned forecolor;
#line 81 "basegraph.cpp"
  int get_sightrange();
#line 82 "basegraph.cpp"
  int get_sightrange_ambush();
#line 102 "basegraph.cpp"
  int getnext(const char* s, int& i);
  #if CAP_SDL
#line 120 "basegraph.cpp"
  extern SDL_Surface *s;
#line 121 "basegraph.cpp"
  extern SDL_Surface *s_screen;
#line 123 "basegraph.cpp"
  extern color_t qpixel_pixel_outside;
#line 125 "basegraph.cpp"
  color_t& qpixel(SDL_Surface *surf, int x, int y);
  #endif
  #if CAP_SDLTTF
#line 137 "basegraph.cpp"
  extern string fontpath;
  #endif
#line 182 "basegraph.cpp"
  int darkenedby(int c, int lev);
#line 192 "basegraph.cpp"
  color_t darkened(color_t c);
#line 207 "basegraph.cpp"
  color_t darkena3(color_t c, int lev, int a);
#line 211 "basegraph.cpp"
  color_t darkena(color_t c, int lev, int a);
  #if CAP_GL
  #if CAP_VR
#line 222 "basegraph.cpp"
  extern hookset<bool()> *hooks_vr_eye_view, *hooks_vr_eye_projection;
  #endif
#line 225 "basegraph.cpp"
  void eyewidth_translate(int ed);
#line 234 "basegraph.cpp"
  extern bool new_projection_needed;
#line 236 "basegraph.cpp"
  inline void reset_projection() { new_projection_needed = true; }
#line 239 "basegraph.cpp"
  extern ld lband_shift;
#line 279 "basegraph.cpp"
  bool model_needs_depth();
#line 283 "basegraph.cpp"
  void setGLProjection(color_t col IS(backcolor));
#line 332 "basegraph.cpp"
   int next_p2 (int a );
#line 574 "basegraph.cpp"
  extern purehookset hooks_resetGL;
#line 576 "basegraph.cpp"
  void resetGL();
  #endif
  #if CAP_XGD
#line 649 "basegraph.cpp"
  bool displayfr(int x, int y, int b, int size, const string &s, color_t color, int align);
#line 661 "basegraph.cpp"
  bool displaystr(int x, int y, int shift, int size, const string &s, color_t color, int align);
#line 665 "basegraph.cpp"
  bool displaystr(int x, int y, int shift, int size, char const *s, color_t color, int align);
  #endif
  #if !CAP_XGD
#line 671 "basegraph.cpp"
  bool displaystr(int x, int y, int shift, int size, const char *str, color_t color, int align);
#line 734 "basegraph.cpp"
  bool displaystr(int x, int y, int shift, int size, const string &s, color_t color, int align);
#line 738 "basegraph.cpp"
  bool displayfrSP(int x, int y, int sh, int b, int size, const string &s, color_t color, int align, int p);
#line 755 "basegraph.cpp"
  bool displayfr(int x, int y, int b, int size, const string &s, color_t color, int align);
#line 759 "basegraph.cpp"
  bool displaychr(int x, int y, int shift, int size, char chr, color_t col);
  #endif
#line 768 "basegraph.cpp"
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
#line 780 "basegraph.cpp"
  extern vector<msginfo> msgs;
#line 782 "basegraph.cpp"
  extern vector<msginfo> gamelog;
#line 784 "basegraph.cpp"
  void flashMessages();
#line 792 "basegraph.cpp"
  string fullmsg(msginfo& m);
#line 816 "basegraph.cpp"
  void clearMessages();
#line 818 "basegraph.cpp"
  void addMessage(string s, char spamtype);
#line 833 "basegraph.cpp"
  color_t colormix(color_t a, color_t b, color_t c);
#line 839 "basegraph.cpp"
  int rhypot(int a, int b);
#line 841 "basegraph.cpp"
  ld realradius();
#line 855 "basegraph.cpp"
  void drawmessage(const string& s, int& y, color_t col);
#line 891 "basegraph.cpp"
  void drawmessages();
#line 926 "basegraph.cpp"
  color_t gradient(color_t c0, color_t c1, ld v0, ld v, ld v1);
#line 937 "basegraph.cpp"
  void drawCircle(int x, int y, int size, color_t color, color_t fillcolor IS(0));
#line 988 "basegraph.cpp"
  void displayButton(int x, int y, const string& name, int key, int align, int rad IS(0));
#line 996 "basegraph.cpp"
  #define SETMOUSEKEY 5000
#line 999 "basegraph.cpp"
  extern char mousekey;
#line 1000 "basegraph.cpp"
  extern char newmousekey;
#line 1002 "basegraph.cpp"
  void displaymm(char c, int x, int y, int rad, int size, const string& title, int align);
#line 1009 "basegraph.cpp"
  bool displayButtonS(int x, int y, const string& name, color_t col, int align, int size);
#line 1017 "basegraph.cpp"
  void displayColorButton(int x, int y, const string& name, int key, int align, int rad, color_t color, color_t color2 IS(0));
#line 1028 "basegraph.cpp"
  extern bool setfsize;
#line 1030 "basegraph.cpp"
  extern bool vsync_off;
#line 1032 "basegraph.cpp"
  void do_setfsize();
#line 1038 "basegraph.cpp"
  void disable_vsync();
  #if CAP_SDL
#line 1045 "basegraph.cpp"
  void setvideomode();
  #endif
#line 1110 "basegraph.cpp"
  extern bool noGUI;
#line 1112 "basegraph.cpp"
  void initgraph();
#line 1195 "basegraph.cpp"
  void cleargraph();
#line 1211 "basegraph.cpp"
  int calcfps();
  namespace subscreens {
#line 1224 "basegraph.cpp"
    extern vector<display_data> player_displays;
#line 1225 "basegraph.cpp"
    extern bool in;
#line 1226 "basegraph.cpp"
    extern int current_player;
#line 1228 "basegraph.cpp"
    bool is_current_player(int id);
#line 1233 "basegraph.cpp"
    void prepare();
#line 1253 "basegraph.cpp"
    bool split(reaction_t what);
    }

  // implemented in: bigstuff.cpp

#line 20 "bigstuff.cpp"
  int newRoundTableRadius();
#line 24 "bigstuff.cpp"
  int getAnthraxData(cell *c, bool b);
#line 40 "bigstuff.cpp"
  int roundTableRadius(cell *c);
#line 47 "bigstuff.cpp"
  int celldistAltRelative(cell *c);
#line 62 "bigstuff.cpp"
  gp::loc camelot_coords();
#line 64 "bigstuff.cpp"
  int euclidAlt(short x, short y);
#line 91 "bigstuff.cpp"
  int cylinder_alt(cell *c);
#line 105 "bigstuff.cpp"
  int compassDist(cell *c);
#line 112 "bigstuff.cpp"
  cell *findcompass(cell *c);
#line 131 "bigstuff.cpp"
  bool grailWasFound(cell *c);
#line 136 "bigstuff.cpp"
  int default_levs();
  #if MAXMDIM >= 4
#line 203 "bigstuff.cpp"
  int hrandom_adjacent(int d);
  #endif
#line 210 "bigstuff.cpp"
  heptagon *createAlternateMap(cell *c, int rad, hstate firststate, int special IS(0));
#line 334 "bigstuff.cpp"
  void beCIsland(cell *c);
#line 342 "bigstuff.cpp"
  void generateTreasureIsland(cell *c);
#line 404 "bigstuff.cpp"
  extern bool generatingEquidistant;
#line 406 "bigstuff.cpp"
  cell *buildAnotherEquidistant(cell *c, int radius);
#line 497 "bigstuff.cpp"
  void buildAnotherEquidistant(cell *c);
#line 511 "bigstuff.cpp"
  int coastval(cell *c, eLand base);
#line 536 "bigstuff.cpp"
  bool checkInTree(cell *c, int maxv);
#line 556 "bigstuff.cpp"
  void buildEquidistant(cell *c);
#line 826 "bigstuff.cpp"
  cell *randomDown(cell *c);
#line 835 "bigstuff.cpp"
  int edgeDepth(cell *c);
#line 845 "bigstuff.cpp"
  int getHauntedDepth(cell *c);
#line 853 "bigstuff.cpp"
  int towerval(cell *c, const cellfunction& cf);
#line 864 "bigstuff.cpp"
  void setLandWeird(cell *c);
#line 875 "bigstuff.cpp"
  void setLandQuotient(cell *c);
#line 895 "bigstuff.cpp"
  void elementalXY(cell *c, int x, int y, bool make_wall);
#line 914 "bigstuff.cpp"
  void setLandSphere(cell *c);
#line 950 "bigstuff.cpp"
  eLand& get_euland(int c);
#line 955 "bigstuff.cpp"
  void clear_euland(eLand first);
#line 968 "bigstuff.cpp"
  eLand switchable(eLand nearland, eLand farland, int c);
#line 999 "bigstuff.cpp"
  eLand getEuclidLand(int c);
#line 1012 "bigstuff.cpp"
  void setLandSol(cell *c);
#line 1037 "bigstuff.cpp"
  void setLandHybrid(cell *c);
#line 1079 "bigstuff.cpp"
  void setLandNil(cell *c);
#line 1133 "bigstuff.cpp"
  void setLandEuclid(cell *c);
#line 1257 "bigstuff.cpp"
  eLand get_euland3(int x);
#line 1264 "bigstuff.cpp"
  void set_euland3(cell *c, int co10, int co11, int alt, int hash);
#line 1322 "bigstuff.cpp"
  bool quickfind(eLand l);
#line 1335 "bigstuff.cpp"
  int wallchance(cell *c, bool deepOcean);
#line 1374 "bigstuff.cpp"
  bool horo_ok();
#line 1378 "bigstuff.cpp"
  bool gp_wall_test();
#line 1388 "bigstuff.cpp"
  bool deep_ocean_at(cell *c, cell *from);
#line 1418 "bigstuff.cpp"
  bool good_for_wall(cell *c);
#line 1424 "bigstuff.cpp"
  bool walls_not_implemented();
#line 1428 "bigstuff.cpp"
  void buildBigStuff(cell *c, cell *from);
#line 1590 "bigstuff.cpp"
  bool openplains(cell *c);
#line 1616 "bigstuff.cpp"
  void buildCamelotWall(cell *c);
#line 1628 "bigstuff.cpp"
  bool no_barriers_in_radius(cell *c, int rad);
#line 1634 "bigstuff.cpp"
  eMonster camelot_monster();
#line 1644 "bigstuff.cpp"
  void buildCamelot(cell *c);
#line 1710 "bigstuff.cpp"
  int masterAlt(cell *c);
#line 1718 "bigstuff.cpp"
  int temple_layer_size();
#line 1728 "bigstuff.cpp"
  int horo_gen_distance();
#line 1732 "bigstuff.cpp"
  void moreBigStuff(cell *c);
#line 1882 "bigstuff.cpp"
  void generate_mines();
#line 1893 "bigstuff.cpp"
  extern vector<eLand> currentlands;
#line 1895 "bigstuff.cpp"
  void pregen();

  // implemented in: binary-tiling.cpp

  namespace bt {
    #if CAP_BT
#line 15 "binary-tiling.cpp"
    bool in();
#line 18 "binary-tiling.cpp"
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
#line 30 "binary-tiling.cpp"
    int type_of(heptagon *h);
#line 35 "binary-tiling.cpp"
    int mapside(heptagon *h);
#line 57 "binary-tiling.cpp"
    heptagon *path(heptagon *h, int d, int d1, std::initializer_list<int> p);
#line 88 "binary-tiling.cpp"
    heptagon *pathc(heptagon *h, int d, int d1, std::vector<std::initializer_list<int>> p);
#line 94 "binary-tiling.cpp"
    extern ld hororec_scale;
#line 95 "binary-tiling.cpp"
    extern ld horohex_scale;
#line 97 "binary-tiling.cpp"
    void make_binary_lands(heptagon *parent, heptagon *h);
#line 114 "binary-tiling.cpp"
    heptagon *build(heptagon *parent, int d, int d1, int t, int side, int delta);
    #if MAXMDIM==4
#line 169 "binary-tiling.cpp"
    heptagon *build3(heptagon *parent, int d, int d1, int delta);
    #endif
#line 577 "binary-tiling.cpp"
    hrmap *new_map();
#line 585 "binary-tiling.cpp"
    hrmap *new_alt_map(heptagon *o);
#line 587 "binary-tiling.cpp"
    extern transmatrix direct_tmatrix[14];
#line 588 "binary-tiling.cpp"
    extern transmatrix inverse_tmatrix[14];
#line 594 "binary-tiling.cpp"
    bool use_direct_for(int dir);
#line 598 "binary-tiling.cpp"
    ld expansion();
#line 611 "binary-tiling.cpp"
    int updir();
#line 620 "binary-tiling.cpp"
    int dirs_outer();
#line 630 "binary-tiling.cpp"
    int dirs_inner();
#line 635 "binary-tiling.cpp"
    void build_tmatrix();
    #if MAXMDIM == 4
#line 715 "binary-tiling.cpp"
    void queuecube(const transmatrix& V, ld size, color_t linecolor, color_t facecolor);
    #endif
#line 748 "binary-tiling.cpp"
    transmatrix parabolic(ld u);
#line 752 "binary-tiling.cpp"
    transmatrix parabolic3(ld y, ld z);
#line 758 "binary-tiling.cpp"
    ld horo_level(hyperpoint h);
#line 766 "binary-tiling.cpp"
    hyperpoint deparabolic3(hyperpoint h);
#line 787 "binary-tiling.cpp"
    bool pseudohept(cell *c);
#line 798 "binary-tiling.cpp"
    pair<gp::loc, gp::loc> gpvalue(heptagon *h);
#line 805 "binary-tiling.cpp"
    int tridist(gp::loc v);
#line 814 "binary-tiling.cpp"
    int equalize(heptagon*& c1, heptagon*& c2);
#line 823 "binary-tiling.cpp"
    int celldistance3_tri(heptagon *c1, heptagon *c2);
#line 850 "binary-tiling.cpp"
    int celldistance3_rec(heptagon *c1, heptagon *c2);
#line 871 "binary-tiling.cpp"
    int celldistance3_square(heptagon *c1, heptagon *c2);
#line 896 "binary-tiling.cpp"
    int celldistance3_hex(heptagon *c1, heptagon *c2);
#line 927 "binary-tiling.cpp"
    int celldistance3_approx(heptagon *c1, heptagon *c2);
#line 944 "binary-tiling.cpp"
    int celldistance3(heptagon *c1, heptagon *c2);
#line 958 "binary-tiling.cpp"
    int celldistance3(cell *c1, cell *c2);
    #endif
#line 961 "binary-tiling.cpp"
    hyperpoint get_horopoint(ld y, ld x);
#line 965 "binary-tiling.cpp"
    hyperpoint get_horopoint(hyperpoint h);
#line 969 "binary-tiling.cpp"
    hyperpoint get_corner_horo_coordinates(cell *c, int i);
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
  transmatrix V;
  
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
  transmatrix Vboat;
  transmatrix Vd;
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
  
  void set_land_floor(const transmatrix& Vf);
  void set_towerfloor(const cellfunction& cf = coastvalEdge);
  void set_zebrafloor();
  void set_maywarp_floor();
  void set_reptile_floor(const transmatrix& V, color_t col, bool nodetails = false);
  void set_emeraldfloor();
  void shmup_gravity_floor();
  
  void draw_reptile(color_t col);
  
  void radar_grid();
  
  void do_viewdist();
  };
  
  inline void drawcell(cell *c, const transmatrix& V) {
  celldrawer dd;
  dd.c = c;
  dd.V = V;
  dd.draw();
  }
#line 615 "celldrawer.cpp"
  color_t w_monochromatize(color_t x, int d);
#line 1705 "celldrawer.cpp"
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
#line 1721 "celldrawer.cpp"
  extern downseek_t downseek;

  // implemented in: checkmove.cpp

#line 13 "checkmove.cpp"
  #define PUREHARDCORE_LEVEL 10
#line 17 "checkmove.cpp"
  extern bool hardcore;
#line 19 "checkmove.cpp"
  extern int hardcoreAt;
#line 21 "checkmove.cpp"
  bool pureHardcore();
#line 24 "checkmove.cpp"
  extern bool canmove;
#line 27 "checkmove.cpp"
  extern eMonster who_kills_me;
#line 29 "checkmove.cpp"
  extern int lastkills;
#line 31 "checkmove.cpp"
  extern vector<bool> legalmoves;
#line 33 "checkmove.cpp"
  bool hasSafeOrb(cell *c);
#line 42 "checkmove.cpp"
  struct stalemate1 {
  eMonster who;
  cell *moveto;
  cell *pushto;
  cell *comefrom;
  cell *swordlast[2], *swordtransit[2], *swordnext[2];
  stalemate1(eMonster w, cell *mt, cell *pt, cell *cf) : who(w), moveto(mt), pushto(pt), comefrom(cf) {}
  };
#line 52 "checkmove.cpp"
  bool krakensafe(cell *c);
#line 58 "checkmove.cpp"
  bool monstersnear(stalemate1& sm);
#line 156 "checkmove.cpp"
  extern bool monstersnear2();
#line 158 "checkmove.cpp"
  bool monstersnear2();
#line 189 "checkmove.cpp"
  bool monstersnear(cell *c, eMonster who, cell *pushto, cell *comefrom);
  namespace stalemate {
#line 254 "checkmove.cpp"
    extern vector<stalemate1> moves;
#line 255 "checkmove.cpp"
    extern bool  nextturn;
#line 257 "checkmove.cpp"
    bool isMoveto(cell *c);
#line 262 "checkmove.cpp"
    bool isPushto(cell *c);
    }
#line 268 "checkmove.cpp"
  bool onboat(stalemate1& sm);
#line 274 "checkmove.cpp"
  bool multimove();
  namespace multi { 
#line 293 "checkmove.cpp"
    extern bool checkonly;
#line 294 "checkmove.cpp"
    extern bool aftermove;
    }
#line 297 "checkmove.cpp"
  bool swordConflict(const stalemate1& sm1, const stalemate1& sm2);
#line 306 "checkmove.cpp"
  void checkmove();

  // implemented in: commandline.cpp

  #if CAP_COMMANDLINE
#line 12 "commandline.cpp"
  extern const char *scorefile;
  namespace arg {
#line 15 "commandline.cpp"
    eLand readland(const string& ss);
#line 27 "commandline.cpp"
    eItem readItem(const string& ss);
#line 35 "commandline.cpp"
    eMonster readMonster(const string& ss);
    }
#line 45 "commandline.cpp"
  void initializeCLI();
  namespace arg {
#line 65 "commandline.cpp"
    extern int curphase;
#line 67 "commandline.cpp"
    extern vector<string> argument;
#line 68 "commandline.cpp"
    extern int pos;
#line 70 "commandline.cpp"
    void lshift();
#line 71 "commandline.cpp"
    void unshift();
#line 73 "commandline.cpp"
    void shift();
#line 77 "commandline.cpp"
    bool nomore();
#line 79 "commandline.cpp"
    const string& args();
#line 80 "commandline.cpp"
    const char* argcs();
#line 81 "commandline.cpp"
    int argi();
#line 82 "commandline.cpp"
    unsigned arghex();
#line 83 "commandline.cpp"
    ld argf();
#line 92 "commandline.cpp"
    bool argis(const string& s);
#line 94 "commandline.cpp"
    void shift_arg_formula(ld& x, const reaction_t& r IS(reaction_t()));
#line 102 "commandline.cpp"
    
    // an useful macro
    #define PHASE(x) { if(arg::curphase > x) arg::phaseerror(x); else if(arg::curphase < x) return 2; }
    #define PHASEFROM(x) { if(arg::curphase < x) return 2; }
    
    #define TOGGLE(x, param, act) \
    else if(args()[0] == '-' && args()[1] == x && !args()[2]) { PHASEFROM(2); showstartmenu = false; act; } \
    else if(args()[0] == '-' && args()[1] == x && args()[2] == '1') { PHASEFROM(2); showstartmenu = false; if(!param) act; } \
    else if(args()[0] == '-' && args()[1] == x && args()[2] == '0') { PHASEFROM(2); showstartmenu = false; if(param) act; }
    
#line 114 "commandline.cpp"
    void cheat();
#line 116 "commandline.cpp"
    void init(int argc, char **argv);
#line 118 "commandline.cpp"
    void phaseerror(int x);
#line 125 "commandline.cpp"
    void launch_dialog(const reaction_t& r IS(reaction_t()));
#line 134 "commandline.cpp"
    extern int readCommon();
#line 135 "commandline.cpp"
    extern int readLocal();  
#line 136 "commandline.cpp"
    extern void read(int phase);
    }
#line 347 "commandline.cpp"
  extern purehookset hooks_config;
#line 349 "commandline.cpp"
  extern hookset<int()> *hooks_args;
  #endif

  // implemented in: complex2.cpp

  #ifdef CAP_COMPLEX2
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
#line 178 "complex2.cpp"
    extern colortable colors;
#line 180 "complex2.cpp"
    color_t get_color(int y);
#line 188 "complex2.cpp"
    color_t& get_color_edit(int y);
    }
  namespace westwall {
#line 208 "complex2.cpp"
    void switchTreasure(cell *c);
#line 217 "complex2.cpp"
    int coastvalEdge1(cell *c);
#line 258 "complex2.cpp"
    void move();
    }
  namespace variant {
#line 279 "complex2.cpp"
    struct feature {
    color_t color_change;
    int rate_change;
    eMonster wanderer;
    void (*build)(cell*);
    };
    
    extern array<feature, 21> features;
    }
  namespace camelot {
#line 332 "complex2.cpp"
    extern int knighted;
#line 335 "complex2.cpp"
    extern int anthraxBonus;
#line 354 "complex2.cpp"
    string knight_name(cell *c);
#line 359 "complex2.cpp"
    void move_knight(cell *c1, cell *c2);
#line 367 "complex2.cpp"
    void roundTableMessage(cell *c2);
#line 394 "complex2.cpp"
    void knightFlavorMessage(cell *c2);
    }
  namespace mine {
#line 512 "complex2.cpp"
    bool uncoverMines(cell *c, int lev, int dist, bool just_checking);
#line 553 "complex2.cpp"
    bool mightBeMine(cell *c);
#line 557 "complex2.cpp"
    extern hookset<bool(cell*)> *hooks_mark;
#line 559 "complex2.cpp"
    void performMarkCommand(cell *c);
#line 574 "complex2.cpp"
    bool marked_mine(cell *c);
#line 581 "complex2.cpp"
    bool marked_safe(cell *c);
#line 588 "complex2.cpp"
    bool safe();
#line 592 "complex2.cpp"
    void uncover_full(cell *c2);
#line 610 "complex2.cpp"
    void auto_teleport_charges();
    }
  namespace terracotta {
#line 619 "complex2.cpp"
    // predictable or not
    static constexpr bool randterra = false;
#line 623 "complex2.cpp"
    void check(cell *c);
#line 644 "complex2.cpp"
    void check_around(cell *c);
#line 649 "complex2.cpp"
    void check();
    }
  namespace ambush {
#line 664 "complex2.cpp"
    void mark(cell *c, manual_celllister& cl);
#line 671 "complex2.cpp"
    extern int distance;
#line 672 "complex2.cpp"
    extern bool ambushed;
#line 674 "complex2.cpp"
    void check_state();
#line 711 "complex2.cpp"
    extern int fixed_size;
#line 713 "complex2.cpp"
    int size(cell *c, eItem what);
#line 801 "complex2.cpp"
    void ambush(cell *c, int dogs);
    }
  #endif

  // implemented in: config.cpp

#line 12 "config.cpp"
  struct supersaver {
  string name;
  virtual string save() = 0;
  virtual void load(const string& s) = 0;
  virtual bool dosave() = 0;
  virtual void reset() = 0;
  virtual ~supersaver() {};
  };
  
  typedef vector<shared_ptr<supersaver>> saverlist;
  
  extern saverlist savers;
  
  #if CAP_CONFIG
  
  template<class T> struct dsaver : supersaver {
  T& val;
  T dft;
  bool dosave() { return val != dft; }
  void reset() { val = dft; }
  dsaver(T& val) : val(val) { }
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
  
  template<class T> struct saverenum : supersaver {
  T& val;
  T dft;
  bool dosave() { return val != dft; }
  void reset() { val = dft; }
  saverenum<T>(T& v) : val(v) { }
  string save() { return its(int(val)); }
  void load(const string& s) { val = (T) atoi(s.c_str()); }
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
  saver<int>(int& val) : dsaver<int>(val) { }
  string save() { return its(val); }
  void load(const string& s) { val = atoi(s.c_str()); }
  };
  
  template<> struct saver<char> : dsaver<char> {
  saver<char>(char& val) : dsaver<char>(val) { }
  string save() { return its(val); }
  void load(const string& s) { val = atoi(s.c_str()); }
  };
  
  template<> struct saver<bool> : dsaver<bool> {
  saver<bool>(bool& val) : dsaver<bool>(val) { }
  string save() { return val ? "yes" : "no"; }
  void load(const string& s) { val = isize(s) && s[0] == 'y'; }
  };
  
  template<> struct saver<unsigned> : dsaver<unsigned> {
  saver<unsigned>(unsigned& val) : dsaver<unsigned>(val) { }
  string save() { return itsh(val); }
  void load(const string& s) { val = (unsigned) strtoll(s.c_str(), NULL, 16); }
  };
  
  template<> struct saver<string> : dsaver<string> {
  saver<string>(string& val) : dsaver<string>(val) { }
  string save() { return val; }
  void load(const string& s) { val = s; }
  };
  
  template<> struct saver<ld> : dsaver<ld> {
  saver<ld>(ld& val) : dsaver<ld>(val) { }
  string save() { return fts(val, 10); }
  void load(const string& s) { 
  if(s == "0.0000000000e+000") ; // ignore!
  else val = atof(s.c_str()); 
  }
  };
  #endif
  
  void addparam(ld& val, const string s);
#line 123 "config.cpp"
  extern ld bounded_mine_percentage;
#line 124 "config.cpp"
  extern int bounded_mine_quantity, bounded_mine_max;
#line 126 "config.cpp"
  extern const char *conffile;
#line 128 "config.cpp"
  extern array<ld, gGUARD> sightranges;
#line 130 "config.cpp"
  extern videopar vid;
#line 143 "config.cpp"
  charstyle& getcs(int id IS(multi::cpid));
#line 156 "config.cpp"
  void hread(hstream& hs, charstyle& cs);
#line 174 "config.cpp"
  void hwrite(hstream& hs, const charstyle& cs);
#line 181 "config.cpp"
  string csnameid(int id);
#line 192 "config.cpp"
  string csname(charstyle& cs);
#line 196 "config.cpp"
  int playergender();
#line 199 "config.cpp"
  int princessgender();
#line 205 "config.cpp"
  extern int default_language;
#line 207 "config.cpp"
  int lang();
#line 213 "config.cpp"
  extern bool autojoy;
#line 229 "config.cpp"
  void addsaver(charstyle& cs, string s);
#line 250 "config.cpp"
  void initcs(charstyle &cs);
#line 262 "config.cpp"
  void savecolortable(colortable& ct, string name);
#line 267 "config.cpp"
  extern purehookset hooks_configfile;
#line 269 "config.cpp"
  void initConfig();
#line 656 "config.cpp"
  bool inSpecialMode();
#line 667 "config.cpp"
  bool have_current_settings();
#line 688 "config.cpp"
  bool have_current_graph_settings();
#line 699 "config.cpp"
  void reset_graph_settings();
#line 710 "config.cpp"
  void resetModes(char leave IS('c'));
  #if CAP_CONFIG  
#line 741 "config.cpp"
  void resetConfig();
  #endif
  #if CAP_CONFIG
#line 753 "config.cpp"
  void saveConfig();
#line 793 "config.cpp"
  void parseline(const string& str);
#line 808 "config.cpp"
  void loadNewConfig(FILE *f);
#line 823 "config.cpp"
  void loadConfig();
  #endif
#line 852 "config.cpp"
  void add_cells_drawn(char c IS('C'));
#line 884 "config.cpp"
  void edit_sightrange();
#line 1000 "config.cpp"
  void menuitem_sightrange(char c IS('c'));
#line 1014 "config.cpp"
  void showSpecialEffects();
#line 1030 "config.cpp"
  void showGraphConfig();
#line 1181 "config.cpp"
  void switchFullscreen();
#line 1198 "config.cpp"
  void switchGL();
#line 1211 "config.cpp"
  void edit_whatever(char type, int index);
#line 1232 "config.cpp"
  void configureOther();
#line 1293 "config.cpp"
  void configureInterface();
  #if CAP_SDLJOY
#line 1373 "config.cpp"
  void showJoyConfig();
  #endif
#line 1424 "config.cpp"
  void projectionDialog();
#line 1458 "config.cpp"
  void explain_detail();
#line 1467 "config.cpp"
  void add_edit_fov(char key IS('f'));
#line 1486 "config.cpp"
  void showStereo();
#line 1558 "config.cpp"
  void config_camera_rotation();
#line 1569 "config.cpp"
  void add_edit_wall_quality(char c);
#line 1595 "config.cpp"
  void edit_levellines(char c);
#line 1617 "config.cpp"
  void show3D();
#line 1908 "config.cpp"
  void switchcolor(unsigned int& c, unsigned int* cs);
#line 1915 "config.cpp"
  void showCustomizeChar();
#line 1991 "config.cpp"
  void refresh_canvas();
#line 2005 "config.cpp"
  void edit_color_table(colortable& ct, const reaction_t& r IS(reaction_t()), bool has_bit IS(false));
#line 2029 "config.cpp"
  void show_color_dialog();
  #if CAP_CONFIG
#line 2136 "config.cpp"
  void resetConfigMenu();
  #endif
  #if CAP_TRANS
#line 2168 "config.cpp"
  void selectLanguageScreen();
  #endif
#line 2226 "config.cpp"
  void configureMouse();
#line 2268 "config.cpp"
  void showSettings();
  #if CAP_COMMANDLINE
#line 2321 "config.cpp"
  int read_color_args();
#line 2364 "config.cpp"
  int read_config_args();
#line 2535 "config.cpp"
  int read_gamemode_args();
  #endif
#line 2556 "config.cpp"
  extern unordered_map<string, ld&> params;

  // implemented in: control.cpp

#line 11 "control.cpp"
  extern int frames;
#line 12 "control.cpp"
  extern bool outoffocus;
#line 14 "control.cpp"
  extern int mousex, mousey;
#line 15 "control.cpp"
  extern hyperpoint mouseh, mouseoh;
#line 17 "control.cpp"
  extern bool leftclick, rightclick, targetclick, hiliteclick, anyshiftclick, wheelclick;
#line 18 "control.cpp"
  extern bool forcetarget, lshiftclick, lctrlclick, numlock_on;
#line 19 "control.cpp"
  extern bool gtouched;
#line 21 "control.cpp"
  extern bool holdmouse;
#line 23 "control.cpp"
  extern int getcstat, lgetcstat;
#line 24 "control.cpp"
  extern ld getcshift;
#line 25 "control.cpp"
  extern bool inslider;
#line 27 "control.cpp"
  extern function <void(int sym, int uni)> keyhandler;
#line 28 "control.cpp"
  extern function <bool(SDL_Event &ev)> joyhandler;
#line 31 "control.cpp"
  // what part of the compass does 'skip turn'
  static const auto SKIPFAC = .4;
#line 36 "control.cpp"
  extern bool mousing;
#line 39 "control.cpp"
  extern bool mousepressed;
#line 40 "control.cpp"
  extern bool mousemoved;
#line 41 "control.cpp"
  extern bool actonrelease;
#line 43 "control.cpp"
  extern bool mousepan, oldmousepan;
  #if CAP_MOUSEGRAB
#line 45 "control.cpp"
  extern ld mouseaim_x, mouseaim_y;
  #endif
#line 47 "control.cpp"
  extern ld mouseaim_sensitivity;
#line 49 "control.cpp"
  extern int timetowait;
  #if CAP_SDLJOY
#line 52 "control.cpp"
  extern int joyx, joyy, panjoyx, panjoyy; 
#line 53 "control.cpp"
  extern movedir joydir;
  #endif
#line 56 "control.cpp"
  extern movedir mousedest;
#line 57 "control.cpp"
  extern ld shiftmul;
#line 59 "control.cpp"
  extern cell *mouseover, *mouseover2, *lmouseover;
#line 60 "control.cpp"
  extern ld modist, modist2;
#line 62 "control.cpp"
  extern int lastt;
#line 64 "control.cpp"
  bool mouseout();
#line 69 "control.cpp"
  bool mouseout2();
#line 74 "control.cpp"
  movedir vectodir(hyperpoint P);
#line 111 "control.cpp"
  void remission();
#line 115 "control.cpp"
  hyperpoint move_destination_vec(int d);
#line 123 "control.cpp"
  void movepckeydir(int d);
#line 134 "control.cpp"
  void calcMousedest();
#line 167 "control.cpp"
  void mousemovement();
  #if CAP_SDLJOY
#line 190 "control.cpp"
  extern SDL_Joystick* sticks[8];
#line 191 "control.cpp"
  extern int numsticks;
#line 193 "control.cpp"
  void initJoysticks();
#line 208 "control.cpp"
  void closeJoysticks();
#line 217 "control.cpp"
  extern bool joy_ignore_next;
#line 219 "control.cpp"
  void checkjoy();
#line 256 "control.cpp"
  void checkpanjoy(double t);
  #endif
#line 273 "control.cpp"
  extern bool quitmainloop;
#line 275 "control.cpp"
  bool doexiton(int sym, int uni);
#line 291 "control.cpp"
  extern bool didsomething;
#line 295 "control.cpp"
  extern bool smooth_scrolling;
#line 304 "control.cpp"
  void handlePanning(int sym, int uni);
#line 402 "control.cpp"
  extern purehookset hooks_fixticks;
#line 404 "control.cpp"
  void handleKeyNormal(int sym, int uni);
#line 527 "control.cpp"
  extern bool need_mouseh;
#line 529 "control.cpp"
  void fix_mouseh();
#line 548 "control.cpp"
  void handlekey(int sym, int uni);
#line 555 "control.cpp"
  extern void resize_screen_to(int x, int y);
  #if !CAP_SDL
#line 558 "control.cpp"
  void mainloopiter();
  #endif
  #if CAP_SDL
#line 567 "control.cpp"
  void resize_screen_to(int x, int y);
#line 580 "control.cpp"
  void mainloopiter();
#line 738 "control.cpp"
  void handle_event(SDL_Event& ev);
  #endif
#line 981 "control.cpp"
  void mainloop();
  #if ISMOBILE==1
#line 993 "control.cpp"
  void displayabutton(int px, int py, string s, int col);
  #endif
#line 1015 "control.cpp"
  bool interpret_as_direction(int sym, int uni);
#line 1023 "control.cpp"
  int get_direction_key(int sym, int uni);
#line 1040 "control.cpp"
  bool gmodekeys(int sym, int uni);
#line 1089 "control.cpp"
  bool haveMobileCompass();
#line 1099 "control.cpp"
  bool handleCompass();
  #if CAP_ORIENTATION
#line 1124 "control.cpp"
  extern transmatrix getOrientation();
  #endif
  namespace ors {
#line 1130 "control.cpp"
    extern int mode;
#line 1137 "control.cpp"
    extern string choices[3];
    #if CAP_ORIENTATION
#line 1140 "control.cpp"
    transmatrix getOrientation();
    #endif
#line 1145 "control.cpp"
    void reset();
#line 1158 "control.cpp"
    void show();
#line 1241 "control.cpp"
    void unrotate(transmatrix& T);
#line 1245 "control.cpp"
    void rerotate(transmatrix& T);
#line 1251 "control.cpp"
    void check_orientation();
    }

  // implemented in: crystal.cpp

  namespace crystal {
    #if CAP_CRYSTAL
#line 15 "crystal.cpp"
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
#line 46 "crystal.cpp"
    bool pure();
#line 50 "crystal.cpp"
    extern bool view_coordinates;
#line 53 "crystal.cpp"
    extern bool used_compass_inside;
#line 55 "crystal.cpp"
    ldcoord told(coord c);
#line 59 "crystal.cpp"
    extern ld compass_probability;
#line 713 "crystal.cpp"
    heptagon *get_heptagon_at(coord c);
#line 714 "crystal.cpp"
    coord get_coord(heptagon *h);
#line 715 "crystal.cpp"
    ldcoord get_ldcoord(cell *c);
#line 717 "crystal.cpp"
    int get_dim();
    #if MAXMDIM >= 4
#line 720 "crystal.cpp"
    transmatrix get_adj(heptagon *h, int d);
    #endif
#line 733 "crystal.cpp"
    color_t colorize(cell *c, char whichCanvas);
#line 814 "crystal.cpp"
    extern colortable coordcolors;
#line 816 "crystal.cpp"
    ld compass_angle();
#line 821 "crystal.cpp"
    bool crystal_cell(cell *c, transmatrix V);
#line 852 "crystal.cpp"
    vector<cell*> build_shortest_path(cell *c1, cell *c2);
#line 905 "crystal.cpp"
    int precise_distance(cell *c1, cell *c2);
#line 969 "crystal.cpp"
    ld space_distance(cell *c1, cell *c2);
#line 976 "crystal.cpp"
    ld space_distance_camelot(cell *c);
#line 981 "crystal.cpp"
    int dist_relative(cell *c);
#line 1104 "crystal.cpp"
    int dist_alt(cell *c);
#line 1126 "crystal.cpp"
    void init_rotation();
#line 1147 "crystal.cpp"
    void random_rotation();
#line 1165 "crystal.cpp"
    void next_home_orientation();
#line 1170 "crystal.cpp"
    void flip_z();
#line 1185 "crystal.cpp"
    void switch_z_coordinate();
#line 1194 "crystal.cpp"
    void apply_rotation(const transmatrix t);
#line 1204 "crystal.cpp"
    void centerrug(ld aspd);
#line 1249 "crystal.cpp"
    void build_rugdata();
#line 1308 "crystal.cpp"
    void set_land(cell *c);
#line 1322 "crystal.cpp"
    void set_crystal(int sides);
#line 1364 "crystal.cpp"
    void set_crystal_period_flags();
#line 1424 "crystal.cpp"
    hrmap *new_map();
#line 1428 "crystal.cpp"
    string compass_help();
#line 1453 "crystal.cpp"
    void show();
#line 1566 "crystal.cpp"
    string get_table_volume();
#line 1614 "crystal.cpp"
    string get_table_boundary();
#line 1624 "crystal.cpp"
    void may_place_compass(cell *c);
    #endif
    #if CAP_CRYSTAL && MAXMDIM >= 4
#line 1786 "crystal.cpp"
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
#line 15 "debug.cpp"
  extern vector<cell*> buggycells;
#line 18 "debug.cpp"
  template<class... T>
  void limitgen(T... args) {
  if(steplimit) {
  cstep++;
  printf("%6d ", cstep);
  printf(args...);
  if(cstep == steplimit) buggyGeneration = true;
  }
  }
#line 29 "debug.cpp"
  cell *pathTowards(cell *pf, cell *pt);
#line 45 "debug.cpp"
  void describeCell(cell *c);
#line 94 "debug.cpp"
  extern eLand cheatdest;
#line 96 "debug.cpp"
  void cheatMoveTo(eLand l);
#line 103 "debug.cpp"
  bool applyCheat(char u, cell *c IS(NULL));
#line 322 "debug.cpp"
  extern vector<pair<cellwalker,int> > drawbugs;
#line 476 "debug.cpp"
  void push_debug_screen();
#line 482 "debug.cpp"
  void showCheatMenu();
#line 525 "debug.cpp"
  void viewall();
#line 561 "debug.cpp"
  void modalDebug(cell *c);
#line 584 "debug.cpp"
  void raiseBuggyGeneration(cell *c, const char *s);
#line 826 "debug.cpp"
  extern bool ldebug;
#line 828 "debug.cpp"
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
    
    static inline ld identity_f(ld x) { return x; };
    
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
#line 70 "dialogs.cpp"
    void addHelp();
    namespace zoom {
#line 94 "dialogs.cpp"
      bool displayfr(int x, int y, int b, int size, const string &s, color_t color, int align);
#line 98 "dialogs.cpp"
      bool displayfr_highlight(int x, int y, int b, int size, const string &s, color_t color, int align, int hicolor IS(0xFFFF00));
      }
    #if CAP_MENUSCALING && CAP_SDL
#line 106 "dialogs.cpp"
    void handleZooming(SDL_Event &ev);
    #endif
    #if !(CAP_MENUSCALING && CAP_SDL)
#line 116 "dialogs.cpp"
    void handleZooming(SDL_Event &ev);
    #endif
#line 119 "dialogs.cpp"
    extern vector<item> items;
#line 121 "dialogs.cpp"
    item& lastItem();
#line 123 "dialogs.cpp"
    item& titleItem();
#line 125 "dialogs.cpp"
    extern map<int, reaction_t> key_actions;
#line 127 "dialogs.cpp"
    void add_key_action(int key, const reaction_t& action);
#line 131 "dialogs.cpp"
    void add_key_action_adjust(int& key, const reaction_t& action);
#line 136 "dialogs.cpp"
    void add_action(const reaction_t& action);
#line 140 "dialogs.cpp"
    void add_action_push(const reaction_t& action);
#line 142 "dialogs.cpp"
    void handler(int sym, int uni);
#line 147 "dialogs.cpp"
    void init();
#line 153 "dialogs.cpp"
    string keyname(int k);
#line 168 "dialogs.cpp"
    void addSlider(double d1, double d2, double d3, int key);
#line 178 "dialogs.cpp"
    void addIntSlider(int d1, int d2, int d3, int key);
#line 189 "dialogs.cpp"
    void addSelItem(string body, string value, int key);
#line 206 "dialogs.cpp"
    void addBoolItem(string body, bool value, int key);
#line 210 "dialogs.cpp"
    int displaycolor(color_t col);
#line 216 "dialogs.cpp"
    void addKeyboardItem(string keys);
#line 226 "dialogs.cpp"
    void addColorItem(string body, int value, int key);
#line 240 "dialogs.cpp"
    void addHelp(string body);
#line 251 "dialogs.cpp"
    void addInfo(string body, color_t color IS(dialogcolor));
#line 260 "dialogs.cpp"
    void addItem(string body, int key);
#line 273 "dialogs.cpp"
    void addBigItem(string body, int key);
#line 285 "dialogs.cpp"
    int addBreak(int val);
#line 293 "dialogs.cpp"
    void addTitle(string body, color_t color, int scale);
#line 302 "dialogs.cpp"
    void init(string title, color_t color IS(0xE8E8E8), int scale IS(150), int brk IS(60));
#line 308 "dialogs.cpp"
    extern int dcenter, dwidth;
#line 310 "dialogs.cpp"
    extern int dialogflags;
#line 312 "dialogs.cpp"
    int displayLong(string str, int siz, int y, bool measure);
#line 345 "dialogs.cpp"
    extern int tothei, dialogwidth, dfsize, dfspace, leftwidth, rightwidth, innerwidth, itemx, keyx, valuex;
#line 347 "dialogs.cpp"
    extern string highlight_text;
#line 349 "dialogs.cpp"
    void measure();
#line 376 "dialogs.cpp"
    extern purehookset hooks_display_dialog;
#line 378 "dialogs.cpp"
    void display();
#line 523 "dialogs.cpp"
    void handleNavigation(int &sym, int &uni);
#line 588 "dialogs.cpp"
    extern color_t *palette;
#line 594 "dialogs.cpp"
    void handleKeyColor(int sym, int uni);
#line 637 "dialogs.cpp"
    extern bool colorAlpha;
#line 639 "dialogs.cpp"
    void drawColorDialog();
#line 700 "dialogs.cpp"
    void openColorDialog(unsigned int& col, unsigned int *pal IS(palette));
#line 709 "dialogs.cpp"
    extern numberEditor ne;
#line 711 "dialogs.cpp"
    bool editingDetail();
#line 720 "dialogs.cpp"
    string disp(ld x);
#line 725 "dialogs.cpp"
    extern reaction_t reaction;
#line 726 "dialogs.cpp"
    extern reaction_t reaction_final;
#line 728 "dialogs.cpp"
    extern reaction_t extra_options;
#line 730 "dialogs.cpp"
    void apply_slider();
#line 740 "dialogs.cpp"
    void use_hexeditor();
#line 745 "dialogs.cpp"
    void apply_edit();
#line 762 "dialogs.cpp"
    void bound_low(ld val);
#line 773 "dialogs.cpp"
    void bound_up(ld val);
#line 784 "dialogs.cpp"
    extern int numberdark;
#line 786 "dialogs.cpp"
    void formula_keyboard(bool lr);
#line 795 "dialogs.cpp"
    void drawNumberDialog();
#line 891 "dialogs.cpp"
    int handlePage(int& nl, int& nlm, int perpage);
#line 912 "dialogs.cpp"
    void displayPageButtons(int i, bool pages);
#line 927 "dialogs.cpp"
    bool handlePageButtons(int uni);
#line 937 "dialogs.cpp"
    void editNumber(ld& x, ld vmin, ld vmax, ld step, ld dft, string title, string help);
#line 962 "dialogs.cpp"
    void editNumber(int& x, int vmin, int vmax, ld step, int dft, string title, string help);
#line 968 "dialogs.cpp"
    void helpToEdit(int& x, int vmin, int vmax, int step, int dft);
#line 1001 "dialogs.cpp"
    void drawFileDialog();
#line 1055 "dialogs.cpp"
    void handleKeyFile(int sym, int uni);
#line 1098 "dialogs.cpp"
    void openFileDialog(string& filename, string fcap, string ext, bool_reaction_t action);
#line 1108 "dialogs.cpp"
    extern string infix;
#line 1110 "dialogs.cpp"
    bool hasInfix(const string &s);
#line 1124 "dialogs.cpp"
    bool editInfix(int uni);
#line 1133 "dialogs.cpp"
    extern vector<pair<string, color_t> > v;  
#line 1135 "dialogs.cpp"
    void vpush(color_t color, const char *name);
#line 1142 "dialogs.cpp"
    extern string *edited_string;
#line 1144 "dialogs.cpp"
    string view_edited_string();
#line 1152 "dialogs.cpp"
    void start_editing(string& s);
#line 1157 "dialogs.cpp"
    string editchecker(int sym, int uni);
#line 1162 "dialogs.cpp"
    bool handle_edit_string(int sym, int uni, function<string(int, int)> checker IS(editchecker));
#line 1182 "dialogs.cpp"
    void string_edit_dialog();
#line 1212 "dialogs.cpp"
    void edit_string(string& s, string title, string help);
#line 1225 "dialogs.cpp"
    void confirm_dialog(const string& text, const reaction_t& act);
#line 1239 "dialogs.cpp"
    void addBoolItem_action(const string& s, bool& b, char c);
#line 1244 "dialogs.cpp"
    void addBoolItem_action_neg(const string& s, bool& b, char c);
#line 1250 "dialogs.cpp"
    
    template<class T> void addBoolItem_choice(const string&  s, T& b, T val, char c) {
    addBoolItem(s, b == val, c);
    add_action([&b, val] { b = val; });
    }
    
    inline void cheat_if_confirmed(const reaction_t& act) {
    if(needConfirmationEvenIfSaved()) pushScreen([act] () { confirm_dialog(XLAT("This will enable the cheat mode, making this game ineligible for scoring. Are you sure?"), act); });
    else act();
    }
    
    inline void do_if_confirmed(const reaction_t& act) {
    if(needConfirmationEvenIfSaved()) pushScreen([act] () { confirm_dialog(XLAT("This will end your current game and start a new one. Are you sure?"), act); });
    else act();
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
  
  struct drawqueueitem {
  PPR prio;
  color_t color;
  int subprio;
  virtual void draw() = 0;
  virtual void draw_back() {}
  virtual void draw_pre() {}
  virtual ~drawqueueitem() {}
  void draw_darker();
  virtual color_t outline_group() = 0;
  };
  
  struct dqi_poly : drawqueueitem {
  ld band_shift;
  transmatrix V;
  const vector<glvertex> *tab;
  int offset, cnt, offset_texture;
  color_t outline;
  double linewidth;
  int flags;
  struct basic_textureinfo *tinf;
  hyperpoint intester;
  float cache;
  void draw();
  void gldraw();
  void draw_back();
  virtual color_t outline_group() { return outline; }
  };
  
  struct dqi_line : drawqueueitem {
  ld band_shift;
  hyperpoint H1, H2;
  int prf;
  double width;
  void draw();
  void draw_back();
  virtual color_t outline_group() { return color; }
  };
  
  struct dqi_string : drawqueueitem {
  string str;
  int x, y, shift, size, frame;
  int align;
  void draw();
  virtual color_t outline_group() { return 1; }
  };
  
  struct dqi_circle : drawqueueitem {
  int x, y, size, fillcolor;
  double linewidth;
  void draw();
  virtual color_t outline_group() { return 2; }
  };
  
  struct dqi_action : drawqueueitem {
  reaction_t action;
  dqi_action(const reaction_t& a) : action(a) {}
  void draw() { action(); }
  virtual color_t outline_group() { return 2; }
  };
#line 100 "drawing.cpp"
  unsigned char& part(color_t& col, int i);
#line 115 "drawing.cpp"
  extern color_t poly_outline;
#line 117 "drawing.cpp"
  extern vector<unique_ptr<drawqueueitem>> ptds;
  #if CAP_GL
#line 120 "drawing.cpp"
  extern color_t text_color;
#line 121 "drawing.cpp"
  extern int text_shift;
#line 122 "drawing.cpp"
  extern GLuint text_texture;
#line 123 "drawing.cpp"
  extern int texts_merged;
#line 124 "drawing.cpp"
  extern int shapes_merged;
#line 132 "drawing.cpp"
  void glflush();
  #endif
  #if CAP_POLY
#line 193 "drawing.cpp"
  #define POLYMAX 60000
#line 196 "drawing.cpp"
  extern vector<glvertex> glcoords;
  #endif
#line 200 "drawing.cpp"
  extern int spherespecial, spherephase;
  #if CAP_POLY
#line 205 "drawing.cpp"
  extern int polyx[POLYMAX], polyxr[POLYMAX], polyy[POLYMAX];
#line 234 "drawing.cpp"
  bool two_sided_model();
#line 245 "drawing.cpp"
  int get_side(const hyperpoint& H);
#line 268 "drawing.cpp"
  bool correct_side(const hyperpoint& H);
  #if CAP_SDLGFX
#line 429 "drawing.cpp"
  void filledPolygonColorI(SDL_Surface *s, int* px, int *py, int polyi, color_t col);
  #endif
  #if CAP_GL
#line 482 "drawing.cpp"
  extern int global_projection;
  #endif
#line 613 "drawing.cpp"
  ld scale_at(const transmatrix& T);
#line 623 "drawing.cpp"
  ld linewidthat(const hyperpoint& h);
#line 643 "drawing.cpp"
  void set_width(ld w);
  namespace s2xe {
#line 900 "drawing.cpp"
    extern int qrings;
    }
  namespace ods {
    #if CAP_ODS
#line 1151 "drawing.cpp"
    bool project(hyperpoint h, hyperpoint& h1, hyperpoint& h2, bool eye);
    #endif
    }
#line 1620 "drawing.cpp"
  void prettypoint(const hyperpoint& h);
#line 1624 "drawing.cpp"
  void prettylinesub(const hyperpoint& h1, const hyperpoint& h2, int lev);
#line 1633 "drawing.cpp"
  void prettyline(hyperpoint h1, hyperpoint h2, color_t col, int lev, int flags, PPR prio);
#line 1653 "drawing.cpp"
  void prettypoly(const vector<hyperpoint>& t, color_t fillcol, color_t linecol, int lev);
#line 1677 "drawing.cpp"
  void queuereset(eModel m, PPR prio);
#line 1712 "drawing.cpp"
  void initquickqueue();
#line 1717 "drawing.cpp"
  void sortquickqueue();
#line 1726 "drawing.cpp"
  void quickqueue();
#line 1745 "drawing.cpp"
  extern ld backbrightness;
#line 1775 "drawing.cpp"
  void sort_drawqueue();
#line 1814 "drawing.cpp"
  void reverse_priority(PPR p);
#line 1818 "drawing.cpp"
  void reverse_side_priorities();
#line 1825 "drawing.cpp"
  void draw_backside();
#line 1859 "drawing.cpp"
  void reverse_transparent_walls();
#line 1864 "drawing.cpp"
  void draw_main();
  #if CAP_VR
#line 1925 "drawing.cpp"
  extern hookset<bool()> *hooks_vr_draw_all;
  #endif
#line 1928 "drawing.cpp"
  void drawqueue();
#line 2031 "drawing.cpp"
  template<class T, class... U> T& queuea(PPR prio, U... u) {
  ptds.push_back(unique_ptr<T>(new T (u...)));
  ptds.back()->prio = prio;  
  return (T&) *ptds.back();
  }
#line 2038 "drawing.cpp"
  extern int neon_mode;
#line 2040 "drawing.cpp"
  void apply_neon(color_t& col, int& r);
  #if CAP_SHAPES
#line 2051 "drawing.cpp"
  color_t magentize(color_t x);
#line 2063 "drawing.cpp"
  color_t monochromatize(color_t x);
#line 2070 "drawing.cpp"
  dqi_poly& queuepolyat(const transmatrix& V, const hpcshape& h, color_t col, PPR prio);
  #endif
#line 2141 "drawing.cpp"
  dqi_poly& queuetable(const transmatrix& V, const vector<glvertex>& f, int cnt, color_t linecol, color_t fillcol, PPR prio);
  #if CAP_SHAPES
#line 2160 "drawing.cpp"
  dqi_poly& queuepoly(const transmatrix& V, const hpcshape& h, color_t col);
  #endif
#line 2169 "drawing.cpp"
  void curvepoint(const hyperpoint& H1);
#line 2173 "drawing.cpp"
  dqi_poly& queuecurve(color_t linecol, color_t fillcol, PPR prio);
#line 2180 "drawing.cpp"
  dqi_action& queueaction(PPR prio, const reaction_t& action);
#line 2184 "drawing.cpp"
  dqi_line& queueline(const hyperpoint& H1, const hyperpoint& H2, color_t col, int prf IS(0), PPR prio IS(PPR::LINE));
#line 2197 "drawing.cpp"
  void queuestr(int x, int y, int shift, int size, string str, color_t col, int frame IS(0), int align IS(8));
#line 2209 "drawing.cpp"
  void queuecircle(int x, int y, int size, color_t color, PPR prio IS(PPR::CIRCLE), color_t fillcolor IS(0));
#line 2219 "drawing.cpp"
  void getcoord0(const hyperpoint& h, int& xc, int &yc, int &sc);
#line 2228 "drawing.cpp"
  ld scale_in_pixels(const transmatrix& V);
#line 2232 "drawing.cpp"
  bool getcoord0_checked(const hyperpoint& h, int& xc, int &yc, int &zc);
#line 2239 "drawing.cpp"
  void queuestr(const hyperpoint& h, int size, const string& chr, color_t col, int frame IS(0));
#line 2245 "drawing.cpp"
  void queuestr(const transmatrix& V, double size, const string& chr, color_t col, int frame IS(0), int align IS(8));
#line 2251 "drawing.cpp"
  void queuestrn(const transmatrix& V, double size, const string& chr, color_t col, int frame IS(0), int align IS(8));
#line 2284 "drawing.cpp"
  void queuecircle(const transmatrix& V, double size, color_t col);
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
  #define HF_WINTER     Flag(32)
#line 49 "environment.cpp"
  extern flagtype havewhat, hadwhat;
#line 52 "environment.cpp"
  extern vector<cell*> worms, ivies, ghosts, golems, hexsnakes;
#line 62 "environment.cpp"
  extern vector<int> reachedfrom;
#line 65 "environment.cpp"
  extern int first7;           
#line 68 "environment.cpp"
  extern vector<cell*> dcal;
#line 70 "environment.cpp"
  extern vector<cell*> pathq;
#line 73 "environment.cpp"
  extern int statuecount;
#line 76 "environment.cpp"
  extern vector<cell*> pathqm;
#line 79 "environment.cpp"
  extern set<int> snaketypes;
#line 81 "environment.cpp"
  extern int gamerange_bonus;
#line 82 "environment.cpp"
  int gamerange();
#line 85 "environment.cpp"
  extern cell *pd_from;
#line 86 "environment.cpp"
  extern int pd_range;
#line 88 "environment.cpp"
  void onpath(cell *c, int d);
#line 93 "environment.cpp"
  void onpath(cell *c, int d, int sp);
#line 99 "environment.cpp"
  void clear_pathdata();
#line 106 "environment.cpp"
  extern int pathlock;
#line 108 "environment.cpp"
  void compute_graphical_distance();
#line 130 "environment.cpp"
  void computePathdist(eMonster param);
#line 177 "environment.cpp"
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
  pathdata(eMonster m) { 
  checklock();
  computePathdist(m); 
  }
  pathdata(int i) { 
  checklock();
  }
  };
#line 199 "environment.cpp"
  void bfs();
#line 458 "environment.cpp"
  void moverefresh(bool turn IS(true));
#line 680 "environment.cpp"
  void settemp(cell *c);
#line 685 "environment.cpp"
  void findWormIvy(cell *c);
#line 731 "environment.cpp"
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
#line 74 "euclid.cpp"
    extern coord basic_canonicalize(coord x);
#line 77 "euclid.cpp"
    struct torus_config {
    /** periods entered by the user */
    intmatrix user_axes;
    /** OR'ed flags: 1 -- flip X in 3D, 2 -- flip Y in 3D, 4 -- flip X/Y in 3D, 8 -- Klein bottle in 2D, 16 -- third turn in 3D */
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
    unordered_map<coord, int> hash;
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
#line 122 "euclid.cpp"
    extern torus_config eu_input, eu_edit;
#line 123 "euclid.cpp"
    extern torus_config_full eu;
#line 314 "euclid.cpp"
    vector<coord>& get_current_shifttable();
#line 315 "euclid.cpp"
    map<coord, heptagon*>& get_spacemap();
#line 316 "euclid.cpp"
    map<heptagon*, coord>& get_ispacemap();
#line 317 "euclid.cpp"
    cell *& get_camelot_center();
#line 319 "euclid.cpp"
    hrmap* new_map();
#line 323 "euclid.cpp"
    transmatrix move_matrix(heptagon *h, int i);
#line 327 "euclid.cpp"
    bool pseudohept(cell *c);
#line 338 "euclid.cpp"
    int dist_alt(cell *c);
#line 346 "euclid.cpp"
    bool get_emerald(cell *c);
#line 366 "euclid.cpp"
    int celldistance(coord v);
#line 391 "euclid.cpp"
    int celldistance(cell *c1, cell *c2);
#line 396 "euclid.cpp"
    void set_land(cell *c);
#line 410 "euclid.cpp"
    int dist_relative(cell *c);
#line 443 "euclid.cpp"
    torus_config torus3(int x, int y, int z);
#line 449 "euclid.cpp"
    torus_config clear_torus3();
#line 464 "euclid.cpp"
    bool valid_third_turn(const intmatrix& m);
#line 474 "euclid.cpp"
    torus_config make_third_turn(int a, int b, int c);
#line 487 "euclid.cpp"
    torus_config make_quarter_turn(int a, int b, int c);
#line 510 "euclid.cpp"
    bool valid_irr_torus();
#line 527 "euclid.cpp"
    void build_torus3(eGeometry g);
#line 619 "euclid.cpp"
    void build_torus3();
#line 744 "euclid.cpp"
    void prepare_torus3();
#line 748 "euclid.cpp"
    void show_fundamental();
#line 792 "euclid.cpp"
    torus_config rectangular_torus(int x, int y, bool klein);
#line 807 "euclid.cpp"
    void show_torus3();
#line 1033 "euclid.cpp"
    int dscalar(gp::loc e1, gp::loc e2);
#line 1037 "euclid.cpp"
    int dsquare(gp::loc e);
#line 1039 "euclid.cpp"
    int dcross(gp::loc e1, gp::loc e2);
#line 1043 "euclid.cpp"
    gp::loc full_coords2(cell *c);
#line 1066 "euclid.cpp"
    cell* at(gp::loc p);
#line 1074 "euclid.cpp"
    coord to_coord(gp::loc p);
#line 1076 "euclid.cpp"
    gp::loc sdxy();
#line 1078 "euclid.cpp"
    pair<bool, string> coord_display(const transmatrix& V, cell *c);
#line 1091 "euclid.cpp"
    gp::loc to_loc(const coord& v);
#line 1093 "euclid.cpp"
    map<gp::loc, cdata>& get_cdata();
#line 1095 "euclid.cpp"
    transmatrix eumove(coord co);
#line 1112 "euclid.cpp"
    transmatrix eumove(gp::loc co);
#line 1114 "euclid.cpp"
    bool chiral(gp::loc g);
#line 1126 "euclid.cpp"
    void twist_once(gp::loc coo);
#line 1138 "euclid.cpp"
    int dist(int sx, int sy, bool reduce IS(true));
#line 1148 "euclid.cpp"
    int dist(gp::loc a, gp::loc b);
#line 1152 "euclid.cpp"
    int cyldist(gp::loc a, gp::loc b);
#line 1172 "euclid.cpp"
    bool in();
#line 1173 "euclid.cpp"
    bool in(int dim);
#line 1174 "euclid.cpp"
    bool in(int dim, int s7);
    }
#line 1178 "euclid.cpp"
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
  vector<int> coef;
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
#line 289 "expansion.cpp"
  int type_in(expansion_analyzer& ea, cell *c, const cellfunction& f);
#line 328 "expansion.cpp"
  bool sizes_known();
#line 339 "expansion.cpp"
  bool trees_known();
#line 370 "expansion.cpp"
  int curr_dist(cell *c);
#line 387 "expansion.cpp"
  int type_in_reduced(expansion_analyzer& ea, cell *c, const cellfunction& f);
#line 399 "expansion.cpp"
  int parent_id(cell *c, int which, const cellfunction& cf);
#line 420 "expansion.cpp"
  void generate_around(cell *c);
  namespace ts {
#line 425 "expansion.cpp"
    cell *verified_add(cell *c, int which, int bonus, const cellfunction& cf);
#line 431 "expansion.cpp"
    cell *verified_add_gen(cell *c, int which, int bonus, const cellfunction& cf);
#line 435 "expansion.cpp"
    cell *add(cell *c, int which, int bonus, const cellfunction& cf);
#line 441 "expansion.cpp"
    cell *left_of(cell *c, const cellfunction& cf);
#line 448 "expansion.cpp"
    cell *right_of(cell *c, const cellfunction& cf);
#line 455 "expansion.cpp"
    cell *child_number(cell *c, int id, const cellfunction& cf);
#line 462 "expansion.cpp"
    inline cell *left_parent(cell *c, const cellfunction& cf) { return verified_add(c, 1, 0, cf); }
    inline cell *right_parent(cell *c, const cellfunction& cf) { return verified_add(c, -1, 0, cf); }
    }
#line 468 "expansion.cpp"
  extern bool viewdists;
#line 469 "expansion.cpp"
  extern bool use_color_codes;
#line 470 "expansion.cpp"
  extern bool use_analyzer;
#line 471 "expansion.cpp"
  extern bool show_distance_lists;
#line 476 "expansion.cpp"
  extern map<int, color_t> expcolors;
#line 527 "expansion.cpp"
  void viewdist_configure_dialog();
#line 677 "expansion.cpp"
  void enable_viewdists();
#line 809 "expansion.cpp"
  extern expansion_analyzer expansion;
#line 811 "expansion.cpp"
  extern int sibling_limit;
#line 813 "expansion.cpp"
  void set_sibling_limit();
#line 862 "expansion.cpp"
  int hyperbolic_celldistance(cell *c1, cell *c2);

  // implemented in: fieldpattern.cpp

  #if CAP_FIELD
  namespace fieldpattern {
#line 19 "fieldpattern.cpp"
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
#line 36 "fieldpattern.cpp"
    bool isprime(int n);
#line 42 "fieldpattern.cpp"
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
#line 66 "fieldpattern.cpp"
    int groupspin(int id, int d, int group);
#line 70 "fieldpattern.cpp"
    int btspin(int id, int d);
#line 75 "fieldpattern.cpp"
    
    static const int ERR = -99;
    
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
    int i = matrices.size();
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
    #if CAP_THREAD
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
    };
    
    #if CAP_THREAD
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
    
#line 1048 "fieldpattern.cpp"
    void info();
#line 1080 "fieldpattern.cpp"
    extern fpattern current_quotient_field;
#line 1081 "fieldpattern.cpp"
    extern fpattern fp_invalid;
#line 1082 "fieldpattern.cpp"
    extern bool quotient_field_changed;
#line 1087 "fieldpattern.cpp"
    struct fpattern& getcurrfp();
#line 1184 "fieldpattern.cpp"
    extern int subpathid;
#line 1185 "fieldpattern.cpp"
    extern int subpathorder;
#line 1189 "fieldpattern.cpp"
    extern vector<fgeomextra> fgeomextras;
#line 1203 "fieldpattern.cpp"
    extern int current_extra;
#line 1205 "fieldpattern.cpp"
    void nextPrime(fgeomextra& ex);
#line 1226 "fieldpattern.cpp"
    void nextPrimes(fgeomextra& ex);
#line 1231 "fieldpattern.cpp"
    void enableFieldChange();
#line 1243 "fieldpattern.cpp"
    void field_from_current();
    #if CAP_THREAD
#line 1258 "fieldpattern.cpp"
    extern map<string, discovery> discoveries;
    #endif
#line 1314 "fieldpattern.cpp"
    extern purehookset on_geometry_change;
    }
#line 1320 "fieldpattern.cpp"
  int currfp_gmul(int a, int b);
#line 1321 "fieldpattern.cpp"
  int currfp_inverses(int i);
#line 1322 "fieldpattern.cpp"
  int currfp_distwall(int i);
#line 1323 "fieldpattern.cpp"
  int currfp_n();
#line 1324 "fieldpattern.cpp"
  int currfp_get_R();
#line 1325 "fieldpattern.cpp"
  int currfp_get_P();
#line 1326 "fieldpattern.cpp"
  int currfp_get_X();
#line 1328 "fieldpattern.cpp"
  void hread_fpattern(hstream& hs, fieldpattern::fpattern& fp);
#line 1340 "fieldpattern.cpp"
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
  
  ITEMFLAGCHECK(isElementalShard, flag & IF_SHARD)
  ITEMFLAGCHECK(itemBurns, !(flag & IF_FIREPROOF))
  ITEMFLAGCHECK(isProtectionOrb, flag & IF_PROTECTION)
  ITEMFLAGCHECK(isEmpathyOrb, flag & IF_EMPATHY)
  ITEMFLAGCHECK(isRangedOrb, flag & IF_RANGED)
  ITEMFLAGCHECK(isRevivalOrb, flag & IF_REVIVAL)
#line 128 "flags.cpp"
  bool boatStrandable(cell *c);
#line 134 "flags.cpp"
  bool isFireOrMagma(cell *w);
#line 138 "flags.cpp"
  int mirrorcolor(bool mirrored);
#line 142 "flags.cpp"
  bool isMounted(cell *c);
#line 154 "flags.cpp"
  int itemclass(eItem it);
#line 156 "flags.cpp"
  bool isFriendly(eMonster m);
#line 158 "flags.cpp"
  bool isFriendly(cell *c);
#line 162 "flags.cpp"
  bool isFriendlyOrBug(cell *c);
#line 168 "flags.cpp"
  bool cellUnstable(cell *c);
#line 172 "flags.cpp"
  bool cellUnstableOrChasm(cell *c);
#line 178 "flags.cpp"
  eMonster elementalOf(eLand l);
#line 186 "flags.cpp"
  eItem localshardof(eLand l);
#line 190 "flags.cpp"
  int snakelevel(cell *c);
#line 199 "flags.cpp"
  eSlimegroup slimegroup(cell *c);
#line 203 "flags.cpp"
  bool isFlying(eMonster m);
#line 207 "flags.cpp"
  bool survivesChasm(eMonster m);
#line 211 "flags.cpp"
  bool ignoresPlates(eMonster m);
#line 215 "flags.cpp"
  bool isInactiveEnemy(cell *w, eMonster forwho);
#line 227 "flags.cpp"
  bool isActiveEnemy(cell *w, eMonster forwho);
#line 237 "flags.cpp"
  bool isArmedEnemy(cell *w, eMonster forwho);
#line 241 "flags.cpp"
  bool eternalFire(cell *c);
#line 246 "flags.cpp"
  bool haveRangedOrb();
#line 256 "flags.cpp"
  bool isFriendlyGhost(eMonster m);
#line 260 "flags.cpp"
  bool isGhostAether(eMonster m);
#line 264 "flags.cpp"
  bool survivesWater(eMonster m);
#line 277 "flags.cpp"
  bool survivesPoison(eMonster m, eWall p);
#line 284 "flags.cpp"
  bool isPermanentFlying(eMonster m);
#line 288 "flags.cpp"
  bool survivesFire(eMonster m);
#line 296 "flags.cpp"
  bool survivesWall(eMonster m);
#line 300 "flags.cpp"
  bool survivesThorns(eMonster m);
#line 304 "flags.cpp"
  bool survivesFall(eMonster m);
#line 308 "flags.cpp"
  bool checkOrb(eMonster m1, eItem orb);
#line 314 "flags.cpp"
  bool checkOrb2(eMonster m1, eItem orb);
#line 320 "flags.cpp"
  bool ignoresSmell(eMonster m);
#line 324 "flags.cpp"
  bool highwall(cell *c);
#line 335 "flags.cpp"
  int chasmgraph(cell *c);
#line 345 "flags.cpp"
  bool conegraph(cell *c);
#line 350 "flags.cpp"
  eItem frog_power(eMonster m);
#line 357 "flags.cpp"
  bool hornStuns(cell *c);
#line 368 "flags.cpp"
  bool do_not_touch_this_wall(cell *c);
#line 372 "flags.cpp"
  bool is_paired(eMonster m);

  // implemented in: game.cpp

#line 19 "game.cpp"
  extern std::mt19937 hrngen;
#line 22 "game.cpp"
  void shrand(int i);
#line 27 "game.cpp"
  int hrandpos();
#line 34 "game.cpp"
  int hrand(int i);
#line 44 "game.cpp"
  template<class T, class... U> T pick(T x, U... u) { std::initializer_list<T> i = {x,u...}; return *(i.begin() + hrand(1+sizeof...(u))); }
  template<class T> void hrandom_shuffle(T* x, int n) { for(int k=1; k<n; k++) swap(x[k], x[hrand(k+1)]); }
  template<class T> void hrandom_shuffle(T& container) { hrandom_shuffle(&container[0], isize(container)); }
  template<class U> auto hrand_elt(U& container) -> decltype(container[0]) { return container[hrand(isize(container))]; }
  template<class T, class U> T hrand_elt(U& container, T default_value) { 
  if(container.empty()) return default_value; 
  return container[hrand(isize(container))]; 
  }
#line 54 "game.cpp"
  vector<int> hrandom_permutation(int qty);
#line 64 "game.cpp"
  ld hrandf();
#line 70 "game.cpp"
  int hrandstate();
#line 75 "game.cpp"
  extern int lastsafety;
#line 77 "game.cpp"
  extern bool usedSafety;
#line 78 "game.cpp"
  extern eLand safetyland;
#line 79 "game.cpp"
  extern int safetyseed;
#line 81 "game.cpp"
  extern bool childbug;
#line 84 "game.cpp"
  bool isChild(cell *w, cell *killed);
#line 105 "game.cpp"
  eMonster active_switch();
#line 109 "game.cpp"
  extern vector<cell*> crush_now, crush_next;
#line 111 "game.cpp"
  int getDistLimit();
#line 113 "game.cpp"
  extern void activateFlashFrom(cell *cf, eMonster who, flagtype flags);
#line 115 "game.cpp"
  bool saved_tortoise_on(cell *c);
#line 121 "game.cpp"
  bool normal_gravity_at(cell *c);
#line 125 "game.cpp"
  int countMyGolems(eMonster m);
#line 134 "game.cpp"
  int savePrincesses();
#line 143 "game.cpp"
  int countMyGolemsHP(eMonster m);
#line 152 "game.cpp"
  void restoreGolems(int qty, eMonster m, int hp IS(0));
#line 167 "game.cpp"
  extern cellwalker recallCell;
#line 168 "game.cpp"
  extern display_data recallDisplay;
#line 170 "game.cpp"
  bool activateRecall();
#line 213 "game.cpp"
  void saveRecall(cellwalker cw2);
#line 220 "game.cpp"
  void activateSafety(eLand l);
#line 257 "game.cpp"
  void placeGolem(cell *on, cell *moveto, eMonster m);
#line 289 "game.cpp"
  bool multiRevival(cell *on, cell *moveto);
#line 310 "game.cpp"
  extern eMonster passive_switch;
#line 312 "game.cpp"
  void checkSwitch();
#line 316 "game.cpp"
  void pushThumper(const movei& mi);
#line 364 "game.cpp"
  bool canPushThumperOn(cell *tgt, cell *thumper, cell *player);
#line 377 "game.cpp"
  void activateActiv(cell *c, bool msg);
#line 397 "game.cpp"
  void fixWormBug(cell *c);
#line 405 "game.cpp"
  bool isWormhead(eMonster m);
#line 411 "game.cpp"
  cell *worm_tohead(cell *c);
#line 418 "game.cpp"
  cell *wormhead(cell *c);
#line 434 "game.cpp"
  bool sameMonster(cell *c1, cell *c2);
#line 444 "game.cpp"
  eMonster haveMount();
#line 452 "game.cpp"
  eMonster otherpole(eMonster m);

  // implemented in: geom-exp.cpp

#line 112 "geom-exp.cpp"
  extern string bitruncnames[5];
#line 123 "geom-exp.cpp"
  extern bool showquotients;
#line 218 "geom-exp.cpp"
  struct geometry_filter {
  string name;
  /** test if the current geometry matches the filter */
  function<bool()> test; 
  };
#line 225 "geom-exp.cpp"
  extern geometry_filter *current_filter;
#line 229 "geom-exp.cpp"
  extern geometry_filter gf_hyperbolic;
#line 230 "geom-exp.cpp"
  extern geometry_filter gf_spherical;
#line 231 "geom-exp.cpp"
  extern geometry_filter gf_euclidean;
#line 232 "geom-exp.cpp"
  extern geometry_filter gf_other;
#line 233 "geom-exp.cpp"
  extern geometry_filter gf_regular_2d;
#line 236 "geom-exp.cpp"
  extern geometry_filter gf_regular_3d;
#line 240 "geom-exp.cpp"
  extern geometry_filter gf_quotient;
#line 381 "geom-exp.cpp"
  string current_proj_name();
#line 403 "geom-exp.cpp"
  string dim_name();
  #if CAP_THREAD
#line 408 "geom-exp.cpp"
  void showQuotientConfig3();
  #endif
#line 467 "geom-exp.cpp"
  string geometry_name();
#line 506 "geom-exp.cpp"
  void select_quotient_screen();
#line 550 "geom-exp.cpp"
  void select_quotient();
#line 582 "geom-exp.cpp"
  string full_geometry_name();
#line 593 "geom-exp.cpp"
  void showEuclideanMenu();
#line 932 "geom-exp.cpp"
  void runGeometryExperiments();

  // implemented in: geometry2.cpp

#line 13 "geometry2.cpp"
  void fixelliptic(transmatrix& at);
#line 20 "geometry2.cpp"
  void fixelliptic(hyperpoint& h);
#line 26 "geometry2.cpp"
  transmatrix relative_matrix_recursive(heptagon *h2, heptagon *h1);
#line 55 "geometry2.cpp"
  transmatrix master_relative(cell *c, bool get_inverse IS(false));
#line 88 "geometry2.cpp"
  transmatrix calc_relative_matrix(cell *c2, cell *c1, const hyperpoint& hint);
#line 198 "geometry2.cpp"
  transmatrix &ggmatrix(cell *c);
#line 206 "geometry2.cpp"
  struct horo_distance {
  ld a, b;
  
  void become(hyperpoint h1);
  horo_distance(hyperpoint h) { become(h); }
  horo_distance(hyperpoint h1, const transmatrix& T);
  bool operator < (const horo_distance z) const;
  friend void print(hstream& hs, horo_distance x) { print(hs, "[", x.a, ":", x.b, "]"); }
  };
#line 311 "geometry2.cpp"
  void virtualRebase(cell*& base, transmatrix& at);
#line 315 "geometry2.cpp"
  void virtualRebase(cell*& base, hyperpoint& h);
#line 358 "geometry2.cpp"
  bool no_easy_spin();
#line 378 "geometry2.cpp"
  transmatrix ddspin(cell *c, int d, ld bonus IS(0));
#line 379 "geometry2.cpp"
  transmatrix iddspin(cell *c, int d, ld bonus IS(0));
#line 380 "geometry2.cpp"
  ld cellgfxdist(cell *c, int d);
#line 427 "geometry2.cpp"
  double randd();
#line 429 "geometry2.cpp"
  hyperpoint randomPointIn(int t);
#line 444 "geometry2.cpp"
  hyperpoint get_corner_position(cell *c, int cid, ld cf IS(3));
#line 501 "geometry2.cpp"
  extern bool approx_nearcorner;
#line 503 "geometry2.cpp"
  hyperpoint nearcorner(cell *c, int i);
#line 595 "geometry2.cpp"
  hyperpoint farcorner(cell *c, int i, int which);
#line 658 "geometry2.cpp"
  hyperpoint midcorner(cell *c, int i, ld v);
#line 664 "geometry2.cpp"
  hyperpoint get_warp_corner(cell *c, int cid);

  // implemented in: glhr.cpp

#line 20 "glhr.cpp"
  void glError(const char* GLcall, const char* file, const int line);
#line 32 "glhr.cpp"
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
#line 46 "glhr.cpp"
    struct glmatrix {
    GLfloat a[4][4];
    GLfloat* operator[] (int i) { return a[i]; }
    const GLfloat* operator[] (int i) const { return a[i]; }
    GLfloat* as_array() { return a[0]; }
    const GLfloat* as_array() const { return a[0]; }
    array<float, 16>& as_stdarray() { return *(array<float, 16>*)this; }
    const array<float, 16>& as_stdarray() const { return *(array<float, 16>*)this; }
    };
    
    glvertex pointtogl(const hyperpoint& t);
    
    inline glvertex makevertex(GLfloat x, GLfloat y, GLfloat z) {
    #if SHDIM == 3
    return make_array(x, y, z);
    #else
    return make_array<GLfloat>(x, y, z, 1);
    #endif
    }
    
    struct colored_vertex {
    glvertex coords;
    glvec4 color;
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
    glvec2 texture;
    };
    
    struct ct_vertex {
    glvertex coords;
    glvec4 color;
    glvec2 texture;
    ct_vertex(const hyperpoint& h, ld x1, ld y1, ld col) {
    coords = pointtogl(h);
    texture[0] = x1;
    texture[1] = y1;
    color[0] = color[1] = color[2] = col;
    color[3] = 1;
    }
    };  
    
    #if CAP_SHADER
#line 107 "glhr.cpp"
    extern bool noshaders;
#line 109 "glhr.cpp"
    extern bool noshaders;
    #endif
#line 118 "glhr.cpp"
    typedef const void *constvoidptr;
#line 121 "glhr.cpp"
    extern constvoidptr current_vertices, buffered_vertices;
#line 122 "glhr.cpp"
    extern ld current_linewidth;
#line 146 "glhr.cpp"
    extern glmatrix id;
#line 148 "glhr.cpp"
    glmatrix scale(ld x, ld y, ld z);
#line 159 "glhr.cpp"
    glmatrix tmtogl(const transmatrix& T);
#line 167 "glhr.cpp"
    glmatrix tmtogl_transpose(const transmatrix& T);
#line 175 "glhr.cpp"
    glmatrix tmtogl_transpose3(const transmatrix& T);
#line 187 "glhr.cpp"
    glmatrix ortho(ld x, ld y, ld z);
#line 191 "glhr.cpp"
    glmatrix& as_glmatrix(GLfloat o[16]);
#line 197 "glhr.cpp"
    constexpr ld vnear_default = 1e-3;
    constexpr ld vfar_default = 1e9;
#line 201 "glhr.cpp"
    glmatrix frustum(ld x, ld y, ld vnear IS(vnear_default), ld vfar IS(vfar_default));
#line 210 "glhr.cpp"
    glmatrix translate(ld x, ld y, ld z);
#line 227 "glhr.cpp"
    void new_projection();
#line 239 "glhr.cpp"
    void projection_multiply(const glmatrix& m);
#line 248 "glhr.cpp"
    extern void init();
#line 251 "glhr.cpp"
    struct GLprogram {
    GLuint _program;
    GLuint vertShader, fragShader;
    
    GLint uFog, uFogColor, uColor, tTexture, tInvExpTable, uMV, uProjection, uAlpha, uFogBase, uPP;
    GLint uPRECX, uPRECY, uPRECZ, uIndexSL, uIterations, uLevelLines;
    
    flagtype shader_flags;
    
    string _vsh, _fsh;
    
    GLprogram(string vsh, string fsh);
    
    ~GLprogram();
    };
#line 268 "glhr.cpp"
    extern shared_ptr<GLprogram> current_glprogram;
#line 270 "glhr.cpp"
    extern bool debug_gl;
#line 272 "glhr.cpp"
    int compileShader(int type, const string& s);
#line 389 "glhr.cpp"
    void set_index_sl(ld x);
#line 393 "glhr.cpp"
    void set_sl_iterations(int steps);
#line 397 "glhr.cpp"
    void set_solv_prec(int x, int y, int z);
#line 404 "glhr.cpp"
    extern glmatrix current_matrix, current_modelview, current_projection;
#line 417 "glhr.cpp"
    extern glmatrix eyeshift;
#line 418 "glhr.cpp"
    extern bool using_eyeshift;
#line 420 "glhr.cpp"
    void set_modelview(const glmatrix& modelview);
#line 449 "glhr.cpp"
    void id_modelview();
#line 460 "glhr.cpp"
    array<GLfloat, 4> acolor(color_t color, ld scale IS(1));
#line 468 "glhr.cpp"
    void color2(color_t color, ld scale IS(1));
#line 480 "glhr.cpp"
    void colorClear(color_t color);
#line 484 "glhr.cpp"
    void full_enable(shared_ptr<GLprogram> p);
#line 586 "glhr.cpp"
    void fog_max(ld fogmax, color_t fogcolor);
#line 601 "glhr.cpp"
    void set_fogbase(ld _fogbase);
#line 610 "glhr.cpp"
    void set_ualpha(ld alpha);
#line 648 "glhr.cpp"
    hyperpoint gltopoint(const glvertex& t);
#line 655 "glhr.cpp"
    glvertex pointtogl(const hyperpoint& t);
#line 676 "glhr.cpp"
    void vertices(const vector<glvertex>& v, int vshift IS(0));
#line 697 "glhr.cpp"
    void vertices_texture(const vector<glvertex>& v, const vector<glvertex>& t, int vshift IS(0), int tshift IS(0));
#line 715 "glhr.cpp"
    void prepare(vector<colored_vertex>& v);
#line 733 "glhr.cpp"
    void prepare(vector<textured_vertex>& v);
#line 752 "glhr.cpp"
    void prepare(vector<ct_vertex>& v);
#line 773 "glhr.cpp"
    void store_in_buffer(vector<glvertex>& v);
#line 788 "glhr.cpp"
    void set_depthtest(bool b);
#line 797 "glhr.cpp"
    void set_depthwrite(bool b);
#line 805 "glhr.cpp"
    void set_linewidth(ld lw);
#line 812 "glhr.cpp"
    void switch_to_text(const vector<glvertex>& v, const vector<glvertex>& t);
#line 819 "glhr.cpp"
    void be_nontextured();
#line 820 "glhr.cpp"
    void be_textured();
    }
#line 824 "glhr.cpp"
  extern vector<glhr::textured_vertex> text_vertices;
#line 826 "glhr.cpp"
  void texture_vertices(GLfloat *f, int qty, int stride IS(2));
#line 833 "glhr.cpp"
  void oldvertices(GLfloat *f, int qty);

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
#line 181 "help.cpp"
  string standard_help();
#line 185 "help.cpp"
  void buildCredits();
#line 232 "help.cpp"
  string helptitle(string s, color_t col);
#line 304 "help.cpp"
  string generateHelpForItem(eItem it);
#line 503 "help.cpp"
  string generateHelpForWall(eWall w);
#line 523 "help.cpp"
  string generateHelpForMonster(eMonster m);
#line 643 "help.cpp"
  string generateHelpForLand(eLand l);
#line 737 "help.cpp"
  extern bool instat;
#line 745 "help.cpp"
  string bygen(reaction_t h);
#line 764 "help.cpp"
  void appendHelp(string s);
#line 775 "help.cpp"
  extern hookset<void(cell*)> *hooks_mouseover;
#line 777 "help.cpp"
  void describeMouseover();
#line 967 "help.cpp"
  void showHelp();
#line 1020 "help.cpp"
  extern hookset<bool()> *hooks_default_help;
#line 1022 "help.cpp"
  void gotoHelp(const string& h);
#line 1044 "help.cpp"
  void subhelp(const string& h);
#line 1057 "help.cpp"
  void gotoHelpFor(eLand l);

  // implemented in: heptagon.cpp

#line 27 "heptagon.cpp"
  hstate transition(hstate s, int dir);
#line 72 "heptagon.cpp"
  heptagon *buildHeptagon1(heptagon *h, heptagon *parent, int d, hstate s, int pard IS(0));
#line 220 "heptagon.cpp"
  extern hookset<void(heptagon*, int)> *hooks_createStep;

  // implemented in: history.cpp

  namespace history {
#line 153 "history.cpp"
    void progress_screen();
#line 158 "history.cpp"
    void progress(string str);
#line 170 "history.cpp"
    extern bool on;
#line 171 "history.cpp"
    extern vector<shmup::monster*> v;
#line 173 "history.cpp"
    extern double phase;
#line 175 "history.cpp"
    extern vector<pair<cell*, eMonster> > killhistory;
#line 176 "history.cpp"
    extern vector<pair<cell*, eItem> > findhistory;
#line 177 "history.cpp"
    extern vector<cell*> movehistory;
#line 179 "history.cpp"
    extern bool includeHistory;
#line 180 "history.cpp"
    extern ld lvspeed;
#line 181 "history.cpp"
    extern int bandhalf;
#line 182 "history.cpp"
    extern int bandsegment;
#line 184 "history.cpp"
    extern bool autoband;
#line 185 "history.cpp"
    extern bool autobandhistory;
#line 186 "history.cpp"
    extern bool dospiral;
#line 188 "history.cpp"
    extern ld extra_line_steps;
#line 190 "history.cpp"
    extern vector<cell*> path_for_lineanimation;
#line 192 "history.cpp"
    void clear();
#line 199 "history.cpp"
    void create(cell *start, cell *target, transmatrix last);
#line 259 "history.cpp"
    void create_playerpath();
#line 263 "history.cpp"
    void create_recenter_to_view(bool precise);
#line 268 "history.cpp"
    void movetophase();
#line 312 "history.cpp"
    void apply();
    #if CAP_SDL
#line 352 "history.cpp"
    void createImage(bool dospiral);
    #endif
#line 477 "history.cpp"
    bool band_renderable_now();
#line 481 "history.cpp"
    void history_menu();
#line 574 "history.cpp"
    extern set<cell*> inmovehistory, inkillhistory, infindhistory;
#line 576 "history.cpp"
    void restore();
#line 598 "history.cpp"
    void restoreBack();
#line 613 "history.cpp"
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
  bool graphglyph();
#line 329 "hud.cpp"
  extern bool nohud, nomenukey;
#line 331 "hud.cpp"
  extern hookset<bool()> *hooks_prestats;
#line 374 "hud.cpp"
  extern bool nofps;
#line 376 "hud.cpp"
  extern color_t crosshair_color;
#line 377 "hud.cpp"
  extern ld crosshair_size;
#line 379 "hud.cpp"
  extern bool long_kills;
#line 381 "hud.cpp"
  void drawStats();

  // implemented in: hyper-main.cpp

#line 32 "hyper-main.cpp"
  extern hookset<bool(int argc, char** argv)> *hooks_main;
#line 34 "hyper-main.cpp"
  int hyper_main(int argc, char **argv);

  // implemented in: hyperweb.cpp

  #if CAP_URL
#line 80 "hyperweb.cpp"
  void open_url(string s);
  #endif

  // implemented in: hypgraph.cpp

#line 15 "hypgraph.cpp"
  inline bool sphereflipped() { return sphere && vid.alpha > 1.1 && GDIM == 3; }
#line 24 "hypgraph.cpp"
  void camrotate(ld& hx, ld& hy);
#line 32 "hypgraph.cpp"
  bool non_spatial_model();
#line 40 "hypgraph.cpp"
  hyperpoint perspective_to_space(hyperpoint h, ld alpha IS(vid.alpha), eGeometryClass gc IS(ginf[geometry].cclass));
#line 73 "hypgraph.cpp"
  hyperpoint space_to_perspective(hyperpoint z, ld alpha IS(vid.alpha));
#line 86 "hypgraph.cpp"
  hyperpoint gethyper(ld x, ld y);
#line 171 "hypgraph.cpp"
  ld atan2(hyperpoint h);
#line 310 "hypgraph.cpp"
  ld signed_sqrt(ld x);
#line 312 "hypgraph.cpp"
  void applymodel(hyperpoint H, hyperpoint& ret);
#line 884 "hypgraph.cpp"
  extern transmatrix sphereflip; // on the sphere, flip
#line 885 "hypgraph.cpp"
  extern bool playerfound; // has player been found in the last drawing?
#line 887 "hypgraph.cpp"
  bool outofmap(hyperpoint h);
#line 898 "hypgraph.cpp"
  hyperpoint mirrorif(const hyperpoint& V, bool b);
#line 903 "hypgraph.cpp"
  transmatrix mirrorif(const transmatrix& V, bool b);
#line 909 "hypgraph.cpp"
  int away(const transmatrix& V2);
#line 920 "hypgraph.cpp"
  double zgrad0(double l1, double l2, int nom, int den);
#line 925 "hypgraph.cpp"
  bool behindsphere(const hyperpoint& h);
#line 947 "hypgraph.cpp"
  ld spherity(const hyperpoint& h);
#line 961 "hypgraph.cpp"
  bool behindsphere(const transmatrix& V);
#line 965 "hypgraph.cpp"
  ld spherity(const transmatrix& V);
#line 969 "hypgraph.cpp"
  bool confusingGeometry();
#line 973 "hypgraph.cpp"
  ld master_to_c7_angle();
#line 983 "hypgraph.cpp"
  transmatrix actualV(const heptspin& hs, const transmatrix& V);
#line 1000 "hypgraph.cpp"
  bool point_behind(hyperpoint h);
#line 1013 "hypgraph.cpp"
  bool invalid_matrix(const transmatrix T);
#line 1025 "hypgraph.cpp"
  bool invalid_point(const hyperpoint h);
#line 1029 "hypgraph.cpp"
  bool in_smart_range(const transmatrix& T);
#line 1146 "hypgraph.cpp"
  bool drawcell_subs(cell *c, transmatrix V);
#line 1252 "hypgraph.cpp"
  void spinEdge(ld aspd);
#line 1305 "hypgraph.cpp"
  void centerpc(ld aspd);
#line 1394 "hypgraph.cpp"
  void optimizeview();
#line 1435 "hypgraph.cpp"
  void resetview();
#line 1470 "hypgraph.cpp"
  void panning(hyperpoint hf, hyperpoint ht);
#line 1476 "hypgraph.cpp"
  extern int cells_drawn, cells_generated;
#line 1478 "hypgraph.cpp"
  void fullcenter();
#line 1503 "hypgraph.cpp"
  eModel flat_model();
#line 1505 "hypgraph.cpp"
  transmatrix atscreenpos(ld x, ld y, ld size);
#line 1548 "hypgraph.cpp"
  extern color_t periodcolor;
#line 1549 "hypgraph.cpp"
  extern color_t ringcolor;
#line 1550 "hypgraph.cpp"
  extern color_t modelcolor;
  #if CAP_QUEUE
#line 1553 "hypgraph.cpp"
  void draw_model_elements();
#line 1683 "hypgraph.cpp"
  void draw_boundary(int w);
  #endif
#line 1883 "hypgraph.cpp"
  extern ld band_shift;
#line 1884 "hypgraph.cpp"
  void fix_the_band(transmatrix& T);
#line 1904 "hypgraph.cpp"
  struct bandfixer {
  dynamicval<ld> bw;
  bandfixer(transmatrix& T) : bw(band_shift, band_shift) { fix_the_band(T); }
  };
  namespace dq {
#line 1911 "hypgraph.cpp"
    extern queue<tuple<heptagon*, transmatrix, ld>> drawqueue;
#line 1913 "hypgraph.cpp"
    extern set<heptagon*> visited;
#line 1914 "hypgraph.cpp"
    void enqueue(heptagon *h, const transmatrix& T);
#line 1920 "hypgraph.cpp"
    extern set<int> visited_by_matrix;
#line 1921 "hypgraph.cpp"
    void enqueue_by_matrix(heptagon *h, const transmatrix& T);
#line 1930 "hypgraph.cpp"
    extern queue<tuple<cell*, transmatrix, ld>> drawqueue_c;
#line 1932 "hypgraph.cpp"
    void enqueue_by_matrix_c(cell *c, const transmatrix& T);
    }
#line 1944 "hypgraph.cpp"
  bool do_draw(cell *c);
#line 1956 "hypgraph.cpp"
  extern ld extra_generation_distance;
#line 1967 "hypgraph.cpp"
  bool do_draw(cell *c, const transmatrix& T);
#line 2030 "hypgraph.cpp"
  int cone_side(const hyperpoint H);
#line 2059 "hypgraph.cpp"
  transmatrix& get_view_orientation();
#line 2064 "hypgraph.cpp"
  void rotate_view(transmatrix T);
#line 2071 "hypgraph.cpp"
  transmatrix get_shift_view_of(const hyperpoint H, const transmatrix V);
#line 2087 "hypgraph.cpp"
  void shift_view(hyperpoint H);
#line 2106 "hypgraph.cpp"
  void shift_view_to(hyperpoint H);
#line 2111 "hypgraph.cpp"
  void shift_view_towards(hyperpoint H, ld l);

  // implemented in: inforder.cpp

  namespace inforder {
#line 16 "inforder.cpp"
    bool in();
#line 18 "inforder.cpp"
    bool mixed();
#line 20 "inforder.cpp"
    extern int alt_degree;
#line 42 "inforder.cpp"
    hrmap* new_map();
#line 44 "inforder.cpp"
    int celldistance(cell *c1, cell *c2);
    }

  // implemented in: inventory.cpp

  namespace inv {
    #if CAP_INV
#line 14 "inventory.cpp"
    extern bool on;
#line 15 "inventory.cpp"
    extern array<int, ittypes> usedup;
#line 16 "inventory.cpp"
    extern array<int, ittypes> remaining;
#line 17 "inventory.cpp"
    extern array<int, ittypes> extra_orbs;
#line 19 "inventory.cpp"
    extern int rseed;
#line 20 "inventory.cpp"
    extern bool usedForbidden;
#line 23 "inventory.cpp"
    void init();
#line 117 "inventory.cpp"
    extern eItem whichorbinfo;
#line 118 "inventory.cpp"
    extern string orbinfoline, extra;
#line 269 "inventory.cpp"
    void compute();
#line 413 "inventory.cpp"
    extern const char* helptext;
#line 461 "inventory.cpp"
    string osminfo(eItem orb);
#line 469 "inventory.cpp"
    extern bool activating;
#line 471 "inventory.cpp"
    void show();
    #if CAP_SAVE
#line 675 "inventory.cpp"
    void applyBox(eItem it);
    #endif
#line 680 "inventory.cpp"
    extern int incheck;
#line 682 "inventory.cpp"
    void check(int delta);
    #endif
    #if !CAP_INV
#line 694 "inventory.cpp"
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
#line 105 "irregular.cpp"
    extern map<heptagon*, vector<int> > cells_of_heptagon;
#line 122 "irregular.cpp"
    extern hrmap *base;
#line 124 "irregular.cpp"
    extern euc::torus_config_full base_config;
#line 132 "irregular.cpp"
    extern int bitruncations_requested;
#line 133 "irregular.cpp"
    extern int bitruncations_performed;
#line 542 "irregular.cpp"
    void compute_geometry();
#line 576 "irregular.cpp"
    struct heptinfo {
    heptspin base;
    vector<cell*> subcells;
    vector<int> celldists[2];
    };
#line 583 "irregular.cpp"
    extern map<heptagon*, heptinfo> periodmap;
#line 585 "irregular.cpp"
    void link_to_base(heptagon *h, heptspin base);
#line 597 "irregular.cpp"
    void clear_links(heptagon *h);
#line 608 "irregular.cpp"
    void link_start(heptagon *h);
#line 612 "irregular.cpp"
    void link_next(heptagon *parent, int d);
#line 621 "irregular.cpp"
    void may_link_next(heptagon *parent, int d);
#line 627 "irregular.cpp"
    void link_cell(cell *c, int d);
#line 810 "irregular.cpp"
    int celldist(cell *c, bool alts);
#line 1013 "irregular.cpp"
    void visual_creator();
#line 1041 "irregular.cpp"
    void auto_creator();
#line 1090 "irregular.cpp"
    unsigned char density_code();
#line 1099 "irregular.cpp"
    bool pseudohept(cell* c);
#line 1103 "irregular.cpp"
    bool ctof(cell* c);
#line 1107 "irregular.cpp"
    bool supports(eGeometry g);
#line 1112 "irregular.cpp"
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
#line 49 "items.cpp"
  void pickupMovedItems(cell *c);
#line 59 "items.cpp"
  bool collectItem(cell *c2, bool telekinesis IS(false));
#line 282 "items.cpp"
  void glance_message();
#line 299 "items.cpp"
  void dropGreenStone(cell *c);
#line 332 "items.cpp"
  void moveItem1(cell *from, cell *to, bool activateYendor);
#line 360 "items.cpp"
  void moveItem (cell *from, cell *to, bool activateYendor);
#line 368 "items.cpp"
  bool itemHidden(cell *c);
#line 372 "items.cpp"
  eItem localTreasureType();
#line 377 "items.cpp"
  void countLocalTreasure();
#line 390 "items.cpp"
  static const int NO_TREASURE = 1;
  static const int NO_YENDOR = 2;
  static const int NO_GRAIL = 4;
  static const int NO_LOVE = 8;
#line 396 "items.cpp"
  int gold(int no IS(0));
#line 419 "items.cpp"
  int maxgold();
#line 427 "items.cpp"
  void updateHi(eItem it, int v);
#line 433 "items.cpp"
  void gainItem(eItem it);
#line 493 "items.cpp"
  string itemcounter(int qty);
#line 497 "items.cpp"
  void gainShard(cell *c2, const char *msg);
#line 510 "items.cpp"
  void placeItems(int qty, eItem it);
#line 519 "items.cpp"
  bool cantGetGrimoire(cell *c2, bool verbose IS(true));
#line 530 "items.cpp"
  void gainLife();
#line 535 "items.cpp"
  void collectMessage(cell *c2, eItem which);
#line 653 "items.cpp"
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
    hyperpoint get_corner(cell *c, int d, ld cf);
#line 81 "kite.cpp"
    pair<vector<vector<hyperpoint>>, vector<vector<ld>>> make_walls();
#line 141 "kite.cpp"
    extern bool no_adj;
#line 383 "kite.cpp"
    hrmap *new_map();
#line 390 "kite.cpp"
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
#line 270 "landgen.cpp"
  void giantLandSwitch(cell *c, int d, cell *from);
#line 2754 "landgen.cpp"
  void repairLandgen(cell *c);
#line 2806 "landgen.cpp"
  void setland_randomwalk(cell *c);
#line 2816 "landgen.cpp"
  void setdist(cell *c, int d, cell *from);

  // implemented in: landlock.cpp

#line 11 "landlock.cpp"
  bool in_full_game();
#line 23 "landlock.cpp"
  bool nodisplay(eMonster m);
#line 33 "landlock.cpp"
  int isNative(eLand l, eMonster m);
#line 44 "landlock.cpp"
  eItem treasureType(eLand l);
#line 46 "landlock.cpp"
  eItem treasureTypeUnlock(eLand l, eItem u);
#line 52 "landlock.cpp"
  eLand landof(eItem it);
#line 57 "landlock.cpp"
  int landMultiplier(eLand l);
#line 62 "landlock.cpp"
  bool isCrossroads(eLand l);
#line 67 "landlock.cpp"
  bool bearsCamelot(eLand l);
#line 71 "landlock.cpp"
  bool inmirror(const cellwalker& cw);
#line 75 "landlock.cpp"
  eLand oppositeElement(eLand l, eLand l2);
#line 87 "landlock.cpp"
  extern eLand firstland;
#line 88 "landlock.cpp"
  extern eLand specialland;
#line 90 "landlock.cpp"
  extern int chaosmode;
#line 92 "landlock.cpp"
  bool landUnlockedRPM(eLand n);
#line 99 "landlock.cpp"
  int variant_unlock_value();
#line 103 "landlock.cpp"
  bool landUnlocked(eLand l);
#line 135 "landlock.cpp"
  bool required_for_hyperstones(eItem ttype);
#line 145 "landlock.cpp"
  void countHyperstoneQuest(int& i1, int& i2);
#line 155 "landlock.cpp"
  bool hyperstonesUnlocked();
#line 163 "landlock.cpp"
  int isRandland(eLand l);
#line 170 "landlock.cpp"
  bool incompatible1(eLand l1, eLand l2);
#line 194 "landlock.cpp"
  eLand randomElementalLand();
#line 200 "landlock.cpp"
  int elementalKills();
#line 205 "landlock.cpp"
  eLand randomElementalLandWeighted();
#line 215 "landlock.cpp"
  bool incompatible(eLand nw, eLand old);
#line 219 "landlock.cpp"
  bool rlyehComplete();
#line 230 "landlock.cpp"
  eLand pickLandRPM(eLand old);
#line 238 "landlock.cpp"
  eLand pickluck(eLand l1, eLand l2);
#line 258 "landlock.cpp"
  eLand getNewSealand(eLand old);
#line 270 "landlock.cpp"
  bool createOnSea(eLand old);
#line 279 "landlock.cpp"
  extern hookset<eLand(eLand)> *hooks_nextland;
#line 281 "landlock.cpp"
  eLand getNewLand(eLand old);
#line 482 "landlock.cpp"
  extern vector<eLand> land_over;
#line 505 "landlock.cpp"
  extern vector<eLand> landlist;
#line 508 "landlock.cpp"
  template<class T> void generateLandList(T t) {
  landlist.clear();
  for(auto l: land_over) if(t(l)) landlist.push_back(l);    
  }
#line 515 "landlock.cpp"
  namespace lv {
  static const flagtype appears_in_geom_exp = 1;
  static const flagtype display_error_message = 2;
  static const flagtype appears_in_full = 4;
  static const flagtype appears_in_ptm = 8;
  static const flagtype display_in_help = 16;
  static const flagtype one_and_half = 32;
  };
  
  struct land_validity_t {
  int quality_level; // 0 (dont show), 1 (1/2), 2 (ok), 3(1!)
  flagtype flags;
  string msg;
  };
#line 531 "landlock.cpp"
  eLand getLandForList(cell *c);
#line 544 "landlock.cpp"
  bool isLandIngame(eLand l);
#line 623 "landlock.cpp"
  extern int old_daily_id;
#line 627 "landlock.cpp"
  extern const int frog_when;
#line 630 "landlock.cpp"
  land_validity_t& land_validity(eLand l);

  // implemented in: language-data.cpp

#line 780 "language-data.cpp"
  #if CAP_TRANS
  #define NUMEXTRA 151
  #define NATCHARS {"°","²","´","½","Á","Ä","Ç","È","É","Í","Î","Ö","Ú","Ü","ß","à","á","â","ã","ä","ç","è","é","ê","ì","í","î","ï","ò","ó","ô","õ","ö","ø","ù","ú","ü","ý","ą","ć","Č","č","Ď","ď","Ę","ę","Ě","ě","ğ","İ","ı","Ł","ł","ń","ň","Ř","ř","Ś","ś","Ş","ş","Š","š","Ť","ť","ů","Ź","ź","Ż","ż","Ž","ž","Θ","δ","λ","π","ϕ","Ё","А","Б","В","Г","Д","Е","Ж","З","И","Й","К","Л","М","Н","О","П","Р","С","Т","У","Ф","Х","Ц","Ч","Ш","Щ","Ы","Ь","Э","Ю","Я","а","б","в","г","д","е","ж","з","и","й","к","л","м","н","о","п","р","с","т","у","ф","х","ц","ч","ш","щ","ъ","ы","ь","э","ю","я","ё","ᵈ","ᶻ","⁻","←","→","∞","⌫","⏎","�",};
  extern const char* natchars[NUMEXTRA];
  #endif
#line 789 "language-data.cpp"
  extern int transcompleteness[NUMLAN];

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
#line 206 "mapeffects.cpp"
  bool earthWall(cell *c);
#line 285 "mapeffects.cpp"
  bool applyColor(cell *c);
#line 318 "mapeffects.cpp"
  bool snakepile(cell *c, eMonster m);
#line 389 "mapeffects.cpp"
  bool makeflame(cell *c, int timeout, bool checkonly);
#line 464 "mapeffects.cpp"
  void explosion(cell *c, int power, int central);
#line 506 "mapeffects.cpp"
  void explodeMine(cell *c);
#line 516 "mapeffects.cpp"
  void explodeBarrel(cell *c);
#line 525 "mapeffects.cpp"
  bool mayExplodeMine(cell *c, eMonster who);
#line 532 "mapeffects.cpp"
  void flameHalfvine(cell *c, int val);
#line 542 "mapeffects.cpp"
  bool destroyHalfvine(cell *c, eWall newwall IS(waNone), int tval IS(6));
#line 558 "mapeffects.cpp"
  int coastvalEdge(cell *c);
#line 560 "mapeffects.cpp"
  int gravityLevel(cell *c);
#line 570 "mapeffects.cpp"
  int gravityLevelDiff(cell *c, cell *d);
#line 588 "mapeffects.cpp"
  bool canUnstable(eWall w, flagtype flags);
#line 594 "mapeffects.cpp"
  bool cellEdgeUnstable(cell *c, flagtype flags IS(0));
#line 618 "mapeffects.cpp"
  extern int tidalsize, tide[200];
#line 620 "mapeffects.cpp"
  void calcTidalPhase();
#line 652 "mapeffects.cpp"
  int tidespeed();
#line 656 "mapeffects.cpp"
  extern bool recalcTide;
#line 659 "mapeffects.cpp"
  #define SEADIST LHU.bytes[0]
  #define LANDDIST LHU.bytes[1]
  #define CHAOSPARAM LHU.bytes[2]
  #if CAP_FIELD
#line 665 "mapeffects.cpp"
  int lavatide(cell *c, int t);
  #endif
#line 671 "mapeffects.cpp"
  void checkTide(cell *c);
#line 721 "mapeffects.cpp"
  bool makeEmpty(cell *c);
#line 800 "mapeffects.cpp"
  void toggleGates(cell *c, eWall type, int rad);
#line 828 "mapeffects.cpp"
  void toggleGates(cell *ct, eWall type);
#line 841 "mapeffects.cpp"
  void destroyTrapsOn(cell *c);
#line 849 "mapeffects.cpp"
  void destroyTrapsAround(cell *c);
#line 853 "mapeffects.cpp"
  void destroyWeakBranch(cell *cf, cell *ct, eMonster who);
#line 872 "mapeffects.cpp"
  bool isCentralTrap(cell *c);
#line 879 "mapeffects.cpp"
  array<cell*, 5> traplimits(cell *c);
#line 897 "mapeffects.cpp"
  void activateArrowTrap(cell *c);
#line 908 "mapeffects.cpp"
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
  if(valid(push.cpeek())) return movei(push.at, push.spin);
  }
  return movei(c2, NO_SPACE);
  }
  int pd = push.at->type/2;
  push += pd * -subdir;
  push += wstep;
  if(valid(push.at)) return movei(c2, (push+wstep).spin);
  if(c2->type&1) {
  push = push + wstep - subdir + wstep;
  if(valid(push.at)) return movei(c2, (push+wstep).spin);
  }
  if(gravityLevelDiff(push.at, c2) < 0) {
  push = push + wstep + 1 + wstep;
  if(gravityLevelDiff(push.at, c2) < 0) {
  push = push + wstep - 2 + wstep;
  }
  if(gravityLevelDiff(push.at, c2) < 0) {
  push = push + wstep + 1 + wstep;
  }
  if(valid(push.at)) return movei(c2, (push+wstep).spin);
  }
  return movei(c2, NO_SPACE);
  }
#line 951 "mapeffects.cpp"
  void explodeAround(cell *c);
#line 991 "mapeffects.cpp"
  bool earthMove(const movei& mi);
#line 1005 "mapeffects.cpp"
  bool colorMove(const movei& mi);
#line 1018 "mapeffects.cpp"
  bool cellDangerous(cell *c);

  // implemented in: menus.cpp

#line 15 "menus.cpp"
  extern ld whatever[16];
#line 16 "menus.cpp"
  extern int whateveri[16];
#line 24 "menus.cpp"
  void showOverview();
#line 209 "menus.cpp"
  void showMainMenu();
#line 325 "menus.cpp"
  void editScale();
#line 331 "menus.cpp"
  void showGraphQuickKeys();
#line 375 "menus.cpp"
  void enable_cheat();
#line 399 "menus.cpp"
  void switchHardcore();
#line 413 "menus.cpp"
  void showCreative();
#line 481 "menus.cpp"
  void show_chaos();
#line 521 "menus.cpp"
  void showChangeMode();
#line 634 "menus.cpp"
  extern bool showstartmenu;
#line 636 "menus.cpp"
  bool showHalloween();
#line 663 "menus.cpp"
  void showStartMenu();
#line 950 "menus.cpp"
  typedef pair<string, reaction_t> named_functionality;
  inline named_functionality named_dialog(string x, reaction_t dialog) { return named_functionality(x, [dialog] () { pushScreen(dialog); }); }
#line 954 "menus.cpp"
  extern hookset<named_functionality()> *hooks_o_key;
#line 956 "menus.cpp"
  named_functionality get_o_key();
#line 994 "menus.cpp"
  extern int messagelogpos;
#line 995 "menus.cpp"
  extern int timeformat;
#line 996 "menus.cpp"
  extern int stampbase;
#line 998 "menus.cpp"
  string gettimestamp(msginfo& m);
#line 1022 "menus.cpp"
  void showMessageLog();

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
    extern string formula;
#line 119 "models.cpp"
    extern eModel basic_model;
#line 121 "models.cpp"
    extern ld rotation;
#line 122 "models.cpp"
    extern ld rotation_xz;
#line 123 "models.cpp"
    extern ld rotation_xy2;
#line 124 "models.cpp"
    extern int do_rotate;
#line 125 "models.cpp"
    extern ld model_orientation, halfplane_scale, model_orientation_yz;
#line 126 "models.cpp"
    extern ld clip_min, clip_max;
#line 127 "models.cpp"
    extern ld ocos, osin, ocos_yz, osin_yz;
#line 128 "models.cpp"
    extern ld cos_ball, sin_ball;
#line 129 "models.cpp"
    extern bool model_straight, model_straight_yz;
#line 130 "models.cpp"
    extern ld top_z;
#line 131 "models.cpp"
    extern ld model_transition;
#line 134 "models.cpp"
    // screen coordinates to logical coordinates: apply_orientation(x,y)
    // logical coordinates back to screen coordinates: apply_orientation(y,x)
    template<class A>
    void apply_orientation(A& x, A& y) { if(!model_straight) tie(x,y) = make_pair(x*ocos + y*osin, y*ocos - x*osin); }
    template<class A>
    void apply_orientation_yz(A& x, A& y) { if(!model_straight_yz) tie(x,y) = make_pair(x*ocos_yz + y*osin_yz, y*ocos_yz - x*osin_yz); }
    template<class A>
    void apply_ball(A& x, A& y) { tie(x,y) = make_pair(x*cos_ball + y*sin_ball, y*cos_ball - x*sin_ball); }
#line 144 "models.cpp"
    transmatrix rotmatrix();
#line 149 "models.cpp"
    extern ld spiral_angle;
#line 150 "models.cpp"
    extern ld spiral_x;
#line 151 "models.cpp"
    extern ld spiral_y;
#line 153 "models.cpp"
    extern bool use_atan;
#line 155 "models.cpp"
    extern cld spiral_multiplier;
#line 156 "models.cpp"
    extern ld right_spiral_multiplier;
#line 157 "models.cpp"
    extern ld any_spiral_multiplier;
#line 158 "models.cpp"
    extern ld sphere_spiral_multiplier;
#line 159 "models.cpp"
    extern ld spiral_cone;
#line 160 "models.cpp"
    extern ld spiral_cone_rad;
#line 161 "models.cpp"
    extern bool ring_not_spiral;
#line 164 "models.cpp"
    extern transmatrix euclidean_spin;
#line 166 "models.cpp"
    extern ld product_z_scale;
#line 168 "models.cpp"
    void configure();
#line 207 "models.cpp"
    bool model_available(eModel pm);
#line 225 "models.cpp"
    bool model_has_orientation();
#line 230 "models.cpp"
    bool model_has_transition();
#line 234 "models.cpp"
    bool product_model();
#line 242 "models.cpp"
    string get_model_name(eModel m);
#line 296 "models.cpp"
    void edit_formula();
#line 326 "models.cpp"
    void edit_rotation(ld& which);
#line 350 "models.cpp"
    void model_list();
#line 406 "models.cpp"
    void model_menu();
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
#line 777 "monstergen.cpp"
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
#line 107 "monstermove.cpp"
  void moveMonster(const movei& mi);
#line 334 "monstermove.cpp"
  bool cannotGo(eMonster m, cell *c);
#line 340 "monstermove.cpp"
  bool wantsToStay(eMonster m);
#line 344 "monstermove.cpp"
  bool batsAfraid(cell *c);
#line 363 "monstermove.cpp"
  int angledist(int t, int d1, int d2);
#line 371 "monstermove.cpp"
  int angledistButterfly(int t, int d1, int d2);
#line 377 "monstermove.cpp"
  int angledist(cell *c, int d1, int d2);
#line 381 "monstermove.cpp"
  bool anglestraight(cell *c, int d1, int d2);
#line 385 "monstermove.cpp"
  int bulldist(cell *c);
#line 391 "monstermove.cpp"
  int bulldistance(cell *c, cell *d);
#line 398 "monstermove.cpp"
  int landheattype(cell *c);
#line 408 "monstermove.cpp"
  int moveval(cell *c1, cell *c2, int d, flagtype mf);
#line 531 "monstermove.cpp"
  int stayval(cell *c, flagtype mf);
#line 557 "monstermove.cpp"
  int totalbulldistance(cell *c, int k);
#line 567 "monstermove.cpp"
  void determinizeBull(cell *c, vector<int>& posdir);
#line 584 "monstermove.cpp"
  int determinizeBullPush(cellwalker bull);
#line 600 "monstermove.cpp"
  int pickMoveDirection(cell *c, flagtype mf);
#line 619 "monstermove.cpp"
  int pickDownDirection(cell *c, flagtype mf);
#line 641 "monstermove.cpp"
  void beastAttack(cell *c, bool player, bool targetdir);
#line 677 "monstermove.cpp"
  extern bool quantum;
#line 679 "monstermove.cpp"
  cell *moveNormal(cell *c, flagtype mf);
#line 764 "monstermove.cpp"
  void mountmove(const movei& mi, bool fp);
#line 789 "monstermove.cpp"
  void moveWorm(cell *c);
#line 929 "monstermove.cpp"
  void ivynext(cell *c);
#line 963 "monstermove.cpp"
  void removeIvy(cell *c);
#line 979 "monstermove.cpp"
  void moveivy();
#line 1045 "monstermove.cpp"
  bool isTargetOrAdjacent(cell *c);
#line 1052 "monstermove.cpp"
  void groupmove2(const movei& mi, eMonster movtype, flagtype mf);
#line 1151 "monstermove.cpp"
  void groupmove(eMonster movtype, flagtype mf);
#line 1216 "monstermove.cpp"
  void moveHexSnake(const movei& mi, bool mounted);
#line 1242 "monstermove.cpp"
  void snakeAttack(cell *c, bool mounted);
#line 1253 "monstermove.cpp"
  bool goodmount(cell *c, bool mounted);
#line 1258 "monstermove.cpp"
  int inpair(cell *c, int colorpair);
#line 1262 "monstermove.cpp"
  int snake_pair(cell *c);
#line 1270 "monstermove.cpp"
  void hexvisit(cell *c, cell *from, int d, bool mounted, int colorpair);
#line 1305 "monstermove.cpp"
  void movehex(bool mounted, int colorpair);
#line 1334 "monstermove.cpp"
  void movehex_rest(bool mounted);
#line 1365 "monstermove.cpp"
  void movemutant();
#line 1413 "monstermove.cpp"
  #define SHSIZE 16
#line 1416 "monstermove.cpp"
  extern vector<array<cell*, MAXPLAYER>> shpos;
#line 1417 "monstermove.cpp"
  extern int cshpos;
#line 1419 "monstermove.cpp"
  extern cell *lastmountpos[MAXPLAYER];
#line 1421 "monstermove.cpp"
  void clearshadow();
#line 1427 "monstermove.cpp"
  void moveshadow();
#line 1458 "monstermove.cpp"
  void moveghosts();
#line 1515 "monstermove.cpp"
  int stayvalue(eMonster m, cell *c);
#line 1525 "monstermove.cpp"
  int movevalue(eMonster m, cell *c, cell *c2, flagtype flags);
#line 1618 "monstermove.cpp"
  void movegolems(flagtype flags);
#line 1717 "monstermove.cpp"
  void moveButterflies();
#line 1739 "monstermove.cpp"
  void stormNextTurn(cell *c);
#line 1744 "monstermove.cpp"
  void castWeakLightningBoltFrom(cell *c);
#line 1749 "monstermove.cpp"
  void castWeakLightningBolt(cellwalker lig);
#line 1842 "monstermove.cpp"
  void specialMoves();
#line 2032 "monstermove.cpp"
  void moveworms();
#line 2041 "monstermove.cpp"
  void refreshFriend(cell *c);
#line 2050 "monstermove.cpp"
  void consMove(cell *c, eMonster param);
#line 2076 "monstermove.cpp"
  void moveNormals(eMonster param);
#line 2097 "monstermove.cpp"
  void movehex_all();
#line 2106 "monstermove.cpp"
  void movemonsters();
#line 2228 "monstermove.cpp"
  bool nogoSlow(cell *to, cell *from);
#line 2234 "monstermove.cpp"
  void beastcrash(cell *c, cell *beast);
#line 2266 "monstermove.cpp"
  void stayEffect(cell *c);
#line 2279 "monstermove.cpp"
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
  };
#line 85 "multigame.cpp"
  extern hookset<void(gamedata*)> *hooks_gamedata;
  namespace gamestack {
#line 91 "multigame.cpp"
    bool pushed();
#line 93 "multigame.cpp"
    void push();
#line 98 "multigame.cpp"
    void pop();
    }
  namespace dual {
#line 109 "multigame.cpp"
    extern int state;
#line 112 "multigame.cpp"
    extern bool one_euclidean;
#line 114 "multigame.cpp"
    extern int currently_loaded;
#line 115 "multigame.cpp"
    extern int main_side;
#line 116 "multigame.cpp"
    extern bool affect_both;
#line 119 "multigame.cpp"
    extern transmatrix player_orientation[2];
#line 140 "multigame.cpp"
    transmatrix get_orientation();
#line 149 "multigame.cpp"
    void switch_to(int k);
#line 160 "multigame.cpp"
    bool movepc(int d, int subdir, bool checkonly);
#line 242 "multigame.cpp"
    void in_subscreen(reaction_t what);
#line 248 "multigame.cpp"
    bool split(reaction_t what);
#line 261 "multigame.cpp"
    void enable();
#line 299 "multigame.cpp"
    void disable();
#line 333 "multigame.cpp"
    bool check_side(eLand l);
#line 337 "multigame.cpp"
    void assign_landsides();
#line 405 "multigame.cpp"
    void add_choice();
#line 418 "multigame.cpp"
    void split_or_do(reaction_t what);
#line 423 "multigame.cpp"
    bool may_split(reaction_t what);
#line 431 "multigame.cpp"
    void may_split_or_do(reaction_t what);
#line 440 "multigame.cpp"
    inline reaction_t mayboth(reaction_t what) { return [=] { may_split_or_do(what); }; }
    }

  // implemented in: netgen.cpp

  #if CAP_MODEL
  namespace netgen {
#line 75 "netgen.cpp"
    extern int mode;
#line 77 "netgen.cpp"
    void buildVertexInfo(cell *c, transmatrix V);
#line 718 "netgen.cpp"
    void run();
    }
  #endif

  // implemented in: nonisotropic.cpp

  namespace nisot {
#line 14 "nonisotropic.cpp"
    inline bool local_perspective_used() { return nonisotropic || prod; }
#line 17 "nonisotropic.cpp"
    extern bool geodesic_movement;
#line 19 "nonisotropic.cpp"
    transmatrix translate(hyperpoint h);
    }
  #if !CAP_SOLV
  namespace sn {
#line 45 "nonisotropic.cpp"
    always_false in();
    }
  #endif
  #if CAP_SOLV
  namespace sn {
#line 52 "nonisotropic.cpp"
    bool in();
#line 54 "nonisotropic.cpp"
    eGeometry geom();
#line 60 "nonisotropic.cpp"
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
#line 170 "nonisotropic.cpp"
    ld x_to_ix(ld u);
#line 184 "nonisotropic.cpp"
    ld ix_to_x(ld ix);
#line 196 "nonisotropic.cpp"
    ld z_to_iz(ld z);
#line 202 "nonisotropic.cpp"
    ld iz_to_z(ld iz);
#line 215 "nonisotropic.cpp"
    hyperpoint azeq_to_table(hyperpoint x);
#line 224 "nonisotropic.cpp"
    hyperpoint table_to_azeq(hyperpoint x);
#line 488 "nonisotropic.cpp"
    pair<heptagon*,heptagon*> getcoord(heptagon *h);
#line 492 "nonisotropic.cpp"
    heptagon *get_at(heptagon *h1, heptagon *h2, bool gen);
#line 498 "nonisotropic.cpp"
    extern string common;
#line 555 "nonisotropic.cpp"
    hyperpoint get_inverse_exp_symsol(hyperpoint h, bool lazy, bool just_direction);
#line 576 "nonisotropic.cpp"
    hyperpoint get_inverse_exp_nsym(hyperpoint h, bool lazy, bool just_direction);
#line 594 "nonisotropic.cpp"
    extern string shader_symsol;
#line 625 "nonisotropic.cpp"
    extern string shader_nsymsol;
#line 663 "nonisotropic.cpp"
    extern string shader_nsym;
#line 685 "nonisotropic.cpp"
    extern ld solrange_xy;
#line 686 "nonisotropic.cpp"
    extern ld solrange_z;
#line 688 "nonisotropic.cpp"
    bool in_table_range(hyperpoint h);
#line 692 "nonisotropic.cpp"
    extern tabled_inverses solt;
#line 693 "nonisotropic.cpp"
    extern tabled_inverses niht;
#line 694 "nonisotropic.cpp"
    extern tabled_inverses sont;
#line 696 "nonisotropic.cpp"
    tabled_inverses& get_tabled();
#line 705 "nonisotropic.cpp"
    int approx_distance(heptagon *h1, heptagon *h2);
    }
  #endif
  namespace nilv {
#line 727 "nonisotropic.cpp"
    hyperpoint formula_exp(hyperpoint v);
#line 748 "nonisotropic.cpp"
    hyperpoint get_inverse_exp(hyperpoint h, int iterations);
#line 786 "nonisotropic.cpp"
    extern string nilshader;
#line 813 "nonisotropic.cpp"
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
#line 834 "nonisotropic.cpp"
    extern ld nilwidth;
#line 839 "nonisotropic.cpp"
    struct nilstructure {
    vector<mvec> movevectors;
    vector<vector<hyperpoint>> facevertices;
    };
#line 873 "nonisotropic.cpp"
    nilstructure& current_ns();
#line 875 "nonisotropic.cpp"
    extern array<int,3> nilperiod, nilperiod_edit;
#line 878 "nonisotropic.cpp"
    transmatrix adjmatrix(int i);
#line 956 "nonisotropic.cpp"
    mvec get_coord(heptagon *h);
#line 958 "nonisotropic.cpp"
    heptagon *get_heptagon_at(mvec m);
#line 960 "nonisotropic.cpp"
    void set_flags();
#line 968 "nonisotropic.cpp"
    hyperpoint on_geodesic(hyperpoint s0, hyperpoint s1, ld x);
#line 974 "nonisotropic.cpp"
    color_t colorize(cell *c, char whichCanvas);
#line 995 "nonisotropic.cpp"
    void prepare_niltorus3();
#line 1000 "nonisotropic.cpp"
    void show_niltorus3();
    }
#line 1041 "nonisotropic.cpp"
  bool in_s2xe();
#line 1042 "nonisotropic.cpp"
  bool in_h2xe();
#line 1043 "nonisotropic.cpp"
  bool in_e2xe();
  namespace hybrid {
#line 1047 "nonisotropic.cpp"
    extern eGeometry underlying;
#line 1048 "nonisotropic.cpp"
    extern geometry_information *underlying_cgip;
#line 1050 "nonisotropic.cpp"
    eGeometryClass under_class();
#line 1052 "nonisotropic.cpp"
    void configure(eGeometry g);
#line 1082 "nonisotropic.cpp"
    void reconfigure();
#line 1091 "nonisotropic.cpp"
    extern hrmap *pmap;
#line 1092 "nonisotropic.cpp"
    extern geometry_information *pcgip;
#line 1093 "nonisotropic.cpp"
    extern eGeometry actual_geometry;
#line 1183 "nonisotropic.cpp"
    cell *get_at(cell *base, int level);
#line 1187 "nonisotropic.cpp"
    pair<cell*, int> get_where(cell *c);
#line 1189 "nonisotropic.cpp"
    void find_cell_connection(cell *c, int d);
#line 1206 "nonisotropic.cpp"
    hrmap* get_umap();
#line 1209 "nonisotropic.cpp"
    template<class T> auto in_underlying_geometry(const T& f) -> decltype(f()) {
    if(!hybri) return f();
    dynamicval<eGeometry> g(geometry, underlying);
    dynamicval<eGeometry> gag(actual_geometry, geometry);
    dynamicval<geometry_information*> gc(cgip, underlying_cgip);
    dynamicval<hrmap*> gpm(pmap, currentmap);
    dynamicval<hrmap*> gm(currentmap, get_umap());
    return f();
    }
    
    #define PIU(x) hr::hybrid::in_underlying_geometry([&] { return (x); })
#line 1222 "nonisotropic.cpp"
    hyperpoint get_corner(cell *c, int i, int next, ld z);
#line 1244 "nonisotropic.cpp"
    int wall_offset(cell *c);
#line 1301 "nonisotropic.cpp"
    void will_link(cell *c);
#line 1303 "nonisotropic.cpp"
    extern bool in_link;
#line 1305 "nonisotropic.cpp"
    void link();
#line 1329 "nonisotropic.cpp"
    int celldistance(cell *c1, cell *c2);
    }
  namespace product {
#line 1412 "nonisotropic.cpp"
    extern bool current_spin_invalid;
#line 1414 "nonisotropic.cpp"
    extern int csteps, cspin;
#line 1415 "nonisotropic.cpp"
    extern bool cmirror;
#line 1417 "nonisotropic.cpp"
    hyperpoint inverse_exp(hyperpoint h);
#line 1439 "nonisotropic.cpp"
    hyperpoint direct_exp(hyperpoint h);
#line 1449 "nonisotropic.cpp"
    bool validate_spin();
#line 1471 "nonisotropic.cpp"
    void show_config();
    }
  namespace slr {
#line 1530 "nonisotropic.cpp"
    extern ld range_xy;
#line 1531 "nonisotropic.cpp"
    extern int steps;
#line 1533 "nonisotropic.cpp"
    hyperpoint from_phigans(hyperpoint h);
#line 1541 "nonisotropic.cpp"
    hyperpoint to_phigans(hyperpoint h);
#line 1587 "nonisotropic.cpp"
    transmatrix translate(hyperpoint h);
#line 1596 "nonisotropic.cpp"
    hyperpoint polar(ld r, ld theta, ld phi);
#line 1600 "nonisotropic.cpp"
    hyperpoint xyz_point(ld x, ld y, ld z);
#line 1655 "nonisotropic.cpp"
    hyperpoint formula_exp(hyperpoint h);
#line 1696 "nonisotropic.cpp"
    hyperpoint get_inverse_exp(hyperpoint h, ld index IS(0));
#line 1708 "nonisotropic.cpp"
    extern string slshader;
    }
  namespace rots {
#line 1803 "nonisotropic.cpp"
    transmatrix uxpush(ld x);
#line 1808 "nonisotropic.cpp"
    transmatrix uypush(ld y);
#line 1813 "nonisotropic.cpp"
    transmatrix uzpush(ld z);
#line 1866 "nonisotropic.cpp"
    transmatrix qtm(hyperpoint h);
#line 1902 "nonisotropic.cpp"
    extern ld underlying_scale;
#line 1904 "nonisotropic.cpp"
    void draw_underlying(bool cornermode);
    }
  namespace nisot {
#line 1960 "nonisotropic.cpp"
    hyperpoint christoffel(const hyperpoint at, const hyperpoint velocity, const hyperpoint transported);
#line 1969 "nonisotropic.cpp"
    bool in_table_range(hyperpoint h);
#line 1976 "nonisotropic.cpp"
    void geodesic_step(hyperpoint& at, hyperpoint& velocity);
#line 1989 "nonisotropic.cpp"
    hyperpoint numerical_exp(hyperpoint v, int steps);
#line 1997 "nonisotropic.cpp"
    transmatrix parallel_transport_bare(transmatrix Pos, hyperpoint h);
#line 2033 "nonisotropic.cpp"
    void fixmatrix(transmatrix& T);
#line 2041 "nonisotropic.cpp"
    transmatrix parallel_transport(const transmatrix Position, const hyperpoint direction);
#line 2048 "nonisotropic.cpp"
    transmatrix spin_towards(const transmatrix Position, const hyperpoint goal);
#line 2060 "nonisotropic.cpp"
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
#line 174 "orbgen.cpp"
  eItem nativeOrbType(eLand l);
#line 194 "orbgen.cpp"
  extern string olrDescriptions[];
#line 215 "orbgen.cpp"
  eOrbLandRelation getOLR(eItem it, eLand l);
#line 398 "orbgen.cpp"
  int orbsUnlocked();
#line 406 "orbgen.cpp"
  ld orbprizefun(int tr);
#line 412 "orbgen.cpp"
  ld orbcrossfun(int tr);
#line 419 "orbgen.cpp"
  bool buildPrizeMirror(cell *c, int freq);
#line 428 "orbgen.cpp"
  extern cellwalker cwt;
#line 431 "orbgen.cpp"
  eLand getPrizeLand(cell *c IS(cwt.at));
#line 439 "orbgen.cpp"
  void placePrizeOrb(cell *c);
#line 489 "orbgen.cpp"
  int treasureForLocal();
#line 493 "orbgen.cpp"
  bool extra_safety_for_memory(cell *c);
#line 503 "orbgen.cpp"
  void placeLocalOrbs(cell *c);
#line 545 "orbgen.cpp"
  void placeLocalSpecial(cell *c, int outof, int loc IS(1), int priz IS(1));
#line 554 "orbgen.cpp"
  void placeCrossroadOrbs(cell *c);
#line 590 "orbgen.cpp"
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
#line 74 "orbs.cpp"
  int intensify(int val);
#line 78 "orbs.cpp"
  bool reduceOrbPower(eItem it, int cap);
#line 95 "orbs.cpp"
  void reduceOrbPowerAlways(eItem it);
#line 102 "orbs.cpp"
  void chargeOrbs();
#line 111 "orbs.cpp"
  void reduceOrbPowers();
#line 188 "orbs.cpp"
  void flashAlchemist(cell *c);
#line 197 "orbs.cpp"
  void flashCell(cell *c, eMonster killer, flagtype flags);
#line 260 "orbs.cpp"
  void activateFlashFrom(cell *cf, eMonster who, flagtype flags);
#line 276 "orbs.cpp"
  bool distanceBound(cell *c1, cell *c2, int d);
#line 284 "orbs.cpp"
  void checkFreedom(cell *cf);
#line 318 "orbs.cpp"
  void activateFlash();
#line 335 "orbs.cpp"
  bool reflectingBarrierAt(cell *c);
#line 342 "orbs.cpp"
  bool reflectingBarrierAt(cellwalker& c, int d);
#line 358 "orbs.cpp"
  void killAdjacentSharks(cell *c);
#line 382 "orbs.cpp"
  void castLightningBolt(cellwalker lig);
#line 515 "orbs.cpp"
  void castLightningBoltFrom(cell *c);
#line 519 "orbs.cpp"
  void activateLightning();
#line 543 "orbs.cpp"
  bool haveRangedTarget();
#line 570 "orbs.cpp"
  void teleportTo(cell *dest);
#line 616 "orbs.cpp"
  bool jumpTo(orbAction a, cell *dest, eItem byWhat, int bonuskill IS(0), eMonster dashmon IS(moNone));
#line 756 "orbs.cpp"
  eMonster summonedAt(cell *dest);
#line 985 "orbs.cpp"
  void checkStunKill(cell *dest);
#line 1097 "orbs.cpp"
  bool monstersnearO(orbAction a, cell *c, eMonster who, cell *pushto, cell *comefrom);
#line 1106 "orbs.cpp"
  bool isCheck(orbAction a);
#line 1107 "orbs.cpp"
  bool isWeakCheck(orbAction a);
#line 1109 "orbs.cpp"
  movei blowoff_destination(cell *c, int& di);
#line 1120 "orbs.cpp"
  int check_jump(cell *cf, cell *ct, flagtype flags, cell*& jumpthru);
#line 1136 "orbs.cpp"
  int check_phase(cell *cf, cell *ct, flagtype flags, cell*& jumpthru);
#line 1152 "orbs.cpp"
  cell *common_neighbor(cell *cf, cell *ct);
#line 1159 "orbs.cpp"
  void apply_impact(cell *c);
#line 1171 "orbs.cpp"
  int check_vault(cell *cf, cell *ct, flagtype flags, cell*& jumpthru);
#line 1189 "orbs.cpp"
  eItem targetRangedOrb(cell *c, orbAction a);
#line 1505 "orbs.cpp"
  int orbcharges(eItem it);
#line 1614 "orbs.cpp"
  bool isShmupLifeOrb(eItem it);
#line 1622 "orbs.cpp"
  void makelava(cell *c, int i);
#line 1630 "orbs.cpp"
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
#line 85 "passable.cpp"
  bool strictlyAgainstGravity(cell *w, cell *from, bool revdir, flagtype flags);
#line 91 "passable.cpp"
  bool anti_alchemy(cell *w, cell *from);
#line 123 "passable.cpp"
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
#line 160 "passable.cpp"
  bool passable(cell *w, cell *from, flagtype flags);
#line 311 "passable.cpp"
  extern vector<pair<cell*, int> > airmap;
#line 313 "passable.cpp"
  int airdist(cell *c);
#line 321 "passable.cpp"
  ld calcAirdir(cell *c);
#line 345 "passable.cpp"
  bool againstWind(cell *cto, cell *cfrom);
#line 373 "passable.cpp"
  bool ghostmove(eMonster m, cell* to, cell* from);
#line 457 "passable.cpp"
  bool canPushStatueOn(cell *c);
#line 463 "passable.cpp"
  void moveBoat(const movei& mi);
#line 470 "passable.cpp"
  void moveBoatIfUsingOne(const movei& mi);
#line 498 "passable.cpp"
  bool againstPair(cell *c1, cell *c2, eMonster m);
#line 504 "passable.cpp"
  bool notNearItem(cell *c);
#line 509 "passable.cpp"
  bool isNeighbor1(cell *f, cell *w);
#line 513 "passable.cpp"
  bool passable_for(eMonster m, cell *w, cell *from, flagtype extra);
#line 614 "passable.cpp"
  eMonster movegroup(eMonster m);
#line 616 "passable.cpp"
  bool logical_adjacent(cell *c1, eMonster m1, cell *c2);
#line 630 "passable.cpp"
  void buildAirmap();
#line 646 "passable.cpp"
  extern int rosewave, rosephase;
#line 655 "passable.cpp"
  extern map<cell*, int> rosemap;
#line 657 "passable.cpp"
  int rosedist(cell *c);
#line 665 "passable.cpp"
  bool againstRose(cell *cfrom, cell *cto);
#line 671 "passable.cpp"
  bool withRose(cell *cfrom, cell *cto);
#line 677 "passable.cpp"
  void buildRosemap();
#line 714 "passable.cpp"
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
#line 115 "pcmove.cpp"
  bool checkNeedMove(bool checkonly, bool attacking);
#line 182 "pcmove.cpp"
  extern cell *lastmove;
#line 187 "pcmove.cpp"
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
  
  void tell_why_cannot_attack();
  void tell_why_impassable();
  void handle_friendly_ivy();
  
  movei mi, mip;
  pcmove() : mi(nullptr, nullptr, 0), mip(nullptr, nullptr, 0) {}
  
  bool vmsg();
  };
#line 224 "pcmove.cpp"
  extern cell *global_pushto;
#line 228 "pcmove.cpp"
  bool movepcto(int d, int subdir IS(1), bool checkonly IS(false));
#line 385 "pcmove.cpp"
  void copy_metadata(cell *x, const gcell *y);
#line 401 "pcmove.cpp"
  
  extern void playSound(cell *c, const string& fname, int vol);
  
  struct changes_t {
  vector<reaction_t> rollbacks;
  vector<reaction_t> commits;
  bool on;
  bool checking;
  
  void init(bool ch) {
  on = true; 
  ccell(cwt.at);
  forCellEx(c1, cwt.at) ccell(c1);
  value_keep(kills);
  value_keep(items);
  value_keep(hrngen);
  checking = ch;
  }
  
  void commit() { 
  on = false; 
  for(auto& p: commits) p();
  rollbacks.clear();
  commits.clear();
  }
  
  void rollback(int pos = 0) { 
  on = false;
  while(!rollbacks.empty()) {
  rollbacks.back()();
  rollbacks.pop_back();
  }
  rollbacks.clear();
  commits.clear();
  }
  
  void ccell(cell *c) {
  if(!on) return;
  gcell a = *c;
  rollbacks.push_back([c, a] { copy_metadata(c, &a); });
  }
  
  template<class T> void value_set(T& what, T value) {
  if(!on) { what = value; return; }
  if(what == value) return;
  T old = what;
  rollbacks.push_back([&what, old] { what = old; });
  what = value;
  }
  
  template<class T> void value_add(T& what, T step) {
  value_keep(what); what += step;
  }
  
  template<class T> void value_inc(T& what) { value_add(what, 1); }
  
  template<class T> void value_keep(T& what) {
  if(!on) return;
  T old = what;
  rollbacks.push_back([&what, old] { what = old; });
  }
  
  template<class T, class U, class V> void map_value(map<T, U>& vmap, V& key) {
  if(vmap.count(key)) {
  auto val = vmap[key];
  at_rollback([&vmap, key, val] { vmap[key] = val; });
  }
  else {
  at_rollback([&vmap, key] { vmap.erase(key); });
  }
  }
  
  void at_commit(reaction_t act) {
  if(!on) act();
  else commits.emplace_back(act);
  }
  
  void at_rollback(reaction_t act) {
  if(on) rollbacks.emplace_back(act);
  }
  };
#line 484 "pcmove.cpp"
  extern changes_t changes;
#line 937 "pcmove.cpp"
  bool chaos_forbidden(cell *c);
#line 1090 "pcmove.cpp"
  inline bool movepcto(const movedir& md) { return movepcto(md.d, md.subdir); }
#line 1094 "pcmove.cpp"
  bool warningprotection(const string& s);
#line 1118 "pcmove.cpp"
  bool warningprotection_hit(eMonster m);
#line 1124 "pcmove.cpp"
  bool playerInWater();
#line 1131 "pcmove.cpp"
  int numplayers();
#line 1135 "pcmove.cpp"
  cell *playerpos(int i);
#line 1141 "pcmove.cpp"
  bool allPlayersInBoats();
#line 1147 "pcmove.cpp"
  int whichPlayerOn(cell *c);
#line 1154 "pcmove.cpp"
  bool isPlayerOn(cell *c);
#line 1158 "pcmove.cpp"
  bool isPlayerInBoatOn(cell *c, int i);
#line 1165 "pcmove.cpp"
  bool playerInBoat(int i);
#line 1169 "pcmove.cpp"
  bool isPlayerInBoatOn(cell *c);
#line 1174 "pcmove.cpp"
  bool playerInPower();
#line 1183 "pcmove.cpp"
  void playerMoveEffects(cell *c1, cell *c2);
#line 1229 "pcmove.cpp"
  void afterplayermoved();
#line 1240 "pcmove.cpp"
  void produceGhost(cell *c, eMonster victim, eMonster who);
#line 1249 "pcmove.cpp"
  bool swordAttack(cell *mt, eMonster who, cell *c, int bb);
#line 1290 "pcmove.cpp"
  void swordAttackStatic(int bb);
#line 1294 "pcmove.cpp"
  void swordAttackStatic();
#line 1300 "pcmove.cpp"
  extern int plague_kills;
#line 1302 "pcmove.cpp"
  void spread_plague(cell *mf, cell *mt, int dir, eMonster who);
#line 1309 "pcmove.cpp"
  void sideAttackAt(cell *mf, int dir, cell *mt, eMonster who, eItem orb, cell *pf);
#line 1363 "pcmove.cpp"
  void sideAttack(cell *mf, int dir, eMonster who, int bonus, eItem orb);
#line 1374 "pcmove.cpp"
  void sideAttack(cell *mf, int dir, eMonster who, int bonuskill);
#line 1389 "pcmove.cpp"
  eMonster do_we_stab_a_friend(cell *mf, cell *mt, eMonster who);
#line 1409 "pcmove.cpp"
  void wouldkill(const char *msg);
#line 1420 "pcmove.cpp"
  bool havePushConflict(cell *pushto, bool checkonly);
#line 1439 "pcmove.cpp"
  void movecost(cell* from, cell *to, int phase);

  // implemented in: polygons.cpp

  #if CAP_SHAPES
#line 14 "polygons.cpp"
  static constexpr ld NEWSHAPE = (-13.5);
#line 305 "polygons.cpp"
  #define SHADMUL (S3==4 ? 1.05 : 1.3)
#line 1672 "polygons.cpp"
  extern vector<long double> polydata;
  #endif

  // implemented in: quit.cpp

#line 11 "quit.cpp"
  bool quitsaves();
#line 13 "quit.cpp"
  bool needConfirmationEvenIfSaved();
#line 17 "quit.cpp"
  bool needConfirmation();
#line 21 "quit.cpp"
  int getgametime();
#line 25 "quit.cpp"
  string getgametime_s(int timespent IS(getgametime()));
#line 39 "quit.cpp"
  void noaction();
#line 41 "quit.cpp"
  extern function<void()> cancel;
#line 44 "quit.cpp"
  struct hint {
  time_t last;
  function<bool()> usable;
  function<void()> display;
  function<void()> action;  
  };
#line 52 "quit.cpp"
  extern hint hints[];
#line 291 "quit.cpp"
  extern int hinttoshow;
#line 306 "quit.cpp"
  void showMission();
#line 473 "quit.cpp"
  void handleKeyQuit(int sym, int uni);
#line 524 "quit.cpp"
  int counthints();
#line 528 "quit.cpp"
  void showMissionScreen();

  // implemented in: quotient.cpp

  namespace quotientspace {
#line 30 "quotient.cpp"
    extern int rvadd;
#line 31 "quotient.cpp"
    extern int rvdir;
#line 38 "quotient.cpp"
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
    
    hrmap_quotient() {
    generate_connections();    
    build();
    }
    
    hrmap_quotient(const vector<int>& con) : connections(con) {
    build();
    }
    
    heptagon *getOrigin() { return allh[0]; }
    
    ~hrmap_quotient() {
    for(int i=0; i<isize(allh); i++) {
    clearHexes(allh[i]);
    tailored_delete(allh[i]);
    }
    }
    
    vector<cell*>& allcells() { return celllist; }
    };
#line 416 "quotient.cpp"
    struct hrmap_quotient* new_map();
    }

  // implemented in: racing.cpp

  namespace racing {
    #if CAP_RACING
#line 16 "racing.cpp"
    extern bool guiding;
#line 18 "racing.cpp"
    extern bool on;
#line 19 "racing.cpp"
    extern bool player_relative;
#line 20 "racing.cpp"
    extern bool standard_centering;
#line 21 "racing.cpp"
    extern bool track_ready;
#line 27 "racing.cpp"
    extern ld race_advance;
#line 32 "racing.cpp"
    extern int ghosts_to_show;
#line 33 "racing.cpp"
    extern int ghosts_to_save;
#line 43 "racing.cpp"
    extern vector<cell*> track;
#line 46 "racing.cpp"
    extern int trophy[MAXPLAYER];
#line 48 "racing.cpp"
    extern string track_code;
#line 54 "racing.cpp"
    void apply_seed();
#line 60 "racing.cpp"
    extern int race_start_tick, race_finish_tick[MAXPLAYER];
#line 330 "racing.cpp"
    void block_cells(vector<cell*> to_block, function<bool(cell*)> blockbound);
#line 387 "racing.cpp"
    void make_bounded_track(cell *s);
#line 423 "racing.cpp"
    extern bool bounded_track;
#line 425 "racing.cpp"
    void generate_track();
#line 743 "racing.cpp"
    extern ld race_angle;
#line 745 "racing.cpp"
    bool force_standard_centering();
#line 749 "racing.cpp"
    bool use_standard_centering();
#line 753 "racing.cpp"
    bool set_view();
#line 848 "racing.cpp"
    extern vector<eLand> race_lands;
#line 875 "racing.cpp"
    string racetimeformat(int t);
#line 1062 "racing.cpp"
    void thurston_racing();
#line 1215 "racing.cpp"
    void configure_race();
#line 1242 "racing.cpp"
    void displayScore(eLand l);
#line 1264 "racing.cpp"
    void race_won();
#line 1355 "racing.cpp"
    int get_percentage(cell *c);
#line 1359 "racing.cpp"
    int get_percentage(int i);
#line 1371 "racing.cpp"
    void drawStats();
#line 1399 "racing.cpp"
    void markers();
#line 1445 "racing.cpp"
    void add_debug(cell *c);
    #endif
    #if !CAP_RACING
#line 1457 "racing.cpp"
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
#line 55 "radar.cpp"
  void addradar(const transmatrix& V, char ch, color_t col, color_t outline);
#line 62 "radar.cpp"
  void addradar(const hyperpoint h1, const hyperpoint h2, color_t col);
#line 92 "radar.cpp"
  void draw_radar(bool cornermode);

  // implemented in: raycaster.cpp

  namespace ray {
    #if MAXMDIM >= 4
#line 19 "raycaster.cpp"
    extern bool in_use;
#line 20 "raycaster.cpp"
    extern bool comparison_mode;
#line 23 "raycaster.cpp"
    extern int want_use;
#line 25 "raycaster.cpp"
    extern ld exp_start;
#line 27 "raycaster.cpp"
    extern ld maxstep_sol;
#line 28 "raycaster.cpp"
    extern ld maxstep_nil;
#line 29 "raycaster.cpp"
    extern ld minstep;
#line 31 "raycaster.cpp"
    extern ld reflect_val;
#line 35 "raycaster.cpp"
    extern ld hard_limit;
#line 37 "raycaster.cpp"
    extern int max_iter_sol;
#line 39 "raycaster.cpp"
    extern int max_cells;
#line 40 "raycaster.cpp"
    extern bool rays_generate;
#line 42 "raycaster.cpp"
    ld& exp_decay_current();
#line 46 "raycaster.cpp"
    int& max_iter_current();
#line 61 "raycaster.cpp"
    bool available();
#line 79 "raycaster.cpp"
    bool requested();
#line 139 "raycaster.cpp"
    void reset_raycaster();
#line 853 "raycaster.cpp"
    void cast();
#line 1075 "raycaster.cpp"
    void configure();
    #endif
    #if MAXMDIM == 3
#line 1238 "raycaster.cpp"
    extern always_false in_use;
#line 1239 "raycaster.cpp"
    extern always_false comparison_mode;
#line 1240 "raycaster.cpp"
    void reset_raycaster();
#line 1241 "raycaster.cpp"
    void cast();
    #endif
    }

  // implemented in: reg3.cpp

  #if MAXMDIM >= 4
  namespace reg3 {
#line 26 "reg3.cpp"
    inline short& altdist(heptagon *h) { return h->emeraldval; }
#line 31 "reg3.cpp"
    extern int loop;
#line 32 "reg3.cpp"
    extern int face;
#line 34 "reg3.cpp"
    extern vector<hyperpoint> cellshape;
#line 35 "reg3.cpp"
    extern vector<hyperpoint> vertices_only;
#line 37 "reg3.cpp"
    extern transmatrix spins[12], adjmoves[12];
#line 39 "reg3.cpp"
    extern ld adjcheck;
#line 40 "reg3.cpp"
    extern ld strafedist;
#line 41 "reg3.cpp"
    extern bool dirs_adjacent[16][16];
#line 44 "reg3.cpp"
    extern int next_dir[16][16];
#line 55 "reg3.cpp"
    void generate();
#line 226 "reg3.cpp"
    struct hrmap_quotient3 : hrmap {
    vector<heptagon*> allh;
    vector<vector<transmatrix>> tmatrices;    
    vector<cell*> acells;
    
    transmatrix adj(heptagon *h, int d) override { return tmatrices[h->fieldval][d]; }
    
    heptagon *getOrigin() override { return allh[0]; }
    
    void draw() override;
    transmatrix relative_matrix(heptagon *h2, heptagon *h1, const hyperpoint& hint) override;
    
    void initialize(int cell_count);
    vector<cell*>& allcells() override { return acells; }
    
    vector<hyperpoint> get_vertices(cell* c) override { return vertices_only; }
    };
#line 304 "reg3.cpp"
    crystal::coord decode_coord(int a);
#line 1209 "reg3.cpp"
    hrmap *new_alt_map(heptagon *o);
#line 1213 "reg3.cpp"
    void link_structures(heptagon *h, heptagon *alt, hstate firststate);
#line 1234 "reg3.cpp"
    extern bool reg3_rule_available;
#line 1236 "reg3.cpp"
    bool in_rule();
#line 1240 "reg3.cpp"
    hrmap* new_map();
#line 1253 "reg3.cpp"
    int quotient_count();
#line 1300 "reg3.cpp"
    int celldistance(cell *c1, cell *c2);
#line 1320 "reg3.cpp"
    bool pseudohept(cell *c);
#line 1361 "reg3.cpp"
    void generate_cellrotations();
    #endif
    #if MAXMDIM >= 4
#line 1490 "reg3.cpp"
    cellwalker strafe(cellwalker cw, int j);
#line 1500 "reg3.cpp"
    extern vector<pair<string, string> > rels;
#line 1501 "reg3.cpp"
    extern int xp_order, r_order, rx_order;
#line 1503 "reg3.cpp"
    extern transmatrix full_X, full_R, full_P;
#line 1506 "reg3.cpp"
    int matrix_order(const transmatrix A);
#line 1515 "reg3.cpp"
    void generate_fulls();
#line 1536 "reg3.cpp"
    void construct_relations();
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
  SDL_Surface *sreset;
  resetbuffer();
  void reset();
  };
#line 167 "renderbuffer.cpp"
  extern int current_rbuffer;

  // implemented in: rug.cpp

  #if CAP_RUG
#line 18 "rug.cpp"
  extern bool rug_failure;
  namespace rug {
#line 22 "rug.cpp"
    extern ld lwidth;
#line 24 "rug.cpp"
    bool in_crystal();
#line 29 "rug.cpp"
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
    hyperpoint h;    // point in the represented space
    hyperpoint flat; // point in the native space, in azeq
    hyperpoint precompute;
    vector<edge> edges;
    vector<edge> anticusp_edges;
    // Find-Union algorithm
    rugpoint *glue;
    rugpoint *getglue() {
    return glue ? (glue = glue->getglue()) : this;
    }
    hyperpoint& glueflat() {
    return glue->flat;
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
    triangle(rugpoint *m1, rugpoint *m2, rugpoint *m3) {
    m[0] = m1; m[1] = m2; m[2] = m3;
    }
    };
#line 76 "rug.cpp"
    extern vector<rugpoint*> points;
#line 77 "rug.cpp"
    extern vector<triangle> triangles;
#line 83 "rug.cpp"
    extern bool fast_euclidean;
#line 84 "rug.cpp"
    extern bool good_shape;
#line 85 "rug.cpp"
    extern bool subdivide_first;
#line 86 "rug.cpp"
    extern bool spatial_rug;
#line 88 "rug.cpp"
    extern bool subdivide_further();
#line 89 "rug.cpp"
    extern void subdivide();
#line 91 "rug.cpp"
    extern ld modelscale;
#line 92 "rug.cpp"
    extern ld model_distance;
#line 94 "rug.cpp"
    extern eGeometry gwhere;
#line 101 "rug.cpp"
    extern bool rugged;
#line 104 "rug.cpp"
    extern int vertex_limit;
#line 106 "rug.cpp"
    extern bool renderonce;
#line 107 "rug.cpp"
    extern int renderlate;
#line 108 "rug.cpp"
    extern bool rendernogl;
#line 109 "rug.cpp"
    extern int  texturesize;
#line 110 "rug.cpp"
    extern ld scale;
#line 111 "rug.cpp"
    extern ld ruggo;
#line 113 "rug.cpp"
    extern ld anticusp_factor;
#line 114 "rug.cpp"
    extern ld anticusp_dist;
#line 116 "rug.cpp"
    extern ld err_zero;
#line 118 "rug.cpp"
    extern int queueiter, qvalid, dt;
#line 120 "rug.cpp"
    extern rugpoint *finger_center;
#line 121 "rug.cpp"
    extern ld finger_range;
#line 122 "rug.cpp"
    extern ld finger_force;
#line 124 "rug.cpp"
    extern int rugdim;
#line 126 "rug.cpp"
    extern bool rug_perspective;
#line 228 "rug.cpp"
    void push_all_points(int coord, ld val);
#line 239 "rug.cpp"
    rugpoint *addRugpoint(hyperpoint h, double dist);
#line 345 "rug.cpp"
    rugpoint *findRugpoint(hyperpoint h);
#line 351 "rug.cpp"
    rugpoint *findOrAddRugpoint(hyperpoint h, double dist);
#line 362 "rug.cpp"
    bool edge_exists(rugpoint *e1, rugpoint *e2);
#line 382 "rug.cpp"
    void addTriangle(rugpoint *t1, rugpoint *t2, rugpoint *t3, ld len IS(1));
#line 410 "rug.cpp"
    void sort_rug_points();
#line 420 "rug.cpp"
    void calcparam_rug();
#line 430 "rug.cpp"
    void buildTorusRug();
#line 558 "rug.cpp"
    void verify();
#line 590 "rug.cpp"
    void buildRug();
#line 663 "rug.cpp"
    void enqueue(rugpoint *m);
#line 724 "rug.cpp"
    void preset(rugpoint *m);
#line 797 "rug.cpp"
    void optimize(rugpoint *m, bool do_preset);
#line 825 "rug.cpp"
    bool subdivide_further();
#line 831 "rug.cpp"
    void subdivide();
#line 883 "rug.cpp"
    ld slow_modeldist(const hyperpoint& h1, const hyperpoint& h2);
#line 901 "rug.cpp"
    ld modeldist(const hyperpoint& h1, const hyperpoint& h2);
#line 1000 "rug.cpp"
    void addNewPoints();
#line 1030 "rug.cpp"
    void physics();
#line 1208 "rug.cpp"
    extern struct renderbuffer *glbuf;
#line 1210 "rug.cpp"
    void prepareTexture();
#line 1250 "rug.cpp"
    extern bool no_fog;
#line 1252 "rug.cpp"
    extern ld lowrug;
#line 1253 "rug.cpp"
    extern ld hirug;
#line 1255 "rug.cpp"
    extern GLuint alternate_texture;
#line 1257 "rug.cpp"
    extern bool invert_depth;
#line 1259 "rug.cpp"
    void drawRugScene();
#line 1372 "rug.cpp"
    extern transmatrix currentrot;
#line 1374 "rug.cpp"
    void close_glbuf();
#line 1379 "rug.cpp"
    void ensure_glbuf();
#line 1389 "rug.cpp"
    void reopen();
#line 1401 "rug.cpp"
    extern bool display_warning;
#line 1403 "rug.cpp"
    void init_model();
#line 1449 "rug.cpp"
    void init();
#line 1455 "rug.cpp"
    void clear_model();
#line 1462 "rug.cpp"
    void close();
#line 1473 "rug.cpp"
    void apply_rotation(const transmatrix& t);
#line 1482 "rug.cpp"
    void move_forward(ld distance);
#line 1489 "rug.cpp"
    bool handlekeys(int sym, int uni);
#line 1547 "rug.cpp"
    void finger_on(int coord, ld val);
#line 1557 "rug.cpp"
    extern ld ruggospeed;
#line 1559 "rug.cpp"
    void actDraw();
#line 1694 "rug.cpp"
    hyperpoint gethyper(ld x, ld y);
#line 1752 "rug.cpp"
    string makehelp();
#line 1770 "rug.cpp"
    string geometry_name(eGeometry g);
#line 1789 "rug.cpp"
    void show();
#line 1976 "rug.cpp"
    void select();
    #endif
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
#line 301 "savemem.cpp"
  bool memory_issues();

  // implemented in: screenshot.cpp

#line 14 "screenshot.cpp"
  namespace shot { void default_screenshot_content(); }
  #if CAP_SVG
  namespace svg {
#line 26 "screenshot.cpp"
    extern bool in;
#line 42 "screenshot.cpp"
    extern int divby;
#line 82 "screenshot.cpp"
    void circle(int x, int y, int size, color_t col, color_t fillcol, double linewidth);
#line 91 "screenshot.cpp"
    extern string link;
#line 106 "screenshot.cpp"
    void text(int x, int y, int size, const string& str, bool frame, color_t col, int align);
#line 148 "screenshot.cpp"
    void polygon(int *polyx, int *polyy, int polyi, color_t col, color_t outline, double linewidth);
#line 167 "screenshot.cpp"
    void render(const string& fname, const function<void()>& what IS(shot::default_screenshot_content));
    }
  #endif
  #if CAP_SHOT
  namespace shot {
#line 244 "screenshot.cpp"
    extern int shotx;
#line 245 "screenshot.cpp"
    extern int shoty;
#line 246 "screenshot.cpp"
    extern bool make_svg;
#line 247 "screenshot.cpp"
    extern bool transparent;
#line 248 "screenshot.cpp"
    extern ld gamma;
#line 249 "screenshot.cpp"
    extern int shotformat;
#line 250 "screenshot.cpp"
    extern string caption;
#line 251 "screenshot.cpp"
    extern ld fade;
    #if CAP_SDL
#line 265 "screenshot.cpp"
    extern int shot_aa;
    #endif
#line 268 "screenshot.cpp"
    void default_screenshot_content();
#line 322 "screenshot.cpp"
    extern purehookset hooks_take;
#line 324 "screenshot.cpp"
    void take(string fname, const function<void()>& what IS(default_screenshot_content));
#line 421 "screenshot.cpp"
    void menu();
    }
  #endif
  #if CAP_ANIMATIONS
  namespace anims {
#line 506 "screenshot.cpp"
    extern ld shift_angle, movement_angle;
#line 507 "screenshot.cpp"
    extern ld normal_angle;
#line 508 "screenshot.cpp"
    extern ld period;
#line 509 "screenshot.cpp"
    extern int noframes;
#line 510 "screenshot.cpp"
    extern ld cycle_length;
#line 511 "screenshot.cpp"
    extern ld parabolic_length;
#line 512 "screenshot.cpp"
    extern ld skiprope_rotation;
#line 516 "screenshot.cpp"
    extern ld rug_rotation1, rug_rotation2, ballangle_rotation, env_ocean, env_volcano;
#line 517 "screenshot.cpp"
    extern bool env_shmup;
#line 518 "screenshot.cpp"
    extern ld rug_angle;
#line 525 "screenshot.cpp"
    extern ld circle_radius;
#line 526 "screenshot.cpp"
    extern ld circle_spins;
#line 528 "screenshot.cpp"
    void moved();
#line 555 "screenshot.cpp"
    void deanimate(ld &x);
#line 561 "screenshot.cpp"
    void get_parameter_animation(ld &x, string &s);
#line 567 "screenshot.cpp"
    void animate_parameter(ld &x, string f, const reaction_t& r);
#line 596 "screenshot.cpp"
    void reflect_view();
#line 608 "screenshot.cpp"
    extern purehookset hooks_anim;
#line 610 "screenshot.cpp"
    void apply();
#line 737 "screenshot.cpp"
    void rollback();
    #if CAP_FILES && CAP_SHOT
#line 744 "screenshot.cpp"
    extern string animfile;
    #endif
#line 811 "screenshot.cpp"
    extern ld a, b;
#line 832 "screenshot.cpp"
    void show();
#line 1119 "screenshot.cpp"
    bool any_animation();
#line 1127 "screenshot.cpp"
    bool any_on();
#line 1131 "screenshot.cpp"
    bool center_music();
    }
  #endif
  namespace startanims {
#line 1143 "screenshot.cpp"
    struct startanim {
    string name;
    reaction_t init;
    reaction_t render;
    };
    
    const int EXPLORE_START_ANIMATION = 2003;
    #if CAP_STARTANIM
#line 1311 "screenshot.cpp"
    extern startanim *current;
#line 1313 "screenshot.cpp"
    void pick();
#line 1327 "screenshot.cpp"
    void display();
#line 1336 "screenshot.cpp"
    void explore();
    #endif
    }

  // implemented in: shaders.cpp

#line 11 "shaders.cpp"
  extern ld levellines;
#line 12 "shaders.cpp"
  extern bool disable_texture;
#line 15 "shaders.cpp"
  constexpr flagtype GF_TEXTURE  = 1;
  constexpr flagtype GF_VARCOLOR = 2;
  constexpr flagtype GF_LIGHTFOG = 4;
  constexpr flagtype GF_LEVELS   = 8;
  
  constexpr flagtype GF_which    = 15;
  
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
#line 35 "shaders.cpp"
  /* standard attribute bindings */
  /* taken from: https://www.opengl.org/sdk/docs/tutorials/ClockworkCoders/attributes.php */
  constexpr int aPosition = 0;
  constexpr int aColor = 3;
  constexpr int aTexture = 8;
  
  /* texture bindings */
  constexpr int INVERSE_EXP_BINDING = 2;
#line 45 "shaders.cpp"
  extern map<string, shared_ptr<glhr::GLprogram>> compiled_programs;
#line 47 "shaders.cpp"
  extern map<unsigned, shared_ptr<glhr::GLprogram>> matched_programs;
#line 482 "shaders.cpp"
  void add_if(string& shader, const string& seek, const string& function);
#line 487 "shaders.cpp"
  void add_fixed_functions(string& shader);
#line 510 "shaders.cpp"
  flagtype get_shader_flags();
#line 515 "shaders.cpp"
  void glapplymatrix(const transmatrix& V);

  // implemented in: sky.cpp

  #if MAXMDIM >= 4
#line 6 "sky.cpp"
  extern ld camera_level;
#line 8 "sky.cpp"
  int get_skybrightness(int mul IS(1));
#line 31 "sky.cpp"
  extern struct dqi_sky *sky;
#line 33 "sky.cpp"
  void prepare_sky();
  #endif

  // implemented in: sound.cpp

#line 11 "sound.cpp"
  extern const char *musicfile;
#line 12 "sound.cpp"
  extern bool audio;
#line 13 "sound.cpp"
  extern string musiclicense;
#line 14 "sound.cpp"
  extern string musfname[landtypes];
#line 15 "sound.cpp"
  extern int musicvolume;
#line 16 "sound.cpp"
  extern int effvolume;
#line 18 "sound.cpp"
  eLand getCurrentLandForMusic();
#line 26 "sound.cpp"
  void playSeenSound(cell *c);
  #if CAP_SDLAUDIO
#line 91 "sound.cpp"
  void handlemusic();
#line 135 "sound.cpp"
  void resetmusic();
#line 144 "sound.cpp"
  bool loadMusicInfo(string dir);
#line 182 "sound.cpp"
  bool loadMusicInfo();
#line 199 "sound.cpp"
  void initAudio();
#line 224 "sound.cpp"
  void playSound(cell *c, const string& fname, int vol IS(100));
#line 243 "sound.cpp"
  void reuse_music_memory();
  #endif
  #if !CAP_SDLAUDIO
#line 294 "sound.cpp"
  void playSound(cell *c, const string& fname, int vol IS(100));
#line 295 "sound.cpp"
  void resetmusic();
  #endif

  // implemented in: sphere.cpp

#line 13 "sphere.cpp"
  int spherecells();
#line 23 "sphere.cpp"
  extern vector<int> siblings;
#line 190 "sphere.cpp"
  heptagon *getDodecahedron(int i);
#line 196 "sphere.cpp"
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
#line 593 "surface.cpp"
    void run_shape(eShape s);
#line 677 "surface.cpp"
    void show_surfaces();
    #endif
    }

  // implemented in: system.cpp

#line 12 "system.cpp"
  namespace rg {
  // possible parameters e.g. for restart_game and wrongmode
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
  
  // wrongmode only -- marks 'global' achievements not related to the current mode
  static const char global = 'x'; 
  // wrongmode only -- change vid.scfg.players then restart_game(rg::nothing) instead
  static const char multi = 'm';
  // wrongmode only -- mark achievements for special geometries/variations
  static const char special_geometry = 'g';
  }
#line 39 "system.cpp"
  extern bool game_active;
#line 41 "system.cpp"
  extern bool cblind;
#line 42 "system.cpp"
  extern bool autocheat;
#line 43 "system.cpp"
  extern eWall canvas_default_wall;
#line 45 "system.cpp"
  extern int truelotus;
#line 46 "system.cpp"
  extern int gamecount;
#line 48 "system.cpp"
  extern int asteroids_generated, asteroid_orbs_generated;
#line 50 "system.cpp"
  extern time_t timerstart, savetime;
#line 51 "system.cpp"
  extern bool timerstopped;
#line 52 "system.cpp"
  extern int savecount;
#line 53 "system.cpp"
  extern bool showoff;
#line 54 "system.cpp"
  extern bool doCross;
#line 56 "system.cpp"
  extern bool gamegen_failure;
#line 58 "system.cpp"
  extern eLand top_land;
#line 60 "system.cpp"
  bool verless(string v, string cmp);
#line 74 "system.cpp"
  extern hookset<bool()> *hooks_welcome_message;
#line 76 "system.cpp"
  void welcomeMessage();
#line 145 "system.cpp"
  extern hookset<void()> *hooks_initgame;
#line 148 "system.cpp"
  void initgame();
  #if CAP_SAVE
#line 402 "system.cpp"
  #define MAXBOX 500
  #define POSSCORE 396 // update this when new boxes are added!
  struct score {
  string ver;
  int box[MAXBOX];
  };
#line 410 "system.cpp"
  extern int savebox[MAXBOX], boxid;
#line 411 "system.cpp"
  extern bool saving, loading, loadingHi;
#line 413 "system.cpp"
  extern string boxname[MAXBOX];
#line 414 "system.cpp"
  extern bool fakebox[MAXBOX];
#line 415 "system.cpp"
  extern bool monsbox[MAXBOX];
#line 433 "system.cpp"
  void applyBoxNum(int& i, string name IS(""));
#line 503 "system.cpp"
  void applyBoxes();
#line 864 "system.cpp"
  void saveBox();
  namespace anticheat {
#line 903 "system.cpp"
    extern int certify(const string& s, int a, int b, int c, int d IS(0));
    }
  #if !CAP_CERTIFY
  namespace anticheat {
#line 912 "system.cpp"
    extern bool tampered;
    }
  #endif
#line 923 "system.cpp"
  void remove_emergency_save();
#line 932 "system.cpp"
  void saveStats(bool emergency IS(false));
#line 1060 "system.cpp"
  void loadsave();
  #endif
#line 1191 "system.cpp"
  void stop_game();
#line 1234 "system.cpp"
  extern purehookset on_geometry_change;
#line 1236 "system.cpp"
  void set_geometry(eGeometry target);
#line 1278 "system.cpp"
  void set_variation(eVariation target);
#line 1299 "system.cpp"
  void switch_game_mode(char switchWhat);
#line 1427 "system.cpp"
  void start_game();
#line 1470 "system.cpp"
  void restart_game(char switchWhat IS(rg::nothing));
#line 1478 "system.cpp"
  void stop_game_and_switch_mode(char switchWhat IS(rg::nothing));
#line 1483 "system.cpp"
  extern purehookset clearmemory;
#line 1485 "system.cpp"
  void clearMemory();
#line 1489 "system.cpp"
  extern bool fixseed;
#line 1490 "system.cpp"
  extern int startseed;
#line 1492 "system.cpp"
  extern eLand firstland0;
#line 1494 "system.cpp"
  void initAll();
#line 1527 "system.cpp"
  extern purehookset final_cleanup;
#line 1529 "system.cpp"
  void finishAll();

  // implemented in: tour.cpp

  #if CAP_TOUR
  namespace tour {
#line 13 "tour.cpp"
    extern bool on;
#line 15 "tour.cpp"
    extern bool texts;
#line 17 "tour.cpp"
    extern string tourhelp;
#line 19 "tour.cpp"
    extern int currentslide;
#line 22 "tour.cpp"
    enum presmode { 
    pmStartAll = 0,
    pmStart = 1, pmFrame = 2, pmStop = 3, pmKey = 4, pmRestart = 5,
    pmAfterFrame = 6,
    pmGeometry = 11, pmGeometryReset = 13, pmGeometryStart = 15
    };
    
    struct slide { 
    const char *name; int unused_id; int flags; const char *help; 
    function<void(presmode mode)> action;
    };  
    
    static const int LEGAL_NONE=0;
    static const int LEGAL_UNLIMITED=1;
    static const int LEGAL_HYPERBOLIC=2;
    static const int LEGAL_ANY=3;
    static const int LEGAL_NONEUC=4;
    static const int QUICKSKIP=8;
    static const int FINALSLIDE=16;
    static const int QUICKGEO=32;
    static const int SIDESCREEN = 64;
    static const int USE_SLIDE_NAME = 128;
#line 46 "tour.cpp"
    void setCanvas(presmode mode, char canv);
#line 67 "tour.cpp"
    extern function<eLand(eLand)> getNext;
#line 68 "tour.cpp"
    extern function<bool(eLand)> quickfind;
#line 69 "tour.cpp"
    extern function<bool(eLand)> showland;
#line 75 "tour.cpp"
    extern string slidecommand;
#line 77 "tour.cpp"
    extern hookset<void(int)> *hooks_slide;
#line 79 "tour.cpp"
    void presentation(presmode mode);
#line 96 "tour.cpp"
    void slidehelp();
#line 286 "tour.cpp"
    void checkGoodLand(eLand l);
    namespace ss {
#line 305 "tour.cpp"
      void list(slide *ss);
#line 312 "tour.cpp"
      void showMenu();
      }
#line 354 "tour.cpp"
    void start();
#line 373 "tour.cpp"
    extern slide default_slides[];
#line 825 "tour.cpp"
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
#line 19 "yendor.cpp"
  extern modecode_t modecode();
  namespace yendor {
#line 41 "yendor.cpp"
    extern bool on;
#line 42 "yendor.cpp"
    extern bool generating;
#line 43 "yendor.cpp"
    extern bool path;
#line 44 "yendor.cpp"
    extern bool everwon;
#line 45 "yendor.cpp"
    extern bool won;
#line 48 "yendor.cpp"
    extern int challenge; // id of the challenge
#line 49 "yendor.cpp"
    extern int lastchallenge;
#line 52 "yendor.cpp"
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
#line 80 "yendor.cpp"
    extern map<modecode_t, array<int, YENDORLEVELS>> bestscore;
#line 82 "yendor.cpp"
    extern eLand nexttostart;
#line 140 "yendor.cpp"
    yendorlevel& clev();
#line 152 "yendor.cpp"
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
#line 166 "yendor.cpp"
    extern vector<yendorinfo> yi;
#line 169 "yendor.cpp"
    #define NOYENDOR 999999
#line 171 "yendor.cpp"
    extern int yii;
#line 173 "yendor.cpp"
    int hardness();
#line 188 "yendor.cpp"
    enum eState { ysUntouched, ysLocked, ysUnlocked };
#line 191 "yendor.cpp"
    eState state(cell *yendor);
#line 197 "yendor.cpp"
    bool exhaustive_distance_appropriate();
#line 207 "yendor.cpp"
    bool check(cell *yendor);
#line 509 "yendor.cpp"
    void onpath();
#line 519 "yendor.cpp"
    void init(int phase);
#line 623 "yendor.cpp"
    extern const char *chelp;
#line 656 "yendor.cpp"
    string name(int i);
#line 677 "yendor.cpp"
    void showMenu();
#line 752 "yendor.cpp"
    void collected(cell* c2);
    }
  namespace tactic {
#line 809 "yendor.cpp"
    extern bool trailer;
#line 810 "yendor.cpp"
    extern bool on;
#line 811 "yendor.cpp"
    extern int id;
#line 847 "yendor.cpp"
    void record(eLand land, int score, int xc IS(modecode()));
#line 896 "yendor.cpp"
    void showMenu();
    }
  namespace peace {
#line 1181 "yendor.cpp"
    extern bool on;
#line 1182 "yendor.cpp"
    extern bool hint;
#line 1184 "yendor.cpp"
    extern bool otherpuzzles;
    namespace simon {
#line 1289 "yendor.cpp"
      void extend();
#line 1298 "yendor.cpp"
      void init();
#line 1312 "yendor.cpp"
      void restore();
      }
#line 1319 "yendor.cpp"
    void showMenu();
    }
  }
