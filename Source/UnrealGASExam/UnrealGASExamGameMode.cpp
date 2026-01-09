// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealGASExamGameMode.h"
#include "UnrealGASExamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealGASExamGameMode::AUnrealGASExamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
