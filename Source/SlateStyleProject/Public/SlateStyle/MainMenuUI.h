// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SlateBasics.h"

/**
 * 
 */
class SLATESTYLEPROJECT_API SMainMenuUI : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SMainMenuUI)
	{}
	//SLATE_ARGUMENT(TWeakObjectPtr<class AMainMenuHUD>, MainMenuHUD)
		SLATE_END_ARGS()

		void Construct(const FArguments& InArgs);

	/**
	* Click handler for the Play Game! button – Calls MenuHUD’s PlayGameClicked() event.
	*/
	FReply PlayGameClicked();
	/**
	* Click handler for the Quit Game button – Calls MenuHUD’s QuitGameClicked() event.
	*/
	FReply QuitGameClicked();

	//TWeakObjectPtr<class AMainMenuHUD> MainMenuHUD;

	const struct FGlobalStyle* MenuStyle = nullptr;
	UPROPERTY()
	UObject* lOADED = NULL;
};
