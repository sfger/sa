IFNDEF TAPE_INC
TAPE_INC equ <1>

PROTO64 external,KeBugCheckEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TapeClassAllocateSrbBuffer, :QWORD,:QWORD
PROTO64 external,TapeClassCompareMemory, :QWORD,:QWORD,:QWORD
PROTO64 external,TapeClassInitialize, :QWORD,:QWORD,:QWORD
PROTO64 external,TapeClassLiDiv, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TapeClassLogicalBlockToPhysicalBlock, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TapeClassPhysicalBlockToLogicalBlock, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TapeClassZeroMemory, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file tape.inc
echo -----------------------------------------
ENDIF

