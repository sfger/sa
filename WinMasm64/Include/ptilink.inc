IFNDEF PTILINK_INC
PTILINK_INC equ <1>

PROTO64 external,PtiCleanup, :QWORD
PROTO64 external,PtiInitialize, :QWORD,:QWORD,:QWORD
PROTO64 external,PtiIsReadPending, :QWORD
PROTO64 external,PtiPortNameFromPortId, :QWORD,:QWORD
PROTO64 external,PtiQueryDeviceStatus, :QWORD,:QWORD
PROTO64 external,PtiQueryMaxReadSize, 
PROTO64 external,PtiRead, :QWORD
PROTO64 external,PtiRegisterCallbacks, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PtiWrite, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ptilink.inc
echo -----------------------------------------
ENDIF

