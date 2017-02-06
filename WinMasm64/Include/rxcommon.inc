IFNDEF RXCOMMON_INC
RXCOMMON_INC equ <1>

PROTO64 external,NetApiBufferFree, :QWORD
PROTO64 external,NetapipBufferAllocate, :QWORD,:QWORD
PROTO64 external,NetpAssertFailed, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpBreakPoint, 
PROTO64 external,NetpCopyWStrToStrDBCS, :QWORD,:QWORD
PROTO64 external,NetpDbgHexDump, :QWORD,:QWORD
PROTO64 external,NetpIsUncComputerNameValid, :QWORD
PROTO64 external,NetpMemoryAllocate, :QWORD
PROTO64 external,NetpMemoryFree, :QWORD
PROTO64 external,NetpMemoryReallocate, :QWORD,:QWORD
PROTO64 external,NetpRdrFsControlTree, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpUnicodeToDBCSLen, :QWORD
PROTO64 external,RapArrayLength, :QWORD,:QWORD,:QWORD
PROTO64 external,RapAsciiToDecimal, :QWORD
PROTO64 external,RapAuxDataCount, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RapAuxDataCountOffset, :QWORD,:QWORD,:QWORD
PROTO64 external,RapConvertSingleEntry, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RapConvertSingleEntryEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RapGetFieldSize, :QWORD,:QWORD,:QWORD
PROTO64 external,RapIsValidDescriptorSmb, :QWORD
PROTO64 external,RapParmNumDescriptor, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RapStructureAlignment, :QWORD,:QWORD,:QWORD
PROTO64 external,RapStructureSize, :QWORD,:QWORD,:QWORD
PROTO64 external,RapTotalSize, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RxpComputeRequestBufferSize, :QWORD,:QWORD,:QWORD
PROTO64 external,RxpConvertArgs, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RxpConvertBlock, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RxpConvertDataStructures, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RxpEstimateLogSize, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RxpFieldSize, :QWORD,:QWORD
PROTO64 external,RxpGetFieldSize, :QWORD,:QWORD
PROTO64 external,RxpGetFieldSizeDl, :QWORD,:QWORD,:QWORD
PROTO64 external,RxpGetSetInfoDescriptor, :QWORD,:QWORD,:QWORD
PROTO64 external,RxpIsFieldSettable, :QWORD,:QWORD
PROTO64 external,RxpPackSendBuffer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RxpReceiveBufferConvert, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RxpSetField, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RxpSetPointer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RxpStartBuildingTransaction, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RxpTransactSmb, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_security_check_cookie, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file rxcommon.inc
echo -----------------------------------------
ENDIF

