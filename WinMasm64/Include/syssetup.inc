IFNDEF SYSSETUP_INC
SYSSETUP_INC equ <1>

PROTO64 external,AsrAddSifEntryA, :QWORD,:QWORD,:QWORD
PROTO64 external,AsrAddSifEntryW, :QWORD,:QWORD,:QWORD
PROTO64 external,AsrCreateStateFileA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AsrCreateStateFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AsrFreeContext, :QWORD
PROTO64 external,AsrRestorePlugPlayRegistryData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AsrpGetLocalDiskInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AsrpGetLocalVolumeInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AsrpRestoreNonCriticalDisksW, :QWORD,:QWORD
PROTO64 external,CdromPropPageProvider, :QWORD,:QWORD,:QWORD
PROTO64 external,ComputerClassInstaller, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateLocalAdminAccount, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateLocalAdminAccountEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateLocalUserAccount, :QWORD,:QWORD,:QWORD
PROTO64 external,CriticalDeviceCoInstaller, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DevInstallW, :QWORD,:QWORD
PROTO64 external,DeviceBayClassInstaller, :QWORD,:QWORD,:QWORD
PROTO64 external,DiskPropPageProvider, :QWORD,:QWORD,:QWORD
PROTO64 external,DoInstallComponentInfs, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EisaUpHalCoInstaller, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EisaUpHalPropPageProvider, :QWORD,:QWORD,:QWORD
PROTO64 external,GenerateName, :QWORD,:QWORD
PROTO64 external,HdcClassInstaller, :QWORD,:QWORD,:QWORD
PROTO64 external,InitializeSetupLog, :QWORD
PROTO64 external,InstallWindowsNt, :QWORD,:QWORD
PROTO64 external,InvokeExternalApplicationEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,KeyboardClassInstaller, :QWORD,:QWORD,:QWORD
PROTO64 external,LegacyDriverPropPageProvider, :QWORD,:QWORD,:QWORD
PROTO64 external,MigrateExceptionPackages, :QWORD,:QWORD,:QWORD
PROTO64 external,MouseClassInstaller, :QWORD,:QWORD,:QWORD
PROTO64 external,NtApmClassInstaller, :QWORD,:QWORD,:QWORD
PROTO64 external,OpkCheckVersion, :QWORD,:QWORD
PROTO64 external,PS2MousePropPageProvider, :QWORD,:QWORD,:QWORD
PROTO64 external,PnPInitializationThread, :QWORD
PROTO64 external,PrepareForAudit, 
PROTO64 external,RepairStartMenuItems, 
PROTO64 external,RunOEMExtraTasks, 
PROTO64 external,ScsiClassInstaller, :QWORD,:QWORD,:QWORD
PROTO64 external,SetAccountsDomainSid, :QWORD,:QWORD
PROTO64 external,SetupAddOrRemoveTestCertificate, :QWORD,:QWORD
PROTO64 external,SetupChangeFontSize, :QWORD,:QWORD
PROTO64 external,SetupChangeLocale, :QWORD,:QWORD
PROTO64 external,SetupChangeLocaleEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetupCreateOptionalComponentsPage, :QWORD,:QWORD
PROTO64 external,SetupDestroyLanguageList, :QWORD,:QWORD
PROTO64 external,SetupDestroyPhoneList, 
PROTO64 external,SetupEnumerateRegisteredOsComponents, :QWORD,:QWORD
PROTO64 external,SetupExtendPartition, :QWORD,:QWORD
PROTO64 external,SetupGetGeoOptions, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetupGetKeyboardOptions, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetupGetLocaleOptions, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetupGetProductType, :QWORD,:QWORD
PROTO64 external,SetupGetSetupInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetupGetValidEula, :QWORD,:QWORD
PROTO64 external,SetupInfObjectInstallActionW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetupInstallCatalog, :QWORD
PROTO64 external,SetupMapTapiToIso, :QWORD,:QWORD,:QWORD
PROTO64 external,SetupOobeBnk, :QWORD
PROTO64 external,SetupOobeCleanup, :QWORD
PROTO64 external,SetupOobeInitDebugLog, 
PROTO64 external,SetupOobeInitPostServices, :QWORD
PROTO64 external,SetupOobeInitPreServices, :QWORD
PROTO64 external,SetupPidGen3, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetupQueryRegisteredOsComponent, :QWORD,:QWORD,:QWORD
PROTO64 external,SetupQueryRegisteredOsComponentsOrder, :QWORD,:QWORD
PROTO64 external,SetupReadPhoneList, :QWORD
PROTO64 external,SetupRegisterOsComponent, :QWORD,:QWORD
PROTO64 external,SetupSetAdminPassword, :QWORD,:QWORD
PROTO64 external,SetupSetDisplay, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetupSetIntlOptions, :QWORD,:QWORD,:QWORD
PROTO64 external,SetupSetRegisteredOsComponentsOrder, :QWORD,:QWORD
PROTO64 external,SetupSetSetupInfo, :QWORD,:QWORD
PROTO64 external,SetupShellSettings, :QWORD,:QWORD
PROTO64 external,SetupStartService, :QWORD,:QWORD
PROTO64 external,SetupUnRegisterOsComponent, :QWORD
PROTO64 external,StorageCoInstaller, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SystemUpdateUserProfileDirectory, :QWORD
PROTO64 external,TapeClassInstaller, :QWORD,:QWORD,:QWORD
PROTO64 external,TapePropPageProvider, :QWORD,:QWORD,:QWORD
PROTO64 external,TerminateSetupLog, :QWORD
PROTO64 external,UpdatePnpDeviceDrivers, 
PROTO64 external,UpgradePrinters, 
PROTO64 external,ViewSetupActionLog, :QWORD,:QWORD,:QWORD
PROTO64 external,VolumeClassInstaller, :QWORD,:QWORD,:QWORD
PROTO64 external,pSetuplogSfcError, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file syssetup.inc
echo -----------------------------------------
ENDIF

