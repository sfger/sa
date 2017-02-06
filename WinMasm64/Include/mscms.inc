IFNDEF MSCMS_INC
MSCMS_INC equ <1>

PROTO64 external,AssociateColorProfileWithDeviceA, :QWORD,:QWORD,:QWORD
PROTO64 external,AssociateColorProfileWithDeviceW, :QWORD,:QWORD,:QWORD
PROTO64 external,CheckBitmapBits, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CheckColors, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CloseColorProfile, :QWORD
PROTO64 external,ConvertColorNameToIndex, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ConvertIndexToColorName, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateColorTransformA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateColorTransformW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateDeviceLinkProfile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateMultiProfileTransform, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateProfileFromLogColorSpaceA, :QWORD,:QWORD
PROTO64 external,CreateProfileFromLogColorSpaceW, :QWORD,:QWORD
PROTO64 external,DeleteColorTransform, :QWORD
PROTO64 external,DisassociateColorProfileFromDeviceA, :QWORD,:QWORD,:QWORD
PROTO64 external,DisassociateColorProfileFromDeviceW, :QWORD,:QWORD,:QWORD
PROTO64 external,EnumColorProfilesA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumColorProfilesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GenerateCopyFilePaths, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetCMMInfo, :QWORD,:QWORD
PROTO64 external,GetColorDirectoryA, :QWORD,:QWORD,:QWORD
PROTO64 external,GetColorDirectoryW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetColorProfileElement, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetColorProfileElementTag, :QWORD,:QWORD,:QWORD
PROTO64 external,GetColorProfileFromHandle, :QWORD,:QWORD,:QWORD
PROTO64 external,GetColorProfileHeader, :QWORD,:QWORD
PROTO64 external,GetCountColorProfileElements, :QWORD,:QWORD
PROTO64 external,GetNamedProfileInfo, :QWORD,:QWORD
PROTO64 external,GetPS2ColorRenderingDictionary, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetPS2ColorRenderingIntent, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetPS2ColorSpaceArray, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetStandardColorSpaceProfileA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetStandardColorSpaceProfileW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InstallColorProfileA, :QWORD,:QWORD
PROTO64 external,InstallColorProfileW, :QWORD,:QWORD
PROTO64 external,InternalGetDeviceConfig, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InternalGetPS2CSAFromLCS, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InternalGetPS2ColorRenderingDictionary, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InternalGetPS2ColorSpaceArray, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InternalGetPS2PreviewCRD, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InternalSetDeviceConfig, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IsColorProfileTagPresent, :QWORD,:QWORD,:QWORD
PROTO64 external,IsColorProfileValid, :QWORD,:QWORD
PROTO64 external,OpenColorProfileA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OpenColorProfileW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegisterCMMA, :QWORD,:QWORD,:QWORD
PROTO64 external,RegisterCMMW, :QWORD,:QWORD,:QWORD
PROTO64 external,SelectCMM, :QWORD
PROTO64 external,SetColorProfileElement, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetColorProfileElementReference, :QWORD,:QWORD,:QWORD
PROTO64 external,SetColorProfileElementSize, :QWORD,:QWORD,:QWORD
PROTO64 external,SetColorProfileHeader, :QWORD,:QWORD
PROTO64 external,SetStandardColorSpaceProfileA, :QWORD,:QWORD,:QWORD
PROTO64 external,SetStandardColorSpaceProfileW, :QWORD,:QWORD,:QWORD
PROTO64 external,SpoolerCopyFileEvent, :QWORD,:QWORD,:QWORD
PROTO64 external,TranslateBitmapBits, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TranslateColors, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UninstallColorProfileA, :QWORD,:QWORD,:QWORD
PROTO64 external,UninstallColorProfileW, :QWORD,:QWORD,:QWORD
PROTO64 external,UnregisterCMMA, :QWORD,:QWORD
PROTO64 external,UnregisterCMMW, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mscms.inc
echo -----------------------------------------
ENDIF

