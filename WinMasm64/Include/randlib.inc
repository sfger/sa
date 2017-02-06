IFNDEF RANDLIB_INC
RANDLIB_INC equ <1>

PROTO64 external,A_SHAFinalNS, :QWORD,:QWORD
PROTO64 external,A_SHAInit, :QWORD
PROTO64 external,A_SHAUpdateNS, :QWORD,:QWORD,:QWORD
PROTO64 external,AccessSeed, :QWORD,:QWORD
PROTO64 external,DeInitRand, :QWORD,:QWORD
PROTO64 external,DestroyCircularHash, :QWORD
PROTO64 external,GatherCPUSpecificCounters, :QWORD,:QWORD
PROTO64 external,GatherCPUSpecificCountersPrivileged, :QWORD,:QWORD
PROTO64 external,GatherRandomKey, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GatherRandomKeyFastUserMode, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GenRandom, :QWORD,:QWORD,:QWORD
PROTO64 external,GetCircularHashValue, :QWORD,:QWORD,:QWORD
PROTO64 external,InitCircularHash, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InitRand, :QWORD,:QWORD
PROTO64 external,IsRNGWinNT, 
PROTO64 external,MD4Final, :QWORD
PROTO64 external,MD4Init, :QWORD
PROTO64 external,MD4Update, :QWORD,:QWORD,:QWORD
PROTO64 external,NewGenRandom, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NewGenRandomEx, :QWORD,:QWORD,:QWORD
PROTO64 external,RandomFillBuffer, :QWORD,:QWORD
PROTO64 external,ReadMMXCounters, :QWORD,:QWORD,:QWORD
PROTO64 external,ReadP5Counters, :QWORD,:QWORD,:QWORD
PROTO64 external,ReadSeed, :QWORD,:QWORD
PROTO64 external,UpdateCircularHash, :QWORD,:QWORD,:QWORD
PROTO64 external,VeryLargeHashUpdate, :QWORD,:QWORD,:QWORD
PROTO64 external,WriteSeed, :QWORD,:QWORD
PROTO64 external,rc4, :QWORD,:QWORD,:QWORD
PROTO64 external,rc4_key, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file randlib.inc
echo -----------------------------------------
ENDIF

