IFNDEF CLASSPNP_INC
CLASSPNP_INC equ <1>

PROTO64 external,ClassAcquireChildLock, :QWORD
PROTO64 external,ClassAcquireRemoveLockEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ClassAsynchronousCompletion, :QWORD,:QWORD,:QWORD
PROTO64 external,ClassBuildRequest, :QWORD,:QWORD
PROTO64 external,ClassCheckMediaState, :QWORD
PROTO64 external,ClassClaimDevice, :QWORD,:QWORD
PROTO64 external,ClassCleanupMediaChangeDetection, :QWORD
PROTO64 external,ClassCompleteRequest, :QWORD,:QWORD,:QWORD
PROTO64 external,ClassCreateDeviceObject, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ClassDeleteSrbLookasideList, :QWORD
PROTO64 external,ClassDeviceControl, :QWORD,:QWORD
PROTO64 external,ClassDisableMediaChangeDetection, :QWORD
PROTO64 external,ClassEnableMediaChangeDetection, :QWORD
PROTO64 external,ClassFindModePage, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ClassForwardIrpSynchronous, :QWORD,:QWORD
PROTO64 external,ClassGetDescriptor, :QWORD,:QWORD,:QWORD
PROTO64 external,ClassGetDeviceParameter, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ClassGetDriverExtension, :QWORD
PROTO64 external,ClassGetVpb, :QWORD
PROTO64 external,ClassInitialize, :QWORD,:QWORD,:QWORD
PROTO64 external,ClassInitializeEx, :QWORD,:QWORD,:QWORD
PROTO64 external,ClassInitializeMediaChangeDetection, :QWORD,:QWORD
PROTO64 external,ClassInitializeSrbLookasideList, :QWORD,:QWORD
PROTO64 external,ClassInitializeTestUnitPolling, :QWORD,:QWORD
PROTO64 external,ClassInternalIoControl, :QWORD,:QWORD
PROTO64 external,ClassInterpretSenseInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ClassInvalidateBusRelations, :QWORD
PROTO64 external,ClassIoComplete, :QWORD,:QWORD,:QWORD
PROTO64 external,ClassIoCompleteAssociated, :QWORD,:QWORD,:QWORD
PROTO64 external,ClassMarkChildMissing, :QWORD,:QWORD
PROTO64 external,ClassMarkChildrenMissing, :QWORD
PROTO64 external,ClassModeSense, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ClassNotifyFailurePredicted, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ClassQueryTimeOutRegistryValue, :QWORD
PROTO64 external,ClassReadDriveCapacity, :QWORD
PROTO64 external,ClassReleaseChildLock, :QWORD
PROTO64 external,ClassReleaseQueue, :QWORD
PROTO64 external,ClassReleaseRemoveLock, :QWORD,:QWORD
PROTO64 external,ClassRemoveDevice, :QWORD,:QWORD
PROTO64 external,ClassResetMediaChangeTimer, :QWORD
PROTO64 external,ClassScanForSpecial, :QWORD,:QWORD,:QWORD
PROTO64 external,ClassSendDeviceIoControlSynchronous, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ClassSendIrpSynchronous, :QWORD,:QWORD
PROTO64 external,ClassSendSrbAsynchronous, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ClassSendSrbSynchronous, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ClassSendStartUnit, :QWORD
PROTO64 external,ClassSetDeviceParameter, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ClassSetFailurePredictionPoll, :QWORD,:QWORD,:QWORD
PROTO64 external,ClassSetMediaChangeState, :QWORD,:QWORD,:QWORD
PROTO64 external,ClassSignalCompletion, :QWORD,:QWORD,:QWORD
PROTO64 external,ClassSpinDownPowerHandler, :QWORD,:QWORD
PROTO64 external,ClassSplitRequest, :QWORD,:QWORD,:QWORD
PROTO64 external,ClassStopUnitPowerHandler, :QWORD,:QWORD
PROTO64 external,ClassUpdateInformationInRegistry, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ClassWmiCompleteRequest, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ClassWmiFireEvent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file classpnp.inc
echo -----------------------------------------
ENDIF

