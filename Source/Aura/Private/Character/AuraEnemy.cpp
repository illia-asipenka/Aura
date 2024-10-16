// Copyright Illia Asipenka


#include "Character/AuraEnemy.h"

void AAuraEnemy::HighlightActor()
{
	FVector ActorExtent;
	FVector ActorOrigin;
	GetActorBounds(true,  ActorOrigin, ActorExtent);
	UE_LOG(LogTemp, Log, TEXT("Actor Box Extent: %s"), *ActorExtent.ToString());
	DrawDebugBox(GetWorld(), GetActorLocation(), ActorExtent, FColor::Emerald, false, 0.1, 0, 5.f);
}

void AAuraEnemy::UnHighlightActor()
{
	
}
