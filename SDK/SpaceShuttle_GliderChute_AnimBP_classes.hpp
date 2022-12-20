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
// AnimBlueprintGeneratedClass SpaceShuttle_GliderChute_AnimBP.SpaceShuttle_GliderChute_AnimBP_C
class USpaceShuttle_GliderChute_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_42AE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_77E022674899D3E62C2970B75A7B8565; // 0x368(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3EFD8A9F4177341F38CC498CB707F3C9; // 0x3B0(0x70)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2167403E4371F0934D5EFDB7A2DC0AAA; // 0x420(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1C1CA6E64B611CC39049589FD6F5EE90; // 0x4A0(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_AD066E9543C0F5BF5A70EE990420C9E5; // 0x520(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_C62A4F1E4E21B9C73EE8A082AC2412CE; // 0x5A0(0x80)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_FDBB7EB74F76A8437CBD8594ADBA1789; // 0x620(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_5115986140287B46E9055CA6B20EBC21; // 0x6D0(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4C58653345D00DD8586FDB8C05BE6D49; // 0x718(0x128)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_CA0C3F3843471D750B7587BE3BE4D037; // 0x840(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_DCED731844684FF6E50014BC28FCF929; // 0x888(0x128)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_55ADBB7C47FC83548BCD87A2D7CFB37E; // 0x9B0(0x48)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_88D47CB04F56A0E2A689B6A91CB1C49E; // 0x9F8(0xE0)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_EF8792574E49D3D818921EA3D9BC8B18; // 0xAD8(0x128)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_5B1D763444AAB8DF48311EB39DDB4FA7; // 0xC00(0x118)()
	bool                                         IsParachuteOpen;                                   // 0xD18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimPitch;                                          // 0xD1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeployAnimRate;                                    // 0xD20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkydiveYaw;                                        // 0xD24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UseDynamicsAlpha;                                  // 0xD28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Forward;                                           // 0xD2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Right;                                             // 0xD30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpaceShuttle_GliderChute_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_TransitionResult_AD066E9543C0F5BF5A70EE990420C9E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_TransitionResult_C62A4F1E4E21B9C73EE8A082AC2412CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_4C58653345D00DD8586FDB8C05BE6D49();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_TransitionResult_1C1CA6E64B611CC39049589FD6F5EE90();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_DCED731844684FF6E50014BC28FCF929();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_EF8792574E49D3D818921EA3D9BC8B18();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_TransitionResult_2167403E4371F0934D5EFDB7A2DC0AAA();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_TurnONEngines();
	void ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AFortPlayerParachute* K2Node_DynamicCast_AsFort_Player_Parachute, bool K2Node_DynamicCast_bSuccess, class AB_EmptyBaseGlider_C* K2Node_DynamicCast_AsB_Empty_Base_Glider, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue1, class AFortPlayerParachute* K2Node_DynamicCast_AsFort_Player_Parachute1, bool K2Node_DynamicCast_bSuccess12, class AFortPlayerPawn* CallFunc_GetFortPlayerPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess123, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFortnite_M_Avg_Player_AnimBlueprint_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess1234);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
