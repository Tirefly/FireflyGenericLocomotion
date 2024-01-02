// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "FireflyGenericLocomotionAnimInstance.generated.h"


UCLASS()
class FIREFLYGENERICLOCOMOTION_API UFireflyGenericLocomotionAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

#pragma region AnimInstance

public:
	UFireflyGenericLocomotionAnimInstance();

	virtual void NativeBeginPlay() override;

	virtual void NativeUpdateAnimation(float DeltaTime) override;

	virtual void NativeThreadSafeUpdateAnimation(float DeltaTime) override;

	virtual void NativePostEvaluateAnimation() override;

#pragma endregion


#pragma region LocomotionData

#pragma region Location

protected:
	// ����ʵ��������ɫ����Ϸ�����еĵ�ǰλ��
	UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Location")
	FVector WorldLocation;

	// ����ʵ��������ɫ��һ֡�뵱ǰ֡��λ�Ʋ�ֵ
	UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Location")
	float DisplacementSinceLastUpdate;

	// ����ʵ��������ɫ��ǰ��λ���ٶ�
	UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Location")
	float DisplacementSpeed;

#pragma endregion


#pragma region Rotation

protected:
	// ����ʵ��������ɫ����Ϸ�����еĵ�ǰ��ת
	UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Rotation")
	FRotator WorldRotation;

	// ����ʵ��������ɫ��һ֡�뵱ǰ֡��ƫ���ǲ�ֵ
	UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Rotation")
	float YawDeltaSinceLastUpdate;

	// ����ʵ��������ɫ��ǰ�Ĺ�������бֵ
	UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Rotation")
	float AdditiveLeanAngle;

	// ����ʵ��������ɫ��ǰ��ƫ���ǲ�ֵ�ٶ�
	UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Rotation")
	float YawDeltaSpeed;

#pragma endregion


#pragma region Velocity

protected:
	UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Velocity")
	FVector WorldVelocity;

	UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Velocity")
	FVector LocalVelocity;

	UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Velocity")
	float LocalVelocityDirectionAngle;

	UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Velocity")
	float LocalVelocityDirectionAngleWithOffset;

	//UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Velocity")

	//UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Velocity")

	UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Velocity")
	bool bHasVelocity;

	//UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Velocity")

	UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Velocity")
	float LastVelocityDirection;

#pragma endregion

#pragma endregion
};
