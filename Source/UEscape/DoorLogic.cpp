// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorLogic.h"

// Sets default values for this component's properties
UDoorLogic::UDoorLogic()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDoorLogic::BeginPlay()
{
	Super::BeginPlay();

	//UE_LOG(LogTemp, Warning, TEXT("bruh, you hailed"));
	
	OpenDoor();
	
}


// Called every frame
void UDoorLogic::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UDoorLogic::OpenDoor() {
	GetOwner()->SetActorRotation(FQuat(FVector(0, 0, 1), FMath::DegreesToRadians(-110)));
}

void UDoorLogic::CloseDoor() {
	GetOwner()->SetActorRotation(FQuat(FVector(0, 0, 1), FMath::DegreesToRadians(0)));
}

