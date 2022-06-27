// Copyright Epic Games, Inc. All Rights Reserved.

#include "ActionTowerDefenceGameMode.h"
#include "ActionTowerDefenceCharacter.h"
#include "UObject/ConstructorHelpers.h"

AActionTowerDefenceGameMode::AActionTowerDefenceGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
