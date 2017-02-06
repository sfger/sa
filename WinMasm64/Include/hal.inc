IFNDEF HAL_INC
HAL_INC equ <1>

PROTO64 external,HalAcquireDisplayOwnership, :QWORD
PROTO64 external,HalAdjustResourceList, :QWORD
PROTO64 external,HalAllProcessorsStarted, 
PROTO64 external,HalAllocateAdapterChannel, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HalAllocateCommonBuffer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HalAllocateCrashDumpRegisters, :QWORD,:QWORD
PROTO64 external,HalAssignSlotResources, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HalBeginSystemInterrupt, :QWORD,:QWORD,:QWORD
PROTO64 external,HalCalibratePerformanceCounter, :QWORD,:QWORD,:QWORD
PROTO64 external,HalDisableSystemInterrupt, :QWORD,:QWORD
PROTO64 external,HalDisplayString, :QWORD
PROTO64 external,HalEnableSystemInterrupt, :QWORD,:QWORD,:QWORD
PROTO64 external,HalEndSystemInterrupt, :QWORD,:QWORD
PROTO64 external,HalFlushCommonBuffer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HalFreeCommonBuffer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HalGetAdapter, :QWORD,:QWORD
PROTO64 external,HalGetBusData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HalGetBusDataByOffset, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HalGetEnvironmentVariable, :QWORD,:QWORD,:QWORD
PROTO64 external,HalGetInterruptVector, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HalHandleNMI, :QWORD
PROTO64 external,HalInitSystem, :QWORD,:QWORD
PROTO64 external,HalInitializeProcessor, :QWORD,:QWORD
PROTO64 external,HalMakeBeep, :QWORD
PROTO64 external,HalProcessorIdle, 
PROTO64 external,HalQueryDisplayParameters, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HalQueryRealTimeClock, :QWORD
PROTO64 external,HalReadDmaCounter, :QWORD
PROTO64 external,HalReportResourceUsage, 
PROTO64 external,HalRequestIpi, :QWORD
PROTO64 external,HalReturnToFirmware, :QWORD
PROTO64 external,HalSetBusData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HalSetBusDataByOffset, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HalSetDisplayParameters, :QWORD,:QWORD
PROTO64 external,HalSetEnvironmentVariable, :QWORD,:QWORD
PROTO64 external,HalSetProfileInterval, :QWORD
PROTO64 external,HalSetRealTimeClock, :QWORD
PROTO64 external,HalSetTimeIncrement, :QWORD
PROTO64 external,HalStartNextProcessor, :QWORD,:QWORD
PROTO64 external,HalStartProfileInterrupt, :QWORD
PROTO64 external,HalStopProfileInterrupt, :QWORD
PROTO64 external,HalTranslateBusAddress, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IoFlushAdapterBuffers, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IoFreeAdapterChannel, :QWORD
PROTO64 external,IoFreeMapRegisters, :QWORD,:QWORD,:QWORD
PROTO64 external,IoMapTransfer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,KeAcquireSpinLock, :QWORD,:QWORD
PROTO64 external,KeFlushWriteBuffer, 
PROTO64 external,KeGetCurrentIrql, 
PROTO64 external,KeLowerIrql, :QWORD
PROTO64 external,KeQueryPerformanceCounter, :QWORD
PROTO64 external,KeRaiseIrql, :QWORD,:QWORD
PROTO64 external,KeRaiseIrqlToDpcLevel, 
PROTO64 external,KeRaiseIrqlToSynchLevel, 
PROTO64 external,KeReleaseSpinLock, :QWORD,:QWORD
PROTO64 external,KeStallExecutionProcessor, :QWORD
PROTO64 external,READ_PORT_BUFFER_UCHAR, :QWORD,:QWORD,:QWORD
PROTO64 external,READ_PORT_BUFFER_ULONG, :QWORD,:QWORD,:QWORD
PROTO64 external,READ_PORT_BUFFER_USHORT, :QWORD,:QWORD,:QWORD
PROTO64 external,READ_PORT_UCHAR, :QWORD
PROTO64 external,READ_PORT_ULONG, :QWORD
PROTO64 external,READ_PORT_USHORT, :QWORD
PROTO64 external,WRITE_PORT_BUFFER_UCHAR, :QWORD,:QWORD,:QWORD
PROTO64 external,WRITE_PORT_BUFFER_ULONG, :QWORD,:QWORD,:QWORD
PROTO64 external,WRITE_PORT_BUFFER_USHORT, :QWORD,:QWORD,:QWORD
PROTO64 external,WRITE_PORT_UCHAR, :QWORD,:QWORD
PROTO64 external,WRITE_PORT_ULONG, :QWORD,:QWORD
PROTO64 external,WRITE_PORT_USHORT, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file hal.inc
echo -----------------------------------------
ENDIF

