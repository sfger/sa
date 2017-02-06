IFNDEF RSA32SDK2_INC
RSA32SDK2_INC equ <1>

PROTO64 external,A_SHAFinal, :QWORD,:QWORD
PROTO64 external,A_SHAFinalNS, :QWORD,:QWORD
PROTO64 external,A_SHAInit, :QWORD
PROTO64 external,A_SHAUpdate, :QWORD,:QWORD,:QWORD
PROTO64 external,A_SHAUpdateNS, :QWORD,:QWORD,:QWORD
PROTO64 external,CBC, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CFB, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,QWORDFromBigEndian, :QWORD,:QWORD,:QWORD
PROTO64 external,QWORDFromLittleEndian, :QWORD,:QWORD,:QWORD
PROTO64 external,QWORDToBigEndian, :QWORD,:QWORD,:QWORD
PROTO64 external,QWORDToLittleEndian, :QWORD,:QWORD,:QWORD
PROTO64 external,MD4Final, :QWORD
PROTO64 external,MD4Init, :QWORD
PROTO64 external,MD4Transform, :QWORD,:QWORD
PROTO64 external,MD4Update, :QWORD,:QWORD,:QWORD
PROTO64 external,MD5Final, :QWORD
PROTO64 external,MD5Init, :QWORD
PROTO64 external,MD5Update, :QWORD,:QWORD,:QWORD
PROTO64 external,MDbegin, :QWORD
PROTO64 external,MDblock, :QWORD,:QWORD
PROTO64 external,MDupdate, :QWORD,:QWORD,:QWORD
PROTO64 external,SHATransform, :QWORD,:QWORD
PROTO64 external,SHATransformNS, :QWORD,:QWORD
PROTO64 external,TransformMD5, :QWORD,:QWORD
PROTO64 external,_CBC, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,des, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,desexpand128to192, :QWORD,:QWORD
PROTO64 external,deskey, :QWORD,:QWORD
PROTO64 external,deskeyexpand, :QWORD,:QWORD
PROTO64 external,desparityonkey, :QWORD,:QWORD
PROTO64 external,desreducekey, :QWORD
PROTO64 external,rc4, :QWORD,:QWORD,:QWORD
PROTO64 external,rc4_key, :QWORD,:QWORD,:QWORD
PROTO64 external,tripledes2key, :QWORD,:QWORD
PROTO64 external,tripledes3key, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file rsa32sdk2.inc
echo -----------------------------------------
ENDIF

