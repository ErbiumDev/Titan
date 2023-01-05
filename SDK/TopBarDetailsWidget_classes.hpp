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

// 0x84 (0x2B4 - 0x230)
// WidgetBlueprintGeneratedClass TopBarDetailsWidget.TopBarDetailsWidget_C
class UTopBarDetailsWidget_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoostIndicator_C*                     BoostIndicator;                                    // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_0;                                    // 0x240(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FounderBadge;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBoxLevel;                                         // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MissionRewardBadge;                                // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MonthlyVIPBadge;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextLevel;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Party_Member_Boosted;                              // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    MXPBoostDoubleRest;                                // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    MXPBoostDouble;                                    // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    MXPBoostSingle;                                    // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    MXPBoostRest;                                      // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    MXPBoostSingleRest;                                // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RestType;                                          // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        XPRequiredToLevel;                                 // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CachedLevelXP;                                     // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CachedLevel;                                       // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TopBarDetailsWidget_C");
		return Clss;
	}

	class UWidget* GetAccountToolTipWidget(class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateCommanderLevel(class UFortMcpContext* CallFunc_GetContext_ReturnValue, const struct FFortPublicAccountInfo& CallFunc_GetCurrentlyViewedAccountInfo_Result, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void HandleItemCountChanged(class UFortItemDefinition* Definition, int32 Delta, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HandleLocalAccountInfoChanged(const struct FFortPrivateAccountInfo& NewInfo, int32 DeltaXP, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, int32 K2Node_Select_Default);
	class UWidget* GetMissionRewardBadgeTooltipWidget(class FText TooltipHeader, class FText TooltipDescription, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UMissionRewardBoostBadgeTooltip_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UUserWidget* CallFunc_Create_Custom_Tooltip_Output);
	void Has_Mission_Reward_Boost(bool* Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAccountBuffItem* K2Node_DynamicCast_AsFort_Account_Buff_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsActive_ReturnValue);
	class UWidget* GetFounderBadgetTooltipWidget(class FText TooltipHeader, class FText TooltipDescription, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UFounderBadgeTooltip_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UUserWidget* CallFunc_Create_Custom_Tooltip_Output);
	class UWidget* GetMonthlyVIPBadgetTooltipWidget(class FText TooltipHeader, class FText TooltipDescription, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UMonthlyVIPBadgeTooltip_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UUserWidget* CallFunc_Create_Custom_Tooltip_Output);
	void Has_VIP_Badge(bool* Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAccountBuffItem* K2Node_DynamicCast_AsFort_Account_Buff_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsActive_ReturnValue);
	void Has_Founder_Badge(bool* Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAccountBuffItem* K2Node_DynamicCast_AsFort_Account_Buff_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsActive_ReturnValue);
	void HandleRemotePlayerRemoved(int32 RemovedIndex);
	void HandleOnTeamMemberStateChanged(const struct FFortTeamMemberInfo& NewMemberState);
	void Unbind_Party_Delegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue);
	void Bind_Party_Delegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue);
	int32 BoostExperiencePercentOfLevel(int32 CallFunc_GetXpPerAccountLevel_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, class UFortMcpContext* CallFunc_GetContext_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, int32 CallFunc_GetXpBoostBalance_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	int32 RestExperencePercentOfLevel(int32 CallFunc_GetXpPerAccountLevel_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, class UFortMcpContext* CallFunc_GetContext_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, int32 CallFunc_GetRestXpBalance_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void GetBonusExperienceDescription(class FText* Result, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_NameName_ReturnValue2, class FText CallFunc_Format_ReturnValue, int32 CallFunc_RestExperencePercentOfLevel_ReturnValue, int32 CallFunc_BoostExperiencePercentOfLevel_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, int32 CallFunc_RestExperencePercentOfLevel_ReturnValue1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class FText CallFunc_Format_ReturnValue1, int32 CallFunc_BoostExperiencePercentOfLevel_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, int32 CallFunc_BoostExperiencePercentOfLevel_ReturnValue2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, class FText CallFunc_Format_ReturnValue2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array3, class FText CallFunc_Format_ReturnValue3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array4, int32 CallFunc_RestExperencePercentOfLevel_ReturnValue2, class FText CallFunc_Format_ReturnValue4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData7, class FText CallFunc_Format_ReturnValue5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array6, class FText CallFunc_Format_ReturnValue6, bool CallFunc_EqualEqual_NameName_ReturnValue3, bool CallFunc_EqualEqual_NameName_ReturnValue4, bool CallFunc_EqualEqual_NameName_ReturnValue5, bool CallFunc_EqualEqual_NameName_ReturnValue6);
	class UWidget* GetSkillPointsTooltipWidget(class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	class UWidget* GetBonusExperienceTooltipWidget(class FText TooltipHeader, class FText TooltipDescription, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UXpBonusToolTip_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UUserWidget* CallFunc_Create_Custom_Tooltip_Output);
	void Update_Boosts(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, bool CallFunc_Has_Mission_Reward_Boost_Result, bool CallFunc_Has_VIP_Badge_Result, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, bool CallFunc_Has_Founder_Badge_Result, enum class ESlateVisibility K2Node_Select2_Default);
	void UpdateAccountInfo(const struct FFortPublicAccountInfo& Info);
	void Construct();
	void Xp_Boost_Changed(int32 BoostAmount);
	void On_Party_Left();
	void On_Party_Joined();
	void Founder_Changed();
	void Destruct();
	void ExecuteUbergraph_TopBarDetailsWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortPartyContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, int32 K2Node_CustomEvent_BoostAmount, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, class UFortMcpContext* CallFunc_GetContext_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FFortPrivateAccountInfo& CallFunc_GetLocalAccountInfo_Result);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
