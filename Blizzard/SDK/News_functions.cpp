﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: News

#include "Basic.hpp"

#include "News_classes.hpp"
#include "News_parameters.hpp"


namespace SDK
{

// Function News.News_C.ExecuteUbergraph_News
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNews_C::ExecuteUbergraph_News(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("News_C", "ExecuteUbergraph_News");

	Params::News_C_ExecuteUbergraph_News Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function News.News_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNews_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("News_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function News.News_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNews_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("News_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature");

	Params::News_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function News.News_C.AddEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      inEntryText                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UNews_C::AddEntry(const class FText& inEntryText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("News_C", "AddEntry");

	Params::News_C_AddEntry Parms{};

	Parms.inEntryText = std::move(inEntryText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function News.News_C.PopulateEntries
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   IsEmpty                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNews_C::PopulateEntries(bool* IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("News_C", "PopulateEntries");

	Params::News_C_PopulateEntries Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsEmpty != nullptr)
		*IsEmpty = Parms.IsEmpty;
}


// Function News.News_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNews_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("News_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function News.News_C.UpdateInfoPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      BodyText                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UNews_C::UpdateInfoPanel(const class FText& BodyText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("News_C", "UpdateInfoPanel");

	Params::News_C_UpdateInfoPanel Parms{};

	Parms.BodyText = std::move(BodyText);

	UObject::ProcessEvent(Func, &Parms);
}

}

