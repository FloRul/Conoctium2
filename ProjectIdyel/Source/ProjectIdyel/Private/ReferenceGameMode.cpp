// Fill out your copyright notice in the Description page of Project Settings.
#include "ReferenceGameMode.h"
#include "SpherePlayerStart.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "EngineUtils.h"

void AReferenceGameMode::BeginPlay()
{
	// second player cannot be spawn from the editor
	UGameplayStatics::CreatePlayer(GetWorld(), 1, true);
	// TODO Assign the controller to the player pawn
	for (TActorIterator<ASpherePlayerStart> PlayerStartItr(GetWorld()); PlayerStartItr; ++PlayerStartItr)
	{

	}
}

AActor * AReferenceGameMode::ChoosePlayerStart_Implementation(AController * PlayerController)
{
	// Loop through all the ASpherePlayerStart
	for (TActorIterator<ASpherePlayerStart> PlayerStartItr(GetWorld()); PlayerStartItr; ++PlayerStartItr)
	{
		if (PlayerStartItr)
		{
			if (PlayerStartItr->GetCanSpawnPlayer()) {
				// Next player won't spawn on same spot 
				PlayerStartItr->SetCanSpawnPlayer(false);
				return *PlayerStartItr;
			}
		}
		
	}
	UE_LOG(LogTemp, Error, TEXT("No sphere player start available"))
	return nullptr;
}

