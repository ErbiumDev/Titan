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

// 0x71C (0xA74 - 0x358)
// AnimBlueprintGeneratedClass TeddyBear_GliderChute_AnimBP.TeddyBear_GliderChute_AnimBP_C
class UTeddyBear_GliderChute_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_5171[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_7B9AB6174CBF26DCFE8C85B4699432FF; // 0x368(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_C0AEB3F64E8B4C932B0DDDBEBCD5C7D6; // 0x3B0(0x70)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2BAC07B641AB7C2328B5EE88BFCEEFEA; // 0x420(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_D05B993342F5390C7313AD9D0D74582B; // 0x4A0(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_348F4FFD4315B58B782EF5842C63FA31; // 0x520(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_062A292B4AA69A68FA1F1FB0F23938A7; // 0x5A0(0x80)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2C843D954470688C6682499E445E913C; // 0x620(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_90D829684F53C5C1DF19C6B84109020A; // 0x6D0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_B61792C5413AAA333931119E94040F61; // 0x718(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_18A861B44C61E1EFE22D70B93E8D009A; // 0x7C8(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_8957D07F4189CEB7EEA42EBBAEABA5B7; // 0x810(0x128)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_81F1F9E547DEDAECE5F9958F98A5E99C; // 0x938(0x48)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_68A674AE4D6D6FC437A3D28D8A1B5733; // 0x980(0xE0)()
	bool                                         IsParachuteOpen;                                   // 0xA60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5172[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimPitch;                                          // 0xA64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeployAnimRate;                                    // 0xA68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkydiveYaw;                                        // 0xA6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UseDynamicsAlpha;                                  // 0xA70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TeddyBear_GliderChute_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_TeddyBear_GliderChute_AnimBP_AnimGraphNode_TransitionResult_348F4FFD4315B58B782EF5842C63FA31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TeddyBear_GliderChute_AnimBP_AnimGraphNode_TransitionResult_062A292B4AA69A68FA1F1FB0F23938A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TeddyBear_GliderChute_AnimBP_AnimGraphNode_TransitionResult_D05B993342F5390C7313AD9D0D74582B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TeddyBear_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_8957D07F4189CEB7EEA42EBBAEABA5B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TeddyBear_GliderChute_AnimBP_AnimGraphNode_TransitionResult_2BAC07B641AB7C2328B5EE88BFCEEFEA();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_dynamicsOff();
	void AnimNotify_dynamicsOn();
	void ExecuteUbergraph_TeddyBear_GliderChute_AnimBP(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AFortPlayerParachute* K2Node_DynamicCast_AsFort_Player_Parachute, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetFortPlayerPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFortnite_M_Avg_Player_AnimBlueprint_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess12);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
