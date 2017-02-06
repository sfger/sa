IFNDEF B1394BUS_INC
B1394BUS_INC equ <1>

PROTO64 external,Bus1394RegisterPortDriver, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file 1394bus.inc
echo -----------------------------------------
ENDIF

