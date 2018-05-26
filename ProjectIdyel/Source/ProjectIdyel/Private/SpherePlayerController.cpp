// Fill out your copyright notice in the Description page of Project Settings.

#include "SpherePlayerController.h"
#include "Components/InputComponent.h"
#include "SpherePlayer.h"

void ASpherePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis("RollRight", this, &ASpherePlayerController::RollRight);
	InputComponent->BindAxis("RollForward", this, &ASpherePlayerController::RollForward);
	InputComponent->BindAxis("Attract", this, &ASpherePlayerController::Attract);
	InputComponent->BindAxis("Repulse", this, &ASpherePlayerController::Repulse);

	InputComponent->BindAction("Jump",IE_Pressed ,this, &ASpherePlayerController::Jump);
}

void ASpherePlayerController::RollRight(float value)
{
	if (GetSpherePlayerPawn()){ GetSpherePlayerPawn()->RollRight(value); }
}

void ASpherePlayerController::RollForward(float value)
{
	if (GetSpherePlayerPawn()){ GetSpherePlayerPawn()->RollForward(value); }
}

void ASpherePlayerController::Jump()
{
	if (GetSpherePlayerPawn()) { GetSpherePlayerPawn()->Jump(); }
}

void ASpherePlayerController::Attract(float value)
{
	// TODO Delegate the attract method to the pawn

}
void ASpherePlayerController::Repulse(float value)
{
	// TODO Delegate the repulse method to the pawn

}

void ASpherePlayerController::BeginPlay()
{
	Super::BeginPlay();
}

ASpherePlayer* ASpherePlayerController::GetSpherePlayerPawn()
{
	if (!GetPawn()) {UE_LOG(LogTemp, Warning, TEXT("No pawn found for : %s"), *GetName())}
	return (GetPawn()) ? Cast<ASpherePlayer>(GetPawn()) : nullptr;
}

