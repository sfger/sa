IFNDEF SCSIPORT_INC
SCSIPORT_INC equ <1>

PROTO64 external,KeBugCheckEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortCompleteRequest, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortConvertPhysicalAddressToUlong, :QWORD,:QWORD
PROTO64 external,ScsiPortConvertUlongToPhysicalAddress, :QWORD
PROTO64 external,ScsiPortFlushDma, :QWORD
PROTO64 external,ScsiPortFreeDeviceBase, :QWORD,:QWORD
PROTO64 external,ScsiPortGetBusData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortGetDeviceBase, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortGetLogicalUnit, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortGetPhysicalAddress, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortGetSrb, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortGetUncachedExtension, :QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortGetVirtualAddress, :QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortInitialize, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortIoMapTransfer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortLogError, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortMoveMemory, :QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortQuerySystemTime, :QWORD
PROTO64 external,ScsiPortReadPortBufferUchar, :QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortReadPortBufferUlong, :QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortReadPortBufferUshort, :QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortReadPortUchar, :QWORD
PROTO64 external,ScsiPortReadPortUlong, :QWORD
PROTO64 external,ScsiPortReadPortUshort, :QWORD
PROTO64 external,ScsiPortReadRegisterBufferUchar, :QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortReadRegisterBufferUlong, :QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortReadRegisterBufferUshort, :QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortReadRegisterUchar, :QWORD
PROTO64 external,ScsiPortReadRegisterUlong, :QWORD
PROTO64 external,ScsiPortReadRegisterUshort, :QWORD
PROTO64 external,ScsiPortSetBusDataByOffset, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortStallExecution, :QWORD
PROTO64 external,ScsiPortValidateRange, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortWritePortBufferUchar, :QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortWritePortBufferUlong, :QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortWritePortBufferUshort, :QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortWritePortUchar, :QWORD,:QWORD
PROTO64 external,ScsiPortWritePortUlong, :QWORD,:QWORD
PROTO64 external,ScsiPortWritePortUshort, :QWORD,:QWORD
PROTO64 external,ScsiPortWriteRegisterBufferUchar, :QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortWriteRegisterBufferUlong, :QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortWriteRegisterBufferUshort, :QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortWriteRegisterUchar, :QWORD,:QWORD
PROTO64 external,ScsiPortWriteRegisterUlong, :QWORD,:QWORD
PROTO64 external,ScsiPortWriteRegisterUshort, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file scsiport.inc
echo -----------------------------------------
ENDIF

