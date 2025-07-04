﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionObjectiveProgress

#include "Basic.hpp"

#include "MissionObjectiveProgress_classes.hpp"
#include "MissionObjectiveProgress_parameters.hpp"


namespace SDK
{

// Function MissionObjectiveProgress.MissionObjectiveProgress_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*               Objective                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   BarIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionObjectiveProgress_C::Update(class AFortObjectiveBase* Objective, int32 BarIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionObjectiveProgress_C", "Update");

	Params::MissionObjectiveProgress_C_Update Parms{};

	Parms.Objective = Objective;
	Parms.BarIndex = BarIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionObjectiveProgress.MissionObjectiveProgress_C.GetHeightEstimate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                                  Height                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionObjectiveProgress_C::GetHeightEstimate(float* Height)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionObjectiveProgress_C", "GetHeightEstimate");

	Params::MissionObjectiveProgress_C_GetHeightEstimate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Height != nullptr)
		*Height = Parms.Height;
}

}

