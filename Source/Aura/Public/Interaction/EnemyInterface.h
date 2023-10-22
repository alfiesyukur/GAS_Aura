// Copyright sf5gaming

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EnemyInterface.generated.h"

UINTERFACE(MinimalAPI)
class UEnemyInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class AURA_API IEnemyInterface
{
	GENERATED_BODY()

public:
	virtual void HighlightActor() = 0;
	virtual void UnHighlightActor() = 0;

protected:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void UpdateFacingTargetLocation(const FVector& Target);
	
};
