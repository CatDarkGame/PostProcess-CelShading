// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UE4_CelShadingGameMode.h"
#include "UE4_CelShadingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4_CelShadingGameMode::AUE4_CelShadingGameMode()
{
	// set default pawn class to our Blueprinted character
	/*static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Blueprints/ThirdPersonCharacter.ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}*/
}
