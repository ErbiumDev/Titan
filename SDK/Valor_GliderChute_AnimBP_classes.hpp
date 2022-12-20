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
// AnimBlueprintGeneratedClass Valor_GliderChute_AnimBP.Valor_GliderChute_AnimBP_C
class UValor_GliderChute_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_2C30[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_61D7B39F44BFBE29070C37B063EA4242; // 0x368(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_ED504665497666F93540ACA4B2C8682F; // 0x3B0(0x70)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_FD228E3643C2BC9B754DABA4CCADE7EF; // 0x420(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_DA5EA56C483CDA4A88A5679690D2A77A; // 0x4A0(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_291602B344040B199D672FAD327F4B1D; // 0x520(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_62B0118341EBEF5B92915BA7BEFA60E9; // 0x5A0(0x80)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_02F9B28748AA3C819939DFB6AC597DA6; // 0x620(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_0DEDD24D446D2F27C33D4C8F3B9F724F; // 0x6D0(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_58215E2945657D2CC292E59F51C319B9; // 0x718(0x128)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_650381E24DE29A4CB2DFF293B62864BB; // 0x840(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_51F7DA7B455E263449C368A9BC234B16; // 0x888(0x128)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_E14AB4C941293C362F9023B619B75FEE; // 0x9B0(0x48)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_A4C5501B4AC43D92202FC9BEC12AE6E4; // 0x9F8(0xE0)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_01D97B434BABC10810646AAB4354795A; // 0xAD8(0x118)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1C63A2364DFADD8B30ACCCA4339F7BF6; // 0xBF0(0x128)()
	bool                                         IsParachuteOpen;                                   // 0xD18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimPitch;                                          // 0xD1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeployAnimRate;                                    // 0xD20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkydiveYaw;                                        // 0xD24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UseDynamicsAlpha;                                  // 0xD28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Forward;                                           // 0xD2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Right;                                             // 0xD30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Valor_GliderChute_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_Valor_GliderChute_AnimBP_AnimGraphNode_TransitionResult_291602B344040B199D672FAD327F4B1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Valor_GliderChute_AnimBP_AnimGraphNode_TransitionResult_62B0118341EBEF5B92915BA7BEFA60E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Valor_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_58215E2945657D2CC292E59F51C319B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Valor_GliderChute_AnimBP_AnimGraphNode_TransitionResult_DA5EA56C483CDA4A88A5679690D2A77A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Valor_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_51F7DA7B455E263449C368A9BC234B16();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Valor_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_1C63A2364DFADD8B30ACCCA4339F7BF6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Valor_GliderChute_AnimBP_AnimGraphNode_TransitionResult_FD228E3643C2BC9B754DABA4CCADE7EF();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_TurnONEngines();
	void ExecuteUbergraph_Valor_GliderChute_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AFortPlayerParachute* K2Node_DynamicCast_AsFort_Player_Parachute, bool K2Node_DynamicCast_bSuccess, class AB_EmptyBaseGlider_C* K2Node_DynamicCast_AsB_Empty_Base_Glider, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue1, class AFortPlayerParachute* K2Node_DynamicCast_AsFort_Player_Parachute1, bool K2Node_DynamicCast_bSuccess12, class AFortPlayerPawn* CallFunc_GetFortPlayerPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess123, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFortnite_M_Avg_Player_AnimBlueprint_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess1234);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
