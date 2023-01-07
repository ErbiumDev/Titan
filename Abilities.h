#pragma once
#include "Includes.h"
#include <vector>
namespace Offsets {
	inline int32_t GiveAbility  = 0x068ED10;
	inline int32_t ClearAbility = 0x067A8A0; //Could be wrong
}

namespace Abilities {
	FGameplayAbilitySpec* FindAbilitySpecFromClass(UGameplayAbility* AbilityClass) {
		for (size_t i = 0; i < GPawn->AbilitySystemComponent->ActivatableAbilities.Items.Num(); i++)
		{
			FGameplayAbilitySpec& Spec = GPawn->AbilitySystemComponent->ActivatableAbilities.Items[i];

			if (Spec.Ability->Class == (UClass*)AbilityClass)
			{
				return &Spec;
			}
		}
		return nullptr;
	}

	void GrantAbility(UGameplayAbility* AbilityClass) {
		//Make the Gameplay Ability Spec
		FGameplayAbilitySpec Spec = FGameplayAbilitySpec{};
		FGameplayAbilitySpecHandle Handle{};
		Handle.Handle = rand();

		Spec.Handle = Handle;
		Spec.Ability = UObject::FindObjectFast<UGameplayAbility>("Default__" + AbilityClass->GetName());
		Spec.Level = 1;
		Spec.MostRecentArrayReplicationKey = Spec.ReplicationID = Spec.ReplicationKey = Spec.InputID = -1;
		static auto GiveAbility = reinterpret_cast<FGameplayAbilitySpecHandle(*)(UAbilitySystemComponent*, const FGameplayAbilitySpecHandle*, FGameplayAbilitySpec)>(uintptr_t(GetModuleHandle(0)) + Offsets::GiveAbility);
		GiveAbility(GPawn->AbilitySystemComponent, &Handle, Spec);
	}

	void GrantAbilityAndActivateOnce(UGameplayAbility* AbilityClass, UObject* SrcObj = nullptr) {
		GrantAbility(AbilityClass);
		FGameplayAbilitySpec* Spec = FindAbilitySpecFromClass(AbilityClass);
		if (Spec) {
			Spec->SourceObject = SrcObj;
			Spec->RemoveAfterActivation = true;

			GPawn->AbilitySystemComponent->ClientTryActivateAbility(Spec->Handle);
		}
	}

	void RemoveAbility(UGameplayAbility* AbilityClass) {
		static auto ClearAbility = reinterpret_cast<void(*)(UAbilitySystemComponent*, const FGameplayAbilitySpecHandle*)>(uintptr_t(GetModuleHandle(0)) + Offsets::ClearAbility);
		FGameplayAbilitySpec* Spec = FindAbilitySpecFromClass(AbilityClass);
		if (Spec != nullptr) {
			ClearAbility(GPawn->AbilitySystemComponent, &Spec->Handle);
		}
	}

	void GrantEffect(TSubclassOf<UGameplayEffect> EffectClass, float Level = 1.0f) {
		GPawn->AbilitySystemComponent->BP_ApplyGameplayEffectToSelf(EffectClass, Level, {});
	}

	void RemoveEffect(UGameplayEffect* EffectClass) {
		/*FGameplayEffectQuery Q = FGameplayEffectQuery();
		Q.EffectDefinition.operator=((UClass*)EffectClass);
		auto Handles = GPawn->AbilitySystemComponent->GetActiveEffects(Q);
		if (Handles.Data && Handles.Num() > 0) {
			FActiveGameplayEffectHandle Handle = Handles[0];
			GPawn->AbilitySystemComponent->RemoveActiveGameplayEffect(Handle, -1);
		}*/

		//New and Faster
		GPawn->AbilitySystemComponent->RemoveActiveGameplayEffectBySourceEffect((UClass*)EffectClass, GPawn->AbilitySystemComponent, -1);
	}
}