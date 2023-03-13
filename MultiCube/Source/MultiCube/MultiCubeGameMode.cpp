// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiCubeGameMode.h"
#include "MultiCubeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiCubeGameMode::AMultiCubeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
