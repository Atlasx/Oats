// Copyright Connor Douglas 2025

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"

#include "OTCharacter.generated.h"

class UAbilitySystemComponent;

// All characters inherit through this character class. Meant for rabbits and humans

UCLASS()
class OATS_API AOTCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AOTCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Abilities)
	UAbilitySystemComponent* AbilitySystemComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

};
