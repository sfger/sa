IFNDEF SFCFILES_INC
SFCFILES_INC equ <1>

PROTO64 external,SfcGetFiles, :QWORD,:QWORD
PROTO64 external,pSfcGetFilesList, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file sfcfiles.inc
echo -----------------------------------------
ENDIF

