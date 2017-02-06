IFNDEF PARSER_INC
PARSER_INC equ <1>

PROTO64 external,AddressToString, :QWORD,:QWORD
PROTO64 external,ByteToBinary, :QWORD,:QWORD
PROTO64 external,CanonHex, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CanonicalizeHexString, :QWORD,:QWORD,:QWORD
PROTO64 external,DwordToBinary, :QWORD,:QWORD
PROTO64 external,GetEtype, :QWORD,:QWORD
PROTO64 external,GetLLCHeaderLength, :QWORD
PROTO64 external,GetMacHeaderLength, :QWORD,:QWORD
PROTO64 external,GetProtocolDescription, :QWORD
PROTO64 external,GetProtocolDescriptionTable, :QWORD
PROTO64 external,GetSaps, :QWORD,:QWORD
PROTO64 external,IsLLCPresent, :QWORD,:QWORD
PROTO64 external,LookupByteSetString, :QWORD,:QWORD
PROTO64 external,LookupDwordSetString, :QWORD,:QWORD
PROTO64 external,LookupWordSetString, :QWORD,:QWORD
PROTO64 external,StringToAddress, :QWORD,:QWORD
PROTO64 external,VarLenSmallIntToDword, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WordToBinary, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file parser.inc
echo -----------------------------------------
ENDIF

