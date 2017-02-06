IFNDEF CRYPTUI_INC
CRYPTUI_INC equ <1>

PROTO64 external,ACUIProviderInvokeUI, :QWORD
PROTO64 external,CryptUIDlgCertMgr, :QWORD
PROTO64 external,CryptUIDlgFreeCAContext, :QWORD
PROTO64 external,CryptUIDlgSelectCA, :QWORD
PROTO64 external,CryptUIDlgSelectCertificateA, :QWORD
PROTO64 external,CryptUIDlgSelectCertificateFromStore, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIDlgSelectCertificateW, :QWORD
PROTO64 external,CryptUIDlgSelectStoreA, :QWORD
PROTO64 external,CryptUIDlgSelectStoreW, :QWORD
PROTO64 external,CryptUIDlgViewCRLA, :QWORD
PROTO64 external,CryptUIDlgViewCRLW, :QWORD
PROTO64 external,CryptUIDlgViewCTLA, :QWORD
PROTO64 external,CryptUIDlgViewCTLW, :QWORD
PROTO64 external,CryptUIDlgViewCertificateA, :QWORD,:QWORD
PROTO64 external,CryptUIDlgViewCertificatePropertiesA, :QWORD,:QWORD
PROTO64 external,CryptUIDlgViewCertificatePropertiesW, :QWORD,:QWORD
PROTO64 external,CryptUIDlgViewCertificateW, :QWORD,:QWORD
PROTO64 external,CryptUIDlgViewContext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIDlgViewSignerInfoA, :QWORD
PROTO64 external,CryptUIDlgViewSignerInfoW, :QWORD
PROTO64 external,CryptUIFreeCertificatePropertiesPagesA, :QWORD,:QWORD
PROTO64 external,CryptUIFreeCertificatePropertiesPagesW, :QWORD,:QWORD
PROTO64 external,CryptUIFreeViewSignaturesPagesA, :QWORD,:QWORD
PROTO64 external,CryptUIFreeViewSignaturesPagesW, :QWORD,:QWORD
PROTO64 external,CryptUIGetCertificatePropertiesPagesA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIGetCertificatePropertiesPagesW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIGetViewSignaturesPagesA, :QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIGetViewSignaturesPagesW, :QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIStartCertMgr, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIWizBuildCTL, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIWizCertRequest, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIWizCreateCertRequestNoDS, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIWizDigitalSign, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIWizExport, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIWizFreeCertRequestNoDS, :QWORD
PROTO64 external,CryptUIWizFreeDigitalSignContext, :QWORD
PROTO64 external,CryptUIWizImport, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIWizQueryCertRequestNoDS, :QWORD,:QWORD
PROTO64 external,CryptUIWizSubmitCertRequestNoDS, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnrollmentCOMObjectFactory_getInstance, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,I_CryptUIProtect, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,I_CryptUIProtectFailure, :QWORD,:QWORD,:QWORD
PROTO64 external,LocalEnroll, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LocalEnrollNoDS, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RetrievePKCS7FromCA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WizardFree, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file cryptui.inc
echo -----------------------------------------
ENDIF

