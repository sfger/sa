IFNDEF APIDLL_INC
APIDLL_INC equ <1>

PROTO64 external,ApiDllEntry, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file apidll.inc
echo -----------------------------------------
ENDIF

