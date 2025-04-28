// Copyright Connor Douglas 2025


#include "Characters/PlayerOTCharacter.h"

APlayerOTCharacter::APlayerOTCharacter()
{
	FirstPersonMesh = GetMesh();

	FGameplayTagContainer* CTags = GetCharacterTags();
	if (CTags)
	{
		CTags->AddTag(FGameplayTag::RequestGameplayTag(FName("Type.Player")));
	}
}
