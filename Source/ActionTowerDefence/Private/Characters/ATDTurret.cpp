// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/ATDTurret.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
AATDTurret::AATDTurret()
{
	PrimaryActorTick.bCanEverTick = true;

	boxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	boxComponent->ShapeColor = FColor(255, 138, 5, 255);
	boxComponent->bDrawOnlyIfSelected = true;
	RootComponent = boxComponent;
	bCollideWhenPlacing = true;

	baseMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(FName("baseMeshComponent"));
	baseMeshComponent->SetupAttachment(boxComponent);

	weaponMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(FName("weaponMeshComponent"));
	weaponMeshComponent->SetupAttachment(boxComponent);


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

