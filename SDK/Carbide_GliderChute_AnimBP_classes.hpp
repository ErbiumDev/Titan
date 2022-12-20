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

// 0x9DC (0xD34 - 0x358)
// AnimBlueprintGeneratedClass Carbide_GliderChute_AnimBP.Carbide_GliderChute_AnimBP_C
class UCarbide_GliderChute_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_5466[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_55709FAA4BAED1A756898DABB2345AD5; // 0x368(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_F76FF39A41DD0CF2F00BA786EE9E6A03; // 0x3B0(0x70)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_85236D0F4B241E1FD020DAB6D126D8E6; // 0x420(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4EADF24044D4F8CC4DCCE9ACB8382F31; // 0x4A0(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8AA921104B841B362E4FC2A293E85ABC; // 0x520(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_E04E997240880BCA3CE1878A391471B8; // 0x5A0(0x80)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_94CEE00F44ED6FFEE3329D8224B587E0; // 0x620(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_ADBF148340DF164912903599A5C1770F; // 0x6D0(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3A87BA0E4BA250557F4D51BA149D83C1; // 0x718(0x128)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_41E0690A4E3AE1BBEF74DAB4DE478E46; // 0x840(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_269B86374FCC6E76D97C6F95D95C73E0; // 0x888(0x128)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_0224067748268E440836D9923432CD37; // 0x9B0(0x48)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_F07AEB884B8D1EE3F6ABEDB0134BF1FE; // 0x9F8(0xE0)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_C62A14B54521E584481E27898B622D00; // 0xAD8(0x118)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_61F66877472CBC9AC03996AF5DAE875A; // 0xBF0(0x128)()
	bool                                         IsParachuteOpen;                                   // 0xD18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5467[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimPitch;                                          // 0xD1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeployAnimRate;                                    // 0xD20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkydiveYaw;                                        // 0xD24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UseDynamicsAlpha;                                  // 0xD28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Forward;                                           // 0xD2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Right;                                             // 0xD30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Carbide_GliderChute_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_Carbide_GliderChute_AnimBP_AnimGraphNode_TransitionResult_8AA921104B841B362E4FC2A293E85ABC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Carbide_GliderChute_AnimBP_AnimGraphNode_TransitionResult_E04E997240880BCA3CE1878A391471B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Carbide_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_3A87BA0E4BA250557F4D51BA149D83C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Carbide_GliderChute_AnimBP_AnimGraphNode_TransitionResult_4EADF24044D4F8CC4DCCE9ACB8382F31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Carbide_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_269B86374FCC6E76D97C6F95D95C73E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Carbide_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_61F66877472CBC9AC03996AF5DAE875A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Carbide_GliderChute_AnimBP_AnimGraphNode_TransitionResult_85236D0F4B241E1FD020DAB6D126D8E6();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_TurnONEngines();
	void ExecuteUbergraph_Carbide_GliderChute_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AFortPlayerParachute* K2Node_DynamicCast_AsFort_Player_Parachute, bool K2Node_DynamicCast_bSuccess, class AB_EmptyBaseGlider_C* K2Node_DynamicCast_AsB_Empty_Base_Glider, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue1, class AFortPlayerParachute* K2Node_DynamicCast_AsFort_Player_Parachute1, bool K2Node_DynamicCast_bSuccess12, class AFortPlayerPawn* CallFunc_GetFortPlayerPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess123, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFortnite_M_Avg_Player_AnimBlueprint_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess1234);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
