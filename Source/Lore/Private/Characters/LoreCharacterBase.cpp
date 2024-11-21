// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/LoreCharacterBase.h"


ALoreCharacterBase::ALoreCharacterBase()
{
 
	PrimaryActorTick.bCanEverTick = false;
	
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}


void ALoreCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}
