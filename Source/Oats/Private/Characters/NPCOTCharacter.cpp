// Copyright Connor Douglas 2025


#include "Characters/NPCOTCharacter.h"

ANPCOTCharacter::ANPCOTCharacter()
{
	FGameplayTagContainer* CTags = GetCharacterTags();
	if (CTags)
	{
		CTags->AddTag(FGameplayTag::RequestGameplayTag(FName("Type.NPC")));
	}
}
