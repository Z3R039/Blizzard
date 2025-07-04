﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_NameHomeBase

#include "Basic.hpp"


namespace SDK::Params
{

// Function Announce_NameHomeBase.Announce_NameHomeBase_C.ExecuteUbergraph_Announce_NameHomeBase
// 0x0020 (0x0020 - 0x0000)
struct Announce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SentenceIdx1;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_SentenceIdx;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger1_CmpSuccess;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Announce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase) == 0x000008, "Wrong alignment on Announce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase");
static_assert(sizeof(Announce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase) == 0x000020, "Wrong size on Announce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase");
static_assert(offsetof(Announce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase, EntryPoint) == 0x000000, "Member 'Announce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(Announce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'Announce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(Announce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase, K2Node_Event_SentenceIdx1) == 0x000010, "Member 'Announce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase::K2Node_Event_SentenceIdx1' has a wrong offset!");
static_assert(offsetof(Announce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase, K2Node_SwitchInteger_CmpSuccess) == 0x000014, "Member 'Announce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Announce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase, K2Node_Event_SentenceIdx) == 0x000018, "Member 'Announce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase::K2Node_Event_SentenceIdx' has a wrong offset!");
static_assert(offsetof(Announce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase, K2Node_SwitchInteger1_CmpSuccess) == 0x00001C, "Member 'Announce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase::K2Node_SwitchInteger1_CmpSuccess' has a wrong offset!");

// Function Announce_NameHomeBase.Announce_NameHomeBase_C.HandleSentenceStart_UI
// 0x0004 (0x0004 - 0x0000)
struct Announce_NameHomeBase_C_HandleSentenceStart_UI final
{
public:
	int32                                         SentenceIdx;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Announce_NameHomeBase_C_HandleSentenceStart_UI) == 0x000004, "Wrong alignment on Announce_NameHomeBase_C_HandleSentenceStart_UI");
static_assert(sizeof(Announce_NameHomeBase_C_HandleSentenceStart_UI) == 0x000004, "Wrong size on Announce_NameHomeBase_C_HandleSentenceStart_UI");
static_assert(offsetof(Announce_NameHomeBase_C_HandleSentenceStart_UI, SentenceIdx) == 0x000000, "Member 'Announce_NameHomeBase_C_HandleSentenceStart_UI::SentenceIdx' has a wrong offset!");

// Function Announce_NameHomeBase.Announce_NameHomeBase_C.HandleSentenceStop_UI
// 0x0004 (0x0004 - 0x0000)
struct Announce_NameHomeBase_C_HandleSentenceStop_UI final
{
public:
	int32                                         SentenceIdx;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Announce_NameHomeBase_C_HandleSentenceStop_UI) == 0x000004, "Wrong alignment on Announce_NameHomeBase_C_HandleSentenceStop_UI");
static_assert(sizeof(Announce_NameHomeBase_C_HandleSentenceStop_UI) == 0x000004, "Wrong size on Announce_NameHomeBase_C_HandleSentenceStop_UI");
static_assert(offsetof(Announce_NameHomeBase_C_HandleSentenceStop_UI, SentenceIdx) == 0x000000, "Member 'Announce_NameHomeBase_C_HandleSentenceStop_UI::SentenceIdx' has a wrong offset!");

}

