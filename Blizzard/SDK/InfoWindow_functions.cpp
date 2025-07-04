﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InfoWindow

#include "Basic.hpp"

#include "InfoWindow_classes.hpp"
#include "InfoWindow_parameters.hpp"


namespace SDK
{

// Function InfoWindow.InfoWindow_C.ExecuteUbergraph_InfoWindow
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfoWindow_C::ExecuteUbergraph_InfoWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoWindow_C", "ExecuteUbergraph_InfoWindow");

	Params::InfoWindow_C_ExecuteUbergraph_InfoWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InfoWindow.InfoWindow_C.Set Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*              Entry_Item_Definition                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfoWindow_C::Set_Info(class UFortItemDefinition* Entry_Item_Definition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoWindow_C", "Set Info");

	Params::InfoWindow_C_Set_Info Parms{};

	Parms.Entry_Item_Definition = Entry_Item_Definition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InfoWindow.InfoWindow_C.BndEvt__InfoButtons_K2Node_ComponentBoundEvent_212_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfoWindow_C::BndEvt__InfoButtons_K2Node_ComponentBoundEvent_212_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoWindow_C", "BndEvt__InfoButtons_K2Node_ComponentBoundEvent_212_OnListViewItemWidgetCreated__DelegateSignature");

	Params::InfoWindow_C_BndEvt__InfoButtons_K2Node_ComponentBoundEvent_212_OnListViewItemWidgetCreated__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InfoWindow.InfoWindow_C.OnBeginIntro
// (Event, Public, BlueprintEvent)

void UInfoWindow_C::OnBeginIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoWindow_C", "OnBeginIntro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InfoWindow.InfoWindow_C.OnBeginOutro
// (Event, Public, BlueprintEvent)

void UInfoWindow_C::OnBeginOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoWindow_C", "OnBeginOutro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InfoWindow.InfoWindow_C.BndEvt__Lightbox_K2Node_ComponentBoundEvent_1_OutroEnded__DelegateSignature
// (BlueprintEvent)

void UInfoWindow_C::BndEvt__Lightbox_K2Node_ComponentBoundEvent_1_OutroEnded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoWindow_C", "BndEvt__Lightbox_K2Node_ComponentBoundEvent_1_OutroEnded__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InfoWindow.InfoWindow_C.BndEvt__Lightbox_K2Node_ComponentBoundEvent_0_IntroEnded__DelegateSignature
// (BlueprintEvent)

void UInfoWindow_C::BndEvt__Lightbox_K2Node_ComponentBoundEvent_0_IntroEnded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoWindow_C", "BndEvt__Lightbox_K2Node_ComponentBoundEvent_0_IntroEnded__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InfoWindow.InfoWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInfoWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoWindow_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InfoWindow.InfoWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInfoWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InfoWindow.InfoWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfoWindow_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoWindow_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature");

	Params::InfoWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InfoWindow.InfoWindow_C.AddInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItemDefinition*>&     Info_Items                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// const class FText&                      Title_0                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UInfoWindow_C::AddInfo(TArray<class UFortItemDefinition*>& Info_Items, const class FText& Title_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoWindow_C", "AddInfo");

	Params::InfoWindow_C_AddInfo Parms{};

	Parms.Info_Items = std::move(Info_Items);
	Parms.Title_0 = std::move(Title_0);

	UObject::ProcessEvent(Func, &Parms);

	Info_Items = std::move(Parms.Info_Items);
}


// Function InfoWindow.InfoWindow_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UInfoWindow_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoWindow_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}

}

