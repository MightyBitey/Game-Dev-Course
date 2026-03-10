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
private:
	float RunningTime = 0.f;
	float Amplitude = .25f;
	float TimeConstant = 5.f;
	
	virtual void BeginPlay() override;
};
