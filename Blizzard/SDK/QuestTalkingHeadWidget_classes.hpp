﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestTalkingHeadWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestTalkingHeadWidget.QuestTalkingHeadWidget_C
// 0x0040 (0x0258 - 0x0218)
class UQuestTalkingHeadWidget_C final : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               RootOverlay;                                       // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TalkingHeadIcon;                                   // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextName;                                          // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextSeparator;                                     // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextSubtitles;                                     // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFortAnnouncementDisplayPreference            DisplayPreference;                                 // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BlockTalkingHeadDisplay;                           // 0x0251(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SubtitleIsPlaying;                                 // 0x0252(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_QuestTalkingHeadWidget(int32 EntryPoint);
	void Construct();
	void SetTalkingHeadImage(class UTexture2D* Icon);
	void SetTalkingHeadName(const class FText& Title);
	void SetTalkingHeadSubtitle(const class FText& Subtitle);
	void HandleTalkingHeadBegin(class UTexture2D* Image, const class FText& Title, const class FText& Subtitle, EFortAnnouncementDisplayPreference DisplayPreference_0);
	void HandleTalkingHeadEnd();
	void HandleShouldBlockSubtitlePortraitChanged(bool ShouldBlockSubtitlePortrait);
	void UpdateVisibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestTalkingHeadWidget_C">();
	}
	static class UQuestTalkingHeadWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestTalkingHeadWidget_C>();
	}
};
static_assert(alignof(UQuestTalkingHeadWidget_C) == 0x000008, "Wrong alignment on UQuestTalkingHeadWidget_C");
static_assert(sizeof(UQuestTalkingHeadWidget_C) == 0x000258, "Wrong size on UQuestTalkingHeadWidget_C");
static_assert(offsetof(UQuestTalkingHeadWidget_C, UberGraphFrame) == 0x000218, "Member 'UQuestTalkingHeadWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestTalkingHeadWidget_C, Image_0) == 0x000220, "Member 'UQuestTalkingHeadWidget_C::Image_0' has a wrong offset!");
static_assert(offsetof(UQuestTalkingHeadWidget_C, RootOverlay) == 0x000228, "Member 'UQuestTalkingHeadWidget_C::RootOverlay' has a wrong offset!");
static_assert(offsetof(UQuestTalkingHeadWidget_C, TalkingHeadIcon) == 0x000230, "Member 'UQuestTalkingHeadWidget_C::TalkingHeadIcon' has a wrong offset!");
static_assert(offsetof(UQuestTalkingHeadWidget_C, TextName) == 0x000238, "Member 'UQuestTalkingHeadWidget_C::TextName' has a wrong offset!");
static_assert(offsetof(UQuestTalkingHeadWidget_C, TextSeparator) == 0x000240, "Member 'UQuestTalkingHeadWidget_C::TextSeparator' has a wrong offset!");
static_assert(offsetof(UQuestTalkingHeadWidget_C, TextSubtitles) == 0x000248, "Member 'UQuestTalkingHeadWidget_C::TextSubtitles' has a wrong offset!");
static_assert(offsetof(UQuestTalkingHeadWidget_C, DisplayPreference) == 0x000250, "Member 'UQuestTalkingHeadWidget_C::DisplayPreference' has a wrong offset!");
static_assert(offsetof(UQuestTalkingHeadWidget_C, BlockTalkingHeadDisplay) == 0x000251, "Member 'UQuestTalkingHeadWidget_C::BlockTalkingHeadDisplay' has a wrong offset!");
static_assert(offsetof(UQuestTalkingHeadWidget_C, SubtitleIsPlaying) == 0x000252, "Member 'UQuestTalkingHeadWidget_C::SubtitleIsPlaying' has a wrong offset!");

}

