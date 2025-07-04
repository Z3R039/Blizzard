﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EpicCMSUIFramework

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "SlateCore_structs.hpp"
#include "EpicCMSUIFramework_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class EpicCMSUIFramework.EpicCMSImage
// 0x0018 (0x0228 - 0x0210)
class UEpicCMSImage final : public UCommonLazyImage
{
public:
	uint8                                         Pad_210[0x10];                                     // 0x0210(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bDownloadingExternalMedia;                         // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_221[0x7];                                      // 0x0221(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSImage">();
	}
	static class UEpicCMSImage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSImage>();
	}
};
static_assert(alignof(UEpicCMSImage) == 0x000008, "Wrong alignment on UEpicCMSImage");
static_assert(sizeof(UEpicCMSImage) == 0x000228, "Wrong size on UEpicCMSImage");
static_assert(offsetof(UEpicCMSImage, bDownloadingExternalMedia) == 0x000220, "Member 'UEpicCMSImage::bDownloadingExternalMedia' has a wrong offset!");

// Class EpicCMSUIFramework.EpicCMSLayoutBase
// 0x0068 (0x0270 - 0x0208)
class UEpicCMSLayoutBase final : public UUserWidget
{
public:
	TArray<struct FSlotDescription>               CarouselSlotDescriptions;                          // 0x0208(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UEpicCMSTileCarousel>       CarouselClass;                                     // 0x0218(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_220[0x50];                                     // 0x0220(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSLayoutBase">();
	}
	static class UEpicCMSLayoutBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSLayoutBase>();
	}
};
static_assert(alignof(UEpicCMSLayoutBase) == 0x000008, "Wrong alignment on UEpicCMSLayoutBase");
static_assert(sizeof(UEpicCMSLayoutBase) == 0x000270, "Wrong size on UEpicCMSLayoutBase");
static_assert(offsetof(UEpicCMSLayoutBase, CarouselSlotDescriptions) == 0x000208, "Member 'UEpicCMSLayoutBase::CarouselSlotDescriptions' has a wrong offset!");
static_assert(offsetof(UEpicCMSLayoutBase, CarouselClass) == 0x000218, "Member 'UEpicCMSLayoutBase::CarouselClass' has a wrong offset!");

// Class EpicCMSUIFramework.EpicCMSManager
// 0x00B8 (0x00E0 - 0x0028)
class UEpicCMSManager final : public UObject
{
public:
	uint8                                         Pad_28[0x78];                                      // 0x0028(0x0078)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CmsEndpointOverride;                               // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bRefreshing;                                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_B1[0x2F];                                      // 0x00B1(0x002F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSManager">();
	}
	static class UEpicCMSManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSManager>();
	}
};
static_assert(alignof(UEpicCMSManager) == 0x000008, "Wrong alignment on UEpicCMSManager");
static_assert(sizeof(UEpicCMSManager) == 0x0000E0, "Wrong size on UEpicCMSManager");
static_assert(offsetof(UEpicCMSManager, CmsEndpointOverride) == 0x0000A0, "Member 'UEpicCMSManager::CmsEndpointOverride' has a wrong offset!");
static_assert(offsetof(UEpicCMSManager, bRefreshing) == 0x0000B0, "Member 'UEpicCMSManager::bRefreshing' has a wrong offset!");

// Class EpicCMSUIFramework.EpicCMSScreenBase
// 0x0090 (0x0450 - 0x03C0)
class UEpicCMSScreenBase : public UCommonActivatablePanel
{
public:
	class FString                                 TileSetFieldName;                                  // 0x03C0(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>              TileTypeToTileClassDataTable;                      // 0x03D0(0x0028)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UClass>                   LayoutErrorClass;                                  // 0x03F8(0x0028)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UDataTable>              LayoutTypeToLayoutClassDataTable;                  // 0x0420(0x0028)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_448[0x8];                                      // 0x0448(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSScreenBase">();
	}
	static class UEpicCMSScreenBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSScreenBase>();
	}
};
static_assert(alignof(UEpicCMSScreenBase) == 0x000008, "Wrong alignment on UEpicCMSScreenBase");
static_assert(sizeof(UEpicCMSScreenBase) == 0x000450, "Wrong size on UEpicCMSScreenBase");
static_assert(offsetof(UEpicCMSScreenBase, TileSetFieldName) == 0x0003C0, "Member 'UEpicCMSScreenBase::TileSetFieldName' has a wrong offset!");
static_assert(offsetof(UEpicCMSScreenBase, TileTypeToTileClassDataTable) == 0x0003D0, "Member 'UEpicCMSScreenBase::TileTypeToTileClassDataTable' has a wrong offset!");
static_assert(offsetof(UEpicCMSScreenBase, LayoutErrorClass) == 0x0003F8, "Member 'UEpicCMSScreenBase::LayoutErrorClass' has a wrong offset!");
static_assert(offsetof(UEpicCMSScreenBase, LayoutTypeToLayoutClassDataTable) == 0x000420, "Member 'UEpicCMSScreenBase::LayoutTypeToLayoutClassDataTable' has a wrong offset!");

// Class EpicCMSUIFramework.EpicCMSTileBase
// 0x0118 (0x0898 - 0x0780)
class UEpicCMSTileBase final : public UCommonButton
{
public:
	uint8                                         Pad_780[0x8];                                      // 0x0780(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UCommonTextStyle>           DefaultTitleTextStyle;                             // 0x0788(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonTextStyle>           FeaturedTitleTextStyle;                            // 0x0790(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                   Title;                                             // 0x0798(0x0018)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FString                                 Link;                                              // 0x07B0(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bDownloadingExternalMedia;                         // 0x07C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bRefreshingMcpCatalog;                             // 0x07C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_7C2[0xB6];                                     // 0x07C2(0x00B6)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonLazyImage*                       LazyImage_Icon;                                    // 0x0878(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       TitleTextBlock;                                    // 0x0880(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       SubtitleTextBlock;                                 // 0x0888(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       EyebrowTextBlock;                                  // 0x0890(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void DynamicHandleIconLoadingStateChanged(bool bIsLoading);
	void Launch();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSTileBase">();
	}
	static class UEpicCMSTileBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSTileBase>();
	}
};
static_assert(alignof(UEpicCMSTileBase) == 0x000008, "Wrong alignment on UEpicCMSTileBase");
static_assert(sizeof(UEpicCMSTileBase) == 0x000898, "Wrong size on UEpicCMSTileBase");
static_assert(offsetof(UEpicCMSTileBase, DefaultTitleTextStyle) == 0x000788, "Member 'UEpicCMSTileBase::DefaultTitleTextStyle' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, FeaturedTitleTextStyle) == 0x000790, "Member 'UEpicCMSTileBase::FeaturedTitleTextStyle' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, Title) == 0x000798, "Member 'UEpicCMSTileBase::Title' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, Link) == 0x0007B0, "Member 'UEpicCMSTileBase::Link' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, bDownloadingExternalMedia) == 0x0007C0, "Member 'UEpicCMSTileBase::bDownloadingExternalMedia' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, bRefreshingMcpCatalog) == 0x0007C1, "Member 'UEpicCMSTileBase::bRefreshingMcpCatalog' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, LazyImage_Icon) == 0x000878, "Member 'UEpicCMSTileBase::LazyImage_Icon' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, TitleTextBlock) == 0x000880, "Member 'UEpicCMSTileBase::TitleTextBlock' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, SubtitleTextBlock) == 0x000888, "Member 'UEpicCMSTileBase::SubtitleTextBlock' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, EyebrowTextBlock) == 0x000890, "Member 'UEpicCMSTileBase::EyebrowTextBlock' has a wrong offset!");

// Class EpicCMSUIFramework.EpicCMSTileCarousel
// 0x0050 (0x0258 - 0x0208)
class UEpicCMSTileCarousel final : public UUserWidget
{
public:
	struct FSlateSound                            PreviousButtonSound;                               // 0x0208(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                            NextButtonSound;                                   // 0x0220(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UCommonWidgetCarousel*                  Carousel;                                          // 0x0238(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                                NextPageButton;                                    // 0x0240(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                                PreviousPageButton;                                // 0x0248(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bShouldShowNavigationOnlyOnHover;                  // 0x0250(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bIsShowingNavigation;                              // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_252[0x6];                                      // 0x0252(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HandleTilePageAdded(class UWidget* TileWidget);
	void NavigationVisibilityChanged(bool bShowNavigation);
	void NextPage();
	void PreviousPage();
	void SetCurrentPageByIndex(const int32 PageIndex);

	int32 GetCurrentPageIndex() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSTileCarousel">();
	}
	static class UEpicCMSTileCarousel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSTileCarousel>();
	}
};
static_assert(alignof(UEpicCMSTileCarousel) == 0x000008, "Wrong alignment on UEpicCMSTileCarousel");
static_assert(sizeof(UEpicCMSTileCarousel) == 0x000258, "Wrong size on UEpicCMSTileCarousel");
static_assert(offsetof(UEpicCMSTileCarousel, PreviousButtonSound) == 0x000208, "Member 'UEpicCMSTileCarousel::PreviousButtonSound' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileCarousel, NextButtonSound) == 0x000220, "Member 'UEpicCMSTileCarousel::NextButtonSound' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileCarousel, Carousel) == 0x000238, "Member 'UEpicCMSTileCarousel::Carousel' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileCarousel, NextPageButton) == 0x000240, "Member 'UEpicCMSTileCarousel::NextPageButton' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileCarousel, PreviousPageButton) == 0x000248, "Member 'UEpicCMSTileCarousel::PreviousPageButton' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileCarousel, bShouldShowNavigationOnlyOnHover) == 0x000250, "Member 'UEpicCMSTileCarousel::bShouldShowNavigationOnlyOnHover' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileCarousel, bIsShowingNavigation) == 0x000251, "Member 'UEpicCMSTileCarousel::bIsShowingNavigation' has a wrong offset!");

}

