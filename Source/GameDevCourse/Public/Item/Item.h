// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class GAMEDEVCOURSE_API AItem : public AActor
{
	GENERATED_BODY()
	
public:
	AItem();
virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Sine Parameters")
	float TimeConstant = 5.f;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Sine Parameters")
	float Amplitude = .25f;

	UFUNCTION(BlueprintPure)
	float TransformedSin();

	UFUNCTION(BlueprintPure)
	float TransformedCos();

	template<typename T>
	T Avg(T First, T Second);

private:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float RunningTime = 0.f;
	
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ItemMesh;
};

template <typename T>
T AItem::Avg(T First, T Second)
{
	return (First + Second) / 2; 
}

