// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPawn.h"


void AEnemyPawn::Hunt()

	// where the different AI could be programmed
{
	State = EEnemyState::Default;

	StateChangedEvent.Broadcast(State);
}

void AEnemyPawn::Idle()
{
	State = EEnemyState::Idle;

	StateChangedEvent.Broadcast(State);
}
