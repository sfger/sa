IFNDEF BUFFEROVERFLOWGDI_INC
BUFFEROVERFLOWGDI_INC equ <1>

PROTO64 external,DrvEnableDriver, :QWORD,:QWORD,:QWORD
PROTO64 external,EngBugCheckEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GsDrvEnableDriver, :QWORD,:QWORD,:QWORD
PROTO64 external,NtGetTickCount, 
PROTO64 external,_security_check_cookie, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file bufferoverflowgdi.inc
echo -----------------------------------------
ENDIF

