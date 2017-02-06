IFNDEF NETRAP_INC
NETRAP_INC equ <1>

PROTO64 external,RapArrayLength, :QWORD,:QWORD,:QWORD
PROTO64 external,RapAsciiToDecimal, :QWORD
PROTO64 external,RapAuxDataCount, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RapAuxDataCountOffset, :QWORD,:QWORD,:QWORD
PROTO64 external,RapConvertSingleEntry, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RapConvertSingleEntryEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RapExamineDescriptor, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RapGetFieldSize, :QWORD,:QWORD,:QWORD
PROTO64 external,RapIsValidDescriptorSmb, :QWORD
PROTO64 external,RapLastPointerOffset, :QWORD,:QWORD,:QWORD
PROTO64 external,RapParmNumDescriptor, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RapStructureAlignment, :QWORD,:QWORD,:QWORD
PROTO64 external,RapStructureSize, :QWORD,:QWORD,:QWORD
PROTO64 external,RapTotalSize, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file netrap.inc
echo -----------------------------------------
ENDIF

