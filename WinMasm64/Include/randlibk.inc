IFNDEF RANDLIBK_INC
RANDLIBK_INC equ <1>

PROTO64 external,A_SHAFinalNS, :QWORD,:QWORD
PROTO64 external,A_SHAInit, :QWORD
PROTO64 external,A_SHAUpdateNS, :QWORD,:QWORD,:QWORD
PROTO64 external,AccessSeed, :QWORD,:QWORD
PROTO64 external,DeInitRand, :QWORD,:QWORD
PROTO64 external,DestroyCircularHash, :QWORD
PROTO64 external,GatherCPUSpecificCounters, :QWORD,:QWORD
PROTO64 external,GatherCPUSpecificCountersPrivileged, :QWORD,:QWORD
PROTO64 external,GatherRandomKey, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GenRandom, :QWORD,:QWORD,:QWORD
PROTO64 external,GetCircularHashValue, :QWORD,:QWORD,:QWORD
PROTO64 external,InitCircularHash, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InitRand, :QWORD,:QWORD
PROTO64 external,InitializeRNG, :QWORD
PROTO64 external,KeGetCurrentProcessorNumber, 
PROTO64 external,MD4Final, :QWORD
PROTO64 external,MD4Init, :QWORD
PROTO64 external,MD4Update, :QWORD,:QWORD,:QWORD
PROTO64 external,NewGenRandom, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NewGenRandomEx, :QWORD,:QWORD,:QWORD
PROTO64 external,PsGetCurrentProcessId, 
PROTO64 external,PsGetCurrentThreadId, 
PROTO64 external,RandomFillBuffer, :QWORD,:QWORD
PROTO64 external,ReadSeed, :QWORD,:QWORD
PROTO64 external,ShutdownRNG, :QWORD
PROTO64 external,UpdateCircularHash, :QWORD,:QWORD,:QWORD
PROTO64 external,VeryLargeHashUpdate, :QWORD,:QWORD,:QWORD
PROTO64 external,WriteSeed, :QWORD,:QWORD
PROTO64 external,X86_GetCapabilities, :QWORD
PROTO64 external,X86_ReadRDMSR, :QWORD,:QWORD
PROTO64 external,X86_ReadRDPMC, :QWORD,:QWORD
PROTO64 external,X86_ReadRDTSC, :QWORD
PROTO64 external,_security_check_cookie, :QWORD
PROTO64 external,rc4, :QWORD,:QWORD,:QWORD
PROTO64 external,rc4_key, :QWORD,:QWORD,:QWORD
PROTO64 external,rc4_safe, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,rc4_safe_key, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,rc4_safe_key_np, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,rc4_safe_np, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,rc4_safe_select, :QWORD,:QWORD,:QWORD
PROTO64 external,rc4_safe_select_np, :QWORD,:QWORD,:QWORD
PROTO64 external,rc4_safe_shutdown, :QWORD
PROTO64 external,rc4_safe_shutdown_np, :QWORD
PROTO64 external,rc4_safe_startup, :QWORD
PROTO64 external,rc4_safe_startup_np, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file randlibk.inc
echo -----------------------------------------
ENDIF

