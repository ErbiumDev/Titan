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

// 0x794 (0xAEC - 0x358)
// AnimBlueprintGeneratedClass Dragon_GliderChute_AnimBP.Dragon_GliderChute_AnimBP_C
class UDragon_GliderChute_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_547D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_A99615014EA5B13CC3254083B9D5FEDE; // 0x368(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_E4E7F1A44C799E996866EFAEFE335FB3; // 0x3B0(0x70)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_857A34EA4F0A297E27DF8C8427539989; // 0x420(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6F88DBB041D7585C55DFCDBE41CF7455; // 0x4A0(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_D240FC4E4CD55E6DB1C9ADA2282691FA; // 0x520(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5C8E801E4C9EED53D45DBABFAF43ED35; // 0x5A0(0x80)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_C37BB15D46E2FD548BB13589A6F827CB; // 0x620(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_14DFFF1246519F2F4A733EB9CEF80A83; // 0x6D0(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_060F8D4C46B093E16BA7C9B571311841; // 0x718(0x128)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_48A5286F45FAFEB052182999527AC6D9; // 0x840(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_BA31A8FF4EBE384F500F70B05460E3C4; // 0x888(0x128)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_566190374510421740624895F4503B6D; // 0x9B0(0x48)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_EE98A1244C3B0FD7934F5AB203F0C4FA; // 0x9F8(0xE0)()
	bool                                         IsParachuteOpen;                                   // 0xAD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_547E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimPitch;                                          // 0xADC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeployAnimRate;                                    // 0xAE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkydiveYaw;                                        // 0xAE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UseDynamicsAlpha;                                  // 0xAE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Dragon_GliderChute_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dragon_GliderChute_AnimBP_AnimGraphNode_TransitionResult_D240FC4E4CD55E6DB1C9ADA2282691FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dragon_GliderChute_AnimBP_AnimGraphNode_TransitionResult_5C8E801E4C9EED53D45DBABFAF43ED35();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dragon_GliderChute_AnimBP_AnimGraphNode_TransitionResult_6F88DBB041D7585C55DFCDBE41CF7455();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dragon_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_060F8D4C46B093E16BA7C9B571311841();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dragon_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_BA31A8FF4EBE384F500F70B05460E3C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dragon_GliderChute_AnimBP_AnimGraphNode_TransitionResult_857A34EA4F0A297E27DF8C8427539989();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_dynamicsOff();
	void AnimNotify_dynamicsOn();
	void ExecuteUbergraph_Dragon_GliderChute_AnimBP(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AFortPlayerParachute* K2Node_DynamicCast_AsFort_Player_Parachute, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetFortPlayerPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFortnite_M_Avg_Player_AnimBlueprint_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess12);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
