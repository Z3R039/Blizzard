﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: T3_Main

#include "Basic.hpp"

#include "T3_Main_classes.hpp"
#include "T3_Main_parameters.hpp"


namespace SDK
{

// Function T3_Main.T3_Main_C.ExecuteUbergraph_T3_Main
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UT3_Main_C::ExecuteUbergraph_T3_Main(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("T3_Main_C", "ExecuteUbergraph_T3_Main");

	Params::T3_Main_C_ExecuteUbergraph_T3_Main Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function T3_Main.T3_Main_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UT3_Main_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("T3_Main_C", "PreConstruct");

	Params::T3_Main_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function T3_Main.T3_Main_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UT3_Main_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("T3_Main_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

