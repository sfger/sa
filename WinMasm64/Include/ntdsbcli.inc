IFNDEF NTDSBCLI_INC
NTDSBCLI_INC equ <1>

PROTO64 external,DllEntryPoint, :QWORD,:QWORD,:QWORD
PROTO64 external,DsBackupClose, :QWORD
PROTO64 external,DsBackupEnd, :QWORD
PROTO64 external,DsBackupFree, :QWORD
PROTO64 external,DsBackupGetBackupLogsA, :QWORD,:QWORD,:QWORD
PROTO64 external,DsBackupGetBackupLogsW, :QWORD,:QWORD,:QWORD
PROTO64 external,DsBackupGetDatabaseNamesA, :QWORD,:QWORD,:QWORD
PROTO64 external,DsBackupGetDatabaseNamesW, :QWORD,:QWORD,:QWORD
PROTO64 external,DsBackupOpenFileA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsBackupOpenFileW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsBackupPrepareA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsBackupPrepareW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsBackupRead, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsBackupTruncateLogs, :QWORD
PROTO64 external,DsIsNTDSOnlineA, :QWORD,:QWORD
PROTO64 external,DsIsNTDSOnlineW, :QWORD,:QWORD
PROTO64 external,DsRestoreCheckExpiryToken, :QWORD,:QWORD
PROTO64 external,DsRestoreEnd, :QWORD
PROTO64 external,DsRestoreGetDatabaseLocationsA, :QWORD,:QWORD,:QWORD
PROTO64 external,DsRestoreGetDatabaseLocationsW, :QWORD,:QWORD,:QWORD
PROTO64 external,DsRestorePrepareA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsRestorePrepareW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsRestoreRegisterA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsRestoreRegisterComplete, :QWORD,:QWORD
PROTO64 external,DsRestoreRegisterW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsSetAuthIdentityA, :QWORD,:QWORD,:QWORD
PROTO64 external,DsSetAuthIdentityW, :QWORD,:QWORD,:QWORD
PROTO64 external,DsSetCurrentBackupLogA, :QWORD,:QWORD
PROTO64 external,DsSetCurrentBackupLogW, :QWORD,:QWORD
PROTO64 external,I_DsCheckBackupLogs, :QWORD
PROTO64 external,I_DsRestoreW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ntdsbcli.inc
echo -----------------------------------------
ENDIF

