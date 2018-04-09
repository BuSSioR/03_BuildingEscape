// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"

#define OUT
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
	//pobiera aktora do którego jest przyczepiona
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
	//funkcja liczy czas przez jaki drzwi maj¹ byæ otwarte po wejœciu przez odpowiedniego aktora na p³ytkê

	if(GetTotalMassOfActorsOnPlate() >20.f)//TODO make into parameter
	{
		OpenDoor();
		LastDoorOpenTime = GetWorld()->GetTimeSeconds();
	}
	if ((GetWorld()->GetTimeSeconds()) >= DoorCloseDelay+LastDoorOpenTime)
	{
		CloseDoor();
	}
}

float UOpenDoor::GetTotalMassOfActorsOnPlate()
{
	float TotalMass = 0.0f;
	TArray<AActor*> OverlappingActors;
	PressurePlate->GetOverlappingActors(OUT OverlappingActors);

	for (const auto* Actor : OverlappingActors)
	{
		TotalMass+=Actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();

		UE_LOG(LogTemp,Warning,TEXT("Name: %s"),*(Actor->GetName()))
	}
	return TotalMass;
}