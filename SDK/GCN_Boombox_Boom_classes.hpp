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

// 0x0 (0x1A0 - 0x1A0)
// BlueprintGeneratedClass GCN_Boombox_Boom.GCN_Boombox_Boom_C
class UGCN_Boombox_Boom_C : public UFortGameplayCueNotify_Burst
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Boombox_Boom_C");
		return Clss;
	}

	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Array_Index_Variable, class UParticleSystemComponent* CallFunc_Array_Get_Item, bool K2Node_SwitchInteger_CmpSuccess, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult1, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult2, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult3, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult1, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult2, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
