IFNDEF MOBSYNC_INC
MOBSYNC_INC equ <1>

PROTO64 external,RunDllRegister, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SyncMgrResolveConflictA, :QWORD,:QWORD
PROTO64 external,SyncMgrResolveConflictW, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mobsync.inc
echo -----------------------------------------
ENDIF

