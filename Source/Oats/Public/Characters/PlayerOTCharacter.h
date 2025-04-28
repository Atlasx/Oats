// Copyright Connor Douglas 2025

#pragma once

#include "CoreMinimal.h"
#include "Characters/OTCharacter.h"

#include "PlayerOTCharacter.generated.h"

class USkeletalMeshComponent;

/**
 * 
 */
UCLASS()
class OATS_API APlayerOTCharacter : public AOTCharacter
{
	GENERATED_BODY()
	
public:
	APlayerOTCharacter();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh)
	USkeletalMeshComponent* FirstPersonMesh;

};
