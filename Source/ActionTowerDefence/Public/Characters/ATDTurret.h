// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ATDTurret.generated.h"


UCLASS()
class ACTIONTOWERDEFENCE_API AATDTurret : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AATDTurret();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// if private and Blueprint can read it then use "meta = (AllowPrivateAccess = "true")"

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Body", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* baseMeshComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Body", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* weaponMeshComponent;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Battle", meta = (AllowPrivateAccess = "true"))
		class AATDMonster* Target;

};
