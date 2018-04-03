// Fill out your copyright notice in the Description page of Project Settings.

#include "Grabber.h"

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();



	/// Look for attached PhysicsHandle
	//wylatuje poza grabber do w³aœciciela i szuka klasy physicshandlecomponent
	PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();

	if (PhysicsHandle)
	{

	}
	else
	{
		//wystawia do konsoli log z errorem ze dany obiekt nie ma physics handlera
		UE_LOG(LogTemp,Error,TEXT("PHYSICS HANDLER OF %s IS MISSING"),*(GetOwner()->GetName()))
	}
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// get player viewport and calculate length of ray 
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(Location, Rotation);
	FVector LineTraceEnd = Location + Rotation.Vector()  * Reach;

	//Draw debug line 
	DrawDebugLine(GetWorld(), Location, LineTraceEnd, FColor(255, 0, 0), false, 0.0f, 0.0f, 10.0f);
	
	
	///cast ray at reach distance

	//initialize colision query parameters for LineTraceSingleByObjectType function
	FCollisionQueryParams TraceParameters(FName(TEXT("")), false, GetOwner());
	FHitResult Hit;

	//initialize tracing
	GetWorld()->LineTraceSingleByObjectType(
		Hit, 
		Location,
		LineTraceEnd,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody), 
		TraceParameters);

	// see what we hit and log it
	AActor* ActorHit = Hit.GetActor();
	if (ActorHit)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), *(ActorHit->GetName()))
	}


}

