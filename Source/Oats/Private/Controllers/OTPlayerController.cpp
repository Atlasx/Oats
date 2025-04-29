// Copyright Connor Douglas 2025


#include "Controllers/OTPlayerController.h"

#include "EnhancedInputSubsystems.h"


void AOTPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(GameplayMappingContext, 0);
	}
}