IFNDEF NPPTOOLS_INC
NPPTOOLS_INC equ <1>

PROTO64 external,NmAddUsedEntry, :QWORD,:QWORD
PROTO64 external,NmHeapAllocate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NmHeapFree, :QWORD,:QWORD
PROTO64 external,NmHeapReallocate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NmHeapSetMaxSize, :QWORD
PROTO64 external,NmHeapSize, :QWORD
PROTO64 external,NmRemoveUsedEntry, :QWORD,:QWORD
PROTO64 external,ReleaseEventSystem, 
PROTO64 external,SendEvent, :QWORD
PROTO64 external,WriteCrackedBlobToFile, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file npptools.inc
echo -----------------------------------------
ENDIF

