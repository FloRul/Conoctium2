// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ReferenceGameMode.generated.h"

class SpherePlayerStart;
/**
 * 
 */
UCLASS()
class PROJECTIDYEL_API AReferenceGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	// Standard function is ChoosePlayerStart but this signature does not allow override
	AActor* ChoosePlayerStart_Implementation(AController* Player) override;

private:
	// Used to spawn the players correctly
	TArray<AActor*> StartingPoints;
};
