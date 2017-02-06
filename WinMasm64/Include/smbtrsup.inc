IFNDEF SMBTRSUP_INC
SMBTRSUP_INC equ <1>

PROTO64 external,InitializeListHead, :QWORD
PROTO64 external,SmbTraceCompleteRdr, :QWORD,:QWORD,:QWORD
PROTO64 external,SmbTraceCompleteSrv, :QWORD,:QWORD,:QWORD
PROTO64 external,SmbTraceCopyMdlContiguous, :QWORD,:QWORD,:QWORD
PROTO64 external,SmbTraceDeferredDereferenceHeap, :QWORD
PROTO64 external,SmbTraceDereferenceHeap, :QWORD
PROTO64 external,SmbTraceDisconnect, :QWORD
PROTO64 external,SmbTraceEmptyQueue, :QWORD
PROTO64 external,SmbTraceFreeMemory, :QWORD
PROTO64 external,SmbTraceInitialize, :QWORD
PROTO64 external,SmbTraceMdlLength, :QWORD
PROTO64 external,SmbTraceReferenceHeap, :QWORD
PROTO64 external,SmbTraceStart, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SmbTraceStop, :QWORD,:QWORD
PROTO64 external,SmbTraceTerminate, :QWORD
PROTO64 external,SmbTraceThreadEntry, :QWORD
PROTO64 external,SmbTraceToClient, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_security_check_cookie, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file smbtrsup.inc
echo -----------------------------------------
ENDIF

