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

// 0x10 (0x990 - 0x980)
// BlueprintGeneratedClass B_Grenade_Playset_Athena.B_Grenade_Playset_Athena_C
class AB_Grenade_Playset_Athena_C : public AB_Grenade_Tower_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x980(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortPlaysetGrenadeInputComponent*     AthenaPlaysetGrenadeInput;                         // 0x988(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Grenade_Playset_Athena_C");
		return Clss;
	}

	void UserConstructionScript();
	void K2_OnUnEquip();
	void OnWeaponAttached();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Grenade_Playset_Athena(int32 EntryPoint, class AController* CallFunc_GetInstigatorController_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller1, bool K2Node_DynamicCast_bSuccess1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
