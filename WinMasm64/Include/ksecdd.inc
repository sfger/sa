IFNDEF KSECDD_INC
KSECDD_INC equ <1>

PROTO64 external,AcceptSecurityContext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AcquireCredentialsHandleW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AddCredentialsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ApplyControlToken, :QWORD,:QWORD
PROTO64 external,CredMarshalTargetInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,DeleteSecurityContext, :QWORD
PROTO64 external,EfsDecryptFek, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EfsGenerateKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumerateSecurityPackagesW, :QWORD,:QWORD
PROTO64 external,ExportSecurityContext, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FreeContextBuffer, :QWORD
PROTO64 external,FreeCredentialsHandle, :QWORD
PROTO64 external,GenerateDirEfs, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GenerateSessionKey, :QWORD
PROTO64 external,GetSecurityUserInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,ImpersonateSecurityContext, :QWORD
PROTO64 external,ImportSecurityContextW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InitSecurityInterfaceW, 
PROTO64 external,InitializeSecurityContextW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,KSecRegisterSecurityProvider, :QWORD,:QWORD
PROTO64 external,KSecValidateBuffer, :QWORD,:QWORD
PROTO64 external,LsaEnumerateLogonSessions, :QWORD,:QWORD
PROTO64 external,LsaGetLogonSessionData, :QWORD,:QWORD
PROTO64 external,MakeSignature, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MapSecurityError, :QWORD
PROTO64 external,QueryContextAttributesW, :QWORD,:QWORD,:QWORD
PROTO64 external,QueryCredentialsAttributesW, :QWORD,:QWORD,:QWORD
PROTO64 external,QuerySecurityContextToken, :QWORD,:QWORD
PROTO64 external,QuerySecurityPackageInfoW, :QWORD,:QWORD
PROTO64 external,RevertSecurityContext, :QWORD
PROTO64 external,SealMessage, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SecLookupAccountName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SecLookupAccountSid, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SecMakeSPN, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SecMakeSPNEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SecSetPagingMode, :QWORD
PROTO64 external,UnsealMessage, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VerifySignature, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ksecdd.inc
echo -----------------------------------------
ENDIF

