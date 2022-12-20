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

// 0xF4A (0x12A2 - 0x358)
// AnimBlueprintGeneratedClass BP_GrenadeLauncher.BP_GrenadeLauncher_C
class UBP_GrenadeLauncher_C : public UAnimInstance
{
public:
	uint8                                        Pad_5341[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_CCD9E03141024373207EA19F7FABC7E4; // 0x368(0xB0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_9BE5EC0249061EF1B638FDA411EEAB88; // 0x418(0x48)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_EA2975074BE60949C2769EB733D75B15; // 0x460(0x160)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5027BC3E4B45A2EA685B7E89AFE7BD76; // 0x5C0(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_35ADB9784B260E9E0D5321BC72AC51A5; // 0x608(0x70)()
	struct FAnimNode_Root                        AnimGraphNode_Root_545A1542415580C93B2F2CB92FFE6BF9; // 0x678(0x48)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1B48A4454DD43BDD5D313E9BFCAEB34E; // 0x6C0(0x118)()
	uint8                                        Pad_5342[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_71DAE6D547D6D96F74E8C99E79CBC0DC; // 0x7E0(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4CD0B0D343A573F7E5551299DF889298; // 0x860(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_F88795E14387D493A0441AAF33462D4F; // 0x8E0(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4C05BBC84F89653A9F496ABE3FBFA607; // 0x960(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34526DF547A00B6C25DBA2B722782D7A; // 0x9E0(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3EC4C2194E3816DF80A821927DE6E3D1; // 0xA60(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_744E32E64439A6E346874993BC2D3A07; // 0xAE0(0x80)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_36B2599748A5ECA6839B26B25ED0F41F; // 0xB60(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_F9587DB84CDA0FB47B0428973D59B3E6; // 0xC10(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5DF1EBF84566794DCDFFA19D400B2E34; // 0xC58(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_424E81254A7CDE1BA9149CB49FC795BD; // 0xD08(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2C8CA31D4817C8C9693A6EA8C5EBCE9E; // 0xD50(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_6385996A47E307977AB5BE9C84F42508; // 0xE00(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_03999E3843804F0355B33984C6AB3969; // 0xE48(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_CE69749D4FC3C1D98B24CCA69D360D62; // 0xEF8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_FF94CAE0484DB857352763B8BC624EA0; // 0xF40(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_BF4E8EC14863F22C7C06589F99DF4C3E; // 0xFF0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4DB060FA436822518B51D09E9866705D; // 0x1038(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_75D4D2FC46577E0F28088884ABFA1036; // 0x10E8(0x48)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_4E6685A948E38158991F278F356AAE07; // 0x1130(0x38)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_6975EFCF41B2D616E4B5B4AF156848C7; // 0x1168(0x48)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_46F65ED54161388583A1A59736014BD0; // 0x11B0(0xE0)()
	float                                        CylinderROT;                                       // 0x1290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastFrameRotCurveValue;                            // 0x1294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DrumPositionCount;                                 // 0x1298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldRotateToPos1;                                // 0x129C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldRotateToPos2;                                // 0x129D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldRotateToPos3;                                // 0x129E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldRotateToPos4;                                // 0x129F(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldRotateToPos5;                                // 0x12A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldRotateToPos6;                                // 0x12A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_GrenadeLauncher_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_3EC4C2194E3816DF80A821927DE6E3D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_744E32E64439A6E346874993BC2D3A07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_4C05BBC84F89653A9F496ABE3FBFA607();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_F88795E14387D493A0441AAF33462D4F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_4CD0B0D343A573F7E5551299DF889298();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_71DAE6D547D6D96F74E8C99E79CBC0DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_ModifyBone_EA2975074BE60949C2769EB733D75B15();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_34526DF547A00B6C25DBA2B722782D7A();
	void AnimNotify_RotateDrum();
	void ExecuteUbergraph_BP_GrenadeLauncher(int32 EntryPoint, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
