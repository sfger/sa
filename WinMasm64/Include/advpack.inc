IFNDEF ADVPACK_INC
ADVPACK_INC equ <1>

PROTO64 external,AddDelBackupEntry, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AdvInstallFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CloseINFEngine, :QWORD
PROTO64 external,DelNode, :QWORD,:QWORD
PROTO64 external,DelNodeRunDLL32, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DllMain, :QWORD,:QWORD,:QWORD
PROTO64 external,DoInfInstall, :QWORD
PROTO64 external,ExecuteCab, :QWORD,:QWORD,:QWORD
PROTO64 external,ExtractFiles, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FileSaveMarkNotExist, :QWORD,:QWORD,:QWORD
PROTO64 external,FileSaveRestore, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FileSaveRestoreOnINF, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetVersionFromFile, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetVersionFromFileEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IsNTAdmin, :QWORD,:QWORD
PROTO64 external,LaunchINFSection, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LaunchINFSectionEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NeedReboot, :QWORD
PROTO64 external,NeedRebootInit, 
PROTO64 external,OpenINFEngine, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RebootCheckOnInstall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegInstall, :QWORD,:QWORD,:QWORD
PROTO64 external,RegRestoreAll, :QWORD,:QWORD,:QWORD
PROTO64 external,RegSaveRestore, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegSaveRestoreOnINF, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegisterOCX, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RunSetupCommand, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetPerUserSecValues, :QWORD
PROTO64 external,TranslateInfString, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TranslateInfStringEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UserInstStubWrapper, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UserUnInstStubWrapper, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file advpack.inc
echo -----------------------------------------
ENDIF

