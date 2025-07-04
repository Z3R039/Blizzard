﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemDetailsHeaderTagListText

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.ExecuteUbergraph_ItemDetailsHeaderTagListText
// 0x00F8 (0x00F8 - 0x0000)
struct ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;              // 0x0010(0x0080)()
	bool                                          CallFunc_IsSchematicOrCraftedWeapon_ReturnValue;   // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0098(0x0028)()
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue;                   // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                           CallFunc_GetUserFriendlyTags_ReturnValue;          // 0x00C8(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_FormatItemDisplayTags_FormatedText;       // 0x00D8(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText) == 0x000008, "Wrong alignment on ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText");
static_assert(sizeof(ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText) == 0x0000F8, "Wrong size on ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText, EntryPoint) == 0x000000, "Member 'ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText, Temp_bool_Variable) == 0x000004, "Member 'ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText, Temp_byte_Variable) == 0x000005, "Member 'ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText, Temp_byte_Variable1) == 0x000006, "Member 'ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText, CallFunc_IsValid_ReturnValue) == 0x000007, "Member 'ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText, CallFunc_GetRarity_ReturnValue) == 0x000008, "Member 'ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText, CallFunc_BPGetRarityData_ReturnValue) == 0x000010, "Member 'ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText::CallFunc_BPGetRarityData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText, CallFunc_IsSchematicOrCraftedWeapon_ReturnValue) == 0x000090, "Member 'ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText::CallFunc_IsSchematicOrCraftedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText, K2Node_MakeStruct_SlateColor) == 0x000098, "Member 'ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText, CallFunc_GetContext_ReturnValue) == 0x0000C0, "Member 'ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText, CallFunc_GetUserFriendlyTags_ReturnValue) == 0x0000C8, "Member 'ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText::CallFunc_GetUserFriendlyTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText, CallFunc_FormatItemDisplayTags_FormatedText) == 0x0000D8, "Member 'ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText::CallFunc_FormatItemDisplayTags_FormatedText' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText, CallFunc_TextIsEmpty_ReturnValue) == 0x0000F0, "Member 'ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText, K2Node_Select_Default) == 0x0000F1, "Member 'ItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText::K2Node_Select_Default' has a wrong offset!");

// Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.FormatItemDisplayTags
// 0x0120 (0x0120 - 0x0000)
struct ItemDetailsHeaderTagListText_C_FormatItemDisplayTags final
{
public:
	TArray<class FText>                           TagTexts;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FText                                   FormatedText;                                      // 0x0010(0x0018)(Parm, OutParm)
	class FText                                   Result;                                            // 0x0028(0x0018)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0048(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0060(0x0040)(HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x00B0(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F8(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0108(0x0018)()
};
static_assert(alignof(ItemDetailsHeaderTagListText_C_FormatItemDisplayTags) == 0x000008, "Wrong alignment on ItemDetailsHeaderTagListText_C_FormatItemDisplayTags");
static_assert(sizeof(ItemDetailsHeaderTagListText_C_FormatItemDisplayTags) == 0x000120, "Wrong size on ItemDetailsHeaderTagListText_C_FormatItemDisplayTags");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_FormatItemDisplayTags, TagTexts) == 0x000000, "Member 'ItemDetailsHeaderTagListText_C_FormatItemDisplayTags::TagTexts' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_FormatItemDisplayTags, FormatedText) == 0x000010, "Member 'ItemDetailsHeaderTagListText_C_FormatItemDisplayTags::FormatedText' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_FormatItemDisplayTags, Result) == 0x000028, "Member 'ItemDetailsHeaderTagListText_C_FormatItemDisplayTags::Result' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_FormatItemDisplayTags, Temp_int_Array_Index_Variable) == 0x000040, "Member 'ItemDetailsHeaderTagListText_C_FormatItemDisplayTags::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_FormatItemDisplayTags, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'ItemDetailsHeaderTagListText_C_FormatItemDisplayTags::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_FormatItemDisplayTags, CallFunc_Array_Get_Item) == 0x000048, "Member 'ItemDetailsHeaderTagListText_C_FormatItemDisplayTags::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_FormatItemDisplayTags, K2Node_MakeStruct_FormatArgumentData) == 0x000060, "Member 'ItemDetailsHeaderTagListText_C_FormatItemDisplayTags::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_FormatItemDisplayTags, Temp_int_Loop_Counter_Variable) == 0x0000A0, "Member 'ItemDetailsHeaderTagListText_C_FormatItemDisplayTags::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_FormatItemDisplayTags, CallFunc_Less_IntInt_ReturnValue) == 0x0000A4, "Member 'ItemDetailsHeaderTagListText_C_FormatItemDisplayTags::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_FormatItemDisplayTags, CallFunc_Add_IntInt_ReturnValue) == 0x0000A8, "Member 'ItemDetailsHeaderTagListText_C_FormatItemDisplayTags::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_FormatItemDisplayTags, K2Node_MakeStruct_FormatArgumentData1) == 0x0000B0, "Member 'ItemDetailsHeaderTagListText_C_FormatItemDisplayTags::K2Node_MakeStruct_FormatArgumentData1' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_FormatItemDisplayTags, CallFunc_TextIsEmpty_ReturnValue) == 0x0000F0, "Member 'ItemDetailsHeaderTagListText_C_FormatItemDisplayTags::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_FormatItemDisplayTags, K2Node_MakeArray_Array) == 0x0000F8, "Member 'ItemDetailsHeaderTagListText_C_FormatItemDisplayTags::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderTagListText_C_FormatItemDisplayTags, CallFunc_Format_ReturnValue) == 0x000108, "Member 'ItemDetailsHeaderTagListText_C_FormatItemDisplayTags::CallFunc_Format_ReturnValue' has a wrong offset!");

}

