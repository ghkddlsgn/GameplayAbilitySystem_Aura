// Copyright Druid Mechanics


#include "Input/AuraInputConfig.h"

const UInputAction* UAuraInputConfig::FindAbilityInpoutAction(FGameplayTag& InputTag, bool bLogNotFound) const
{
	for (const FAuraInputAction& Action : AbilityInputActions)
	{
		if (Action.InputAction && Action.InputTag == InputTag)
		{
			return Action.InputAction;
		}
	}
	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Input action for tag %s not found"), *InputTag.ToString());
	}
	return nullptr;
}
