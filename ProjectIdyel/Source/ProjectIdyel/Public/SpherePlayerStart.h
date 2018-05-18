// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "SpherePlayerStart.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTIDYEL_API ASpherePlayerStart : public APlayerStart
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadOnly, Category = SpawnParams)
	bool bCanSpawnPlayer = true;
	
public:
	bool GetCanSpawnPlayer() const;
	void SetCanSpawnPlayer(const bool NewCanSpawnPlayer);
};
