﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LevelSequence

#include "Basic.hpp"

#include "MovieScene_structs.hpp"


namespace SDK::Params
{

// Function LevelSequence.LevelSequenceActor.AddBinding
// 0x0028 (0x0028 - 0x0000)
struct LevelSequenceActor_AddBinding final
{
public:
	struct FMovieSceneObjectBindingID             Binding;                                           // 0x0000(0x0018)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 Actor;                                             // 0x0018(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowBindingsFromAsset;                           // 0x0020(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LevelSequenceActor_AddBinding) == 0x000008, "Wrong alignment on LevelSequenceActor_AddBinding");
static_assert(sizeof(LevelSequenceActor_AddBinding) == 0x000028, "Wrong size on LevelSequenceActor_AddBinding");
static_assert(offsetof(LevelSequenceActor_AddBinding, Binding) == 0x000000, "Member 'LevelSequenceActor_AddBinding::Binding' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_AddBinding, Actor) == 0x000018, "Member 'LevelSequenceActor_AddBinding::Actor' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_AddBinding, bAllowBindingsFromAsset) == 0x000020, "Member 'LevelSequenceActor_AddBinding::bAllowBindingsFromAsset' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.RemoveBinding
// 0x0020 (0x0020 - 0x0000)
struct LevelSequenceActor_RemoveBinding final
{
public:
	struct FMovieSceneObjectBindingID             Binding;                                           // 0x0000(0x0018)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 Actor;                                             // 0x0018(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceActor_RemoveBinding) == 0x000008, "Wrong alignment on LevelSequenceActor_RemoveBinding");
static_assert(sizeof(LevelSequenceActor_RemoveBinding) == 0x000020, "Wrong size on LevelSequenceActor_RemoveBinding");
static_assert(offsetof(LevelSequenceActor_RemoveBinding, Binding) == 0x000000, "Member 'LevelSequenceActor_RemoveBinding::Binding' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_RemoveBinding, Actor) == 0x000018, "Member 'LevelSequenceActor_RemoveBinding::Actor' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.ResetBinding
// 0x0018 (0x0018 - 0x0000)
struct LevelSequenceActor_ResetBinding final
{
public:
	struct FMovieSceneObjectBindingID             Binding;                                           // 0x0000(0x0018)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceActor_ResetBinding) == 0x000004, "Wrong alignment on LevelSequenceActor_ResetBinding");
static_assert(sizeof(LevelSequenceActor_ResetBinding) == 0x000018, "Wrong size on LevelSequenceActor_ResetBinding");
static_assert(offsetof(LevelSequenceActor_ResetBinding, Binding) == 0x000000, "Member 'LevelSequenceActor_ResetBinding::Binding' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.SetBinding
// 0x0030 (0x0030 - 0x0000)
struct LevelSequenceActor_SetBinding final
{
public:
	struct FMovieSceneObjectBindingID             Binding;                                           // 0x0000(0x0018)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                         Actors;                                            // 0x0018(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          bAllowBindingsFromAsset;                           // 0x0028(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LevelSequenceActor_SetBinding) == 0x000008, "Wrong alignment on LevelSequenceActor_SetBinding");
static_assert(sizeof(LevelSequenceActor_SetBinding) == 0x000030, "Wrong size on LevelSequenceActor_SetBinding");
static_assert(offsetof(LevelSequenceActor_SetBinding, Binding) == 0x000000, "Member 'LevelSequenceActor_SetBinding::Binding' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_SetBinding, Actors) == 0x000018, "Member 'LevelSequenceActor_SetBinding::Actors' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_SetBinding, bAllowBindingsFromAsset) == 0x000028, "Member 'LevelSequenceActor_SetBinding::bAllowBindingsFromAsset' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.SetEventReceivers
// 0x0010 (0x0010 - 0x0000)
struct LevelSequenceActor_SetEventReceivers final
{
public:
	TArray<class AActor*>                         AdditionalReceivers;                               // 0x0000(0x0010)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceActor_SetEventReceivers) == 0x000008, "Wrong alignment on LevelSequenceActor_SetEventReceivers");
static_assert(sizeof(LevelSequenceActor_SetEventReceivers) == 0x000010, "Wrong size on LevelSequenceActor_SetEventReceivers");
static_assert(offsetof(LevelSequenceActor_SetEventReceivers, AdditionalReceivers) == 0x000000, "Member 'LevelSequenceActor_SetEventReceivers::AdditionalReceivers' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.SetSequence
// 0x0008 (0x0008 - 0x0000)
struct LevelSequenceActor_SetSequence final
{
public:
	class ULevelSequence*                         InSequence;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceActor_SetSequence) == 0x000008, "Wrong alignment on LevelSequenceActor_SetSequence");
static_assert(sizeof(LevelSequenceActor_SetSequence) == 0x000008, "Wrong size on LevelSequenceActor_SetSequence");
static_assert(offsetof(LevelSequenceActor_SetSequence, InSequence) == 0x000000, "Member 'LevelSequenceActor_SetSequence::InSequence' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.GetSequence
// 0x0010 (0x0010 - 0x0000)
struct LevelSequenceActor_GetSequence final
{
public:
	bool                                          bLoad;                                             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInitializePlayer;                                 // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ULevelSequence*                         ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceActor_GetSequence) == 0x000008, "Wrong alignment on LevelSequenceActor_GetSequence");
static_assert(sizeof(LevelSequenceActor_GetSequence) == 0x000010, "Wrong size on LevelSequenceActor_GetSequence");
static_assert(offsetof(LevelSequenceActor_GetSequence, bLoad) == 0x000000, "Member 'LevelSequenceActor_GetSequence::bLoad' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_GetSequence, bInitializePlayer) == 0x000001, "Member 'LevelSequenceActor_GetSequence::bInitializePlayer' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_GetSequence, ReturnValue) == 0x000008, "Member 'LevelSequenceActor_GetSequence::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequenceBurnIn.SetSettings
// 0x0008 (0x0008 - 0x0000)
struct LevelSequenceBurnIn_SetSettings final
{
public:
	class UObject*                                InSettings;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceBurnIn_SetSettings) == 0x000008, "Wrong alignment on LevelSequenceBurnIn_SetSettings");
static_assert(sizeof(LevelSequenceBurnIn_SetSettings) == 0x000008, "Wrong size on LevelSequenceBurnIn_SetSettings");
static_assert(offsetof(LevelSequenceBurnIn_SetSettings, InSettings) == 0x000000, "Member 'LevelSequenceBurnIn_SetSettings::InSettings' has a wrong offset!");

// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
// 0x0008 (0x0008 - 0x0000)
struct LevelSequenceBurnIn_GetSettingsClass final
{
public:
	TSubclassOf<class ULevelSequenceBurnInInitSettings> ReturnValue;                                 // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceBurnIn_GetSettingsClass) == 0x000008, "Wrong alignment on LevelSequenceBurnIn_GetSettingsClass");
static_assert(sizeof(LevelSequenceBurnIn_GetSettingsClass) == 0x000008, "Wrong size on LevelSequenceBurnIn_GetSettingsClass");
static_assert(offsetof(LevelSequenceBurnIn_GetSettingsClass, ReturnValue) == 0x000000, "Member 'LevelSequenceBurnIn_GetSettingsClass::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// 0x0050 (0x0050 - 0x0000)
struct LevelSequencePlayer_CreateLevelSequencePlayer final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                         LevelSequence;                                     // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequencePlaybackSettings    Settings;                                          // 0x0010(0x0030)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class ALevelSequenceActor*                    OutActor;                                          // 0x0040(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequencePlayer*                   ReturnValue;                                       // 0x0048(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequencePlayer_CreateLevelSequencePlayer) == 0x000008, "Wrong alignment on LevelSequencePlayer_CreateLevelSequencePlayer");
static_assert(sizeof(LevelSequencePlayer_CreateLevelSequencePlayer) == 0x000050, "Wrong size on LevelSequencePlayer_CreateLevelSequencePlayer");
static_assert(offsetof(LevelSequencePlayer_CreateLevelSequencePlayer, WorldContextObject) == 0x000000, "Member 'LevelSequencePlayer_CreateLevelSequencePlayer::WorldContextObject' has a wrong offset!");
static_assert(offsetof(LevelSequencePlayer_CreateLevelSequencePlayer, LevelSequence) == 0x000008, "Member 'LevelSequencePlayer_CreateLevelSequencePlayer::LevelSequence' has a wrong offset!");
static_assert(offsetof(LevelSequencePlayer_CreateLevelSequencePlayer, Settings) == 0x000010, "Member 'LevelSequencePlayer_CreateLevelSequencePlayer::Settings' has a wrong offset!");
static_assert(offsetof(LevelSequencePlayer_CreateLevelSequencePlayer, OutActor) == 0x000040, "Member 'LevelSequencePlayer_CreateLevelSequencePlayer::OutActor' has a wrong offset!");
static_assert(offsetof(LevelSequencePlayer_CreateLevelSequencePlayer, ReturnValue) == 0x000048, "Member 'LevelSequencePlayer_CreateLevelSequencePlayer::ReturnValue' has a wrong offset!");

}

