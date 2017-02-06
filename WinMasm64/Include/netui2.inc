IFNDEF NETUI2_INC
NETUI2_INC equ <1>

PROTO64 external,BltCCWndProc, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BltDlgProc, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BltWndProc, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CloseUserBrowser, :QWORD
PROTO64 external,EnumUserBrowserSelection, :QWORD,:QWORD,:QWORD
PROTO64 external,OpenUserBrowser, :QWORD
PROTO64 external,ShellDlgProc, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file netui2.inc
echo -----------------------------------------
ENDIF

