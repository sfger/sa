IFNDEF HTMLHELP_INC
HTMLHELP_INC equ <1>

PROTO64 external,HtmlHelpA, STDCALL hwndCaller:dword, pszFile:dword, uCommand:dword, dwData:dword
PROTO64 external,HtmlHelpW, STDCALL hwndCaller:dword, pszFile:dword, uCommand:dword, dwData:dword

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file htmlhelp.inc
echo -----------------------------------------
ENDIF

