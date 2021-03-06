// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SpherePlayer.generated.h"

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
	void RollRight(float intensity);

	// Allow the player to move
	void RollForward(float intensity);

	void Jump();

	void ApplyForce(ASpherePlayer * otherP, float intensity);

	void Attract(ASpherePlayer* otherP, float intensity);

	void Repulse(ASpherePlayer * otherP, float intensity);

	bool IsGrounded();



public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	/*virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	*/

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = Movement)
		float MoveSpeed = 1000000;

	UPROPERTY(EditDefaultsOnly)
	float JumpSpeed = 5000;

	UPROPERTY(EditDefaultsOnly, Category = Movement)
	float ForceMultiplier = 10E6;

protected :
	UPROPERTY(BlueprintReadOnly)
	UStaticMeshComponent * PlayerBody = nullptr;
	
};
