// Fill out your copyright notice in the Description page of Project Settings.

#include "CameraFocus.h"
#include "Camera/CameraActor.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "SpherePlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

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
	auto P1 = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	auto P2 = UGameplayStatics::GetPlayerController(GetWorld(), 1);

	PController1 = P1 ? Cast<ASpherePlayerController>(P1) : nullptr;
	PController2 = P2 ? Cast<ASpherePlayerController>(P2) : nullptr;
}

// Called every frame
void ACameraFocus::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

