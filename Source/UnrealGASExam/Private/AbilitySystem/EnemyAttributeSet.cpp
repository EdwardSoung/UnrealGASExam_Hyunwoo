// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/EnemyAttributeSet.h"

UEnemyAttributeSet::UEnemyAttributeSet()
{
	InitHealth(100);
}

void UEnemyAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
}

void UEnemyAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
}
