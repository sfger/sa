IFNDEF NWSLIB_INC
NWSLIB_INC equ <1>

PROTO64 external,CloseNcpSrvPerformanceData, 
PROTO64 external,CollectNcpSrvPerformanceData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateNewSecurityDescriptor, :QWORD,:QWORD,:QWORD
PROTO64 external,MapNwRightsToNTAccess, :QWORD,:QWORD,:QWORD
PROTO64 external,MapSpecificToGeneric, :QWORD,:QWORD
PROTO64 external,NwAddRight, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NwCheckTrusteeRights, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NwRemoveRight, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NwScanTrustees, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OpenNcpSrvPerformanceData, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file nwslib.inc
echo -----------------------------------------
ENDIF

