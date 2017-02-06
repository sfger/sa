IFNDEF MOBSYNCP_INC
MOBSYNCP_INC equ <1>

PROTO64 external,DisplayOptions, :QWORD
PROTO64 external,MobsyncGetClassObject, :QWORD,:QWORD
PROTO64 external,RegGetHandlerRegistrationInfo, :QWORD,:QWORD
PROTO64 external,RegGetHandlerTopLevelKey, :QWORD
PROTO64 external,RegGetProgressDetailsState, :QWORD,:QWORD,:QWORD
PROTO64 external,RegGetSchedConnectionName, :QWORD,:QWORD,:QWORD
PROTO64 external,RegGetSchedSyncSettings, :QWORD,:QWORD
PROTO64 external,RegGetSyncItemSettings, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegGetSyncSettings, :QWORD,:QWORD
PROTO64 external,RegQueryLoadHandlerOnEvent, :QWORD,:QWORD,:QWORD
PROTO64 external,RegRemoveManualSyncSettings, :QWORD
PROTO64 external,RegSchedHandlerItemsChecked, :QWORD,:QWORD,:QWORD
PROTO64 external,RegSetProgressDetailsState, :QWORD,:QWORD,:QWORD
PROTO64 external,RegSetSyncItemSettings, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegSetUserDefaults, 
PROTO64 external,RunDllRegister, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SyncMgrResolveConflictA, :QWORD,:QWORD
PROTO64 external,SyncMgrResolveConflictW, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mobsyncp.inc
echo -----------------------------------------
ENDIF

