﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MessageCenterListItem

#include "Basic.hpp"

#include "MessageCenterListItem_classes.hpp"
#include "MessageCenterListItem_parameters.hpp"


namespace SDK
{

// Function MessageCenterListItem.MessageCenterListItem_C.ExecuteUbergraph_MessageCenterListItem
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMessageCenterListItem_C::ExecuteUbergraph_MessageCenterListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageCenterListItem_C", "ExecuteUbergraph_MessageCenterListItem");

	Params::MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MessageCenterListItem.MessageCenterListItem_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMessageCenterListItem_C::SetSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageCenterListItem_C", "SetSelected");

	Params::MessageCenterListItem_C_SetSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MessageCenterListItem.MessageCenterListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMessageCenterListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageCenterListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MessageCenterListItem.MessageCenterListItem_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*                  OwningList                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMessageCenterListItem_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageCenterListItem_C", "SetData");

	Params::MessageCenterListItem_C_SetData Parms{};

	Parms.InData = InData;
	Parms.OwningList = OwningList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MessageCenterListItem.MessageCenterListItem_C.Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMessageCenterListItem_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageCenterListItem_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MessageCenterListItem.MessageCenterListItem_C.ToggleExpansion
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMessageCenterListItem_C::ToggleExpansion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageCenterListItem_C", "ToggleExpansion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MessageCenterListItem.MessageCenterListItem_C.SetIndexInList
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndexInList                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMessageCenterListItem_C::SetIndexInList(int32 InIndexInList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageCenterListItem_C", "SetIndexInList");

	Params::MessageCenterListItem_C_SetIndexInList Parms{};

	Parms.InIndexInList = InIndexInList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MessageCenterListItem.MessageCenterListItem_C.SetExpanded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bExpanded                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMessageCenterListItem_C::SetExpanded(bool bExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageCenterListItem_C", "SetExpanded");

	Params::MessageCenterListItem_C_SetExpanded Parms{};

	Parms.bExpanded = bExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MessageCenterListItem.MessageCenterListItem_C.RegisterOnClicked
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TDelegate<void(class UUserWidget* Widget)>&Callback                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)

void UMessageCenterListItem_C::RegisterOnClicked(const TDelegate<void(class UUserWidget* Widget)>& Callback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageCenterListItem_C", "RegisterOnClicked");

	Params::MessageCenterListItem_C_RegisterOnClicked Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MessageCenterListItem.MessageCenterListItem_C.Private_OnExpanderArrowShiftClicked
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMessageCenterListItem_C::Private_OnExpanderArrowShiftClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageCenterListItem_C", "Private_OnExpanderArrowShiftClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MessageCenterListItem.MessageCenterListItem_C.OnReleaseToPool
// (Event, Protected, BlueprintEvent)

void UMessageCenterListItem_C::OnReleaseToPool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageCenterListItem_C", "OnReleaseToPool");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MessageCenterListItem.MessageCenterListItem_C.OnAcquireFromPool
// (Event, Protected, BlueprintEvent)

void UMessageCenterListItem_C::OnAcquireFromPool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageCenterListItem_C", "OnAcquireFromPool");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MessageCenterListItem.MessageCenterListItem_C.SetMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINotification*              MESSAGE_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMessageCenterListItem_C::SetMessage(class UFortUINotification* MESSAGE_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageCenterListItem_C", "SetMessage");

	Params::MessageCenterListItem_C_SetMessage Parms{};

	Parms.MESSAGE_0 = MESSAGE_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MessageCenterListItem.MessageCenterListItem_C.ShowText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*                 TextBlock                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMessageCenterListItem_C::ShowText(const class FText& Text, class UCommonTextBlock* TextBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageCenterListItem_C", "ShowText");

	Params::MessageCenterListItem_C_ShowText Parms{};

	Parms.Text = std::move(Text);
	Parms.TextBlock = TextBlock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MessageCenterListItem.MessageCenterListItem_C.GetData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UMessageCenterListItem_C::GetData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageCenterListItem_C", "GetData");

	Params::MessageCenterListItem_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MessageCenterListItem.MessageCenterListItem_C.IsItemExpanded
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMessageCenterListItem_C::IsItemExpanded() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageCenterListItem_C", "IsItemExpanded");

	Params::MessageCenterListItem_C_IsItemExpanded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MessageCenterListItem.MessageCenterListItem_C.DoesItemHaveChildren
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UMessageCenterListItem_C::DoesItemHaveChildren() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageCenterListItem_C", "DoesItemHaveChildren");

	Params::MessageCenterListItem_C_DoesItemHaveChildren Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MessageCenterListItem.MessageCenterListItem_C.GetIndentLevel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UMessageCenterListItem_C::GetIndentLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageCenterListItem_C", "GetIndentLevel");

	Params::MessageCenterListItem_C_GetIndentLevel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

