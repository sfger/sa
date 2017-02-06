IFNDEF STREAM_INC
STREAM_INC equ <1>

PROTO64 external,StreamClassAbortOutstandingRequests, :QWORD,:QWORD,:QWORD
PROTO64 external,StreamClassCallAtNewPriority, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StreamClassCompleteRequestAndMarkQueueReady, :QWORD
PROTO64 external,StreamClassDebugAssert, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StreamClassFilterReenumerateStreams, :QWORD,:QWORD
PROTO64 external,StreamClassGetDmaBuffer, :QWORD
PROTO64 external,StreamClassGetNextEvent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StreamClassGetPhysicalAddress, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StreamClassLogError, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StreamClassPnPAddDeviceWorker, :QWORD,:QWORD,:QWORD
PROTO64 external,StreamClassQueryMasterClock, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StreamClassQueryMasterClockSync, :QWORD,:QWORD
PROTO64 external,StreamClassReadWriteConfig, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StreamClassReenumerateStreams, :QWORD,:QWORD
PROTO64 external,StreamClassRegisterAdapter, :QWORD,:QWORD,:QWORD
PROTO64 external,StreamClassRegisterFilterWithNoKSPins, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StreamClassScheduleTimer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file stream.inc
echo -----------------------------------------
ENDIF

