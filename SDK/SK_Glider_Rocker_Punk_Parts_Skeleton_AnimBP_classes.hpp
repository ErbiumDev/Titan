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
// AnimBlueprintGeneratedClass SK_Glider_Rocker_Punk_Parts_Skeleton_AnimBP.SK_Glider_Rocker_Punk_Parts_Skeleton_AnimBP_C
class USK_Glider_Rocker_Punk_Parts_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_5083D90C43960F48AF1D5A9E3F495267; // 0x418(0x48)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_E52A56D34130C53F8AFB01A1BDD8E3B6; // 0x460(0xE8)(ContainsInstancedReference)
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_Glider_Rocker_Punk_Parts_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Glider_Rocker_Punk_Parts_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_E52A56D34130C53F8AFB01A1BDD8E3B6();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_Glider_Rocker_Punk_Parts_Skeleton_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AB_Glider_Rocker_Punk_C* K2Node_DynamicCast_AsB_Glider_Rocker_Punk, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
