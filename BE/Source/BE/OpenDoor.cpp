// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "GameFramework/WorldSettings.h"
#include "Engine/TriggerVolume.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();
	ActorThatOpens = GetWorld()->GetFirstPlayerController()->GetPawn();
	Owner = GetOwner();
}

void UOpenDoor::OpenDoor()
{

	//Create Rotator
	FRotator NewRotation = FRotator(0.0f, OpenAngle, 0.0f);
	//Set Door Rotation
	Owner->SetActorRotation(NewRotation);
}
void UOpenDoor::CloseDoor()
{
	//Create Rotator
	FRotator NewRotation = FRotator(0.0f, 0.0f, 0.0f);
	//Set Door Rotation
	Owner->SetActorRotation(NewRotation);
}

// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if(PressurePlate->IsOverlappingActor(ActorThatOpens))
	{
		OpenDoor();
		LastDoorOpenTime = GetWorld()->GetTimeSeconds();
	}
	if ((GetWorld()->GetTimeSeconds()) >= DoorCloseDelay+LastDoorOpenTime)
	{
		CloseDoor();
	}
}

