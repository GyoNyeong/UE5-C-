// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "MyPlayerController.generated.h"


/**
 * 
 */
UCLASS()
class CPP_PROJECT_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

	

public:

	AMyPlayerController();

	virtual void SetupInputComponent() override;
	
	virtual void BeginPlay() override;

	UEnhancedInputComponent* MyInput;
	UInputMappingContext* IMC;
	UInputAction* IA_Look;
	UInputAction* IA_Move;
	UInputAction* IA_Interaction;
	

	//void Look();

	//void Move();

	//void Interaction();


};
