// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnimInstance.generated.h"

class APlayerCharacter;
class UCharacterMovementComponent;

/**
 * 
 */
UCLASS()
class GAMEDEVCOURSE_API UPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly)
	APlayerCharacter* PlayerCharacter = nullptr;

	UPROPERTY(BlueprintReadOnly, Category="Movement")
	UCharacterMovementComponent* PlayerMovement = nullptr;

	UPROPERTY(BlueprintReadOnly, Category="Movement")
	float GroundSpeed = 0.f;
	
};
