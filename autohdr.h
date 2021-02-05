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
#line 709 "classes.cpp"
  extern vector<eLand> randlands;
#line 717 "classes.cpp"
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
  
  enum class eVariation { bitruncated, pure, goldberg, irregular, dual, untruncated, warped, unrectified };
  
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
  
  static const flagtype qRAYONLY         = Flag(23);
  static const flagtype qAFFINE          = Flag(24);
  
  static const flagtype qULTRA           = Flag(25);
  
  // note: dnext assumes that x&7 equals 7
  static const int SEE_ALL = 50;
  static const int OINF = 100;
  
  extern eGeometry geometry;
  extern eVariation variation;
#line 831 "classes.cpp"
  extern geometryinfo1 giEuclid2;
#line 832 "classes.cpp"
  extern geometryinfo1 giHyperb2;
#line 833 "classes.cpp"
  extern geometryinfo1 giSphere2;
#line 835 "classes.cpp"
  extern geometryinfo1 giEuclid3;
#line 836 "classes.cpp"
  extern geometryinfo1 giHyperb3;
#line 837 "classes.cpp"
  extern geometryinfo1 giSphere3;
#line 839 "classes.cpp"
  extern geometryinfo1 giSolNIH;
#line 840 "classes.cpp"
  extern geometryinfo1 giNil;
#line 841 "classes.cpp"
  extern geometryinfo1 giProduct;
#line 842 "classes.cpp"
  extern geometryinfo1 giSL2;
#line 844 "classes.cpp"
  extern modecode_t no_code;
#line 847 "classes.cpp"
  extern vector<geometryinfo> ginf;
#line 931 "classes.cpp"
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
  // 25
  mdMollweide, mdCentralCyl, mdCollignon, mdHorocyclic,
  // 29..
  mdGUARD, mdPixel, mdHyperboloidFlat, mdPolynomial, mdManual
  };
#line 991 "classes.cpp"
  extern vector<modelinfo> mdinf;
#line 1029 "classes.cpp"
  static inline bool orbProtection(eItem it) { return false; } // not implemented
  
  const eLand NOWALLSEP = laNone;
  const eLand NOWALLSEP_USED = laWhirlpool;

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
  T* full() { T* x = (T*) this; return (T*)((char*)this - ((char*)(&(x->c)) - (char*)x)); }
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
  
  struct cdata {
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
  
  struct heptagon {
  /** \brief Automata are used to generate the standard maps. s is the state of this automaton */
  hstate s : 6;
  /** \brief distance modulo 4, in heptagons */
  unsigned int dm4: 2;
  /** \brief distance from the origin; based on the final geometry of cells, not heptagons themselves */
  short distance;
  /** \brief Wmerald/wineyard generator. May have different meaning in other geometries. */
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
  
#line 458 "locations.cpp"
  
  constexpr int STRONGWIND = 99;
  constexpr int FALL = 98;
  constexpr int NO_SPACE = 97;
  constexpr int TELEPORT = 96;
  constexpr int JUMP = 95;
  
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
  int rev_dir() const { return s->c.spin(d); }
  bool mirror() { return s->c.mirror(d); }
  };
#line 494 "locations.cpp"
  movei moveimon(cell *c);
#line 496 "locations.cpp"
  movei match(cell *f, cell *t);

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
#line 194 "hyperpoint.cpp"
  ld squar(ld x);
#line 196 "hyperpoint.cpp"
  int sig(int z);
#line 198 "hyperpoint.cpp"
  int curvature();
#line 208 "hyperpoint.cpp"
  ld sin_auto(ld x);
#line 218 "hyperpoint.cpp"
  ld asin_auto(ld x);
#line 228 "hyperpoint.cpp"
  ld acos_auto(ld x);
#line 238 "hyperpoint.cpp"
  ld volume_auto(ld r);
#line 248 "hyperpoint.cpp"
  ld area_auto(ld r);
#line 258 "hyperpoint.cpp"
  ld wvolarea_auto(ld r);
#line 263 "hyperpoint.cpp"
  ld asin_clamp(ld x);
#line 265 "hyperpoint.cpp"
  ld asin_auto_clamp(ld x);
#line 274 "hyperpoint.cpp"
  ld acos_auto_clamp(ld x);
#line 283 "hyperpoint.cpp"
  ld cos_auto(ld x);
#line 293 "hyperpoint.cpp"
  ld tan_auto(ld x);
#line 303 "hyperpoint.cpp"
  ld atan_auto(ld x);
#line 313 "hyperpoint.cpp"
  ld atan2_auto(ld y, ld x);
#line 326 "hyperpoint.cpp"
  ld edge_of_triangle_with_angles(ld alpha, ld beta, ld gamma);
#line 330 "hyperpoint.cpp"
  hyperpoint hpxy(ld x, ld y);
#line 336 "hyperpoint.cpp"
  hyperpoint hpxy3(ld x, ld y, ld z);
#line 341 "hyperpoint.cpp"
  // a point (I hope this number needs no comments ;) )
  constexpr hyperpoint Cx12 = hyperpoint(1,0,1.41421356237,0);
  constexpr hyperpoint Cx13 = hyperpoint(1,0,0,1.41421356237);
  
  #define Cx1 (GDIM==2?Cx12:Cx13)
#line 348 "hyperpoint.cpp"
  bool zero_d(int d, hyperpoint h);
#line 359 "hyperpoint.cpp"
  ld intval(const hyperpoint &h1, const hyperpoint &h2);
#line 370 "hyperpoint.cpp"
  ld quickdist(const hyperpoint &h1, const hyperpoint &h2);
#line 376 "hyperpoint.cpp"
  ld sqhypot_d(int d, const hyperpoint& h);
#line 383 "hyperpoint.cpp"
  ld hypot_d(int d, const hyperpoint& h);
#line 390 "hyperpoint.cpp"
  transmatrix to_other_side(hyperpoint h1, hyperpoint h2);
#line 412 "hyperpoint.cpp"
  ld material(const hyperpoint& h);
#line 419 "hyperpoint.cpp"
  ld zlevel(const hyperpoint &h);
#line 428 "hyperpoint.cpp"
  ld hypot_auto(ld x, ld y);
#line 442 "hyperpoint.cpp"
  hyperpoint normalize(hyperpoint H);
#line 450 "hyperpoint.cpp"
  hyperpoint ultra_normalize(hyperpoint H);
#line 458 "hyperpoint.cpp"
  hyperpoint normalize_flat(hyperpoint h);
#line 465 "hyperpoint.cpp"
  hyperpoint mid(const hyperpoint& H1, const hyperpoint& H2);
#line 475 "hyperpoint.cpp"
  hyperpoint midz(const hyperpoint& H1, const hyperpoint& H2);
#line 491 "hyperpoint.cpp"
  transmatrix cspin(int a, int b, ld alpha);
#line 499 "hyperpoint.cpp"
  transmatrix spin(ld alpha);
#line 501 "hyperpoint.cpp"
  transmatrix random_spin();
#line 511 "hyperpoint.cpp"
  transmatrix eupush(ld x, ld y);
#line 518 "hyperpoint.cpp"
  transmatrix eupush(hyperpoint h);
#line 525 "hyperpoint.cpp"
  transmatrix eupush3(ld x, ld y, ld z);
#line 530 "hyperpoint.cpp"
  transmatrix euscalezoom(hyperpoint h);
#line 539 "hyperpoint.cpp"
  transmatrix euaffine(hyperpoint h);
#line 546 "hyperpoint.cpp"
  transmatrix cpush(int cid, ld alpha);
#line 559 "hyperpoint.cpp"
  transmatrix xpush(ld alpha);
#line 561 "hyperpoint.cpp"
  bool eqmatrix(transmatrix A, transmatrix B, ld eps IS(.01));
  #if MAXMDIM >= 4
#line 571 "hyperpoint.cpp"
  hyperpoint orthogonal_move(const hyperpoint& h, ld z);
  #endif
#line 585 "hyperpoint.cpp"
  transmatrix ypush(ld alpha);
#line 587 "hyperpoint.cpp"
  transmatrix zpush(ld z);
#line 589 "hyperpoint.cpp"
  transmatrix matrix3(ld a, ld b, ld c, ld d, ld e, ld f, ld g, ld h, ld i);
#line 600 "hyperpoint.cpp"
  transmatrix matrix4(ld a, ld b, ld c, ld d, ld e, ld f, ld g, ld h, ld i, ld j, ld k, ld l, ld m, ld n, ld o, ld p);
  #if MAXMDIM >= 4
#line 609 "hyperpoint.cpp"
  void swapmatrix(transmatrix& T);
#line 620 "hyperpoint.cpp"
  void swapmatrix(hyperpoint& h);
  #endif
#line 625 "hyperpoint.cpp"
  transmatrix parabolic1(ld u);
#line 638 "hyperpoint.cpp"
  transmatrix parabolic13(ld u, ld v);
#line 652 "hyperpoint.cpp"
  hyperpoint parabolic10(hyperpoint h);
#line 658 "hyperpoint.cpp"
  hyperpoint deparabolic10(const hyperpoint h);
#line 665 "hyperpoint.cpp"
  transmatrix spintoc(const hyperpoint& H, int t, int f);
#line 679 "hyperpoint.cpp"
  transmatrix rspintoc(const hyperpoint& H, int t, int f);
#line 692 "hyperpoint.cpp"
  transmatrix spintox(const hyperpoint& H);
#line 700 "hyperpoint.cpp"
  transmatrix rspintox(const hyperpoint& H);
#line 710 "hyperpoint.cpp"
  transmatrix pushxto0(const hyperpoint& H);
#line 718 "hyperpoint.cpp"
  void set_column(transmatrix& T, int i, const hyperpoint& H);
#line 724 "hyperpoint.cpp"
  transmatrix build_matrix(hyperpoint h1, hyperpoint h2, hyperpoint h3, hyperpoint h4);
#line 738 "hyperpoint.cpp"
  transmatrix rpushxto0(const hyperpoint& H);
#line 745 "hyperpoint.cpp"
  transmatrix ggpushxto0(const hyperpoint& H, ld co);
#line 771 "hyperpoint.cpp"
  transmatrix gpushxto0(const hyperpoint& H);
#line 776 "hyperpoint.cpp"
  transmatrix rgpushxto0(const hyperpoint& H);
#line 787 "hyperpoint.cpp"
  void fixmatrix(transmatrix& T);
#line 802 "hyperpoint.cpp"
  void fixmatrix_euclid(transmatrix& T);
#line 815 "hyperpoint.cpp"
  void orthonormalize(transmatrix& T);
#line 827 "hyperpoint.cpp"
  ld det(const transmatrix& T);
#line 863 "hyperpoint.cpp"
  transmatrix inverse(const transmatrix& T);
#line 913 "hyperpoint.cpp"
  pair<ld, hyperpoint> product_decompose(hyperpoint h);
#line 919 "hyperpoint.cpp"
  ld hdist0(const hyperpoint& mh);
#line 950 "hyperpoint.cpp"
  ld circlelength(ld r);
#line 964 "hyperpoint.cpp"
  ld hdist(const hyperpoint& h1, const hyperpoint& h2);
#line 988 "hyperpoint.cpp"
  hyperpoint mscale(const hyperpoint& t, double fac);
#line 997 "hyperpoint.cpp"
  transmatrix mscale(const transmatrix& t, double fac);
#line 1009 "hyperpoint.cpp"
  transmatrix xyscale(const transmatrix& t, double fac);
#line 1016 "hyperpoint.cpp"
  transmatrix xyzscale(const transmatrix& t, double fac, double facz);
#line 1025 "hyperpoint.cpp"
  transmatrix mzscale(const transmatrix& t, double fac);
#line 1039 "hyperpoint.cpp"
  hyperpoint mid3(hyperpoint h1, hyperpoint h2, hyperpoint h3);
#line 1043 "hyperpoint.cpp"
  hyperpoint mid_at(hyperpoint h1, hyperpoint h2, ld v);
#line 1048 "hyperpoint.cpp"
  hyperpoint mid_at_actual(hyperpoint h, ld v);
#line 1053 "hyperpoint.cpp"
  hyperpoint orthogonal_of_C0(hyperpoint h0, hyperpoint h1, hyperpoint h2);
#line 1067 "hyperpoint.cpp"
  hyperpoint zshift(hyperpoint x, ld z);
#line 1074 "hyperpoint.cpp"
  hyperpoint hpxd(ld d, ld x, ld y, ld z);
#line 1080 "hyperpoint.cpp"
  ld signum(ld x);
#line 1082 "hyperpoint.cpp"
  bool asign(ld y1, ld y2);
#line 1084 "hyperpoint.cpp"
  ld xcross(ld x1, ld y1, ld x2, ld y2);
#line 1086 "hyperpoint.cpp"
  transmatrix parallel_transport(const transmatrix Position, const transmatrix& ori, const hyperpoint direction);
#line 1095 "hyperpoint.cpp"
  void apply_parallel_transport(transmatrix& Position, const transmatrix orientation, const hyperpoint direction);
#line 1099 "hyperpoint.cpp"
  void rotate_object(transmatrix& Position, transmatrix& orientation, transmatrix R);
#line 1104 "hyperpoint.cpp"
  transmatrix spin_towards(const transmatrix Position, transmatrix& ori, const hyperpoint goal, int dir, int back);
#line 1128 "hyperpoint.cpp"
  ld ortho_error(transmatrix T);
#line 1143 "hyperpoint.cpp"
  transmatrix transpose(transmatrix T);
#line 1152 "hyperpoint.cpp"
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
#line 1191 "hyperpoint.cpp"
  hyperpoint ctangent(int c, ld x);
#line 1194 "hyperpoint.cpp"
  hyperpoint xtangent(ld x);
#line 1197 "hyperpoint.cpp"
  hyperpoint ztangent(ld z);
#line 1200 "hyperpoint.cpp"
  hyperpoint tangent_length(hyperpoint dir, ld length);
#line 1207 "hyperpoint.cpp"
  hyperpoint direct_exp(hyperpoint v);
#line 1219 "hyperpoint.cpp"
  constexpr flagtype pfNO_INTERPOLATION = 1; /**< in tables (sol/nih geometries), do not use interpolations */
  constexpr flagtype pfNO_DISTANCE      = 2; /**< we just need the directions -- this makes it a bit faster in sol/nih geometries */
  constexpr flagtype pfLOW_BS_ITER      = 4; /**< low iterations in binary search (nil geometry, sl2 not affected currently) */
  
  constexpr flagtype pQUICK     = pfNO_INTERPOLATION | pfLOW_BS_ITER;
  
  constexpr flagtype pNORMAL    = 0;
#line 1229 "hyperpoint.cpp"
  hyperpoint inverse_exp(const hyperpoint h, flagtype prec IS(pNORMAL));
#line 1248 "hyperpoint.cpp"
  ld geo_dist(const hyperpoint h1, const hyperpoint h2, flagtype prec IS(pNORMAL));
#line 1253 "hyperpoint.cpp"
  ld geo_dist_q(const hyperpoint h1, const hyperpoint h2, flagtype prec IS(pNORMAL));
#line 1259 "hyperpoint.cpp"
  hyperpoint lp_iapply(const hyperpoint h);
#line 1263 "hyperpoint.cpp"
  hyperpoint lp_apply(const hyperpoint h);
#line 1267 "hyperpoint.cpp"
  hyperpoint smalltangent();
#line 1269 "hyperpoint.cpp"
  void cyclefix(ld& a, ld b);
#line 1274 "hyperpoint.cpp"
  ld raddif(ld a, ld b);
#line 1282 "hyperpoint.cpp"
  unsigned bucketer(ld x);
#line 1286 "hyperpoint.cpp"
  unsigned bucketer(hyperpoint h);
#line 1299 "hyperpoint.cpp"
  hyperpoint project_on_triangle(hyperpoint h1, hyperpoint h2, hyperpoint h3);
#line 1315 "hyperpoint.cpp"
  hyperpoint lerp(hyperpoint a0, hyperpoint a1, ld x);

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
  
  vector<hyperpoint> cellshape;
  vector<hyperpoint> vertices_only;
  
  transmatrix spins[32], adjmoves[32];
  
  ld adjcheck;
  ld strafedist;
  bool dirs_adjacent[32][32];
  
  ld ultra_mirror_dist, ultra_material_part, ultra_mirror_part;
  
  vector<transmatrix> ultra_mirrors;  
  
  /** \brief for adjacent directions a,b, next_dir[a][b] is the next direction adjacent to a, in (counter?)clockwise order from b */
  int next_dir[32][32];
  
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
  /** the number of levels in SL2 */
  int steps;
  
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
  vector<array<array<array<transmatrix, 6>, 32>, 32>> Tf;
  transmatrix corners;
  ld alpha;
  int area;
  int pshid[3][8][32][32][8];
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
  };
#line 473 "geometry.cpp"
  static const ld hcrossf7 = 0.620672, hexf7 = 0.378077, tessf7 = 1.090550, hexhexdist7 = 0.566256;
#line 476 "geometry.cpp"
  bool scale_used();
#line 700 "geometry.cpp"
  transmatrix xspinpush(ld dir, ld dist);
#line 707 "geometry.cpp"
  extern purehookset hooks_swapdim;
  namespace geom3 {
#line 737 "geometry.cpp"
    ld factor_to_projection(ld fac);
#line 741 "geometry.cpp"
    ld lev_to_factor(ld lev);
#line 747 "geometry.cpp"
    ld factor_to_lev(ld fac);
#line 753 "geometry.cpp"
    void do_auto_eye();
#line 765 "geometry.cpp"
    ld scale_at_lev(ld lev);
#line 770 "geometry.cpp"
    extern string invalid;
#line 772 "geometry.cpp"
    ld actual_wall_height();
    }
  namespace geom3 {
#line 895 "geometry.cpp"
    void apply_always3();
    #if MAXMDIM >= 4
#line 914 "geometry.cpp"
    void switch_always3();
    #endif
#line 926 "geometry.cpp"
    void switch_tpp();
#line 947 "geometry.cpp"
    void switch_fpp();
    }
#line 996 "geometry.cpp"
  extern geometry_information *cgip;
#line 997 "geometry.cpp"
  extern map<string, geometry_information> cgis;
#line 1000 "geometry.cpp"
  #define cgi (*cgip)
#line 1003 "geometry.cpp"
  extern int last_texture_step;
#line 1007 "geometry.cpp"
  string cgi_string();
#line 1073 "geometry.cpp"
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
    
    };
    
    struct local_info {
    int last_dir;
    loc relative;
    int first_dir;
    int total_dir;
    };
#line 61 "goldberg.cpp"
    extern local_info draw_li;
#line 63 "goldberg.cpp"
    loc eudir(int d);
#line 85 "goldberg.cpp"
    int length(loc p);
    #if CAP_GP
#line 90 "goldberg.cpp"
    extern loc param;
#line 92 "goldberg.cpp"
    extern hyperpoint next;
#line 102 "goldberg.cpp"
    int fixg6(int x);
#line 104 "goldberg.cpp"
    int get_code(const local_info& li);
#line 112 "goldberg.cpp"
    local_info get_local_info(cell *c);
#line 148 "goldberg.cpp"
    int last_dir(cell *c);
#line 152 "goldberg.cpp"
    loc get_coord(cell *c);
#line 156 "goldberg.cpp"
    int pseudohept_val(cell *c);
#line 222 "goldberg.cpp"
    extern bool do_adjm;
#line 276 "goldberg.cpp"
    extern map<pair<cell*, int>, transmatrix> gp_adj;
#line 278 "goldberg.cpp"
    transmatrix& get_adj(cell *c, int i);
#line 288 "goldberg.cpp"
    void extend_map(cell *c, int d);
#line 527 "goldberg.cpp"
    hyperpoint loctoh_ort(loc at);
#line 614 "goldberg.cpp"
    hyperpoint get_corner_position(const local_info& li, int cid, ld cf IS(3));
#line 624 "goldberg.cpp"
    hyperpoint get_corner_position(cell *c, int cid, ld cf IS(3));
#line 630 "goldberg.cpp"
    void compute_geometry(bool inv);
#line 677 "goldberg.cpp"
    loc human_representation(loc v);
#line 684 "goldberg.cpp"
    eVariation variation_for(loc xy);
#line 899 "goldberg.cpp"
    loc univ_param();
#line 905 "goldberg.cpp"
    void configure();
#line 912 "goldberg.cpp"
    void be_in_triangle(local_info& li);
#line 929 "goldberg.cpp"
    int solve_triangle(int dmain, int d0, int d1, loc at);
#line 980 "goldberg.cpp"
    hyperpoint get_master_coordinates(cell *c);
#line 986 "goldberg.cpp"
    int compute_dist(cell *c, int master_function(cell*));
#line 1010 "goldberg.cpp"
    int dist_2();
#line 1014 "goldberg.cpp"
    int dist_3();
#line 1018 "goldberg.cpp"
    int dist_1();
#line 1022 "goldberg.cpp"
    int dist_1();
#line 1023 "goldberg.cpp"
    int dist_2();
#line 1024 "goldberg.cpp"
    int dist_3();
    #endif
#line 1027 "goldberg.cpp"
    array<heptagon*, 3> get_masters(cell *c);
#line 1050 "goldberg.cpp"
    string operation_name();
#line 1092 "goldberg.cpp"
    extern hrmap *pmap;
#line 1266 "goldberg.cpp"
    hrmap* new_inverse();
#line 1270 "goldberg.cpp"
    hrmap* get_underlying_map();
#line 1271 "goldberg.cpp"
    cell* get_mapped(cell *c);
#line 1272 "goldberg.cpp"
    int untruncated_shift(cell *c);
#line 1274 "goldberg.cpp"
    void delete_mapped(cell *c);
#line 1281 "goldberg.cpp"
    cell *inverse_move(cell *c, int d);
#line 1284 "goldberg.cpp"
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
  #if CAP_GP
  namespace gp {
#line 783 "floorshapes.cpp"
    void clear_plainshapes();
    }
  #endif
#line 853 "floorshapes.cpp"
  void set_no_floor();
#line 860 "floorshapes.cpp"
  void set_floor(floorshape& sh);
#line 867 "floorshapes.cpp"
  void set_floor(hpcshape& sh);
#line 875 "floorshapes.cpp"
  void set_floor(const transmatrix& spin, hpcshape& sh);
#line 882 "floorshapes.cpp"
  int shvid(cell *c);
#line 941 "floorshapes.cpp"
  struct dqi_poly *draw_shapevec(cell *c, const transmatrix& V, const vector<hpcshape> &shv, color_t col, PPR prio IS(PPR::DEFAULT));
#line 978 "floorshapes.cpp"
  void draw_floorshape(cell *c, const transmatrix& V, const floorshape &fsh, color_t col, PPR prio IS(PPR::DEFAULT));
#line 983 "floorshapes.cpp"
  void draw_qfi(cell *c, const transmatrix& V, color_t col, PPR prio IS(PPR::DEFAULT), vector<hpcshape> floorshape::* tab IS(&floorshape::b));
#line 1002 "floorshapes.cpp"
  extern bool floorshape_debug;
#line 1003 "floorshapes.cpp"
  void viewmat();
  #endif
  #if MAXMDIM < 4 || !CAP_GL
#line 1041 "floorshapes.cpp"
  void ensure_vertex_number(basic_textureinfo& bti, int qty);
#line 1042 "floorshapes.cpp"
  void ensure_vertex_number(hpcshape& sh);
#line 1043 "floorshapes.cpp"
  void bind_floor_texture(hpcshape& li, int id);
  #endif
  #if MAXMDIM >= 4 && CAP_GL
#line 1048 "floorshapes.cpp"
  extern ld floor_texture_square_size;
#line 1130 "floorshapes.cpp"
  void ensure_vertex_number(basic_textureinfo& bti, int qty);
#line 1139 "floorshapes.cpp"
  void ensure_vertex_number(hpcshape& sh);
#line 1143 "floorshapes.cpp"
  void bind_floor_texture(hpcshape& li, int id);
#line 1149 "floorshapes.cpp"
  const int FLOORTEXTURESIZE = 4096;
#line 1234 "floorshapes.cpp"
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
  transmatrix iadj(heptagon *h, int d) { 
  heptagon *h1 = h->cmove(d); return adj(h1, h->c.spin(d));
  }
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
  
  virtual transmatrix spin_to(cell *c, int d, ld bonus=0);
  virtual transmatrix spin_from(cell *c, int d, ld bonus=0);
  
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
  // printf("Deleting hyperbolic map: %p\n", hr::voidp(this));
  clearfrom(origin);
  }
  void verify() override { verifycells(origin); }
  void virtualRebase(heptagon*& base, transmatrix& at) override;
  };
#line 132 "cell.cpp"
  int dirdiff(int dd, int t);
#line 139 "cell.cpp"
  extern int cellcount;
#line 141 "cell.cpp"
  void destroy_cell(cell *c);
#line 146 "cell.cpp"
  cell *newCell(int type, heptagon *master);
#line 158 "cell.cpp"
  extern hrmap *currentmap;
#line 159 "cell.cpp"
  extern vector<hrmap*> allmaps;
#line 161 "cell.cpp"
  hrmap *newAltMap(heptagon *o);
#line 170 "cell.cpp"
  heptagon* hyperbolic_origin();
#line 193 "cell.cpp"
  cell *createMov(cell *c, int d);
#line 280 "cell.cpp"
  void eumerge(cell* c1, int s1, cell *c2, int s2, bool mirror);
#line 288 "cell.cpp"
  extern hookset<hrmap*()> hooks_newmap;
#line 291 "cell.cpp"
  void initcells();
#line 331 "cell.cpp"
  void clearcell(cell *c);
#line 348 "cell.cpp"
  extern heptagon deletion_marker;
#line 361 "cell.cpp"
  void clearHexes(heptagon *at);
#line 380 "cell.cpp"
  void clear_heptagon(heptagon *at);
#line 385 "cell.cpp"
  void clearfrom(heptagon *at);
#line 429 "cell.cpp"
  void verifycell(cell *c);
#line 443 "cell.cpp"
  void verifycells(heptagon *at);
#line 454 "cell.cpp"
  int compdist(int dx[]);
#line 471 "cell.cpp"
  int celldist(cell *c);
#line 497 "cell.cpp"
  static const int ALTDIST_BOUNDARY = 99999;
  static const int ALTDIST_UNKNOWN = 99998;
  static const int ALTDIST_ERROR = 90000;
#line 502 "cell.cpp"
  int celldistAlt(cell *c);
#line 557 "cell.cpp"
  int updir(heptagon *h);
#line 571 "cell.cpp"
  int updir_alt(heptagon *h);
#line 588 "cell.cpp"
  static const int RPV_MODULO = 5;
  static const int RPV_RAND = 0;
  static const int RPV_ZEBRA = 1;
  static const int RPV_EMERALD = 2;
  static const int RPV_PALACE = 3;
  static const int RPV_CYCLE = 4;
#line 602 "cell.cpp"
  bool randpattern(cell *c, int rval);
#line 645 "cell.cpp"
  string describeRPM(eLand l);
#line 665 "cell.cpp"
  int randpatternCode(cell *c, int rval);
#line 680 "cell.cpp"
  #define RANDITER 31
#line 685 "cell.cpp"
  void clearMemoRPM();
#line 690 "cell.cpp"
  bool randpatternMajority(cell *c, int ival, int iterations);
#line 717 "cell.cpp"
  bool geometry_supports_cdata();
#line 739 "cell.cpp"
  bool dmeq(int a, int b);
#line 922 "cell.cpp"
  gp::loc pseudocoords(cell *c);
#line 927 "cell.cpp"
  cdata *arcmCdata(cell *c);
#line 934 "cell.cpp"
  int getCdata(cell *c, int j);
#line 953 "cell.cpp"
  int getBits(cell *c);
#line 972 "cell.cpp"
  cell *heptatdir(cell *c, int d);
#line 982 "cell.cpp"
  int heptdistance(heptagon *h1, heptagon *h2);
#line 1000 "cell.cpp"
  int heptdistance(cell *c1, cell *c2);
#line 1010 "cell.cpp"
  extern set<cell*> keep_distances_from;
#line 1016 "cell.cpp"
  void compute_saved_distances(cell *c1, int max_range, int climit);
#line 1024 "cell.cpp"
  void permanent_long_distances(cell *c1);
#line 1032 "cell.cpp"
  void erase_saved_distances();
#line 1039 "cell.cpp"
  int max_saved_distance(cell *c);
#line 1045 "cell.cpp"
  cell *random_in_distance(cell *c, int d);
#line 1053 "cell.cpp"
  int bounded_celldistance(cell *c1, cell *c2);
#line 1074 "cell.cpp"
  int clueless_celldistance(cell *c1, cell *c2);
#line 1091 "cell.cpp"
  int celldistance(cell *c1, cell *c2);
#line 1141 "cell.cpp"
  vector<cell*> build_shortest_path(cell *c1, cell *c2);
#line 1194 "cell.cpp"
  void clearCellMemory();
#line 1210 "cell.cpp"
  bool isNeighbor(cell *c1, cell *c2);
#line 1215 "cell.cpp"
  bool isNeighborCM(cell *c1, cell *c2);
#line 1220 "cell.cpp"
  int neighborId(cell *ofWhat, cell *whichOne);
#line 1225 "cell.cpp"
  extern int mine_adjacency_rule;
#line 1227 "cell.cpp"
  extern map<cell*, vector<cell*>> adj_memo;
#line 1229 "cell.cpp"
  bool geometry_has_alt_mine_rule();
#line 1236 "cell.cpp"
  vector<cell*> adj_minefield_cells(cell *c);
#line 1275 "cell.cpp"
  vector<int> reverse_directions(cell *c, int dir);
#line 1284 "cell.cpp"
  vector<int> reverse_directions(heptagon *c, int dir);
#line 1327 "cell.cpp"
  bool standard_tiling();
#line 1331 "cell.cpp"
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
#line 945 "multi.cpp"
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
#line 103 "shmup.cpp"
    extern eLand delayed_safety_land;
#line 107 "shmup.cpp"
    extern multimap<cell*, monster*> monstersAt;
#line 110 "shmup.cpp"
    typedef multimap<cell*, monster*>::iterator mit;
#line 243 "shmup.cpp"
    extern monster *pc[MAXPLAYER], *mousetarget, *lmousetarget;
#line 245 "shmup.cpp"
    extern int curtime, nextmove, nextdragon;
#line 253 "shmup.cpp"
    extern hookset<bool(shmup::monster*)> hooks_kill;
#line 280 "shmup.cpp"
    void pushmonsters();
#line 290 "shmup.cpp"
    void popmonsters();
#line 309 "shmup.cpp"
    void degradeDemons();
#line 317 "shmup.cpp"
    extern double playerturn[MAXPLAYER], playergo[MAXPLAYER], playerstrafe[MAXPLAYER], playerturny[MAXPLAYER], playergoturn[MAXPLAYER], godir[MAXPLAYER];
#line 318 "shmup.cpp"
    extern transmatrix playersmallspin[MAXPLAYER];
#line 366 "shmup.cpp"
    void visibleFor(int t);
#line 428 "shmup.cpp"
    void killThePlayer(eMonster m);
#line 590 "shmup.cpp"
    extern transmatrix swordmatrix[MAXPLAYER];
#line 633 "shmup.cpp"
    void activateArrow(cell *c);
#line 1339 "shmup.cpp"
    monster *getPlayer();
#line 1362 "shmup.cpp"
    int reflect(cell*& c2, cell*& mbase, transmatrix& nat);
#line 1453 "shmup.cpp"
    bool verifyTeleport();
#line 1465 "shmup.cpp"
    void teleported();
#line 1515 "shmup.cpp"
    eItem targetRangedOrb(orbAction a);
#line 1601 "shmup.cpp"
    int protect_pid(int i);
#line 1831 "shmup.cpp"
    bool dragonbreath(cell *dragon);
#line 2461 "shmup.cpp"
    void fixStorage();
#line 2473 "shmup.cpp"
    extern hookset<bool(int)> hooks_turn;
#line 2475 "shmup.cpp"
    void turn(int delta);
#line 2734 "shmup.cpp"
    void recall();
#line 2748 "shmup.cpp"
    void init();
#line 2778 "shmup.cpp"
    bool boatAt(cell *c);
#line 2788 "shmup.cpp"
    extern hookset<bool(const transmatrix&, cell*, shmup::monster*)> hooks_draw;
#line 2790 "shmup.cpp"
    void clearMonsters();
#line 2800 "shmup.cpp"
    void clearMemory();
#line 2830 "shmup.cpp"
    cell *playerpos(int i);
#line 2835 "shmup.cpp"
    bool playerInBoat(int i);
#line 2840 "shmup.cpp"
    void destroyBoats(cell *c);
#line 2846 "shmup.cpp"
    void virtualRebase(shmup::monster *m);
#line 2850 "shmup.cpp"
    extern hookset<bool(shmup::monster*, string&)> hooks_describe;
#line 2852 "shmup.cpp"
    void addShmupHelp(string& out);
#line 2874 "shmup.cpp"
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
#line 84 "pattern2.cpp"
  int chessvalue(cell *c);
#line 98 "pattern2.cpp"
  int emeraldval(heptagon *h);
#line 100 "pattern2.cpp"
  int emeraldval(cell *c);
#line 149 "pattern2.cpp"
  int cdist50(cell *c);
#line 176 "pattern2.cpp"
  bool polara50(cell *c);
#line 188 "pattern2.cpp"
  bool polarb50(cell *c);
#line 205 "pattern2.cpp"
  int fiftyval049(heptagon *h);
#line 221 "pattern2.cpp"
  int fiftyval049(cell *c);
#line 258 "pattern2.cpp"
  int fiftyval200(cell *c);
#line 296 "pattern2.cpp"
  int zebra40(cell *c);
#line 357 "pattern2.cpp"
  int zebra3(cell *c);
  #if CAP_FIELD
  namespace fieldpattern {
#line 377 "pattern2.cpp"
    pair<int, bool> fieldval(cell *c);
#line 383 "pattern2.cpp"
    int fieldval_uniq(cell *c);
#line 425 "pattern2.cpp"
    int fieldval_uniq_rand(cell *c, int randval);
    }
  #endif
#line 466 "pattern2.cpp"
  int getHemisphere(heptagon *h, int which);
#line 495 "pattern2.cpp"
  int getHemisphere(cell *c, int which);
  namespace patterns {
#line 571 "pattern2.cpp"
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
#line 656 "pattern2.cpp"
    int downdir(cell *c, const cellfunction& cf);
#line 739 "pattern2.cpp"
    void val38(cell *c, patterninfo &si, int sub, int pat);
#line 967 "pattern2.cpp"
    extern ePattern whichPattern;
#line 969 "pattern2.cpp"
    extern int subpattern_flags;
#line 1006 "pattern2.cpp"
    patterninfo getpatterninfo(cell *c, ePattern pat, int sub);
#line 1227 "pattern2.cpp"
    inline patterninfo getpatterninfo0(cell *c) {
    return getpatterninfo(c, whichPattern, subpattern_flags);
    }
    }
#line 1234 "pattern2.cpp"
  bool geosupport_chessboard();
#line 1247 "pattern2.cpp"
  int geosupport_threecolor();
#line 1268 "pattern2.cpp"
  int geosupport_football();
#line 1298 "pattern2.cpp"
  int pattern_threecolor(cell *c);
#line 1422 "pattern2.cpp"
  bool pseudohept(cell *c);
#line 1458 "pattern2.cpp"
  bool kraken_pseudohept(cell *c);
#line 1482 "pattern2.cpp"
  bool warptype(cell *c);
#line 1491 "pattern2.cpp"
  extern map<char, colortable> colortables;
  namespace patterns {
#line 1540 "pattern2.cpp"
    extern int canvasback;
#line 1541 "pattern2.cpp"
    extern int subcanvas;
#line 1542 "pattern2.cpp"
    extern bool displaycodes;
#line 1543 "pattern2.cpp"
    extern char whichShape;
#line 1544 "pattern2.cpp"
    extern char whichCanvas;
#line 1545 "pattern2.cpp"
    extern bool innerwalls;
#line 1553 "pattern2.cpp"
    extern string color_formula;
#line 1700 "pattern2.cpp"
    extern hookset<int(cell*)> hooks_generate_canvas;
#line 1702 "pattern2.cpp"
    extern int jhole;
#line 1703 "pattern2.cpp"
    extern int jblock;
#line 1704 "pattern2.cpp"
    extern int rwalls;
#line 1706 "pattern2.cpp"
    void edit_rwalls();
#line 1712 "pattern2.cpp"
    int generateCanvas(cell *c);
#line 2105 "pattern2.cpp"
    void showPrePattern();
#line 2106 "pattern2.cpp"
    void showPrePatternNoninstant();
#line 2115 "pattern2.cpp"
    void showPattern();
#line 2291 "pattern2.cpp"
    bool compatible(cpatterntype oldp, cpatterntype newp);
#line 2401 "pattern2.cpp"
    extern cpatterntype cgroup, old_cgroup;
#line 2472 "pattern2.cpp"
    void computeCgroup();
#line 2499 "pattern2.cpp"
    void pushChangeablePatterns();
    }
#line 2505 "pattern2.cpp"
  bool is_master(cell *c);
  namespace linepatterns {
#line 2513 "pattern2.cpp"
    struct linepattern {
    string lpname;
    color_t color;
    ld multiplier;
    function<bool()> is_available;
    function<void(linepattern*)> renderer;
    
    linepattern(string _lpname, color_t _color, function<bool()> _av, function<void(linepattern*)> _rend) : 
    lpname(_lpname), color(_color), multiplier(1), is_available(_av), renderer(_rend) {}
    };
#line 2673 "pattern2.cpp"
    extern linepattern patZebraTriangles;
#line 2686 "pattern2.cpp"
    extern linepattern patZebraLines;
#line 2739 "pattern2.cpp"
    extern linepattern patPalace;
#line 2884 "pattern2.cpp"
    extern linepattern patTriTree, patTriRings, patTriOther;
#line 2887 "pattern2.cpp"
    extern vector<linepattern*> patterns;
#line 2897 "pattern2.cpp"
    void clearAll();
#line 2901 "pattern2.cpp"
    extern ld width;
#line 2903 "pattern2.cpp"
    void drawAll();
#line 2922 "pattern2.cpp"
    void showMenu();
    }

  // implemented in: mapeditor.cpp

  namespace mapeditor {
#line 13 "mapeditor.cpp"
    extern bool drawing_tool;
#line 16 "mapeditor.cpp"
    enum eShapegroup { sgPlayer, sgMonster, sgItem, sgFloor, sgWall };
    static const int USERSHAPEGROUPS = 5;
#line 20 "mapeditor.cpp"
    extern color_t dtfill;
#line 21 "mapeditor.cpp"
    extern color_t dtcolor;
#line 22 "mapeditor.cpp"
    extern ld dtwidth;
#line 156 "mapeditor.cpp"
    void clear_dtshapes();
#line 158 "mapeditor.cpp"
    void draw_dtshapes();
#line 193 "mapeditor.cpp"
    void dt_add_line(hyperpoint h1, hyperpoint h2, int maxl);
#line 212 "mapeditor.cpp"
    void dt_add_circle(hyperpoint h1, hyperpoint h2);
#line 226 "mapeditor.cpp"
    void dt_add_text(hyperpoint h, ld size, string cap);
#line 260 "mapeditor.cpp"
    void dt_add_free(hyperpoint h);
#line 279 "mapeditor.cpp"
    void dt_erase(hyperpoint h);
#line 297 "mapeditor.cpp"
    extern hyperpoint lstart;
#line 305 "mapeditor.cpp"
    struct editwhat {
    double dist;
    int rotid, symid, pointid;
    bool side;
    cell *c;
    };
#line 312 "mapeditor.cpp"
    extern editwhat ew, ewsearch;
#line 313 "mapeditor.cpp"
    extern bool autochoose;
#line 315 "mapeditor.cpp"
    void scaleall(ld z, bool keep_mouse);
    #if CAP_EDIT
#line 342 "mapeditor.cpp"
    extern map<int, cell*> modelcell;
#line 346 "mapeditor.cpp"
    void applyModelcell(cell *c);
    #endif
#line 915 "mapeditor.cpp"
    extern bool drawplayer;
#line 917 "mapeditor.cpp"
    extern cell *drawcell;
    #if CAP_EDIT
#line 1052 "mapeditor.cpp"
    extern unordered_set<cell*> affected;
#line 1053 "mapeditor.cpp"
    extern unordered_set<int> affected_id;
#line 1055 "mapeditor.cpp"
    void showMapEditor();
#line 1098 "mapeditor.cpp"
    eShapegroup drawcellShapeGroup();
#line 1106 "mapeditor.cpp"
    int drawcellShapeID();
#line 1475 "mapeditor.cpp"
    extern transmatrix drawtrans, drawtransnew;
#line 1487 "mapeditor.cpp"
    void drawGhosts(cell *c, const transmatrix& V, int ct);
#line 1549 "mapeditor.cpp"
    void drawGrid();
#line 1665 "mapeditor.cpp"
    void showDrawEditor();
    #endif
#line 2549 "mapeditor.cpp"
    void initdraw(cell *c);
#line 2564 "mapeditor.cpp"
    void queue_hcircle(transmatrix Ctr, ld radius);
    #if CAP_POLY
#line 2578 "mapeditor.cpp"
    bool haveUserShape(eShapegroup group, int id);
    #endif
    #if CAP_TEXTURE      
#line 2588 "mapeditor.cpp"
    void draw_texture_ghosts(cell *c, const transmatrix& V);
    #endif
    #if CAP_POLY
#line 2624 "mapeditor.cpp"
    bool drawUserShape(const transmatrix& V, eShapegroup group, int id, color_t color, cell *c, PPR prio IS(PPR::DEFAULT));
    #endif
#line 2765 "mapeditor.cpp"
    void map_settings();
    }
  #if CAP_EDIT
#line 2800 "mapeditor.cpp"
  extern string levelfile;
#line 2801 "mapeditor.cpp"
  extern const char *loadlevel;
#line 2802 "mapeditor.cpp"
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
  extern hookset<bool(int sym, int uni)> hooks_handleKey;
#line 44 "graph.cpp"
  extern hookset<bool(cell *c, const transmatrix& V)> hooks_drawcell;
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
#line 195 "graph.cpp"
  int flip_dark(int f, int a0, int a1);
#line 217 "graph.cpp"
  extern int lightat, safetyat;
#line 218 "graph.cpp"
  void drawLightning();
#line 219 "graph.cpp"
  void drawSafety();
#line 298 "graph.cpp"
  ld cheilevel(ld v);
#line 302 "graph.cpp"
  transmatrix chei(const transmatrix V, int a, int b);
#line 357 "graph.cpp"
  void drawPlayerEffects(const transmatrix& V, cell *c, bool onplayer);
  namespace tortoise {
#line 518 "graph.cpp"
    int getMatchColor(int bits);
    }
#line 539 "graph.cpp"
  extern bool ivoryz;
#line 596 "graph.cpp"
  extern bool noshadow;
  #if CAP_SHAPES
#line 599 "graph.cpp"
  void ShadowV(const transmatrix& V, const hpcshape& bp, PPR prio IS(PPR::MONSTER_SHADOW));
  #endif
#line 724 "graph.cpp"
  bool drawstar(cell *c);
#line 732 "graph.cpp"
  bool drawing_usershape_on(cell *c, mapeditor::eShapegroup sg);
#line 740 "graph.cpp"
  color_t kind_outline(eItem it);
#line 750 "graph.cpp"
  transmatrix face_the_player(const transmatrix V);
#line 759 "graph.cpp"
  hpcshape& orbshape(eOrbshape s);
#line 773 "graph.cpp"
  color_t orb_auxiliary_color(eItem it);
#line 790 "graph.cpp"
  bool drawItemType(eItem it, cell *c, const transmatrix& V, color_t icol, int pticks, bool hidden);
  #if CAP_SHAPES
#line 1028 "graph.cpp"
  void drawTerraWarrior(const transmatrix& V, int t, int hp, double footphase);
  #endif
#line 1044 "graph.cpp"
  void drawPlayer(eMonster m, cell *where, const transmatrix& V, color_t col, double footphase, bool stop IS(false));
#line 1215 "graph.cpp"
  int wingphase(int period, int phase IS(0));
#line 1306 "graph.cpp"
  bool drawMonsterType(eMonster m, cell *where, const transmatrix& V1, color_t col, double footphase, color_t asciicol);
#line 2372 "graph.cpp"
  extern transmatrix playerV;
#line 2374 "graph.cpp"
  bool applyAnimation(cell *c, transmatrix& V, double& footphase, int layer);
#line 2472 "graph.cpp"
  int cellcolor(cell *c);
#line 2517 "graph.cpp"
  extern bool dont_face_pc;
#line 2519 "graph.cpp"
  bool drawMonster(const transmatrix& Vparam, int ct, cell *c, color_t col, color_t asciicol);
#line 2956 "graph.cpp"
  int haveaura();
#line 2969 "graph.cpp"
  void clearaura();
#line 2989 "graph.cpp"
  void addauraspecial(hyperpoint h, color_t col, int dir);
#line 2996 "graph.cpp"
  void addaura(hyperpoint h, color_t col, int fd);
#line 3029 "graph.cpp"
  void drawaura();
#line 3174 "graph.cpp"
  extern colortable minecolors;
#line 3179 "graph.cpp"
  extern colortable distcolors;
#line 3195 "graph.cpp"
  int countMinesAround(cell *c);
#line 3203 "graph.cpp"
  transmatrix applyPatterndir(cell *c, const patterns::patterninfo& si);
#line 3211 "graph.cpp"
  transmatrix applyDowndir(cell *c, const cellfunction& cf);
#line 3262 "graph.cpp"
  int celldistAltPlus(cell *c);
#line 3268 "graph.cpp"
  color_t reptilecolor(cell *c);
#line 3296 "graph.cpp"
  extern colortable nestcolors;
#line 3300 "graph.cpp"
  void init_floorcolors();
#line 3346 "graph.cpp"
  color_t magma_color(int id);
#line 3360 "graph.cpp"
  bool has_nice_dual();
#line 3380 "graph.cpp"
  bool is_nice_dual(cell *c);
#line 3384 "graph.cpp"
  bool use_swapped_duals();
  #if CAP_SHAPES
#line 3389 "graph.cpp"
  void floorShadow(cell *c, const transmatrix& V, color_t col);
#line 3402 "graph.cpp"
  bool use_warp_graphics();
#line 3409 "graph.cpp"
  void escherSidewall(cell *c, int sidepar, const transmatrix& V, color_t col);
#line 3438 "graph.cpp"
  bool placeSidewall(cell *c, int i, int sidepar, const transmatrix& V, color_t col);
  #endif
#line 3483 "graph.cpp"
  extern color_t stdgridcolor;
#line 3485 "graph.cpp"
  int gridcolor(cell *c1, cell *c2);
  #if CAP_SHAPES
#line 3509 "graph.cpp"
  void pushdown(cell *c, int& q, const transmatrix &V, double down, bool rezoom, bool repriority);
  #endif
#line 3570 "graph.cpp"
  int shallow(cell *c);
#line 3591 "graph.cpp"
  extern bool bright;
#line 3594 "graph.cpp"
  int getfd(cell *c);
#line 3654 "graph.cpp"
  extern bool just_gmatrix;
#line 3656 "graph.cpp"
  int colorhash(color_t i);
#line 3660 "graph.cpp"
  bool isWall3(cell *c, color_t& wcol);
#line 3669 "graph.cpp"
  bool isWall3(cell *c);
#line 3671 "graph.cpp"
  bool isSulphuric(eWall w);
#line 3679 "graph.cpp"
  color_t transcolor(cell *c, cell *c2, color_t wcol);
#line 3712 "graph.cpp"
  int get_darkval(cell *c, int d);
#line 3745 "graph.cpp"
  ld mousedist(transmatrix T);
#line 3756 "graph.cpp"
  extern int noclipped;
#line 3758 "graph.cpp"
  extern bool frustum_culling;
#line 3812 "graph.cpp"
  extern ld precise_width;
#line 3816 "graph.cpp"
  extern bool fat_edges;
#line 3818 "graph.cpp"
  void gridline(const transmatrix& V1, const hyperpoint h1, const transmatrix& V2, const hyperpoint h2, color_t col, int prec);
#line 3851 "graph.cpp"
  void gridline(const transmatrix& V, const hyperpoint h1, const hyperpoint h2, color_t col, int prec);
#line 3855 "graph.cpp"
  int wall_offset(cell *c);
#line 3861 "graph.cpp"
  void queue_transparent_wall(const transmatrix& V, hpcshape& sh, color_t color);
  #if MAXMDIM >= 4
#line 3874 "graph.cpp"
  int ceiling_category(cell *c);
  #endif
#line 3988 "graph.cpp"
  void set_detail_level(const transmatrix& V);
#line 4022 "graph.cpp"
  void drawBubble(cell *c, color_t col, string s, ld size);
#line 4030 "graph.cpp"
  void drawFlash(cell *c);
#line 4033 "graph.cpp"
  void drawBigFlash(cell *c);
#line 4037 "graph.cpp"
  void drawParticleSpeed(cell *c, color_t col, int speed);
#line 4042 "graph.cpp"
  void drawParticle(cell *c, color_t col, int maxspeed IS(100));
#line 4046 "graph.cpp"
  void drawDirectionalParticle(cell *c, int dir, color_t col, int maxspeed IS(100));
#line 4058 "graph.cpp"
  void drawParticles(cell *c, color_t col, int qty, int maxspeed IS(100));
#line 4062 "graph.cpp"
  void drawFireParticles(cell *c, int qty, int maxspeed IS(100));
#line 4067 "graph.cpp"
  void fallingFloorAnimation(cell *c, eWall w IS(waNone), eMonster m IS(moNone));
#line 4075 "graph.cpp"
  void fallingMonsterAnimation(cell *c, eMonster m, int id IS(multi::cpid));
  #if CAP_QUEUE
#line 4135 "graph.cpp"
  void queuecircleat1(cell *c, const transmatrix& V, double rad, color_t col);
#line 4175 "graph.cpp"
  void queuecircleat(cell *c, double rad, color_t col);
  #endif
#line 4187 "graph.cpp"
  cell *forwardcell();
#line 4193 "graph.cpp"
  void drawMarkers();
  #if CAP_QUEUE
#line 4413 "graph.cpp"
  void draw_flash(struct flashdata& f, const transmatrix& V, bool& kill);
  #endif
#line 4502 "graph.cpp"
  bool allowIncreasedSight();
#line 4516 "graph.cpp"
  bool allowChangeRange();
#line 4528 "graph.cpp"
  extern purehookset hooks_drawmap;
#line 4530 "graph.cpp"
  extern transmatrix actual_view_transform;
#line 4532 "graph.cpp"
  ld wall_radar(cell *c, transmatrix T, transmatrix LPe, ld max);
#line 4552 "graph.cpp"
  void make_actual_view();
#line 4593 "graph.cpp"
  transmatrix cview();
#line 4597 "graph.cpp"
  void precise_mouseover();
#line 4638 "graph.cpp"
  extern transmatrix Viewbase;
#line 4640 "graph.cpp"
  extern bool no_wall_rendering;
#line 4642 "graph.cpp"
  void drawthemap();
#line 4817 "graph.cpp"
  void drawmovestar(double dx, double dy);
#line 4871 "graph.cpp"
  extern bool dronemode;
#line 4875 "graph.cpp"
  extern int corner_centering;
#line 4877 "graph.cpp"
  extern bool permaside;
#line 4879 "graph.cpp"
  void calcparam();
#line 4940 "graph.cpp"
  extern function<void()> wrap_drawfullmap;
#line 4944 "graph.cpp"
  void drawfullmap();
#line 5013 "graph.cpp"
  void gamescreen(int _darken);
#line 5089 "graph.cpp"
  extern bool nohelp;
#line 5091 "graph.cpp"
  void normalscreen();
#line 5120 "graph.cpp"
  extern vector< function<void()> > screens;
#line 5123 "graph.cpp"
  template<class T> void pushScreen(const T& x) { screens.push_back(x); } 
  inline void popScreen() { if(isize(screens)>1) screens.pop_back(); }
  inline void popScreenAll() { while(isize(screens)>1) popScreen(); }
  typedef void (*cfunction)();
#line 5129 "graph.cpp"
  cfunction current_screen_cfunction();
#line 5136 "graph.cpp"
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
  }
#line 5157 "graph.cpp"
  extern int cmode;
#line 5159 "graph.cpp"
  void drawscreen();
#line 5265 "graph.cpp"
  void restartGraph();
#line 5275 "graph.cpp"
  void clearAnimations();
#line 5300 "graph.cpp"
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
#line 5317 "graph.cpp"
  extern array<map<cell*, animation>, ANIMLAYERS> animations;
#line 5319 "graph.cpp"
  int revhint(cell *c, int hint);
#line 5324 "graph.cpp"
  transmatrix adj(const movei& m);
#line 5329 "graph.cpp"
  transmatrix iadj(const movei& m);
#line 5334 "graph.cpp"
  void animateMovement(const movei& m, int layer);
#line 5356 "graph.cpp"
  void animateAttack(const movei& m, int layer);
#line 5369 "graph.cpp"
  void indAnimateMovement(const movei& m, int layer);
#line 5389 "graph.cpp"
  void commitAnimations(int layer);
#line 5396 "graph.cpp"
  void drawBug(const cellwalker& cw, color_t col);
#line 5406 "graph.cpp"
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
    grid_color = 0;
    mesh_color = 0;
    master_color = 0xFFFFFF30;
    slave_color = 0xFF000008;
    color_alpha = 128;
    gsplits = 1;
    texture_tuned = false;
    }
    
    };
#line 135 "textures.cpp"
    extern cpatterntype cgroup;
#line 169 "textures.cpp"
    extern texture_config config;
#line 171 "textures.cpp"
    extern bool saving;
#line 454 "textures.cpp"
    extern bool texture_aura;
#line 456 "textures.cpp"
    bool using_aura();
    #if CAP_EDIT
#line 1221 "textures.cpp"
    void start_editor();
    #endif
#line 1233 "textures.cpp"
    void showMenu();
#line 1538 "textures.cpp"
    extern bool texturesym;
#line 1555 "textures.cpp"
    void drawPixel(cell *c, hyperpoint h, color_t col);
#line 1559 "textures.cpp"
    extern cell *where;
#line 1561 "textures.cpp"
    void drawPixel(hyperpoint h, color_t col);
#line 1583 "textures.cpp"
    void drawLine(hyperpoint h1, hyperpoint h2, color_t col, int steps IS(10));
    #if CAP_TEXTURE
#line 1672 "textures.cpp"
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
#line 59 "hprint.cpp"
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
  
  #if !CAP_SDL && CAP_TIMEOFDAY
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
  
#line 284 "hprint.cpp"
  void print(hstream& hs, cld x);
#line 300 "hprint.cpp"
  string fts_fixed(ld x, int prec IS(6));
#line 336 "hprint.cpp"
  string cts(char c);
#line 337 "hprint.cpp"
  string llts(long long i);
#line 343 "hprint.cpp"
  string itsh(unsigned int i);
#line 344 "hprint.cpp"
  string itsh(int i);
#line 345 "hprint.cpp"
  string itsh2(int i);
#line 347 "hprint.cpp"
  string itsh(unsigned long long i);
#line 354 "hprint.cpp"
  extern logger hlog;
#line 359 "hprint.cpp"
  ld kz(ld x);
#line 364 "hprint.cpp"
  hyperpoint kz(hyperpoint h);
#line 369 "hprint.cpp"
  transmatrix kz(transmatrix h);
#line 377 "hprint.cpp"
  template<class T> vector<T> kz(vector<T> v) {
  for(auto& el: v) el = kz(el);
  return v;
  }
#line 383 "hprint.cpp"
  string pick123();
#line 384 "hprint.cpp"
  string pick12();
#line 387 "hprint.cpp"
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
#line 402 "hprint.cpp"
  string as_cstring(string o);
#line 411 "hprint.cpp"
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
#line 423 "hprint.cpp"
  string its(mpq_class x);
#line 424 "hprint.cpp"
  void print(hstream& hs, const mpq_class& x);
  #endif
#line 430 "hprint.cpp"
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
  #if CAP_PROFILING
#line 90 "util.cpp"
  void profile_start(int t);
#line 91 "util.cpp"
  void profile_stop(int t);
  #endif
  #if !CAP_PROFILING
#line 108 "util.cpp"
  #define profile_frame()
  #define profile_start(t)
  #define profile_stop(t)
  #define profile_info()
  #endif
#line 115 "util.cpp"
  extern purehookset hooks_tests;
#line 117 "util.cpp"
  string simplify(const string& s);
#line 123 "util.cpp"
  bool appears(const string& haystack, const string& needle);
#line 128 "util.cpp"
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
#line 437 "util.cpp"
  ld parseld(const string& s);
#line 443 "util.cpp"
  string parser_help();
#line 449 "util.cpp"
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
#line 586 "util.cpp"
  bignum hrand(bignum b);
#line 597 "util.cpp"
  void operator ++(bignum &b, int);
#line 612 "util.cpp"
  void operator --(bignum &b, int);
#line 644 "util.cpp"
  string short_form(bignum b);
  #if CAP_ZLIB
#line 679 "util.cpp"
  string compress_string(string s);
#line 700 "util.cpp"
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
#line 2322 "complex.cpp"
  void doLightningNextTurn();
#line 2413 "complex.cpp"
  void livecaves();
#line 2578 "complex.cpp"
  void hurricaneWind();
#line 2625 "complex.cpp"
  void hurricaneMoveBoat(cell *c);
  namespace tortoise {
#line 2664 "complex.cpp"
    extern map<cell*, int> emap;
#line 2665 "complex.cpp"
    extern map<cell*, int> babymap;
#line 2666 "complex.cpp"
    extern int last;
#line 2669 "complex.cpp"
    enum tflag {
    tfShell, tfScute0, tfScute1, tfScute2, tfScute3,
    tfEdge1, tfEdge, tfEdge3,
    tfLongNeck, tfFront, tfRear, tfTail,
    tfEyeHue, tfShellHue, tfScuteHue, tfSkinHue,
    tfShellSat, tfScuteSat, tfSkinSat,
    tfShellDark, tfSkinDark,
    tfCOUNT
    };
#line 2680 "complex.cpp"
    extern const int numbits;
#line 2681 "complex.cpp"
    extern const int mask;
#line 2683 "complex.cpp"
    int getb(cell *where);
#line 2688 "complex.cpp"
    int countBits(int c);
#line 2694 "complex.cpp"
    int getBit(int bits, int id);
#line 2696 "complex.cpp"
    int getRandomBits();
#line 2698 "complex.cpp"
    bool seek();
#line 2699 "complex.cpp"
    extern int seekbits;
#line 2711 "complex.cpp"
    extern bool shading_enabled;
#line 2713 "complex.cpp"
    bool shading_on();
#line 2717 "complex.cpp"
    void updateVals(int delta);
#line 2725 "complex.cpp"
    double getScent(int bits);
#line 2744 "complex.cpp"
    int diff(int bits);
#line 2747 "complex.cpp"
    string measure(int bits);
    }
  namespace dragon {
#line 2754 "complex.cpp"
    extern int whichturn; // which turn has the target been set on
#line 2755 "complex.cpp"
    extern cell *target; // actually for all Orb of Control
#line 2773 "complex.cpp"
    cell *findhead(cell *c);
#line 2802 "complex.cpp"
    int bodypart(cell *c, cell *head);
#line 2819 "complex.cpp"
    void kill(cell *c, eMonster who);
#line 2851 "complex.cpp"
    int totalhp(cell *c);
#line 2903 "complex.cpp"
    bool move(const movei& mi);
    }
  namespace sword {
#line 2941 "complex.cpp"
    struct sworddir {
    int angle;
    transmatrix T;
    };
    
    /** dimensions available to the Sword */
    #define SWORDDIM (hybri ? 2 : WDIM)
    
#line 2951 "complex.cpp"
    extern int sword_angles;
#line 2953 "complex.cpp"
    extern array<sworddir, MAXPLAYER> dir;
#line 2957 "complex.cpp"
    void determine_sword_angles();
#line 2972 "complex.cpp"
    cell *pos2(cell *c, int s);
#line 2984 "complex.cpp"
    cell *pos(cell *c, const sworddir& sd, bool rev);
#line 2999 "complex.cpp"
    int orbcount(bool rev);
#line 3001 "complex.cpp"
    cell *pos(int id, bool rev);
#line 3006 "complex.cpp"
    bool at(cell *where, bool noplayer IS(false));
#line 3014 "complex.cpp"
    bool isnear(cell *where);
#line 3021 "complex.cpp"
    sworddir shift(cell *c1, cell *c2, sworddir d);
#line 3049 "complex.cpp"
    sworddir initial(cell *c);
#line 3063 "complex.cpp"
    void reset();
    }
  namespace kraken {
#line 3075 "complex.cpp"
    cell *head(cell *c);
#line 3081 "complex.cpp"
    void kill(cell *c, eMonster who);
#line 3103 "complex.cpp"
    int totalhp(cell *c);
#line 3119 "complex.cpp"
    void attacks();
#line 3156 "complex.cpp"
    void trymove(cell *c);
    }
  #if CAP_FIELD
  namespace prairie {
#line 3231 "complex.cpp"
    void spread(cell *c, cell *from);
#line 3315 "complex.cpp"
    bool no_worms(cell *c);
#line 3321 "complex.cpp"
    bool isriver(cell *c);
#line 3329 "complex.cpp"
    bool nearriver(cell *c);
#line 3351 "complex.cpp"
    cell *next(cell *c, int pv IS(1));
#line 3375 "complex.cpp"
    extern vector<cell*> beaststogen;
#line 3377 "complex.cpp"
    void generateBeast(cell *c);
#line 3431 "complex.cpp"
    void move();
#line 3455 "complex.cpp"
    void generateTreasure(cell *c);
#line 3471 "complex.cpp"
    void treasures();
    }
  #endif
  namespace ca {
#line 3501 "complex.cpp"
    extern ld prob;
#line 3505 "complex.cpp"
    extern eWall wlive;
#line 3507 "complex.cpp"
    extern unordered_set<cell*> changed;
#line 3509 "complex.cpp"
    void list_adj(cell *c);
#line 3517 "complex.cpp"
    string fillup(string s);
#line 3522 "complex.cpp"
    void init();
#line 3567 "complex.cpp"
    void simulate();
    }
  #if CAP_FIELD
  namespace windmap {
#line 3672 "complex.cpp"
    static const int NOWINDBELOW = 8;
    static const int NOWINDFROM = 120;  
#line 3680 "complex.cpp"
    int getId(cell *c);
#line 3692 "complex.cpp"
    extern vector<unsigned char> windcodes;
#line 3708 "complex.cpp"
    void create();
#line 3796 "complex.cpp"
    int at(cell *c);
    }
  #endif
  namespace halloween {
#line 3806 "complex.cpp"
    extern cell *dragoncells[4];
#line 3884 "complex.cpp"
    void getTreat(cell *where);
    }
  namespace dungeon {
#line 4356 "complex.cpp"
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
  void achievement_gain_once(const string& s, char flags IS(0));
#line 141 "achievement.cpp"
  void achievement_log(const char* s, char flags);
#line 171 "achievement.cpp"
  extern void achievement_init();
#line 172 "achievement.cpp"
  extern string myname();
#line 173 "achievement.cpp"
  extern void achievement_close();
#line 179 "achievement.cpp"
  extern void achievement_gain(const char* s, char flags IS(0));
#line 197 "achievement.cpp"
  void achievement_collection(eItem it);
#line 201 "achievement.cpp"
  void achievement_collection2(eItem it, int q);
#line 531 "achievement.cpp"
  void achievement_count(const string& s, int current, int prev);
#line 580 "achievement.cpp"
  void improve_score(int i, eItem what);
#line 595 "achievement.cpp"
  void achievement_score(int cat, int number);
#line 617 "achievement.cpp"
  void improveItemScores();
#line 688 "achievement.cpp"
  void achievement_final(bool really_final);
#line 793 "achievement.cpp"
  extern bool hadtotalvictory;
#line 795 "achievement.cpp"
  void check_total_victory();
#line 810 "achievement.cpp"
  void achievement_victory(bool hyper);
#line 882 "achievement.cpp"
  extern void achievement_pump();
#line 884 "achievement.cpp"
  string get_rich_presence_text();
#line 946 "achievement.cpp"
  void achievement_display();
#line 968 "achievement.cpp"
  bool isAscending(int i);
#line 972 "achievement.cpp"
  int score_default(int i);
  #ifndef HAVE_ACHIEVEMENTS
#line 978 "achievement.cpp"
  int get_sync_status();
#line 979 "achievement.cpp"
  void set_priority_board(int);
  #endif

  // implemented in: arbitrile.cpp

  namespace arb {
#line 15 "arbitrile.cpp"
    extern int affine_limit;
#line 17 "arbitrile.cpp"
    extern bool legacy; /* angleofs command */
#line 20 "arbitrile.cpp"
    
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
    vector<pair<ld, ld>> stretch_shear;
    int repeat_value;
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
    bool have_line, have_ph;
    
    vector<shape> shapes;
    string name;
    string comment;
    
    vector<slider> sliders;
    
    ld cscale;
    string filename;
    
    geometryinfo1& get_geometry();
    eGeometryClass get_class() { return get_geometry().kind; }
    
    ld scale();
    };
#line 64 "arbitrile.cpp"
    extern arbi_tiling current;
#line 66 "arbitrile.cpp"
    extern bool using_slided;
#line 68 "arbitrile.cpp"
    extern arbi_tiling slided;
#line 70 "arbitrile.cpp"
    bool in_slided();
#line 72 "arbitrile.cpp"
    arbi_tiling& current_or_slided();
#line 78 "arbitrile.cpp"
    short& id_of(heptagon *h);
#line 81 "arbitrile.cpp"
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
#line 190 "arbitrile.cpp"
    void load_tile(exp_parser& ep, arbi_tiling& c, bool unit);
#line 225 "arbitrile.cpp"
    void load(const string& fname, bool after_sliding IS(false));
#line 569 "arbitrile.cpp"
    extern map<heptagon*, pair<heptagon*, transmatrix>> arbi_matrix;
#line 571 "arbitrile.cpp"
    extern hrmap *current_altmap;
#line 575 "arbitrile.cpp"
    transmatrix get_adj(arbi_tiling& c, int t, int dl, int xdl);
#line 828 "arbitrile.cpp"
    hrmap *new_map();
#line 830 "arbitrile.cpp"
    void run(string fname);
#line 872 "arbitrile.cpp"
    void sliders_changed();
#line 891 "arbitrile.cpp"
    void set_sliders();
#line 943 "arbitrile.cpp"
    bool in();
#line 945 "arbitrile.cpp"
    extern string tes;
#line 947 "arbitrile.cpp"
    bool linespattern(cell *c);
#line 951 "arbitrile.cpp"
    bool pseudohept(cell *c);
#line 955 "arbitrile.cpp"
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
    #if CAP_ARCM
#line 95 "archimedean.cpp"
    static const int sfPH = 1;
    static const int sfLINE = 2;
    static const int sfCHESS = 4;
    static const int sfTHREE = 8;
    static const int sfSEMILINE = 16;
#line 102 "archimedean.cpp"
    extern archimedean_tiling current;
#line 103 "archimedean.cpp"
    extern archimedean_tiling fake_current;
#line 105 "archimedean.cpp"
    archimedean_tiling& current_or_fake();
#line 116 "archimedean.cpp"
    short& id_of(heptagon *h);
#line 122 "archimedean.cpp"
    short& parent_index_of(heptagon *h);
#line 128 "archimedean.cpp"
    int neighbors_of(heptagon *h);
#line 132 "archimedean.cpp"
    int gcd(int x, int y);
#line 490 "archimedean.cpp"
    extern map<heptagon*, pair<heptagon*, transmatrix>> archimedean_gmatrix;
#line 492 "archimedean.cpp"
    extern hrmap *current_altmap;
#line 502 "archimedean.cpp"
    extern bool use_gmatrix;
#line 753 "archimedean.cpp"
    hrmap *new_map();
#line 873 "archimedean.cpp"
    int fix(heptagon *h, int spin);
#line 1006 "archimedean.cpp"
    bool pseudohept(cell *c);
#line 1017 "archimedean.cpp"
    bool chessvalue(cell *c);
#line 1023 "archimedean.cpp"
    bool linespattern(cell *c);
#line 1027 "archimedean.cpp"
    int threecolor(cell *c);
#line 1050 "archimedean.cpp"
    extern vector<pair<string, int> > samples;
#line 1154 "archimedean.cpp"
    void next_variation();
#line 1162 "archimedean.cpp"
    void enable(archimedean_tiling& arct);
#line 1200 "archimedean.cpp"
    void show();
#line 1404 "archimedean.cpp"
    int degree(heptagon *h);
#line 1408 "archimedean.cpp"
    bool is_vertex(heptagon *h);
#line 1430 "archimedean.cpp"
    int valence();
    #endif
#line 1445 "archimedean.cpp"
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
#line 336 "attack.cpp"
  void stunMonster(cell *c2, eMonster killer, flagtype flags);
#line 368 "attack.cpp"
  bool attackJustStuns(cell *c2, flagtype f, eMonster attacker);
#line 381 "attack.cpp"
  void minerEffect(cell *c);
#line 404 "attack.cpp"
  void killMutantIvy(cell *c, eMonster who);
#line 414 "attack.cpp"
  bignum ivy_total();
#line 420 "attack.cpp"
  void killMonster(cell *c, eMonster who, flagtype deathflags IS(0));
#line 822 "attack.cpp"
  void fightmessage(eMonster victim, eMonster attacker, bool stun, flagtype flags);
#line 924 "attack.cpp"
  bool notthateasy(eMonster m);
#line 929 "attack.cpp"
  bool attackMonster(cell *c, flagtype flags, eMonster killer);
#line 1007 "attack.cpp"
  void pushMonster(const movei& mi);
#line 1019 "attack.cpp"
  void killFriendlyIvy();
#line 1024 "attack.cpp"
  bool monsterPushable(cell *c2);
#line 1028 "attack.cpp"
  bool should_switchplace(cell *c1, cell *c2);
#line 1036 "attack.cpp"
  bool switchplace_prevent(cell *c1, cell *c2, bool checkonly);
#line 1047 "attack.cpp"
  void handle_switchplaces(cell *c1, cell *c2, bool& switchplaces);
#line 1068 "attack.cpp"
  bool flashWouldKill(cell *c, flagtype extra);
#line 1084 "attack.cpp"
  vector<cell*> gun_targets(cell *c);
#line 1098 "attack.cpp"
  void fallMonster(cell *c, flagtype flags IS(0));
#line 1102 "attack.cpp"
  void killHardcorePlayer(int id, flagtype flags);
#line 1130 "attack.cpp"
  void killThePlayer(eMonster m, int id, flagtype flags);
#line 1162 "attack.cpp"
  void killThePlayerAt(eMonster m, cell *c, flagtype flags);
#line 1169 "attack.cpp"
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
#line 1190 "attack.cpp"
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
  #if !CAP_GL
#line 220 "basegraph.cpp"
  void reset_projection();
#line 221 "basegraph.cpp"
  void glflush();
#line 222 "basegraph.cpp"
  bool model_needs_depth();
  #endif
  #if CAP_GL
  #if CAP_VR
#line 229 "basegraph.cpp"
  extern hookset<bool()> hooks_vr_eye_view, hooks_vr_eye_projection;
  #endif
#line 232 "basegraph.cpp"
  void eyewidth_translate(int ed);
#line 241 "basegraph.cpp"
  extern bool new_projection_needed;
#line 243 "basegraph.cpp"
  inline void reset_projection() { new_projection_needed = true; }
#line 246 "basegraph.cpp"
  extern ld lband_shift;
#line 286 "basegraph.cpp"
  bool model_needs_depth();
#line 290 "basegraph.cpp"
  void setGLProjection(color_t col IS(backcolor));
#line 339 "basegraph.cpp"
   int next_p2 (int a );
#line 579 "basegraph.cpp"
  extern purehookset hooks_resetGL;
#line 581 "basegraph.cpp"
  void resetGL();
  #endif
  #if CAP_XGD
#line 615 "basegraph.cpp"
  void gdpush(int t);
#line 619 "basegraph.cpp"
  bool displaychr(int x, int y, int shift, int size, char chr, color_t col);
#line 654 "basegraph.cpp"
  bool displayfr(int x, int y, int b, int size, const string &s, color_t color, int align);
#line 666 "basegraph.cpp"
  bool displaystr(int x, int y, int shift, int size, const string &s, color_t color, int align);
#line 670 "basegraph.cpp"
  bool displaystr(int x, int y, int shift, int size, char const *s, color_t color, int align);
  #endif
  #if !CAP_XGD
#line 676 "basegraph.cpp"
  bool displaystr(int x, int y, int shift, int size, const char *str, color_t color, int align);
#line 739 "basegraph.cpp"
  bool displaystr(int x, int y, int shift, int size, const string &s, color_t color, int align);
#line 743 "basegraph.cpp"
  bool displayfrSP(int x, int y, int sh, int b, int size, const string &s, color_t color, int align, int p);
#line 760 "basegraph.cpp"
  bool displayfr(int x, int y, int b, int size, const string &s, color_t color, int align);
#line 764 "basegraph.cpp"
  bool displaychr(int x, int y, int shift, int size, char chr, color_t col);
  #endif
#line 773 "basegraph.cpp"
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
#line 785 "basegraph.cpp"
  extern vector<msginfo> msgs;
#line 787 "basegraph.cpp"
  extern vector<msginfo> gamelog;
#line 789 "basegraph.cpp"
  void flashMessages();
#line 797 "basegraph.cpp"
  string fullmsg(msginfo& m);
#line 821 "basegraph.cpp"
  void clearMessages();
#line 823 "basegraph.cpp"
  void addMessage(string s, char spamtype);
#line 838 "basegraph.cpp"
  color_t colormix(color_t a, color_t b, color_t c);
#line 844 "basegraph.cpp"
  int rhypot(int a, int b);
#line 846 "basegraph.cpp"
  ld realradius();
#line 860 "basegraph.cpp"
  void drawmessage(const string& s, int& y, color_t col);
#line 896 "basegraph.cpp"
  void drawmessages();
#line 931 "basegraph.cpp"
  color_t gradient(color_t c0, color_t c1, ld v0, ld v, ld v1);
#line 942 "basegraph.cpp"
  void drawCircle(int x, int y, int size, color_t color, color_t fillcolor IS(0));
#line 993 "basegraph.cpp"
  void displayButton(int x, int y, const string& name, int key, int align, int rad IS(0));
#line 1001 "basegraph.cpp"
  #define SETMOUSEKEY 5000
#line 1004 "basegraph.cpp"
  extern char mousekey;
#line 1005 "basegraph.cpp"
  extern char newmousekey;
#line 1007 "basegraph.cpp"
  void displaymm(char c, int x, int y, int rad, int size, const string& title, int align);
#line 1014 "basegraph.cpp"
  bool displayButtonS(int x, int y, const string& name, color_t col, int align, int size);
#line 1022 "basegraph.cpp"
  void displayColorButton(int x, int y, const string& name, int key, int align, int rad, color_t color, color_t color2 IS(0));
#line 1033 "basegraph.cpp"
  extern bool setfsize;
#line 1035 "basegraph.cpp"
  extern bool vsync_off;
#line 1037 "basegraph.cpp"
  void do_setfsize();
#line 1043 "basegraph.cpp"
  void disable_vsync();
  #if CAP_SDL
#line 1050 "basegraph.cpp"
  void setvideomode();
  #endif
#line 1116 "basegraph.cpp"
  extern bool noGUI;
#line 1118 "basegraph.cpp"
  void initgraph();
#line 1201 "basegraph.cpp"
  void cleargraph();
#line 1217 "basegraph.cpp"
  int calcfps();
  namespace subscreens {
#line 1230 "basegraph.cpp"
    extern vector<display_data> player_displays;
#line 1231 "basegraph.cpp"
    extern bool in;
#line 1232 "basegraph.cpp"
    extern int current_player;
#line 1234 "basegraph.cpp"
    bool is_current_player(int id);
#line 1239 "basegraph.cpp"
    void prepare();
#line 1259 "basegraph.cpp"
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
  extern hookset<int(cell*, bool)> hooks_wallchance;
#line 1337 "bigstuff.cpp"
  int wallchance(cell *c, bool deepOcean);
#line 1377 "bigstuff.cpp"
  bool horo_ok();
#line 1382 "bigstuff.cpp"
  bool gp_wall_test();
#line 1392 "bigstuff.cpp"
  bool deep_ocean_at(cell *c, cell *from);
#line 1422 "bigstuff.cpp"
  bool good_for_wall(cell *c);
#line 1429 "bigstuff.cpp"
  bool walls_not_implemented();
#line 1433 "bigstuff.cpp"
  void buildBigStuff(cell *c, cell *from);
#line 1595 "bigstuff.cpp"
  bool openplains(cell *c);
#line 1621 "bigstuff.cpp"
  void buildCamelotWall(cell *c);
#line 1633 "bigstuff.cpp"
  bool no_barriers_in_radius(cell *c, int rad);
#line 1639 "bigstuff.cpp"
  eMonster camelot_monster();
#line 1649 "bigstuff.cpp"
  void buildCamelot(cell *c);
#line 1715 "bigstuff.cpp"
  int masterAlt(cell *c);
#line 1723 "bigstuff.cpp"
  int temple_layer_size();
#line 1733 "bigstuff.cpp"
  int horo_gen_distance();
#line 1737 "bigstuff.cpp"
  void moreBigStuff(cell *c);
#line 1887 "bigstuff.cpp"
  void generate_mines();
#line 1898 "bigstuff.cpp"
  extern vector<eLand> currentlands;
#line 1900 "bigstuff.cpp"
  void pregen();

  // implemented in: binary-tiling.cpp

  namespace bt {
#line 14 "binary-tiling.cpp"
    bool in();
    #if CAP_BT
#line 24 "binary-tiling.cpp"
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
#line 36 "binary-tiling.cpp"
    int type_of(heptagon *h);
#line 41 "binary-tiling.cpp"
    int mapside(heptagon *h);
#line 63 "binary-tiling.cpp"
    heptagon *path(heptagon *h, int d, int d1, std::initializer_list<int> p);
#line 94 "binary-tiling.cpp"
    heptagon *pathc(heptagon *h, int d, int d1, std::vector<std::initializer_list<int>> p);
#line 100 "binary-tiling.cpp"
    extern ld hororec_scale;
#line 101 "binary-tiling.cpp"
    extern ld horohex_scale;
#line 103 "binary-tiling.cpp"
    void make_binary_lands(heptagon *parent, heptagon *h);
#line 120 "binary-tiling.cpp"
    heptagon *build(heptagon *parent, int d, int d1, int t, int side, int delta);
    #if MAXMDIM==4
#line 175 "binary-tiling.cpp"
    heptagon *build3(heptagon *parent, int d, int d1, int delta);
    #endif
#line 583 "binary-tiling.cpp"
    hrmap *new_map();
#line 591 "binary-tiling.cpp"
    hrmap *new_alt_map(heptagon *o);
#line 597 "binary-tiling.cpp"
    bool use_direct_for(int dir);
#line 602 "binary-tiling.cpp"
    int expansion_coordinate();
#line 608 "binary-tiling.cpp"
    ld area_expansion_rate();
#line 641 "binary-tiling.cpp"
    ld expansion();
#line 661 "binary-tiling.cpp"
    transmatrix normalized_at(hyperpoint h);
#line 699 "binary-tiling.cpp"
    transmatrix normalized_at(ld x, ld y, ld z IS(0));
#line 703 "binary-tiling.cpp"
    int updir();
#line 712 "binary-tiling.cpp"
    int dirs_outer();
#line 722 "binary-tiling.cpp"
    int dirs_inner();
#line 727 "binary-tiling.cpp"
    void build_tmatrix();
    #if MAXMDIM == 4
#line 812 "binary-tiling.cpp"
    void queuecube(const transmatrix& V, ld size, color_t linecolor, color_t facecolor);
    #endif
#line 845 "binary-tiling.cpp"
    transmatrix parabolic(ld u);
#line 849 "binary-tiling.cpp"
    transmatrix parabolic3(ld y, ld z);
#line 855 "binary-tiling.cpp"
    ld horo_level(hyperpoint h);
#line 863 "binary-tiling.cpp"
    hyperpoint deparabolic3(hyperpoint h);
#line 884 "binary-tiling.cpp"
    bool pseudohept(cell *c);
#line 895 "binary-tiling.cpp"
    pair<gp::loc, gp::loc> gpvalue(heptagon *h);
#line 902 "binary-tiling.cpp"
    int tridist(gp::loc v);
#line 911 "binary-tiling.cpp"
    int equalize(heptagon*& c1, heptagon*& c2);
#line 920 "binary-tiling.cpp"
    int celldistance3_tri(heptagon *c1, heptagon *c2);
#line 947 "binary-tiling.cpp"
    int celldistance3_rec(heptagon *c1, heptagon *c2);
#line 968 "binary-tiling.cpp"
    int celldistance3_square(heptagon *c1, heptagon *c2);
#line 993 "binary-tiling.cpp"
    int celldistance3_hex(heptagon *c1, heptagon *c2);
#line 1024 "binary-tiling.cpp"
    int celldistance3_approx(heptagon *c1, heptagon *c2);
#line 1041 "binary-tiling.cpp"
    int celldistance3(heptagon *c1, heptagon *c2);
#line 1055 "binary-tiling.cpp"
    int celldistance3(cell *c1, cell *c2);
    #endif
#line 1058 "binary-tiling.cpp"
    hyperpoint get_horopoint(ld y, ld x);
#line 1062 "binary-tiling.cpp"
    hyperpoint get_horopoint(hyperpoint h);
#line 1066 "binary-tiling.cpp"
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
#line 626 "celldrawer.cpp"
  color_t w_monochromatize(color_t x, int d);
#line 1750 "celldrawer.cpp"
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
#line 1766 "celldrawer.cpp"
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
#line 190 "checkmove.cpp"
  bool monstersnear(cell *c, eMonster who, cell *pushto, cell *comefrom);
  namespace stalemate {
#line 255 "checkmove.cpp"
    extern vector<stalemate1> moves;
#line 256 "checkmove.cpp"
    extern bool  nextturn;
#line 258 "checkmove.cpp"
    bool isMoveto(cell *c);
#line 263 "checkmove.cpp"
    bool isPushto(cell *c);
    }
#line 269 "checkmove.cpp"
  bool onboat(stalemate1& sm);
#line 275 "checkmove.cpp"
  bool multimove();
  namespace multi { 
#line 294 "checkmove.cpp"
    extern bool checkonly;
#line 295 "checkmove.cpp"
    extern bool aftermove;
    }
#line 298 "checkmove.cpp"
  bool swordConflict(const stalemate1& sm1, const stalemate1& sm2);
#line 307 "checkmove.cpp"
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
#line 90 "commandline.cpp"
    unsigned arghex();
#line 91 "commandline.cpp"
    ld argf();
#line 100 "commandline.cpp"
    bool argis(const string& s);
#line 102 "commandline.cpp"
    void shift_arg_formula(ld& x, const reaction_t& r IS(reaction_t()));
#line 111 "commandline.cpp"
    
    // an useful macro
    #define PHASE(x) { if(arg::curphase > x) arg::phaseerror(x); else if(arg::curphase < x) return 2; }
    #define PHASEFROM(x) { if(arg::curphase < x) return 2; }
    
    #define TOGGLE(x, param, act) \
    else if(args()[0] == '-' && args()[1] == x && !args()[2]) { PHASEFROM(2); showstartmenu = false; act; } \
    else if(args()[0] == '-' && args()[1] == x && args()[2] == '1') { PHASEFROM(2); showstartmenu = false; if(!param) act; } \
    else if(args()[0] == '-' && args()[1] == x && args()[2] == '0') { PHASEFROM(2); showstartmenu = false; if(param) act; }
    
#line 123 "commandline.cpp"
    void cheat();
#line 125 "commandline.cpp"
    void init(int argc, char **argv);
#line 127 "commandline.cpp"
    void phaseerror(int x);
#line 134 "commandline.cpp"
    void launch_dialog(const reaction_t& r IS(reaction_t()));
#line 143 "commandline.cpp"
    extern int readCommon();
#line 144 "commandline.cpp"
    extern int readLocal();  
#line 145 "commandline.cpp"
    extern void read(int phase);
    }
#line 368 "commandline.cpp"
  extern purehookset hooks_config;
#line 370 "commandline.cpp"
  extern hookset<int()> hooks_args;
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
    extern hookset<bool(cell*)> hooks_mark;
#line 559 "complex2.cpp"
    void performMarkCommand(cell *c);
#line 578 "complex2.cpp"
    bool marked_mine(cell *c);
#line 585 "complex2.cpp"
    bool marked_safe(cell *c);
#line 592 "complex2.cpp"
    bool safe();
#line 596 "complex2.cpp"
    void uncover_full(cell *c2);
#line 614 "complex2.cpp"
    void auto_teleport_charges();
    }
  namespace terracotta {
#line 623 "complex2.cpp"
    // predictable or not
    static constexpr bool randterra = false;
#line 627 "complex2.cpp"
    void check(cell *c);
#line 648 "complex2.cpp"
    void check_around(cell *c);
#line 653 "complex2.cpp"
    void check();
    }
  namespace ambush {
#line 668 "complex2.cpp"
    void mark(cell *c, manual_celllister& cl);
#line 675 "complex2.cpp"
    extern int distance;
#line 676 "complex2.cpp"
    extern bool ambushed;
#line 678 "complex2.cpp"
    void check_state();
#line 715 "complex2.cpp"
    extern int fixed_size;
#line 717 "complex2.cpp"
    int size(cell *c, eItem what);
#line 805 "complex2.cpp"
    void ambush(cell *c, int dogs);
    }
  #endif

  // implemented in: config.cpp

#line 12 "config.cpp"
  enum eCentering { face, edge, vertex };
#line 15 "config.cpp"
  extern eCentering centering;
#line 18 "config.cpp"
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
#line 129 "config.cpp"
  extern ld bounded_mine_percentage;
#line 130 "config.cpp"
  extern int bounded_mine_quantity, bounded_mine_max;
#line 132 "config.cpp"
  extern const char *conffile;
#line 134 "config.cpp"
  extern array<ld, gGUARD> sightranges;
#line 136 "config.cpp"
  extern videopar vid;
#line 149 "config.cpp"
  charstyle& getcs(int id IS(multi::cpid));
#line 162 "config.cpp"
  void hread(hstream& hs, charstyle& cs);
#line 180 "config.cpp"
  void hwrite(hstream& hs, const charstyle& cs);
#line 187 "config.cpp"
  string csnameid(int id);
#line 198 "config.cpp"
  string csname(charstyle& cs);
#line 202 "config.cpp"
  int playergender();
#line 205 "config.cpp"
  int princessgender();
#line 211 "config.cpp"
  extern int default_language;
#line 213 "config.cpp"
  int lang();
#line 219 "config.cpp"
  extern bool autojoy;
#line 235 "config.cpp"
  void addsaver(charstyle& cs, string s);
#line 256 "config.cpp"
  void initcs(charstyle &cs);
#line 268 "config.cpp"
  void savecolortable(colortable& ct, string name);
#line 273 "config.cpp"
  extern purehookset hooks_configfile;
#line 275 "config.cpp"
  void initConfig();
#line 685 "config.cpp"
  bool inSpecialMode();
#line 696 "config.cpp"
  bool have_current_settings();
#line 717 "config.cpp"
  bool have_current_graph_settings();
#line 728 "config.cpp"
  void reset_graph_settings();
#line 739 "config.cpp"
  void resetModes(char leave IS('c'));
  #if CAP_CONFIG  
#line 770 "config.cpp"
  void resetConfig();
  #endif
  #if CAP_CONFIG
#line 782 "config.cpp"
  void saveConfig();
#line 822 "config.cpp"
  void parseline(const string& str);
#line 837 "config.cpp"
  void loadNewConfig(FILE *f);
#line 852 "config.cpp"
  void loadConfig();
  #endif
#line 881 "config.cpp"
  void add_cells_drawn(char c IS('C'));
#line 913 "config.cpp"
  void edit_sightrange();
#line 1032 "config.cpp"
  void menuitem_sightrange(char c IS('c'));
#line 1046 "config.cpp"
  void showSpecialEffects();
#line 1062 "config.cpp"
  void showGraphConfig();
#line 1215 "config.cpp"
  void switchFullscreen();
#line 1232 "config.cpp"
  void switchGL();
#line 1245 "config.cpp"
  void edit_whatever(char type, int index);
#line 1266 "config.cpp"
  void configureOther();
#line 1328 "config.cpp"
  void configureInterface();
  #if CAP_SDLJOY
#line 1406 "config.cpp"
  void showJoyConfig();
  #endif
#line 1457 "config.cpp"
  void projectionDialog();
#line 1491 "config.cpp"
  void explain_detail();
#line 1500 "config.cpp"
  void add_edit_fov(char key IS('f'));
#line 1519 "config.cpp"
  void showStereo();
#line 1591 "config.cpp"
  void config_camera_rotation();
#line 1602 "config.cpp"
  void add_edit_wall_quality(char c);
#line 1628 "config.cpp"
  void edit_levellines(char c);
#line 1650 "config.cpp"
  void show3D();
#line 1943 "config.cpp"
  void switchcolor(unsigned int& c, unsigned int* cs);
#line 1950 "config.cpp"
  void showCustomizeChar();
#line 2022 "config.cpp"
  void refresh_canvas();
#line 2036 "config.cpp"
  void edit_color_table(colortable& ct, const reaction_t& r IS(reaction_t()), bool has_bit IS(false));
#line 2060 "config.cpp"
  void show_color_dialog();
  #if CAP_CONFIG
#line 2171 "config.cpp"
  void resetConfigMenu();
  #endif
  #if CAP_TRANS
#line 2203 "config.cpp"
  void selectLanguageScreen();
  #endif
#line 2261 "config.cpp"
  void configureMouse();
#line 2303 "config.cpp"
  void showSettings();
  #if CAP_COMMANDLINE
#line 2354 "config.cpp"
  int read_color_args();
#line 2397 "config.cpp"
  int read_config_args();
#line 2583 "config.cpp"
  int read_gamemode_args();
  #endif
#line 2604 "config.cpp"
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
#line 30 "control.cpp"
  extern function <void(int sym, int uni)> keyhandler;
#line 31 "control.cpp"
  extern function <bool(SDL_Event &ev)> joyhandler;
#line 34 "control.cpp"
  // what part of the compass does 'skip turn'
  static const auto SKIPFAC = .4;
#line 39 "control.cpp"
  extern bool mousing;
#line 42 "control.cpp"
  extern bool mousepressed;
#line 43 "control.cpp"
  extern bool mousemoved;
#line 44 "control.cpp"
  extern bool actonrelease;
#line 46 "control.cpp"
  extern bool mousepan, oldmousepan;
  #if CAP_MOUSEGRAB
#line 48 "control.cpp"
  extern ld mouseaim_x, mouseaim_y;
  #endif
#line 50 "control.cpp"
  extern ld mouseaim_sensitivity;
#line 52 "control.cpp"
  extern int timetowait;
  #if CAP_SDLJOY
#line 55 "control.cpp"
  extern int joyx, joyy, panjoyx, panjoyy; 
#line 56 "control.cpp"
  extern movedir joydir;
  #endif
#line 59 "control.cpp"
  extern movedir mousedest;
#line 60 "control.cpp"
  extern ld shiftmul;
#line 62 "control.cpp"
  extern cell *mouseover, *mouseover2, *lmouseover;
#line 63 "control.cpp"
  extern ld modist, modist2;
#line 65 "control.cpp"
  extern int lastt;
#line 67 "control.cpp"
  bool mouseout();
#line 72 "control.cpp"
  bool mouseout2();
#line 77 "control.cpp"
  movedir vectodir(hyperpoint P);
#line 114 "control.cpp"
  void remission();
#line 118 "control.cpp"
  hyperpoint move_destination_vec(int d);
#line 126 "control.cpp"
  void movepckeydir(int d);
#line 137 "control.cpp"
  void calcMousedest();
#line 170 "control.cpp"
  void mousemovement();
  #if CAP_SDLJOY
#line 193 "control.cpp"
  extern SDL_Joystick* sticks[8];
#line 194 "control.cpp"
  extern int numsticks;
#line 196 "control.cpp"
  void initJoysticks();
#line 211 "control.cpp"
  void closeJoysticks();
#line 220 "control.cpp"
  extern bool joy_ignore_next;
#line 222 "control.cpp"
  void checkjoy();
#line 259 "control.cpp"
  void checkpanjoy(double t);
  #endif
#line 276 "control.cpp"
  extern bool quitmainloop;
#line 278 "control.cpp"
  bool doexiton(int sym, int uni);
#line 294 "control.cpp"
  extern bool didsomething;
#line 298 "control.cpp"
  extern bool smooth_scrolling;
#line 307 "control.cpp"
  void zoom_or_fov(ld t);
#line 317 "control.cpp"
  void full_forward_camera(ld t);
#line 327 "control.cpp"
  void full_rotate_camera(int dir, ld val);
#line 370 "control.cpp"
  void full_rotate_view(ld h, ld v);
#line 381 "control.cpp"
  void handlePanning(int sym, int uni);
#line 440 "control.cpp"
  extern purehookset hooks_fixticks;
#line 442 "control.cpp"
  extern array<int, 8> keys_vi;
#line 443 "control.cpp"
  extern array<int, 8> keys_wasd;
#line 444 "control.cpp"
  extern array<int, 8> keys_numpad;
#line 446 "control.cpp"
  void handleKeyNormal(int sym, int uni);
#line 568 "control.cpp"
  extern bool need_mouseh;
#line 570 "control.cpp"
  void fix_mouseh();
#line 589 "control.cpp"
  void handlekey(int sym, int uni);
#line 596 "control.cpp"
  extern void resize_screen_to(int x, int y);
  #if !CAP_SDL
#line 599 "control.cpp"
  void mainloopiter();
  #endif
  #if CAP_SDL
#line 608 "control.cpp"
  void resize_screen_to(int x, int y);
#line 621 "control.cpp"
  extern int sc_ticks;
#line 623 "control.cpp"
  void mainloopiter();
#line 781 "control.cpp"
  void handle_event(SDL_Event& ev);
  #endif
#line 1017 "control.cpp"
  void mainloop();
  #if ISMOBILE
#line 1029 "control.cpp"
  void displayabutton(int px, int py, string s, int col);
  #endif
#line 1051 "control.cpp"
  bool interpret_as_direction(int sym, int uni);
#line 1059 "control.cpp"
  int get_direction_key(int sym, int uni);
#line 1076 "control.cpp"
  bool gmodekeys(int sym, int uni);
#line 1125 "control.cpp"
  bool haveMobileCompass();
#line 1135 "control.cpp"
  bool handleCompass();
  #if CAP_ORIENTATION
#line 1160 "control.cpp"
  extern transmatrix getOrientation();
  #endif
  namespace ors {
#line 1166 "control.cpp"
    extern int mode;
#line 1173 "control.cpp"
    extern string choices[3];
    #if CAP_ORIENTATION
#line 1176 "control.cpp"
    transmatrix getOrientation();
    #endif
#line 1181 "control.cpp"
    void reset();
#line 1194 "control.cpp"
    void show();
#line 1277 "control.cpp"
    void unrotate(transmatrix& T);
#line 1281 "control.cpp"
    void rerotate(transmatrix& T);
#line 1287 "control.cpp"
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
#line 464 "crystal.cpp"
    extern int crystal_period;
#line 723 "crystal.cpp"
    heptagon *get_heptagon_at(coord c);
#line 724 "crystal.cpp"
    coord get_coord(heptagon *h);
#line 725 "crystal.cpp"
    ldcoord get_ldcoord(cell *c);
#line 727 "crystal.cpp"
    int get_dim();
    #if MAXMDIM >= 4
#line 730 "crystal.cpp"
    transmatrix get_adj(heptagon *h, int d);
    #endif
#line 743 "crystal.cpp"
    color_t colorize(cell *c, char whichCanvas);
#line 824 "crystal.cpp"
    extern colortable coordcolors;
#line 826 "crystal.cpp"
    ld compass_angle();
#line 831 "crystal.cpp"
    bool crystal_cell(cell *c, transmatrix V);
#line 862 "crystal.cpp"
    vector<cell*> build_shortest_path(cell *c1, cell *c2);
#line 915 "crystal.cpp"
    int precise_distance(cell *c1, cell *c2);
#line 979 "crystal.cpp"
    ld space_distance(cell *c1, cell *c2);
#line 986 "crystal.cpp"
    ld space_distance_camelot(cell *c);
#line 991 "crystal.cpp"
    int dist_relative(cell *c);
#line 1114 "crystal.cpp"
    int dist_alt(cell *c);
#line 1136 "crystal.cpp"
    void init_rotation();
#line 1157 "crystal.cpp"
    void random_rotation();
#line 1175 "crystal.cpp"
    void next_home_orientation();
#line 1180 "crystal.cpp"
    void flip_z();
    #if CAP_RUG
#line 1196 "crystal.cpp"
    void switch_z_coordinate();
#line 1205 "crystal.cpp"
    void apply_rotation(const transmatrix t);
#line 1215 "crystal.cpp"
    void centerrug(ld aspd);
#line 1260 "crystal.cpp"
    void build_rugdata();
    #endif
#line 1320 "crystal.cpp"
    void set_land(cell *c);
#line 1334 "crystal.cpp"
    void set_crystal(int sides);
#line 1376 "crystal.cpp"
    void set_crystal_period_flags();
#line 1436 "crystal.cpp"
    hrmap *new_map();
#line 1440 "crystal.cpp"
    string compass_help();
#line 1465 "crystal.cpp"
    void show();
#line 1580 "crystal.cpp"
    string get_table_volume();
#line 1628 "crystal.cpp"
    string get_table_boundary();
#line 1638 "crystal.cpp"
    void may_place_compass(cell *c);
    #endif
    #if CAP_CRYSTAL && MAXMDIM >= 4
#line 1800 "crystal.cpp"
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
#line 477 "debug.cpp"
  void push_debug_screen();
#line 483 "debug.cpp"
  void showCheatMenu();
#line 526 "debug.cpp"
  void viewall();
#line 590 "debug.cpp"
  void modalDebug(cell *c);
#line 613 "debug.cpp"
  void raiseBuggyGeneration(cell *c, const char *s);
#line 888 "debug.cpp"
  extern bool ldebug;
#line 890 "debug.cpp"
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
#line 639 "dialogs.cpp"
    extern bool colorAlpha;
#line 641 "dialogs.cpp"
    void drawColorDialog();
#line 702 "dialogs.cpp"
    void openColorDialog(unsigned int& col, unsigned int *pal IS(palette));
#line 711 "dialogs.cpp"
    extern numberEditor ne;
#line 713 "dialogs.cpp"
    bool editingDetail();
#line 722 "dialogs.cpp"
    string disp(ld x);
#line 727 "dialogs.cpp"
    extern reaction_t reaction;
#line 728 "dialogs.cpp"
    extern reaction_t reaction_final;
#line 730 "dialogs.cpp"
    extern reaction_t extra_options;
#line 732 "dialogs.cpp"
    void apply_slider();
#line 742 "dialogs.cpp"
    void use_hexeditor();
#line 747 "dialogs.cpp"
    void apply_edit();
#line 764 "dialogs.cpp"
    void bound_low(ld val);
#line 775 "dialogs.cpp"
    void bound_up(ld val);
#line 786 "dialogs.cpp"
    extern int numberdark;
#line 788 "dialogs.cpp"
    void formula_keyboard(bool lr);
#line 797 "dialogs.cpp"
    void drawNumberDialog();
#line 893 "dialogs.cpp"
    int handlePage(int& nl, int& nlm, int perpage);
#line 914 "dialogs.cpp"
    void displayPageButtons(int i, bool pages);
#line 929 "dialogs.cpp"
    bool handlePageButtons(int uni);
#line 939 "dialogs.cpp"
    void editNumber(ld& x, ld vmin, ld vmax, ld step, ld dft, string title, string help);
#line 964 "dialogs.cpp"
    void editNumber(int& x, int vmin, int vmax, ld step, int dft, string title, string help);
#line 970 "dialogs.cpp"
    void helpToEdit(int& x, int vmin, int vmax, int step, int dft);
#line 1003 "dialogs.cpp"
    void drawFileDialog();
#line 1057 "dialogs.cpp"
    void handleKeyFile(int sym, int uni);
#line 1100 "dialogs.cpp"
    void openFileDialog(string& filename, string fcap, string ext, bool_reaction_t action);
#line 1110 "dialogs.cpp"
    extern string infix;
#line 1112 "dialogs.cpp"
    bool hasInfix(const string &s);
#line 1126 "dialogs.cpp"
    bool editInfix(int uni);
#line 1135 "dialogs.cpp"
    extern vector<pair<string, color_t> > v;  
#line 1137 "dialogs.cpp"
    void vpush(color_t color, const char *name);
#line 1144 "dialogs.cpp"
    extern string *edited_string;
#line 1146 "dialogs.cpp"
    string view_edited_string();
#line 1154 "dialogs.cpp"
    void start_editing(string& s);
#line 1159 "dialogs.cpp"
    string editchecker(int sym, int uni);
#line 1164 "dialogs.cpp"
    bool handle_edit_string(int sym, int uni, function<string(int, int)> checker IS(editchecker));
#line 1184 "dialogs.cpp"
    void string_edit_dialog();
#line 1214 "dialogs.cpp"
    void edit_string(string& s, string title, string help);
#line 1227 "dialogs.cpp"
    void confirm_dialog(const string& text, const reaction_t& act);
#line 1241 "dialogs.cpp"
    void addBoolItem_action(const string& s, bool& b, char c);
#line 1246 "dialogs.cpp"
    void addBoolItem_action_neg(const string& s, bool& b, char c);
#line 1251 "dialogs.cpp"
    bool cheat_forbidden();
#line 1263 "dialogs.cpp"
    void add_action_confirmed(const reaction_t& act);
#line 1268 "dialogs.cpp"
    
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
  virtual ~drawqueueitem() {}
  /** \brief When minimizing OpenGL calls, we need to group items of the same color, etc. together. This value is used as an extra sorting key. */
  virtual color_t outline_group() = 0;
  };
  
  /** \brief Drawqueueitem used to draw polygons. The majority of drawqueueitems fall here. */
  struct dqi_poly : drawqueueitem {
  /** \brief see hr::band_shift */
  ld band_shift;
  /** \brief matrix used to transform the model */
  transmatrix V;
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
  void draw();
  void gldraw();
  void draw_back();
  virtual color_t outline_group() { return outline; }
  };
  
  /** \brief Drawqueueitem used to draw lines */
  struct dqi_line : drawqueueitem {
  /** \brief see hr::band_shift */
  ld band_shift;
  /** \brief starting and ending point */
  hyperpoint H1, H2;
  /** \brief how accurately to render the line */
  int prf;
  /** \brief width of this line */
  double width;
  void draw();
  void draw_back();
  virtual color_t outline_group() { return color; }
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
  void draw();
  virtual color_t outline_group() { return 1; }
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
  void draw();
  virtual color_t outline_group() { return 2; }
  };
  
  /** \brief Perform an arbitrary action. May temporarily change the model, etc. */
  struct dqi_action : drawqueueitem {
  reaction_t action;
  dqi_action(const reaction_t& a) : action(a) {}
  void draw() { action(); }
  virtual color_t outline_group() { return 2; }
  };
#line 155 "drawing.cpp"
  unsigned char& part(color_t& col, int i);
#line 170 "drawing.cpp"
  extern color_t poly_outline;
#line 172 "drawing.cpp"
  extern vector<unique_ptr<drawqueueitem>> ptds;
  #if CAP_GL
#line 175 "drawing.cpp"
  extern color_t text_color;
#line 176 "drawing.cpp"
  extern int text_shift;
#line 177 "drawing.cpp"
  extern GLuint text_texture;
#line 178 "drawing.cpp"
  extern int texts_merged;
#line 179 "drawing.cpp"
  extern int shapes_merged;
#line 187 "drawing.cpp"
  void glflush();
  #endif
  #if CAP_POLY
#line 249 "drawing.cpp"
  #define POLYMAX 60000
#line 252 "drawing.cpp"
  extern vector<glvertex> glcoords;
  #endif
#line 256 "drawing.cpp"
  extern int spherespecial, spherephase;
  #if CAP_POLY
#line 261 "drawing.cpp"
  extern int polyx[POLYMAX], polyxr[POLYMAX], polyy[POLYMAX];
#line 290 "drawing.cpp"
  bool two_sided_model();
#line 301 "drawing.cpp"
  int get_side(const hyperpoint& H);
#line 324 "drawing.cpp"
  bool correct_side(const hyperpoint& H);
  #if CAP_SDLGFX
#line 509 "drawing.cpp"
  void filledPolygonColorI(SDL_Surface *s, int* px, int *py, int polyi, color_t col);
  #endif
  #if CAP_GL
#line 562 "drawing.cpp"
  extern int global_projection;
  #endif
#line 712 "drawing.cpp"
  ld scale_at(const transmatrix& T);
#line 722 "drawing.cpp"
  extern int perfect_linewidth;
#line 724 "drawing.cpp"
  ld linewidthat(const hyperpoint& h);
#line 744 "drawing.cpp"
  void set_width(ld w);
  namespace s2xe {
#line 1003 "drawing.cpp"
    extern int qrings;
    }
  namespace ods {
    #if CAP_ODS
#line 1258 "drawing.cpp"
    bool project(hyperpoint h, hyperpoint& h1, hyperpoint& h2, bool eye);
    #endif
    }
#line 1744 "drawing.cpp"
  void prettypoint(const hyperpoint& h);
#line 1748 "drawing.cpp"
  void prettylinesub(const hyperpoint& h1, const hyperpoint& h2, int lev);
#line 1757 "drawing.cpp"
  void prettyline(hyperpoint h1, hyperpoint h2, color_t col, int lev, int flags, PPR prio);
#line 1777 "drawing.cpp"
  void prettypoly(const vector<hyperpoint>& t, color_t fillcol, color_t linecol, int lev);
#line 1801 "drawing.cpp"
  void queuereset(eModel m, PPR prio);
#line 1836 "drawing.cpp"
  void initquickqueue();
#line 1841 "drawing.cpp"
  void sortquickqueue();
#line 1850 "drawing.cpp"
  void quickqueue();
#line 1869 "drawing.cpp"
  extern ld backbrightness;
#line 1871 "drawing.cpp"
  extern purehookset hooks_drawqueue;
#line 1899 "drawing.cpp"
  void sort_drawqueue();
#line 1940 "drawing.cpp"
  void reverse_priority(PPR p);
#line 1944 "drawing.cpp"
  void reverse_side_priorities();
#line 1951 "drawing.cpp"
  void draw_backside();
#line 1986 "drawing.cpp"
  void reverse_transparent_walls();
#line 1991 "drawing.cpp"
  void draw_main();
  #if CAP_VR
#line 2074 "drawing.cpp"
  extern hookset<bool()> hooks_vr_draw_all;
  #endif
#line 2077 "drawing.cpp"
  void drawqueue();
#line 2198 "drawing.cpp"
  template<class T, class... U> T& queuea(PPR prio, U... u) {
  ptds.push_back(unique_ptr<T>(new T (u...)));
  ptds.back()->prio = prio;  
  return (T&) *ptds.back();
  }
#line 2206 "drawing.cpp"
  extern bool cblind;
#line 2209 "drawing.cpp"
  enum class eNeon { none, neon, no_boundary, neon2, illustration};
#line 2212 "drawing.cpp"
  extern eNeon neon_mode;
#line 2213 "drawing.cpp"
  extern bool neon_nofill;
#line 2215 "drawing.cpp"
  void apply_neon(color_t& col, int& r);
  #if CAP_SHAPES
#line 2235 "drawing.cpp"
  color_t magentize(color_t x);
#line 2247 "drawing.cpp"
  color_t monochromatize(color_t x);
#line 2254 "drawing.cpp"
  dqi_poly& queuepolyat(const transmatrix& V, const hpcshape& h, color_t col, PPR prio);
  #endif
#line 2331 "drawing.cpp"
  dqi_poly& queuetable(const transmatrix& V, const vector<glvertex>& f, int cnt, color_t linecol, color_t fillcol, PPR prio);
  #if CAP_SHAPES
#line 2350 "drawing.cpp"
  dqi_poly& queuepoly(const transmatrix& V, const hpcshape& h, color_t col);
  #endif
#line 2359 "drawing.cpp"
  void curvepoint(const hyperpoint& H1);
#line 2363 "drawing.cpp"
  dqi_poly& queuecurve(color_t linecol, color_t fillcol, PPR prio);
#line 2370 "drawing.cpp"
  dqi_action& queueaction(PPR prio, const reaction_t& action);
#line 2374 "drawing.cpp"
  dqi_line& queueline(const hyperpoint& H1, const hyperpoint& H2, color_t col, int prf IS(0), PPR prio IS(PPR::LINE));
#line 2387 "drawing.cpp"
  void queuestr(int x, int y, int shift, int size, string str, color_t col, int frame IS(0), int align IS(8));
#line 2399 "drawing.cpp"
  void queuecircle(int x, int y, int size, color_t color, PPR prio IS(PPR::CIRCLE), color_t fillcolor IS(0));
#line 2409 "drawing.cpp"
  void getcoord0(const hyperpoint& h, int& xc, int &yc, int &sc);
#line 2418 "drawing.cpp"
  ld scale_in_pixels(const transmatrix& V);
#line 2422 "drawing.cpp"
  bool getcoord0_checked(const hyperpoint& h, int& xc, int &yc, int &zc);
#line 2429 "drawing.cpp"
  void queuestr(const hyperpoint& h, int size, const string& chr, color_t col, int frame IS(0));
#line 2435 "drawing.cpp"
  void queuestr(const transmatrix& V, double size, const string& chr, color_t col, int frame IS(0), int align IS(8));
#line 2441 "drawing.cpp"
  void queuestrn(const transmatrix& V, double size, const string& chr, color_t col, int frame IS(0), int align IS(8));
#line 2474 "drawing.cpp"
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
  extern int wetslime;
#line 79 "environment.cpp"
  extern vector<cell*> pathqm;
#line 82 "environment.cpp"
  extern set<int> snaketypes;
#line 84 "environment.cpp"
  extern int gamerange_bonus;
#line 85 "environment.cpp"
  int gamerange();
#line 88 "environment.cpp"
  extern cell *pd_from;
#line 89 "environment.cpp"
  extern int pd_range;
#line 91 "environment.cpp"
  void onpath(cell *c, int d);
#line 96 "environment.cpp"
  void onpath(cell *c, int d, int sp);
#line 102 "environment.cpp"
  void clear_pathdata();
#line 109 "environment.cpp"
  extern int pathlock;
#line 111 "environment.cpp"
  void compute_graphical_distance();
#line 133 "environment.cpp"
  void computePathdist(eMonster param);
#line 180 "environment.cpp"
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
#line 202 "environment.cpp"
  void bfs();
#line 465 "environment.cpp"
  void moverefresh(bool turn IS(true));
#line 687 "environment.cpp"
  void settemp(cell *c);
#line 692 "environment.cpp"
  void findWormIvy(cell *c);
#line 738 "environment.cpp"
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
#line 317 "euclid.cpp"
    vector<coord>& get_current_shifttable();
#line 318 "euclid.cpp"
    map<coord, heptagon*>& get_spacemap();
#line 319 "euclid.cpp"
    map<heptagon*, coord>& get_ispacemap();
#line 320 "euclid.cpp"
    cell *& get_camelot_center();
#line 322 "euclid.cpp"
    hrmap* new_map();
#line 326 "euclid.cpp"
    transmatrix move_matrix(heptagon *h, int i);
#line 330 "euclid.cpp"
    bool pseudohept(cell *c);
#line 341 "euclid.cpp"
    int dist_alt(cell *c);
#line 353 "euclid.cpp"
    bool get_emerald(cell *c);
#line 373 "euclid.cpp"
    int celldistance(coord v);
#line 398 "euclid.cpp"
    int celldistance(cell *c1, cell *c2);
#line 405 "euclid.cpp"
    void set_land(cell *c);
#line 419 "euclid.cpp"
    int dist_relative(cell *c);
#line 452 "euclid.cpp"
    torus_config torus3(int x, int y, int z);
#line 458 "euclid.cpp"
    torus_config clear_torus3();
#line 473 "euclid.cpp"
    bool valid_third_turn(const intmatrix& m);
#line 483 "euclid.cpp"
    torus_config make_hantzsche_wendt(int v);
#line 496 "euclid.cpp"
    bool valid_hantzsche_wendt(const intmatrix& m);
#line 500 "euclid.cpp"
    torus_config make_third_turn(int a, int b, int c);
#line 513 "euclid.cpp"
    torus_config make_quarter_turn(int a, int b, int c);
#line 536 "euclid.cpp"
    bool valid_irr_torus();
#line 553 "euclid.cpp"
    void build_torus3(eGeometry g);
#line 649 "euclid.cpp"
    void build_torus3();
#line 813 "euclid.cpp"
    void prepare_torus3();
#line 817 "euclid.cpp"
    void show_fundamental();
#line 861 "euclid.cpp"
    torus_config rectangular_torus(int x, int y, bool klein);
#line 876 "euclid.cpp"
    extern int quotient_size;
#line 878 "euclid.cpp"
    void show_torus3();
#line 1128 "euclid.cpp"
    int dscalar(gp::loc e1, gp::loc e2);
#line 1132 "euclid.cpp"
    int dsquare(gp::loc e);
#line 1134 "euclid.cpp"
    int dcross(gp::loc e1, gp::loc e2);
#line 1138 "euclid.cpp"
    gp::loc full_coords2(cell *c);
#line 1161 "euclid.cpp"
    cell* at(gp::loc p);
#line 1169 "euclid.cpp"
    coord to_coord(gp::loc p);
#line 1171 "euclid.cpp"
    gp::loc sdxy();
#line 1173 "euclid.cpp"
    pair<bool, string> coord_display(const transmatrix& V, cell *c);
#line 1186 "euclid.cpp"
    gp::loc to_loc(const coord& v);
#line 1188 "euclid.cpp"
    map<gp::loc, cdata>& get_cdata();
#line 1190 "euclid.cpp"
    transmatrix eumove(coord co);
#line 1207 "euclid.cpp"
    transmatrix eumove(gp::loc co);
#line 1209 "euclid.cpp"
    bool chiral(gp::loc g);
#line 1221 "euclid.cpp"
    void twist_once(gp::loc coo);
#line 1233 "euclid.cpp"
    int dist(int sx, int sy, bool reduce IS(true));
#line 1243 "euclid.cpp"
    int dist(gp::loc a, gp::loc b);
#line 1247 "euclid.cpp"
    int cyldist(gp::loc a, gp::loc b);
#line 1267 "euclid.cpp"
    void generate();
#line 1347 "euclid.cpp"
    bool in();
#line 1352 "euclid.cpp"
    bool in(int dim);
#line 1353 "euclid.cpp"
    bool in(int dim, int s7);
    }
#line 1357 "euclid.cpp"
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
#line 341 "expansion.cpp"
  int type_in(expansion_analyzer& ea, cell *c, const cellfunction& f);
#line 380 "expansion.cpp"
  bool sizes_known();
#line 391 "expansion.cpp"
  bool trees_known();
#line 422 "expansion.cpp"
  int curr_dist(cell *c);
#line 439 "expansion.cpp"
  int type_in_reduced(expansion_analyzer& ea, cell *c, const cellfunction& f);
#line 451 "expansion.cpp"
  int parent_id(cell *c, int which, const cellfunction& cf);
#line 472 "expansion.cpp"
  void generate_around(cell *c);
  namespace ts {
#line 477 "expansion.cpp"
    cell *verified_add(cell *c, int which, int bonus, const cellfunction& cf);
#line 483 "expansion.cpp"
    cell *verified_add_gen(cell *c, int which, int bonus, const cellfunction& cf);
#line 487 "expansion.cpp"
    cell *add(cell *c, int which, int bonus, const cellfunction& cf);
#line 493 "expansion.cpp"
    cell *left_of(cell *c, const cellfunction& cf);
#line 500 "expansion.cpp"
    cell *right_of(cell *c, const cellfunction& cf);
#line 507 "expansion.cpp"
    cell *child_number(cell *c, int id, const cellfunction& cf);
#line 514 "expansion.cpp"
    inline cell *left_parent(cell *c, const cellfunction& cf) { return verified_add(c, 1, 0, cf); }
    inline cell *right_parent(cell *c, const cellfunction& cf) { return verified_add(c, -1, 0, cf); }
    }
#line 520 "expansion.cpp"
  extern bool viewdists;
#line 521 "expansion.cpp"
  extern bool use_color_codes;
#line 522 "expansion.cpp"
  extern bool use_analyzer;
#line 523 "expansion.cpp"
  extern bool show_distance_lists;
#line 528 "expansion.cpp"
  extern map<int, color_t> expcolors;
#line 591 "expansion.cpp"
  void viewdist_configure_dialog();
#line 758 "expansion.cpp"
  void enable_viewdists();
#line 906 "expansion.cpp"
  extern expansion_analyzer expansion;
#line 908 "expansion.cpp"
  extern int sibling_limit;
#line 910 "expansion.cpp"
  void set_sibling_limit();
#line 959 "expansion.cpp"
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
#line 27 "fake.cpp"
    bool split();
#line 29 "fake.cpp"
    bool available();
#line 285 "fake.cpp"
    hrmap* new_map();
#line 287 "fake.cpp"
    hrmap* get_umap();
#line 290 "fake.cpp"
    template<class T> auto in_underlying_geometry(const T& f) -> decltype(f()) {
    if(!fake::in()) return f();
    dynamicval<eGeometry> g(geometry, underlying);
    dynamicval<eGeometry> gag(actual_geometry, geometry);
    dynamicval<geometry_information*> gc(cgip, underlying_cgip);
    dynamicval<hrmap*> gpm(pmap, currentmap);
    dynamicval<hrmap*> gm(currentmap, get_umap());
    return f();
    }
    
    #define FPIU(x) hr::fake::in_underlying_geometry([&] { return (x); })
#line 303 "fake.cpp"
    hyperpoint befake(hyperpoint h);
#line 311 "fake.cpp"
    vector<hyperpoint> befake(const vector<hyperpoint>& v);
#line 317 "fake.cpp"
    ld compute_around(bool setup);
#line 373 "fake.cpp"
    void generate();
#line 402 "fake.cpp"
    extern ld around;
#line 405 "fake.cpp"
    ld compute_euclidean();
#line 416 "fake.cpp"
    ld around_orig();
#line 429 "fake.cpp"
    geometryinfo1 geometry_of_curvature(ld curvature, int dim);
#line 439 "fake.cpp"
    void compute_scale();
#line 529 "fake.cpp"
    void change_around();
#line 565 "fake.cpp"
    void configure();
    }

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
#line 1209 "fieldpattern.cpp"
    extern int subpathid;
#line 1210 "fieldpattern.cpp"
    extern int subpathorder;
#line 1214 "fieldpattern.cpp"
    extern vector<fgeomextra> fgeomextras;
#line 1228 "fieldpattern.cpp"
    extern int current_extra;
#line 1230 "fieldpattern.cpp"
    void nextPrime(fgeomextra& ex);
#line 1251 "fieldpattern.cpp"
    void nextPrimes(fgeomextra& ex);
#line 1256 "fieldpattern.cpp"
    void enableFieldChange();
#line 1268 "fieldpattern.cpp"
    void field_from_current();
    #if CAP_THREAD && MAXMDIM >= 4
#line 1283 "fieldpattern.cpp"
    extern map<string, discovery> discoveries;
    #endif
#line 1342 "fieldpattern.cpp"
    extern purehookset hooks_on_geometry_change;
#line 1344 "fieldpattern.cpp"
    int field_celldistance(cell *c1, cell *c2);
    }
#line 1357 "fieldpattern.cpp"
  int currfp_gmul(int a, int b);
#line 1358 "fieldpattern.cpp"
  int currfp_inverses(int i);
#line 1359 "fieldpattern.cpp"
  int currfp_distwall(int i);
#line 1360 "fieldpattern.cpp"
  int currfp_n();
#line 1361 "fieldpattern.cpp"
  int currfp_get_R();
#line 1362 "fieldpattern.cpp"
  int currfp_get_P();
#line 1363 "fieldpattern.cpp"
  int currfp_get_X();
#line 1365 "fieldpattern.cpp"
  void hread_fpattern(hstream& hs, fieldpattern::fpattern& fp);
#line 1377 "fieldpattern.cpp"
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
#line 35 "game.cpp"
  int hrand(int i);
#line 45 "game.cpp"
  template<class T, class... U> T pick(T x, U... u) { std::initializer_list<T> i = {x,u...}; return *(i.begin() + hrand(1+sizeof...(u))); }
  template<class T> void hrandom_shuffle(T* x, int n) { for(int k=1; k<n; k++) swap(x[k], x[hrand(k+1)]); }
  template<class T> void hrandom_shuffle(T& container) { hrandom_shuffle(&container[0], isize(container)); }
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
#line 221 "game.cpp"
  void teleportToLand(eLand l, bool make_it_safe);
#line 259 "game.cpp"
  void activateSafety(eLand l);
#line 263 "game.cpp"
  void placeGolem(cell *on, cell *moveto, eMonster m);
#line 295 "game.cpp"
  bool multiRevival(cell *on, cell *moveto);
#line 316 "game.cpp"
  extern eMonster passive_switch;
#line 318 "game.cpp"
  void checkSwitch();
#line 322 "game.cpp"
  void pushThumper(const movei& mi);
#line 370 "game.cpp"
  bool canPushThumperOn(cell *tgt, cell *thumper, cell *player);
#line 383 "game.cpp"
  void activateActiv(cell *c, bool msg);
#line 403 "game.cpp"
  void fixWormBug(cell *c);
#line 411 "game.cpp"
  bool isWormhead(eMonster m);
#line 417 "game.cpp"
  cell *worm_tohead(cell *c);
#line 424 "game.cpp"
  cell *wormhead(cell *c);
#line 440 "game.cpp"
  bool sameMonster(cell *c1, cell *c2);
#line 450 "game.cpp"
  eMonster haveMount();
#line 458 "game.cpp"
  eMonster otherpole(eMonster m);

  // implemented in: geom-exp.cpp

#line 114 "geom-exp.cpp"
  extern string bitruncnames[5];
#line 125 "geom-exp.cpp"
  extern bool showquotients;
#line 220 "geom-exp.cpp"
  struct geometry_filter {
  string name;
  /** test if the current geometry matches the filter */
  function<bool()> test; 
  };
#line 227 "geom-exp.cpp"
  extern geometry_filter *current_filter;
#line 231 "geom-exp.cpp"
  extern geometry_filter gf_hyperbolic;
#line 232 "geom-exp.cpp"
  extern geometry_filter gf_spherical;
#line 233 "geom-exp.cpp"
  extern geometry_filter gf_euclidean;
#line 234 "geom-exp.cpp"
  extern geometry_filter gf_other;
#line 235 "geom-exp.cpp"
  extern geometry_filter gf_regular_2d;
#line 238 "geom-exp.cpp"
  extern geometry_filter gf_regular_3d;
#line 242 "geom-exp.cpp"
  extern geometry_filter gf_quotient;
#line 385 "geom-exp.cpp"
  string current_proj_name();
#line 407 "geom-exp.cpp"
  string dim_name();
  #if CAP_THREAD && MAXMDIM >= 4
#line 412 "geom-exp.cpp"
  void showQuotientConfig3();
  #endif
#line 471 "geom-exp.cpp"
  string geometry_name();
#line 512 "geom-exp.cpp"
  void select_quotient_screen();
#line 557 "geom-exp.cpp"
  void select_quotient();
#line 589 "geom-exp.cpp"
  string full_geometry_name();
#line 600 "geom-exp.cpp"
  void showEuclideanMenu();
#line 991 "geom-exp.cpp"
  void runGeometryExperiments();
  #if CAP_COMMANDLINE
#line 999 "geom-exp.cpp"
  eGeometry readGeo(const string& ss);
  #endif

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
#line 343 "geometry2.cpp"
  void virtualRebase(cell*& base, transmatrix& at);
#line 347 "geometry2.cpp"
  void virtualRebase(cell*& base, hyperpoint& h);
#line 390 "geometry2.cpp"
  bool no_easy_spin();
#line 410 "geometry2.cpp"
  transmatrix ddspin(cell *c, int d, ld bonus IS(0));
#line 411 "geometry2.cpp"
  transmatrix iddspin(cell *c, int d, ld bonus IS(0));
#line 412 "geometry2.cpp"
  ld cellgfxdist(cell *c, int d);
#line 414 "geometry2.cpp"
  transmatrix ddspin_side(cell *c, int d, ld bonus IS(0));
#line 424 "geometry2.cpp"
  transmatrix iddspin_side(cell *c, int d, ld bonus IS(0));
#line 479 "geometry2.cpp"
  double randd();
#line 481 "geometry2.cpp"
  hyperpoint randomPointIn(int t);
#line 501 "geometry2.cpp"
  hyperpoint get_corner_position(cell *c, int cid, ld cf IS(3));
#line 589 "geometry2.cpp"
  extern bool approx_nearcorner;
#line 593 "geometry2.cpp"
  hyperpoint nearcorner(cell *c, int i);
#line 689 "geometry2.cpp"
  hyperpoint farcorner(cell *c, int i, int which);
#line 757 "geometry2.cpp"
  hyperpoint midcorner(cell *c, int i, ld v);
#line 763 "geometry2.cpp"
  hyperpoint get_warp_corner(cell *c, int cid);

  // implemented in: glhr.cpp

  namespace glhr {
#line 15 "glhr.cpp"
    glvertex pointtogl(const hyperpoint& t);
#line 22 "glhr.cpp"
    hyperpoint gltopoint(const glvertex& t);
    #if CAP_SHADER
#line 30 "glhr.cpp"
    extern bool noshaders;
    #endif
    #if !CAP_SHADER
#line 33 "glhr.cpp"
    extern bool noshaders;
    #endif
#line 37 "glhr.cpp"
    inline glvertex makevertex(GLfloat x, GLfloat y, GLfloat z) {
    #if SHDIM == 3
    return make_array(x, y, z);
    #else
    return make_array<GLfloat>(x, y, z, 1);
    #endif
    }
    }
  #if CAP_GL
#line 55 "glhr.cpp"
  void glError(const char* GLcall, const char* file, const int line);
#line 63 "glhr.cpp"
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
#line 76 "glhr.cpp"
    string to_glsl(ld x);
#line 83 "glhr.cpp"
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
    
#line 139 "glhr.cpp"
    typedef const void *constvoidptr;
#line 142 "glhr.cpp"
    extern constvoidptr current_vertices, buffered_vertices;
#line 143 "glhr.cpp"
    extern ld current_linewidth;
#line 167 "glhr.cpp"
    extern glmatrix id;
#line 169 "glhr.cpp"
    glmatrix scale(ld x, ld y, ld z);
#line 180 "glhr.cpp"
    glmatrix tmtogl(const transmatrix& T);
#line 188 "glhr.cpp"
    glmatrix tmtogl_transpose(const transmatrix& T);
#line 196 "glhr.cpp"
    glmatrix tmtogl_transpose3(const transmatrix& T);
#line 208 "glhr.cpp"
    glmatrix ortho(ld x, ld y, ld z);
#line 212 "glhr.cpp"
    glmatrix& as_glmatrix(GLfloat o[16]);
#line 218 "glhr.cpp"
    constexpr ld vnear_default = 1e-3;
    constexpr ld vfar_default = 1e9;
#line 222 "glhr.cpp"
    glmatrix frustum(ld x, ld y, ld vnear IS(vnear_default), ld vfar IS(vfar_default));
#line 231 "glhr.cpp"
    glmatrix translate(ld x, ld y, ld z);
#line 248 "glhr.cpp"
    void new_projection();
#line 260 "glhr.cpp"
    void projection_multiply(const glmatrix& m);
#line 269 "glhr.cpp"
    extern void init();
#line 272 "glhr.cpp"
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
#line 289 "glhr.cpp"
    extern shared_ptr<GLprogram> current_glprogram;
#line 291 "glhr.cpp"
    extern bool debug_gl;
#line 293 "glhr.cpp"
    int compileShader(int type, const string& s);
#line 410 "glhr.cpp"
    void set_index_sl(ld x);
#line 414 "glhr.cpp"
    void set_sl_iterations(int steps);
#line 418 "glhr.cpp"
    void set_solv_prec(int x, int y, int z);
#line 425 "glhr.cpp"
    extern glmatrix current_matrix, current_modelview, current_projection;
#line 438 "glhr.cpp"
    extern glmatrix eyeshift;
#line 439 "glhr.cpp"
    extern bool using_eyeshift;
#line 441 "glhr.cpp"
    void set_modelview(const glmatrix& modelview);
#line 470 "glhr.cpp"
    void id_modelview();
#line 481 "glhr.cpp"
    array<GLfloat, 4> acolor(color_t color, ld scale IS(1));
#line 489 "glhr.cpp"
    void color2(color_t color, ld scale IS(1));
#line 501 "glhr.cpp"
    void colorClear(color_t color);
#line 505 "glhr.cpp"
    void full_enable(shared_ptr<GLprogram> p);
#line 607 "glhr.cpp"
    void fog_max(ld fogmax, color_t fogcolor);
#line 622 "glhr.cpp"
    void set_fogbase(ld _fogbase);
#line 631 "glhr.cpp"
    void set_ualpha(ld alpha);
#line 683 "glhr.cpp"
    void vertices(const vector<glvertex>& v, int vshift IS(0));
#line 704 "glhr.cpp"
    void vertices_texture(const vector<glvertex>& v, const vector<glvertex>& t, int vshift IS(0), int tshift IS(0));
#line 722 "glhr.cpp"
    void prepare(vector<colored_vertex>& v);
#line 740 "glhr.cpp"
    void prepare(vector<textured_vertex>& v);
#line 759 "glhr.cpp"
    void prepare(vector<ct_vertex>& v);
#line 780 "glhr.cpp"
    void store_in_buffer(vector<glvertex>& v);
#line 795 "glhr.cpp"
    void set_depthtest(bool b);
#line 804 "glhr.cpp"
    void set_depthwrite(bool b);
#line 812 "glhr.cpp"
    void set_linewidth(ld lw);
#line 819 "glhr.cpp"
    void switch_to_text(const vector<glvertex>& v, const vector<glvertex>& t);
#line 826 "glhr.cpp"
    void be_nontextured();
#line 827 "glhr.cpp"
    void be_textured();
    }
#line 831 "glhr.cpp"
  extern vector<glhr::textured_vertex> text_vertices;
#line 833 "glhr.cpp"
  void texture_vertices(GLfloat *f, int qty, int stride IS(2));
#line 840 "glhr.cpp"
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
#line 264 "help.cpp"
  string helptitle(string s, color_t col);
#line 336 "help.cpp"
  string generateHelpForItem(eItem it);
#line 535 "help.cpp"
  string generateHelpForWall(eWall w);
#line 555 "help.cpp"
  string generateHelpForMonster(eMonster m);
#line 675 "help.cpp"
  string generateHelpForLand(eLand l);
#line 769 "help.cpp"
  extern bool instat;
#line 777 "help.cpp"
  string bygen(reaction_t h);
#line 796 "help.cpp"
  void appendHelp(string s);
#line 807 "help.cpp"
  extern hookset<void(cell*)> hooks_mouseover;
#line 809 "help.cpp"
  void describeMouseover();
#line 999 "help.cpp"
  void showHelp();
#line 1052 "help.cpp"
  extern hookset<bool()> hooks_default_help;
#line 1054 "help.cpp"
  void gotoHelp(const string& h);
#line 1083 "help.cpp"
  void subhelp(const string& h);
#line 1096 "help.cpp"
  void gotoHelpFor(eLand l);

  // implemented in: heptagon.cpp

#line 27 "heptagon.cpp"
  hstate transition(hstate s, int dir);
#line 72 "heptagon.cpp"
  heptagon *buildHeptagon1(heptagon *h, heptagon *parent, int d, hstate s, int pard IS(0));
#line 242 "heptagon.cpp"
  extern hookset<void(heptagon*, int)> hooks_createStep;

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
    extern int saved_ends;
#line 186 "history.cpp"
    extern cell* first_center_at;
#line 187 "history.cpp"
    extern transmatrix first_center_view;
#line 189 "history.cpp"
    void save_end();
#line 219 "history.cpp"
    extern bool autoband;
#line 220 "history.cpp"
    extern bool autobandhistory;
#line 221 "history.cpp"
    extern bool dospiral;
#line 223 "history.cpp"
    extern ld extra_line_steps;
#line 225 "history.cpp"
    extern vector<cell*> path_for_lineanimation;
#line 227 "history.cpp"
    void clear();
#line 234 "history.cpp"
    void smoothen_line();
#line 265 "history.cpp"
    void create(cell *start, cell *target, transmatrix last);
#line 298 "history.cpp"
    void create_playerpath();
#line 302 "history.cpp"
    void create_recenter_to_view(bool precise);
#line 307 "history.cpp"
    void movetophase();
#line 351 "history.cpp"
    void apply();
    #if CAP_SDL
#line 391 "history.cpp"
    void createImage(bool dospiral);
    #endif
#line 516 "history.cpp"
    bool band_renderable_now();
#line 520 "history.cpp"
    void history_menu();
#line 622 "history.cpp"
    extern set<cell*> inmovehistory, inkillhistory, infindhistory;
#line 624 "history.cpp"
    void restore();
#line 646 "history.cpp"
    void restoreBack();
#line 661 "history.cpp"
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
  extern hookset<bool()> hooks_prestats;
#line 374 "hud.cpp"
  extern bool nofps;
#line 376 "hud.cpp"
  extern color_t crosshair_color;
#line 377 "hud.cpp"
  extern ld crosshair_size;
#line 379 "hud.cpp"
  extern bool long_kills;
#line 382 "hud.cpp"
  int hud_margin(int side);
#line 389 "hud.cpp"
  void drawStats();

  // implemented in: hyper-main.cpp

#line 32 "hyper-main.cpp"
  extern hookset<bool(int argc, char** argv)> hooks_main;
#line 34 "hyper-main.cpp"
  int hyper_main(int argc, char **argv);

  // implemented in: hyperweb.cpp

  #if CAP_URL
#line 76 "hyperweb.cpp"
  void open_url(string s);
  #endif

  // implemented in: hypgraph.cpp

#line 14 "hypgraph.cpp"
  inline bool sphereflipped() { return sphere && pconf.alpha > 1.1 && GDIM == 3; }
#line 23 "hypgraph.cpp"
  void camrotate(ld& hx, ld& hy);
#line 31 "hypgraph.cpp"
  bool non_spatial_model();
#line 43 "hypgraph.cpp"
  hyperpoint perspective_to_space(hyperpoint h, ld alpha IS(pconf.alpha), eGeometryClass gc IS(ginf[geometry].cclass));
#line 78 "hypgraph.cpp"
  hyperpoint space_to_perspective(hyperpoint z, ld alpha IS(pconf.alpha));
#line 91 "hypgraph.cpp"
  hyperpoint gethyper(ld x, ld y);
#line 204 "hypgraph.cpp"
  ld atan2(hyperpoint h);
#line 343 "hypgraph.cpp"
  ld signed_sqrt(ld x);
#line 345 "hypgraph.cpp"
  void applymodel(hyperpoint H, hyperpoint& ret);
#line 918 "hypgraph.cpp"
  extern transmatrix sphereflip; // on the sphere, flip
#line 919 "hypgraph.cpp"
  extern bool playerfound; // has player been found in the last drawing?
#line 921 "hypgraph.cpp"
  bool outofmap(hyperpoint h);
#line 932 "hypgraph.cpp"
  hyperpoint mirrorif(const hyperpoint& V, bool b);
#line 937 "hypgraph.cpp"
  transmatrix mirrorif(const transmatrix& V, bool b);
#line 943 "hypgraph.cpp"
  int away(const transmatrix& V2);
#line 954 "hypgraph.cpp"
  double zgrad0(double l1, double l2, int nom, int den);
#line 959 "hypgraph.cpp"
  bool behindsphere(const hyperpoint& h);
#line 981 "hypgraph.cpp"
  ld spherity(const hyperpoint& h);
#line 995 "hypgraph.cpp"
  bool behindsphere(const transmatrix& V);
#line 999 "hypgraph.cpp"
  ld spherity(const transmatrix& V);
#line 1003 "hypgraph.cpp"
  bool confusingGeometry();
#line 1010 "hypgraph.cpp"
  ld master_to_c7_angle();
#line 1020 "hypgraph.cpp"
  transmatrix actualV(const heptspin& hs, const transmatrix& V);
#line 1037 "hypgraph.cpp"
  bool point_behind(hyperpoint h);
#line 1050 "hypgraph.cpp"
  bool invalid_matrix(const transmatrix T);
#line 1062 "hypgraph.cpp"
  bool invalid_point(const hyperpoint h);
#line 1066 "hypgraph.cpp"
  bool in_smart_range(const transmatrix& T);
#line 1183 "hypgraph.cpp"
  bool drawcell_subs(cell *c, transmatrix V);
#line 1289 "hypgraph.cpp"
  bool keep_vertical();
#line 1296 "hypgraph.cpp"
  hyperpoint vertical_vector();
#line 1307 "hypgraph.cpp"
  void spinEdge(ld aspd);
#line 1347 "hypgraph.cpp"
  void centerpc(ld aspd);
#line 1436 "hypgraph.cpp"
  void optimizeview();
#line 1477 "hypgraph.cpp"
  void resetview();
#line 1524 "hypgraph.cpp"
  void panning(hyperpoint hf, hyperpoint ht);
#line 1530 "hypgraph.cpp"
  extern int cells_drawn, cells_generated;
#line 1532 "hypgraph.cpp"
  void fullcenter();
#line 1558 "hypgraph.cpp"
  eModel flat_model();
#line 1561 "hypgraph.cpp"
  void enable_flat_model();
#line 1575 "hypgraph.cpp"
  /** \brief enable the 'flat' model for drawing HUD. Use RAII so it will be switched back later */
  struct flat_model_enabler {
  projection_configuration bak;
  flat_model_enabler() { bak = pconf; enable_flat_model(); }
  ~flat_model_enabler() { pconf = bak; calcparam(); }
  };
#line 1583 "hypgraph.cpp"
  transmatrix atscreenpos(ld x, ld y, ld size);
#line 1626 "hypgraph.cpp"
  extern color_t periodcolor;
#line 1627 "hypgraph.cpp"
  extern color_t ringcolor;
#line 1628 "hypgraph.cpp"
  extern color_t modelcolor;
  #if CAP_QUEUE
#line 1631 "hypgraph.cpp"
  void draw_model_elements();
#line 1761 "hypgraph.cpp"
  void draw_boundary(int w);
  #endif
#line 1961 "hypgraph.cpp"
  extern ld band_shift;
#line 1962 "hypgraph.cpp"
  void fix_the_band(transmatrix& T);
#line 1982 "hypgraph.cpp"
  struct bandfixer {
  dynamicval<ld> bw;
  bandfixer(transmatrix& T) : bw(band_shift, band_shift) { fix_the_band(T); }
  };
  namespace dq {
#line 1989 "hypgraph.cpp"
    extern queue<tuple<heptagon*, transmatrix, ld>> drawqueue;
#line 1991 "hypgraph.cpp"
    extern set<heptagon*> visited;
#line 1992 "hypgraph.cpp"
    void enqueue(heptagon *h, const transmatrix& T);
#line 1998 "hypgraph.cpp"
    extern set<int> visited_by_matrix;
#line 1999 "hypgraph.cpp"
    void enqueue_by_matrix(heptagon *h, const transmatrix& T);
#line 2008 "hypgraph.cpp"
    extern queue<tuple<cell*, transmatrix, ld>> drawqueue_c;
#line 2009 "hypgraph.cpp"
    extern set<cell*> visited_c;
#line 2011 "hypgraph.cpp"
    void enqueue_c(cell *c, const transmatrix& T);
#line 2017 "hypgraph.cpp"
    void enqueue_by_matrix_c(cell *c, const transmatrix& T);
#line 2026 "hypgraph.cpp"
    void clear_all();
    }
#line 2037 "hypgraph.cpp"
  bool do_draw(cell *c);
#line 2049 "hypgraph.cpp"
  extern ld extra_generation_distance;
#line 2060 "hypgraph.cpp"
  bool do_draw(cell *c, const transmatrix& T);
#line 2123 "hypgraph.cpp"
  int cone_side(const hyperpoint H);
#line 2152 "hypgraph.cpp"
  transmatrix& get_view_orientation();
#line 2156 "hypgraph.cpp"
  extern hookset<bool(const transmatrix&)> hooks_rotate_view;
#line 2157 "hypgraph.cpp"
  extern hookset<bool(const hyperpoint&)> hooks_shift_view;
#line 2160 "hypgraph.cpp"
  void rotate_view(transmatrix T);
#line 2168 "hypgraph.cpp"
  transmatrix get_shift_view_of(const hyperpoint H, const transmatrix V);
#line 2184 "hypgraph.cpp"
  void shift_view(hyperpoint H);
#line 2204 "hypgraph.cpp"
  void shift_view_to(hyperpoint H);
#line 2209 "hypgraph.cpp"
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
#line 428 "inventory.cpp"
    extern const char* helptext;
#line 476 "inventory.cpp"
    string osminfo(eItem orb);
#line 484 "inventory.cpp"
    extern bool activating;
#line 487 "inventory.cpp"
    void show();
    #if CAP_SAVE
#line 684 "inventory.cpp"
    void applyBox(eItem it);
    #endif
#line 689 "inventory.cpp"
    extern int incheck;
#line 691 "inventory.cpp"
    void check(int delta);
    #endif
    #if !CAP_INV
#line 703 "inventory.cpp"
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
#line 51 "items.cpp"
  void pickupMovedItems(cell *c);
#line 64 "items.cpp"
  bool collectItem(cell *c2, bool telekinesis IS(false));
#line 292 "items.cpp"
  void glance_message();
#line 309 "items.cpp"
  void dropGreenStone(cell *c);
#line 342 "items.cpp"
  void moveItem1(cell *from, cell *to, bool activateYendor);
#line 370 "items.cpp"
  void moveItem (cell *from, cell *to, bool activateYendor);
#line 378 "items.cpp"
  bool itemHidden(cell *c);
#line 382 "items.cpp"
  eItem localTreasureType();
#line 387 "items.cpp"
  void countLocalTreasure();
#line 400 "items.cpp"
  static const int NO_TREASURE = 1;
  static const int NO_YENDOR = 2;
  static const int NO_GRAIL = 4;
  static const int NO_LOVE = 8;
#line 406 "items.cpp"
  int gold(int no IS(0));
#line 429 "items.cpp"
  int maxgold();
#line 437 "items.cpp"
  void updateHi(eItem it, int v);
#line 443 "items.cpp"
  void gainItem(eItem it);
#line 502 "items.cpp"
  string itemcounter(int qty);
#line 506 "items.cpp"
  void gainShard(cell *c2, const char *msg);
#line 519 "items.cpp"
  void placeItems(int qty, eItem it);
#line 528 "items.cpp"
  bool cantGetGrimoire(cell *c2, bool verbose IS(true));
#line 539 "items.cpp"
  void gainLife();
#line 544 "items.cpp"
  void collectMessage(cell *c2, eItem which);
#line 662 "items.cpp"
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
#line 2769 "landgen.cpp"
  void repairLandgen(cell *c);
#line 2821 "landgen.cpp"
  void setland_randomwalk(cell *c);
#line 2831 "landgen.cpp"
  void set_land_for_geometry(cell *c);
#line 2849 "landgen.cpp"
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
  extern hookset<eLand(eLand)> hooks_nextland;
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
  }
  
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

#line 856 "language-data.cpp"
  #if CAP_TRANS
  #define NUMEXTRA 151
  #define NATCHARS {"°","²","´","½","Á","Ä","Ç","È","É","Í","Î","Ö","Ú","Ü","ß","à","á","â","ã","ä","ç","è","é","ê","ì","í","î","ï","ò","ó","ô","õ","ö","ø","ù","ú","ü","ý","ą","ć","Č","č","Ď","ď","Ę","ę","Ě","ě","ğ","İ","ı","Ł","ł","ń","ň","Ř","ř","Ś","ś","Ş","ş","Š","š","Ť","ť","ů","Ź","ź","Ż","ż","Ž","ž","Θ","δ","λ","π","ϕ","Ё","А","Б","В","Г","Д","Е","Ж","З","И","Й","К","Л","М","Н","О","П","Р","С","Т","У","Ф","Х","Ц","Ч","Ш","Щ","Ы","Ь","Э","Ю","Я","а","б","в","г","д","е","ж","з","и","й","к","л","м","н","о","п","р","с","т","у","ф","х","ц","ч","ш","щ","ъ","ы","ь","э","ю","я","ё","ᵈ","ᶻ","⁻","←","→","∞","⌫","⏎","�",}
  extern const char* natchars[NUMEXTRA];
  #endif
#line 865 "language-data.cpp"
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
#line 465 "mapeffects.cpp"
  void explosion(cell *c, int power, int central);
#line 511 "mapeffects.cpp"
  void explodeMine(cell *c);
#line 523 "mapeffects.cpp"
  void explodeBarrel(cell *c);
#line 532 "mapeffects.cpp"
  bool mayExplodeMine(cell *c, eMonster who);
#line 539 "mapeffects.cpp"
  void flameHalfvine(cell *c, int val);
#line 549 "mapeffects.cpp"
  bool destroyHalfvine(cell *c, eWall newwall IS(waNone), int tval IS(6));
#line 565 "mapeffects.cpp"
  int coastvalEdge(cell *c);
#line 567 "mapeffects.cpp"
  int gravityLevel(cell *c);
#line 577 "mapeffects.cpp"
  int gravityLevelDiff(cell *c, cell *d);
#line 595 "mapeffects.cpp"
  bool canUnstable(eWall w, flagtype flags);
#line 601 "mapeffects.cpp"
  bool cellEdgeUnstable(cell *c, flagtype flags IS(0));
#line 625 "mapeffects.cpp"
  extern int tidalsize, tide[200];
#line 627 "mapeffects.cpp"
  void calcTidalPhase();
#line 659 "mapeffects.cpp"
  int tidespeed();
#line 663 "mapeffects.cpp"
  extern bool recalcTide;
#line 666 "mapeffects.cpp"
  #define SEADIST LHU.bytes[0]
  #define LANDDIST LHU.bytes[1]
  #define CHAOSPARAM LHU.bytes[2]
  #if CAP_FIELD
#line 672 "mapeffects.cpp"
  int lavatide(cell *c, int t);
  #endif
#line 678 "mapeffects.cpp"
  void checkTide(cell *c);
#line 728 "mapeffects.cpp"
  bool makeEmpty(cell *c);
#line 808 "mapeffects.cpp"
  void toggleGates(cell *c, eWall type, int rad);
#line 836 "mapeffects.cpp"
  void toggleGates(cell *ct, eWall type);
#line 849 "mapeffects.cpp"
  void destroyTrapsOn(cell *c);
#line 857 "mapeffects.cpp"
  void destroyTrapsAround(cell *c);
#line 861 "mapeffects.cpp"
  void destroyWeakBranch(cell *cf, cell *ct, eMonster who);
#line 880 "mapeffects.cpp"
  bool isCentralTrap(cell *c);
#line 887 "mapeffects.cpp"
  array<cell*, 5> traplimits(cell *c);
#line 905 "mapeffects.cpp"
  void activateArrowTrap(cell *c);
#line 916 "mapeffects.cpp"
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
#line 959 "mapeffects.cpp"
  void explodeAround(cell *c);
#line 999 "mapeffects.cpp"
  bool earthMove(const movei& mi);
#line 1013 "mapeffects.cpp"
  bool colorMove(const movei& mi);
#line 1025 "mapeffects.cpp"
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
#line 488 "menus.cpp"
  void show_chaos();
#line 528 "menus.cpp"
  void showChangeMode();
#line 641 "menus.cpp"
  extern bool showstartmenu;
#line 643 "menus.cpp"
  bool showHalloween();
#line 670 "menus.cpp"
  void showStartMenu();
#line 957 "menus.cpp"
  struct named_functionality {
  std::string first;
  reaction_t second;
  explicit named_functionality() = default;
  explicit named_functionality(std::string s, reaction_t r) : first(std::move(s)), second(std::move(r)) {}
  friend bool operator==(const named_functionality& a, const named_functionality& b) { return a.first == b.first; }
  friend bool operator!=(const named_functionality& a, const named_functionality& b) { return a.first != b.first; }
  };
  inline named_functionality named_dialog(string x, reaction_t dialog) { return named_functionality(x, [dialog] () { pushScreen(dialog); }); }
#line 969 "menus.cpp"
  using o_funcs = vector<named_functionality>;
#line 972 "menus.cpp"
  extern hookset<void(o_funcs&)> hooks_o_key;
#line 974 "menus.cpp"
  named_functionality get_o_key();
#line 1026 "menus.cpp"
  extern int messagelogpos;
#line 1027 "menus.cpp"
  extern int timeformat;
#line 1028 "menus.cpp"
  extern int stampbase;
#line 1030 "menus.cpp"
  string gettimestamp(msginfo& m);
#line 1054 "menus.cpp"
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
#line 190 "models.cpp"
    bool model_available(eModel pm);
#line 208 "models.cpp"
    bool has_orientation(eModel m);
#line 213 "models.cpp"
    bool is_perspective(eModel m);
#line 217 "models.cpp"
    bool is_3d(const projection_configuration& p);
#line 222 "models.cpp"
    bool has_transition(eModel m);
#line 226 "models.cpp"
    bool product_model(eModel m);
#line 234 "models.cpp"
    string get_model_name(eModel m);
#line 288 "models.cpp"
    void edit_formula();
#line 318 "models.cpp"
    void edit_rotation(ld& which);
#line 342 "models.cpp"
    void model_list();
#line 401 "models.cpp"
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
#line 785 "monstergen.cpp"
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
#line 111 "monstermove.cpp"
  void moveMonster(const movei& mi);
#line 338 "monstermove.cpp"
  bool cannotGo(eMonster m, cell *c);
#line 344 "monstermove.cpp"
  bool wantsToStay(eMonster m);
#line 348 "monstermove.cpp"
  bool batsAfraid(cell *c);
#line 367 "monstermove.cpp"
  int angledist(int t, int d1, int d2);
#line 375 "monstermove.cpp"
  int angledistButterfly(int t, int d1, int d2, bool mirrored);
#line 382 "monstermove.cpp"
  int angledist(cell *c, int d1, int d2);
#line 386 "monstermove.cpp"
  bool anglestraight(cell *c, int d1, int d2);
#line 390 "monstermove.cpp"
  int bulldist(cell *c);
#line 396 "monstermove.cpp"
  int bulldistance(cell *c, cell *d);
#line 403 "monstermove.cpp"
  int landheattype(cell *c);
#line 413 "monstermove.cpp"
  int moveval(cell *c1, cell *c2, int d, flagtype mf);
#line 536 "monstermove.cpp"
  int stayval(cell *c, flagtype mf);
#line 562 "monstermove.cpp"
  int totalbulldistance(cell *c, int k);
#line 572 "monstermove.cpp"
  void determinizeBull(cell *c, vector<int>& posdir);
#line 589 "monstermove.cpp"
  int determinizeBullPush(cellwalker bull);
#line 605 "monstermove.cpp"
  int pickMoveDirection(cell *c, flagtype mf);
#line 624 "monstermove.cpp"
  int pickDownDirection(cell *c, flagtype mf);
#line 646 "monstermove.cpp"
  void beastAttack(cell *c, bool player, bool targetdir);
#line 682 "monstermove.cpp"
  extern bool quantum;
#line 684 "monstermove.cpp"
  cell *moveNormal(cell *c, flagtype mf);
#line 769 "monstermove.cpp"
  void mountmove(const movei& mi, bool fp);
#line 794 "monstermove.cpp"
  void moveWorm(cell *c);
#line 934 "monstermove.cpp"
  void ivynext(cell *c);
#line 968 "monstermove.cpp"
  void removeIvy(cell *c);
#line 984 "monstermove.cpp"
  void moveivy();
#line 1053 "monstermove.cpp"
  bool isTargetOrAdjacent(cell *c);
#line 1060 "monstermove.cpp"
  void groupmove2(const movei& mi, eMonster movtype, flagtype mf);
#line 1159 "monstermove.cpp"
  void groupmove(eMonster movtype, flagtype mf);
#line 1224 "monstermove.cpp"
  void moveHexSnake(const movei& mi, bool mounted);
#line 1250 "monstermove.cpp"
  void snakeAttack(cell *c, bool mounted);
#line 1261 "monstermove.cpp"
  bool goodmount(cell *c, bool mounted);
#line 1266 "monstermove.cpp"
  int inpair(cell *c, int colorpair);
#line 1270 "monstermove.cpp"
  int snake_pair(cell *c);
#line 1278 "monstermove.cpp"
  void hexvisit(cell *c, cell *from, int d, bool mounted, int colorpair);
#line 1313 "monstermove.cpp"
  void movehex(bool mounted, int colorpair);
#line 1342 "monstermove.cpp"
  void movehex_rest(bool mounted);
#line 1373 "monstermove.cpp"
  void movemutant();
#line 1421 "monstermove.cpp"
  #define SHSIZE 16
#line 1424 "monstermove.cpp"
  extern vector<array<cell*, MAXPLAYER>> shpos;
#line 1425 "monstermove.cpp"
  extern int cshpos;
#line 1427 "monstermove.cpp"
  extern cell *lastmountpos[MAXPLAYER];
#line 1429 "monstermove.cpp"
  void clearshadow();
#line 1435 "monstermove.cpp"
  void moveshadow();
#line 1466 "monstermove.cpp"
  void moveghosts();
#line 1523 "monstermove.cpp"
  int stayvalue(eMonster m, cell *c);
#line 1533 "monstermove.cpp"
  int movevalue(eMonster m, cell *c, cell *c2, flagtype flags);
#line 1628 "monstermove.cpp"
  void movegolems(flagtype flags);
#line 1727 "monstermove.cpp"
  void moveButterflies();
#line 1749 "monstermove.cpp"
  void stormNextTurn(cell *c);
#line 1754 "monstermove.cpp"
  void castWeakLightningBoltFrom(cell *c);
#line 1759 "monstermove.cpp"
  void castWeakLightningBolt(cellwalker lig);
#line 1852 "monstermove.cpp"
  void specialMoves();
#line 2042 "monstermove.cpp"
  void moveworms();
#line 2051 "monstermove.cpp"
  void refreshFriend(cell *c);
#line 2060 "monstermove.cpp"
  void consMove(cell *c, eMonster param);
#line 2086 "monstermove.cpp"
  void moveNormals(eMonster param);
#line 2107 "monstermove.cpp"
  void movehex_all();
#line 2116 "monstermove.cpp"
  void movemonsters();
#line 2242 "monstermove.cpp"
  bool nogoSlow(cell *to, cell *from);
#line 2248 "monstermove.cpp"
  void beastcrash(cell *c, cell *beast);
#line 2280 "monstermove.cpp"
  void stayEffect(cell *c);
#line 2293 "monstermove.cpp"
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
#line 161 "multigame.cpp"
    void switch_to(int k);
#line 172 "multigame.cpp"
    bool movepc(int d, int subdir, bool checkonly);
#line 254 "multigame.cpp"
    void in_subscreen(reaction_t what);
#line 260 "multigame.cpp"
    bool split(reaction_t what);
#line 273 "multigame.cpp"
    void enable();
#line 311 "multigame.cpp"
    void disable();
#line 345 "multigame.cpp"
    bool check_side(eLand l);
#line 349 "multigame.cpp"
    void assign_landsides();
#line 417 "multigame.cpp"
    void add_choice();
#line 430 "multigame.cpp"
    void split_or_do(reaction_t what);
#line 435 "multigame.cpp"
    bool may_split(reaction_t what);
#line 443 "multigame.cpp"
    void may_split_or_do(reaction_t what);
#line 452 "multigame.cpp"
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
    hyperpoint get_inverse_exp_symsol(hyperpoint h, flagtype flags);
#line 575 "nonisotropic.cpp"
    hyperpoint get_inverse_exp_nsym(hyperpoint h, flagtype flags);
#line 592 "nonisotropic.cpp"
    extern string shader_symsol;
#line 639 "nonisotropic.cpp"
    extern string shader_nsymsol;
#line 677 "nonisotropic.cpp"
    extern string shader_nsym;
#line 699 "nonisotropic.cpp"
    extern ld solrange_xy;
#line 700 "nonisotropic.cpp"
    extern ld solrange_z;
#line 702 "nonisotropic.cpp"
    bool in_table_range(hyperpoint h);
#line 706 "nonisotropic.cpp"
    extern tabled_inverses solt;
#line 707 "nonisotropic.cpp"
    extern tabled_inverses niht;
#line 708 "nonisotropic.cpp"
    extern tabled_inverses sont;
#line 710 "nonisotropic.cpp"
    tabled_inverses& get_tabled();
#line 719 "nonisotropic.cpp"
    int approx_distance(heptagon *h1, heptagon *h2);
    }
  #endif
  namespace nilv {
#line 741 "nonisotropic.cpp"
    hyperpoint formula_exp(hyperpoint v);
#line 762 "nonisotropic.cpp"
    hyperpoint get_inverse_exp(hyperpoint h, flagtype prec IS(pNORMAL));
#line 802 "nonisotropic.cpp"
    extern string nilshader;
#line 829 "nonisotropic.cpp"
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
#line 850 "nonisotropic.cpp"
    extern ld nilwidth;
#line 855 "nonisotropic.cpp"
    struct nilstructure {
    vector<mvec> movevectors;
    vector<vector<hyperpoint>> facevertices;
    };
#line 889 "nonisotropic.cpp"
    nilstructure& current_ns();
#line 891 "nonisotropic.cpp"
    extern array<int,3> nilperiod, nilperiod_edit;
#line 894 "nonisotropic.cpp"
    transmatrix adjmatrix(int i);
#line 972 "nonisotropic.cpp"
    mvec get_coord(heptagon *h);
#line 974 "nonisotropic.cpp"
    heptagon *get_heptagon_at(mvec m);
#line 976 "nonisotropic.cpp"
    void set_flags();
#line 984 "nonisotropic.cpp"
    hyperpoint on_geodesic(hyperpoint s0, hyperpoint s1, ld x);
#line 990 "nonisotropic.cpp"
    color_t colorize(cell *c, char whichCanvas);
#line 1011 "nonisotropic.cpp"
    void prepare_niltorus3();
#line 1016 "nonisotropic.cpp"
    void show_niltorus3();
    }
#line 1057 "nonisotropic.cpp"
  bool in_s2xe();
#line 1058 "nonisotropic.cpp"
  bool in_h2xe();
#line 1059 "nonisotropic.cpp"
  bool in_e2xe();
  namespace hybrid {
#line 1063 "nonisotropic.cpp"
    extern eGeometry underlying;
#line 1064 "nonisotropic.cpp"
    extern geometry_information *underlying_cgip;
#line 1066 "nonisotropic.cpp"
    eGeometryClass under_class();
#line 1068 "nonisotropic.cpp"
    transmatrix ray_iadj(cell *c, int i);
#line 1086 "nonisotropic.cpp"
    void configure(eGeometry g);
#line 1117 "nonisotropic.cpp"
    void reconfigure();
#line 1126 "nonisotropic.cpp"
    extern hrmap *pmap;
#line 1127 "nonisotropic.cpp"
    extern geometry_information *pcgip;
#line 1128 "nonisotropic.cpp"
    extern eGeometry actual_geometry;
#line 1218 "nonisotropic.cpp"
    cell *get_at(cell *base, int level);
#line 1222 "nonisotropic.cpp"
    pair<cell*, int> get_where(cell *c);
#line 1224 "nonisotropic.cpp"
    void find_cell_connection(cell *c, int d);
#line 1241 "nonisotropic.cpp"
    hrmap* get_umap();
#line 1244 "nonisotropic.cpp"
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
#line 1257 "nonisotropic.cpp"
    hyperpoint get_corner(cell *c, int i, int next, ld z);
#line 1284 "nonisotropic.cpp"
    int wall_offset(cell *c);
#line 1356 "nonisotropic.cpp"
    vector<pair<int, cell*>> gen_sample_list();
#line 1367 "nonisotropic.cpp"
    void will_link(cell *c);
#line 1369 "nonisotropic.cpp"
    extern bool in_link;
#line 1371 "nonisotropic.cpp"
    void link();
#line 1395 "nonisotropic.cpp"
    int celldistance(cell *c1, cell *c2);
    }
  namespace product {
#line 1478 "nonisotropic.cpp"
    extern bool current_spin_invalid;
#line 1480 "nonisotropic.cpp"
    extern int csteps, cspin;
#line 1481 "nonisotropic.cpp"
    extern bool cmirror;
#line 1483 "nonisotropic.cpp"
    hyperpoint inverse_exp(hyperpoint h);
#line 1505 "nonisotropic.cpp"
    hyperpoint direct_exp(hyperpoint h);
#line 1515 "nonisotropic.cpp"
    bool validate_spin();
#line 1537 "nonisotropic.cpp"
    void show_config();
    }
  namespace slr {
#line 1596 "nonisotropic.cpp"
    extern ld range_xy;
#line 1597 "nonisotropic.cpp"
    extern int steps;
#line 1599 "nonisotropic.cpp"
    hyperpoint from_phigans(hyperpoint h);
#line 1607 "nonisotropic.cpp"
    hyperpoint to_phigans(hyperpoint h);
#line 1653 "nonisotropic.cpp"
    transmatrix translate(hyperpoint h);
#line 1662 "nonisotropic.cpp"
    hyperpoint polar(ld r, ld theta, ld phi);
#line 1666 "nonisotropic.cpp"
    hyperpoint xyz_point(ld x, ld y, ld z);
#line 1721 "nonisotropic.cpp"
    hyperpoint formula_exp(hyperpoint h);
#line 1762 "nonisotropic.cpp"
    hyperpoint get_inverse_exp(hyperpoint h, ld index IS(0));
#line 1774 "nonisotropic.cpp"
    extern string slshader;
    }
  namespace rots {
#line 1869 "nonisotropic.cpp"
    transmatrix uxpush(ld x);
#line 1874 "nonisotropic.cpp"
    transmatrix uypush(ld y);
#line 1879 "nonisotropic.cpp"
    transmatrix uzpush(ld z);
#line 1884 "nonisotropic.cpp"
    transmatrix lift_matrix(const transmatrix& T);
#line 1902 "nonisotropic.cpp"
    transmatrix ray_iadj(cell *c1, int i);
#line 1955 "nonisotropic.cpp"
    transmatrix qtm(hyperpoint h);
#line 2002 "nonisotropic.cpp"
    extern ld underlying_scale;
#line 2004 "nonisotropic.cpp"
    void draw_underlying(bool cornermode);
    }
  namespace stretch {
#line 2066 "nonisotropic.cpp"
    extern ld factor;  
#line 2068 "nonisotropic.cpp"
    bool applicable();
#line 2072 "nonisotropic.cpp"
    bool in();
#line 2076 "nonisotropic.cpp"
    transmatrix translate(hyperpoint h);
#line 2086 "nonisotropic.cpp"
    transmatrix itranslate(hyperpoint h);
#line 2100 "nonisotropic.cpp"
    ld squared();
#line 2104 "nonisotropic.cpp"
    ld not_squared();
#line 2135 "nonisotropic.cpp"
    ld sqnorm(hyperpoint at, hyperpoint h);
    }
  namespace nisot {
#line 2145 "nonisotropic.cpp"
    hyperpoint christoffel(const hyperpoint at, const hyperpoint velocity, const hyperpoint transported);
#line 2155 "nonisotropic.cpp"
    bool in_table_range(hyperpoint h);
#line 2162 "nonisotropic.cpp"
    hyperpoint get_acceleration(const hyperpoint& at, const hyperpoint& vel);
#line 2166 "nonisotropic.cpp"
    void geodesic_step(hyperpoint& at, hyperpoint& vel);
#line 2177 "nonisotropic.cpp"
    extern int rk_steps;
#line 2179 "nonisotropic.cpp"
    hyperpoint numerical_exp(hyperpoint v);
#line 2187 "nonisotropic.cpp"
    transmatrix parallel_transport_bare(transmatrix Pos, hyperpoint h);
#line 2279 "nonisotropic.cpp"
    void fixmatrix(transmatrix& T);
#line 2288 "nonisotropic.cpp"
    transmatrix parallel_transport(const transmatrix Position, const hyperpoint direction);
#line 2295 "nonisotropic.cpp"
    transmatrix spin_towards(const transmatrix Position, const hyperpoint goal, flagtype prec IS(pNORMAL));
#line 2307 "nonisotropic.cpp"
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
#line 176 "orbgen.cpp"
  eItem nativeOrbType(eLand l);
#line 196 "orbgen.cpp"
  extern string olrDescriptions[];
#line 217 "orbgen.cpp"
  eOrbLandRelation getOLR(eItem it, eLand l);
#line 403 "orbgen.cpp"
  int orbsUnlocked();
#line 411 "orbgen.cpp"
  ld orbprizefun(int tr);
#line 417 "orbgen.cpp"
  ld orbcrossfun(int tr);
#line 424 "orbgen.cpp"
  bool buildPrizeMirror(cell *c, int freq);
#line 433 "orbgen.cpp"
  extern cellwalker cwt;
#line 436 "orbgen.cpp"
  eLand getPrizeLand(cell *c IS(cwt.at));
#line 444 "orbgen.cpp"
  void placePrizeOrb(cell *c);
#line 494 "orbgen.cpp"
  int treasureForLocal();
#line 498 "orbgen.cpp"
  bool extra_safety_for_memory(cell *c);
#line 508 "orbgen.cpp"
  void placeLocalOrbs(cell *c);
#line 549 "orbgen.cpp"
  void placeLocalSpecial(cell *c, int outof, int loc IS(1), int priz IS(1));
#line 558 "orbgen.cpp"
  void placeCrossroadOrbs(cell *c);
#line 594 "orbgen.cpp"
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
#line 183 "pcmove.cpp"
  extern cell *lastmove;
#line 188 "pcmove.cpp"
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
  
  bool vmsg();
  };
#line 227 "pcmove.cpp"
  extern cell *global_pushto;
#line 231 "pcmove.cpp"
  bool movepcto(int d, int subdir IS(1), bool checkonly IS(false));
#line 388 "pcmove.cpp"
  void copy_metadata(cell *x, const gcell *y);
#line 404 "pcmove.cpp"
  
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
  };
#line 517 "pcmove.cpp"
  extern changes_t changes;
#line 988 "pcmove.cpp"
  bool chaos_forbidden(cell *c);
#line 1144 "pcmove.cpp"
  inline bool movepcto(const movedir& md) { return movepcto(md.d, md.subdir); }
#line 1148 "pcmove.cpp"
  bool warningprotection(const string& s);
#line 1172 "pcmove.cpp"
  bool warningprotection_hit(eMonster m);
#line 1178 "pcmove.cpp"
  bool playerInWater();
#line 1185 "pcmove.cpp"
  int numplayers();
#line 1189 "pcmove.cpp"
  cell *playerpos(int i);
#line 1195 "pcmove.cpp"
  bool allPlayersInBoats();
#line 1201 "pcmove.cpp"
  int whichPlayerOn(cell *c);
#line 1208 "pcmove.cpp"
  bool isPlayerOn(cell *c);
#line 1212 "pcmove.cpp"
  bool isPlayerInBoatOn(cell *c, int i);
#line 1219 "pcmove.cpp"
  bool playerInBoat(int i);
#line 1223 "pcmove.cpp"
  bool isPlayerInBoatOn(cell *c);
#line 1228 "pcmove.cpp"
  bool playerInPower();
#line 1237 "pcmove.cpp"
  void playerMoveEffects(cell *c1, cell *c2);
#line 1285 "pcmove.cpp"
  void afterplayermoved();
#line 1296 "pcmove.cpp"
  void produceGhost(cell *c, eMonster victim, eMonster who);
#line 1305 "pcmove.cpp"
  bool swordAttack(cell *mt, eMonster who, cell *c, int bb);
#line 1346 "pcmove.cpp"
  void swordAttackStatic(int bb);
#line 1350 "pcmove.cpp"
  void swordAttackStatic();
#line 1356 "pcmove.cpp"
  extern int plague_kills;
#line 1358 "pcmove.cpp"
  void spread_plague(cell *mf, cell *mt, int dir, eMonster who);
#line 1365 "pcmove.cpp"
  void sideAttackAt(cell *mf, int dir, cell *mt, eMonster who, eItem orb, cell *pf);
#line 1419 "pcmove.cpp"
  void sideAttack(cell *mf, int dir, eMonster who, int bonus, eItem orb);
#line 1430 "pcmove.cpp"
  void sideAttack(cell *mf, int dir, eMonster who, int bonuskill);
#line 1445 "pcmove.cpp"
  eMonster do_we_stab_a_friend(cell *mf, cell *mt, eMonster who);
#line 1465 "pcmove.cpp"
  void wouldkill(const char *msg);
#line 1476 "pcmove.cpp"
  bool havePushConflict(cell *pushto, bool checkonly);
#line 1495 "pcmove.cpp"
  void movecost(cell* from, cell *to, int phase);

  // implemented in: polygons.cpp

  #if CAP_SHAPES
#line 14 "polygons.cpp"
  static constexpr ld NEWSHAPE = (-13.5);
#line 308 "polygons.cpp"
  #define SHADMUL (S3==4 ? 1.05 : 1.3)
#line 1627 "polygons.cpp"
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
#line 472 "quit.cpp"
  void handleKeyQuit(int sym, int uni);
#line 523 "quit.cpp"
  int counthints();
#line 527 "quit.cpp"
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
#line 331 "racing.cpp"
    void block_cells(vector<cell*> to_block, function<bool(cell*)> blockbound);
#line 388 "racing.cpp"
    void make_bounded_track(cell *s);
#line 424 "racing.cpp"
    extern bool bounded_track;
#line 426 "racing.cpp"
    void generate_track();
#line 744 "racing.cpp"
    extern ld race_angle;
#line 746 "racing.cpp"
    bool force_standard_centering();
#line 750 "racing.cpp"
    bool use_standard_centering();
#line 754 "racing.cpp"
    bool set_view();
#line 849 "racing.cpp"
    extern vector<eLand> race_lands;
#line 876 "racing.cpp"
    string racetimeformat(int t);
    #if MAXMDIM >= 4
#line 1064 "racing.cpp"
    void thurston_racing();
    #endif
#line 1224 "racing.cpp"
    void configure_race();
#line 1250 "racing.cpp"
    void displayScore(eLand l);
#line 1272 "racing.cpp"
    void race_won();
#line 1363 "racing.cpp"
    int get_percentage(cell *c);
#line 1367 "racing.cpp"
    int get_percentage(int i);
#line 1379 "racing.cpp"
    void drawStats();
#line 1406 "racing.cpp"
    void markers();
#line 1452 "racing.cpp"
    void add_debug(cell *c);
    #endif
    #if !CAP_RACING
#line 1464 "racing.cpp"
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
    #if CAP_RAY
#line 20 "raycaster.cpp"
    extern bool in_use;
#line 21 "raycaster.cpp"
    extern bool comparison_mode;
#line 24 "raycaster.cpp"
    extern int want_use;
#line 26 "raycaster.cpp"
    extern ld exp_start;
#line 30 "raycaster.cpp"
    extern ld maxstep_sol;
#line 31 "raycaster.cpp"
    extern ld maxstep_nil;
#line 32 "raycaster.cpp"
    extern ld minstep;
#line 34 "raycaster.cpp"
    extern ld reflect_val;
#line 38 "raycaster.cpp"
    extern ld hard_limit;
#line 40 "raycaster.cpp"
    extern int max_iter_sol;
#line 42 "raycaster.cpp"
    extern int max_cells;
#line 43 "raycaster.cpp"
    extern bool rays_generate;
#line 45 "raycaster.cpp"
    ld& exp_decay_current();
#line 50 "raycaster.cpp"
    int& max_iter_current();
#line 65 "raycaster.cpp"
    bool available();
#line 88 "raycaster.cpp"
    bool requested();
#line 101 "raycaster.cpp"
    struct raycaster : glhr::GLprogram {
    GLint uStart, uStartid, uM, uLength, uFovX, uFovY, uIPD, uShift;
    GLint uWallstart, uWallX, uWallY;
    GLint tConnections, tWallcolor, tTextureMap, tVolumetric;
    GLint uBinaryWidth, uPLevel, uLP, uStraighten, uReflectX, uReflectY;
    GLint uLinearSightRange, uExpStart, uExpDecay;
    GLint uBLevel;
    GLint uPosX, uPosY;
    GLint uWallOffset, uSides;
    
    raycaster(string vsh, string fsh);
    };
#line 157 "raycaster.cpp"
    void reset_raycaster();
#line 186 "raycaster.cpp"
    extern hookset<void(string&, string&)> hooks_rayshader;
#line 187 "raycaster.cpp"
    extern hookset<bool(shared_ptr<raycaster>)> hooks_rayset;
#line 1107 "raycaster.cpp"
    void cast();
    namespace volumetric {
#line 1421 "raycaster.cpp"
      extern bool on;
#line 1423 "raycaster.cpp"
      extern map<cell*, color_t> vmap;
#line 1427 "raycaster.cpp"
      void enable();
#line 1434 "raycaster.cpp"
      void random_fog();
#line 1440 "raycaster.cpp"
      void menu();
      }
#line 1492 "raycaster.cpp"
    void configure();
    #endif
    #if !CAP_RAY
#line 1692 "raycaster.cpp"
    extern always_false in_use;
#line 1693 "raycaster.cpp"
    extern always_false comparison_mode;
#line 1694 "raycaster.cpp"
    void reset_raycaster();
#line 1695 "raycaster.cpp"
    void cast();
    #endif
    }

  // implemented in: reg3.cpp

  #if MAXMDIM >= 4
  namespace reg3 {
#line 27 "reg3.cpp"
    inline short& altdist(heptagon *h) { return h->emeraldval; }
#line 30 "reg3.cpp"
    extern int extra_verification;
#line 32 "reg3.cpp"
    extern bool ultra_mirror_on;
#line 34 "reg3.cpp"
    bool ultra_mirror_in();
#line 36 "reg3.cpp"
    bool in();
#line 41 "reg3.cpp"
    void compute_ultra();
#line 97 "reg3.cpp"
    void make_vertices_only();
#line 107 "reg3.cpp"
    void generate();
#line 286 "reg3.cpp"
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
    
    vector<hyperpoint> get_vertices(cell* c) override { return cgi.vertices_only; }
    };
    #if CAP_CRYSTAL
#line 369 "reg3.cpp"
    crystal::coord decode_coord(int a);
    #endif
#line 1322 "reg3.cpp"
    hrmap *new_alt_map(heptagon *o);
#line 1326 "reg3.cpp"
    void link_structures(heptagon *h, heptagon *alt, hstate firststate);
#line 1347 "reg3.cpp"
    extern bool reg3_rule_available;
#line 1349 "reg3.cpp"
    bool in_rule();
#line 1353 "reg3.cpp"
    int rule_get_root(int i);
#line 1357 "reg3.cpp"
    const vector<short>& rule_get_children();
#line 1361 "reg3.cpp"
    hrmap* new_map();
#line 1374 "reg3.cpp"
    int quotient_count();
#line 1421 "reg3.cpp"
    int celldistance(cell *c1, cell *c2);
#line 1441 "reg3.cpp"
    bool pseudohept(cell *c);
#line 1483 "reg3.cpp"
    void generate_cellrotations();
    #endif
    #if MAXMDIM >= 4
#line 1611 "reg3.cpp"
    cellwalker strafe(cellwalker cw, int j);
#line 1622 "reg3.cpp"
    int matrix_order(const transmatrix A);
#line 1631 "reg3.cpp"
    void generate_fulls();
#line 1650 "reg3.cpp"
    void construct_relations();
    }
  #endif
  #if MAXMDIM == 3
  namespace reg3 {
#line 1716 "reg3.cpp"
    bool in();
#line 1717 "reg3.cpp"
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
#line 169 "renderbuffer.cpp"
  extern int current_rbuffer;

  // implemented in: rug.cpp

  #if CAP_RUG
#line 18 "rug.cpp"
  extern bool rug_failure;
  namespace rug {
#line 22 "rug.cpp"
    extern transmatrix rugView;
#line 24 "rug.cpp"
    extern ld lwidth;
#line 26 "rug.cpp"
    bool in_crystal();
#line 31 "rug.cpp"
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
    hyperpoint h;      // point in the represented space
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
#line 79 "rug.cpp"
    extern vector<rugpoint*> points;
#line 80 "rug.cpp"
    extern vector<triangle> triangles;
#line 86 "rug.cpp"
    extern bool fast_euclidean;
#line 87 "rug.cpp"
    extern bool good_shape;
#line 88 "rug.cpp"
    extern bool subdivide_first;
#line 89 "rug.cpp"
    extern bool spatial_rug;
#line 91 "rug.cpp"
    extern bool subdivide_further();
#line 92 "rug.cpp"
    extern void subdivide();
#line 94 "rug.cpp"
    extern ld modelscale;
#line 95 "rug.cpp"
    extern ld model_distance;
#line 98 "rug.cpp"
    constexpr eGeometry rgHyperbolic = gSpace534;
    constexpr eGeometry rgEuclid = gCubeTiling;
    constexpr eGeometry rgSphere = gCell120;
    constexpr eGeometry rgElliptic = gECell120;
#line 104 "rug.cpp"
    extern eGeometry gwhere;
#line 107 "rug.cpp"
    #define USING_NATIVE_GEOMETRY_IN_RUG dynamicval<eGeometry> gw(geometry, rug::rugged ? hr::rug::gwhere : geometry)
    #define USING_NATIVE_GEOMETRY dynamicval<eGeometry> gw(geometry, hr::rug::gwhere)
#line 114 "rug.cpp"
    extern bool rugged;
#line 117 "rug.cpp"
    extern int vertex_limit;
#line 119 "rug.cpp"
    extern bool renderonce;
#line 120 "rug.cpp"
    extern int renderlate;
#line 121 "rug.cpp"
    extern bool rendernogl;
#line 122 "rug.cpp"
    extern int  texturesize;
#line 123 "rug.cpp"
    extern ld scale;
#line 124 "rug.cpp"
    extern ld ruggo;
#line 126 "rug.cpp"
    extern ld anticusp_factor;
#line 127 "rug.cpp"
    extern ld anticusp_dist;
#line 129 "rug.cpp"
    extern ld err_zero;
#line 131 "rug.cpp"
    extern int queueiter, qvalid, dt;
#line 133 "rug.cpp"
    extern rugpoint *finger_center;
#line 134 "rug.cpp"
    extern ld finger_range;
#line 135 "rug.cpp"
    extern ld finger_force;
#line 139 "rug.cpp"
    bool perspective();
#line 151 "rug.cpp"
    void push_all_points(int coord, ld val);
#line 167 "rug.cpp"
    rugpoint *addRugpoint(hyperpoint h, double dist);
#line 272 "rug.cpp"
    rugpoint *findRugpoint(hyperpoint h);
#line 279 "rug.cpp"
    rugpoint *findOrAddRugpoint(hyperpoint h, double dist);
#line 290 "rug.cpp"
    bool edge_exists(rugpoint *e1, rugpoint *e2);
#line 310 "rug.cpp"
    void addTriangle(rugpoint *t1, rugpoint *t2, rugpoint *t3, ld len IS(1));
#line 338 "rug.cpp"
    void sort_rug_points();
#line 348 "rug.cpp"
    void calcparam_rug();
#line 358 "rug.cpp"
    void buildTorusRug();
#line 489 "rug.cpp"
    void verify();
#line 515 "rug.cpp"
    void buildRug();
#line 589 "rug.cpp"
    void enqueue(rugpoint *m);
#line 647 "rug.cpp"
    void preset(rugpoint *m);
#line 717 "rug.cpp"
    void optimize(rugpoint *m, bool do_preset);
#line 746 "rug.cpp"
    bool subdivide_further();
#line 752 "rug.cpp"
    void subdivide();
#line 806 "rug.cpp"
    ld modeldist(const hyperpoint& h1, const hyperpoint& h2);
#line 898 "rug.cpp"
    void addNewPoints();
#line 928 "rug.cpp"
    void physics();
#line 992 "rug.cpp"
    extern basic_textureinfo tinf;
#line 1014 "rug.cpp"
    extern struct renderbuffer *glbuf;
#line 1016 "rug.cpp"
    void prepareTexture();
#line 1054 "rug.cpp"
    extern bool no_fog;
#line 1056 "rug.cpp"
    extern ld lowrug;
#line 1057 "rug.cpp"
    extern ld hirug;
#line 1059 "rug.cpp"
    extern GLuint alternate_texture;
#line 1061 "rug.cpp"
    extern bool invert_depth;
#line 1063 "rug.cpp"
    bool rug_control();
#line 1066 "rug.cpp"
    
    struct using_rugview {
    using_rugview() { if(rug_control()) swap(View, rugView), swap(geometry, gwhere); }
    ~using_rugview() { if(rug_control()) swap(View, rugView), swap(geometry, gwhere); }
    };
    
#line 1075 "rug.cpp"
    void drawRugScene();
#line 1109 "rug.cpp"
    extern transmatrix currentrot;
#line 1111 "rug.cpp"
    void close_glbuf();
#line 1116 "rug.cpp"
    void ensure_glbuf();
#line 1126 "rug.cpp"
    void reopen();
#line 1137 "rug.cpp"
    extern bool display_warning;
#line 1139 "rug.cpp"
    void init_model();
#line 1185 "rug.cpp"
    void reset_view();
#line 1193 "rug.cpp"
    void init();
#line 1200 "rug.cpp"
    void clear_model();
#line 1207 "rug.cpp"
    void close();
#line 1220 "rug.cpp"
    bool handlekeys(int sym, int uni);
#line 1263 "rug.cpp"
    void finger_on(int coord, ld val);
#line 1273 "rug.cpp"
    extern ld ruggospeed;
#line 1275 "rug.cpp"
    void actDraw();
#line 1325 "rug.cpp"
    hyperpoint gethyper(ld x, ld y);
#line 1405 "rug.cpp"
    string makehelp();
#line 1427 "rug.cpp"
    void rug_geometry_choice();
#line 1456 "rug.cpp"
    void show();
#line 1646 "rug.cpp"
    void select();
#line 1651 "rug.cpp"
    void rug_save(string fname);
#line 1691 "rug.cpp"
    void rug_load(string fname);
    }
  #endif
  #if !CAP_RUG
  namespace rug {
#line 1848 "rug.cpp"
    extern bool rugged;
#line 1849 "rug.cpp"
    extern bool renderonce;
#line 1850 "rug.cpp"
    extern bool rendernogl;
#line 1851 "rug.cpp"
    extern int texturesize;
#line 1852 "rug.cpp"
    extern ld scale;
#line 1853 "rug.cpp"
    bool rug_control();
#line 1854 "rug.cpp"
    bool in_crystal();
#line 1855 "rug.cpp"
    void reset_view();
    }
  #endif

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
#line 242 "screenshot.cpp"
    extern always_false in;
    #endif
    #if CAP_WRL
#line 246 "screenshot.cpp"
    extern bool in;
#line 248 "screenshot.cpp"
    extern bool print;
#line 249 "screenshot.cpp"
    extern bool textures;
#line 251 "screenshot.cpp"
    extern ld rug_width;
#line 290 "screenshot.cpp"
    void fatten(vector<hyperpoint>& data, vector<glvertex>& tdata);
#line 362 "screenshot.cpp"
    int texture_type(dqi_poly& p);
#line 375 "screenshot.cpp"
    void prepare(dqi_poly& p);
#line 389 "screenshot.cpp"
    void polygon(dqi_poly& p);
#line 477 "screenshot.cpp"
    void render();
#line 508 "screenshot.cpp"
    void take(const string& fname, const function<void()>& what IS(shot::default_screenshot_content));
    #endif
    }
  #if CAP_SHOT
  namespace shot {
#line 627 "screenshot.cpp"
    enum screenshot_format { png, svg, wrl, rawfile };
#line 630 "screenshot.cpp"
    extern int rawfile_handle;
#line 632 "screenshot.cpp"
    extern int shotx;
#line 633 "screenshot.cpp"
    extern int shoty;
#line 634 "screenshot.cpp"
    extern screenshot_format format;
#line 635 "screenshot.cpp"
    extern bool transparent;
#line 636 "screenshot.cpp"
    extern ld gamma;
#line 637 "screenshot.cpp"
    extern int shotformat;
#line 638 "screenshot.cpp"
    extern string caption;
#line 639 "screenshot.cpp"
    extern ld fade;
#line 652 "screenshot.cpp"
    extern int shot_aa;
#line 654 "screenshot.cpp"
    void default_screenshot_content();
    #if CAP_SDL
#line 673 "screenshot.cpp"
    SDL_Surface *empty_surface(int x, int y, bool alpha);
    #endif
    #if CAP_PNG
#line 689 "screenshot.cpp"
    void postprocess(string fname, SDL_Surface *sdark, SDL_Surface *sbright);
    #endif
#line 726 "screenshot.cpp"
    extern purehookset hooks_take;
#line 762 "screenshot.cpp"
    void take(string fname, const function<void()>& what IS(default_screenshot_content));
#line 875 "screenshot.cpp"
    string format_name();
#line 882 "screenshot.cpp"
    string format_extension();
#line 890 "screenshot.cpp"
    void choose_screenshot_format();
#line 910 "screenshot.cpp"
    void menu();
    }
  #endif
  #if CAP_ANIMATIONS
  namespace anims {
#line 1072 "screenshot.cpp"
    enum eMovementAnimation {
    maNone, maTranslation, maRotation, maCircle, maParabolic, maTranslationRotation
    };
#line 1077 "screenshot.cpp"
    extern eMovementAnimation ma;
#line 1079 "screenshot.cpp"
    extern ld shift_angle, movement_angle;
#line 1080 "screenshot.cpp"
    extern ld normal_angle;
#line 1081 "screenshot.cpp"
    extern ld period;
#line 1082 "screenshot.cpp"
    extern int noframes;
#line 1083 "screenshot.cpp"
    extern ld cycle_length;
#line 1084 "screenshot.cpp"
    extern ld parabolic_length;
#line 1085 "screenshot.cpp"
    extern ld skiprope_rotation;
#line 1089 "screenshot.cpp"
    extern ld rug_rotation1, rug_rotation2, ballangle_rotation, env_ocean, env_volcano;
#line 1090 "screenshot.cpp"
    extern bool env_shmup;
#line 1091 "screenshot.cpp"
    extern ld rug_angle;
#line 1093 "screenshot.cpp"
    extern ld rotation_distance;
#line 1099 "screenshot.cpp"
    extern ld circle_radius;
#line 1100 "screenshot.cpp"
    extern ld circle_spins;
#line 1102 "screenshot.cpp"
    void moved();
#line 1129 "screenshot.cpp"
    void deanimate(ld &x);
#line 1135 "screenshot.cpp"
    void get_parameter_animation(ld &x, string &s);
#line 1141 "screenshot.cpp"
    void animate_parameter(ld &x, string f, const reaction_t& r);
#line 1170 "screenshot.cpp"
    void reflect_view();
#line 1182 "screenshot.cpp"
    extern purehookset hooks_anim;
#line 1184 "screenshot.cpp"
    void apply();
#line 1312 "screenshot.cpp"
    void rollback();
    #if CAP_FILES && CAP_SHOT
#line 1319 "screenshot.cpp"
    extern string animfile;
#line 1321 "screenshot.cpp"
    extern string videofile;
#line 1327 "screenshot.cpp"
    bool record_animation();
    #endif
#line 1364 "screenshot.cpp"
    extern purehookset hooks_after_video;
    #if CAP_VIDEO
#line 1367 "screenshot.cpp"
    bool record_video(string fname IS(videofile), bool_reaction_t rec IS(record_animation));
#line 1397 "screenshot.cpp"
    bool record_video_std();
    #endif
#line 1434 "screenshot.cpp"
    extern ld a, b;
#line 1455 "screenshot.cpp"
    void show();
#line 1772 "screenshot.cpp"
    bool any_animation();
#line 1780 "screenshot.cpp"
    bool any_on();
#line 1784 "screenshot.cpp"
    bool center_music();
    }
  #endif
  namespace startanims {
#line 1796 "screenshot.cpp"
    struct startanim {
    string name;
    reaction_t init;
    reaction_t render;
    };
    
    const int EXPLORE_START_ANIMATION = 2003;
    #if CAP_STARTANIM
#line 1970 "screenshot.cpp"
    extern startanim *current;
#line 1972 "screenshot.cpp"
    void pick();
#line 1986 "screenshot.cpp"
    void display();
#line 1995 "screenshot.cpp"
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
#line 49 "shaders.cpp"
  extern map<string, shared_ptr<glhr::GLprogram>> compiled_programs;
#line 51 "shaders.cpp"
  extern map<unsigned, shared_ptr<glhr::GLprogram>> matched_programs;
#line 496 "shaders.cpp"
  void add_if(string& shader, const string& seek, const string& function);
#line 501 "shaders.cpp"
  void add_fixed_functions(string& shader);
#line 524 "shaders.cpp"
  flagtype get_shader_flags();
#line 529 "shaders.cpp"
  void glapplymatrix(const transmatrix& V);
  #endif

  // implemented in: sky.cpp

#line 5 "sky.cpp"
  extern ld camera_level;
  #if MAXMDIM >= 4 && CAP_GL
#line 8 "sky.cpp"
  int get_skybrightness(int mul IS(1));
#line 31 "sky.cpp"
  extern struct dqi_sky *sky;
#line 33 "sky.cpp"
  void prepare_sky();
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
#line 23 "sound.cpp"
  eLand getCurrentLandForMusic();
#line 31 "sound.cpp"
  void playSeenSound(cell *c);
  #if CAP_SDLAUDIO
#line 100 "sound.cpp"
  extern bool music_out_of_focus;
#line 102 "sound.cpp"
  void handlemusic();
#line 146 "sound.cpp"
  void resetmusic();
#line 155 "sound.cpp"
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
#line 191 "sphere.cpp"
  heptagon *getDodecahedron(int i);
#line 198 "sphere.cpp"
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
  extern bool doCross;
#line 58 "system.cpp"
  extern bool gamegen_failure;
#line 60 "system.cpp"
  extern eLand top_land;
#line 63 "system.cpp"
  bool verless(string v, string cmp);
#line 79 "system.cpp"
  extern hookset<bool()> hooks_welcome_message;
#line 82 "system.cpp"
  void welcomeMessage();
#line 147 "system.cpp"
  extern hookset<void()> hooks_initgame;
#line 150 "system.cpp"
  void initgame();
  #if CAP_SAVE
  namespace scores {
#line 406 "system.cpp"
    /** \brief the amount of boxes reserved for each hr::score item */
    #define MAXBOX 500
    /** \brief currently used boxes in hr::score */
    #define POSSCORE 396 // update this when new boxes are added!
    /** \brief a struct to keep local score from an earlier game */
    struct score {
    /** \brief version used */
    string ver;
    /** \brief all the data of the saved score, see applyBoxes() */
    int box[MAXBOX];
    };
#line 420 "system.cpp"
    extern score save;
#line 422 "system.cpp"
    extern int boxid;
#line 425 "system.cpp"
    extern bool saving, loading, loadingHi;
#line 428 "system.cpp"
    extern string boxname[MAXBOX];
#line 430 "system.cpp"
    extern bool fakebox[MAXBOX];
#line 432 "system.cpp"
    extern bool monsbox[MAXBOX];
#line 453 "system.cpp"
    void applyBoxNum(int& i, string name IS(""));
#line 530 "system.cpp"
    void applyBoxes();
#line 893 "system.cpp"
    void saveBox();
    }
  namespace anticheat {
#line 936 "system.cpp"
    extern int certify(const string& s, int a, int b, int c, int d IS(0));
    }
  #if !CAP_CERTIFY
  namespace anticheat {
#line 945 "system.cpp"
    extern bool tampered;
    }
  #endif
#line 956 "system.cpp"
  void remove_emergency_save();
#line 965 "system.cpp"
  void saveStats(bool emergency IS(false));
#line 1092 "system.cpp"
  void loadsave();
  #endif
#line 1222 "system.cpp"
  void stop_game();
#line 1259 "system.cpp"
  eModel default_model();
#line 1265 "system.cpp"
  extern purehookset hooks_on_geometry_change;
#line 1267 "system.cpp"
  void set_geometry(eGeometry target);
#line 1313 "system.cpp"
  void set_variation(eVariation target);
#line 1334 "system.cpp"
  void switch_game_mode(char switchWhat);
#line 1462 "system.cpp"
  void start_game();
#line 1505 "system.cpp"
  void restart_game(char switchWhat IS(rg::nothing));
#line 1513 "system.cpp"
  void stop_game_and_switch_mode(char switchWhat IS(rg::nothing));
#line 1518 "system.cpp"
  extern purehookset hooks_clearmemory;
#line 1520 "system.cpp"
  void clearMemory();
#line 1524 "system.cpp"
  extern bool fixseed;
#line 1525 "system.cpp"
  extern int startseed;
#line 1527 "system.cpp"
  extern eLand firstland0;
#line 1529 "system.cpp"
  extern purehookset hooks_initialize;
#line 1531 "system.cpp"
  void initAll();
#line 1565 "system.cpp"
  extern purehookset hooks_final_cleanup;
#line 1567 "system.cpp"
  void finishAll();

  // implemented in: tour.cpp

  #if CAP_TOUR
  namespace tour {
#line 16 "tour.cpp"
    extern bool on;
#line 19 "tour.cpp"
    extern bool texts;
#line 21 "tour.cpp"
    extern string tourhelp;
#line 24 "tour.cpp"
    extern int currentslide;
#line 27 "tour.cpp"
    /** \brief a parameter for the slides' action function */
    enum presmode { 
    pmStartAll = 0,
    pmStart = 1, pmFrame = 2, pmStop = 3, pmKey = 4, pmRestart = 5,
    pmAfterFrame = 6,
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
#line 67 "tour.cpp"
    extern vector<reaction_t> restorers;
#line 70 "tour.cpp"
    template<class T> void slide_backup(T& what, T value) {
    T backup = what;
    restorers.push_back([&what, backup] { what = backup; });
    what = value;
    }
#line 77 "tour.cpp"
    void on_restore(const reaction_t& t);
#line 81 "tour.cpp"
    void slide_restore_all();
#line 89 "tour.cpp"
    void setCanvas(presmode mode, char canv);
#line 107 "tour.cpp"
    extern function<eLand(eLand)> getNext;
#line 108 "tour.cpp"
    extern function<bool(eLand)> quickfind;
#line 109 "tour.cpp"
    extern function<bool(eLand)> showland;
#line 116 "tour.cpp"
    extern string slidecommand;
#line 119 "tour.cpp"
    extern hookset<void(int)> hooks_slide;
#line 122 "tour.cpp"
    void presentation(presmode mode);
#line 167 "tour.cpp"
    void slidehelp();
#line 364 "tour.cpp"
    void checkGoodLand(eLand l);
    namespace ss {
#line 380 "tour.cpp"
      extern slide *wts;
#line 382 "tour.cpp"
      extern string current_folder;
#line 386 "tour.cpp"
      extern hookset<int(bool)> hooks_extra_slideshows;
#line 388 "tour.cpp"
      void slideshow_menu();
#line 397 "tour.cpp"
      void showMenu();
      }
#line 457 "tour.cpp"
    void start();
#line 481 "tour.cpp"
    extern slide default_slides[];
#line 949 "tour.cpp"
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
    extern cell *forward_cell;
#line 44 "vr.cpp"
    extern ld vraim_x, vraim_y, vrgo_x, vrgo_y;
#line 46 "vr.cpp"
    extern ld pointer_length;
#line 123 "vr.cpp"
    extern transmatrix eyeproj;
#line 153 "vr.cpp"
    extern transmatrix hmd_mv_for[3];
#line 154 "vr.cpp"
    extern transmatrix hmd_pre_for[3];
#line 159 "vr.cpp"
    extern ld pointer_distance;
#line 162 "vr.cpp"
    extern bool enabled;
#line 165 "vr.cpp"
    extern bool failed;
#line 168 "vr.cpp"
    extern string error_msg;
#line 171 "vr.cpp"
    extern int state;
#line 174 "vr.cpp"
    // use E4 when working with real-world matrices to ensure that inverses, multiplications, etc. are computed correctly
    #define E4 dynamicval<eGeometry> g(geometry, gCubeTiling)
#line 225 "vr.cpp"
    extern bool first;
#line 227 "vr.cpp"
    extern transmatrix hmd_at_ui;
#line 228 "vr.cpp"
    extern transmatrix hmd_at;
#line 229 "vr.cpp"
    extern transmatrix hmd_ref_at;
#line 231 "vr.cpp"
    extern transmatrix hmd_mvp, hmd_pre, hmd_mv;
#line 233 "vr.cpp"
    extern transmatrix sm;
#line 380 "vr.cpp"
    extern bool targeting_menu;
#line 382 "vr.cpp"
    void send_click();
#line 392 "vr.cpp"
    void send_release();
#line 399 "vr.cpp"
    void vr_control();
#line 441 "vr.cpp"
    void be_33(transmatrix& T);
#line 446 "vr.cpp"
    void apply_movement(const transmatrix& rel);
#line 457 "vr.cpp"
    void vr_shift();
#line 470 "vr.cpp"
    extern ld absolute_unit_in_meters;
#line 474 "vr.cpp"
    eModel pmodel_3d_version();
#line 481 "vr.cpp"
    transmatrix model_to_controller(int id);
#line 485 "vr.cpp"
    hyperpoint model_location(shiftpoint h, bool& bad);
#line 551 "vr.cpp"
    extern hyperpoint vr_direction;
#line 553 "vr.cpp"
    void compute_point(int id, shiftpoint& res, cell*& c, ld& dist);
#line 592 "vr.cpp"
    extern bool vr_clicked;
#line 663 "vr.cpp"
    extern bool always_show_hud;
#line 664 "vr.cpp"
    bool in_actual_menu();
#line 665 "vr.cpp"
    bool in_menu();
#line 698 "vr.cpp"
    void track_actions();
#line 739 "vr.cpp"
    void start_vr();
#line 796 "vr.cpp"
    void shutdown_vr();
#line 806 "vr.cpp"
    void clear();
#line 823 "vr.cpp"
    extern ld ui_depth;
#line 824 "vr.cpp"
    extern ld ui_size;
#line 827 "vr.cpp"
    const ld ui_size_unit = 0.001;
#line 830 "vr.cpp"
    void in_vr_ui(reaction_t what);
#line 874 "vr.cpp"
    void draw_eyes();
#line 909 "vr.cpp"
    void gen_mv();
#line 937 "vr.cpp"
    void render();
#line 1056 "vr.cpp"
    void show_vr_demos();
#line 1202 "vr.cpp"
    void show_vr_settings();
#line 1359 "vr.cpp"
    void submit();
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
#line 510 "yendor.cpp"
    void onpath();
#line 520 "yendor.cpp"
    void init(int phase);
#line 624 "yendor.cpp"
    extern const char *chelp;
#line 657 "yendor.cpp"
    string name(int i);
#line 678 "yendor.cpp"
    void showMenu();
#line 753 "yendor.cpp"
    void collected(cell* c2);
    }
  namespace tactic {
#line 819 "yendor.cpp"
    extern bool on;
#line 820 "yendor.cpp"
    extern int id;
#line 856 "yendor.cpp"
    void record(eLand land, int score, flagtype xc IS(modecode()));
#line 905 "yendor.cpp"
    void showMenu();
    }
  namespace peace {
#line 1190 "yendor.cpp"
    extern bool on;
#line 1191 "yendor.cpp"
    extern bool hint;
#line 1193 "yendor.cpp"
    extern bool otherpuzzles;
    namespace simon {
#line 1298 "yendor.cpp"
      void extend();
#line 1307 "yendor.cpp"
      void init();
#line 1321 "yendor.cpp"
      void restore();
      }
#line 1328 "yendor.cpp"
    void showMenu();
    }
  }
