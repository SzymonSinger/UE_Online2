// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_Online2GameMode.h"
#include "UE_Online2Character.h"
#include "UObject/ConstructorHelpers.h"

AUE_Online2GameMode::AUE_Online2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
