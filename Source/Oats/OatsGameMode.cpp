// Copyright Epic Games, Inc. All Rights Reserved.

#include "OatsGameMode.h"
#include "UObject/ConstructorHelpers.h"

AOatsGameMode::AOatsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
