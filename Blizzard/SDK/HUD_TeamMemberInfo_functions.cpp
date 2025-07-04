﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_TeamMemberInfo

#include "Basic.hpp"

#include "HUD_TeamMemberInfo_classes.hpp"
#include "HUD_TeamMemberInfo_parameters.hpp"


namespace SDK
{

// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.ExecuteUbergraph_HUD-TeamMemberInfo
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_TeamMemberInfo_C::ExecuteUbergraph_HUD_TeamMemberInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-TeamMemberInfo_C", "ExecuteUbergraph_HUD-TeamMemberInfo");

	Params::HUD_TeamMemberInfo_C_ExecuteUbergraph_HUD_TeamMemberInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.OnPlayerAttributesChanged
// (Event, Public, BlueprintEvent)

void UHUD_TeamMemberInfo_C::OnPlayerAttributesChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-TeamMemberInfo_C", "OnPlayerAttributesChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.OnPlayerInfoChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// const struct FFortTeamMemberInfo&       NewInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUD_TeamMemberInfo_C::OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-TeamMemberInfo_C", "OnPlayerInfoChanged");

	Params::HUD_TeamMemberInfo_C_OnPlayerInfoChanged Parms{};

	Parms.NewInfo = std::move(NewInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_TeamMemberInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-TeamMemberInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFortTeamMemberInfo&       UpdatedMemberInfo                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUD_TeamMemberInfo_C::Update(const struct FFortTeamMemberInfo& UpdatedMemberInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-TeamMemberInfo_C", "Update");

	Params::HUD_TeamMemberInfo_C_Update Parms{};

	Parms.UpdatedMemberInfo = std::move(UpdatedMemberInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.SetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_TeamMemberInfo_C::SetHealth(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-TeamMemberInfo_C", "SetHealth");

	Params::HUD_TeamMemberInfo_C_SetHealth Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

