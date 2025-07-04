﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SurvivorAnchorLocationsToAvoidContext

#include "Basic.hpp"

#include "SurvivorAnchorLocationsToAvoidContext_classes.hpp"
#include "SurvivorAnchorLocationsToAvoidContext_parameters.hpp"


namespace SDK
{

// Function SurvivorAnchorLocationsToAvoidContext.SurvivorAnchorLocationsToAvoidContext_C.ProvideLocationsSet
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                          QuerierObject                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           QuerierActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>*                 ResultingLocationSet                                   (Parm, OutParm, ZeroConstructor)

void USurvivorAnchorLocationsToAvoidContext_C::ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorAnchorLocationsToAvoidContext_C", "ProvideLocationsSet");

	Params::SurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingLocationSet != nullptr)
		*ResultingLocationSet = std::move(Parms.ResultingLocationSet);
}

}

