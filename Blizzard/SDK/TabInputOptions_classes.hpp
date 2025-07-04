﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabInputOptions

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TabInputOptions.TabInputOptions_C
// 0x0050 (0x02A8 - 0x0258)
class UTabInputOptions_C final : public UFortInputOptions
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(Transient, DuplicateTransient)
	class UCommonBorder*                          OverlayBorder;                                     // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Currently_Selected_Input;                          // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Currently_Primary;                              // 0x026C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26D[0x3];                                      // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   Enable_Overlay;                                    // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   Disable_Overlay;                                   // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Using_Gamepad;                                     // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_291[0x7];                                      // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   Gamepad_Changed;                                   // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_TabInputOptions(int32 EntryPoint);
	void UnbindClicked(int32 Number_In_List);
	void HandleUsingGamepadChanged(bool bUsingGamepad);
	void BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void UpdateOptionsTab();
	void CenterOnTab();
	void Input_Clicked(int32 Number_In_List, bool Is_Primary_Button);
	void Construct();
	void Overlay_Key_Pressed(const struct FKey& NewKey);
	void Set_Input_Enabled();
	void NewFunction_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TabInputOptions_C">();
	}
	static class UTabInputOptions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTabInputOptions_C>();
	}
};
static_assert(alignof(UTabInputOptions_C) == 0x000008, "Wrong alignment on UTabInputOptions_C");
static_assert(sizeof(UTabInputOptions_C) == 0x0002A8, "Wrong size on UTabInputOptions_C");
static_assert(offsetof(UTabInputOptions_C, UberGraphFrame) == 0x000258, "Member 'UTabInputOptions_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, OverlayBorder) == 0x000260, "Member 'UTabInputOptions_C::OverlayBorder' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, Currently_Selected_Input) == 0x000268, "Member 'UTabInputOptions_C::Currently_Selected_Input' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, Is_Currently_Primary) == 0x00026C, "Member 'UTabInputOptions_C::Is_Currently_Primary' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, Enable_Overlay) == 0x000270, "Member 'UTabInputOptions_C::Enable_Overlay' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, Disable_Overlay) == 0x000280, "Member 'UTabInputOptions_C::Disable_Overlay' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, Using_Gamepad) == 0x000290, "Member 'UTabInputOptions_C::Using_Gamepad' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, Gamepad_Changed) == 0x000298, "Member 'UTabInputOptions_C::Gamepad_Changed' has a wrong offset!");

}

