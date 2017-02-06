IFNDEF CABINET_INC
CABINET_INC equ <1>

PROTO64 external,DeleteExtractedFiles, :QWORD
PROTO64 external,DllGetVersion, :QWORD
PROTO64 external,Extract, :QWORD,:QWORD
PROTO64 external,GetDllVersion, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file cabinet.inc
echo -----------------------------------------
ENDIF

