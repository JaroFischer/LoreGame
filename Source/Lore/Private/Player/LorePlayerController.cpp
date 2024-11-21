// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/LorePlayerController.h"
#include "EnhancedInputSubsystems.h"

ALorePlayerController::ALorePlayerController()
{
	
}

void ALorePlayerController::BeginPlay()
{
	Super::BeginPlay();
	check(LoreContext);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	check(Subsystem);
	Subsystem->AddMappingContext(LoreContext, 0);
}
