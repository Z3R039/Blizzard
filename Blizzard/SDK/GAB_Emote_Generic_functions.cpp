﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_Emote_Generic

#include "Basic.hpp"

#include "GAB_Emote_Generic_classes.hpp"
#include "GAB_Emote_Generic_parameters.hpp"


namespace SDK
{

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.ExecuteUbergraph_GAB_Emote_Generic
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_Emote_Generic_C::ExecuteUbergraph_GAB_Emote_Generic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "ExecuteUbergraph_GAB_Emote_Generic");

	Params::GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_Emote_Generic_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_Emote_Generic_C::OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D");

	Params::GAB_Emote_Generic_C_OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.Triggered_DE7019AA4E006879EDD264899869FEE2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_Emote_Generic_C::Triggered_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "Triggered_DE7019AA4E006879EDD264899869FEE2");

	Params::GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.Cancelled_DE7019AA4E006879EDD264899869FEE2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_Emote_Generic_C::Cancelled_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "Cancelled_DE7019AA4E006879EDD264899869FEE2");

	Params::GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.Completed_DE7019AA4E006879EDD264899869FEE2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_Emote_Generic_C::Completed_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "Completed_DE7019AA4E006879EDD264899869FEE2");

	Params::GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.K2_OnEndAbility
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_Emote_Generic_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "K2_OnEndAbility");

	Params::GAB_Emote_Generic_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.GetBodyTypeAndGender
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortCustomBodyType*                    BodyType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortCustomGender*                      Gender                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_Emote_Generic_C::GetBodyTypeAndGender(EFortCustomBodyType* BodyType, EFortCustomGender* Gender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "GetBodyTypeAndGender");

	Params::GAB_Emote_Generic_C_GetBodyTypeAndGender Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BodyType != nullptr)
		*BodyType = Parms.BodyType;

	if (Gender != nullptr)
		*Gender = Parms.Gender;
}

}

