IFNDEF RPCNDR_INC
RPCNDR_INC equ <1>

PROTO64 external,MIDL_user_allocate, :QWORD
PROTO64 external,RpcRaiseException, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file rpcndr.inc
echo -----------------------------------------
ENDIF

