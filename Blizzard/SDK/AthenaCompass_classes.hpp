﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCompass

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaCompass.AthenaCompass_C
// 0x0010 (0x0358 - 0x0348)
class UAthenaCompass_C final : public UAthenaCompassBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 CompassImage_DONOTADDMOREWIDGETS;                  // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_AthenaCompass(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaCompass_C">();
	}
	static class UAthenaCompass_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCompass_C>();
	}
};
static_assert(alignof(UAthenaCompass_C) == 0x000008, "Wrong alignment on UAthenaCompass_C");
static_assert(sizeof(UAthenaCompass_C) == 0x000358, "Wrong size on UAthenaCompass_C");
static_assert(offsetof(UAthenaCompass_C, UberGraphFrame) == 0x000348, "Member 'UAthenaCompass_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaCompass_C, CompassImage_DONOTADDMOREWIDGETS) == 0x000350, "Member 'UAthenaCompass_C::CompassImage_DONOTADDMOREWIDGETS' has a wrong offset!");

}

