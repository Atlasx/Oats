// Copyright Connor Douglas 2025

#pragma once

#include "CoreMinimal.h"
#include "Characters/OTCharacter.h"
#include "NPCOTCharacter.generated.h"

class USkeletalMeshComponent;

/**
 * 
 */
UCLASS()
class OATS_API ANPCOTCharacter : public AOTCharacter
{
	GENERATED_BODY()
	
public:
	ANPCOTCharacter();

protected:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	USkeletalMeshComponent* MeshComponent;
};
