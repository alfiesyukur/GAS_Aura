// Copyright sf5gaming.asia

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "Mmc_MaxMana.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UMmc_MaxMana : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()

	UMmc_MaxMana();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:
	FGameplayEffectAttributeCaptureDefinition IntDef;	
};
