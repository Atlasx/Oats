// Copyright Connor Douglas 2025


#include "Characters/OTCharacter.h"

#include "AbilitySystemComponent.h"
#include "Characters/AttributeSets/OTAttributeSet.h"

// Sets default values
AOTCharacter::AOTCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AttributeSet = CreateDefaultSubobject<UOTAttributeSet>(TEXT("Attributes"));
}

UAbilitySystemComponent* AOTCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

FGameplayTagContainer* AOTCharacter::GetCharacterTags()
{
	return &CharacterTags;
}

bool AOTCharacter::CanMove() const
{
	return !AbilitySystemComponent->HasMatchingGameplayTag(FGameplayTag::RequestGameplayTag(TEXT("Status.Stunned")));
}