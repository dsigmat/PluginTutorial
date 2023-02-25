//Copyring 2023, dsigmat, All rights reserved
#include "SpawnAssistantCharacterComponent.h"


USpawnAssistantCharacterComponent::USpawnAssistantCharacterComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void USpawnAssistantCharacterComponent::BeginPlay()
{
	Super::BeginPlay();
}

void USpawnAssistantCharacterComponent::SpawnActorAboveMe()
{
	if (ActorClassToSpawn && GetOwner())
	{
		FTransform OwnerTransform = GetOwner()->GetTransform();
		FVector CurrentLocation = OwnerTransform.GetLocation();
		CurrentLocation.Z += 500.0f;
		OwnerTransform.SetLocation(CurrentLocation);

		GetWorld()->SpawnActor<AActor>(ActorClassToSpawn, OwnerTransform);
	}
}
