IFNDEF DINPUT_INC
DINPUT_INC equ <1>

PROTO64 external,DirectInputCreateA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DirectInputCreateEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DirectInputCreateW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_DirectInputCreateW, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dinput.inc
echo -----------------------------------------
ENDIF

