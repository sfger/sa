IFNDEF D3D8_INC
D3D8_INC equ <1>

PROTO64 external,Direct3DCreate8, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file d3d8.inc
echo -----------------------------------------
ENDIF

