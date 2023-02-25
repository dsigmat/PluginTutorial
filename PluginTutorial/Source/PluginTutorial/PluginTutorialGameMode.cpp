// Copyright Epic Games, Inc. All Rights Reserved.

#include "PluginTutorialGameMode.h"
#include "PluginTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

APluginTutorialGameMode::APluginTutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
