// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SpherePlayerController.generated.h"


class ASpherePlayer;
/**
 * 
 */
UCLASS()
class PROJECTIDYEL_API ASpherePlayerController : public APlayerController
{
	GENERATED_BODY()
	
private:
	// Input bindings
	void SetupInputComponent() override;
	ASpherePlayer* GetSpherePlayerPawn();

	// ----Input binded function----// 
	void RollClockWise(float value);

	void Jump();

	void Attract(float value);

	void Repulse(float value);
	// ----------------------------//

	
	
	
};
