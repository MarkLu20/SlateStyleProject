// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameInstance.h"
#include "MainMenuUI.h"
#include "UnrealEngine.h"
#include "Engine/GameViewportClient.h"



UMyGameInstance::UMyGameInstance()
{

}

void UMyGameInstance::AddSlate()
{
	if (!Test.IsValid())
	{
		SAssignNew(Test, SMainMenuUI);
	}

	//GEngine->GameViewport->AddViewportWidgetContent(Test.ToSharedRef());
	
	UGameViewportClient* Client = GetGameViewportClient();
	if (Client)
	{
		Client->AddViewportWidgetContent(Test.ToSharedRef());
	}
	FString Test;

}

void UMyGameInstance::Init()
{
	Super::Init();
	
}
