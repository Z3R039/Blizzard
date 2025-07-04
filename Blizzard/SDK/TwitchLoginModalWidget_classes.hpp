﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TwitchLoginModalWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TwitchLoginModalWidget.TwitchLoginModalWidget_C
// 0x0038 (0x0428 - 0x03F0)
class UTwitchLoginModalWidget_C final : public UFortTwitchLoginModalWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      IconTextButton;                                    // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_21;                                          // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox_101;                                      // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnCancelButtonClicked;                             // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_TwitchLoginModalWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TwitchLoginModalWidget_C">();
	}
	static class UTwitchLoginModalWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTwitchLoginModalWidget_C>();
	}
};
static_assert(alignof(UTwitchLoginModalWidget_C) == 0x000008, "Wrong alignment on UTwitchLoginModalWidget_C");
static_assert(sizeof(UTwitchLoginModalWidget_C) == 0x000428, "Wrong size on UTwitchLoginModalWidget_C");
static_assert(offsetof(UTwitchLoginModalWidget_C, UberGraphFrame) == 0x0003F0, "Member 'UTwitchLoginModalWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTwitchLoginModalWidget_C, IconTextButton) == 0x0003F8, "Member 'UTwitchLoginModalWidget_C::IconTextButton' has a wrong offset!");
static_assert(offsetof(UTwitchLoginModalWidget_C, Image_0) == 0x000400, "Member 'UTwitchLoginModalWidget_C::Image_0' has a wrong offset!");
static_assert(offsetof(UTwitchLoginModalWidget_C, Image_21) == 0x000408, "Member 'UTwitchLoginModalWidget_C::Image_21' has a wrong offset!");
static_assert(offsetof(UTwitchLoginModalWidget_C, Lightbox_101) == 0x000410, "Member 'UTwitchLoginModalWidget_C::Lightbox_101' has a wrong offset!");
static_assert(offsetof(UTwitchLoginModalWidget_C, OnCancelButtonClicked) == 0x000418, "Member 'UTwitchLoginModalWidget_C::OnCancelButtonClicked' has a wrong offset!");

}

