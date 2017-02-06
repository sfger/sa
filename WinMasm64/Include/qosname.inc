IFNDEF QOSNAME_INC
QOSNAME_INC equ <1>

PROTO64 external,WPUGetQOSTemplate, :QWORD,:QWORD,:QWORD
PROTO64 external,WSCInstallQOSTemplate, :QWORD,:QWORD,:QWORD
PROTO64 external,WSCRemoveQOSTemplate, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file qosname.inc
echo -----------------------------------------
ENDIF

