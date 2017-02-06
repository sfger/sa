IFNDEF ARBITER_INC
ARBITER_INC equ <1>

PROTO64 external,ArbAddAllocation, :QWORD,:QWORD
PROTO64 external,ArbAddOrdering, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ArbAddReserved, :QWORD,:QWORD,:QWORD
PROTO64 external,ArbAllocateEntry, :QWORD,:QWORD
PROTO64 external,ArbArbiterHandler, :QWORD,:QWORD,:QWORD
PROTO64 external,ArbBacktrackAllocation, :QWORD,:QWORD
PROTO64 external,ArbBootAllocation, :QWORD,:QWORD
PROTO64 external,ArbBuildAssignmentOrdering, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ArbCommitAllocation, :QWORD
PROTO64 external,ArbCopyOrderingList, :QWORD,:QWORD
PROTO64 external,ArbDeleteArbiterInstance, :QWORD
PROTO64 external,ArbDereferenceArbiterInstance, :QWORD
PROTO64 external,ArbDumpArbiterInstance, :QWORD,:QWORD
PROTO64 external,ArbDumpArbiterRange, :QWORD,:QWORD,:QWORD
PROTO64 external,ArbDumpArbitrationList, :QWORD,:QWORD
PROTO64 external,ArbFindSuitableRange, :QWORD,:QWORD
PROTO64 external,ArbFreeOrderingList, :QWORD
PROTO64 external,ArbGetNextAllocationRange, :QWORD,:QWORD
PROTO64 external,ArbInitializeArbiterInstance, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ArbInitializeOrderingList, :QWORD
PROTO64 external,ArbOverrideConflict, :QWORD,:QWORD
PROTO64 external,ArbPreprocessEntry, :QWORD,:QWORD
PROTO64 external,ArbPruneOrdering, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ArbQueryConflict, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ArbReferenceArbiterInstance, :QWORD
PROTO64 external,ArbRetestAllocation, :QWORD,:QWORD
PROTO64 external,ArbRollbackAllocation, :QWORD
PROTO64 external,ArbShareDriverExclusive, :QWORD,:QWORD
PROTO64 external,ArbSortArbitrationList, :QWORD
PROTO64 external,ArbStartArbiter, :QWORD,:QWORD
PROTO64 external,ArbTestAllocation, :QWORD,:QWORD
PROTO64 external,ArbpBuildAllocationStack, :QWORD,:QWORD,:QWORD
PROTO64 external,ArbpBuildAlternative, :QWORD,:QWORD,:QWORD
PROTO64 external,ArbpGetRegistryValue, :QWORD,:QWORD,:QWORD
PROTO64 external,ArbpIndent, :QWORD
PROTO64 external,ArbpQueryConflictCallback, :QWORD,:QWORD
PROTO64 external,ArbpUpdatePriority, :QWORD,:QWORD
PROTO64 external,DbgBreakPoint, 
PROTO64 external,RtlAddRange, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RtlAssert, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RtlCopyRangeList, :QWORD,:QWORD
PROTO64 external,RtlDeleteOwnersRanges, :QWORD,:QWORD
PROTO64 external,RtlDeleteRange, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RtlFindRange, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RtlFreeRangeList, :QWORD
PROTO64 external,RtlGetFirstRange, :QWORD,:QWORD,:QWORD
PROTO64 external,RtlGetNextRange, :QWORD,:QWORD,:QWORD
PROTO64 external,RtlInitUnicodeString, :QWORD,:QWORD
PROTO64 external,RtlInitializeRangeList, :QWORD
PROTO64 external,ZwClose, :QWORD
PROTO64 external,ZwCreateKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ZwOpenKey, :QWORD,:QWORD,:QWORD
PROTO64 external,ZwQueryValueKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_security_check_cookie, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file arbiter.inc
echo -----------------------------------------
ENDIF

