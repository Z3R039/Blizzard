﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NetDebugContainer

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function NetDebugContainer.NetDebugContainer_C.ExecuteUbergraph_NetDebugContainer
// 0x0008 (0x0008 - 0x0000)
struct NetDebugContainer_C_ExecuteUbergraph_NetDebugContainer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Event_InVisibility;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NetDebugContainer_C_ExecuteUbergraph_NetDebugContainer) == 0x000004, "Wrong alignment on NetDebugContainer_C_ExecuteUbergraph_NetDebugContainer");
static_assert(sizeof(NetDebugContainer_C_ExecuteUbergraph_NetDebugContainer) == 0x000008, "Wrong size on NetDebugContainer_C_ExecuteUbergraph_NetDebugContainer");
static_assert(offsetof(NetDebugContainer_C_ExecuteUbergraph_NetDebugContainer, EntryPoint) == 0x000000, "Member 'NetDebugContainer_C_ExecuteUbergraph_NetDebugContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(NetDebugContainer_C_ExecuteUbergraph_NetDebugContainer, K2Node_Event_InVisibility) == 0x000004, "Member 'NetDebugContainer_C_ExecuteUbergraph_NetDebugContainer::K2Node_Event_InVisibility' has a wrong offset!");
static_assert(offsetof(NetDebugContainer_C_ExecuteUbergraph_NetDebugContainer, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'NetDebugContainer_C_ExecuteUbergraph_NetDebugContainer::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function NetDebugContainer.NetDebugContainer_C.OnVisibilitySetEvent
// 0x0001 (0x0001 - 0x0000)
struct NetDebugContainer_C_OnVisibilitySetEvent final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NetDebugContainer_C_OnVisibilitySetEvent) == 0x000001, "Wrong alignment on NetDebugContainer_C_OnVisibilitySetEvent");
static_assert(sizeof(NetDebugContainer_C_OnVisibilitySetEvent) == 0x000001, "Wrong size on NetDebugContainer_C_OnVisibilitySetEvent");
static_assert(offsetof(NetDebugContainer_C_OnVisibilitySetEvent, InVisibility) == 0x000000, "Member 'NetDebugContainer_C_OnVisibilitySetEvent::InVisibility' has a wrong offset!");

}

