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

// 0x17 (0x380 - 0x369)
// BlueprintGeneratedClass B_Glider_Googley.B_Glider_Googley_C
class AB_Glider_Googley_C : public AB_EmptyBaseGlider_C
{
public:
	uint8                                        Pad_54D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Bits;                                              // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Glider_Googley_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void FireDynamics();
	void ExecuteUbergraph_B_Glider_Googley(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UVinderTech_GliderChute_AnimBP_C* K2Node_DynamicCast_AsVinder_Tech_Glider_Chute_Anim_BP, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
