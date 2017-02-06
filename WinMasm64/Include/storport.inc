IFNDEF STORPORT_INC
STORPORT_INC equ <1>

PROTO64 external,KeBugCheckEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortMoveMemory, :QWORD,:QWORD,:QWORD
PROTO64 external,StorPortBusy, :QWORD,:QWORD
PROTO64 external,StorPortCompleteRequest, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StorPortConvertUlongToPhysicalAddress, :QWORD
PROTO64 external,StorPortDeviceBusy, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StorPortDeviceReady, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StorPortFreeDeviceBase, :QWORD,:QWORD
PROTO64 external,StorPortGetBusData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StorPortGetDeviceBase, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StorPortGetLogicalUnit, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StorPortGetPhysicalAddress, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StorPortGetScatterGatherList, :QWORD,:QWORD
PROTO64 external,StorPortGetSrb, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StorPortGetUncachedExtension, :QWORD,:QWORD,:QWORD
PROTO64 external,StorPortGetVirtualAddress, :QWORD,:QWORD,:QWORD
PROTO64 external,StorPortInitialize, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StorPortLogError, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StorPortMoveMemory, :QWORD,:QWORD,:QWORD
PROTO64 external,StorPortPause, :QWORD,:QWORD
PROTO64 external,StorPortPauseDevice, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StorPortReadPortBufferUchar, :QWORD,:QWORD,:QWORD
PROTO64 external,StorPortReadPortBufferUlong, :QWORD,:QWORD,:QWORD
PROTO64 external,StorPortReadPortBufferUshort, :QWORD,:QWORD,:QWORD
PROTO64 external,StorPortReadPortUchar, :QWORD
PROTO64 external,StorPortReadPortUlong, :QWORD
PROTO64 external,StorPortReadPortUshort, :QWORD
PROTO64 external,StorPortReadRegisterBufferUchar, :QWORD,:QWORD,:QWORD
PROTO64 external,StorPortReadRegisterBufferUlong, :QWORD,:QWORD,:QWORD
PROTO64 external,StorPortReadRegisterBufferUshort, :QWORD,:QWORD,:QWORD
PROTO64 external,StorPortReadRegisterUchar, :QWORD
PROTO64 external,StorPortReadRegisterUlong, :QWORD
PROTO64 external,StorPortReadRegisterUshort, :QWORD
PROTO64 external,StorPortReady, :QWORD
PROTO64 external,StorPortResume, :QWORD
PROTO64 external,StorPortResumeDevice, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StorPortSetBusDataByOffset, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StorPortStallExecution, :QWORD
PROTO64 external,StorPortSynchronizeAccess, :QWORD,:QWORD,:QWORD
PROTO64 external,StorPortValidateRange, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StorPortWritePortBufferUchar, :QWORD,:QWORD,:QWORD
PROTO64 external,StorPortWritePortBufferUlong, :QWORD,:QWORD,:QWORD
PROTO64 external,StorPortWritePortBufferUshort, :QWORD,:QWORD,:QWORD
PROTO64 external,StorPortWritePortUchar, :QWORD,:QWORD
PROTO64 external,StorPortWritePortUlong, :QWORD,:QWORD
PROTO64 external,StorPortWritePortUshort, :QWORD,:QWORD
PROTO64 external,StorPortWriteRegisterBufferUchar, :QWORD,:QWORD,:QWORD
PROTO64 external,StorPortWriteRegisterBufferUlong, :QWORD,:QWORD,:QWORD
PROTO64 external,StorPortWriteRegisterBufferUshort, :QWORD,:QWORD,:QWORD
PROTO64 external,StorPortWriteRegisterUchar, :QWORD,:QWORD
PROTO64 external,StorPortWriteRegisterUlong, :QWORD,:QWORD
PROTO64 external,StorPortWriteRegisterUshort, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file storport.inc
echo -----------------------------------------
ENDIF

