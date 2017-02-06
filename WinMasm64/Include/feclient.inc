IFNDEF FECLIENT_INC
FECLIENT_INC equ <1>

PROTO64 external,FeClientInitialize, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file feclient.inc
echo -----------------------------------------
ENDIF

