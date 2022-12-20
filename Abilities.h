#pragma once
#include "Includes.h"
#include <vector>
namespace Offsets {
	inline int32_t GiveAbility  = 0x05394C0;
	inline int32_t ClearAbility = 0x0524670;
}

std::vector<std::pair<FGameplayAbilitySpecHandle, UGameplayAbility*>> Specs;

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
			}
		}
	}
}