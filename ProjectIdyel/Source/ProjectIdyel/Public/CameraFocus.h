// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraFocus.generated.h"

class UCameraComponent;
class ASpherePlayerController;
class USpringArmComponent;

UCLASS()
class PROJECTIDYEL_API ACameraFocus : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACameraFocus();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite)
	UCameraComponent * LevelCamera;

	UPROPERTY(BlueprintReadWrite)
	USpringArmComponent * ArmCamera;

	UPROPERTY(VisibleAnywhere)
	ASpherePlayerController * PController1 = nullptr;

	UPROPERTY(VisibleAnywhere)
	ASpherePlayerController * PController2 = nullptr;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
