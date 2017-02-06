IFNDEF NTMSAPI_INC
NTMSAPI_INC equ <1>

PROTO64 external,AccessNtmsLibraryDoor, :QWORD,:QWORD,:QWORD
PROTO64 external,AddNtmsMediaType, :QWORD,:QWORD,:QWORD
PROTO64 external,AllocateNtmsMedia, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BeginNtmsDeviceChangeDetection, :QWORD,:QWORD
PROTO64 external,CancelNtmsLibraryRequest, :QWORD,:QWORD
PROTO64 external,CancelNtmsOperatorRequest, :QWORD,:QWORD
PROTO64 external,ChangeNtmsMediaType, :QWORD,:QWORD,:QWORD
PROTO64 external,CleanNtmsDrive, :QWORD,:QWORD
PROTO64 external,CloseNtmsNotification, :QWORD
PROTO64 external,CloseNtmsSession, :QWORD
PROTO64 external,CreateNtmsMediaA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateNtmsMediaPoolA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateNtmsMediaPoolW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateNtmsMediaW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeallocateNtmsMedia, :QWORD,:QWORD,:QWORD
PROTO64 external,DecommissionNtmsMedia, :QWORD,:QWORD
PROTO64 external,DeleteNtmsDrive, :QWORD,:QWORD
PROTO64 external,DeleteNtmsLibrary, :QWORD,:QWORD
PROTO64 external,DeleteNtmsMedia, :QWORD,:QWORD
PROTO64 external,DeleteNtmsMediaPool, :QWORD,:QWORD
PROTO64 external,DeleteNtmsMediaType, :QWORD,:QWORD,:QWORD
PROTO64 external,DeleteNtmsRequests, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DisableNtmsObject, :QWORD,:QWORD,:QWORD
PROTO64 external,DismountNtmsDrive, :QWORD,:QWORD
PROTO64 external,DismountNtmsMedia, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DoEjectFromSADriveW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EjectDiskFromSADriveA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EjectDiskFromSADriveW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EjectNtmsCleaner, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EjectNtmsMedia, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnableNtmsObject, :QWORD,:QWORD,:QWORD
PROTO64 external,EndNtmsDeviceChangeDetection, :QWORD,:QWORD
PROTO64 external,EnumerateNtmsObject, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ExportNtmsDatabase, :QWORD
PROTO64 external,GetNtmsMediaPoolNameA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetNtmsMediaPoolNameW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetNtmsObjectAttributeA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetNtmsObjectAttributeW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetNtmsObjectInformationA, :QWORD,:QWORD,:QWORD
PROTO64 external,GetNtmsObjectInformationW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetNtmsObjectSecurity, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetNtmsRequestOrder, :QWORD,:QWORD,:QWORD
PROTO64 external,GetNtmsUIOptionsA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetNtmsUIOptionsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetVolumesFromDriveA, :QWORD,:QWORD,:QWORD
PROTO64 external,GetVolumesFromDriveW, :QWORD,:QWORD,:QWORD
PROTO64 external,IdentifyNtmsSlot, :QWORD,:QWORD,:QWORD
PROTO64 external,ImportNtmsDatabase, :QWORD
PROTO64 external,InjectNtmsCleaner, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InjectNtmsMedia, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InventoryNtmsLibrary, :QWORD,:QWORD,:QWORD
PROTO64 external,MountNtmsMedia, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MoveToNtmsMediaPool, :QWORD,:QWORD,:QWORD
PROTO64 external,OpenNtmsNotification, :QWORD,:QWORD
PROTO64 external,OpenNtmsSessionA, :QWORD,:QWORD,:QWORD
PROTO64 external,OpenNtmsSessionW, :QWORD,:QWORD,:QWORD
PROTO64 external,ReleaseNtmsCleanerSlot, :QWORD,:QWORD
PROTO64 external,ReserveNtmsCleanerSlot, :QWORD,:QWORD,:QWORD
PROTO64 external,SatisfyNtmsOperatorRequest, :QWORD,:QWORD
PROTO64 external,SetNtmsDeviceChangeDetection, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetNtmsMediaComplete, :QWORD,:QWORD
PROTO64 external,SetNtmsObjectAttributeA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetNtmsObjectAttributeW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetNtmsObjectInformationA, :QWORD,:QWORD,:QWORD
PROTO64 external,SetNtmsObjectInformationW, :QWORD,:QWORD,:QWORD
PROTO64 external,SetNtmsObjectSecurity, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetNtmsRequestOrder, :QWORD,:QWORD,:QWORD
PROTO64 external,SetNtmsUIOptionsA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetNtmsUIOptionsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SubmitNtmsOperatorRequestA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SubmitNtmsOperatorRequestW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SwapNtmsMedia, :QWORD,:QWORD,:QWORD
PROTO64 external,UpdateNtmsOmidInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WaitForNtmsNotification, :QWORD,:QWORD,:QWORD
PROTO64 external,WaitForNtmsOperatorRequest, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ntmsapi.inc
echo -----------------------------------------
ENDIF

