IFNDEF R81WDET_INC
R81WDET_INC equ <1>

PROTO64 external,FindAdapterHandler, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file r81wdet.inc
echo -----------------------------------------
ENDIF

