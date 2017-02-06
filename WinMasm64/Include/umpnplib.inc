IFNDEF UMPNPLIB_INC
UMPNPLIB_INC equ <1>

PROTO64 external,DeletePrivateKey, :QWORD,:QWORD,:QWORD
PROTO64 external,DestroyPrivateResource, :QWORD
PROTO64 external,GetDevNodeKeyPath, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcExceptionFilter, :QWORD
PROTO64 external,InitPrivateResource, :QWORD
PROTO64 external,IsLegalDeviceId, :QWORD
PROTO64 external,MapRpcExceptionToCR, :QWORD
PROTO64 external,PNP_GetClassInstance, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PNP_GetDeviceRegProp, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegDeleteNode, :QWORD,:QWORD
PROTO64 external,Split1, :QWORD,:QWORD,:QWORD
PROTO64 external,Split2, :QWORD,:QWORD,:QWORD
PROTO64 external,SplitDeviceInstanceString, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_security_check_cookie, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file umpnplib.inc
echo -----------------------------------------
ENDIF

