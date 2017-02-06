IFNDEF PSXRTL_INC
PSXRTL_INC equ <1>

PROTO64 external,__PdxInitializeData, :QWORD,:QWORD
PROTO64 external,__chkstk, 
PROTO64 external,_chkstk, 
PROTO64 external,_fptrap, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file psxrtl.inc
echo -----------------------------------------
ENDIF

