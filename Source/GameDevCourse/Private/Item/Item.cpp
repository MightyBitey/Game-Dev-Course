// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/Item.h"

// Sets default values
AItem::AItem()
{

	PrimaryActorTick.bCanEverTick = true;

}


void AItem::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Beginplay Called!"));

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage();
	}

	
}


void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

