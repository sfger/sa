IFNDEF NTLANMAN_INC
NTLANMAN_INC equ <1>

PROTO64 external,DllMain, :QWORD,:QWORD,:QWORD
PROTO64 external,I_SystemFocusDialog, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IsDfsPathEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NPAddConnection3, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NPAddConnection3ForCSCAgent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NPAddConnection, :QWORD,:QWORD,:QWORD
PROTO64 external,NPCancelConnectionForCSCAgent, :QWORD,:QWORD
PROTO64 external,NPCloseEnum, :QWORD
PROTO64 external,NPFormatNetworkName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NPGetConnection3, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NPGetConnectionPerformance, :QWORD,:QWORD
PROTO64 external,NPGetDirectoryType, :QWORD,:QWORD,:QWORD
PROTO64 external,NPGetReconnectFlags, :QWORD,:QWORD
PROTO64 external,NPGetResourceInformation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NPGetResourceParent, :QWORD,:QWORD,:QWORD
PROTO64 external,NPGetUser, :QWORD,:QWORD,:QWORD
PROTO64 external,ServerBrowseDialogA0, :QWORD,:QWORD,:QWORD
PROTO64 external,ShareAsDialogA0, :QWORD,:QWORD,:QWORD
PROTO64 external,ShareCreate, :QWORD
PROTO64 external,ShareManage, :QWORD,:QWORD
PROTO64 external,ShareStop, :QWORD
PROTO64 external,StopShareDialogA0, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ntlanman.inc
echo -----------------------------------------
ENDIF

