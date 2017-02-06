IFNDEF CSQ_INC
CSQ_INC equ <1>

PROTO64 external,IoReleaseCancelSpinLock, :QWORD
PROTO64 external,IopCsqCancelRoutine, :QWORD,:QWORD
PROTO64 external,WdmlibIoCsqInitialize, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdmlibIoCsqInitializeEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdmlibIoCsqInsertIrp, :QWORD,:QWORD,:QWORD
PROTO64 external,WdmlibIoCsqInsertIrpEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdmlibIoCsqRemoveIrp, :QWORD,:QWORD
PROTO64 external,WdmlibIoCsqRemoveNextIrp, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file csq.inc
echo -----------------------------------------
ENDIF

