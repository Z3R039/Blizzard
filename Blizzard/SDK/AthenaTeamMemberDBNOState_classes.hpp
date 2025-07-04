﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaTeamMemberDBNOState

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C
// 0x0028 (0x0230 - 0x0208)
class UAthenaTeamMemberDBNOState_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0208(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 DBNOIndicator;                                     // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageTimer;                                        // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESlateVisibility                              Visibility_When_Not_DBNO;                          // 0x0220(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_221[0x3];                                      // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReviveTimeMax;                                     // 0x0224(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsReviving;                                        // 0x0228(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDBNO;                                            // 0x0229(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_AthenaTeamMemberDBNOState(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Set_DBNO(bool Is_DBNO);
	void Set_Reviving(bool Is_Reviving);
	void RefreshVisuals();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaTeamMemberDBNOState_C">();
	}
	static class UAthenaTeamMemberDBNOState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaTeamMemberDBNOState_C>();
	}
};
static_assert(alignof(UAthenaTeamMemberDBNOState_C) == 0x000008, "Wrong alignment on UAthenaTeamMemberDBNOState_C");
static_assert(sizeof(UAthenaTeamMemberDBNOState_C) == 0x000230, "Wrong size on UAthenaTeamMemberDBNOState_C");
static_assert(offsetof(UAthenaTeamMemberDBNOState_C, UberGraphFrame) == 0x000208, "Member 'UAthenaTeamMemberDBNOState_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberDBNOState_C, DBNOIndicator) == 0x000210, "Member 'UAthenaTeamMemberDBNOState_C::DBNOIndicator' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberDBNOState_C, ImageTimer) == 0x000218, "Member 'UAthenaTeamMemberDBNOState_C::ImageTimer' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberDBNOState_C, Visibility_When_Not_DBNO) == 0x000220, "Member 'UAthenaTeamMemberDBNOState_C::Visibility_When_Not_DBNO' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberDBNOState_C, ReviveTimeMax) == 0x000224, "Member 'UAthenaTeamMemberDBNOState_C::ReviveTimeMax' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberDBNOState_C, IsReviving) == 0x000228, "Member 'UAthenaTeamMemberDBNOState_C::IsReviving' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberDBNOState_C, IsDBNO) == 0x000229, "Member 'UAthenaTeamMemberDBNOState_C::IsDBNO' has a wrong offset!");

}

