// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "SlateWidgetStyleContainerBase.h"
#include "SlateWidgetStyle.h"
#include "SlateBasics.h"
#include "GlobalMenuStyle.generated.h" 

USTRUCT()
struct FGlobalStyle : public FSlateWidgetStyle
{

	GENERATED_USTRUCT_BODY()



	virtual void GetResources(TArray<const FSlateBrush *> & OutBrushes) const override;

	static const FName TypeName;

	virtual const FName GetTypeName() const override;
	static const FGlobalStyle& GetDefault();
	UPROPERTY(EditAnywhere, Category = Appearance)
		FButtonStyle MenuButonStyle;
	UPROPERTY(EditAnywhere, Category = Appearance)
		FTextBlockStyle MenuButtonTextStyle;
	UPROPERTY(EditAnywhere, Category = Appearance)
		FTextBlockStyle MenuTitleStyle;
	UPROPERTY(EditAnywhere, Category = Appearance)
		FSlateBrush ImageBrush;

};
UCLASS(hidecategories = Object, MinimalAPI)
class UGlobalMenuStyle : public USlateWidgetStyleContainerBase
{
	GENERATED_UCLASS_BODY()
	UPROPERTY(EditAnywhere, Category = Appearance, meta = (ShowOnlyInnerProperties))
		FGlobalStyle MenuStyle;



public:
	virtual const struct FSlateWidgetStyle* const GetStyle() const override;

};
