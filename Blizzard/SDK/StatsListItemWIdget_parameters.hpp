﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatsListItemWIdget

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function StatsListItemWIdget.StatsListItemWIdget_C.ExecuteUbergraph_StatsListItemWIdget
// 0x0080 (0x0080 - 0x0000)
struct StatsListItemWIdget_C_ExecuteUbergraph_StatsListItemWIdget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortDisplayAttribute                  CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute; // 0x0008(0x0070)()
	float                                         K2Node_Event_Delta;                                // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatsListItemWIdget_C_ExecuteUbergraph_StatsListItemWIdget) == 0x000008, "Wrong alignment on StatsListItemWIdget_C_ExecuteUbergraph_StatsListItemWIdget");
static_assert(sizeof(StatsListItemWIdget_C_ExecuteUbergraph_StatsListItemWIdget) == 0x000080, "Wrong size on StatsListItemWIdget_C_ExecuteUbergraph_StatsListItemWIdget");
static_assert(offsetof(StatsListItemWIdget_C_ExecuteUbergraph_StatsListItemWIdget, EntryPoint) == 0x000000, "Member 'StatsListItemWIdget_C_ExecuteUbergraph_StatsListItemWIdget::EntryPoint' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_ExecuteUbergraph_StatsListItemWIdget, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'StatsListItemWIdget_C_ExecuteUbergraph_StatsListItemWIdget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_ExecuteUbergraph_StatsListItemWIdget, CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute) == 0x000008, "Member 'StatsListItemWIdget_C_ExecuteUbergraph_StatsListItemWIdget::CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_ExecuteUbergraph_StatsListItemWIdget, K2Node_Event_Delta) == 0x000078, "Member 'StatsListItemWIdget_C_ExecuteUbergraph_StatsListItemWIdget::K2Node_Event_Delta' has a wrong offset!");

// Function StatsListItemWIdget.StatsListItemWIdget_C.ValueChanged
// 0x0004 (0x0004 - 0x0000)
struct StatsListItemWIdget_C_ValueChanged final
{
public:
	float                                         Delta;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatsListItemWIdget_C_ValueChanged) == 0x000004, "Wrong alignment on StatsListItemWIdget_C_ValueChanged");
static_assert(sizeof(StatsListItemWIdget_C_ValueChanged) == 0x000004, "Wrong size on StatsListItemWIdget_C_ValueChanged");
static_assert(offsetof(StatsListItemWIdget_C_ValueChanged, Delta) == 0x000000, "Member 'StatsListItemWIdget_C_ValueChanged::Delta' has a wrong offset!");

// Function StatsListItemWIdget.StatsListItemWIdget_C.Update
// 0x00E0 (0x00E0 - 0x0000)
struct StatsListItemWIdget_C_Update final
{
public:
	struct FFortDisplayAttribute                  CurrentAttribute;                                  // 0x0000(0x0070)(Edit, BlueprintVisible)
	struct FFortDisplayAttribute                  CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute; // 0x0070(0x0070)()
};
static_assert(alignof(StatsListItemWIdget_C_Update) == 0x000008, "Wrong alignment on StatsListItemWIdget_C_Update");
static_assert(sizeof(StatsListItemWIdget_C_Update) == 0x0000E0, "Wrong size on StatsListItemWIdget_C_Update");
static_assert(offsetof(StatsListItemWIdget_C_Update, CurrentAttribute) == 0x000000, "Member 'StatsListItemWIdget_C_Update::CurrentAttribute' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_Update, CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute) == 0x000070, "Member 'StatsListItemWIdget_C_Update::CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute' has a wrong offset!");

// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateColors
// 0x0198 (0x0198 - 0x0000)
struct StatsListItemWIdget_C_UpdateColors final
{
public:
	struct FFortDisplayAttribute                  CurrentAttribute;                                  // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortDisplayAttribute                  LocalCurrentAttribute;                             // 0x0070(0x0070)(Edit, BlueprintVisible)
	struct FLinearColor                           BuffColor;                                         // 0x00E0(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BaseColor;                                         // 0x00F0(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable;                               // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable1;                              // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable12;                             // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBuffState                                Temp_byte_Variable;                                // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBuffState                                Temp_byte_Variable1;                               // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11A[0x6];                                      // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Select_Default;                             // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Get_Base___Buff_Colors_Base;              // 0x0128(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Get_Base___Buff_Colors_Buff;              // 0x0138(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortComparisonType                           Temp_byte_Variable12;                              // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14B[0x1];                                      // 0x014B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select1_Default;                            // 0x014C(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15C[0x4];                                      // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0160(0x0028)()
	struct FLinearColor                           K2Node_Select12_Default;                           // 0x0188(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatsListItemWIdget_C_UpdateColors) == 0x000008, "Wrong alignment on StatsListItemWIdget_C_UpdateColors");
static_assert(sizeof(StatsListItemWIdget_C_UpdateColors) == 0x000198, "Wrong size on StatsListItemWIdget_C_UpdateColors");
static_assert(offsetof(StatsListItemWIdget_C_UpdateColors, CurrentAttribute) == 0x000000, "Member 'StatsListItemWIdget_C_UpdateColors::CurrentAttribute' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateColors, LocalCurrentAttribute) == 0x000070, "Member 'StatsListItemWIdget_C_UpdateColors::LocalCurrentAttribute' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateColors, BuffColor) == 0x0000E0, "Member 'StatsListItemWIdget_C_UpdateColors::BuffColor' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateColors, BaseColor) == 0x0000F0, "Member 'StatsListItemWIdget_C_UpdateColors::BaseColor' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateColors, Temp_class_Variable) == 0x000100, "Member 'StatsListItemWIdget_C_UpdateColors::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateColors, Temp_class_Variable1) == 0x000108, "Member 'StatsListItemWIdget_C_UpdateColors::Temp_class_Variable1' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateColors, Temp_class_Variable12) == 0x000110, "Member 'StatsListItemWIdget_C_UpdateColors::Temp_class_Variable12' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateColors, Temp_byte_Variable) == 0x000118, "Member 'StatsListItemWIdget_C_UpdateColors::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateColors, Temp_byte_Variable1) == 0x000119, "Member 'StatsListItemWIdget_C_UpdateColors::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateColors, K2Node_Select_Default) == 0x000120, "Member 'StatsListItemWIdget_C_UpdateColors::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateColors, CallFunc_Get_Base___Buff_Colors_Base) == 0x000128, "Member 'StatsListItemWIdget_C_UpdateColors::CallFunc_Get_Base___Buff_Colors_Base' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateColors, CallFunc_Get_Base___Buff_Colors_Buff) == 0x000138, "Member 'StatsListItemWIdget_C_UpdateColors::CallFunc_Get_Base___Buff_Colors_Buff' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateColors, Temp_byte_Variable12) == 0x000148, "Member 'StatsListItemWIdget_C_UpdateColors::Temp_byte_Variable12' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateColors, K2Node_SwitchEnum_CmpSuccess) == 0x000149, "Member 'StatsListItemWIdget_C_UpdateColors::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateColors, CallFunc_NotEqual_TextText_ReturnValue) == 0x00014A, "Member 'StatsListItemWIdget_C_UpdateColors::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateColors, K2Node_Select1_Default) == 0x00014C, "Member 'StatsListItemWIdget_C_UpdateColors::K2Node_Select1_Default' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateColors, K2Node_MakeStruct_SlateColor) == 0x000160, "Member 'StatsListItemWIdget_C_UpdateColors::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateColors, K2Node_Select12_Default) == 0x000188, "Member 'StatsListItemWIdget_C_UpdateColors::K2Node_Select12_Default' has a wrong offset!");

// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateType
// 0x0080 (0x0080 - 0x0000)
struct StatsListItemWIdget_C_UpdateType final
{
public:
	struct FFortDisplayAttribute                  CurrentAttribute;                                  // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	EFortStatValueDisplayType                     Temp_byte_Variable;                                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatsListItemWIdget_C_UpdateType) == 0x000008, "Wrong alignment on StatsListItemWIdget_C_UpdateType");
static_assert(sizeof(StatsListItemWIdget_C_UpdateType) == 0x000080, "Wrong size on StatsListItemWIdget_C_UpdateType");
static_assert(offsetof(StatsListItemWIdget_C_UpdateType, CurrentAttribute) == 0x000000, "Member 'StatsListItemWIdget_C_UpdateType::CurrentAttribute' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateType, Temp_byte_Variable) == 0x000070, "Member 'StatsListItemWIdget_C_UpdateType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateType, K2Node_Select_Default) == 0x000078, "Member 'StatsListItemWIdget_C_UpdateType::K2Node_Select_Default' has a wrong offset!");

// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateValueText
// 0x0070 (0x0070 - 0x0000)
struct StatsListItemWIdget_C_UpdateValueText final
{
public:
	struct FFortDisplayAttribute                  CurrentAttribute;                                  // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(StatsListItemWIdget_C_UpdateValueText) == 0x000008, "Wrong alignment on StatsListItemWIdget_C_UpdateValueText");
static_assert(sizeof(StatsListItemWIdget_C_UpdateValueText) == 0x000070, "Wrong size on StatsListItemWIdget_C_UpdateValueText");
static_assert(offsetof(StatsListItemWIdget_C_UpdateValueText, CurrentAttribute) == 0x000000, "Member 'StatsListItemWIdget_C_UpdateValueText::CurrentAttribute' has a wrong offset!");

// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBasicPairLabel
// 0x0090 (0x0090 - 0x0000)
struct StatsListItemWIdget_C_UpdateBasicPairLabel final
{
public:
	struct FFortDisplayAttribute                  CurrentAttribute;                                  // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_GetEmptyText_ReturnValue;                 // 0x0070(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StatsListItemWIdget_C_UpdateBasicPairLabel) == 0x000008, "Wrong alignment on StatsListItemWIdget_C_UpdateBasicPairLabel");
static_assert(sizeof(StatsListItemWIdget_C_UpdateBasicPairLabel) == 0x000090, "Wrong size on StatsListItemWIdget_C_UpdateBasicPairLabel");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBasicPairLabel, CurrentAttribute) == 0x000000, "Member 'StatsListItemWIdget_C_UpdateBasicPairLabel::CurrentAttribute' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBasicPairLabel, CallFunc_GetEmptyText_ReturnValue) == 0x000070, "Member 'StatsListItemWIdget_C_UpdateBasicPairLabel::CallFunc_GetEmptyText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBasicPairLabel, CallFunc_NotEqual_TextText_ReturnValue) == 0x000088, "Member 'StatsListItemWIdget_C_UpdateBasicPairLabel::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");

// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBuffArrows
// 0x0118 (0x0118 - 0x0000)
struct StatsListItemWIdget_C_UpdateBuffArrows final
{
public:
	struct FFortDisplayAttribute                  CurrentAttribute;                                  // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortDisplayAttribute                  LocalCurrentAttribute;                             // 0x0070(0x0070)(Edit, BlueprintVisible)
	float                                         Temp_float_Variable;                               // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable1;                              // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable12;                             // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortClampState                               Temp_byte_Variable;                                // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable12;                              // 0x00EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable123;                             // 0x00EF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortComparisonType                           Temp_byte_Variable1234;                            // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x3];                                       // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable123;                            // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable1234;                           // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable12345;                          // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable123456;                         // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortComparisonType                           Temp_byte_Variable12345;                           // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_105[0x3];                                      // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable123456;                          // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1234567;                         // 0x010D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable12345678;                        // 0x010E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable123456789;                       // 0x010F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select1_Default;                            // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select12_Default;                           // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortClampState                               Temp_byte_Variable12345678910;                     // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_113[0x1];                                      // 0x0113(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select123_Default;                          // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatsListItemWIdget_C_UpdateBuffArrows) == 0x000008, "Wrong alignment on StatsListItemWIdget_C_UpdateBuffArrows");
static_assert(sizeof(StatsListItemWIdget_C_UpdateBuffArrows) == 0x000118, "Wrong size on StatsListItemWIdget_C_UpdateBuffArrows");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, CurrentAttribute) == 0x000000, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::CurrentAttribute' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, LocalCurrentAttribute) == 0x000070, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::LocalCurrentAttribute' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, Temp_float_Variable) == 0x0000E0, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, Temp_float_Variable1) == 0x0000E4, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::Temp_float_Variable1' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, Temp_float_Variable12) == 0x0000E8, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::Temp_float_Variable12' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, Temp_byte_Variable) == 0x0000EC, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, Temp_byte_Variable1) == 0x0000ED, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, Temp_byte_Variable12) == 0x0000EE, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::Temp_byte_Variable12' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, Temp_byte_Variable123) == 0x0000EF, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::Temp_byte_Variable123' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, Temp_byte_Variable1234) == 0x0000F0, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::Temp_byte_Variable1234' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, Temp_float_Variable123) == 0x0000F4, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::Temp_float_Variable123' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, Temp_float_Variable1234) == 0x0000F8, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::Temp_float_Variable1234' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, Temp_float_Variable12345) == 0x0000FC, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::Temp_float_Variable12345' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, Temp_float_Variable123456) == 0x000100, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::Temp_float_Variable123456' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, Temp_byte_Variable12345) == 0x000104, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::Temp_byte_Variable12345' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, K2Node_Select_Default) == 0x000108, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, Temp_byte_Variable123456) == 0x00010C, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::Temp_byte_Variable123456' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, Temp_byte_Variable1234567) == 0x00010D, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::Temp_byte_Variable1234567' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, Temp_byte_Variable12345678) == 0x00010E, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::Temp_byte_Variable12345678' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, Temp_byte_Variable123456789) == 0x00010F, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::Temp_byte_Variable123456789' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, K2Node_Select1_Default) == 0x000110, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::K2Node_Select1_Default' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, K2Node_Select12_Default) == 0x000111, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::K2Node_Select12_Default' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, Temp_byte_Variable12345678910) == 0x000112, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::Temp_byte_Variable12345678910' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_UpdateBuffArrows, K2Node_Select123_Default) == 0x000114, "Member 'StatsListItemWIdget_C_UpdateBuffArrows::K2Node_Select123_Default' has a wrong offset!");

// Function StatsListItemWIdget.StatsListItemWIdget_C.SetStatIcon
// 0x0078 (0x0078 - 0x0000)
struct StatsListItemWIdget_C_SetStatIcon final
{
public:
	struct FSlateBrush                            NewParam;                                          // 0x0000(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(StatsListItemWIdget_C_SetStatIcon) == 0x000008, "Wrong alignment on StatsListItemWIdget_C_SetStatIcon");
static_assert(sizeof(StatsListItemWIdget_C_SetStatIcon) == 0x000078, "Wrong size on StatsListItemWIdget_C_SetStatIcon");
static_assert(offsetof(StatsListItemWIdget_C_SetStatIcon, NewParam) == 0x000000, "Member 'StatsListItemWIdget_C_SetStatIcon::NewParam' has a wrong offset!");

// Function StatsListItemWIdget.StatsListItemWIdget_C.GetListItemTooltipWidget
// 0x0098 (0x0098 - 0x0000)
struct StatsListItemWIdget_C_GetListItemTooltipWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDisplayAttribute                  CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute; // 0x0010(0x0070)()
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;              // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatsListItemWIdget_C_GetListItemTooltipWidget) == 0x000008, "Wrong alignment on StatsListItemWIdget_C_GetListItemTooltipWidget");
static_assert(sizeof(StatsListItemWIdget_C_GetListItemTooltipWidget) == 0x000098, "Wrong size on StatsListItemWIdget_C_GetListItemTooltipWidget");
static_assert(offsetof(StatsListItemWIdget_C_GetListItemTooltipWidget, ReturnValue) == 0x000000, "Member 'StatsListItemWIdget_C_GetListItemTooltipWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_GetListItemTooltipWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'StatsListItemWIdget_C_GetListItemTooltipWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_GetListItemTooltipWidget, CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute) == 0x000010, "Member 'StatsListItemWIdget_C_GetListItemTooltipWidget::CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_GetListItemTooltipWidget, CallFunc_GetContext_ReturnValue) == 0x000080, "Member 'StatsListItemWIdget_C_GetListItemTooltipWidget::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_GetListItemTooltipWidget, CallFunc_IsUsingGamepad_ReturnValue) == 0x000088, "Member 'StatsListItemWIdget_C_GetListItemTooltipWidget::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_GetListItemTooltipWidget, CallFunc_Create_Basic_Tooltip_Output) == 0x000090, "Member 'StatsListItemWIdget_C_GetListItemTooltipWidget::CallFunc_Create_Basic_Tooltip_Output' has a wrong offset!");

// Function StatsListItemWIdget.StatsListItemWIdget_C.SetTextAndBorderHighlight
// 0x0018 (0x0018 - 0x0000)
struct StatsListItemWIdget_C_SetTextAndBorderHighlight final
{
public:
	bool                                          bHightlight;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable1;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_Select1_Default;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatsListItemWIdget_C_SetTextAndBorderHighlight) == 0x000008, "Wrong alignment on StatsListItemWIdget_C_SetTextAndBorderHighlight");
static_assert(sizeof(StatsListItemWIdget_C_SetTextAndBorderHighlight) == 0x000018, "Wrong size on StatsListItemWIdget_C_SetTextAndBorderHighlight");
static_assert(offsetof(StatsListItemWIdget_C_SetTextAndBorderHighlight, bHightlight) == 0x000000, "Member 'StatsListItemWIdget_C_SetTextAndBorderHighlight::bHightlight' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_SetTextAndBorderHighlight, Temp_bool_Variable) == 0x000001, "Member 'StatsListItemWIdget_C_SetTextAndBorderHighlight::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_SetTextAndBorderHighlight, Temp_bool_Variable1) == 0x000002, "Member 'StatsListItemWIdget_C_SetTextAndBorderHighlight::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_SetTextAndBorderHighlight, K2Node_Select_Default) == 0x000008, "Member 'StatsListItemWIdget_C_SetTextAndBorderHighlight::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StatsListItemWIdget_C_SetTextAndBorderHighlight, K2Node_Select1_Default) == 0x000010, "Member 'StatsListItemWIdget_C_SetTextAndBorderHighlight::K2Node_Select1_Default' has a wrong offset!");

}

