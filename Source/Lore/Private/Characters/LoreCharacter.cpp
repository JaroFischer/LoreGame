// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/LoreCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"

ALoreCharacter::ALoreCharacter()
{
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 450.f, 0.f);
}
