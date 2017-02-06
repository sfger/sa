IFNDEF BUFFEROVERFLOWU_INC
BUFFEROVERFLOWU_INC equ <1>

PROTO64 external,_DllMainCRTStartupForGS, :QWORD,:QWORD,:QWORD
PROTO64 external,_security_check_cookie, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file bufferoverflowu.inc
echo -----------------------------------------
ENDIF

