﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DisabledQuestWidget

#include "Basic.hpp"

#include "DisabledQuestWidget_classes.hpp"
#include "DisabledQuestWidget_parameters.hpp"


namespace SDK
{

// Function DisabledQuestWidget.DisabledQuestWidget_C.SetQuestItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition*         QuestDefinition_0                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDisabledQuestWidget_C::SetQuestItem(class UFortQuestItemDefinition* QuestDefinition_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisabledQuestWidget_C", "SetQuestItem");

	Params::DisabledQuestWidget_C_SetQuestItem Parms{};

	Parms.QuestDefinition_0 = QuestDefinition_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DisabledQuestWidget.DisabledQuestWidget_C.FilterObjectives
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDisabledQuestWidget_C::FilterObjectives()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisabledQuestWidget_C", "FilterObjectives");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DisabledQuestWidget.DisabledQuestWidget_C.UpdateObjectiveWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UDisabledQuestWidget_C::UpdateObjectiveWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisabledQuestWidget_C", "UpdateObjectiveWidgets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DisabledQuestWidget.DisabledQuestWidget_C.CreateAllObjectiveWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDisabledQuestWidget_C::CreateAllObjectiveWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisabledQuestWidget_C", "CreateAllObjectiveWidgets");

	UObject::ProcessEvent(Func, nullptr);
}

}

