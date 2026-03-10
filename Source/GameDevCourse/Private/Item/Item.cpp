// Fill out your copyright notice in the Description page of Project Settings.

#include "GameDevCourse/DebugMacros.h"
#include "Item/Item.h"

#include "GameDevCourse/GameDevCourse.h"
/////////////////////////////////////////////CONSTRUCTORS////////////////////////////////////////////////////////////
AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;
}

////////////////////////////////////////FUNCTIONS////////////////////////////////////////////////////////////////////
void AItem::BeginPlay()
{
	Super::BeginPlay();
}


void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Movement Rate in Units of cm/s
	float MovementRate = 50.f;
	float RotationRate = 45.f;
	
	// MovementRate * DeltaTime (cm/s) * (s/frame) = (cm/frame)
	AddActorWorldOffset(FVector((MovementRate * DeltaTime), 0.f, 0.f));
	AddActorWorldRotation(FRotator(0.f, RotationRate * DeltaTime, 0.f));
	DRAW_SPHERE_SingleFrame(GetActorLocation());
	DRAW_VECTOR_SingleFrame(GetActorLocation(),GetActorLocation() + (GetActorForwardVector() * 100.f));
}

