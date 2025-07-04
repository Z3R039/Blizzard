﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MulchRefundItemQuantityListEntry

#include "Basic.hpp"

#include "MulchRefundItemQuantityListEntry_classes.hpp"
#include "MulchRefundItemQuantityListEntry_parameters.hpp"


namespace SDK
{

// Function MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C.ExecuteUbergraph_MulchRefundItemQuantityListEntry
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMulchRefundItemQuantityListEntry_C::ExecuteUbergraph_MulchRefundItemQuantityListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MulchRefundItemQuantityListEntry_C", "ExecuteUbergraph_MulchRefundItemQuantityListEntry");

	Params::MulchRefundItemQuantityListEntry_C_ExecuteUbergraph_MulchRefundItemQuantityListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMulchRefundItemQuantityListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MulchRefundItemQuantityListEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// const bool                              IsBeingReset                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMulchRefundItemQuantityListEntry_C::HandleDifferentItemOrQuantitySetBP(const bool IsBeingReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MulchRefundItemQuantityListEntry_C", "HandleDifferentItemOrQuantitySetBP");

	Params::MulchRefundItemQuantityListEntry_C_HandleDifferentItemOrQuantitySetBP Parms{};

	Parms.IsBeingReset = IsBeingReset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C.UpdateItemAndQuantity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const bool                              DirectlySetQuantity                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMulchRefundItemQuantityListEntry_C::UpdateItemAndQuantity(const bool DirectlySetQuantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MulchRefundItemQuantityListEntry_C", "UpdateItemAndQuantity");

	Params::MulchRefundItemQuantityListEntry_C_UpdateItemAndQuantity Parms{};

	Parms.DirectlySetQuantity = DirectlySetQuantity;

	UObject::ProcessEvent(Func, &Parms);
}

}

