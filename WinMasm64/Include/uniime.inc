IFNDEF UNIIME_INC
UNIIME_INC equ <1>

PROTO64 external,UniAttachMiniIME, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniCandWndProc, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniCompWndProc, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniContextMenuWndProc, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniDetachMiniIME, :QWORD,:QWORD
PROTO64 external,UniImeConfigure, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniImeConversionList, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniImeDestroy, :QWORD,:QWORD,:QWORD
PROTO64 external,UniImeEnumRegisterWord, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniImeEscape, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniImeGetRegisterWordStyle, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniImeInquire, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniImeProcessKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniImeRegisterWord, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniImeSelect, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniImeSetActiveContext, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniImeSetCompositionString, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniImeToAsciiEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniImeUnregisterWord, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniNotifyIME, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniOffCaretWndProc, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniSearchPhrasePredictionA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniSearchPhrasePredictionW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniStatusWndProc, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UniUIWndProc, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file uniime.inc
echo -----------------------------------------
ENDIF

