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
** Application flag:   YAEYAMA1
** Input script:       ocean_inlet_test.in
**                     coupling_inlet_test.in
**                     sediment_inlet_test.in
*/
#define ROMS_MODEL
/*#define SWAN_MODEL*/
/*#define MCT_LIB*/

#define NO_LBC_ATT

/*#define NESTING*/
/*#define NESTING_DEBUG*/
/*#define ONE_WAY*/
/*#define QUADRATIC_WEIGHTS*/

#define SOLVE3D

#define UV_ADV
#define UV_COR

/*#define UV_U3ADV_SPLIT*/
/*#define UV_C2ADVECTION*/
/*#define UV_C4ADVECTION*/
/*#define UV_SADVECTION*/

#define UV_VIS2
/*#define UV_VIS4*/
#define UV_SMAGORINSKY

#define MIX_S_UV
/*#define MIX_GEO_UV*/

/*#define TS_U3ADV_SPLIT*/
/*#define TS_C4HADVECTION*/
#define TS_U3HADVECTION
/*#define TS_C2HADVECTION*/
/*#define TS_C2VADVECTION*/
#define TS_C4VADVECTION
/*#define TS_SVADVECTION*/
/*#define TS_MPDATA*/

#define TS_DIF2
/*#define TS_DIF4*/
#define TS_SMAGORINSKY
#define MIX_S_TS
/*#define MIX_GEO_TS*/
/*#define MIX_ISO_TS*/

#define MASKING

#define NONLIN_EOS
#define SALINITY
#define ATM_PRESS

/*#define PJ_GRADPQ4 */
#define DJ_GRADPS

/*#define SPLINES*/
/*#define RI_HORAVG*/
/*#define RI_VERAVG*/

#define WET_DRY


/*** Option for Boundary condition ***/

#define RADIATION_2D
/*#define SSH_TIDES*/
/*#define ADD_FSOBC*/
/*#define FSOBC_REDUCED*/


/*#define ANA_INITIAL*/
/*#define ANA_FSOBC*/
/*#define ANA_M2OBC*/
/*#define ANA_TOBC*/

#define SOLAR_SOURCE

#define BULK_FLUXES
#ifdef BULK_FLUXES
# define LONGWAVE
# define EMINUSP
/*# define ANA_CLOUD*/
/*# define ANA_HUMID*/
/*# define ANA_PAIR*/
/*# define ANA_TAIR*/
/*# define ANA_RAIN*/
/*# define ANA_WINDS*/
# define ANA_SRFLUX
# define ALBEDO_CLOUD
/*# define LOCAL_TIME +9.0*/
/*# define DIURNAL_SRFLUX*/
#else
# define ANA_SMFLUX
# define ANA_STFLUX
#endif


/*** waves-ocean (SWAN/ROMS) two-way coupling. ***/
#ifdef SWAN_MODEL
# define WEC_MELLOR
/*# define WEC_VF*/
# define WDISS_WAVEMOD
# define UV_KIRBY
#endif

/* define only one of the following 5 */
#define UV_LOGDRAG
/*#define UV_QDRAG*/
/*#define MB_BBL*/
/*#define SG_BBL*/
/*#define SSW_BBL*/

#ifdef MB_BBL
/*# define MB_CALC_ZNOT*/
#endif

#ifdef SSW_BBL
/*# define SSW_CALC_ZNOT*/
# define SSW_LOGINT
#endif
#define LIMIT_BSTRESS


#ifdef SOLVE3D

# define GLS_MIXING
/*# define MY25_MIXING*/
/*# define LMD_MIXING*/

# if defined GLS_MIXING
/*#  define CRAIG_BANNER*/
#  define KANTHA_CLAYSON
/*#  define  CANUTO_A*/
/*#  define  CANUTO_B*/
/*#  define K_C4ADVECTION*/
/*#  define K_C2ADVECTION*/
/*#  define N2S2_HORAVG*/
/*#  define ZOS_HSIG*/
/*#  define TKE_WAVEDISS*/
# endif

# if defined MY25_MIXING
#  define KANTHA_CLAYSON
#  undef  CANUTO_A
/*#  define K_C4ADVECTION*/
#  define N2S2_HORAVG
# endif

# ifdef LMD_MIXING
#  define LMD_RIMIX
#  define LMD_CONVEC
#  define LMD_SKPP
#  define LMD_BKPP
#  define LMD_NONLOCAL
#  define LMD_SHAPIRO
#  define LMD_DDMIX
# endif


/*# define SEDIMENT*/
# ifdef SEDIMENT
#  define SUSPLOAD
#  undef  BEDLOAD_SOULSBY
#  undef  BEDLOAD_MPM
/*#  define SED_MORPH*/
# endif
# if defined SEDIMENT || defined SG_BBL || defined MB_BBL || defined SSW_BBL
#  define ANA_SEDIMENT
#  define REVER_SEDIMENT
# endif
# define ANA_BPFLUX
# define ANA_BTFLUX
# define ANA_BSFLUX
# define ANA_SPFLUX

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

#define REEF_ECOSYS

#if defined REEF_ECOSYS
# define BIOLOGY
# define ANA_BIOLOGY
# define ANA_TOBC_BIO   /*Original CPP flag */

/* compartments */
# define ORGANIC_MATTER
# define NUTRIENTS
# define CARBON_ISOTOPE
# if defined CARBON_ISOTOPE
#  define CARBON_TRACE
# endif

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
/*#  define CORAL_PHOTOINHIBITION*/
/*#  define CORAL_MUCUS*/           /*Mucus release from coral */
#  if defined ORGANIC_MATTER
/*#   define CORAL_INGESTION*/
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
