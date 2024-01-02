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
	// 动画实例所属角色在游戏世界中的当前位置
	UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Location")
	FVector WorldLocation;

	// 动画实例所属角色上一帧与当前帧的位移差值
	UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Location")
	float DisplacementSinceLastUpdate;

	// 动画实例所属角色当前的位移速度
	UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Location")
	float DisplacementSpeed;

#pragma endregion


#pragma region Rotation

protected:
	// 动画实例所属角色在游戏世界中的当前旋转
	UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Rotation")
	FRotator WorldRotation;

	// 动画实例所属角色上一帧与当前帧的偏航角差值
	UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Rotation")
	float YawDeltaSinceLastUpdate;

	// 动画实例所属角色当前的滚动角倾斜值
	UPROPERTY(BlueprintReadOnly, Category = "Locomotion|Rotation")
	float AdditiveLeanAngle;

	// 动画实例所属角色当前的偏航角差值速度
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
