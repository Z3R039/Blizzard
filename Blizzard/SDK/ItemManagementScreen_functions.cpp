﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemManagementScreen

#include "Basic.hpp"

#include "ItemManagementScreen_classes.hpp"
#include "ItemManagementScreen_parameters.hpp"


namespace SDK
{

// Function ItemManagementScreen.ItemManagementScreen_C.ExecuteUbergraph_ItemManagementScreen
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::ExecuteUbergraph_ItemManagementScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "ExecuteUbergraph_ItemManagementScreen");

	Params::ItemManagementScreen_C_ExecuteUbergraph_ItemManagementScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.ShowWarningReadOnlyWIFE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Force                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementScreen_C::ShowWarningReadOnlyWIFE(bool Force)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "ShowWarningReadOnlyWIFE");

	Params::ItemManagementScreen_C_ShowWarningReadOnlyWIFE Parms{};

	Parms.Force = Force;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleMulchQuantitySelection
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleMulchQuantitySelection(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "HandleMulchQuantitySelection");

	Params::ItemManagementScreen_C_HandleMulchQuantitySelection Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleDropItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleDropItemBP(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "HandleDropItemBP");

	Params::ItemManagementScreen_C_HandleDropItemBP Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleTransferItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleTransferItemBP(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "HandleTransferItemBP");

	Params::ItemManagementScreen_C_HandleTransferItemBP Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleInspectItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleInspectItemBP(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "HandleInspectItemBP");

	Params::ItemManagementScreen_C_HandleInspectItemBP Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleConsumeItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortConsumableAccountItem*       ConsumableItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleConsumeItemBP(class UFortConsumableAccountItem* ConsumableItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "HandleConsumeItemBP");

	Params::ItemManagementScreen_C_HandleConsumeItemBP Parms{};

	Parms.ConsumableItem = ConsumableItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UItemManagementScreen_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementScreen.ItemManagementScreen_C.DefaultActionRefresh
// (BlueprintCallable, BlueprintEvent)

void UItemManagementScreen_C::DefaultActionRefresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "DefaultActionRefresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleCraftItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortSchematicItem*               SchematicItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleCraftItemBP(class UFortSchematicItem* SchematicItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "HandleCraftItemBP");

	Params::ItemManagementScreen_C_HandleCraftItemBP Parms{};

	Parms.SchematicItem = SchematicItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleEquipItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleEquipItemBP(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "HandleEquipItemBP");

	Params::ItemManagementScreen_C_HandleEquipItemBP Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleDifferentItemManagementModeSetBP
// (Event, Public, BlueprintEvent)

void UItemManagementScreen_C::HandleDifferentItemManagementModeSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "HandleDifferentItemManagementModeSetBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementScreen.ItemManagementScreen_C.DialogResult_CDD8108541BE3E4EA0F093B03D59650F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult                       Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ResultName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::DialogResult_CDD8108541BE3E4EA0F093B03D59650F(EFortDialogResult Result, class FName ResultName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "DialogResult_CDD8108541BE3E4EA0F093B03D59650F");

	Params::ItemManagementScreen_C_DialogResult_CDD8108541BE3E4EA0F093B03D59650F Parms{};

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA
// (BlueprintCallable, BlueprintEvent)

void UItemManagementScreen_C::OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementScreen.ItemManagementScreen_C.DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult                       Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ResultName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40(EFortDialogResult Result, class FName ResultName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40");

	Params::ItemManagementScreen_C_DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40 Parms{};

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleClose
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementScreen_C::HandleClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "HandleClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleInspect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        ItemToInspect                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleInspect(class UFortItem* ItemToInspect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "HandleInspect");

	Params::ItemManagementScreen_C_HandleInspect Parms{};

	Parms.ItemToInspect = ItemToInspect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.GetDescriptionText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText*                            ItemDescription                                        (Parm, OutParm)

void UItemManagementScreen_C::GetDescriptionText(class FText* ItemDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "GetDescriptionText");

	Params::ItemManagementScreen_C_GetDescriptionText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ItemDescription != nullptr)
		*ItemDescription = std::move(Parms.ItemDescription);
}


// Function ItemManagementScreen.ItemManagementScreen_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UItemManagementScreen_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "OnDrop");

	Params::ItemManagementScreen_C_OnDrop Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ItemManagementScreen.ItemManagementScreen_C.SizeInventoryPanel
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementScreen_C::SizeInventoryPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "SizeInventoryPanel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleEquip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleEquip(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "HandleEquip");

	Params::ItemManagementScreen_C_HandleEquip Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.CraftAndSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSchematicItem*               SchematicItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::CraftAndSlot(class UFortSchematicItem* SchematicItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "CraftAndSlot");

	Params::ItemManagementScreen_C_CraftAndSlot Parms{};

	Parms.SchematicItem = SchematicItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.ShowCraftError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortCraftFailCause                     FailCause                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::ShowCraftError(EFortCraftFailCause FailCause)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "ShowCraftError");

	Params::ItemManagementScreen_C_ShowCraftError Parms{};

	Parms.FailCause = FailCause;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleTransfer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        ItemToTransfer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleTransfer(class UFortItem* ItemToTransfer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "HandleTransfer");

	Params::ItemManagementScreen_C_HandleTransfer Parms{};

	Parms.ItemToTransfer = ItemToTransfer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.CreateQuantitySelector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      Title                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// const class FText&                      ConfirmText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   InitialQuantity                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxQuantity                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::CreateQuantitySelector(class UFortItem* Item, const class FText& Title, const class FText& ConfirmText, int32 InitialQuantity, int32 MaxQuantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "CreateQuantitySelector");

	Params::ItemManagementScreen_C_CreateQuantitySelector Parms{};

	Parms.Item = Item;
	Parms.Title = std::move(Title);
	Parms.ConfirmText = std::move(ConfirmText);
	Parms.InitialQuantity = InitialQuantity;
	Parms.MaxQuantity = MaxQuantity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleTransferItemsCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Quantity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                        Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleTransferItemsCallback(int32 Quantity, class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "HandleTransferItemsCallback");

	Params::ItemManagementScreen_C_HandleTransferItemsCallback Parms{};

	Parms.Quantity = Quantity;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.CompleteItemTransfer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Quantity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::CompleteItemTransfer(class UFortItem* Item, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "CompleteItemTransfer");

	Params::ItemManagementScreen_C_CompleteItemTransfer Parms{};

	Parms.Item = Item;
	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleDrop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleDrop(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "HandleDrop");

	Params::ItemManagementScreen_C_HandleDrop Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleDropItemsCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Quantity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                        Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleDropItemsCallback(int32 Quantity, class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "HandleDropItemsCallback");

	Params::ItemManagementScreen_C_HandleDropItemsCallback Parms{};

	Parms.Quantity = Quantity;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.CompleteItemDrop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Quantity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::CompleteItemDrop(class UFortItem* Item, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "CompleteItemDrop");

	Params::ItemManagementScreen_C_CompleteItemDrop Parms{};

	Parms.Item = Item;
	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleMulchItemsCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Quantity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                        Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleMulchItemsCallback(int32 Quantity, class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "HandleMulchItemsCallback");

	Params::ItemManagementScreen_C_HandleMulchItemsCallback Parms{};

	Parms.Quantity = Quantity;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementScreen.ItemManagementScreen_C.IsEquipAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*                        Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   EquipAvailable                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementScreen_C::IsEquipAvailable(class UFortItem* Item, bool* EquipAvailable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "IsEquipAvailable");

	Params::ItemManagementScreen_C_IsEquipAvailable Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

	if (EquipAvailable != nullptr)
		*EquipAvailable = Parms.EquipAvailable;
}


// Function ItemManagementScreen.ItemManagementScreen_C.SizeScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementScreen_C::SizeScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "SizeScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementScreen.ItemManagementScreen_C.GuardActionForReadOnlyWIFE
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Proceed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementScreen_C::GuardActionForReadOnlyWIFE(bool* Proceed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "GuardActionForReadOnlyWIFE");

	Params::ItemManagementScreen_C_GuardActionForReadOnlyWIFE Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Proceed != nullptr)
		*Proceed = Parms.Proceed;
}


// Function ItemManagementScreen.ItemManagementScreen_C.GetMaxTransferCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UFortItem*                        Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32*                                  Count                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::GetMaxTransferCount(class UFortItem* Item, int32* Count) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementScreen_C", "GetMaxTransferCount");

	Params::ItemManagementScreen_C_GetMaxTransferCount Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;
}

}

