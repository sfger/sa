IFNDEF WIAUTIL_INC
WIAUTIL_INC equ <1>

PROTO64 external,GdipAlloc, :QWORD
PROTO64 external,GdipCloneImage, :QWORD,:QWORD
PROTO64 external,GdipDisposeImage, :QWORD
PROTO64 external,GdipFree, :QWORD
PROTO64 external,GdipGetImageDimension, :QWORD,:QWORD,:QWORD
PROTO64 external,GdipGetImageEncoders, :QWORD,:QWORD,:QWORD
PROTO64 external,GdipGetImageEncodersSize, :QWORD,:QWORD
PROTO64 external,GdipGetImagePixelFormat, :QWORD,:QWORD
PROTO64 external,GdipLoadImageFromStream, :QWORD,:QWORD
PROTO64 external,GdipLoadImageFromStreamICM, :QWORD,:QWORD
PROTO64 external,GdipSaveImageToStream, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GdiplusShutdown, :QWORD
PROTO64 external,GdiplusStartup, :QWORD,:QWORD,:QWORD
PROTO64 external,IsEqualGUID, :QWORD,:QWORD
PROTO64 external,PropVariantInit, :QWORD
PROTO64 external,_security_check_cookie, :QWORD
PROTO64 external,wiasGetDrvItem, :QWORD,:QWORD
PROTO64 external,wiasReadPropGuid, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasSetItemPropAttribs, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasSetItemPropNames, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasWriteMultiple, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiauDbgHelper, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiauDbgInit, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wiautil.inc
echo -----------------------------------------
ENDIF

