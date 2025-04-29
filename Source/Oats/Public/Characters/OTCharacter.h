// Copyright Connor Douglas 2025

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"

#include "OTCharacter.generated.h"

class UAbilitySystemComponent;
class UOTAttributeSet;

// All characters inherit through this character class. Meant for rabbits, humans, player

UCLASS()
class OATS_API AOTCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AOTCharacter();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities")
	UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes")
	UOTAttributeSet* AttributeSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tags")
	FGameplayTagContainer CharacterTags;

public:
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	FGameplayTagContainer* GetCharacterTags();

	bool CanMove() const;
};
