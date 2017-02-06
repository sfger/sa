IFNDEF VCCOMSUP_INC
VCCOMSUP_INC equ <1>

PROTO64 external,_CxxThrowException, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file vccomsup.inc
echo -----------------------------------------
ENDIF

