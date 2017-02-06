IFNDEF WINPPI_INC
WINPPI_INC equ <1>

PROTO64 external,CancelDC, :QWORD
PROTO64 external,CreateDCA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateDCW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeleteDC, :QWORD
PROTO64 external,GdiDeleteSpoolFileHandle, :QWORD
PROTO64 external,GdiEndDocEMF, :QWORD
PROTO64 external,GdiEndPageEMF, :QWORD,:QWORD
PROTO64 external,GdiGetDC, :QWORD
PROTO64 external,GdiGetDevmodeForPage, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GdiGetPageCount, :QWORD
PROTO64 external,GdiGetPageHandle, :QWORD,:QWORD,:QWORD
PROTO64 external,GdiGetSpoolFileHandle, :QWORD,:QWORD,:QWORD
PROTO64 external,GdiGetSpoolMessage, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GdiInitSpool, 
PROTO64 external,GdiPlayEMF, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GdiPlayPageEMF, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GdiPlayPrivatePageEMF, :QWORD,:QWORD,:QWORD
PROTO64 external,GdiQueryFonts, :QWORD,:QWORD,:QWORD
PROTO64 external,GdiResetDCEMF, :QWORD,:QWORD
PROTO64 external,GdiStartDocEMF, :QWORD,:QWORD
PROTO64 external,GdiStartPageEMF, :QWORD
PROTO64 external,GetCharWidthInfo, :QWORD,:QWORD
PROTO64 external,GetDeviceCaps, :QWORD,:QWORD
PROTO64 external,GetWorldTransform, :QWORD,:QWORD
PROTO64 external,ModifyWorldTransform, :QWORD,:QWORD,:QWORD
PROTO64 external,ResetDCA, :QWORD,:QWORD
PROTO64 external,ResetDCW, :QWORD,:QWORD
PROTO64 external,SetGraphicsMode, :QWORD,:QWORD
PROTO64 external,SetWorldTransform, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file winppi.inc
echo -----------------------------------------
ENDIF

