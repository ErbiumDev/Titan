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
// BlueprintGeneratedClass B_Glider_Rusty_Raider.B_Glider_Rusty_Raider_C
class AB_Glider_Rusty_Raider_C : public AB_EmptyBaseGlider_C
{
public:
	uint8                                        Pad_4814[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Bits;                                              // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Glider_Rusty_Raider_C");
		return Clss;
	}

	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void ReceiveBeginPlay();
	void OnParachuteTrailUpdated(float MovementLengthSquared, float ForwardDot, float RightDot, float RotationalMovementAcceleration);
	void ExecuteUbergraph_B_Glider_Rusty_Raider(int32 EntryPoint, float K2Node_Event_MovementLengthSquared, float K2Node_Event_ForwardDot, float K2Node_Event_RightDot, float K2Node_Event_RotationalMovementAcceleration, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
