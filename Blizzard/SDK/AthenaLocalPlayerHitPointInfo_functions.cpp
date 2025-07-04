﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLocalPlayerHitPointInfo

#include "Basic.hpp"

#include "AthenaLocalPlayerHitPointInfo_classes.hpp"
#include "AthenaLocalPlayerHitPointInfo_parameters.hpp"


namespace SDK
{

// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.SetViewModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaPlayerViewModel*           ViewModel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLocalPlayerHitPointInfo_C::SetViewModel(class UAthenaPlayerViewModel* ViewModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLocalPlayerHitPointInfo_C", "SetViewModel");

	Params::AthenaLocalPlayerHitPointInfo_C_SetViewModel Parms{};

	Parms.ViewModel = ViewModel;

	UObject::ProcessEvent(Func, &Parms);
}

}

