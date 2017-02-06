IFNDEF POWRPROF_INC
POWRPROF_INC equ <1>

PROTO64 external,CallNtPowerInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CanUserWritePwrScheme, 
PROTO64 external,DeletePwrScheme, :QWORD
PROTO64 external,EnumPwrSchemes, :QWORD,:QWORD
PROTO64 external,GetActivePwrScheme, :QWORD
PROTO64 external,GetCurrentPowerPolicies, :QWORD,:QWORD
PROTO64 external,GetPwrCapabilities, :QWORD
PROTO64 external,GetPwrDiskSpindownRange, :QWORD,:QWORD
PROTO64 external,IsAdminOverrideActive, :QWORD
PROTO64 external,IsPwrHibernateAllowed, 
PROTO64 external,IsPwrShutdownAllowed, 
PROTO64 external,IsPwrSuspendAllowed, 
PROTO64 external,LoadCurrentPwrScheme, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MergeLegacyPwrScheme, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ReadGlobalPwrPolicy, :QWORD
PROTO64 external,ReadProcessorPwrScheme, :QWORD,:QWORD
PROTO64 external,ReadPwrScheme, :QWORD,:QWORD
PROTO64 external,SetActivePwrScheme, :QWORD,:QWORD,:QWORD
PROTO64 external,SetSuspendState, :QWORD,:QWORD,:QWORD
PROTO64 external,ValidatePowerPolicies, :QWORD,:QWORD
PROTO64 external,WriteGlobalPwrPolicy, :QWORD
PROTO64 external,WriteProcessorPwrScheme, :QWORD,:QWORD
PROTO64 external,WritePwrScheme, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file powrprof.inc
echo -----------------------------------------
ENDIF

