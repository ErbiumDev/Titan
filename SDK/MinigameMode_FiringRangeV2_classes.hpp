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

// 0x8 (0x6A8 - 0x6A0)
// BlueprintGeneratedClass MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C
class AMinigameMode_FiringRangeV2_C : public AFortMinigame
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MinigameMode_FiringRangeV2_C");
		return Clss;
	}

	void GiftWeapons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, TArray<class AController*>& CallFunc_GetAllPlayersInVolume_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner2_CastInput, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner3_CastInput, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner4_CastInput);
	void UserConstructionScript();
	void HandleMinigameStarted();
	void ExecuteUbergraph_MinigameMode_FiringRangeV2(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
