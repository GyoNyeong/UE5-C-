// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

AMyPlayerController::AMyPlayerController()
{
	ConstructorHelpers::FObjectFinder<UInputMappingContext> MyImc(TEXT("InputMappingContext'/Game/Input/IMC_MyAction'"));
	IMC = MyImc.Object;
}

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	if (UEnhancedInputComponent* InputCom = Cast <UEnhancedInputComponent>(InputComponent))
	{
		/*InputCom->BindAction(IA_Look, ETriggerEvent::Ongoing, this, &AMyPlayerController::Look);
		InputCom->BindAction(IA_Move, ETriggerEvent::Triggered, this, &AMyPlayerController::Move);
		InputCom->BindAction(IA_Interaction, ETriggerEvent::Completed, this, &AMyPlayerController::Interaction);*/
	
	}
}

void AMyPlayerController::BeginPlay()
{
	UEnhancedInputLocalPlayerSubsystem* InputSubsystem = GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	if (InputSubsystem)
	{
		// Add the mapping context
		InputSubsystem->AddMappingContext(IMC, 0);
	}

	//UEnhancedInputLocalPlayerSubsystem* Subsystem  

}

//void AMyPlayerController::Look()
//{
//
//}
//
//void AMyPlayerController::Move()
//{
//}
//
//void AMyPlayerController::Interaction()
//{
//}
