IFNDEF CSCDLL_INC
CSCDLL_INC equ <1>

PROTO64 external,BreakConnections, :QWORD,:QWORD
PROTO64 external,CSCBeginSynchronizationW, :QWORD,:QWORD,:QWORD
PROTO64 external,CSCCheckShareOnlineA, :QWORD
PROTO64 external,CSCCheckShareOnlineExW, :QWORD,:QWORD
PROTO64 external,CSCCheckShareOnlineW, :QWORD
PROTO64 external,CSCCopyReplicaA, :QWORD,:QWORD
PROTO64 external,CSCCopyReplicaW, :QWORD,:QWORD
PROTO64 external,CSCDeleteA, :QWORD
PROTO64 external,CSCDeleteW, :QWORD
PROTO64 external,CSCDoEnableDisable, :QWORD
PROTO64 external,CSCDoLocalRenameA, :QWORD,:QWORD,:QWORD
PROTO64 external,CSCDoLocalRenameExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCDoLocalRenameW, :QWORD,:QWORD,:QWORD
PROTO64 external,CSCEncryptDecryptDatabase, :QWORD,:QWORD,:QWORD
PROTO64 external,CSCEndSynchronizationW, :QWORD,:QWORD
PROTO64 external,CSCEnumForStatsA, :QWORD,:QWORD,:QWORD
PROTO64 external,CSCEnumForStatsExA, :QWORD,:QWORD,:QWORD
PROTO64 external,CSCEnumForStatsExW, :QWORD,:QWORD,:QWORD
PROTO64 external,CSCEnumForStatsW, :QWORD,:QWORD,:QWORD
PROTO64 external,CSCFillSparseFilesA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCFillSparseFilesW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCFindClose, :QWORD
PROTO64 external,CSCFindFirstFileA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCFindFirstFileForSidA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCFindFirstFileForSidW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCFindFirstFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCFindNextFileA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCFindNextFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCFreeSpace, :QWORD,:QWORD
PROTO64 external,CSCGetSpaceUsageA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCGetSpaceUsageW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCIsCSCEnabled, 
PROTO64 external,CSCIsServerOfflineA, :QWORD,:QWORD
PROTO64 external,CSCIsServerOfflineW, :QWORD,:QWORD
PROTO64 external,CSCMergeShareA, :QWORD,:QWORD,:QWORD
PROTO64 external,CSCMergeShareW, :QWORD,:QWORD,:QWORD
PROTO64 external,CSCPinFileA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCPinFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCPurgeUnpinnedFiles, :QWORD,:QWORD,:QWORD
PROTO64 external,CSCQueryDatabaseStatus, :QWORD,:QWORD
PROTO64 external,CSCQueryFileStatusA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCQueryFileStatusExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCQueryFileStatusExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCQueryFileStatusW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCQueryShareStatusA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCQueryShareStatusW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCSetMaxSpace, :QWORD,:QWORD
PROTO64 external,CSCShareIdToShareName, :QWORD,:QWORD,:QWORD
PROTO64 external,CSCTransitionServerOnlineA, :QWORD
PROTO64 external,CSCTransitionServerOnlineW, :QWORD
PROTO64 external,CSCUnpinFileA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCUnpinFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CheckCSC, :QWORD,:QWORD
PROTO64 external,CheckCSCEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LogoffHappened, :QWORD
PROTO64 external,LogonHappened, :QWORD
PROTO64 external,MprServiceProc, :QWORD
PROTO64 external,ReInt_WndProc, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RefreshConnections, :QWORD,:QWORD
PROTO64 external,Update, :QWORD,:QWORD
PROTO64 external,WinlogonLockEvent, :QWORD
PROTO64 external,WinlogonLogoffEvent, :QWORD
PROTO64 external,WinlogonLogonEvent, :QWORD
PROTO64 external,WinlogonScreenSaverEvent, :QWORD
PROTO64 external,WinlogonShutdownEvent, :QWORD
PROTO64 external,WinlogonStartShellEvent, :QWORD
PROTO64 external,WinlogonStartupEvent, :QWORD
PROTO64 external,WinlogonUnlockEvent, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file cscdll.inc
echo -----------------------------------------
ENDIF

