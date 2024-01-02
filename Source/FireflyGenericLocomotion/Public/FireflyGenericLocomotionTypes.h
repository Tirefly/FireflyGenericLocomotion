// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FireflyGenericLocomotionTypes.generated.h"


// 角色的移动方向
UENUM(BlueprintType)
enum class EFireflyDirection : uint8
{
	None,
	Forward,
	Backward,
	Left,
	Right,
	ForwardL,
	ForwardR,
	BackwardL,
	BackwardR
};

// 角色的根骨骼偏航角转换方式
UENUM(BlueprintType)
enum class EFireflyRootYawMode : uint8
{
	BlendOut,
	Accumulate,
	None
};

// 动画蓝图中的动画序列播放器数据
USTRUCT(BlueprintType)
struct FFireflyAnimSequencePlayerData
{
	GENERATED_BODY()

public:
	// 要播放的动画序列
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UAnimSequenceBase* Animation;

	// 从该指定的起始时间开始播放动画序列
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float StartPosition;
};

// 动画蓝图中的动画序列求值器数据
USTRUCT(BlueprintType)
struct FFireflyAnimSequenceEvaluatorData
{
	GENERATED_BODY()

public:
	// 要播放的动画序列
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UAnimSequenceBase* Animation;

	// 在该指定时间播放动画序列
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ExplicitTime;
};