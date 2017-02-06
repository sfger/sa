IFNDEF SSDPAPI_INC
SSDPAPI_INC equ <1>

PROTO64 external,CleanupCache, 
PROTO64 external,DHDisableDeviceHost, 
PROTO64 external,DHEnableDeviceHost, 
PROTO64 external,DHSetICSInterfaces, :QWORD,:QWORD
PROTO64 external,DHSetICSOff, 
PROTO64 external,DeregisterNotification, :QWORD
PROTO64 external,DeregisterService, :QWORD,:QWORD
PROTO64 external,DeregisterServiceByUSN, :QWORD,:QWORD
PROTO64 external,FindServices, :QWORD,:QWORD,:QWORD
PROTO64 external,FindServicesCallback, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FindServicesCancel, :QWORD
PROTO64 external,FindServicesClose, :QWORD
PROTO64 external,FreeSsdpMessage, :QWORD
PROTO64 external,GetFirstService, :QWORD,:QWORD
PROTO64 external,GetNextService, :QWORD,:QWORD
PROTO64 external,RegisterNotification, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegisterService, :QWORD,:QWORD
PROTO64 external,SsdpCleanup, 
PROTO64 external,SsdpStartup, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ssdpapi.inc
echo -----------------------------------------
ENDIF

