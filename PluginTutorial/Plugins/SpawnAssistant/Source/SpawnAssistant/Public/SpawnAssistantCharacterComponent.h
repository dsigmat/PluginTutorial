//Copyring 2023, dsigmat, All rights reserved
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpawnAssistantCharacterComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SPAWNASSISTANT_API USpawnAssistantCharacterComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	USpawnAssistantCharacterComponent();

	UFUNCTION(BlueprintCallable)
	void SpawnActorAboveMe();

protected:

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<AActor> ActorClassToSpawn;

	virtual void BeginPlay() override;
};