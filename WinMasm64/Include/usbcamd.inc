IFNDEF USBCAMD_INC
USBCAMD_INC equ <1>

PROTO64 external,USBCAMD_AdapterReceivePacket, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,USBCAMD_ControlVendorCommand, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,USBCAMD_Debug_LogEntry, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,USBCAMD_DriverEntry, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,USBCAMD_GetRegistryKeyValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,USBCAMD_InitializeNewInterface, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,USBCAMD_SelectAlternateInterface, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file usbcamd.inc
echo -----------------------------------------
ENDIF

