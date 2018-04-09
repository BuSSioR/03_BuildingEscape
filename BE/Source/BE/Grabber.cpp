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
	FindPhysicsComponent();
	///Look for attached InputComponent
	SetupInputComponent();
}

void UGrabber::SetupInputComponent()
{
	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

	if (InputComponent)
	{
		InputComponent->BindAction("Grab", IE_Pressed, this, &UGrabber::Grab);
		InputComponent->BindAction("Grab", IE_Released, this, &UGrabber::Relase);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("INPUT COMPONENT OF %s IS MISSING"), *(GetOwner()->GetName()))
	}
}
void UGrabber::FindPhysicsComponent()
{
	PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (PhysicsHandle == nullptr)
	{	//wystawia do konsoli log z errorem ze dany obiekt nie ma physics handlera
		UE_LOG(LogTemp, Error, TEXT("PHYSICS HANDLER OF %s IS MISSING"), *(GetOwner()->GetName()))
	}
}
void UGrabber::Grab()
{
	UE_LOG(LogTemp, Error, TEXT("Grab Pressed"), *(GetOwner()->GetName()))
	//Line trace and see if reach any actor with physics body collision channel set
	auto HitResult=GetFirstPhysicsBodyInReach();
	auto ComponentToGrab = HitResult.GetComponent();
	auto ActorHit = HitResult.GetActor();
	// if hit, attach physics handle
	// attach physics handle
	if (ActorHit !=nullptr)
	{
		PhysicsHandle->GrabComponentAtLocation(ComponentToGrab,
			NAME_None,
			ComponentToGrab->GetOwner()->GetActorLocation());
	}


}
void UGrabber::Relase()
{
	UE_LOG(LogTemp, Error, TEXT("Relase"))
		PhysicsHandle->ReleaseComponent();
		//TODO relase physics handle
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (PhysicsHandle->GrabbedComponent)
	{
		PhysicsHandle->SetTargetLocation(GetReachLineEnd());
	}
}
FHitResult UGrabber::GetFirstPhysicsBodyInReach()
{
	FHitResult Hit;

	///Cast ray on reach distance
		//initialize colision query parameters for LineTraceSingleByObjectType function
		FCollisionQueryParams TraceParameters(FName(TEXT("")), false, GetOwner());
		//initialize tracing
		GetWorld()->LineTraceSingleByObjectType(
			Hit,
			GetReachLineStart(),
			GetReachLineEnd(),
			FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
			TraceParameters);

	return Hit;
}

FVector UGrabber::GetReachLineStart()
{
	FVector Location;
	FRotator Rotation;
	// get player viewport and calculate length of ray 
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(Location, Rotation);
	return Location;
}

FVector UGrabber::GetReachLineEnd()
{
	FVector Location;
	FRotator Rotation;
	// get player viewport and calculate length of ray 
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(Location, Rotation);
	return Location + Rotation.Vector()  * Reach;

}

////Draw debug line 
//DrawDebugLine(GetWorld(), Location, LineTraceEnd, FColor(255, 0, 0), false, 0.0f, 0.0f, 10.0f);
