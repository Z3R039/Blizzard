﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FeedbackManager

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FeedbackManager.FeedbackManager_C
// 0x0008 (0x0440 - 0x0438)
class AFeedbackManager_C final : public AFortFeedbackManager
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FeedbackManager_C">();
	}
	static class AFeedbackManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFeedbackManager_C>();
	}
};
static_assert(alignof(AFeedbackManager_C) == 0x000008, "Wrong alignment on AFeedbackManager_C");
static_assert(sizeof(AFeedbackManager_C) == 0x000440, "Wrong size on AFeedbackManager_C");
static_assert(offsetof(AFeedbackManager_C, DefaultSceneRoot) == 0x000438, "Member 'AFeedbackManager_C::DefaultSceneRoot' has a wrong offset!");

}

