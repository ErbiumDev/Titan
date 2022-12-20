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

// 0x718 (0xA70 - 0x358)
// AnimBlueprintGeneratedClass BriteBomber_GliderChute_AnimBP.BriteBomber_GliderChute_AnimBP_C
class UBriteBomber_GliderChute_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_2635[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_C985F71D4D9DBE0A46F5DABE43EC328F; // 0x368(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3F0E76FD44D22BCE2EB3D6AE84FE6F1E; // 0x3B0(0x70)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_DBB24C314EDD3301D89D58849E8F9240; // 0x420(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2AB838344513C45252EB0C81DDE67084; // 0x4A0(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_67E3ED4843DA37DD210A63B32C13F845; // 0x520(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5740D2DB4345D1C76FDE51A999B4AC82; // 0x5A0(0x80)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4A7ABD5E4AB0A3FBAE8378976BCDBCDB; // 0x620(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_DA7515DB481389CF529FC9864A295FFB; // 0x6D0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_F383368E438B46219C04F3A54EB292DA; // 0x718(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_A2F94C7A4AA85A7ACFD1BF9CFE5E8555; // 0x7C8(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_60D985E04445E86C1BD168B73582AA91; // 0x810(0x128)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_78C77B594BE6885A47EF4B9E164456FD; // 0x938(0x48)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_099BE1D2437433DD40728A82B33788EB; // 0x980(0xE0)()
	bool                                         IsParachuteOpen;                                   // 0xA60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2636[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimPitch;                                          // 0xA64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeployAnimRate;                                    // 0xA68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkydiveYaw;                                        // 0xA6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BriteBomber_GliderChute_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BriteBomber_GliderChute_AnimBP_AnimGraphNode_TransitionResult_67E3ED4843DA37DD210A63B32C13F845();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BriteBomber_GliderChute_AnimBP_AnimGraphNode_TransitionResult_5740D2DB4345D1C76FDE51A999B4AC82();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BriteBomber_GliderChute_AnimBP_AnimGraphNode_TransitionResult_2AB838344513C45252EB0C81DDE67084();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BriteBomber_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_60D985E04445E86C1BD168B73582AA91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BriteBomber_GliderChute_AnimBP_AnimGraphNode_TransitionResult_DBB24C314EDD3301D89D58849E8F9240();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_BriteBomber_GliderChute_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AFortPlayerParachute* K2Node_DynamicCast_AsFort_Player_Parachute, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class AFortPlayerPawn* CallFunc_GetFortPlayerPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFortnite_M_Avg_Player_AnimBlueprint_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess12, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, float K2Node_Event_DeltaTimeX);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
