// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_C_Plus_Plus.generated.h"

/**
 * 
 */
UCLASS()
class COMP313_ASSIGNMENT1_API UBP_C_Plus_Plus : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable)
		static int IncrementNumber(int i);
};
