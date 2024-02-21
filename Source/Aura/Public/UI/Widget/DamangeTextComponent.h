// Copyright Druid Mechanics

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "DamangeTextComponent.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UDamangeTextComponent : public UWidgetComponent
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetDamageText(float Damage);
};
