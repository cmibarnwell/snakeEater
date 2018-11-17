// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "snakeEaterGameMode.h"
#include "snakeEaterHUD.h"
#include "snakeEaterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AsnakeEaterGameMode::AsnakeEaterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AsnakeEaterHUD::StaticClass();
}
