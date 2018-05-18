// Fill out your copyright notice in the Description page of Project Settings.

#include "SpherePlayerController.h"
#include "Components/InputComponent.h"
#include "SpherePlayer.h"

void ASpherePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis("RollClockWise", this, &ASpherePlayerController::RollClockWise);
	InputComponent->BindAxis("Attract", this, &ASpherePlayerController::Attract);
	InputComponent->BindAxis("Repulse", this, &ASpherePlayerController::Repulse);

	InputComponent->BindAction("Jump",IE_Pressed ,this, &ASpherePlayerController::Jump);
}

void ASpherePlayerController::RollClockWise(float value)
{
	UE_LOG(LogTemp, Warning, TEXT("%s : Rolling with a value of %f"), *GetPawn()->GetName(), value)
	// TODO Delegate the rolling method to the pawn
	ASpherePlayer* SpherePlayer = GetSpherePlayerPawn();
	if (SpherePlayer)
	{
		SpherePlayer->RollClockWise(value);
	}
}

void ASpherePlayerController::Jump()
{
	UE_LOG(LogTemp, Warning, TEXT("%s : Jump !"), *GetPawn()->GetName())
	// TODO Delegate the jump method to the pawn

}

void ASpherePlayerController::Attract(float value)
{
	UE_LOG(LogTemp, Warning, TEXT("%s : Attract with a value of %f"), *GetPawn()->GetName(), value)
	// TODO Delegate the attract method to the pawn

}
void ASpherePlayerController::Repulse(float value)
{
	UE_LOG(LogTemp, Warning, TEXT("%s : Repulse with a value of %f"), *GetPawn()->GetName(), value)
	// TODO Delegate the repulse method to the pawn

}

ASpherePlayer* ASpherePlayerController::GetSpherePlayerPawn()
{
	ASpherePlayer * SpherePlayerPawn = nullptr;
	if (GetPawn())
	{
		SpherePlayerPawn = Cast<ASpherePlayer>(GetPawn());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No pawn for the controller : %s found"), *GetName())
	}
	return  SpherePlayerPawn;
}

