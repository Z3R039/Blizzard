﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JournalQuestRewardDetails

#include "Basic.hpp"

#include "JournalQuestRewardDetails_classes.hpp"
#include "JournalQuestRewardDetails_parameters.hpp"


namespace SDK
{

// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.ExecuteUbergraph_JournalQuestRewardDetails
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJournalQuestRewardDetails_C::ExecuteUbergraph_JournalQuestRewardDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestRewardDetails_C", "ExecuteUbergraph_JournalQuestRewardDetails");

	Params::JournalQuestRewardDetails_C_ExecuteUbergraph_JournalQuestRewardDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleCurrentQuestChangedBP
// (Event, Protected, BlueprintEvent)

void UJournalQuestRewardDetails_C::HandleCurrentQuestChangedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestRewardDetails_C", "HandleCurrentQuestChangedBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJournalQuestRewardDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestRewardDetails_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalQuestRewardDetails_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestRewardDetails_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleOnBeginSpokenDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      Title                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// const class FText&                      Subtitle                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// EFortAnnouncementDisplayPreference      DisplayPreference                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJournalQuestRewardDetails_C::HandleOnBeginSpokenDialog(class UTexture2D* Image, const class FText& Title, const class FText& Subtitle, EFortAnnouncementDisplayPreference DisplayPreference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestRewardDetails_C", "HandleOnBeginSpokenDialog");

	Params::JournalQuestRewardDetails_C_HandleOnBeginSpokenDialog Parms{};

	Parms.Image = Image;
	Parms.Title = std::move(Title);
	Parms.Subtitle = std::move(Subtitle);
	Parms.DisplayPreference = DisplayPreference;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleOnEndSpokenDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalQuestRewardDetails_C::HandleOnEndSpokenDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestRewardDetails_C", "HandleOnEndSpokenDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdateButtonStates
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalQuestRewardDetails_C::UpdateButtonStates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestRewardDetails_C", "UpdateButtonStates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdatePlayButtonState
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalQuestRewardDetails_C::UpdatePlayButtonState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestRewardDetails_C", "UpdatePlayButtonState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdatePanelInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UJournalQuestRewardDetails_C::UpdatePanelInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestRewardDetails_C", "UpdatePanelInfo");

	UObject::ProcessEvent(Func, nullptr);
}

}

