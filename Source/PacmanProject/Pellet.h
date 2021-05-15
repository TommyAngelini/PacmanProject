// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pellet.generated.h"

class USoundCue;

UENUM(BlueprintType)
enum class EPelletType : uint8 {

	Regular,
	PowerUp

};


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPelletEatenEvent, EPelletType, PelletType);



UCLASS()
class PACMANPROJECT_API APellet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APellet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Consume();

	UPROPERTY(EditAnywhere)
		EPelletType PelletType = EPelletType::Regular;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
		FPelletEatenEvent PelletEatenEvent;

private:
	UPROPERTY(EditAnywhere)
		USoundCue* ConsumptionSound;

};
