IFNDEF SDBUS_INC
SDBUS_INC equ <1>

PROTO64 external,SdBusOpenInterface, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SdBusSubmitRequest, :QWORD,:QWORD
PROTO64 external,SdBusSubmitRequestAsync, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SdbusIoctlCompletion, :QWORD,:QWORD,:QWORD
PROTO64 external,_SdBusOpenInterface, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file sdbus.inc
echo -----------------------------------------
ENDIF

