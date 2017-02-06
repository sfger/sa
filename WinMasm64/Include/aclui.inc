IFNDEF ACLUI_INC
ACLUI_INC equ <1>

PROTO64 external,CreateSecurityPage, :QWORD
PROTO64 external,EditSecurity, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file aclui.inc
echo -----------------------------------------
ENDIF

