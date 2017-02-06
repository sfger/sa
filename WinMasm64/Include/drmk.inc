IFNDEF DRMK_INC
DRMK_INC equ <1>

PROTO64 external,DrmAddContentHandlers, :QWORD,:QWORD,:QWORD
PROTO64 external,DrmCreateContentMixed, :QWORD,:QWORD,:QWORD
PROTO64 external,DrmDestroyContent, :QWORD
PROTO64 external,DrmForwardContentToDeviceObject, :QWORD,:QWORD,:QWORD
PROTO64 external,DrmForwardContentToFileObject, :QWORD,:QWORD
PROTO64 external,DrmForwardContentToInterface, :QWORD,:QWORD,:QWORD
PROTO64 external,DrmGetContentRights, :QWORD,:QWORD
PROTO64 external,DrmGetFilterDescriptor, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file drmk.inc
echo -----------------------------------------
ENDIF

