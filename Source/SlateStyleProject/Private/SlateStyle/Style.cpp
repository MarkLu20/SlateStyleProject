// Fill out your copyright notice in the Description page of Project Settings.
#include "Style.h"
#include "ISlateStyle.h"
#include "SlateGameResources.h"
//
//CustomSlateImageBrush* CustomSlateImageBrush::Instance = nullptr;
//
//CustomSlateImageBrush* CustomSlateImageBrush::Get()
//{
//	if (Instance == nullptr)
//	{
//		Instance = new CustomSlateImageBrush();
//	}
//	return Instance;
//}

TSharedPtr<FSlateStyleSet> FMenuStyles::MenuStyleInstance = NULL;
void FMenuStyles::Initialize()
{
	if (!MenuStyleInstance.IsValid())
	{
		MenuStyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*MenuStyleInstance);
	}
}

void FMenuStyles::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*MenuStyleInstance);
	ensure(MenuStyleInstance.IsUnique());
	MenuStyleInstance.Reset();
}

const ISlateStyle& FMenuStyles::Get()
{
	return *MenuStyleInstance;
}

FName FMenuStyles::GetStyleSetName()
{
	static FName StyleSetName(TEXT("MenuStyle"));
	return StyleSetName;
}

TSharedRef < class FSlateStyleSet > FMenuStyles::Create()
{  //非常重要！！！指定资源所在目录
	TSharedRef<FSlateStyleSet> StyleRef = FSlateGameResources::New(FMenuStyles::GetStyleSetName(), "/Game/UI/Styles", "/Game/UI/Styles");
	return StyleRef;
}
