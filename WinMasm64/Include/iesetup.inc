IFNDEF IESETUP_INC
IESETUP_INC equ <1>

PROTO64 external,FixIE, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file iesetup.inc
echo -----------------------------------------
ENDIF

