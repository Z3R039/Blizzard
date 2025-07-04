﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventStoreHostPanels

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventStoreHostPanels.EventStoreHostPanels_C
// 0x0020 (0x0298 - 0x0278)
class UEventStoreHostPanels_C final : public UFortItemDetailsHostPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(Transient, DuplicateTransient)
	class UHorizontalTabList_C*                   DetailPanelTabList;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  DetailPanelWidgetSwitcher;                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ItemSelected;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EventStoreHostPanels(int32 EntryPoint);
	void BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void Construct();
	void HandleDifferentItemToDetailSet();
	void BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void Setup_Details_Panels();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventStoreHostPanels_C">();
	}
	static class UEventStoreHostPanels_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventStoreHostPanels_C>();
	}
};
static_assert(alignof(UEventStoreHostPanels_C) == 0x000008, "Wrong alignment on UEventStoreHostPanels_C");
static_assert(sizeof(UEventStoreHostPanels_C) == 0x000298, "Wrong size on UEventStoreHostPanels_C");
static_assert(offsetof(UEventStoreHostPanels_C, UberGraphFrame) == 0x000278, "Member 'UEventStoreHostPanels_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventStoreHostPanels_C, DetailPanelTabList) == 0x000280, "Member 'UEventStoreHostPanels_C::DetailPanelTabList' has a wrong offset!");
static_assert(offsetof(UEventStoreHostPanels_C, DetailPanelWidgetSwitcher) == 0x000288, "Member 'UEventStoreHostPanels_C::DetailPanelWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UEventStoreHostPanels_C, ItemSelected) == 0x000290, "Member 'UEventStoreHostPanels_C::ItemSelected' has a wrong offset!");

}

