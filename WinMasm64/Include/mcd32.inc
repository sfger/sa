IFNDEF MCD32_INC
MCD32_INC equ <1>

PROTO64 external,MCDAddState, :QWORD,:QWORD,:QWORD
PROTO64 external,MCDAddStateStruct, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MCDAlloc, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MCDAllocBuffers, :QWORD,:QWORD
PROTO64 external,MCDBeginState, :QWORD,:QWORD
PROTO64 external,MCDBindContext, :QWORD,:QWORD,:QWORD
PROTO64 external,MCDClear, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MCDCopyPixels, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MCDCreateContext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MCDCreateTexture, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MCDDeleteContext, :QWORD
PROTO64 external,MCDDeleteTexture, :QWORD,:QWORD
PROTO64 external,MCDDescribeLayerPlane, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MCDDescribeMcdLayerPlane, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MCDDescribeMcdPixelFormat, :QWORD,:QWORD,:QWORD
PROTO64 external,MCDDescribePixelFormat, :QWORD,:QWORD,:QWORD
PROTO64 external,MCDDestroyWindow, :QWORD,:QWORD
PROTO64 external,MCDDrawPixels, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MCDFlushState, :QWORD
PROTO64 external,MCDFree, :QWORD,:QWORD
PROTO64 external,MCDGetBuffers, :QWORD,:QWORD
PROTO64 external,MCDGetDriverInfo, :QWORD,:QWORD
PROTO64 external,MCDGetTextureFormats, :QWORD,:QWORD,:QWORD
PROTO64 external,MCDLock, :QWORD
PROTO64 external,MCDPixelMap, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MCDProcessBatch2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MCDProcessBatch, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MCDQueryMemStatus, :QWORD
PROTO64 external,MCDReadPixels, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MCDReadSpan, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MCDSetLayerPalette, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MCDSetScissorRect, :QWORD,:QWORD,:QWORD
PROTO64 external,MCDSetViewport, :QWORD,:QWORD,:QWORD
PROTO64 external,MCDSwap, :QWORD,:QWORD
PROTO64 external,MCDSwapMultiple, :QWORD,:QWORD,:QWORD
PROTO64 external,MCDSync, :QWORD
PROTO64 external,MCDTextureKey, :QWORD,:QWORD
PROTO64 external,MCDTextureStatus, :QWORD,:QWORD
PROTO64 external,MCDUnlock, :QWORD
PROTO64 external,MCDUpdateSubTexture, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MCDUpdateTexturePalette, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MCDUpdateTexturePriority, :QWORD,:QWORD,:QWORD
PROTO64 external,MCDUpdateTextureState, :QWORD,:QWORD,:QWORD
PROTO64 external,MCDWriteSpan, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mcd32.inc
echo -----------------------------------------
ENDIF

