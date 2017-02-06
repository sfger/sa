IFNDEF USERENV_INC
USERENV_INC equ <1>

PROTO64 external,AddDesktopItemA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AddDesktopItemW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AddItemA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AddItemW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ApplyGroupPolicy, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ApplySystemPolicyA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ApplySystemPolicyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CheckAccessForPolicyGeneration, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CheckXForestLogon, :QWORD
PROTO64 external,CopyProfileDirectoryA, :QWORD,:QWORD,:QWORD
PROTO64 external,CopyProfileDirectoryExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CopyProfileDirectoryExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CopyProfileDirectoryW, :QWORD,:QWORD,:QWORD
PROTO64 external,CopySystemProfile, :QWORD
PROTO64 external,CreateEnvironmentBlock, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateGroupA, :QWORD,:QWORD
PROTO64 external,CreateGroupExA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateGroupExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateGroupW, :QWORD,:QWORD
PROTO64 external,CreateLinkFileA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateLinkFileExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateLinkFileExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateLinkFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateURLFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateUserProfileA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateUserProfileExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateUserProfileExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateUserProfileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeleteDesktopItemA, :QWORD,:QWORD
PROTO64 external,DeleteDesktopItemW, :QWORD,:QWORD
PROTO64 external,DeleteGroupA, :QWORD,:QWORD
PROTO64 external,DeleteGroupW, :QWORD,:QWORD
PROTO64 external,DeleteItemA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeleteItemW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeleteLinkFileA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeleteLinkFileW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeleteProfileA, :QWORD,:QWORD,:QWORD
PROTO64 external,DeleteProfileW, :QWORD,:QWORD,:QWORD
PROTO64 external,DeleteURLFile, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DestroyEnvironmentBlock, :QWORD
PROTO64 external,DetermineProfilesLocation, :QWORD
PROTO64 external,EnterCriticalPolicySection, :QWORD
PROTO64 external,EnterUserProfileLock, :QWORD
PROTO64 external,ExpandEnvironmentStringsForUserA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ExpandEnvironmentStringsForUserW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ForceSyncFgPolicy, :QWORD
PROTO64 external,FreeGPOListA, :QWORD
PROTO64 external,FreeGPOListW, :QWORD
PROTO64 external,GenerateRsopPolicy, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetAllUsersProfileDirectoryA, :QWORD,:QWORD
PROTO64 external,GetAllUsersProfileDirectoryW, :QWORD,:QWORD
PROTO64 external,GetAppliedGPOListA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetAppliedGPOListW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetDefaultUserProfileDirectoryA, :QWORD,:QWORD
PROTO64 external,GetDefaultUserProfileDirectoryW, :QWORD,:QWORD
PROTO64 external,GetGPOListA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetGPOListW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetGroupPolicyNetworkName, :QWORD,:QWORD
PROTO64 external,GetNextFgPolicyRefreshInfo, :QWORD,:QWORD
PROTO64 external,GetPreviousFgPolicyRefreshInfo, :QWORD,:QWORD
PROTO64 external,GetProfileType, :QWORD
PROTO64 external,GetProfilesDirectoryA, :QWORD,:QWORD
PROTO64 external,GetProfilesDirectoryW, :QWORD,:QWORD
PROTO64 external,GetSystemTempDirectoryA, :QWORD,:QWORD
PROTO64 external,GetSystemTempDirectoryW, :QWORD,:QWORD
PROTO64 external,GetUserAppDataPathA, :QWORD,:QWORD
PROTO64 external,GetUserAppDataPathW, :QWORD,:QWORD
PROTO64 external,GetUserProfileDirFromSidA, :QWORD,:QWORD,:QWORD
PROTO64 external,GetUserProfileDirFromSidW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetUserProfileDirectoryA, :QWORD,:QWORD,:QWORD
PROTO64 external,GetUserProfileDirectoryW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetUserSid, :QWORD
PROTO64 external,InitializeProfiles, :QWORD
PROTO64 external,InitializeUserProfile, 
PROTO64 external,IsSyncForegroundPolicyRefresh, :QWORD,:QWORD
PROTO64 external,LeaveCriticalPolicySection, :QWORD
PROTO64 external,LeaveUserProfileLock, :QWORD
PROTO64 external,LoadUserProfileA, :QWORD,:QWORD
PROTO64 external,LoadUserProfileW, :QWORD,:QWORD
PROTO64 external,MigrateNT4ToNT5, 
PROTO64 external,PingComputer, :QWORD,:QWORD
PROTO64 external,ProcessGroupPolicyCompleted, :QWORD,:QWORD,:QWORD
PROTO64 external,ProcessGroupPolicyCompletedEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RefreshPolicy, :QWORD
PROTO64 external,RefreshPolicyEx, :QWORD,:QWORD
PROTO64 external,RegisterGPNotification, :QWORD,:QWORD
PROTO64 external,ResetUserSpecialFolderPaths, 
PROTO64 external,RsopAccessCheckByType, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RsopFileAccessCheck, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RsopLoggingEnabled, 
PROTO64 external,RsopResetPolicySettingStatus, :QWORD,:QWORD,:QWORD
PROTO64 external,RsopSetPolicySettingStatus, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SecureUserProfiles, 
PROTO64 external,SetNextFgPolicyRefreshInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,ShutdownGPOProcessing, :QWORD
PROTO64 external,SignalMachinePolicyForegroundProcessingDone, 
PROTO64 external,SignalUserPolicyForegroundProcessingDone, 
PROTO64 external,UnloadUserProfile, :QWORD,:QWORD
PROTO64 external,UnregisterGPNotification, :QWORD
PROTO64 external,WaitForMachinePolicyForegroundProcessing, 
PROTO64 external,WaitForUserPolicyForegroundProcessing, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file userenv.inc
echo -----------------------------------------
ENDIF

