﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MTXButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MTXButton.MTXButton_C
// 0x0028 (0x0238 - 0x0210)
class UMTXButton_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UCommonNumericTextBlock*                Amount;                                            // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Button;                                            // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextPlus;                                          // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          HidePlusButton;                                    // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          LargeSize;                                         // 0x0231(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_MTXButton(int32 EntryPoint);
	void Destruct();
	void HandleInputActionChnaged(bool bUsingGamepad);
	void BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button_0);
	void HandleLocalAccountInfoChanged(const struct FFortPrivateAccountInfo& NewInfo);
	void Construct();
	void UpdateAmount(struct FFortPrivateAccountInfo& FortPrivateAccountInfo);
	class UWidget* Get_Button_ToolTipWidget_0();
	void UpdateState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MTXButton_C">();
	}
	static class UMTXButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMTXButton_C>();
	}
};
static_assert(alignof(UMTXButton_C) == 0x000008, "Wrong alignment on UMTXButton_C");
static_assert(sizeof(UMTXButton_C) == 0x000238, "Wrong size on UMTXButton_C");
static_assert(offsetof(UMTXButton_C, UberGraphFrame) == 0x000210, "Member 'UMTXButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMTXButton_C, Amount) == 0x000218, "Member 'UMTXButton_C::Amount' has a wrong offset!");
static_assert(offsetof(UMTXButton_C, Button) == 0x000220, "Member 'UMTXButton_C::Button' has a wrong offset!");
static_assert(offsetof(UMTXButton_C, TextPlus) == 0x000228, "Member 'UMTXButton_C::TextPlus' has a wrong offset!");
static_assert(offsetof(UMTXButton_C, HidePlusButton) == 0x000230, "Member 'UMTXButton_C::HidePlusButton' has a wrong offset!");
static_assert(offsetof(UMTXButton_C, LargeSize) == 0x000231, "Member 'UMTXButton_C::LargeSize' has a wrong offset!");

}

