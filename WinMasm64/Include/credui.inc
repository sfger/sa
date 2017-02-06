IFNDEF CREDUI_INC
CREDUI_INC equ <1>

PROTO64 external,CredUICmdLinePromptForCredentialsA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CredUICmdLinePromptForCredentialsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CredUIConfirmCredentialsA, :QWORD,:QWORD
PROTO64 external,CredUIConfirmCredentialsW, :QWORD,:QWORD
PROTO64 external,CredUIParseUserNameA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CredUIParseUserNameW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CredUIPromptForCredentialsA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CredUIPromptForCredentialsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CredUIReadSSOCredW, :QWORD,:QWORD
PROTO64 external,CredUIStoreSSOCredW, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file credui.inc
echo -----------------------------------------
ENDIF

