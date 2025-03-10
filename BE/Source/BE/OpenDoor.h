// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "GameFramework/WorldSettings.h"
#include "Engine/TriggerVolume.h"
#include "Components/PrimitiveComponent.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void OpenDoor();
	void CloseDoor();

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	AActor * Owner;
	UPROPERTY(VisibleAnywhere)
		float OpenAngle = 90.0f;
	//p�ytka naciskowa oddzia�uj�ca z drzwiami.
	UPROPERTY(EditAnywhere)
		AVolume* PressurePlate;
	// aktor kt�ry je�li znajdzie si� w p�ytce naciskowej otwiera drzwi
	//czas potrzebny na zamkni�cie si� drzwi
	UPROPERTY(EditAnywhere)
		float DoorCloseDelay = 0.5f;

		float LastDoorOpenTime;

		float GetTotalMassOfActorsOnPlate();
};