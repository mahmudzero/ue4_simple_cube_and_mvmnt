// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"

UCLASS()
class LEARNING_PT0_API AFloatingActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFloatingActor();
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent *visual_mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FloatingActor")
	float float_speed = 20.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FloatingActor")
	float rotation_speed = 20.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
