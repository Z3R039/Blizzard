﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InteractionIndicator

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function InteractionIndicator.InteractionIndicator_C.ExecuteUbergraph_InteractionIndicator
// 0x0058 (0x0058 - 0x0000)
struct InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class UFortInteractContextInfo* ContextInfo)> K2Node_CreateDelegate_OutputDelegate; // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue1;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class UFortInteractContextInfo* ContextInfo)> K2Node_CreateDelegate_OutputDelegate1; // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue12;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate12;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsBROnly_ReturnValue;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator) == 0x000008, "Wrong alignment on InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator");
static_assert(sizeof(InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator) == 0x000058, "Wrong size on InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator");
static_assert(offsetof(InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator, EntryPoint) == 0x000000, "Member 'InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator, Temp_bool_Variable) == 0x000004, "Member 'InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator, Temp_byte_Variable) == 0x000005, "Member 'InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator, Temp_byte_Variable1) == 0x000006, "Member 'InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator, CallFunc_GetContext_ReturnValue1) == 0x000020, "Member 'InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator, K2Node_CreateDelegate_OutputDelegate1) == 0x000028, "Member 'InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator, CallFunc_GetContext_ReturnValue12) == 0x000038, "Member 'InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator::CallFunc_GetContext_ReturnValue12' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator, K2Node_CreateDelegate_OutputDelegate12) == 0x000040, "Member 'InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator::K2Node_CreateDelegate_OutputDelegate12' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator, CallFunc_IsBROnly_ReturnValue) == 0x000050, "Member 'InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator::CallFunc_IsBROnly_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator, K2Node_Select_Default) == 0x000051, "Member 'InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator::K2Node_Select_Default' has a wrong offset!");

// Function InteractionIndicator.InteractionIndicator_C.HandleInteractionChanged
// 0x0030 (0x0030 - 0x0000)
struct InteractionIndicator_C_HandleInteractionChanged final
{
public:
	class UFortInteractContextInfo*               Interaction;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ValidInteraction;                                  // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABuildingTrapDefender*                  K2Node_DynamicCast_AsBuilding_Trap_Defender;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPickup*                            K2Node_DynamicCast_AsFort_Pickup;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_PickedUp_ReturnValue;                     // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InteractionIndicator_C_HandleInteractionChanged) == 0x000008, "Wrong alignment on InteractionIndicator_C_HandleInteractionChanged");
static_assert(sizeof(InteractionIndicator_C_HandleInteractionChanged) == 0x000030, "Wrong size on InteractionIndicator_C_HandleInteractionChanged");
static_assert(offsetof(InteractionIndicator_C_HandleInteractionChanged, Interaction) == 0x000000, "Member 'InteractionIndicator_C_HandleInteractionChanged::Interaction' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_HandleInteractionChanged, ValidInteraction) == 0x000008, "Member 'InteractionIndicator_C_HandleInteractionChanged::ValidInteraction' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_HandleInteractionChanged, Temp_byte_Variable) == 0x000009, "Member 'InteractionIndicator_C_HandleInteractionChanged::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_HandleInteractionChanged, Temp_byte_Variable1) == 0x00000A, "Member 'InteractionIndicator_C_HandleInteractionChanged::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_HandleInteractionChanged, Temp_bool_Variable) == 0x00000B, "Member 'InteractionIndicator_C_HandleInteractionChanged::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_HandleInteractionChanged, K2Node_DynamicCast_AsBuilding_Trap_Defender) == 0x000010, "Member 'InteractionIndicator_C_HandleInteractionChanged::K2Node_DynamicCast_AsBuilding_Trap_Defender' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_HandleInteractionChanged, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'InteractionIndicator_C_HandleInteractionChanged::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_HandleInteractionChanged, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'InteractionIndicator_C_HandleInteractionChanged::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_HandleInteractionChanged, K2Node_DynamicCast_AsFort_Pickup) == 0x000020, "Member 'InteractionIndicator_C_HandleInteractionChanged::K2Node_DynamicCast_AsFort_Pickup' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_HandleInteractionChanged, K2Node_DynamicCast_bSuccess1) == 0x000028, "Member 'InteractionIndicator_C_HandleInteractionChanged::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_HandleInteractionChanged, CallFunc_PickedUp_ReturnValue) == 0x000029, "Member 'InteractionIndicator_C_HandleInteractionChanged::CallFunc_PickedUp_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_HandleInteractionChanged, K2Node_Select_Default) == 0x00002A, "Member 'InteractionIndicator_C_HandleInteractionChanged::K2Node_Select_Default' has a wrong offset!");

// Function InteractionIndicator.InteractionIndicator_C.ShowPickupWidget
// 0x0050 (0x0050 - 0x0000)
struct InteractionIndicator_C_ShowPickupWidget final
{
public:
	class AFortPickup*                            Pickup;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetInteractText_InteractText;             // 0x0010(0x0018)()
	bool                                          CallFunc_GetInteractText_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetInteractErrorText_InteractErrorText;   // 0x0030(0x0018)()
	bool                                          CallFunc_GetInteractErrorText_ReturnValue;         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable12;                              // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable123;                             // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select1_Default;                            // 0x004F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InteractionIndicator_C_ShowPickupWidget) == 0x000008, "Wrong alignment on InteractionIndicator_C_ShowPickupWidget");
static_assert(sizeof(InteractionIndicator_C_ShowPickupWidget) == 0x000050, "Wrong size on InteractionIndicator_C_ShowPickupWidget");
static_assert(offsetof(InteractionIndicator_C_ShowPickupWidget, Pickup) == 0x000000, "Member 'InteractionIndicator_C_ShowPickupWidget::Pickup' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ShowPickupWidget, Temp_bool_Variable) == 0x000008, "Member 'InteractionIndicator_C_ShowPickupWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ShowPickupWidget, CallFunc_GetInteractText_InteractText) == 0x000010, "Member 'InteractionIndicator_C_ShowPickupWidget::CallFunc_GetInteractText_InteractText' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ShowPickupWidget, CallFunc_GetInteractText_ReturnValue) == 0x000028, "Member 'InteractionIndicator_C_ShowPickupWidget::CallFunc_GetInteractText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ShowPickupWidget, CallFunc_GetInteractErrorText_InteractErrorText) == 0x000030, "Member 'InteractionIndicator_C_ShowPickupWidget::CallFunc_GetInteractErrorText_InteractErrorText' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ShowPickupWidget, CallFunc_GetInteractErrorText_ReturnValue) == 0x000048, "Member 'InteractionIndicator_C_ShowPickupWidget::CallFunc_GetInteractErrorText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ShowPickupWidget, Temp_byte_Variable) == 0x000049, "Member 'InteractionIndicator_C_ShowPickupWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ShowPickupWidget, Temp_byte_Variable1) == 0x00004A, "Member 'InteractionIndicator_C_ShowPickupWidget::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ShowPickupWidget, Temp_byte_Variable12) == 0x00004B, "Member 'InteractionIndicator_C_ShowPickupWidget::Temp_byte_Variable12' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ShowPickupWidget, K2Node_Select_Default) == 0x00004C, "Member 'InteractionIndicator_C_ShowPickupWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ShowPickupWidget, Temp_byte_Variable123) == 0x00004D, "Member 'InteractionIndicator_C_ShowPickupWidget::Temp_byte_Variable123' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ShowPickupWidget, Temp_bool_Variable1) == 0x00004E, "Member 'InteractionIndicator_C_ShowPickupWidget::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ShowPickupWidget, K2Node_Select1_Default) == 0x00004F, "Member 'InteractionIndicator_C_ShowPickupWidget::K2Node_Select1_Default' has a wrong offset!");

// Function InteractionIndicator.InteractionIndicator_C.ShowBasicInteractionWidget
// 0x0007 (0x0007 - 0x0000)
struct InteractionIndicator_C_ShowBasicInteractionWidget final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortKeybindForcedHoldStatus                  Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortKeybindForcedHoldStatus                  Temp_byte_Variable1;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue1;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortKeybindForcedHoldStatus                  K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InteractionIndicator_C_ShowBasicInteractionWidget) == 0x000001, "Wrong alignment on InteractionIndicator_C_ShowBasicInteractionWidget");
static_assert(sizeof(InteractionIndicator_C_ShowBasicInteractionWidget) == 0x000007, "Wrong size on InteractionIndicator_C_ShowBasicInteractionWidget");
static_assert(offsetof(InteractionIndicator_C_ShowBasicInteractionWidget, Temp_bool_Variable) == 0x000000, "Member 'InteractionIndicator_C_ShowBasicInteractionWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ShowBasicInteractionWidget, Temp_byte_Variable) == 0x000001, "Member 'InteractionIndicator_C_ShowBasicInteractionWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ShowBasicInteractionWidget, Temp_byte_Variable1) == 0x000002, "Member 'InteractionIndicator_C_ShowBasicInteractionWidget::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ShowBasicInteractionWidget, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000003, "Member 'InteractionIndicator_C_ShowBasicInteractionWidget::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ShowBasicInteractionWidget, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'InteractionIndicator_C_ShowBasicInteractionWidget::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ShowBasicInteractionWidget, CallFunc_Greater_FloatFloat_ReturnValue1) == 0x000005, "Member 'InteractionIndicator_C_ShowBasicInteractionWidget::CallFunc_Greater_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_ShowBasicInteractionWidget, K2Node_Select_Default) == 0x000006, "Member 'InteractionIndicator_C_ShowBasicInteractionWidget::K2Node_Select_Default' has a wrong offset!");

// Function InteractionIndicator.InteractionIndicator_C.HandleInteractionUpdated
// 0x0010 (0x0010 - 0x0000)
struct InteractionIndicator_C_HandleInteractionUpdated final
{
public:
	class UFortInteractContextInfo*               Interaction;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InteractionIndicator_C_HandleInteractionUpdated) == 0x000008, "Wrong alignment on InteractionIndicator_C_HandleInteractionUpdated");
static_assert(sizeof(InteractionIndicator_C_HandleInteractionUpdated) == 0x000010, "Wrong size on InteractionIndicator_C_HandleInteractionUpdated");
static_assert(offsetof(InteractionIndicator_C_HandleInteractionUpdated, Interaction) == 0x000000, "Member 'InteractionIndicator_C_HandleInteractionUpdated::Interaction' has a wrong offset!");
static_assert(offsetof(InteractionIndicator_C_HandleInteractionUpdated, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'InteractionIndicator_C_HandleInteractionUpdated::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function InteractionIndicator.InteractionIndicator_C.ShowDefenderBeaconWidget
// 0x0008 (0x0008 - 0x0000)
struct InteractionIndicator_C_ShowDefenderBeaconWidget final
{
public:
	class ABuildingTrapDefender*                  BuildingTrap;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InteractionIndicator_C_ShowDefenderBeaconWidget) == 0x000008, "Wrong alignment on InteractionIndicator_C_ShowDefenderBeaconWidget");
static_assert(sizeof(InteractionIndicator_C_ShowDefenderBeaconWidget) == 0x000008, "Wrong size on InteractionIndicator_C_ShowDefenderBeaconWidget");
static_assert(offsetof(InteractionIndicator_C_ShowDefenderBeaconWidget, BuildingTrap) == 0x000000, "Member 'InteractionIndicator_C_ShowDefenderBeaconWidget::BuildingTrap' has a wrong offset!");

}

