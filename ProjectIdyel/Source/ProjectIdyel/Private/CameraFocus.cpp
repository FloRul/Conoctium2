// Fill out your copyright notice in the Description page of Project Settings.

#include "CameraFocus.h"
#include "Camera/CameraActor.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "SpherePlayerController.h"

// Sets default values
ACameraFocus::ACameraFocus()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ArmCamera = CreateDefaultSubobject<USpringArmComponent>(FName("Spring Arm Camera"));
	LevelCamera = CreateDefaultSubobject<UCameraComponent>(FName("Level Camera"));
	LevelCamera->AttachTo(ArmCamera);

	ArmCamera->SetRelativeRotation(FRotator(-30, 0, 0));
}

// Called when the game starts or when spawned
void ACameraFocus::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACameraFocus::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

