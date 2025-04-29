// Copyright Connor Douglas 2025

#include "Characters/PlayerOTCharacter.h"

#include "EnhancedInputComponent.h"
#include "InputActionValue.h"


APlayerOTCharacter::APlayerOTCharacter()
{
	FirstPersonMesh = GetMesh();

	FGameplayTagContainer* CTags = GetCharacterTags();
	if (CTags)
	{
		CTags->AddTag(FGameplayTag::RequestGameplayTag(FName("Type.Player")));
	}
}


void APlayerOTCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EIC->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APlayerOTCharacter::Move);
		EIC->BindAction(LookAction, ETriggerEvent::Triggered, this, &APlayerOTCharacter::Look);
	}
}

void APlayerOTCharacter::Move(const FInputActionValue& Value)
{
	if (!CanMove()) { return; }

	FVector2D MoveInput = Value.Get<FVector2D>();

	if (MoveInput.IsNearlyZero()) { return; }

	AddMovementInput(GetActorForwardVector(), MoveInput.Y);
	AddMovementInput(GetActorRightVector(), MoveInput.X);
}

void APlayerOTCharacter::Look(const FInputActionValue& Value)
{
	// Perform look rotations
}