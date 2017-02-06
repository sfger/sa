IFNDEF PSXDLL_INC
PSXDLL_INC equ <1>

PROTO64 external,GetProcessHeap, 
PROTO64 external,HeapAlloc, :QWORD,:QWORD,:QWORD
PROTO64 external,HeapFree, :QWORD,:QWORD,:QWORD
PROTO64 external,HeapReAlloc, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HeapSize, :QWORD,:QWORD,:QWORD
PROTO64 external,RtlAnsiCharToUnicodeChar, :QWORD
PROTO64 external,RtlFillMemory, :QWORD,:QWORD,:QWORD
PROTO64 external,RtlMoveMemory, :QWORD,:QWORD,:QWORD
PROTO64 external,RtlMultiByteToUnicodeN, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RtlUnicodeToMultiByteN, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RtlUnicodeToMultiByteSize, :QWORD,:QWORD,:QWORD
PROTO64 external,RtlUnwind, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RtlUpcaseUnicodeChar, :QWORD
PROTO64 external,RtlUpcaseUnicodeToMultiByteN, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RtlZeroMemory, :QWORD,:QWORD
PROTO64 external,__PdxInitializeData, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file psxdll.inc
echo -----------------------------------------
ENDIF

