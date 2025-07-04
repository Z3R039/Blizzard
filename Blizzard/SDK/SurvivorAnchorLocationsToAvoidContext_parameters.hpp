﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SurvivorAnchorLocationsToAvoidContext

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function SurvivorAnchorLocationsToAvoidContext.SurvivorAnchorLocationsToAvoidContext_C.ProvideLocationsSet
// 0x0178 (0x0178 - 0x0000)
struct SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet final
{
public:
	class UObject*                                QuerierObject;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 QuerierActor;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        ResultingLocationSet;                              // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor)
	class AActor*                                 Querier;                                           // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         ActorsToTest;                                      // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FVector>                        LocationSet;                                       // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable1;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item;                           // 0x0058(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivor_C*                            K2Node_DynamicCast_AsSurvivor;                     // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item1;                          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_Origin;                // 0x0080(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent;             // 0x008C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetComponentBounds_SphereRadius;          // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x009C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorFloat_ReturnValue;              // 0x00A8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X1;                           // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y1;                           // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z1;                           // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X12;                          // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y12;                          // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z12;                          // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                    K2Node_DynamicCast_AsFort_Projectile_Base;         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EE[0x2];                                       // 0x00EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue1;         // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue1;              // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue1;          // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue1;             // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FA[0x2];                                       // 0x00FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue12;        // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue12;             // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue12;         // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue12;            // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_106[0x2];                                      // 0x0106(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortAreaOfEffectCloud*                 K2Node_DynamicCast_AsFort_Area_Of_Effect_Cloud;    // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess12;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_112[0x6];                                      // 0x0112(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABuildingGameplayActor*                 K2Node_DynamicCast_AsBuilding_Gameplay_Actor;      // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess123;                    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue1;                  // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue12;                 // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortTeamAffiliation                          CallFunc_GetTeamAffiliation_ReturnValue;           // 0x0123(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue123;                // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0125(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue1234;               // 0x0126(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_127[0x1];                                      // 0x0127(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12D[0x3];                                      // 0x012D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable1;                   // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue1;                 // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_135[0x3];                                      // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13C[0x4];                                      // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AFortProjectileBase*>            CallFunc_GetAllActorsOfClass_OutActors;            // 0x0140(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<class ABuildingGameplayActor*>         CallFunc_GetAllActorsOfClass_OutActors1;           // 0x0150(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<class AFortAreaOfEffectCloud*>         CallFunc_GetAllActorsOfClass_OutActors12;          // 0x0160(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet) == 0x000008, "Wrong alignment on SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet");
static_assert(sizeof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet) == 0x000178, "Wrong size on SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, QuerierObject) == 0x000000, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::QuerierObject' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, QuerierActor) == 0x000008, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::QuerierActor' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, ResultingLocationSet) == 0x000010, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::ResultingLocationSet' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, Querier) == 0x000020, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::Querier' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, ActorsToTest) == 0x000028, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::ActorsToTest' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, LocationSet) == 0x000038, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::LocationSet' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, Temp_int_Array_Index_Variable) == 0x000048, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, Temp_int_Loop_Counter_Variable) == 0x00004C, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, Temp_int_Array_Index_Variable1) == 0x000054, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::Temp_int_Array_Index_Variable1' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Array_Get_Item) == 0x000058, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Array_Length_ReturnValue) == 0x000064, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, K2Node_DynamicCast_AsSurvivor) == 0x000068, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::K2Node_DynamicCast_AsSurvivor' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Array_Get_Item1) == 0x000078, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Array_Get_Item1' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_GetComponentBounds_Origin) == 0x000080, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_GetComponentBounds_Origin' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_GetComponentBounds_BoxExtent) == 0x00008C, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_GetComponentBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_GetComponentBounds_SphereRadius) == 0x000098, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_GetComponentBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00009C, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Add_VectorFloat_ReturnValue) == 0x0000A8, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Add_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_BreakVector_X) == 0x0000B4, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_BreakVector_Y) == 0x0000B8, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_BreakVector_Z) == 0x0000BC, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_BreakVector_X1) == 0x0000C0, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_BreakVector_X1' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_BreakVector_Y1) == 0x0000C4, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_BreakVector_Y1' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_BreakVector_Z1) == 0x0000C8, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_BreakVector_Z1' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_BreakVector_X12) == 0x0000CC, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_BreakVector_X12' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_BreakVector_Y12) == 0x0000D0, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_BreakVector_Y12' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_BreakVector_Z12) == 0x0000D4, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_BreakVector_Z12' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, K2Node_DynamicCast_AsFort_Projectile_Base) == 0x0000D8, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::K2Node_DynamicCast_AsFort_Projectile_Base' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, K2Node_DynamicCast_bSuccess1) == 0x0000E0, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000E4, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000E8, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000EC, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Less_FloatFloat_ReturnValue) == 0x0000ED, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Subtract_FloatFloat_ReturnValue1) == 0x0000F0, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Subtract_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Add_FloatFloat_ReturnValue1) == 0x0000F4, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Add_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Greater_FloatFloat_ReturnValue1) == 0x0000F8, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Greater_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Less_FloatFloat_ReturnValue1) == 0x0000F9, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Less_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Subtract_FloatFloat_ReturnValue12) == 0x0000FC, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Subtract_FloatFloat_ReturnValue12' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Add_FloatFloat_ReturnValue12) == 0x000100, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Add_FloatFloat_ReturnValue12' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Greater_FloatFloat_ReturnValue12) == 0x000104, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Greater_FloatFloat_ReturnValue12' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Less_FloatFloat_ReturnValue12) == 0x000105, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Less_FloatFloat_ReturnValue12' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, K2Node_DynamicCast_AsFort_Area_Of_Effect_Cloud) == 0x000108, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::K2Node_DynamicCast_AsFort_Area_Of_Effect_Cloud' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, K2Node_DynamicCast_bSuccess12) == 0x000110, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::K2Node_DynamicCast_bSuccess12' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_BooleanAND_ReturnValue) == 0x000111, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, K2Node_DynamicCast_AsBuilding_Gameplay_Actor) == 0x000118, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::K2Node_DynamicCast_AsBuilding_Gameplay_Actor' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, K2Node_DynamicCast_bSuccess123) == 0x000120, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::K2Node_DynamicCast_bSuccess123' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_BooleanAND_ReturnValue1) == 0x000121, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_BooleanAND_ReturnValue1' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_BooleanAND_ReturnValue12) == 0x000122, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_BooleanAND_ReturnValue12' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_GetTeamAffiliation_ReturnValue) == 0x000123, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_GetTeamAffiliation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_BooleanAND_ReturnValue123) == 0x000124, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_BooleanAND_ReturnValue123' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, K2Node_SwitchEnum_CmpSuccess) == 0x000125, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_BooleanAND_ReturnValue1234) == 0x000126, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_BooleanAND_ReturnValue1234' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Array_Length_ReturnValue1) == 0x000128, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Array_Length_ReturnValue1' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Less_IntInt_ReturnValue) == 0x00012C, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, Temp_int_Loop_Counter_Variable1) == 0x000130, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::Temp_int_Loop_Counter_Variable1' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Less_IntInt_ReturnValue1) == 0x000134, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Less_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Add_IntInt_ReturnValue1) == 0x000138, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Add_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_GetAllActorsOfClass_OutActors) == 0x000140, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_GetAllActorsOfClass_OutActors1) == 0x000150, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_GetAllActorsOfClass_OutActors1' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_GetAllActorsOfClass_OutActors12) == 0x000160, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_GetAllActorsOfClass_OutActors12' has a wrong offset!");
static_assert(offsetof(SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet, CallFunc_Array_Add_ReturnValue) == 0x000170, "Member 'SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}

