﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemManagementEquipSlot

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemManagementEquipSlot.ItemManagementEquipSlot_C
// 0x0048 (0x0260 - 0x0218)
class UItemManagementEquipSlot_C final : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 DropTarget;                                        // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EmptyImage;                                        // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               InputActionOverlay;                                // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    InputActionWidget;                                 // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 ItemCard;                                          // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Selection;                                         // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SlotIndex;                                         // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_254[0x4];                                      // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemManagementScreen*              HostItemManagementScreen;                          // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemManagementEquipSlot(int32 EntryPoint);
	void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_6_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void Construct();
	void RefreshItem();
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void SetSelected(bool Selected);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void IsSelected(bool* Selected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemManagementEquipSlot_C">();
	}
	static class UItemManagementEquipSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemManagementEquipSlot_C>();
	}
};
static_assert(alignof(UItemManagementEquipSlot_C) == 0x000008, "Wrong alignment on UItemManagementEquipSlot_C");
static_assert(sizeof(UItemManagementEquipSlot_C) == 0x000260, "Wrong size on UItemManagementEquipSlot_C");
static_assert(offsetof(UItemManagementEquipSlot_C, UberGraphFrame) == 0x000218, "Member 'UItemManagementEquipSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemManagementEquipSlot_C, DropTarget) == 0x000220, "Member 'UItemManagementEquipSlot_C::DropTarget' has a wrong offset!");
static_assert(offsetof(UItemManagementEquipSlot_C, EmptyImage) == 0x000228, "Member 'UItemManagementEquipSlot_C::EmptyImage' has a wrong offset!");
static_assert(offsetof(UItemManagementEquipSlot_C, InputActionOverlay) == 0x000230, "Member 'UItemManagementEquipSlot_C::InputActionOverlay' has a wrong offset!");
static_assert(offsetof(UItemManagementEquipSlot_C, InputActionWidget) == 0x000238, "Member 'UItemManagementEquipSlot_C::InputActionWidget' has a wrong offset!");
static_assert(offsetof(UItemManagementEquipSlot_C, ItemCard) == 0x000240, "Member 'UItemManagementEquipSlot_C::ItemCard' has a wrong offset!");
static_assert(offsetof(UItemManagementEquipSlot_C, Selection) == 0x000248, "Member 'UItemManagementEquipSlot_C::Selection' has a wrong offset!");
static_assert(offsetof(UItemManagementEquipSlot_C, SlotIndex) == 0x000250, "Member 'UItemManagementEquipSlot_C::SlotIndex' has a wrong offset!");
static_assert(offsetof(UItemManagementEquipSlot_C, HostItemManagementScreen) == 0x000258, "Member 'UItemManagementEquipSlot_C::HostItemManagementScreen' has a wrong offset!");

}

