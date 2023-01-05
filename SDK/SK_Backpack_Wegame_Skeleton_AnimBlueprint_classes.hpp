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

// 0x1C4 (0x594 - 0x3D0)
// AnimBlueprintGeneratedClass SK_Backpack_Wegame_Skeleton_AnimBlueprint.SK_Backpack_Wegame_Skeleton_AnimBlueprint_C
class USK_Backpack_Wegame_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_1747FACC43F6028274B8148C5C3255C5; // 0x3D8(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_016A74174BE5F7D7F8F91CBB300D568F; // 0x3F8(0x108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_9333DEF34357DB26B270629E3ED30703; // 0x500(0x20)()
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_3F15C75E443C45F1FC993DBB39BBAB6B; // 0x520(0x48)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_AA2CCD2D40620C56F58FEA9E07E91DF2; // 0x568(0x20)()
	struct FRotator                              backpack_rotate;                                   // 0x588(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_Backpack_Wegame_Skeleton_AnimBlueprint_C");
		return Clss;
	}

	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_Backpack_Wegame_Skeleton_AnimBlueprint(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, const struct FTransform& CallFunc_GetDeltaTransformFromRefPose_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_MapRangeClamped_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
