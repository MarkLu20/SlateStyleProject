// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SlateBasics.h"
#include "SlateImageBrush.h"

/**
 *
 */

//class CustomSlateImageBrush
//{
//private:
//	static CustomSlateImageBrush* Instance;
//	UPROPERTY()
//		UObject* ImageObject = nullptr;
//public:
//	static CustomSlateImageBrush* Get();
//	
//	static FSlateImageBrush GetSlateImageBrush(const FString& ResourceName, const FVector2D& InImageSize, const FSlateColor& InTint = FSlateColor(FLinearColor(1, 1, 1, 1)), ESlateBrushTileType::Type InTiling = ESlateBrushTileType::NoTile, ESlateBrushImageType::Type InImageType = ESlateBrushImageType::FullColor)
//	{
//		/*const FString& Path = FPaths::ProjectContentDir();*/
//		ImageObject = LoadObject<UObject>(nullptr, *ResourceName);
//		static FSlateImageBrush ImgeBrush = FSlateImageBrush(ImageObject, InImageSize, InTint, InTiling, InImageType);
//		return ImgeBrush;
//	}
//
//};

//const FString& SlateResource = TEXT("Slate");
//
// FSlateImageBrush GetSlateImageBrush(const FString& ResourceName, const FVector2D& InImageSize, const FSlateColor& InTint = FSlateColor(FLinearColor(1, 1, 1, 1)), ESlateBrushTileType::Type InTiling = ESlateBrushTileType::NoTile, ESlateBrushImageType::Type InImageType = ESlateBrushImageType::FullColor)
//{
//	const FString& Path = FPaths::ProjectContentDir();
//	UObject* ImageObject = LoadObject<UObject>(nullptr, *(Path / *ResourceName));
//	return FSlateImageBrush(ImageObject,InImageSize, InTint, InTiling,InImageType);
//}

#define IMAGE_BRUSH( RelativePath, ... ) FSlateImageBrush( FPaths::ProjectContentDir() / "Slate"/ RelativePath + TEXT(".png"), __VA_ARGS__ )
#define BOX_BRUSH( RelativePath, ... ) FSlateBoxBrush( FPaths::ProjectContentDir() / "Slate"/ RelativePath + TEXT(".png"), __VA_ARGS__ )
#define BORDER_BRUSH( RelativePath, ... ) FSlateBorderBrush( FPaths::ProjectContentDir() / "Slate"/ RelativePath + TEXT(".png"), __VA_ARGS__ )
#define TTF_FONT( RelativePath, ... ) FSlateFontInfo( FPaths::ProjectContentDir() / "Slate"/ RelativePath + TEXT(".ttf"), __VA_ARGS__ )
#define OTF_FONT( RelativePath, ... ) FSlateFontInfo( FPaths::ProjectContentDir() / "Slate"/ RelativePath + TEXT(".otf"), __VA_ARGS__ )
class SLATESTYLEPROJECT_API FMenuStyles
{
public:
	/*初始化MenuStyleInstance的值并将其注册到Slate Style Registry。*/
	static void Initialize();
	/*取消注册Slate样式集，然后重置MenuStyleInstance指针。*/
	static  void  Shutdown();
	/*检索对MenuStyleInstance指向的Slate样式的引用。*/
	static  const  class  ISlateStyle& Get();
	/*检索样式集的名称。*/
	static  FName  GetStyleSetName();
private:
	/*创建样式集。*/
	static  TSharedRef < class  FSlateStyleSet >  Create();
private:
	/*用于我们的样式集的单例实例。*/
	static  TSharedPtr < class  FSlateStyleSet >  MenuStyleInstance;
};
