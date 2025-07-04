﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortLiveStreamGrantWindowExpires

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C
// 0x00F8 (0x0308 - 0x0210)
class UBP_FortLiveStreamGrantWindowExpires_C final : public UFortLiveStreamGrantWindowExpires
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeExpirationText;                                // 0x0218(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          Border;                                            // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ExpirationText;                                    // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x0230(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StreamImage;                                       // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            StreamBrush;                                       // 0x0240(0x0078)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FTimespan                              SimulatedTimespan;                                 // 0x02B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   StreamTimerExpired;                                // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   StreamTimerStarted;                                // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           SimulatedExpirationTimerHandle;                    // 0x02E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         CurrentName;                                       // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalNames;                                        // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                           Viewers;                                           // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         SecondsToDisplayName;                              // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FortLiveStreamGrantWindowExpires(int32 EntryPoint);
	void TextFadedOut();
	void Handle_Wait_Between_Names();
	void OnAnimation_Finished();
	void HandleSimulateExpirationTimer();
	void OnLiveStreamingQuestWindowSelectedViewers_Event_0(const TArray<class FText>& Names);
	void OnLiveStreamingQuestWindowEnds_Event_0();
	void OnLiveStreamingQuestWindowStarts_Event_0(float Seconds);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Set_Stream_Brush(const struct FSlateBrush& InBrush);
	void Update_Expiration_Text(const struct FTimespan& Timespan);
	void Update_Name_Text();
	void Clean_Up_Name_Text();
	class UWidget* GetToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FortLiveStreamGrantWindowExpires_C">();
	}
	static class UBP_FortLiveStreamGrantWindowExpires_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FortLiveStreamGrantWindowExpires_C>();
	}
};
static_assert(alignof(UBP_FortLiveStreamGrantWindowExpires_C) == 0x000008, "Wrong alignment on UBP_FortLiveStreamGrantWindowExpires_C");
static_assert(sizeof(UBP_FortLiveStreamGrantWindowExpires_C) == 0x000308, "Wrong size on UBP_FortLiveStreamGrantWindowExpires_C");
static_assert(offsetof(UBP_FortLiveStreamGrantWindowExpires_C, UberGraphFrame) == 0x000210, "Member 'UBP_FortLiveStreamGrantWindowExpires_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FortLiveStreamGrantWindowExpires_C, FadeExpirationText) == 0x000218, "Member 'UBP_FortLiveStreamGrantWindowExpires_C::FadeExpirationText' has a wrong offset!");
static_assert(offsetof(UBP_FortLiveStreamGrantWindowExpires_C, Border) == 0x000220, "Member 'UBP_FortLiveStreamGrantWindowExpires_C::Border' has a wrong offset!");
static_assert(offsetof(UBP_FortLiveStreamGrantWindowExpires_C, ExpirationText) == 0x000228, "Member 'UBP_FortLiveStreamGrantWindowExpires_C::ExpirationText' has a wrong offset!");
static_assert(offsetof(UBP_FortLiveStreamGrantWindowExpires_C, SizeBox_0) == 0x000230, "Member 'UBP_FortLiveStreamGrantWindowExpires_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UBP_FortLiveStreamGrantWindowExpires_C, StreamImage) == 0x000238, "Member 'UBP_FortLiveStreamGrantWindowExpires_C::StreamImage' has a wrong offset!");
static_assert(offsetof(UBP_FortLiveStreamGrantWindowExpires_C, StreamBrush) == 0x000240, "Member 'UBP_FortLiveStreamGrantWindowExpires_C::StreamBrush' has a wrong offset!");
static_assert(offsetof(UBP_FortLiveStreamGrantWindowExpires_C, SimulatedTimespan) == 0x0002B8, "Member 'UBP_FortLiveStreamGrantWindowExpires_C::SimulatedTimespan' has a wrong offset!");
static_assert(offsetof(UBP_FortLiveStreamGrantWindowExpires_C, StreamTimerExpired) == 0x0002C0, "Member 'UBP_FortLiveStreamGrantWindowExpires_C::StreamTimerExpired' has a wrong offset!");
static_assert(offsetof(UBP_FortLiveStreamGrantWindowExpires_C, StreamTimerStarted) == 0x0002D0, "Member 'UBP_FortLiveStreamGrantWindowExpires_C::StreamTimerStarted' has a wrong offset!");
static_assert(offsetof(UBP_FortLiveStreamGrantWindowExpires_C, SimulatedExpirationTimerHandle) == 0x0002E0, "Member 'UBP_FortLiveStreamGrantWindowExpires_C::SimulatedExpirationTimerHandle' has a wrong offset!");
static_assert(offsetof(UBP_FortLiveStreamGrantWindowExpires_C, CurrentName) == 0x0002E8, "Member 'UBP_FortLiveStreamGrantWindowExpires_C::CurrentName' has a wrong offset!");
static_assert(offsetof(UBP_FortLiveStreamGrantWindowExpires_C, TotalNames) == 0x0002EC, "Member 'UBP_FortLiveStreamGrantWindowExpires_C::TotalNames' has a wrong offset!");
static_assert(offsetof(UBP_FortLiveStreamGrantWindowExpires_C, Viewers) == 0x0002F0, "Member 'UBP_FortLiveStreamGrantWindowExpires_C::Viewers' has a wrong offset!");
static_assert(offsetof(UBP_FortLiveStreamGrantWindowExpires_C, SecondsToDisplayName) == 0x000300, "Member 'UBP_FortLiveStreamGrantWindowExpires_C::SecondsToDisplayName' has a wrong offset!");

}

