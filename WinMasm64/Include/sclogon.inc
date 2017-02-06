IFNDEF SCLOGON_INC
SCLOGON_INC equ <1>

PROTO64 external,GetCSPName, :QWORD
PROTO64 external,GetCardName, :QWORD
PROTO64 external,GetContainerName, :QWORD
PROTO64 external,GetReaderName, :QWORD
PROTO64 external,ScBuildLogonInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScHelperCreateCredHMAC, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScHelperCreateCredKeys, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScHelperDecryptCredentials, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScHelperDecryptMessage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScHelperEncryptCredentials, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScHelperEncryptMessage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScHelperGenRandBits, :QWORD,:QWORD
PROTO64 external,ScHelperGetCertFromLogonInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,ScHelperGetProvParam, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScHelperInitializeContext, :QWORD,:QWORD
PROTO64 external,ScHelperRelease, :QWORD
PROTO64 external,ScHelperSignMessage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScHelperSignPkcsMessage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScHelperVerifyCard, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScHelperVerifyCardAndCreds, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScHelperVerifyMessage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScHelperVerifyPkcsMessage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_security_check_cookie, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file sclogon.inc
echo -----------------------------------------
ENDIF

