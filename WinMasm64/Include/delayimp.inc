IFNDEF DELAYIMP_INC
DELAYIMP_INC equ <1>

PROTO64 external,__FUnloadDelayLoadedDLL2, :QWORD
PROTO64 external,__HrLoadAllImportsForDll, :QWORD
PROTO64 external,__delayLoadHelper2, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file delayimp.inc
echo -----------------------------------------
ENDIF

