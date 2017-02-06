IFNDEF MCD_INC
MCD_INC equ <1>

PROTO64 external,ChangerClassAllocatePool, :QWORD,:QWORD
PROTO64 external,ChangerClassFreePool, :QWORD
PROTO64 external,ChangerClassInitialize, :QWORD,:QWORD,:QWORD
PROTO64 external,ChangerClassSendSrbSynchronous, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mcd.inc
echo -----------------------------------------
ENDIF

