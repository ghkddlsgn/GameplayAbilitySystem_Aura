// Fill out your copyright notice in the Description page of Project Settings.


#include "Ui/WidgetController/AuraWidgetController.h"

void UAuraWidgetController::SetWidgetControllerParams(FWidgetControllerParams WCParams)
{
	PlayerController = WCParams.PlayerController;
	PlayerState = WCParams.PlayerState;
	AbilitySystemComponent = WCParams.AbilitySystemComponent;
	AttributeSet = WCParams.AttributeSet;
}

void UAuraWidgetController::BroadcastInitialValues()
{
	
}
