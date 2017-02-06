IFNDEF LSADLL_INC
LSADLL_INC equ <1>

PROTO64 external,LsaCallAuthenticationPackage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaConnectUntrusted, :QWORD
PROTO64 external,LsaDeregisterLogonProcess, :QWORD
PROTO64 external,LsaFreeReturnBuffer, :QWORD
PROTO64 external,LsaLogonUser, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaLookupAuthenticationPackage, :QWORD,:QWORD,:QWORD
PROTO64 external,LsaRegisterLogonProcess, :QWORD,:QWORD,:QWORD
PROTO64 external,_security_check_cookie, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file lsadll.inc
echo -----------------------------------------
ENDIF

