// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FireflyGenericLocomotionTypes.generated.h"


// ��ɫ���ƶ�����
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

// ��ɫ�ĸ�����ƫ����ת����ʽ
UENUM(BlueprintType)
enum class EFireflyRootYawMode : uint8
{
	BlendOut,
	Accumulate,
	None
};

// ������ͼ�еĶ������в���������
USTRUCT(BlueprintType)
struct FFireflyAnimSequencePlayerData
{
	GENERATED_BODY()

public:
	// Ҫ���ŵĶ�������
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UAnimSequenceBase* Animation;

	// �Ӹ�ָ������ʼʱ�俪ʼ���Ŷ�������
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float StartPosition;
};

// ������ͼ�еĶ���������ֵ������
USTRUCT(BlueprintType)
struct FFireflyAnimSequenceEvaluatorData
{
	GENERATED_BODY()

public:
	// Ҫ���ŵĶ�������
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UAnimSequenceBase* Animation;

	// �ڸ�ָ��ʱ�䲥�Ŷ�������
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ExplicitTime;
};