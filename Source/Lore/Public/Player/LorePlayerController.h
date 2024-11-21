// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LorePlayerController.generated.h"

class UInputMappingContext;

/**
 * 
 */
UCLASS()
class LORE_API ALorePlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	ALorePlayerController();
protected:
	virtual void BeginPlay() override;
	
private:
	UPROPERTY(EditAnywhere, category = "Input")
	TObjectPtr<UInputMappingContext> LoreContext;
};
