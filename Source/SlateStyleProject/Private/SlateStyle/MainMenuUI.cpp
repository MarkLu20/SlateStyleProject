// Fill out your copyright notice in the Description page of Project Settings.

#include "MainMenuUI.h"
#include "GlobalMenuStyle.h" 
#include "Style.h" 


void SMainMenuUI::Construct(const FArguments& InArgs)
{
	MenuStyle = &FMenuStyles::Get().GetWidgetStyle<FGlobalStyle>("StyleTest");
	
	/*lOADED = LoadObject<UObject>(nullptr, TEXT("Texture2D'/Game/Slate/LoadingScreen.LoadingScreen'"));
	lOADED->AddToRoot();*/
	//FSlateImageBrush ImageBursh(lOADED,FVector2D(1920.0f, 1080.0f)); //= CustomSlateImageBrush::GetSlateImageBrush(("Texture2D'/Game/Slate/LoadingScreen.LoadingScreen'"), FVector2D(1920.0f, 1080.0f));
	ChildSlot
		[
			SNew(SOverlay)
			+ SOverlay::Slot()
              .HAlign(HAlign_Fill)
		       .VAlign(VAlign_Fill)
		[ 
			SNew(SImage)
            .Image(&MenuStyle->ImageBrush)
            
            
               		
		]
			+ SOverlay::Slot()
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Top)
		[
			SNew(STextBlock)
			.TextStyle(&MenuStyle->MenuTitleStyle)
		   .Text(FText::FromString("Maintest"))
		
		    
		
		]
	    +SOverlay::Slot()
			.HAlign(HAlign_Right)
			.VAlign(VAlign_Bottom)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()

			[
			SNew(SButton)
              .ButtonStyle(&MenuStyle->MenuButonStyle)
			 .TextStyle(&MenuStyle->MenuButtonTextStyle)
			.Text(FText::FromString("Play Game!"))
			.OnClicked(this, &SMainMenuUI::PlayGameClicked)
			
			]

		+ SVerticalBox::Slot()
			[
				SNew(SButton)
				.ButtonStyle(&MenuStyle->MenuButonStyle)
			.TextStyle(&MenuStyle->MenuButtonTextStyle)
			.Text(FText::FromString("Quit Game"))
			.OnClicked(this, &SMainMenuUI::QuitGameClicked)
			]

		]
		
		
		
		];
}

FReply SMainMenuUI::PlayGameClicked()
{
	UE_LOG(LogTemp,Error,TEXT("PlayGame"));

	return FReply::Handled();
}

FReply SMainMenuUI::QuitGameClicked()
{
	UE_LOG(LogTemp, Error, TEXT("QuitGame"));

	return FReply::Handled();
}
