// Fill out your copyright notice in the Description page of Project Settings.

#include "SpherePlayerStart.h"

bool ASpherePlayerStart::GetCanSpawnPlayer() const
{
	return bCanSpawnPlayer;
}

void ASpherePlayerStart::SetCanSpawnPlayer(const bool NewCanSpawnPlayer)
{
	bCanSpawnPlayer = NewCanSpawnPlayer;
}
