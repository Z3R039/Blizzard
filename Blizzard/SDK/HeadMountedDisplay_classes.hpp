﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeadMountedDisplay

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "HeadMountedDisplay_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK
{

// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHeadMountedDisplayFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UPrimitiveComponent* AddDeviceVisualizationComponent(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform);
	static bool EnableHMD(bool bEnable);
	static void EnableLowPersistenceMode(bool bEnable);
	static TArray<struct FXRDeviceId> EnumerateTrackedDevices(const class FName SystemId, EXRTrackedDeviceType DeviceType);
	static void GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	static void GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	static class FName GetHMDDeviceName();
	static EHMDWornState GetHMDWornState();
	static int32 GetNumOfTrackingSensors();
	static void GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	static float GetPixelDensity();
	static void GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
	static float GetScreenPercentage();
	static EHMDTrackingOrigin GetTrackingOrigin();
	static void GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive, int32 Index_0);
	static struct FTransform GetTrackingToWorldTransform(class UObject* WorldContext);
	static void GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
	static float GetWorldToMetersScale(class UObject* WorldContext);
	static bool HasValidTrackingPosition();
	static bool IsHeadMountedDisplayConnected();
	static bool IsHeadMountedDisplayEnabled();
	static bool IsInLowPersistenceMode();
	static bool IsSpectatorScreenModeControllable();
	static void ResetOrientationAndPosition(float Yaw, EOrientPositionSelector options);
	static void SetClippingPlanes(float Near, float Far);
	static void SetSpectatorScreenMode(ESpectatorScreenMode Mode);
	static void SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack);
	static void SetSpectatorScreenTexture(class UTexture* InTexture);
	static void SetTrackingOrigin(EHMDTrackingOrigin Origin);
	static void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HeadMountedDisplayFunctionLibrary">();
	}
	static class UHeadMountedDisplayFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHeadMountedDisplayFunctionLibrary>();
	}
};
static_assert(alignof(UHeadMountedDisplayFunctionLibrary) == 0x000008, "Wrong alignment on UHeadMountedDisplayFunctionLibrary");
static_assert(sizeof(UHeadMountedDisplayFunctionLibrary) == 0x000028, "Wrong size on UHeadMountedDisplayFunctionLibrary");

// Class HeadMountedDisplay.MotionControllerComponent
// 0x00C0 (0x0720 - 0x0660)
class UMotionControllerComponent final : public UPrimitiveComponent
{
public:
	int32                                         PlayerIndex;                                       // 0x0660(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EControllerHand                               Hand;                                              // 0x0664(0x0001)(BlueprintVisible, ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_665[0x3];                                      // 0x0665(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   MotionSource;                                      // 0x0668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bDisableLowLatencyUpdate : 1;                      // 0x0670(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_671[0x3];                                      // 0x0671(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	ETrackingStatus                               CurrentTrackingStatus;                             // 0x0674(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisplayDeviceModel;                               // 0x0675(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_676[0x2];                                      // 0x0676(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DisplayModelSource;                                // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                            CustomDisplayMesh;                                 // 0x0680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>             DisplayMeshMaterialOverrides;                      // 0x0688(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_698[0x68];                                     // 0x0698(0x0068)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    DisplayComponent;                                  // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_708[0x18];                                     // 0x0708(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetParameterValue(class FName InName, bool* bValueFound);
	void OnMotionControllerUpdated();
	void SetAssociatedPlayerIndex(const int32 NewPlayer);
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
	void SetDisplayModelSource(const class FName NewDisplayModelSource);
	void SetShowDeviceModel(const bool bShowControllerModel);
	void SetTrackingMotionSource(const class FName NewSource);
	void SetTrackingSource(const EControllerHand NewSource);

	EControllerHand GetTrackingSource() const;
	bool IsTracked() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotionControllerComponent">();
	}
	static class UMotionControllerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotionControllerComponent>();
	}
};
static_assert(alignof(UMotionControllerComponent) == 0x000010, "Wrong alignment on UMotionControllerComponent");
static_assert(sizeof(UMotionControllerComponent) == 0x000720, "Wrong size on UMotionControllerComponent");
static_assert(offsetof(UMotionControllerComponent, PlayerIndex) == 0x000660, "Member 'UMotionControllerComponent::PlayerIndex' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, Hand) == 0x000664, "Member 'UMotionControllerComponent::Hand' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, MotionSource) == 0x000668, "Member 'UMotionControllerComponent::MotionSource' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, CurrentTrackingStatus) == 0x000674, "Member 'UMotionControllerComponent::CurrentTrackingStatus' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, bDisplayDeviceModel) == 0x000675, "Member 'UMotionControllerComponent::bDisplayDeviceModel' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, DisplayModelSource) == 0x000678, "Member 'UMotionControllerComponent::DisplayModelSource' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, CustomDisplayMesh) == 0x000680, "Member 'UMotionControllerComponent::CustomDisplayMesh' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, DisplayMeshMaterialOverrides) == 0x000688, "Member 'UMotionControllerComponent::DisplayMeshMaterialOverrides' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, DisplayComponent) == 0x000700, "Member 'UMotionControllerComponent::DisplayComponent' has a wrong offset!");

// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMotionTrackedDeviceFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void DisableMotionTrackingForComponent(const class UMotionControllerComponent* MotionControllerComponent);
	static void DisableMotionTrackingOfAllControllers();
	static void DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex);
	static void DisableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand Hand);
	static void DisableMotionTrackingOfSource(int32 PlayerIndex, class FName SourceName);
	static bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
	static bool EnableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand Hand);
	static bool EnableMotionTrackingOfSource(int32 PlayerIndex, class FName SourceName);
	static TArray<class FName> EnumerateMotionSources();
	static int32 GetMaximumMotionTrackedControllerCount();
	static int32 GetMotionTrackingEnabledControllerCount();
	static bool IsMotionTrackedDeviceCountManagementNecessary();
	static bool IsMotionTrackingEnabledForComponent(const class UMotionControllerComponent* MotionControllerComponent);
	static bool IsMotionTrackingEnabledForDevice(int32 PlayerIndex, EControllerHand Hand);
	static bool IsMotionTrackingEnabledForSource(int32 PlayerIndex, class FName SourceName);
	static void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotionTrackedDeviceFunctionLibrary">();
	}
	static class UMotionTrackedDeviceFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotionTrackedDeviceFunctionLibrary>();
	}
};
static_assert(alignof(UMotionTrackedDeviceFunctionLibrary) == 0x000008, "Wrong alignment on UMotionTrackedDeviceFunctionLibrary");
static_assert(sizeof(UMotionTrackedDeviceFunctionLibrary) == 0x000028, "Wrong size on UMotionTrackedDeviceFunctionLibrary");

// Class HeadMountedDisplay.VRNotificationsComponent
// 0x0090 (0x0180 - 0x00F0)
class UVRNotificationsComponent final : public UActorComponent
{
public:
	UMulticastDelegateProperty_                   HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0x00F0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   HMDTrackingInitializedDelegate;                    // 0x0100(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   HMDRecenteredDelegate;                             // 0x0110(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   HMDLostDelegate;                                   // 0x0120(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   HMDReconnectedDelegate;                            // 0x0130(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   HMDConnectCanceledDelegate;                        // 0x0140(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   HMDPutOnHeadDelegate;                              // 0x0150(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   HMDRemovedFromHeadDelegate;                        // 0x0160(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   VRControllerRecenteredDelegate;                    // 0x0170(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VRNotificationsComponent">();
	}
	static class UVRNotificationsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVRNotificationsComponent>();
	}
};
static_assert(alignof(UVRNotificationsComponent) == 0x000008, "Wrong alignment on UVRNotificationsComponent");
static_assert(sizeof(UVRNotificationsComponent) == 0x000180, "Wrong size on UVRNotificationsComponent");
static_assert(offsetof(UVRNotificationsComponent, HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate) == 0x0000F0, "Member 'UVRNotificationsComponent::HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDTrackingInitializedDelegate) == 0x000100, "Member 'UVRNotificationsComponent::HMDTrackingInitializedDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDRecenteredDelegate) == 0x000110, "Member 'UVRNotificationsComponent::HMDRecenteredDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDLostDelegate) == 0x000120, "Member 'UVRNotificationsComponent::HMDLostDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDReconnectedDelegate) == 0x000130, "Member 'UVRNotificationsComponent::HMDReconnectedDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDConnectCanceledDelegate) == 0x000140, "Member 'UVRNotificationsComponent::HMDConnectCanceledDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDPutOnHeadDelegate) == 0x000150, "Member 'UVRNotificationsComponent::HMDPutOnHeadDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDRemovedFromHeadDelegate) == 0x000160, "Member 'UVRNotificationsComponent::HMDRemovedFromHeadDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, VRControllerRecenteredDelegate) == 0x000170, "Member 'UVRNotificationsComponent::VRControllerRecenteredDelegate' has a wrong offset!");

}

