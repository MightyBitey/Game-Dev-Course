// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/CapsuleComponent.h"
#include "Pawns/Bird.h"


ABird::ABird()
{
	PrimaryActorTick.bCanEverTick = true;
	BirdCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("MyCapsule"));
	BirdCapsule->InitCapsuleSize(15.f,20.f);
	SetRootComponent(BirdCapsule);
}


void ABird::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Bird Halfheight: %f"), BirdCapsule->GetUnscaledCapsuleHalfHeight());
}


void ABird::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


// Called to bind functionality to input
void ABird::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

