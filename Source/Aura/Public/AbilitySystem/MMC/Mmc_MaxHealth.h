// Copyright sf5gaming.asia

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "Mmc_MaxHealth.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UMmc_MaxHealth : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()
	
	UMmc_MaxHealth();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:
	FGameplayEffectAttributeCaptureDefinition VigorDef;	
};
