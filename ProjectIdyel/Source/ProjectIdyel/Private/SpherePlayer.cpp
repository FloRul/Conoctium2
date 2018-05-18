// Fill out your copyright notice in the Description page of Project Settings.

#include "SpherePlayer.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ASpherePlayer::ASpherePlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ASpherePlayer::SetBodySphereMeshComp(UStaticMeshComponent * BodySphereComp)
{
	PlayerBody = BodySphereComp;
}

// Called when the game starts or when spawned
void ASpherePlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASpherePlayer::RollClockWise(float intensity)
{
	PlayerBody->AddTorqueInRadians(FVector(0, 1000000 * intensity, 0),"None", false);
	// TODO add an opposite force to avoid the perpetual mouvement when no torque applied
}

// Called every frame
void ASpherePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
/*void ASpherePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}*/



