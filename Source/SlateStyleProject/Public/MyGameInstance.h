// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"


/**
 * 
 */
UCLASS()
class SLATESTYLEPROJECT_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UMyGameInstance();
	UFUNCTION(BlueprintCallable, Category = Slate)
		void AddSlate();
	

	virtual void Init() override;
	TSharedPtr<class SMainMenuUI> Test;

};
