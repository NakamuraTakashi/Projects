/*
** svn $Id: inlet_test.h 585 2012-01-03 18:44:28Z arango $
*******************************************************************************
** Copyright (c) 2002-2012 The ROMS/TOMS Group                               **
**   Licensed under a MIT/X style license                                    **
**   See License_ROMS.txt                                                    **
*******************************************************************************
**
** Options for Inlet Test Case, waves-ocean (SWAN/ROMS) two-way coupling.
**
** Application flag:   FUKIDO
** Input script:       ocean_inlet_test.in
**                     coupling_inlet_test.in
**                     sediment_inlet_test.in
*/
#define ROMS_MODEL
/*#define SWAN_MODEL*/
/*#define MCT_LIB*/

#define NO_LBC_ATT               /*not check NLM_LBC global attribute on restart*/
/*#define PARALLEL_IO*/
/*#define HDF5*/                 /*create NetCDF-4/HDF5 format files*/
/*#define PNETCDF*/              /*use if parallel I/O with pnetcdf (classic format)*/

/*#define NESTING*/              /*activate grid nesting: composite/refinement*/
/*#define NESTING_DEBUG*/
/*#define ONE_WAY*/              /*use if one-way nesting in refinement grids*/
/*#define QUADRATIC_WEIGHTS*/

#define SOLVE3D                  /*solving 3D primitive equations*/

#define UV_ADV                   /*turn ON or OFF advection terms*/
#define UV_COR                   /*turn ON or OFF Coriolis term*/

/*#define UV_U3ADV_SPLIT*/       /*3rd-order upstream split momentum advection*/
/*#define UV_C2ADVECTION*/       /*turn ON or OFF 2nd-order centered advection*/
/*#define UV_C4ADVECTION*/       /*turn ON or OFF 4th-order centered advection*/
/*#define UV_SADVECTION*/        /*turn ON or OFF splines vertical advection*/

#define UV_VIS2                  /*turn ON or OFF harmonic horizontal mixing*/
/*#define UV_VIS4*/              /*turn ON or OFF biharmonic horizontal mixing*/
#define UV_SMAGORINSKY           /*turn ON or OFF Smagorinsky-like viscosity*/

#define MIX_S_UV                 /*mixing along constant S-surfaces*/
/*#define MIX_GEO_UV*/           /*mixing on geopotential (constant Z) surfaces*/

/*#define TS_U3ADV_SPLIT*/       /*3rd-order upstream split tracer advection*/
/*#define TS_C4HADVECTION*/      /*4th-order centered horizontal advection*/
#define TS_U3HADVECTION          /*3rd-order upstream horiz. advection*/
/*#define TS_C2HADVECTION*/      /*2nd-order centered horizontal advection*/
/*#define TS_C2VADVECTION*/      /*2nd-order centered vertical advection*/
#define TS_C4VADVECTION          /*4th-order centered vertical advection*/
/*#define TS_SVADVECTION*/       /*splines vertical advection*/
/*#define TS_MPDATA*/            /*recursive MPDATA 3D advection*/

#define TS_DIF2                  /*turn ON or OFF harmonic horizontal mixing*/
/*#define TS_DIF4*/              /*turn ON or OFF biharmonic horizontal mixing*/
#define TS_SMAGORINSKY           /*turn ON or OFF Smagorinsky-like diffusion*/
#define MIX_S_TS                 /*mixing along constant S-surfaces*/
/*#define MIX_GEO_TS*/           /*mixing on geopotential (constant Z) surfaces*/
/*#define MIX_ISO_TS*/           /*mixing on epineutral (constant RHO) surfaces*/

#define MASKING                  /*land/sea masking*/

#define NONLIN_EOS               /*using nonlinear equation of state*/
#define SALINITY                 /*having salinity*/
#define ATM_PRESS                /*impose atmospheric pressure onto sea surface*/

/*#define PJ_GRADPQ4 */          /*quartic 4 Pressure Jacobian (Shchepetkin,2000)*/
#define DJ_GRADPS                /*splines density Jacobian (Shchepetkin, 2000)*/

/*#define SPLINES*/
/*#define RI_HORAVG*/            /*horizontal Richardson number smoothing*/
/*#define RI_VERAVG*/            /*vertical   Richardson number smoothing*/

#define WET_DRY                  /*activate wetting and drying*/

/*** Option for case studies ***/

/*#define FUKIDO*/
#define MANGROVE_DRAG
#define BAK_EXPERI_STEMFAC       /*Include multiple-stem factors for Bakhawan drag experiment <= works under activation of VEGETATION*/
/*#define BAK_EXPERI_BRY*/       /*Boundary condition for Bakhawan drag experiment <= activate with ANA_M2OBC*/
/*#define ANA_M2OBC_SOUTH*/      /*Impose ANA_M2OBC for southern boundary*/
/*#define BAK_EXPERI_SED*/       /*Settings of sediment model for Bakhawan drag experiment <= activate with ANA_SEDIMENT*/
/*#define FUK_BASE_SED*/         /*Settings of sediment model for Fukido-mase model <= activate with ANA_SEDIMENT*/
/*#define MANGR_BAK_ACTUAL*/     /*Use actual measured vegetation frontal area of Rhizophora mangrove in Bakhawan Ecopark
/*#define MANGR_MAZA*/           /*Use vegetation frontal area of Rhizophora mangrove in Maza et al. (2017)*/
#define DIAGNOSTICS_UV           /*Option to compute and write diagnostic terms for momentum equations balances*/
/*#define DIAGNOSTICS_TS*/       /*Option to compute and write diagnostic terms for tracer equations balances*/

/*** Option for Boundary condition ***/

#define RADIATION_2D             /*tangential phase speed in radiation conditions*/
/*#define SSH_TIDES*/            /*imposing tidal elevation*/
/*#define ADD_FSOBC*/            /*add tidal elevation to processed OBC data*/
/*#define FSOBC_REDUCED*/        /*SSH data and reduced physics conditions*/

/*#define ANA_INITIAL*/          /*analytical initial conditions*/
/*#define ANA_FSOBC*/            /*analytical free-surface boundary conditions*/
/*#define ANA_M2OBC*/            /*analytical 2D momentum boundary conditions*/
/*#define ANA_TOBC*/             /*analytical tracers boundary conditions*/
/*#define ANA_TOBC_BIO*/         /*Original CPP flag*/

#define SOLAR_SOURCE             /*solar radiation source term*/

#define BULK_FLUXES              /*bulk fluxes computation*/
#ifdef BULK_FLUXES
# define LONGWAVE                /*computing net longwave radiation*/
# define EMINUSP                 /*computing E-P*/
# define ANA_CLOUD           /*analytical cloud fraction*/
# define ANA_HUMIDITY         /*analytical surface air humidity*/
# define ANA_PAIR            /*analytical surface air pressure*/
# define ANA_TAIR            /*analytical surface air temperature*/
# define ANA_RAIN            /*analytical rain fall rate*/
# define ANA_WINDS           /*analytical surface winds*/
# define ANA_SRFLUX              /*analytical surface shortwave radiation flux*/
# define ANA_ATM_CONST         /*Original CPP: constants atm values*/
# define ALBEDO_CLOUD            /*albedo equation for shortwave radiation*/
/*# define LOCAL_TIME +9.0*/
/*# define DIURNAL_SRFLUX*/      /*impose shortwave radiation local diurnal cycle*/
#else
# define ANA_SMFLUX              /*analytical surface momentum stress*/
# define ANA_STFLUX              /*analytical surface net heat flux*/
#endif


/*** waves-ocean (SWAN/ROMS) two-way coupling. ***/
#ifdef SWAN_MODEL
# define NEARSHORE_MELLOR08      /*activate radiation stress terms (Mellor 2008).*/
#endif

/* define only one of the following 5 */
#define UV_LOGDRAG               /*turn ON or OFF logarithmic bottom friction*/
/*#define UV_QDRAG*/             /*turn ON or OFF quadratic bottom friction*/
/*#define MB_BBL*/               /*Meinte Blaas BBL closure*/
/*#define SG_BBL*/               /*Styles and Glenn (2000) BBL closure*/
/*#define SSW_BBL*/              /*Sherwood et al. BBL closure*/

#ifdef MB_BBL
/*# define MB_CALC_ZNOT*/        /*computing bottom roughness internally*/
#endif

#ifdef SSW_BBL
/*# define SSW_CALC_ZNOT*/       /*computing bottom roughness internally*/
# define SSW_LOGINT              /*logarithmic interpolation of (Ur,Vr)*/
#endif
#define LIMIT_BSTRESS

/*** Vegetation ***/
#define VEGETATION               /*activate submerged/emergent vegetation effects*/
# ifdef VEGETATION
/*#  define ANA_VEGETATION*/
#  define VEG_DRAG
#  ifdef VEG_DRAG
/*#   define VEG_FLEX*/
#   define VEG_TURB
#  endif
/*#  define VEG_SWAN_COUPLING*/
#  ifdef VEG_SWAN_COUPLING
#   define VEG_STREAMING ! dependence to WEC_VF/BOTTOM_STREAMING
#  endif
/*# define MARSH_WAVE_THRUST*/
# endif

#ifdef SOLVE3D

/*** Option for vertical turbulent mixing scheme of   ***/
/*** momentum and tracers (activate only one closure) ***/

# define GLS_MIXING              /*Generic Length-Scale mixing closure*/
/*# define MY25_MIXING*/         /*Mellor/Yamada Level-2.5 closure*/
/*# define LMD_MIXING*/          /*Large et al. (1994) interior closure*/

/*** Option for the Generic Length-Scale closure (Warner et al., 2005) ***/

# if defined GLS_MIXING
/*#  define CRAIG_BANNER*/       /*Craig and Banner wave breaking surface flux*/
#  define KANTHA_CLAYSON         /*Kantha and Clayson stability function*/
/*#  define  CANUTO_A*/          /*Canuto A-stability function formulation*/
/*#  define  CANUTO_B*/          /*Canuto B-stability function formulation*/
/*#  define K_C4ADVECTION*/      /*4th-order centered advection*/
/*#  define K_C2ADVECTION*/      /*2nd-order centered advection*/
/*#  define N2S2_HORAVG*/        /*horizontal smoothing of buoyancy/shear*/
/*#  define ZOS_HSIG*/           /*surface roughness from wave amplitude*/
/*#  define TKE_WAVEDISS*/       /*wave breaking surface flux from wave amplitude*/
#  ifdef VEG_TURB
#   undef N2S2_HORAVG
#  endif
# endif

# if defined MY25_MIXING
#  define KANTHA_CLAYSON
#  undef  CANUTO_A
/*#  define K_C4ADVECTION*/
#  define N2S2_HORAVG
# endif

/*** Option for the Large et al. (1994) K-profile parameterization mixing ***/

# ifdef LMD_MIXING
#  define LMD_RIMIX              /*add diffusivity due to shear instability*/
#  define LMD_CONVEC             /*add convective mixing due to shear instability*/
#  define LMD_SKPP               /*surface boundary layer KPP mixing*/
#  define LMD_BKPP               /*bottom boundary layer KPP mixing*/
#  define LMD_NONLOCAL           /*nonlocal transport*/
#  define LMD_SHAPIRO            /*Shapiro filtering boundary layer depth*/
#  define LMD_DDMIX              /*add double-diffusive mixing*/
# endif

/*** Sediment transport model options ***/

/*# define SEDIMENT*/            /*activate sediment transport model*/
# ifdef SEDIMENT
#  define SUSPLOAD               /*activate suspended load transport*/
#  undef  BEDLOAD_SOULSBY        /*activate Soulsby wave/current bed load*/
#  undef  BEDLOAD_MPM            /*activate Meyer-Peter-Mueller bed load*/
/*#  define SED_MORPH*/          /*allow bottom model elevation to evolve*/
# endif
# if defined SEDIMENT || defined SG_BBL || defined MB_BBL || defined SSW_BBL
#  define ANA_SEDIMENT           /*analytical sediment initial fields*/
# endif
# define ANA_BPFLUX              /*analytical bottom passive tracers fluxes*/
# define ANA_BTFLUX              /*analytical bottom temperature flux*/
# define ANA_BSFLUX              /*analytical bottom salinity flux*/
# define ANA_SPFLUX              /*analytical surface passive tracers fluxes*/

#endif


/*#define FLOATS*/
#if defined FLOATS
# define FLOAT_BIOLOGY
# if defined FLOAT_BIOLOGY
#  define FLOAT_REEF_ECOSYS    /*Original CPP flag */
# endif
#endif

/*** submarine groundwater discharge ***/

/*#define SGD_ON*/    /*Original CPP flag */

/***  Biological model options. (Original CPP flags) ***/

/*#define REEF_ECOSYS*/

#if defined REEF_ECOSYS
# define BIOLOGY
# define ANA_BIOLOGY

/* compartments */
# define ORGANIC_MATTER
/*# define CARBON_ISOTOPE*/
# define NUTRIENTS

/*# define CORAL_POLYP*/  /* USE coral module */
/*# define SEAGRASS*/     /* USE seagrass module */
/*# define MACROALGAE*/        /* USE algae module  */
/*# define SEDIMENT_ECOSYS*/        /* USE sedecosys module  */
# if defined SEDIMENT_ECOSYS
#  define SEDIMENT_EMPIRICAL     /* USE empirical sediment module  */
# endif

# if defined ORGANIC_MATTER
#  define FOODWEB      /* USE foodweb module */
# endif
# define AIR_SEA_GAS_EXCHANGE

/*** Coral Polyp model options. ***/
# if defined CORAL_POLYP
/*#  define CORAL_ZOOXANTHELLAE*/
#  define CORAL_MUCUS           /*Mucus release from coral */
#  if defined ORGANIC_MATTER
#   define CORAL_INGESTION
#  endif
/*#  define CORAL_SIZE_DYNAMICS*/
#  if defined CARBON_ISOTOPE
#   define CORAL_CARBON_ISOTOPE
/*#   define CORAL_NONE_CO2_EQ*/
#  endif
#  if defined NUTRIENTS
/*#   define CORAL_NUTRIENTS*/
#  endif
/*#  define CORAL_BORON_ISOTOPE*/
# endif

#endif
