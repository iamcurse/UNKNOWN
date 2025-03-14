// Copyright Epic Games, Inc. All Rights Reserved.

#include "UNKNOWNGameMode.h"
#include "UNKNOWNCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUNKNOWNGameMode::AUNKNOWNGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
