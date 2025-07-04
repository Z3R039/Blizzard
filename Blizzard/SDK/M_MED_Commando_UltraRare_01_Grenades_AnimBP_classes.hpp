﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M_MED_Commando_UltraRare_01_Grenades_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass M_MED_Commando_UltraRare_01_Grenades_AnimBP.M_MED_Commando_UltraRare_01_Grenades_AnimBP_C
// 0x06D0 (0x0B00 - 0x0430)
class UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_D538FA694F446F7C3BDDA496F52DCC39; // 0x0438(0x0048)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_424846814089F30582830E8B933C3990; // 0x0480(0x0048)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_12F9290B4E1787AD3E13A8896B2D1ECB; // 0x04C8(0x00E8)(ContainsInstancedReference)
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_78E4EF104D4896528BA2AD985595525F; // 0x05B0(0x0280)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_2CC582EB4A65C2830149E3BB1FCBA3B1; // 0x0830(0x0280)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_9D1A4F504DD0FC9ED47510AC74DA6B87; // 0x0AB0(0x0048)()
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x0AF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_UltraRare_01_Grenades_AnimBP_AnimGraphNode_CopyPoseFromMesh_12F9290B4E1787AD3E13A8896B2D1ECB();
	void ExecuteUbergraph_M_MED_Commando_UltraRare_01_Grenades_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"M_MED_Commando_UltraRare_01_Grenades_AnimBP_C">();
	}
	static class UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C>();
	}
};
static_assert(alignof(UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C) == 0x000008, "Wrong alignment on UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C");
static_assert(sizeof(UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C) == 0x000B00, "Wrong size on UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C");
static_assert(offsetof(UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C, UberGraphFrame) == 0x000430, "Member 'UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C, AnimGraphNode_Root_D538FA694F446F7C3BDDA496F52DCC39) == 0x000438, "Member 'UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C::AnimGraphNode_Root_D538FA694F446F7C3BDDA496F52DCC39' has a wrong offset!");
static_assert(offsetof(UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C, AnimGraphNode_LocalToComponentSpace_424846814089F30582830E8B933C3990) == 0x000480, "Member 'UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C::AnimGraphNode_LocalToComponentSpace_424846814089F30582830E8B933C3990' has a wrong offset!");
static_assert(offsetof(UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_12F9290B4E1787AD3E13A8896B2D1ECB) == 0x0004C8, "Member 'UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_12F9290B4E1787AD3E13A8896B2D1ECB' has a wrong offset!");
static_assert(offsetof(UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C, AnimGraphNode_AnimDynamics_78E4EF104D4896528BA2AD985595525F) == 0x0005B0, "Member 'UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C::AnimGraphNode_AnimDynamics_78E4EF104D4896528BA2AD985595525F' has a wrong offset!");
static_assert(offsetof(UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C, AnimGraphNode_AnimDynamics_2CC582EB4A65C2830149E3BB1FCBA3B1) == 0x000830, "Member 'UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C::AnimGraphNode_AnimDynamics_2CC582EB4A65C2830149E3BB1FCBA3B1' has a wrong offset!");
static_assert(offsetof(UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C, AnimGraphNode_ComponentToLocalSpace_9D1A4F504DD0FC9ED47510AC74DA6B87) == 0x000AB0, "Member 'UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C::AnimGraphNode_ComponentToLocalSpace_9D1A4F504DD0FC9ED47510AC74DA6B87' has a wrong offset!");
static_assert(offsetof(UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C, MeshToCopy) == 0x000AF8, "Member 'UM_MED_Commando_UltraRare_01_Grenades_AnimBP_C::MeshToCopy' has a wrong offset!");

}

