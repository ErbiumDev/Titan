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
// AnimBlueprintGeneratedClass Satellite_GliderChute_AnimBP.Satellite_GliderChute_AnimBP_C
class USatellite_GliderChute_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_546E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_0DDB10EA407EF4DF1476F9BB64FE5915; // 0x368(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_56B1384F445115026FA0DAAD40F10B71; // 0x3B0(0x70)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_48B2CA524A960CA094B1D78F7704E3E1; // 0x420(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7B1B3FA7477B777253D38E9C9C1AC603; // 0x4A0(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8C9ADBA345429BACF25317B2BB9A75B9; // 0x520(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_A256A5E449028C472EA0FC811F65DC98; // 0x5A0(0x80)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9EF1E9AD419BB2887087409A4E8AFBC1; // 0x620(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_D319C44140E775ABB87123A314EBA65B; // 0x6D0(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_9DFF1DA648DFF0039AAF52A7FE8ABDDF; // 0x718(0x128)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_C6FA94584253EC0ED6F665BD3B8EF834; // 0x840(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2E83AF3741DE7EBAC07F1AB985E6C3EE; // 0x888(0x128)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_6FE9A68447C92C4A3DD15A900F8C4918; // 0x9B0(0x48)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_B6EEE0524A55FCD5030381898B953EA6; // 0x9F8(0xE0)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_0700E0D546994D26301C1B9208D8A073; // 0xAD8(0x118)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_48FA3BDA47CA178927D29CADBDF9EC76; // 0xBF0(0x128)()
	bool                                         IsParachuteOpen;                                   // 0xD18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_546F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimPitch;                                          // 0xD1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeployAnimRate;                                    // 0xD20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkydiveYaw;                                        // 0xD24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UseDynamicsAlpha;                                  // 0xD28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Forward;                                           // 0xD2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Right;                                             // 0xD30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Satellite_GliderChute_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_Satellite_GliderChute_AnimBP_AnimGraphNode_TransitionResult_A256A5E449028C472EA0FC811F65DC98();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Satellite_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_9DFF1DA648DFF0039AAF52A7FE8ABDDF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Satellite_GliderChute_AnimBP_AnimGraphNode_TransitionResult_7B1B3FA7477B777253D38E9C9C1AC603();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Satellite_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_2E83AF3741DE7EBAC07F1AB985E6C3EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Satellite_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_48FA3BDA47CA178927D29CADBDF9EC76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Satellite_GliderChute_AnimBP_AnimGraphNode_TransitionResult_48B2CA524A960CA094B1D78F7704E3E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Satellite_GliderChute_AnimBP_AnimGraphNode_TransitionResult_8C9ADBA345429BACF25317B2BB9A75B9();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_TurnONEngines();
	void ExecuteUbergraph_Satellite_GliderChute_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AFortPlayerParachute* K2Node_DynamicCast_AsFort_Player_Parachute, bool K2Node_DynamicCast_bSuccess, class AB_EmptyBaseGlider_C* K2Node_DynamicCast_AsB_Empty_Base_Glider, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue1, class AFortPlayerParachute* K2Node_DynamicCast_AsFort_Player_Parachute1, bool K2Node_DynamicCast_bSuccess12, class AFortPlayerPawn* CallFunc_GetFortPlayerPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess123, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFortnite_M_Avg_Player_AnimBlueprint_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess1234);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
