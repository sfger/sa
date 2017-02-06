IFNDEF EXCPPKG_INC
EXCPPKG_INC equ <1>

PROTO64 external,SetupEnumerateRegisteredOsComponents, :QWORD,:QWORD
PROTO64 external,SetupQueryRegisteredOsComponent, :QWORD,:QWORD,:QWORD
PROTO64 external,SetupQueryRegisteredOsComponentsOrder, :QWORD,:QWORD
PROTO64 external,SetupRegisterOsComponent, :QWORD,:QWORD
PROTO64 external,SetupSetRegisteredOsComponentsOrder, :QWORD,:QWORD
PROTO64 external,SetupUnRegisterOsComponent, :QWORD
PROTO64 external,_SetupSetRegisteredOsComponentsOrder, :QWORD,:QWORD,:QWORD
PROTO64 external,_security_check_cookie, :QWORD
PROTO64 external,pComponentListValidator, :QWORD,:QWORD,:QWORD
PROTO64 external,pGetComponentData, :QWORD,:QWORD
PROTO64 external,pGetExceptionData, :QWORD,:QWORD
PROTO64 external,pSetComponentData, :QWORD,:QWORD
PROTO64 external,pSetExceptionData, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file excppkg.inc
echo -----------------------------------------
ENDIF

