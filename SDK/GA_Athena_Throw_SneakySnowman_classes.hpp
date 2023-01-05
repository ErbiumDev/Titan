#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0xC58 - 0xC31)
// BlueprintGeneratedClass GA_Athena_Throw_SneakySnowman.GA_Athena_Throw_SneakySnowman_C
class UGA_Athena_Throw_SneakySnowman_C : public UGA_Athena_Grenade_WithTrajectory_C
{
public:
	uint8                                        Pad_65A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          TrackSnowmenTag;                                   // 0xC40(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortProjectileBase*>           SnowmenActors;                                     // 0xC48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_Throw_SneakySnowman_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_Throw_SneakySnowman(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
