// Fill out your copyright notice in the Description page of Project Settings.


#include "FireflyGenericLocomotionAnimInstance.h"

#include "GameFramework/Character.h"


void UFireflyGenericLocomotionAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	if (IsValid(GetOwningActor()))
	{
		Character = Cast<ACharacter>(GetOwningActor());

		if (CharacterMovement == nullptr && Character != nullptr)
		{
			CharacterMovement = Character->GetCharacterMovement();
		}
	}
}

void UFireflyGenericLocomotionAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);
}

void UFireflyGenericLocomotionAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaTime)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaTime);
}

void UFireflyGenericLocomotionAnimInstance::NativePostEvaluateAnimation()
{
	Super::NativePostEvaluateAnimation();
}
