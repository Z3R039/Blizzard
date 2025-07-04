﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemManagementModeDetailsPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemManagementModeDetailsPanel.ItemManagementModeDetailsPanel_C
// 0x0008 (0x0248 - 0x0240)
class UItemManagementModeDetailsPanel_C final : public UFortItemManagementModeDetailsPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_ItemManagementModeDetailsPanel(int32 EntryPoint);
	void HandleDifferentItemManagementModeSetBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemManagementModeDetailsPanel_C">();
	}
	static class UItemManagementModeDetailsPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemManagementModeDetailsPanel_C>();
	}
};
static_assert(alignof(UItemManagementModeDetailsPanel_C) == 0x000008, "Wrong alignment on UItemManagementModeDetailsPanel_C");
static_assert(sizeof(UItemManagementModeDetailsPanel_C) == 0x000248, "Wrong size on UItemManagementModeDetailsPanel_C");
static_assert(offsetof(UItemManagementModeDetailsPanel_C, UberGraphFrame) == 0x000240, "Member 'UItemManagementModeDetailsPanel_C::UberGraphFrame' has a wrong offset!");

}

