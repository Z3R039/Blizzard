﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "Party_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenu.MainMenu_C
// 0x0220 (0x0430 - 0x0210)
class UMainMenu_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      AthenaPartyPrivacyButton;                          // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      BoostsButton;                                      // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_Content;                                    // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonCredits;                                     // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonNews;                                        // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonOutpostPermissions;                          // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChangeSubgameButton_C*                 ChangeSubgameButton;                               // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      CodeOfConduct;                                     // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ContextualHelpText;                                // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      DailyRewardsButton;                                // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ExitButton;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Feedback;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      FriendsListButton;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_8;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImagePartyInvite;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      InviteCodesButton;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                InviteCodesCountText;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaveButton_C*                         LeaveButton;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Legal;                                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      LogoutButton;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      MessagesButton;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PartyBarContainer;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      PartyInvites;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      PrivacyButton;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZoneContent;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      SettingsButton;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_IconButtonList;                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SocialButtonsVB;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USocialImportButton_C*                  SocialImportButton;                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      TestUIButton;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMessageCenterWidget_C*                 MessageCenter;                                     // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOptionsMenu_C*                         OptionsMenu;                                       // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnRequestShowFeedbackWidget;                       // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ULegalInfo_C*                           Legal_Widget;                                      // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*               OnboardingQuest;                                   // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          tutorialComplete_;                                 // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_369[0x7];                                      // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestScreen_C*                         QuestScreen;                                       // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPermissionsRoot_C*                     StormShieldPermissions;                            // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNews_C*                                NewsWidget;                                        // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShowFriendCodesSelection_C*            FriendCodesSelectionWindow;                        // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrivacyWidget_C*                       PrivacyWidget;                                     // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPartyFinder_C*                         PartyFinder;                                       // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FConfirmationDialogAction>      PrivacyConfirmOptions;                             // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FName                                   DeclineAction;                                     // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Public;                                            // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Friends;                                           // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Private;                                           // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          isMatchmaking;                                     // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D1[0x7];                                      // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFriendCode>                    FriendCodes;                                       // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortUITeamInfo*                        LocalTeam;                                         // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChangeSubgameButton_C*                 ChangeSubgameButton_0;                             // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnRequestShowSocialWidget;                         // 0x03F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftClassPtr<class UClass>                   CreditsClassRef;                                   // 0x0408(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MainMenu(int32 EntryPoint);
	void BndEvt__FriendsListButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_321_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_600_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_481_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__LeaveButton_K2Node_ComponentBoundEvent_144_Update_Visibility__DelegateSignature(bool Visibility_0);
	void Handle_Game_Mode_Hovered(class UCommonButton* Button);
	void Handle_Game_Mode_Unhovered(class UCommonButton* Button);
	void HandleChangeGameModeUnhovered();
	void HandleChangeGameModeHovered();
	void BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_186_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12276_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12223_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12172_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12121_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12072_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12023_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11976_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11929_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void BndEvt__MessagesButton_K2Node_ComponentBoundEvent_48_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__PartyInvites_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BoostsButton_K2Node_ComponentBoundEvent_184_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_328_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonNews_K2Node_ComponentBoundEvent_419_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonNews_K2Node_ComponentBoundEvent_459_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonNews_K2Node_ComponentBoundEvent_376_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_457_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_420_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__TestUIButton_K2Node_ComponentBoundEvent_189_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Feedback_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_134_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_250_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__LogoutButton_K2Node_ComponentBoundEvent_434_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__LogoutButton_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__LogoutButton_K2Node_ComponentBoundEvent_232_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Legal_K2Node_ComponentBoundEvent_643_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BindLeaveUnhovered();
	void BindLeaveHovered();
	void LeaveGameHovered(class UCommonButton* Button);
	void LeaveUnhovered(class UCommonButton* Button);
	void SetCenterWidget();
	void BndEvt__TestUIButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Feedback_K2Node_ComponentBoundEvent_626_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_584_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ExitButton_K2Node_ComponentBoundEvent_545_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ExitButton_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_467_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Legal_K2Node_ComponentBoundEvent_375_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Feedback_K2Node_ComponentBoundEvent_338_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__TestUIButton_K2Node_ComponentBoundEvent_1157_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__MessagesButton_K2Node_ComponentBoundEvent_1129_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_1102_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__MessagesButton_K2Node_ComponentBoundEvent_761_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Legal_K2Node_ComponentBoundEvent_146_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnLoaded_C98E19534FBAE9329EE3CBBEA98305BF(class UClass* Loaded);
	void DialogResult_5FDF347E45DFDFC5D3596B9DA0EB60E7(EFortDialogResult Result, class FName ResultName);
	void DialogResult_6DDAC27E47A3D5A11BE436A3ED3ADEA0(EFortDialogResult Result, class FName ResultName);
	void SetupTestUI();
	void InitializeMainMenu();
	void UpdateDescriptionText(const class FText& HelpText);
	void UpdateButtonStates();
	void ProcessPartyBar();
	void PushDailyRewards();
	void IsOutpostOwner(bool* OutpostOwner);
	void UpdatePrivacyButton(EPartyType Overide_Party_Type, bool Use_Overide_Party_Type);
	void SetPrivacyButtonData(class UTexture2D* Image, const class FText& Button_Text);
	void OpenPartyInvites();
	void OpenPartyPrivacy();
	void HandlePrivacySelected(EPartyType PartyPrivacyType, bool FriendsOfFriends);
	void HandleLocalPlayerStateChanged(struct FFortTeamMemberInfo& MemberState);
	void HandlePartyLeft();
	void HandleRemotePlayerStateChanged(const struct FFortTeamMemberInfo& NewMemberState);
	void HandleRemotePlayerRemoved(int32 RemovedIndex);
	void HandlePartybarUIFeatureChanged(EFortUIFeature Feature, EFortUIFeatureState FeatureState, EFortUIFeatureStateReason Reason);
	void HandlePartyJoined();
	void HandlePartyTypeChanged(EPartyType Party_Type);
	void HandleActiveInvitesAmountChanged(int32 ActiveInvitesAmount);
	void HandleMatchmakingComplete(EMatchmakingCompleteResult Result);
	void HandleLobbyStarted();
	void HandleLobbyDisconnected();
	void HandleMatchmakingStarted();
	void HandlePartyStateChanged(EFortPartyState New_State);
	void RefreshFriendCodesButton();
	void OnQueryUnredeemedFriendCodes(bool Success, TArray<struct FFriendCode>& FriendCodes_0);
	void GetTotalNumFriendCodes(int32* Num_Codes);
	void OnIssueFriendCodes(bool Success, struct FFriendCode& FriendCode);
	void ProcessFriendCodes();
	void BindDelegates();
	void Set_Icon_Button_List_Column_Width(bool IsUsingGamepad);
	void ConfigureSubGameWidgets();
	void RecenterIfHovered(class UWidget* InWidget);
	void SetButtonSize(bool UseLargeButtons);
	void UpdateFriendCodes();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_C">();
	}
	static class UMainMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenu_C>();
	}
};
static_assert(alignof(UMainMenu_C) == 0x000008, "Wrong alignment on UMainMenu_C");
static_assert(sizeof(UMainMenu_C) == 0x000430, "Wrong size on UMainMenu_C");
static_assert(offsetof(UMainMenu_C, UberGraphFrame) == 0x000210, "Member 'UMainMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, AthenaPartyPrivacyButton) == 0x000218, "Member 'UMainMenu_C::AthenaPartyPrivacyButton' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, BoostsButton) == 0x000220, "Member 'UMainMenu_C::BoostsButton' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, Border_Content) == 0x000228, "Member 'UMainMenu_C::Border_Content' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, ButtonCredits) == 0x000230, "Member 'UMainMenu_C::ButtonCredits' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, ButtonNews) == 0x000238, "Member 'UMainMenu_C::ButtonNews' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, ButtonOutpostPermissions) == 0x000240, "Member 'UMainMenu_C::ButtonOutpostPermissions' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, ChangeSubgameButton) == 0x000248, "Member 'UMainMenu_C::ChangeSubgameButton' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, CodeOfConduct) == 0x000250, "Member 'UMainMenu_C::CodeOfConduct' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, ContextualHelpText) == 0x000258, "Member 'UMainMenu_C::ContextualHelpText' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, DailyRewardsButton) == 0x000260, "Member 'UMainMenu_C::DailyRewardsButton' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, ExitButton) == 0x000268, "Member 'UMainMenu_C::ExitButton' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, Feedback) == 0x000270, "Member 'UMainMenu_C::Feedback' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, FriendsListButton) == 0x000278, "Member 'UMainMenu_C::FriendsListButton' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, Image_1) == 0x000280, "Member 'UMainMenu_C::Image_1' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, Image_2) == 0x000288, "Member 'UMainMenu_C::Image_2' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, Image_3) == 0x000290, "Member 'UMainMenu_C::Image_3' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, Image_4) == 0x000298, "Member 'UMainMenu_C::Image_4' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, Image_5) == 0x0002A0, "Member 'UMainMenu_C::Image_5' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, Image_6) == 0x0002A8, "Member 'UMainMenu_C::Image_6' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, Image_8) == 0x0002B0, "Member 'UMainMenu_C::Image_8' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, ImagePartyInvite) == 0x0002B8, "Member 'UMainMenu_C::ImagePartyInvite' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, InviteCodesButton) == 0x0002C0, "Member 'UMainMenu_C::InviteCodesButton' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, InviteCodesCountText) == 0x0002C8, "Member 'UMainMenu_C::InviteCodesCountText' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, LeaveButton) == 0x0002D0, "Member 'UMainMenu_C::LeaveButton' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, Legal) == 0x0002D8, "Member 'UMainMenu_C::Legal' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, LogoutButton) == 0x0002E0, "Member 'UMainMenu_C::LogoutButton' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, MessagesButton) == 0x0002E8, "Member 'UMainMenu_C::MessagesButton' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, PartyBarContainer) == 0x0002F0, "Member 'UMainMenu_C::PartyBarContainer' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, PartyInvites) == 0x0002F8, "Member 'UMainMenu_C::PartyInvites' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, PrivacyButton) == 0x000300, "Member 'UMainMenu_C::PrivacyButton' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, SafeZoneContent) == 0x000308, "Member 'UMainMenu_C::SafeZoneContent' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, SettingsButton) == 0x000310, "Member 'UMainMenu_C::SettingsButton' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, SizeBox_IconButtonList) == 0x000318, "Member 'UMainMenu_C::SizeBox_IconButtonList' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, SocialButtonsVB) == 0x000320, "Member 'UMainMenu_C::SocialButtonsVB' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, SocialImportButton) == 0x000328, "Member 'UMainMenu_C::SocialImportButton' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, TestUIButton) == 0x000330, "Member 'UMainMenu_C::TestUIButton' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, MessageCenter) == 0x000338, "Member 'UMainMenu_C::MessageCenter' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, OptionsMenu) == 0x000340, "Member 'UMainMenu_C::OptionsMenu' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, OnRequestShowFeedbackWidget) == 0x000348, "Member 'UMainMenu_C::OnRequestShowFeedbackWidget' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, Legal_Widget) == 0x000358, "Member 'UMainMenu_C::Legal_Widget' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, OnboardingQuest) == 0x000360, "Member 'UMainMenu_C::OnboardingQuest' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, tutorialComplete_) == 0x000368, "Member 'UMainMenu_C::tutorialComplete_' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, QuestScreen) == 0x000370, "Member 'UMainMenu_C::QuestScreen' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, StormShieldPermissions) == 0x000378, "Member 'UMainMenu_C::StormShieldPermissions' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, NewsWidget) == 0x000380, "Member 'UMainMenu_C::NewsWidget' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, FriendCodesSelectionWindow) == 0x000388, "Member 'UMainMenu_C::FriendCodesSelectionWindow' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, PrivacyWidget) == 0x000390, "Member 'UMainMenu_C::PrivacyWidget' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, PartyFinder) == 0x000398, "Member 'UMainMenu_C::PartyFinder' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, PrivacyConfirmOptions) == 0x0003A0, "Member 'UMainMenu_C::PrivacyConfirmOptions' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, DeclineAction) == 0x0003B0, "Member 'UMainMenu_C::DeclineAction' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, Public) == 0x0003B8, "Member 'UMainMenu_C::Public' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, Friends) == 0x0003C0, "Member 'UMainMenu_C::Friends' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, Private) == 0x0003C8, "Member 'UMainMenu_C::Private' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, isMatchmaking) == 0x0003D0, "Member 'UMainMenu_C::isMatchmaking' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, FriendCodes) == 0x0003D8, "Member 'UMainMenu_C::FriendCodes' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, LocalTeam) == 0x0003E8, "Member 'UMainMenu_C::LocalTeam' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, ChangeSubgameButton_0) == 0x0003F0, "Member 'UMainMenu_C::ChangeSubgameButton_0' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, OnRequestShowSocialWidget) == 0x0003F8, "Member 'UMainMenu_C::OnRequestShowSocialWidget' has a wrong offset!");
static_assert(offsetof(UMainMenu_C, CreditsClassRef) == 0x000408, "Member 'UMainMenu_C::CreditsClassRef' has a wrong offset!");

}

