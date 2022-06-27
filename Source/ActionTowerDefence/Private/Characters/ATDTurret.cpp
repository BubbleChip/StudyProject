// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/ATDTurret.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AATDTurret::AATDTurret()
{
	PrimaryActorTick.bCanEverTick = true;

	baseMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(FName("baseMeshComponent"));
	RootComponent = baseMeshComponent;

	weaponMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(FName("weaponMeshComponent"));
	weaponMeshComponent->SetupAttachment(baseMeshComponent);


}

// Called when the game starts or when spawned
void AATDTurret::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AATDTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

