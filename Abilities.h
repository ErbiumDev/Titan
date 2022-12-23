#pragma once
#include "Includes.h"
#include <vector>
namespace Offsets {
	inline int32_t GiveAbility  = 0x05394C0;
	inline int32_t ClearAbility = 0x0524670;
}

std::vector<std::pair<FGameplayAbilitySpecHandle, UGameplayAbility*>> Specs;
std::vector<std::pair<FActiveGameplayEffectHandle, UGameplayEffect*>> Effects;

namespace Abilities {
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
		Specs.push_back(std::make_pair(GiveAbility(GPawn->AbilitySystemComponent, &Handle, Spec), AbilityClass));
	}

	void RemoveAbility(UGameplayAbility* AbilityClass) {
		static auto ClearAbility = reinterpret_cast<void(*)(UAbilitySystemComponent*, const FGameplayAbilitySpecHandle*)>(uintptr_t(GetModuleHandle(0)) + Offsets::ClearAbility);
		for (int i = 0; i < Specs.size(); i++) {
			if (Specs[i].second == AbilityClass) {
				ClearAbility(GPawn->AbilitySystemComponent, &Specs[i].first);
				Specs.erase(Specs.begin() + i);
				break;
			}
		}
	}

	void GrantEffect(TSubclassOf<UGameplayEffect> EffectClass, float Level = 1.0f) {
		Effects.push_back(std::make_pair(GPawn->AbilitySystemComponent->BP_ApplyGameplayEffectToSelf(EffectClass, Level, {}), (UGameplayEffect*)EffectClass.Get()));
	}

	void RemoveEffect(UGameplayEffect* EffectClass) {
		for (int i = 0; i < Effects.size(); i++) {
			if (Effects[i].second == EffectClass) {
				GPawn->AbilitySystemComponent->RemoveActiveGameplayEffect(Effects[i].first, -1);
				Effects.erase(Effects.begin() + i);
				break;
			}
		}
	}
}