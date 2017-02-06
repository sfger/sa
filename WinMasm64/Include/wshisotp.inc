IFNDEF WSHISOTP_INC
WSHISOTP_INC equ <1>

PROTO64 external,WSHEnumProtocols, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSHGetSockaddrType, :QWORD,:QWORD,:QWORD
PROTO64 external,WSHGetSocketInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSHGetWildcardSockaddr, :QWORD,:QWORD,:QWORD
PROTO64 external,WSHGetWinsockMapping, :QWORD,:QWORD
PROTO64 external,WSHNotify, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSHOpenSocket, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSHSetSocketInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wshisotp.inc
echo -----------------------------------------
ENDIF

