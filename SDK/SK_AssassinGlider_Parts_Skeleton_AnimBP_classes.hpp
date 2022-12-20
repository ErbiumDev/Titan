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

// 0x140 (0x550 - 0x410)
// AnimBlueprintGeneratedClass SK_AssassinGlider_Parts_Skeleton_AnimBP.SK_AssassinGlider_Parts_Skeleton_AnimBP_C
class USK_AssassinGlider_Parts_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_A0752A44442D3CA079409EA4C1CC969B; // 0x418(0x48)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_27CCEEC34EF1C035F244FB83CA9B387D; // 0x460(0xE8)(ContainsInstancedReference)
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_AssassinGlider_Parts_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_AssassinGlider_Parts_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_27CCEEC34EF1C035F244FB83CA9B387D();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_AssassinGlider_Parts_Skeleton_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AB_Glider_Assassin_C* K2Node_DynamicCast_AsB_Glider_Assassin, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
