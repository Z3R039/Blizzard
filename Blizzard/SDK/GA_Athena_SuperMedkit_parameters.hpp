﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_SuperMedkit

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_SuperMedkit.GA_Athena_SuperMedkit_C.ExecuteUbergraph_GA_Athena_SuperMedkit
// 0x0230 (0x0230 - 0x0000)
struct GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0008(0x0040)(ContainsInstancedReference)
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate; // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1;                    // 0x0068(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1;                // 0x0088(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x0090(0x0020)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x00B0(0x0010)(ZeroConstructor, ReferenceParm)
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1; // 0x00C0(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x00D0(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x00F0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x00F8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable1;                             // 0x0100(0x0020)()
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData12;                   // 0x0120(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag12;               // 0x0140(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate12; // 0x0148(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue1;            // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15A[0x6];                                      // 0x015A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_MakeStruct_GameplayCueParameters;           // 0x0168(0x00B8)(ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_221[0x3];                                      // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0224(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit) == 0x000008, "Wrong alignment on GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit");
static_assert(sizeof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit) == 0x000230, "Wrong size on GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, EntryPoint) == 0x000000, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, CallFunc_GetActorInfo_ReturnValue) == 0x000008, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000058, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, K2Node_CustomEvent_TargetData1) == 0x000068, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::K2Node_CustomEvent_TargetData1' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, K2Node_CustomEvent_ApplicationTag1) == 0x000088, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::K2Node_CustomEvent_ApplicationTag1' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000090, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x0000B0, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, K2Node_CreateDelegate_OutputDelegate1) == 0x0000C0, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, K2Node_CustomEvent_TargetData) == 0x0000D0, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, K2Node_CustomEvent_ApplicationTag) == 0x0000F0, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, Temp_struct_Variable) == 0x0000F8, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, Temp_struct_Variable1) == 0x000100, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, K2Node_CustomEvent_TargetData12) == 0x000120, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::K2Node_CustomEvent_TargetData12' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, K2Node_CustomEvent_ApplicationTag12) == 0x000140, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::K2Node_CustomEvent_ApplicationTag12' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, K2Node_CreateDelegate_OutputDelegate12) == 0x000148, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::K2Node_CreateDelegate_OutputDelegate12' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, CallFunc_K2_CommitAbility_ReturnValue) == 0x000158, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, CallFunc_K2_CommitAbility_ReturnValue1) == 0x000159, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::CallFunc_K2_CommitAbility_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue) == 0x000160, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, K2Node_MakeStruct_GameplayCueParameters) == 0x000168, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::K2Node_MakeStruct_GameplayCueParameters' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, CallFunc_IsValid_ReturnValue) == 0x000220, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000224, "Member 'GA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");

// Function GA_Athena_SuperMedkit.GA_Athena_SuperMedkit_C.Triggered_0F34DCEB464B8A7334EFDAA07F2E1036
// 0x0028 (0x0028 - 0x0000)
struct GA_Athena_SuperMedkit_C_Triggered_0F34DCEB464B8A7334EFDAA07F2E1036 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_SuperMedkit_C_Triggered_0F34DCEB464B8A7334EFDAA07F2E1036) == 0x000008, "Wrong alignment on GA_Athena_SuperMedkit_C_Triggered_0F34DCEB464B8A7334EFDAA07F2E1036");
static_assert(sizeof(GA_Athena_SuperMedkit_C_Triggered_0F34DCEB464B8A7334EFDAA07F2E1036) == 0x000028, "Wrong size on GA_Athena_SuperMedkit_C_Triggered_0F34DCEB464B8A7334EFDAA07F2E1036");
static_assert(offsetof(GA_Athena_SuperMedkit_C_Triggered_0F34DCEB464B8A7334EFDAA07F2E1036, TargetData) == 0x000000, "Member 'GA_Athena_SuperMedkit_C_Triggered_0F34DCEB464B8A7334EFDAA07F2E1036::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_Triggered_0F34DCEB464B8A7334EFDAA07F2E1036, ApplicationTag) == 0x000020, "Member 'GA_Athena_SuperMedkit_C_Triggered_0F34DCEB464B8A7334EFDAA07F2E1036::ApplicationTag' has a wrong offset!");

// Function GA_Athena_SuperMedkit.GA_Athena_SuperMedkit_C.Cancelled_0F34DCEB464B8A7334EFDAA07F2E1036
// 0x0028 (0x0028 - 0x0000)
struct GA_Athena_SuperMedkit_C_Cancelled_0F34DCEB464B8A7334EFDAA07F2E1036 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_SuperMedkit_C_Cancelled_0F34DCEB464B8A7334EFDAA07F2E1036) == 0x000008, "Wrong alignment on GA_Athena_SuperMedkit_C_Cancelled_0F34DCEB464B8A7334EFDAA07F2E1036");
static_assert(sizeof(GA_Athena_SuperMedkit_C_Cancelled_0F34DCEB464B8A7334EFDAA07F2E1036) == 0x000028, "Wrong size on GA_Athena_SuperMedkit_C_Cancelled_0F34DCEB464B8A7334EFDAA07F2E1036");
static_assert(offsetof(GA_Athena_SuperMedkit_C_Cancelled_0F34DCEB464B8A7334EFDAA07F2E1036, TargetData) == 0x000000, "Member 'GA_Athena_SuperMedkit_C_Cancelled_0F34DCEB464B8A7334EFDAA07F2E1036::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_Cancelled_0F34DCEB464B8A7334EFDAA07F2E1036, ApplicationTag) == 0x000020, "Member 'GA_Athena_SuperMedkit_C_Cancelled_0F34DCEB464B8A7334EFDAA07F2E1036::ApplicationTag' has a wrong offset!");

// Function GA_Athena_SuperMedkit.GA_Athena_SuperMedkit_C.Completed_0F34DCEB464B8A7334EFDAA07F2E1036
// 0x0028 (0x0028 - 0x0000)
struct GA_Athena_SuperMedkit_C_Completed_0F34DCEB464B8A7334EFDAA07F2E1036 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_SuperMedkit_C_Completed_0F34DCEB464B8A7334EFDAA07F2E1036) == 0x000008, "Wrong alignment on GA_Athena_SuperMedkit_C_Completed_0F34DCEB464B8A7334EFDAA07F2E1036");
static_assert(sizeof(GA_Athena_SuperMedkit_C_Completed_0F34DCEB464B8A7334EFDAA07F2E1036) == 0x000028, "Wrong size on GA_Athena_SuperMedkit_C_Completed_0F34DCEB464B8A7334EFDAA07F2E1036");
static_assert(offsetof(GA_Athena_SuperMedkit_C_Completed_0F34DCEB464B8A7334EFDAA07F2E1036, TargetData) == 0x000000, "Member 'GA_Athena_SuperMedkit_C_Completed_0F34DCEB464B8A7334EFDAA07F2E1036::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_Completed_0F34DCEB464B8A7334EFDAA07F2E1036, ApplicationTag) == 0x000020, "Member 'GA_Athena_SuperMedkit_C_Completed_0F34DCEB464B8A7334EFDAA07F2E1036::ApplicationTag' has a wrong offset!");

// Function GA_Athena_SuperMedkit.GA_Athena_SuperMedkit_C.K2_CanActivateAbility
// 0x0098 (0x0098 - 0x0000)
struct GA_Athena_SuperMedkit_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayTagContainer                  RelevantTags;                                      // 0x0040(0x0020)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetHealth_ReturnValue;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxShield_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetShield_ReturnValue;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue1;                       // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxHealth_ReturnValue;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue1;             // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue1;             // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0096(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_SuperMedkit_C_K2_CanActivateAbility) == 0x000008, "Wrong alignment on GA_Athena_SuperMedkit_C_K2_CanActivateAbility");
static_assert(sizeof(GA_Athena_SuperMedkit_C_K2_CanActivateAbility) == 0x000098, "Wrong size on GA_Athena_SuperMedkit_C_K2_CanActivateAbility");
static_assert(offsetof(GA_Athena_SuperMedkit_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GA_Athena_SuperMedkit_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_K2_CanActivateAbility, RelevantTags) == 0x000040, "Member 'GA_Athena_SuperMedkit_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_K2_CanActivateAbility, ReturnValue) == 0x000060, "Member 'GA_Athena_SuperMedkit_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_K2_CanActivateAbility, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000068, "Member 'GA_Athena_SuperMedkit_C_K2_CanActivateAbility::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'GA_Athena_SuperMedkit_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_K2_CanActivateAbility, CallFunc_GetHealth_ReturnValue) == 0x000074, "Member 'GA_Athena_SuperMedkit_C_K2_CanActivateAbility::CallFunc_GetHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_K2_CanActivateAbility, CallFunc_GetMaxShield_ReturnValue) == 0x000078, "Member 'GA_Athena_SuperMedkit_C_K2_CanActivateAbility::CallFunc_GetMaxShield_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_K2_CanActivateAbility, CallFunc_FCeil_ReturnValue) == 0x00007C, "Member 'GA_Athena_SuperMedkit_C_K2_CanActivateAbility::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_K2_CanActivateAbility, CallFunc_GetShield_ReturnValue) == 0x000080, "Member 'GA_Athena_SuperMedkit_C_K2_CanActivateAbility::CallFunc_GetShield_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_K2_CanActivateAbility, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000084, "Member 'GA_Athena_SuperMedkit_C_K2_CanActivateAbility::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_K2_CanActivateAbility, CallFunc_FCeil_ReturnValue1) == 0x000088, "Member 'GA_Athena_SuperMedkit_C_K2_CanActivateAbility::CallFunc_FCeil_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_K2_CanActivateAbility, CallFunc_GetMaxHealth_ReturnValue) == 0x00008C, "Member 'GA_Athena_SuperMedkit_C_K2_CanActivateAbility::CallFunc_GetMaxHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_K2_CanActivateAbility, CallFunc_Conv_IntToFloat_ReturnValue1) == 0x000090, "Member 'GA_Athena_SuperMedkit_C_K2_CanActivateAbility::CallFunc_Conv_IntToFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_K2_CanActivateAbility, CallFunc_Less_FloatFloat_ReturnValue) == 0x000094, "Member 'GA_Athena_SuperMedkit_C_K2_CanActivateAbility::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_K2_CanActivateAbility, CallFunc_Less_FloatFloat_ReturnValue1) == 0x000095, "Member 'GA_Athena_SuperMedkit_C_K2_CanActivateAbility::CallFunc_Less_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Athena_SuperMedkit_C_K2_CanActivateAbility, CallFunc_BooleanOR_ReturnValue) == 0x000096, "Member 'GA_Athena_SuperMedkit_C_K2_CanActivateAbility::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

