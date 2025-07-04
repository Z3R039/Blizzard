﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TracerGeneric_Athena

#include "Basic.hpp"

#include "TracerGeneric_Athena_classes.hpp"
#include "TracerGeneric_Athena_parameters.hpp"


namespace SDK
{

// Function TracerGeneric_Athena.TracerGeneric_Athena_C.ExecuteUbergraph_TracerGeneric_Athena
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATracerGeneric_Athena_C::ExecuteUbergraph_TracerGeneric_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TracerGeneric_Athena_C", "ExecuteUbergraph_TracerGeneric_Athena");

	Params::TracerGeneric_Athena_C_ExecuteUbergraph_TracerGeneric_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TracerGeneric_Athena.TracerGeneric_Athena_C.OnDead
// (Event, Public, BlueprintEvent)

void ATracerGeneric_Athena_C::OnDead()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TracerGeneric_Athena_C", "OnDead");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TracerGeneric_Athena.TracerGeneric_Athena_C.OnInit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FVector&                   Start_0                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   End_0                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATracerGeneric_Athena_C::OnInit(const struct FVector& Start_0, const struct FVector& End_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TracerGeneric_Athena_C", "OnInit");

	Params::TracerGeneric_Athena_C_OnInit Parms{};

	Parms.Start_0 = std::move(Start_0);
	Parms.End_0 = std::move(End_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TracerGeneric_Athena.TracerGeneric_Athena_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATracerGeneric_Athena_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TracerGeneric_Athena_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TracerGeneric_Athena.TracerGeneric_Athena_C.TrackPassBy
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Changed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float*                                  Pass_Distance                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATracerGeneric_Athena_C::TrackPassBy(bool* Changed, float* Pass_Distance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TracerGeneric_Athena_C", "TrackPassBy");

	Params::TracerGeneric_Athena_C_TrackPassBy Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Changed != nullptr)
		*Changed = Parms.Changed;

	if (Pass_Distance != nullptr)
		*Pass_Distance = Parms.Pass_Distance;
}


// Function TracerGeneric_Athena.TracerGeneric_Athena_C.PlayPassBySound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATracerGeneric_Athena_C::PlayPassBySound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TracerGeneric_Athena_C", "PlayPassBySound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TracerGeneric_Athena.TracerGeneric_Athena_C.GetLocalPawnForPassBy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPlayerPawn*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AFortPlayerPawn* ATracerGeneric_Athena_C::GetLocalPawnForPassBy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TracerGeneric_Athena_C", "GetLocalPawnForPassBy");

	Params::TracerGeneric_Athena_C_GetLocalPawnForPassBy Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

