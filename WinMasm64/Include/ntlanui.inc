IFNDEF NTLANUI_INC
NTLANUI_INC equ <1>

PROTO64 external,DllMain, :QWORD,:QWORD,:QWORD
PROTO64 external,I_SystemFocusDialog, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NPGetPropertyText, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NPPropertyDialog, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ServerBrowseDialogA0, :QWORD,:QWORD,:QWORD
PROTO64 external,ShareCreate, :QWORD
PROTO64 external,ShareManage, :QWORD,:QWORD
PROTO64 external,ShareStop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ntlanui.inc
echo -----------------------------------------
ENDIF

