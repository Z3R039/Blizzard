﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatItemLarge

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function StatItemLarge.StatItemLarge_C.ExecuteUbergraph_StatItemLarge
// 0x000C (0x000C - 0x0000)
struct StatItemLarge_C_ExecuteUbergraph_StatItemLarge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Delta;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StatItemLarge_C_ExecuteUbergraph_StatItemLarge) == 0x000004, "Wrong alignment on StatItemLarge_C_ExecuteUbergraph_StatItemLarge");
static_assert(sizeof(StatItemLarge_C_ExecuteUbergraph_StatItemLarge) == 0x00000C, "Wrong size on StatItemLarge_C_ExecuteUbergraph_StatItemLarge");
static_assert(offsetof(StatItemLarge_C_ExecuteUbergraph_StatItemLarge, EntryPoint) == 0x000000, "Member 'StatItemLarge_C_ExecuteUbergraph_StatItemLarge::EntryPoint' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_ExecuteUbergraph_StatItemLarge, K2Node_Event_Delta) == 0x000004, "Member 'StatItemLarge_C_ExecuteUbergraph_StatItemLarge::K2Node_Event_Delta' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_ExecuteUbergraph_StatItemLarge, K2Node_Event_IsDesignTime) == 0x000008, "Member 'StatItemLarge_C_ExecuteUbergraph_StatItemLarge::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function StatItemLarge.StatItemLarge_C.ValueChanged
// 0x0004 (0x0004 - 0x0000)
struct StatItemLarge_C_ValueChanged final
{
public:
	float                                         Delta;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatItemLarge_C_ValueChanged) == 0x000004, "Wrong alignment on StatItemLarge_C_ValueChanged");
static_assert(sizeof(StatItemLarge_C_ValueChanged) == 0x000004, "Wrong size on StatItemLarge_C_ValueChanged");
static_assert(offsetof(StatItemLarge_C_ValueChanged, Delta) == 0x000000, "Member 'StatItemLarge_C_ValueChanged::Delta' has a wrong offset!");

// Function StatItemLarge.StatItemLarge_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct StatItemLarge_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StatItemLarge_C_PreConstruct) == 0x000001, "Wrong alignment on StatItemLarge_C_PreConstruct");
static_assert(sizeof(StatItemLarge_C_PreConstruct) == 0x000001, "Wrong size on StatItemLarge_C_PreConstruct");
static_assert(offsetof(StatItemLarge_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'StatItemLarge_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function StatItemLarge.StatItemLarge_C.GetLocalPlayerId
// 0x0068 (0x0068 - 0x0000)
struct StatItemLarge_C_GetLocalPlayerId final
{
public:
	struct FUniqueNetIdRepl                       LocalPlayerNetId;                                  // 0x0000(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerState*                       K2Node_DynamicCast_AsFort_Player_State;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       CallFunc_GetUniqueID_ReturnValue;                  // 0x0040(0x0028)(HasGetValueTypeHash)
};
static_assert(alignof(StatItemLarge_C_GetLocalPlayerId) == 0x000008, "Wrong alignment on StatItemLarge_C_GetLocalPlayerId");
static_assert(sizeof(StatItemLarge_C_GetLocalPlayerId) == 0x000068, "Wrong size on StatItemLarge_C_GetLocalPlayerId");
static_assert(offsetof(StatItemLarge_C_GetLocalPlayerId, LocalPlayerNetId) == 0x000000, "Member 'StatItemLarge_C_GetLocalPlayerId::LocalPlayerNetId' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_GetLocalPlayerId, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'StatItemLarge_C_GetLocalPlayerId::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_GetLocalPlayerId, K2Node_DynamicCast_AsFort_Player_State) == 0x000030, "Member 'StatItemLarge_C_GetLocalPlayerId::K2Node_DynamicCast_AsFort_Player_State' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_GetLocalPlayerId, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'StatItemLarge_C_GetLocalPlayerId::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_GetLocalPlayerId, CallFunc_GetUniqueID_ReturnValue) == 0x000040, "Member 'StatItemLarge_C_GetLocalPlayerId::CallFunc_GetUniqueID_ReturnValue' has a wrong offset!");

// Function StatItemLarge.StatItemLarge_C.UpdateDisplayData
// 0x0098 (0x0098 - 0x0000)
struct StatItemLarge_C_UpdateDisplayData final
{
public:
	EFortStatValueDisplayType                     DisplayState;                                      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBuffState                                BuffState;                                         // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NewValue;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   DisplayName;                                       // 0x0008(0x0018)(Edit, BlueprintVisible)
	float                                         CurrentValue;                                      // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortDisplayAttribute                  CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute; // 0x0028(0x0070)()
};
static_assert(alignof(StatItemLarge_C_UpdateDisplayData) == 0x000008, "Wrong alignment on StatItemLarge_C_UpdateDisplayData");
static_assert(sizeof(StatItemLarge_C_UpdateDisplayData) == 0x000098, "Wrong size on StatItemLarge_C_UpdateDisplayData");
static_assert(offsetof(StatItemLarge_C_UpdateDisplayData, DisplayState) == 0x000000, "Member 'StatItemLarge_C_UpdateDisplayData::DisplayState' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateDisplayData, BuffState) == 0x000001, "Member 'StatItemLarge_C_UpdateDisplayData::BuffState' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateDisplayData, NewValue) == 0x000004, "Member 'StatItemLarge_C_UpdateDisplayData::NewValue' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateDisplayData, DisplayName) == 0x000008, "Member 'StatItemLarge_C_UpdateDisplayData::DisplayName' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateDisplayData, CurrentValue) == 0x000020, "Member 'StatItemLarge_C_UpdateDisplayData::CurrentValue' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateDisplayData, CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute) == 0x000028, "Member 'StatItemLarge_C_UpdateDisplayData::CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute' has a wrong offset!");

// Function StatItemLarge.StatItemLarge_C.UpdateValue
// 0x00AC (0x00AC - 0x0000)
struct StatItemLarge_C_UpdateValue final
{
public:
	float                                         NewValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentValue;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortStatValueDisplayType                     DisplayType;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBuffState                                BuffState;                                         // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           BuffColor;                                         // 0x000C(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BaseColor;                                         // 0x001C(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortStatValueDisplayType                     LocalDisplayType;                                  // 0x002C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBuffState                                LocalBuffState;                                    // 0x002D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LocalCurrentValue;                                 // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalNewValue;                                     // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable12;                              // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable123;                             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBuffState                                Temp_byte_Variable1234;                            // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E[0x2];                                       // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0040(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortBuffState                                Temp_byte_Variable12345;                           // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x2];                                       // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Get_Base___Buff_Colors_Base;              // 0x0054(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Get_Base___Buff_Colors_Buff;              // 0x0064(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable1;                             // 0x0074(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable12;                            // 0x007C(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable123;                           // 0x0084(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBuffState                                Temp_byte_Variable123456;                          // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasPreviewAttribute_ReturnValue;          // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F[0x1];                                       // 0x008F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              K2Node_Select_Default;                             // 0x0090(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select1_Default;                            // 0x0098(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select12_Default;                           // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select123_Default;                          // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StatItemLarge_C_UpdateValue) == 0x000004, "Wrong alignment on StatItemLarge_C_UpdateValue");
static_assert(sizeof(StatItemLarge_C_UpdateValue) == 0x0000AC, "Wrong size on StatItemLarge_C_UpdateValue");
static_assert(offsetof(StatItemLarge_C_UpdateValue, NewValue) == 0x000000, "Member 'StatItemLarge_C_UpdateValue::NewValue' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, CurrentValue) == 0x000004, "Member 'StatItemLarge_C_UpdateValue::CurrentValue' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, DisplayType) == 0x000008, "Member 'StatItemLarge_C_UpdateValue::DisplayType' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, BuffState) == 0x000009, "Member 'StatItemLarge_C_UpdateValue::BuffState' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, BuffColor) == 0x00000C, "Member 'StatItemLarge_C_UpdateValue::BuffColor' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, BaseColor) == 0x00001C, "Member 'StatItemLarge_C_UpdateValue::BaseColor' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, LocalDisplayType) == 0x00002C, "Member 'StatItemLarge_C_UpdateValue::LocalDisplayType' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, LocalBuffState) == 0x00002D, "Member 'StatItemLarge_C_UpdateValue::LocalBuffState' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, LocalCurrentValue) == 0x000030, "Member 'StatItemLarge_C_UpdateValue::LocalCurrentValue' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, LocalNewValue) == 0x000034, "Member 'StatItemLarge_C_UpdateValue::LocalNewValue' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, Temp_byte_Variable) == 0x000038, "Member 'StatItemLarge_C_UpdateValue::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, Temp_byte_Variable1) == 0x000039, "Member 'StatItemLarge_C_UpdateValue::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, Temp_byte_Variable12) == 0x00003A, "Member 'StatItemLarge_C_UpdateValue::Temp_byte_Variable12' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, Temp_bool_Variable) == 0x00003B, "Member 'StatItemLarge_C_UpdateValue::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, Temp_byte_Variable123) == 0x00003C, "Member 'StatItemLarge_C_UpdateValue::Temp_byte_Variable123' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, Temp_byte_Variable1234) == 0x00003D, "Member 'StatItemLarge_C_UpdateValue::Temp_byte_Variable1234' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, Temp_struct_Variable) == 0x000040, "Member 'StatItemLarge_C_UpdateValue::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, CallFunc_Not_PreBool_ReturnValue) == 0x000050, "Member 'StatItemLarge_C_UpdateValue::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, Temp_byte_Variable12345) == 0x000051, "Member 'StatItemLarge_C_UpdateValue::Temp_byte_Variable12345' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, CallFunc_Get_Base___Buff_Colors_Base) == 0x000054, "Member 'StatItemLarge_C_UpdateValue::CallFunc_Get_Base___Buff_Colors_Base' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, CallFunc_Get_Base___Buff_Colors_Buff) == 0x000064, "Member 'StatItemLarge_C_UpdateValue::CallFunc_Get_Base___Buff_Colors_Buff' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, Temp_struct_Variable1) == 0x000074, "Member 'StatItemLarge_C_UpdateValue::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, Temp_struct_Variable12) == 0x00007C, "Member 'StatItemLarge_C_UpdateValue::Temp_struct_Variable12' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, Temp_struct_Variable123) == 0x000084, "Member 'StatItemLarge_C_UpdateValue::Temp_struct_Variable123' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, Temp_byte_Variable123456) == 0x00008C, "Member 'StatItemLarge_C_UpdateValue::Temp_byte_Variable123456' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, CallFunc_HasPreviewAttribute_ReturnValue) == 0x00008D, "Member 'StatItemLarge_C_UpdateValue::CallFunc_HasPreviewAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, CallFunc_BooleanOR_ReturnValue) == 0x00008E, "Member 'StatItemLarge_C_UpdateValue::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, K2Node_Select_Default) == 0x000090, "Member 'StatItemLarge_C_UpdateValue::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, K2Node_Select1_Default) == 0x000098, "Member 'StatItemLarge_C_UpdateValue::K2Node_Select1_Default' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, K2Node_Select12_Default) == 0x0000A8, "Member 'StatItemLarge_C_UpdateValue::K2Node_Select12_Default' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, K2Node_Select123_Default) == 0x0000A9, "Member 'StatItemLarge_C_UpdateValue::K2Node_Select123_Default' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000AA, "Member 'StatItemLarge_C_UpdateValue::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatItemLarge_C_UpdateValue, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x0000AB, "Member 'StatItemLarge_C_UpdateValue::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");

}

