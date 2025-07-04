﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectionMainItemDetailsHostPanel

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemInspectionMainItemDetailsHostPanel.ItemInspectionMainItemDetailsHostPanel_C
// 0x0030 (0x02A8 - 0x0278)
class UItemInspectionMainItemDetailsHostPanel_C final : public UFortItemDetailsHostPanel
{
public:
	class UItemDetailsHeader_C*                   HeaderWidget;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemAttributesDetailWidget_C*          ItemAttributesDetailWidget;                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemCalledOutAttributesDetailWidget_C* ItemCalledOutAttributesDetailWidget;               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDescriptionDetailWidget_C*         ItemDescriptionDetailWidget;                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniItemCraftingIngredientsDetailWidget_C* MiniItemCraftingIngredientsDetailWidget;       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_0;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemInspectionMainItemDetailsHostPanel_C">();
	}
	static class UItemInspectionMainItemDetailsHostPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemInspectionMainItemDetailsHostPanel_C>();
	}
};
static_assert(alignof(UItemInspectionMainItemDetailsHostPanel_C) == 0x000008, "Wrong alignment on UItemInspectionMainItemDetailsHostPanel_C");
static_assert(sizeof(UItemInspectionMainItemDetailsHostPanel_C) == 0x0002A8, "Wrong size on UItemInspectionMainItemDetailsHostPanel_C");
static_assert(offsetof(UItemInspectionMainItemDetailsHostPanel_C, HeaderWidget) == 0x000278, "Member 'UItemInspectionMainItemDetailsHostPanel_C::HeaderWidget' has a wrong offset!");
static_assert(offsetof(UItemInspectionMainItemDetailsHostPanel_C, ItemAttributesDetailWidget) == 0x000280, "Member 'UItemInspectionMainItemDetailsHostPanel_C::ItemAttributesDetailWidget' has a wrong offset!");
static_assert(offsetof(UItemInspectionMainItemDetailsHostPanel_C, ItemCalledOutAttributesDetailWidget) == 0x000288, "Member 'UItemInspectionMainItemDetailsHostPanel_C::ItemCalledOutAttributesDetailWidget' has a wrong offset!");
static_assert(offsetof(UItemInspectionMainItemDetailsHostPanel_C, ItemDescriptionDetailWidget) == 0x000290, "Member 'UItemInspectionMainItemDetailsHostPanel_C::ItemDescriptionDetailWidget' has a wrong offset!");
static_assert(offsetof(UItemInspectionMainItemDetailsHostPanel_C, MiniItemCraftingIngredientsDetailWidget) == 0x000298, "Member 'UItemInspectionMainItemDetailsHostPanel_C::MiniItemCraftingIngredientsDetailWidget' has a wrong offset!");
static_assert(offsetof(UItemInspectionMainItemDetailsHostPanel_C, ScrollBox_0) == 0x0002A0, "Member 'UItemInspectionMainItemDetailsHostPanel_C::ScrollBox_0' has a wrong offset!");

}

