﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InvitePopupMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function InvitePopupMenu.InvitePopupMenu_C.ExecuteUbergraph_InvitePopupMenu
// 0x0038 (0x0038 - 0x0000)
struct InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanInviteToParty_CanInviteToParty;        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button12;               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button1;                // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanAddAsFriend_bCanFriendPlayer;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu) == 0x000008, "Wrong alignment on InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu");
static_assert(sizeof(InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu) == 0x000038, "Wrong size on InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu");
static_assert(offsetof(InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu, EntryPoint) == 0x000000, "Member 'InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu, CallFunc_CanInviteToParty_CanInviteToParty) == 0x000004, "Member 'InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu::CallFunc_CanInviteToParty_CanInviteToParty' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu, K2Node_ComponentBoundEvent_Button12) == 0x000008, "Member 'InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu::K2Node_ComponentBoundEvent_Button12' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu, K2Node_ComponentBoundEvent_Button1) == 0x000010, "Member 'InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu::K2Node_ComponentBoundEvent_Button1' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu, K2Node_ComponentBoundEvent_Button) == 0x000018, "Member 'InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu, CallFunc_GetUINavigationManager_ReturnValue) == 0x000020, "Member 'InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu, CallFunc_GetChildAt_ReturnValue) == 0x000028, "Member 'InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu, CallFunc_CanAddAsFriend_bCanFriendPlayer) == 0x000030, "Member 'InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu::CallFunc_CanAddAsFriend_bCanFriendPlayer' has a wrong offset!");

// Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct InvitePopupMenu_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InvitePopupMenu_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on InvitePopupMenu_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(InvitePopupMenu_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on InvitePopupMenu_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(InvitePopupMenu_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'InvitePopupMenu_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct InvitePopupMenu_C_BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InvitePopupMenu_C_BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on InvitePopupMenu_C_BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(InvitePopupMenu_C_BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on InvitePopupMenu_C_BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(InvitePopupMenu_C_BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'InvitePopupMenu_C_BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct InvitePopupMenu_C_BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InvitePopupMenu_C_BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on InvitePopupMenu_C_BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(InvitePopupMenu_C_BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on InvitePopupMenu_C_BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(InvitePopupMenu_C_BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'InvitePopupMenu_C_BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function InvitePopupMenu.InvitePopupMenu_C.CanInviteToParty
// 0x0040 (0x0040 - 0x0000)
struct InvitePopupMenu_C_CanInviteToParty final
{
public:
	bool                                          CanInviteToParty_0;                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       CallFunc_GetNetId_NetId;                           // 0x0008(0x0028)(HasGetValueTypeHash)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortPartyRestriction                         CallFunc_CanBeInvitedNetID_FailReason;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanBeInvitedNetID_ReturnValue;            // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InvitePopupMenu_C_CanInviteToParty) == 0x000008, "Wrong alignment on InvitePopupMenu_C_CanInviteToParty");
static_assert(sizeof(InvitePopupMenu_C_CanInviteToParty) == 0x000040, "Wrong size on InvitePopupMenu_C_CanInviteToParty");
static_assert(offsetof(InvitePopupMenu_C_CanInviteToParty, CanInviteToParty_0) == 0x000000, "Member 'InvitePopupMenu_C_CanInviteToParty::CanInviteToParty_0' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_CanInviteToParty, CallFunc_GetNetId_NetId) == 0x000008, "Member 'InvitePopupMenu_C_CanInviteToParty::CallFunc_GetNetId_NetId' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_CanInviteToParty, CallFunc_GetContext_ReturnValue) == 0x000030, "Member 'InvitePopupMenu_C_CanInviteToParty::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_CanInviteToParty, CallFunc_CanBeInvitedNetID_FailReason) == 0x000038, "Member 'InvitePopupMenu_C_CanInviteToParty::CallFunc_CanBeInvitedNetID_FailReason' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_CanInviteToParty, CallFunc_CanBeInvitedNetID_ReturnValue) == 0x000039, "Member 'InvitePopupMenu_C_CanInviteToParty::CallFunc_CanBeInvitedNetID_ReturnValue' has a wrong offset!");

// Function InvitePopupMenu.InvitePopupMenu_C.CanAddAsFriend
// 0x0040 (0x0040 - 0x0000)
struct InvitePopupMenu_C_CanAddAsFriend final
{
public:
	bool                                          bCanFriendPlayer;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortFriendRequestStatus                      Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable1;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable12;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable123;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       CallFunc_GetNetId_NetId;                           // 0x0010(0x0028)(HasGetValueTypeHash)
	EFortFriendRequestStatus                      CallFunc_GetFriendRequestStatusForPlayer_ReturnValue; // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InvitePopupMenu_C_CanAddAsFriend) == 0x000008, "Wrong alignment on InvitePopupMenu_C_CanAddAsFriend");
static_assert(sizeof(InvitePopupMenu_C_CanAddAsFriend) == 0x000040, "Wrong size on InvitePopupMenu_C_CanAddAsFriend");
static_assert(offsetof(InvitePopupMenu_C_CanAddAsFriend, bCanFriendPlayer) == 0x000000, "Member 'InvitePopupMenu_C_CanAddAsFriend::bCanFriendPlayer' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_CanAddAsFriend, Temp_byte_Variable) == 0x000001, "Member 'InvitePopupMenu_C_CanAddAsFriend::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_CanAddAsFriend, Temp_bool_Variable) == 0x000002, "Member 'InvitePopupMenu_C_CanAddAsFriend::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_CanAddAsFriend, Temp_bool_Variable1) == 0x000003, "Member 'InvitePopupMenu_C_CanAddAsFriend::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_CanAddAsFriend, Temp_bool_Variable12) == 0x000004, "Member 'InvitePopupMenu_C_CanAddAsFriend::Temp_bool_Variable12' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_CanAddAsFriend, Temp_bool_Variable123) == 0x000005, "Member 'InvitePopupMenu_C_CanAddAsFriend::Temp_bool_Variable123' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_CanAddAsFriend, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'InvitePopupMenu_C_CanAddAsFriend::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_CanAddAsFriend, CallFunc_GetNetId_NetId) == 0x000010, "Member 'InvitePopupMenu_C_CanAddAsFriend::CallFunc_GetNetId_NetId' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_CanAddAsFriend, CallFunc_GetFriendRequestStatusForPlayer_ReturnValue) == 0x000038, "Member 'InvitePopupMenu_C_CanAddAsFriend::CallFunc_GetFriendRequestStatusForPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_CanAddAsFriend, K2Node_Select_Default) == 0x000039, "Member 'InvitePopupMenu_C_CanAddAsFriend::K2Node_Select_Default' has a wrong offset!");

// Function InvitePopupMenu.InvitePopupMenu_C.InvitePlayerAsFriend
// 0x0078 (0x0078 - 0x0000)
struct InvitePopupMenu_C_InvitePlayerAsFriend final
{
public:
	struct FUniqueNetIdRepl                       CallFunc_GetNetId_NetId;                           // 0x0000(0x0028)(HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       CallFunc_GetNetId_NetId1;                          // 0x0028(0x0028)(HasGetValueTypeHash)
	class UResults_TeleportPadPlayer_C*           K2Node_DynamicCast_AsResults_Teleport_Pad_Player;  // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(InvitePopupMenu_C_InvitePlayerAsFriend) == 0x000008, "Wrong alignment on InvitePopupMenu_C_InvitePlayerAsFriend");
static_assert(sizeof(InvitePopupMenu_C_InvitePlayerAsFriend) == 0x000078, "Wrong size on InvitePopupMenu_C_InvitePlayerAsFriend");
static_assert(offsetof(InvitePopupMenu_C_InvitePlayerAsFriend, CallFunc_GetNetId_NetId) == 0x000000, "Member 'InvitePopupMenu_C_InvitePlayerAsFriend::CallFunc_GetNetId_NetId' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_InvitePlayerAsFriend, CallFunc_GetNetId_NetId1) == 0x000028, "Member 'InvitePopupMenu_C_InvitePlayerAsFriend::CallFunc_GetNetId_NetId1' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_InvitePlayerAsFriend, K2Node_DynamicCast_AsResults_Teleport_Pad_Player) == 0x000050, "Member 'InvitePopupMenu_C_InvitePlayerAsFriend::K2Node_DynamicCast_AsResults_Teleport_Pad_Player' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_InvitePlayerAsFriend, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'InvitePopupMenu_C_InvitePlayerAsFriend::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_InvitePlayerAsFriend, CallFunc_GetContext_ReturnValue) == 0x000060, "Member 'InvitePopupMenu_C_InvitePlayerAsFriend::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_InvitePlayerAsFriend, CallFunc_Conv_TextToString_ReturnValue) == 0x000068, "Member 'InvitePopupMenu_C_InvitePlayerAsFriend::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function InvitePopupMenu.InvitePopupMenu_C.InvitePlayerToParty
// 0x0030 (0x0030 - 0x0000)
struct InvitePopupMenu_C_InvitePlayerToParty final
{
public:
	struct FUniqueNetIdRepl                       CallFunc_GetNetId_NetId;                           // 0x0000(0x0028)(HasGetValueTypeHash)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InvitePopupMenu_C_InvitePlayerToParty) == 0x000008, "Wrong alignment on InvitePopupMenu_C_InvitePlayerToParty");
static_assert(sizeof(InvitePopupMenu_C_InvitePlayerToParty) == 0x000030, "Wrong size on InvitePopupMenu_C_InvitePlayerToParty");
static_assert(offsetof(InvitePopupMenu_C_InvitePlayerToParty, CallFunc_GetNetId_NetId) == 0x000000, "Member 'InvitePopupMenu_C_InvitePlayerToParty::CallFunc_GetNetId_NetId' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_InvitePlayerToParty, CallFunc_GetContext_ReturnValue) == 0x000028, "Member 'InvitePopupMenu_C_InvitePlayerToParty::CallFunc_GetContext_ReturnValue' has a wrong offset!");

// Function InvitePopupMenu.InvitePopupMenu_C.InitializeValues
// 0x0068 (0x0068 - 0x0000)
struct InvitePopupMenu_C_InitializeValues final
{
public:
	struct FUniqueNetIdRepl                       InUniqueNetId;                                     // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       InConsoleNetId;                                    // 0x0028(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FText                                   InPlayerName;                                      // 0x0050(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(InvitePopupMenu_C_InitializeValues) == 0x000008, "Wrong alignment on InvitePopupMenu_C_InitializeValues");
static_assert(sizeof(InvitePopupMenu_C_InitializeValues) == 0x000068, "Wrong size on InvitePopupMenu_C_InitializeValues");
static_assert(offsetof(InvitePopupMenu_C_InitializeValues, InUniqueNetId) == 0x000000, "Member 'InvitePopupMenu_C_InitializeValues::InUniqueNetId' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_InitializeValues, InConsoleNetId) == 0x000028, "Member 'InvitePopupMenu_C_InitializeValues::InConsoleNetId' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_InitializeValues, InPlayerName) == 0x000050, "Member 'InvitePopupMenu_C_InitializeValues::InPlayerName' has a wrong offset!");

// Function InvitePopupMenu.InvitePopupMenu_C.GetNetId
// 0x0030 (0x0030 - 0x0000)
struct InvitePopupMenu_C_GetNetId final
{
public:
	struct FUniqueNetIdRepl                       NetId;                                             // 0x0000(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	bool                                          CallFunc_IsTencentBuild_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsConsolePlatform_ReturnValue;            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InvitePopupMenu_C_GetNetId) == 0x000008, "Wrong alignment on InvitePopupMenu_C_GetNetId");
static_assert(sizeof(InvitePopupMenu_C_GetNetId) == 0x000030, "Wrong size on InvitePopupMenu_C_GetNetId");
static_assert(offsetof(InvitePopupMenu_C_GetNetId, NetId) == 0x000000, "Member 'InvitePopupMenu_C_GetNetId::NetId' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_GetNetId, CallFunc_IsTencentBuild_ReturnValue) == 0x000028, "Member 'InvitePopupMenu_C_GetNetId::CallFunc_IsTencentBuild_ReturnValue' has a wrong offset!");
static_assert(offsetof(InvitePopupMenu_C_GetNetId, CallFunc_IsConsolePlatform_ReturnValue) == 0x000029, "Member 'InvitePopupMenu_C_GetNetId::CallFunc_IsConsolePlatform_ReturnValue' has a wrong offset!");

}

