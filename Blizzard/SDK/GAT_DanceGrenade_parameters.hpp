﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_DanceGrenade

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GAT_DanceGrenade.GAT_DanceGrenade_C.ExecuteUbergraph_GAT_DanceGrenade
// 0x0090 (0x0090 - 0x0000)
struct GAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0008(0x0040)(ContainsInstancedReference)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x0058(0x0020)()
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x0080(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(GAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade) == 0x000008, "Wrong alignment on GAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade");
static_assert(sizeof(GAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade) == 0x000090, "Wrong size on GAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade");
static_assert(offsetof(GAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade, EntryPoint) == 0x000000, "Member 'GAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade, CallFunc_GetActorInfo_ReturnValue) == 0x000008, "Member 'GAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000048, "Member 'GAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'GAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000058, "Member 'GAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade, CallFunc_K2_CommitAbility_ReturnValue) == 0x000078, "Member 'GAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000080, "Member 'GAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");

}

