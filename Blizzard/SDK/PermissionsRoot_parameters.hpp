﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PermissionsRoot

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function PermissionsRoot.PermissionsRoot_C.ExecuteUbergraph_PermissionsRoot
// 0x0028 (0x0028 - 0x0000)
struct PermissionsRoot_C_ExecuteUbergraph_PermissionsRoot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0008(0x0010)(NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(PermissionsRoot_C_ExecuteUbergraph_PermissionsRoot) == 0x000008, "Wrong alignment on PermissionsRoot_C_ExecuteUbergraph_PermissionsRoot");
static_assert(sizeof(PermissionsRoot_C_ExecuteUbergraph_PermissionsRoot) == 0x000028, "Wrong size on PermissionsRoot_C_ExecuteUbergraph_PermissionsRoot");
static_assert(offsetof(PermissionsRoot_C_ExecuteUbergraph_PermissionsRoot, EntryPoint) == 0x000000, "Member 'PermissionsRoot_C_ExecuteUbergraph_PermissionsRoot::EntryPoint' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_ExecuteUbergraph_PermissionsRoot, K2Node_MakeStruct_DataTableRowHandle) == 0x000008, "Member 'PermissionsRoot_C_ExecuteUbergraph_PermissionsRoot::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_ExecuteUbergraph_PermissionsRoot, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'PermissionsRoot_C_ExecuteUbergraph_PermissionsRoot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function PermissionsRoot.PermissionsRoot_C.RefreshOutpostInfo
// 0x05A0 (0x05A0 - 0x0000)
struct PermissionsRoot_C_RefreshOutpostInfo final
{
public:
	class FText                                   Outpost_DisplayName;                               // 0x0000(0x0018)(Edit, BlueprintVisible)
	class FText                                   StonewoodText;                                     // 0x0018(0x0018)(Edit, BlueprintVisible)
	class FText                                   Temp_text_Variable;                                // 0x0030(0x0018)(ConstParm)
	class FText                                   Temp_text_Variable1;                               // 0x0048(0x0018)(ConstParm)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortOutpostContext*                    CallFunc_GetContext_ReturnValue1;                  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetCurrentTheaterName_ReturnValue;        // 0x0070(0x0018)()
	int32                                         CallFunc_GetOutpostCoreLevel_ReturnValue;          // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0090(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00A8(0x0040)(HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0100(0x0018)()
	bool                                          CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue; // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x0120(0x0040)(HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue12;                 // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerOutpost*           K2Node_DynamicCast_AsFort_Player_Controller_Outpost; // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTeamMemberInfo                    CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo; // 0x0180(0x01A8)()
	bool                                          CallFunc_IsOutpostOwner_ReturnValue;               // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_329[0x7];                                      // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0330(0x0018)(ConstParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData12;            // 0x0348(0x0040)(HasGetValueTypeHash)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue123;                // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                    CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo1; // 0x0390(0x01A8)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData123;           // 0x0538(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array1;                           // 0x0578(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue1;                      // 0x0588(0x0018)()
};
static_assert(alignof(PermissionsRoot_C_RefreshOutpostInfo) == 0x000008, "Wrong alignment on PermissionsRoot_C_RefreshOutpostInfo");
static_assert(sizeof(PermissionsRoot_C_RefreshOutpostInfo) == 0x0005A0, "Wrong size on PermissionsRoot_C_RefreshOutpostInfo");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, Outpost_DisplayName) == 0x000000, "Member 'PermissionsRoot_C_RefreshOutpostInfo::Outpost_DisplayName' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, StonewoodText) == 0x000018, "Member 'PermissionsRoot_C_RefreshOutpostInfo::StonewoodText' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, Temp_text_Variable) == 0x000030, "Member 'PermissionsRoot_C_RefreshOutpostInfo::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, Temp_text_Variable1) == 0x000048, "Member 'PermissionsRoot_C_RefreshOutpostInfo::Temp_text_Variable1' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, CallFunc_GetContext_ReturnValue) == 0x000060, "Member 'PermissionsRoot_C_RefreshOutpostInfo::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, CallFunc_GetContext_ReturnValue1) == 0x000068, "Member 'PermissionsRoot_C_RefreshOutpostInfo::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, CallFunc_GetCurrentTheaterName_ReturnValue) == 0x000070, "Member 'PermissionsRoot_C_RefreshOutpostInfo::CallFunc_GetCurrentTheaterName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, CallFunc_GetOutpostCoreLevel_ReturnValue) == 0x000088, "Member 'PermissionsRoot_C_RefreshOutpostInfo::CallFunc_GetOutpostCoreLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, CallFunc_Conv_IntToText_ReturnValue) == 0x000090, "Member 'PermissionsRoot_C_RefreshOutpostInfo::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, K2Node_MakeStruct_FormatArgumentData) == 0x0000A8, "Member 'PermissionsRoot_C_RefreshOutpostInfo::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, Temp_bool_Variable) == 0x0000E8, "Member 'PermissionsRoot_C_RefreshOutpostInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, K2Node_MakeArray_Array) == 0x0000F0, "Member 'PermissionsRoot_C_RefreshOutpostInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, CallFunc_Format_ReturnValue) == 0x000100, "Member 'PermissionsRoot_C_RefreshOutpostInfo::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue) == 0x000118, "Member 'PermissionsRoot_C_RefreshOutpostInfo::CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, K2Node_MakeStruct_FormatArgumentData1) == 0x000120, "Member 'PermissionsRoot_C_RefreshOutpostInfo::K2Node_MakeStruct_FormatArgumentData1' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, CallFunc_GetOwningPlayer_ReturnValue) == 0x000160, "Member 'PermissionsRoot_C_RefreshOutpostInfo::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, CallFunc_GetContext_ReturnValue12) == 0x000168, "Member 'PermissionsRoot_C_RefreshOutpostInfo::CallFunc_GetContext_ReturnValue12' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, K2Node_DynamicCast_AsFort_Player_Controller_Outpost) == 0x000170, "Member 'PermissionsRoot_C_RefreshOutpostInfo::K2Node_DynamicCast_AsFort_Player_Controller_Outpost' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, K2Node_DynamicCast_bSuccess) == 0x000178, "Member 'PermissionsRoot_C_RefreshOutpostInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo) == 0x000180, "Member 'PermissionsRoot_C_RefreshOutpostInfo::CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, CallFunc_IsOutpostOwner_ReturnValue) == 0x000328, "Member 'PermissionsRoot_C_RefreshOutpostInfo::CallFunc_IsOutpostOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, K2Node_Select_Default) == 0x000330, "Member 'PermissionsRoot_C_RefreshOutpostInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, K2Node_MakeStruct_FormatArgumentData12) == 0x000348, "Member 'PermissionsRoot_C_RefreshOutpostInfo::K2Node_MakeStruct_FormatArgumentData12' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, CallFunc_GetContext_ReturnValue123) == 0x000388, "Member 'PermissionsRoot_C_RefreshOutpostInfo::CallFunc_GetContext_ReturnValue123' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo1) == 0x000390, "Member 'PermissionsRoot_C_RefreshOutpostInfo::CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo1' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, K2Node_MakeStruct_FormatArgumentData123) == 0x000538, "Member 'PermissionsRoot_C_RefreshOutpostInfo::K2Node_MakeStruct_FormatArgumentData123' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, K2Node_MakeArray_Array1) == 0x000578, "Member 'PermissionsRoot_C_RefreshOutpostInfo::K2Node_MakeArray_Array1' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_RefreshOutpostInfo, CallFunc_Format_ReturnValue1) == 0x000588, "Member 'PermissionsRoot_C_RefreshOutpostInfo::CallFunc_Format_ReturnValue1' has a wrong offset!");

// Function PermissionsRoot.PermissionsRoot_C.Input Handle Back
// 0x0010 (0x0010 - 0x0000)
struct PermissionsRoot_C_Input_Handle_Back final
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PermissionsRoot_C_Input_Handle_Back) == 0x000008, "Wrong alignment on PermissionsRoot_C_Input_Handle_Back");
static_assert(sizeof(PermissionsRoot_C_Input_Handle_Back) == 0x000010, "Wrong size on PermissionsRoot_C_Input_Handle_Back");
static_assert(offsetof(PermissionsRoot_C_Input_Handle_Back, Passthrough) == 0x000000, "Member 'PermissionsRoot_C_Input_Handle_Back::Passthrough' has a wrong offset!");
static_assert(offsetof(PermissionsRoot_C_Input_Handle_Back, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'PermissionsRoot_C_Input_Handle_Back::CallFunc_GetContext_ReturnValue' has a wrong offset!");

}

