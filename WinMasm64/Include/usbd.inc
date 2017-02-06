IFNDEF USBD_INC
USBD_INC equ <1>

PROTO64 external,USBD_AllocateDeviceName, :QWORD
PROTO64 external,USBD_CalculateUsbBandwidth, :QWORD,:QWORD,:QWORD
PROTO64 external,USBD_CompleteRequest, :QWORD,:QWORD
PROTO64 external,USBD_CreateConfigurationRequest, :QWORD,:QWORD
PROTO64 external,USBD_CreateConfigurationRequestEx, :QWORD,:QWORD
PROTO64 external,USBD_CreateDevice, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,USBD_Debug_GetHeap, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,USBD_Debug_LogEntry, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,USBD_Debug_RetHeap, :QWORD,:QWORD,:QWORD
PROTO64 external,USBD_Dispatch, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,USBD_FreeDeviceMutex, :QWORD
PROTO64 external,USBD_FreeDeviceName, :QWORD
PROTO64 external,USBD_GetDeviceInformation, :QWORD,:QWORD,:QWORD
PROTO64 external,USBD_GetInterfaceLength, :QWORD,:QWORD
PROTO64 external,USBD_GetPdoRegistryParameter, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,USBD_GetSuspendPowerState, :QWORD
PROTO64 external,USBD_GetUSBDIVersion, :QWORD
PROTO64 external,USBD_InitializeDevice, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,USBD_MakePdoName, :QWORD,:QWORD
PROTO64 external,USBD_ParseConfigurationDescriptor, :QWORD,:QWORD,:QWORD
PROTO64 external,USBD_ParseConfigurationDescriptorEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,USBD_ParseDescriptors, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,USBD_QueryBusTime, :QWORD,:QWORD
PROTO64 external,USBD_RegisterHcDeviceCapabilities, :QWORD,:QWORD,:QWORD
PROTO64 external,USBD_RegisterHcFilter, :QWORD,:QWORD
PROTO64 external,USBD_RegisterHostController, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,USBD_RemoveDevice, :QWORD,:QWORD,:QWORD
PROTO64 external,USBD_RestoreDevice, :QWORD,:QWORD,:QWORD
PROTO64 external,USBD_SetSuspendPowerState, :QWORD,:QWORD
PROTO64 external,USBD_WaitDeviceMutex, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file usbd.inc
echo -----------------------------------------
ENDIF

