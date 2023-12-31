// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATank : public ABasePawn
{
	GENERATED_BODY()

public:
	ATank();

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
private:
	UPROPERTY(Category ="Camera Components", VisibleAnywhere)
	class USpringArmComponent* SpringArmComp;

	UPROPERTY(Category = "Camera Components", VisibleAnywhere)
	class UCameraComponent* CameraComp;

	void Move(float value);

};

