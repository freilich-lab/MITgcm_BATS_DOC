#ifdef ALLOW_SHELFICE
# ifdef ALLOW_SHELFICE_REMESHING
CADJ STORE kTopC            = tapelvi3, key = ilev_3
# endif
CADJ STORE phi0surf         = tapelev3, key = ilev_3
CADJ STORE shelficeMass     = tapelev3, key = ilev_3
CADJ STORE shelficeForcingT = tapelev3, key = ilev_3
CADJ STORE shelficeForcingS = tapelev3, key = ilev_3
CADJ STORE cMeanSHIforT     = tapelev3, key = ilev_3
CADJ STORE cMeanSHIforS     = tapelev3, key = ilev_3
CADJ STORE shelficeFreshWaterFlux = tapelev3, key = ilev_3
CADJ STORE shelficeLoadAnomaly    = tapelev3, key = ilev_3
#endif /* ALLOW_SHELFICE */
