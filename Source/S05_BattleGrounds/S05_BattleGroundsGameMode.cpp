// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "S05_BattleGrounds.h"
#include "S05_BattleGroundsGameMode.h"
#include "S05_BattleGroundsHUD.h"
#include "S05_BattleGroundsCharacter.h"

AS05_BattleGroundsGameMode::AS05_BattleGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AS05_BattleGroundsHUD::StaticClass();
}
