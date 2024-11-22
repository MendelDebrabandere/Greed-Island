// Copyright Epic Games, Inc. All Rights Reserved.

#include "GreedIslandGameMode.h"
#include "UObject/ConstructorHelpers.h"

AGreedIslandGameMode::AGreedIslandGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/GreedIsland/Blueprints/BP_GreedIslandCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}