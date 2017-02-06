IFNDEF MQMAIL_INC
MQMAIL_INC equ <1>

PROTO64 external,FGetAliasFromDestination, :QWORD,:QWORD,:QWORD
PROTO64 external,FStringContainsDBCS, :QWORD
PROTO64 external,GetQLabelFromDestination, :QWORD
PROTO64 external,HrAddPrefixStr, :QWORD,:QWORD,:QWORD
PROTO64 external,HrCopyData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HrCreateDestStr, :QWORD,:QWORD,:QWORD
PROTO64 external,HrCreateUnicodeStr, :QWORD,:QWORD,:QWORD
PROTO64 external,HrFileTimeToMimeDate, :QWORD,:QWORD,:QWORD
PROTO64 external,HrFormatMessageV, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HrGetTempFName, :QWORD,:QWORD
PROTO64 external,HrGetTempFNameByDirPfx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HrMimeDateToFileTime, :QWORD,:QWORD,:QWORD
PROTO64 external,HrParseMimeRecip, :QWORD,:QWORD,:QWORD
PROTO64 external,HrParseMimeRecips, :QWORD,:QWORD,:QWORD
PROTO64 external,HrQuoteString, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HrTimeToFileTime, :QWORD,:QWORD
PROTO64 external,HrUnQuoteString, :QWORD,:QWORD,:QWORD
PROTO64 external,MQMailComposeBody, :QWORD,:QWORD,:QWORD
PROTO64 external,MQMailFreeMemory, :QWORD
PROTO64 external,MQMailParseBody, :QWORD,:QWORD,:QWORD
PROTO64 external,TrimFix, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mqmail.inc
echo -----------------------------------------
ENDIF

