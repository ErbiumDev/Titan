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

// 0x698 (0x9F0 - 0x358)
// AnimBlueprintGeneratedClass VinderTech_Umbrella_AnimBP.VinderTech_Umbrella_AnimBP_C
class UVinderTech_Umbrella_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_5554[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_47C162A34E75B5D855F1039C8811E06C; // 0x368(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_55B0C7EB4409F55E838D3CA7B7457964; // 0x3B0(0x70)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9592CEBA49F2B067A15FFFBB6AB5105E; // 0x420(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_F81EA3C344FA6DFC7A5EA1B792B511A5; // 0x4A0(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3753F99B490EFDA0C68FF0B8819E664F; // 0x520(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1A7F7CBD4C68973F2BBDFCBF93433107; // 0x5A0(0x80)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8F6CE6514B2B120BE5A47CA93BF6B64F; // 0x620(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_0FA712374C2DD4AE7BAB068F07EF1E2A; // 0x6D0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_FB121E7E466BDC2AEC2334AABA7B7973; // 0x718(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_12B937664A6236CA6C6F30B310D7D872; // 0x7C8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_CAD550DB43A0B090364489A1ED4F53F6; // 0x810(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_90756A2C41FA0E67C991218B04CCA9C1; // 0x8C0(0x48)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_AD38D8EC41D7A5D47CC14C9AC67E6D6E; // 0x908(0xE0)()
	bool                                         IsParachuteOpen;                                   // 0x9E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5555[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DeployAnimRate;                                    // 0x9EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VinderTech_Umbrella_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_3753F99B490EFDA0C68FF0B8819E664F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_1A7F7CBD4C68973F2BBDFCBF93433107();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_F81EA3C344FA6DFC7A5EA1B792B511A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_9592CEBA49F2B067A15FFFBB6AB5105E();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_VinderTech_Umbrella_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AFortPlayerParachute* K2Node_DynamicCast_AsFort_Player_Parachute, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class AFortPlayerPawn* CallFunc_GetFortPlayerPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class UFortnite_M_Avg_Player_AnimBlueprint_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess12, bool CallFunc_Not_PreBool_ReturnValue1, float K2Node_Event_DeltaTimeX);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
