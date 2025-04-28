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

// Called when the game starts or when spawned
void AOTCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOTCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AOTCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

UAbilitySystemComponent* AOTCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

FGameplayTagContainer* AOTCharacter::GetCharacterTags()
{
	return &CharacterTags;
}