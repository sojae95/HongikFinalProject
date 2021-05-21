// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "NpcAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class FINALPRO_API UNpcAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
    UNpcAnimInstance();
    virtual void NativeUpdateAnimation(float deltaSeconds) override;



};
