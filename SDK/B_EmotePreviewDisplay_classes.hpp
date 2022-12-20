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

// 0x40 (0x360 - 0x320)
// BlueprintGeneratedClass B_EmotePreviewDisplay.B_EmotePreviewDisplay_C
class AB_EmotePreviewDisplay_C : public AFortEmotePreviewActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       Scene;                                             // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAthenaEmojiItemDefinition*            EmojiItemDefinition;                               // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAnimMontage>           Animation;                                         // 0x338(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_EmotePreviewDisplay_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnLoaded_638F148342254A777E929B88915A8958(class UObject* Loaded);
	void PreviewEmote(class UFortMontageItemDefinitionBase* Emote);
	void ExecuteUbergraph_B_EmotePreviewDisplay(int32 EntryPoint, class UObject* Temp_object_Variable, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_CustomEvent_Loaded, class UFortMontageItemDefinitionBase* K2Node_Event_Emote, class UAthenaEmojiItemDefinition* K2Node_DynamicCast_AsAthena_Emoji_Item_Definition, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue, enum class EFortCustomGender CallFunc_GetCharacterGender_ReturnValue, enum class EFortCustomBodyType CallFunc_GetCharacterBodyType_ReturnValue, TSoftObjectPtr<class UAnimMontage> CallFunc_GetAnimation_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FTransform& Temp_struct_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue1, float CallFunc_PlayLocalAnimMontage_ReturnValue, class UFortEmojiPreviewComponent* CallFunc_AddComponent_ReturnValue, class UFortEmojiPreviewComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_AnimMontage_LocalJumpToRandomSection_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
