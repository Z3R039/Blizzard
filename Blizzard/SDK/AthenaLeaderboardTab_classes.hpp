﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLeaderboardTab

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaLeaderboardTab.AthenaLeaderboardTab_C
// 0x00A8 (0x0598 - 0x04F0)
class UAthenaLeaderboardTab_C final : public UAthenaLeaderboardScreenBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F0(0x0008)(Transient, DuplicateTransient)
	class UWidgetSwitcher*                        EnableWidgetSwitcher;                              // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBContentMain;                                     // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaderboardHeaderRowWidget_C*          LeaderboardHeaderRow;                              // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaderboardListView_C*                 LeaderboardListView;                               // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  LeaderboardSwitcher;                               // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaderboardThrobber_C*                 LeaderboardThrobber;                               // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaderboardRowWidget_C*                LocalUserRow;                                      // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       NoDataMessageText;                                 // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerRankEmblem_C*                    PlayerRankEmblem;                                  // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               QueryError;                                        // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       QueryErrorMessageText;                             // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ResetTimeBox;                                      // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBFriendsOnly;                                     // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBNoData;                                          // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    PlaylistChange;                                    // 0x0568(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    FriendTypeChange;                                  // 0x0578(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                           QueryTimerHandle;                                  // 0x0588(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class USoundBase*                             OnQueryFinishedSound;                              // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaLeaderboardTab(int32 EntryPoint);
	void BndEvt__LeaderboardTypeRotator_K2Node_ComponentBoundEvent_399_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__MatchRotator_K2Node_ComponentBoundEvent_366_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void OnQueryStarted();
	void OnQueryFinished();
	void OnDeactivated();
	void OnUpdateListHeader(const struct FAthenaPlaylistLeaderboardData& PlaylistTabData);
	void OnUpdateLeaderboardListUI(bool bWasSuccessful, class UFortLeaderboardRowProxyInstance* LocalUserRow_0, const class FText& QueryErrorStr);
	void OnUpdateTabButtonText(class UCommonButton* Button, const struct FAthenaPlaylistLeaderboardData& PlaylistTabData);
	void BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent_57_OnTabButtonRemoved__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void BndEvt__FriendsRotator_K2Node_ComponentBoundEvent_63_OnRotated__DelegateSignature(int32 Value);
	void BndEvt__MatchRotator_K2Node_ComponentBoundEvent_39_OnRotated__DelegateSignature(int32 Value);
	void BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void Construct();
	void BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent_189_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void OnPlaylistChangeGamepad(bool* bCommitted);
	void OnFriendTypeChangeGamepad(bool* bCommitted);
	void OnQueryStateChanged(bool bQueryInProgress);
	void OnShowQueryThrobber();
	void ToggleDisabledTabVisuals(bool bShouldBeDisabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaLeaderboardTab_C">();
	}
	static class UAthenaLeaderboardTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaLeaderboardTab_C>();
	}
};
static_assert(alignof(UAthenaLeaderboardTab_C) == 0x000008, "Wrong alignment on UAthenaLeaderboardTab_C");
static_assert(sizeof(UAthenaLeaderboardTab_C) == 0x000598, "Wrong size on UAthenaLeaderboardTab_C");
static_assert(offsetof(UAthenaLeaderboardTab_C, UberGraphFrame) == 0x0004F0, "Member 'UAthenaLeaderboardTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTab_C, EnableWidgetSwitcher) == 0x0004F8, "Member 'UAthenaLeaderboardTab_C::EnableWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTab_C, HBContentMain) == 0x000500, "Member 'UAthenaLeaderboardTab_C::HBContentMain' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTab_C, LeaderboardHeaderRow) == 0x000508, "Member 'UAthenaLeaderboardTab_C::LeaderboardHeaderRow' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTab_C, LeaderboardListView) == 0x000510, "Member 'UAthenaLeaderboardTab_C::LeaderboardListView' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTab_C, LeaderboardSwitcher) == 0x000518, "Member 'UAthenaLeaderboardTab_C::LeaderboardSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTab_C, LeaderboardThrobber) == 0x000520, "Member 'UAthenaLeaderboardTab_C::LeaderboardThrobber' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTab_C, LocalUserRow) == 0x000528, "Member 'UAthenaLeaderboardTab_C::LocalUserRow' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTab_C, NoDataMessageText) == 0x000530, "Member 'UAthenaLeaderboardTab_C::NoDataMessageText' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTab_C, PlayerRankEmblem) == 0x000538, "Member 'UAthenaLeaderboardTab_C::PlayerRankEmblem' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTab_C, QueryError) == 0x000540, "Member 'UAthenaLeaderboardTab_C::QueryError' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTab_C, QueryErrorMessageText) == 0x000548, "Member 'UAthenaLeaderboardTab_C::QueryErrorMessageText' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTab_C, ResetTimeBox) == 0x000550, "Member 'UAthenaLeaderboardTab_C::ResetTimeBox' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTab_C, VBFriendsOnly) == 0x000558, "Member 'UAthenaLeaderboardTab_C::VBFriendsOnly' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTab_C, VBNoData) == 0x000560, "Member 'UAthenaLeaderboardTab_C::VBNoData' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTab_C, PlaylistChange) == 0x000568, "Member 'UAthenaLeaderboardTab_C::PlaylistChange' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTab_C, FriendTypeChange) == 0x000578, "Member 'UAthenaLeaderboardTab_C::FriendTypeChange' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTab_C, QueryTimerHandle) == 0x000588, "Member 'UAthenaLeaderboardTab_C::QueryTimerHandle' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTab_C, OnQueryFinishedSound) == 0x000590, "Member 'UAthenaLeaderboardTab_C::OnQueryFinishedSound' has a wrong offset!");

}

