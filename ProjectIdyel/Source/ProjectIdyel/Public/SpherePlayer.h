// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SpherePlayer.generated.h"

class USphereComponent;

UCLASS()
class PROJECTIDYEL_API ASpherePlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASpherePlayer();

	UFUNCTION(BlueprintCallable, Category = SetUp)
	void SetBodySphereMeshComp(UStaticMeshComponent * BodySphereComp);

	// Allow the player to move
	UFUNCTION(BlueprintCallable, Category = Movement)
	void RollClockWise(float intensity);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	/*virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	*/

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected :
	UPROPERTY(BlueprintReadOnly)
	UStaticMeshComponent * PlayerBody = nullptr;


	
	
};
