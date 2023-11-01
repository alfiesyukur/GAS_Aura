// Copyright sf5gaming.asia


#include "AbilitySystem/Data/AbilityInfo.h"

#include "Aura/AuraLogChannel.h"

FAuraAbilityInfo UAbilityInfo::FindAbilityInfoForTag(const FGameplayTag& AbilityTag, bool bLogNotFound)
{
	for (const FAuraAbilityInfo& Info : AbilityInformation)
	{
		if (Info.AbilityTag == AbilityTag)
			return Info;
	}

	if (bLogNotFound)
	{
		UE_LOG(LogAura, Error, TEXT("Can't find info for AbilityTag [%s] on AbilityInfo [%s]"),
			*AbilityTag.ToString(), *GetNameSafe(this));		
	}

	return FAuraAbilityInfo();
}
