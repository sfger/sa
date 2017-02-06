IFNDEF FTSRCH_INC
FTSRCH_INC equ <1>

PROTO64 external,ClearDisplayText, :QWORD
PROTO64 external,CompressText, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CountHilites, :QWORD,:QWORD,:QWORD
PROTO64 external,DecompressText, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeleteCompressor, :QWORD
PROTO64 external,DeleteHiliter, :QWORD
PROTO64 external,DeleteIndex, :QWORD
PROTO64 external,DeleteSearcher, :QWORD
PROTO64 external,DiscardIndex, :QWORD,:QWORD
PROTO64 external,DllMain, :QWORD,:QWORD,:QWORD
PROTO64 external,GetPhraseTable, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IsValidIndex, :QWORD,:QWORD
PROTO64 external,LoadGroup, :QWORD,:QWORD
PROTO64 external,NewCompressor, :QWORD
PROTO64 external,NewHiliter, :QWORD
PROTO64 external,NewIndex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NewSearcher, 
PROTO64 external,OpenBiDiTabDialog, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OpenDialog, :QWORD,:QWORD
PROTO64 external,OpenIndex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OpenTabDialog, :QWORD,:QWORD,:QWORD
PROTO64 external,QueryHilites, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,QueryOptions, :QWORD,:QWORD,:QWORD
PROTO64 external,RegisterAnimator, :QWORD,:QWORD
PROTO64 external,SaveGroup, :QWORD,:QWORD
PROTO64 external,SaveIndex, :QWORD,:QWORD
PROTO64 external,ScanDisplayText, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScanText, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScanTopicText, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScanTopicTitle, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetDirectoryLocator, :QWORD
PROTO64 external,SetPhraseTable, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ftsrch.inc
echo -----------------------------------------
ENDIF

