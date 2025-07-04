﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_PartyIconsDisplay

#include "Basic.hpp"

#include "Athena_PartyIconsDisplay_classes.hpp"
#include "Athena_PartyIconsDisplay_parameters.hpp"


namespace SDK
{

// Function Athena_PartyIconsDisplay.Athena_PartyIconsDisplay_C.ExecuteUbergraph_Athena_PartyIconsDisplay
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_PartyIconsDisplay_C::ExecuteUbergraph_Athena_PartyIconsDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PartyIconsDisplay_C", "ExecuteUbergraph_Athena_PartyIconsDisplay");

	Params::Athena_PartyIconsDisplay_C_ExecuteUbergraph_Athena_PartyIconsDisplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_PartyIconsDisplay.Athena_PartyIconsDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthena_PartyIconsDisplay_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PartyIconsDisplay_C", "PreConstruct");

	Params::Athena_PartyIconsDisplay_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_PartyIconsDisplay.Athena_PartyIconsDisplay_C.SetPartySize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PartySize                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_PartyIconsDisplay_C::SetPartySize(int32 PartySize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PartyIconsDisplay_C", "SetPartySize");

	Params::Athena_PartyIconsDisplay_C_SetPartySize Parms{};

	Parms.PartySize = PartySize;

	UObject::ProcessEvent(Func, &Parms);
}

}

