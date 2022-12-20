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

// 0xE69 (0x1279 - 0x410)
// AnimBlueprintGeneratedClass SK_Glider_Googley_Parts_AnimBP.SK_Glider_Googley_Parts_AnimBP_C
class USK_Glider_Googley_Parts_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_4AAF732D4F37CA3F8DCE94B33002EBE7; // 0x418(0x48)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_20F0BA694D35D3FD9E2BDBB9357DA733; // 0x460(0x48)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_C74F96C74EF4CA217AEFE7BB5A9B2D39; // 0x4A8(0xE8)(ContainsInstancedReference)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_BDA7084443718201EC023284E8C9918F; // 0x590(0x48)()
	uint8                                        Pad_54D7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_F32958DA456544FF8E7090BF0B10ABED; // 0x5E0(0x590)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_130377F1445AC9726373FDA9ABC50D1F; // 0xB70(0x380)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_83986EED479DA633015302A4184AF563; // 0xEF0(0x380)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x1270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DynamicsAlpha;                                     // 0x1278(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_Glider_Googley_Parts_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Glider_Googley_Parts_AnimBP_AnimGraphNode_RigidBody_F32958DA456544FF8E7090BF0B10ABED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Glider_Googley_Parts_AnimBP_AnimGraphNode_CopyPoseFromMesh_C74F96C74EF4CA217AEFE7BB5A9B2D39();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_Glider_Googley_Parts_AnimBP(int32 EntryPoint, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_FClamp_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, class AB_Glider_Googley_C* K2Node_DynamicCast_AsB_Glider_Googley, bool K2Node_DynamicCast_bSuccess, class AB_Glider_Googley_C* K2Node_DynamicCast_AsB_Glider_Googley1, bool K2Node_DynamicCast_bSuccess1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
