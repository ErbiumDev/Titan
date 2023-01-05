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

// 0x48 (0x270 - 0x228)
// WidgetBlueprintGeneratedClass ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C
class UChallengeBundleLockedReasonDisplay_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      LockedText;                                        // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UInterfaceProperty_                          TimeSpanSource;                                    // 0x238(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FFortChallengeBundleInfoLockedReason  ReasonForLock;                                     // 0x248(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChallengeBundleLockedReasonDisplay_C");
		return Clss;
	}

	void GetTimeSpanValue(struct FTimespan* Result, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, const struct FTimespan& CallFunc_GetValue_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HandleTick(class UObject* Source);
	void SetTimespanSource(UInterfaceProperty_ Value, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue1, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue2, bool CallFunc_IsValid_ReturnValue1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue3, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void UpdateLockReasonDisplay(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FTimespan& CallFunc_GetTimespanValue_Result, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_FormatLockedReason_ReturnValue, class FText CallFunc_FormatLockedReason_ReturnValue1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1);
	void SetLockReason(const struct FFortChallengeBundleInfoLockedReason& InValue);
	void Construct();
	void ExecuteUbergraph_ChallengeBundleLockedReasonDisplay(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
