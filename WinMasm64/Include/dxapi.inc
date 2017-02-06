IFNDEF DXAPI_INC
DXAPI_INC equ <1>

PROTO64 external,DxApi, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DxApiGetVersion, 
PROTO64 external,DxApiInitialize, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DxAutoflipUpdate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DxEnableIRQ, :QWORD,:QWORD
PROTO64 external,DxLoseObject, :QWORD,:QWORD
PROTO64 external,DxUpdateCapture, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dxapi.inc
echo -----------------------------------------
ENDIF

