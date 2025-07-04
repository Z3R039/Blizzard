﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_GenericApplyFullBodyHit

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.ExecuteUbergraph_GAB_GenericApplyFullBodyHit
// 0x02B0 (0x02B0 - 0x0000)
struct GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_SelfActor;                      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherActor;                     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_NormalImpulse;                  // 0x0040(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_CustomEvent_Hit;                            // 0x0050(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x00D8(0x00A8)(ConstParm)
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromHitResult_ReturnValue; // 0x0180(0x0020)()
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetImpulseData_ImpulseDirection;          // 0x01A8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetImpulseData_KnockbackMagnitude;        // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetImpulseData_KnockbackZAngle;           // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1BD[0x3];                                      // 0x01BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)> K2Node_CreateDelegate_OutputDelegate12; // 0x01C0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x01D8(0x0010)(ZeroConstructor, ReferenceParm)
	class UFortAbilitySystemComponent*            CallFunc_GetActivatingAbilityComponent_ReturnValue; // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;            // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x01F8(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ClassClass_ReturnValue1;         // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_201[0x7];                                      // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue1;           // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0210(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21C[0x4];                                      // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_SetFNameBasedOnHitDirection_NameResult;   // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_231[0x7];                                      // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue12;          // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1; // 0x0240(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_249[0x7];                                      // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue123;         // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_259[0x7];                                      // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate123;           // 0x0260(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1234;          // 0x0270(0x0010)(ZeroConstructor, NoDestructor)
	class UFortAbilitySystemComponent*            CallFunc_GetActivatingAbilityComponent_ReturnValue1; // 0x0280(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue1;  // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_289[0x7];                                      // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue1234;        // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue12; // 0x0298(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum1_CmpSuccess;                     // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue1;                 // 0x02A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue123; // 0x02A4(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit) == 0x000008, "Wrong alignment on GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit");
static_assert(sizeof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit) == 0x0002B0, "Wrong size on GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, EntryPoint) == 0x000000, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CreateDelegate_OutputDelegate1) == 0x000018, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_Event_bWasCancelled) == 0x000028, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CustomEvent_SelfActor) == 0x000030, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CustomEvent_SelfActor' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CustomEvent_OtherActor) == 0x000038, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CustomEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CustomEvent_NormalImpulse) == 0x000040, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CustomEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CustomEvent_Hit) == 0x000050, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_Event_EventData) == 0x0000D8, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_AbilityTargetDataFromHitResult_ReturnValue) == 0x000180, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_AbilityTargetDataFromHitResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x0001A0, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetImpulseData_ImpulseDirection) == 0x0001A8, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetImpulseData_ImpulseDirection' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetImpulseData_KnockbackMagnitude) == 0x0001B4, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetImpulseData_KnockbackMagnitude' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetImpulseData_KnockbackZAngle) == 0x0001B8, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetImpulseData_KnockbackZAngle' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_IsValid_ReturnValue) == 0x0001BC, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CreateDelegate_OutputDelegate12) == 0x0001C0, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CreateDelegate_OutputDelegate12' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_NotEqual_ClassClass_ReturnValue) == 0x0001D0, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_NotEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x0001D8, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetActivatingAbilityComponent_ReturnValue) == 0x0001E8, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetActivatingAbilityComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetActivatingPawn_ReturnValue) == 0x0001F0, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x0001F8, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_NotEqual_ClassClass_ReturnValue1) == 0x000200, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_NotEqual_ClassClass_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetActivatingPawn_ReturnValue1) == 0x000208, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetActivatingPawn_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000210, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_SetFNameBasedOnHitDirection_NameResult) == 0x000220, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_SetFNameBasedOnHitDirection_NameResult' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000228, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_IsValid_ReturnValue1) == 0x000230, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetActivatingPawn_ReturnValue12) == 0x000238, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetActivatingPawn_ReturnValue12' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1) == 0x000240, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_SwitchEnum_CmpSuccess) == 0x000248, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetActivatingPawn_ReturnValue123) == 0x000250, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetActivatingPawn_ReturnValue123' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_RemoveActiveGameplayEffect_ReturnValue) == 0x000258, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_RemoveActiveGameplayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CreateDelegate_OutputDelegate123) == 0x000260, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CreateDelegate_OutputDelegate123' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CreateDelegate_OutputDelegate1234) == 0x000270, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CreateDelegate_OutputDelegate1234' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetActivatingAbilityComponent_ReturnValue1) == 0x000280, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetActivatingAbilityComponent_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_RemoveActiveGameplayEffect_ReturnValue1) == 0x000288, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_RemoveActiveGameplayEffect_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetActivatingPawn_ReturnValue1234) == 0x000290, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetActivatingPawn_ReturnValue1234' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue12) == 0x000298, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue12' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_SwitchEnum1_CmpSuccess) == 0x0002A0, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_SwitchEnum1_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_Not_PreBool_ReturnValue) == 0x0002A1, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_Not_PreBool_ReturnValue1) == 0x0002A2, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_Not_PreBool_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_BooleanAND_ReturnValue) == 0x0002A3, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue123) == 0x0002A4, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue123' has a wrong offset!");

// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnHitPawn
// 0x00A8 (0x00A8 - 0x0000)
struct GAB_GenericApplyFullBodyHit_C_OnHitPawn final
{
public:
	class AActor*                                 SelfActor;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             Hit;                                               // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(GAB_GenericApplyFullBodyHit_C_OnHitPawn) == 0x000008, "Wrong alignment on GAB_GenericApplyFullBodyHit_C_OnHitPawn");
static_assert(sizeof(GAB_GenericApplyFullBodyHit_C_OnHitPawn) == 0x0000A8, "Wrong size on GAB_GenericApplyFullBodyHit_C_OnHitPawn");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_OnHitPawn, SelfActor) == 0x000000, "Member 'GAB_GenericApplyFullBodyHit_C_OnHitPawn::SelfActor' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_OnHitPawn, OtherActor) == 0x000008, "Member 'GAB_GenericApplyFullBodyHit_C_OnHitPawn::OtherActor' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_OnHitPawn, NormalImpulse) == 0x000010, "Member 'GAB_GenericApplyFullBodyHit_C_OnHitPawn::NormalImpulse' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_OnHitPawn, Hit) == 0x000020, "Member 'GAB_GenericApplyFullBodyHit_C_OnHitPawn::Hit' has a wrong offset!");

// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GAB_GenericApplyFullBodyHit_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_GenericApplyFullBodyHit_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GAB_GenericApplyFullBodyHit_C_K2_OnEndAbility");
static_assert(sizeof(GAB_GenericApplyFullBodyHit_C_K2_OnEndAbility) == 0x000001, "Wrong size on GAB_GenericApplyFullBodyHit_C_K2_OnEndAbility");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAB_GenericApplyFullBodyHit_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_CanActivateAbility
// 0x0068 (0x0068 - 0x0000)
struct GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayTagContainer                  RelevantTags;                                      // 0x0040(0x0020)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility) == 0x000008, "Wrong alignment on GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility");
static_assert(sizeof(GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility) == 0x000068, "Wrong size on GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility, RelevantTags) == 0x000040, "Member 'GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility, ReturnValue) == 0x000060, "Member 'GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");

}

