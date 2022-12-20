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

// 0x1F (0x388 - 0x369)
// BlueprintGeneratedClass B_Glider_Valor.B_Glider_Valor_C
class AB_Glider_Valor_C : public AB_EmptyBaseGlider_C
{
public:
	uint8                                        Pad_539B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(Transient, DuplicateTransient)
	class UFortVehicleAudioVoice*                FortVehicleAudioVoice;                             // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              TrailParticles_2;                                  // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Glider_Valor_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnParachuteTrailUpdated(float MovementLengthSquared, float ForwardDot, float RightDot, float RotationalMovementAcceleration);
	void ResetDoOnce();
	void ExecuteUbergraph_B_Glider_Valor(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_MovementLengthSquared, float K2Node_Event_ForwardDot, float K2Node_Event_RightDot, float K2Node_Event_RotationalMovementAcceleration, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_IsClosed_Variable);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
