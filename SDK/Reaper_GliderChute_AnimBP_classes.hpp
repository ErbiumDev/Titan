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
// AnimBlueprintGeneratedClass Reaper_GliderChute_AnimBP.Reaper_GliderChute_AnimBP_C
class UReaper_GliderChute_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_5476[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_5A54842C408A8050100891AB4058C8A7; // 0x368(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_20D39D7944CAC167C18F5789F7C0AE7B; // 0x3B0(0x70)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_A7104FFA48E926160BE03DA88FF45BE4; // 0x420(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_DA64D86640F381D54CDEA8BAF301A576; // 0x4A0(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_BA0E544049ED8F65C9C2CEA2EDD69609; // 0x520(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_662E8E6C45285723236371918314AAD4; // 0x5A0(0x80)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_04CC95284A110C598F3C67BDCD6CC50B; // 0x620(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_F474D4544C209E11499B409F08B33765; // 0x6D0(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2D4C5ACE49343C8AF6D3DEA4F137822F; // 0x718(0x128)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_E7DC43FB4F5DE4E559B3ADBF27269D5C; // 0x840(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_F917F9D5454B41D2C1384D922EE22F1B; // 0x888(0x128)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_57252E8F4B03ABB40F4F82BDCFC8E239; // 0x9B0(0x48)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_8AEB2C074A7DD9593AE7AA884E2EE980; // 0x9F8(0xE0)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_D64B97FB4C7A78E8F47D6C8124F85A8A; // 0xAD8(0x128)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_02247F954A8CD3E7D1F22CB0CAE94F23; // 0xC00(0x118)()
	bool                                         IsParachuteOpen;                                   // 0xD18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5477[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimPitch;                                          // 0xD1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeployAnimRate;                                    // 0xD20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkydiveYaw;                                        // 0xD24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UseDynamicsAlpha;                                  // 0xD28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Forward;                                           // 0xD2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Right;                                             // 0xD30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Reaper_GliderChute_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_Reaper_GliderChute_AnimBP_AnimGraphNode_TransitionResult_662E8E6C45285723236371918314AAD4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Reaper_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_2D4C5ACE49343C8AF6D3DEA4F137822F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Reaper_GliderChute_AnimBP_AnimGraphNode_TransitionResult_DA64D86640F381D54CDEA8BAF301A576();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Reaper_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_F917F9D5454B41D2C1384D922EE22F1B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Reaper_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_D64B97FB4C7A78E8F47D6C8124F85A8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Reaper_GliderChute_AnimBP_AnimGraphNode_TransitionResult_A7104FFA48E926160BE03DA88FF45BE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Reaper_GliderChute_AnimBP_AnimGraphNode_TransitionResult_BA0E544049ED8F65C9C2CEA2EDD69609();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_TurnONEngines();
	void ExecuteUbergraph_Reaper_GliderChute_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AFortPlayerParachute* K2Node_DynamicCast_AsFort_Player_Parachute, bool K2Node_DynamicCast_bSuccess, class AB_EmptyBaseGlider_C* K2Node_DynamicCast_AsB_Empty_Base_Glider, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue1, class AFortPlayerParachute* K2Node_DynamicCast_AsFort_Player_Parachute1, bool K2Node_DynamicCast_bSuccess12, class AFortPlayerPawn* CallFunc_GetFortPlayerPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess123, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFortnite_M_Avg_Player_AnimBlueprint_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess1234);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
