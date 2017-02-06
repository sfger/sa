IFNDEF CCFAPI32_INC
CCFAPI32_INC equ <1>

PROTO64 external,CCFCertificateEnterUI, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CCFCertificateRemoveUI, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NoCertificateEnter, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NoCertificateRemove, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ccfapi32.inc
echo -----------------------------------------
ENDIF

