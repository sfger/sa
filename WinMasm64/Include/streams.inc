IFNDEF STREAMS_INC
STREAMS_INC equ <1>

PROTO64 external,SAMESTR, :QWORD
PROTO64 external,StrmConvertCentisecondsToRelativeTimeout, :QWORD
PROTO64 external,StrmDeregisterDriver, :QWORD,:QWORD
PROTO64 external,StrmDeregisterModule, :QWORD,:QWORD
PROTO64 external,StrmGetError, 
PROTO64 external,StrmGetRegValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StrmLogEvent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StrmOpenRegKey, :QWORD,:QWORD
PROTO64 external,StrmQueryLbolt, 
PROTO64 external,StrmQuerySecondsSince1970Time, 
PROTO64 external,StrmRegisterDriver, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StrmRegisterModule, :QWORD,:QWORD,:QWORD
PROTO64 external,StrmSetError, :QWORD
PROTO64 external,StrmWaitForMultipleObjects, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StrmWaitForMutexObject, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StrmWaitForSingleObject, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,adjmsg, :QWORD,:QWORD
PROTO64 external,allocb, :QWORD,:QWORD
PROTO64 external,backq, :QWORD
PROTO64 external,bufcall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,canput, :QWORD
PROTO64 external,canputnext, :QWORD
PROTO64 external,copyb, :QWORD
PROTO64 external,copymsg, :QWORD
PROTO64 external,disable_procs, :QWORD
PROTO64 external,dupb, :QWORD
PROTO64 external,dupmsg, :QWORD
PROTO64 external,enable_procs, :QWORD
PROTO64 external,enableok, :QWORD
PROTO64 external,esballoc, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,esbbcall, :QWORD,:QWORD,:QWORD
PROTO64 external,flushq, :QWORD,:QWORD
PROTO64 external,freeb, :QWORD
PROTO64 external,freemsg, :QWORD
PROTO64 external,getadmin, :QWORD
PROTO64 external,getmid, :QWORD
PROTO64 external,getq, :QWORD
PROTO64 external,insq, :QWORD,:QWORD,:QWORD
PROTO64 external,linkb, :QWORD,:QWORD
PROTO64 external,msgdsize, :QWORD
PROTO64 external,noenable, :QWORD
PROTO64 external,pullupmsg, :QWORD,:QWORD
PROTO64 external,put, :QWORD,:QWORD
PROTO64 external,putbq, :QWORD,:QWORD
PROTO64 external,putctl1, :QWORD,:QWORD,:QWORD
PROTO64 external,putctl, :QWORD,:QWORD
PROTO64 external,putnext, :QWORD,:QWORD
PROTO64 external,putnextctl1, :QWORD,:QWORD,:QWORD
PROTO64 external,putnextctl, :QWORD,:QWORD
PROTO64 external,putq, :QWORD,:QWORD
PROTO64 external,qenable, :QWORD
PROTO64 external,qreply, :QWORD,:QWORD
PROTO64 external,qsize, :QWORD
PROTO64 external,rmvb, :QWORD,:QWORD
PROTO64 external,rmvq, :QWORD,:QWORD
PROTO64 external,strqget, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,strqset, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,suser, 
PROTO64 external,testb, :QWORD,:QWORD
PROTO64 external,timeout, :QWORD,:QWORD,:QWORD
PROTO64 external,unbufcall, :QWORD
PROTO64 external,unlinkb, :QWORD
PROTO64 external,untimeout, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file streams.inc
echo -----------------------------------------
ENDIF

