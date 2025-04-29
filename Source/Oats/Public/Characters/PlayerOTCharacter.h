// Copyright Connor Douglas 2025

#pragma once

#include "CoreMinimal.h"
#include "Characters/OTCharacter.h"

#include "PlayerOTCharacter.generated.h"

class USkeletalMeshComponent;
class UInputAction;
struct FInputActionValue;

/**
 * 
 */
UCLASS()
class OATS_API APlayerOTCharacter : public AOTCharacter
{
	GENERATED_BODY()
	
public:
	APlayerOTCharacter();

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh)
	USkeletalMeshComponent* FirstPersonMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	UInputAction* MoveAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	UInputAction* LookAction;

	void Move(const FInputActionValue& Value);

	void Look(const FInputActionValue& Value);
};
