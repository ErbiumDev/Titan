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

// 0xE4 (0x46C - 0x388)
// WidgetBlueprintGeneratedClass FrontEnd.FrontEnd_C
class UFrontEnd_C : public UFortUIStateWidget_Frontend
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBottomBarWidget_C*                    BottomBar;                                         // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               BottomBarSizedSpacer;                              // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonPTT;                                         // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonToggleChat;                                  // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatWidget_C*                         ChatWidget;                                        // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               MainAreaDarken;                                    // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetStack*                    MainContentStack;                                  // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxPTT;                                        // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTopBar_C*                             TopBar;                                            // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               TopBarSizedSpacer;                                 // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         PlayedCurrentEventMovie;                           // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         StartedPlayingVideo;                               // 0x3E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42F5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        CampaignScriptedActions;                           // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                        PostSubgameScriptedActions;                        // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         HasBeenDeferringSurvivorSquadAutoSlottedNotification; // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<enum class EFortStoreState>             StoreStatesThatDeferSurvivorSquadAutoSlottingNotifications; // 0x410(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FName                                  AthenaEventVideoID;                                // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TrailerMovieIndex;                                 // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontEnd_C");
		return Clss;
	}

	void LoadTrailer(class UFortActivatableVideoPanel* ActivatableMovieWidget, int32 VideoIndex, bool* Return_Value, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_LoadVideo_ReturnValue, bool CallFunc_LoadVideoByIndex_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void QueueSurvivorSquadsAutoSlottedNotification(class FText Temp_text_Variable, class FText Temp_text_Variable1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UBasicNotification_C* CallFunc_CreateNotification_ReturnValue);
	void SetupSafeZones(class UAthenaTabsScreen_C* AthenaTabsScreen, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum_CmpSuccess);
	void RegisterPostSubGameScriptedActions(class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsCampaign_ReturnValue);
	bool IsCampaign(class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void IsPrototyping(bool* Result, class UFortPrototypingContext* CallFunc_GetContext_ReturnValue, enum class EFortPrototypingStatus CallFunc_GetPrototypingStatus_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void PlayTrailer(int32 VideoIndex, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UActivatableMovieWidget_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_LoadTrailer_Return_Value, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void InitChatVisibilityButton(bool CallFunc_IsMobileGame_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdatePttVisibility(enum class EPTTState PTTState, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_GetCanPTT_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush2, bool CallFunc_IsMobileGame_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EPTTState Temp_byte_Variable, bool CallFunc_BooleanAND_ReturnValue1, const struct FSlateBrush& K2Node_Select_Default);
	void SetOverlayTitleBarVisibility(bool Visible);
	void PlayEventMovieIfNecessary(bool* PlayingEventMovie, bool Temp_bool_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NeedsToPlayEventMovie_NeedsToPlayEventMovie);
	void NeedsToPlayEventMovie(bool* NeedsToPlayEventMovie, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateVisibilityState(bool HideHeader, bool HideFooter, bool HideChat, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue2);
	void SetChatWidgetVisibility(bool Visible, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void InitForSubGame(class UFortMainTabsScreenBase* StwTabsScreen, class UAthenaTabsScreen_C* AthenaTabsScreen, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFortMainTabsScreenBase* K2Node_DynamicCast_AsFort_Main_Tabs_Screen_Base, bool K2Node_DynamicCast_bSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_ShouldMcpPartyInvitesBeEnabled_ReturnValue, bool CallFunc_PlayEventMovieIfNecessary_PlayingEventMovie, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_ShouldMcpPartyInvitesBeEnabled_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaTabsScreen_C* CallFunc_Create_ReturnValue);
	void GetActiveTab(class FName* ActiveTab, class UWidget* CallFunc_GetChildAt_ReturnValue, class UFortMainTabsScreenBase* K2Node_DynamicCast_AsFort_Main_Tabs_Screen_Base, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetActiveTab_ReturnValue);
	void HandleWidgetStackChanged(class UWidget* Widget, int32 ActiveWidgetIndex, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_PopContentWidget_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1, bool CallFunc_HasPendingNavigationOp_ReturnValue);
	void UnbindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6);
	void HandlePopContentStackOp(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_PopContentWidget_ReturnValue);
	class UWidget* PopContentWidgetInternal(const struct FContentPushState& State, class UWidget* CallFunc_PopWidget_ReturnValue);
	void HandleQuestRewardClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& Rewards, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortQuestItemDefinition* K2Node_DynamicCast_AsFort_Quest_Item_Definition, bool K2Node_DynamicCast_bSuccess, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, class UFortStoreContext* CallFunc_GetContext_ReturnValue3, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8);
	void HandleEnterFrontend(enum class EFortUIState UIState, enum class EFortUIState LocalUIState, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2);
	void SetFooterVisibility(bool Visible);
	void SetHeaderVisibility(bool Visible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void RegisterScriptedActions(enum class EFortUIState InPreviousUIState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_IsCampaign_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue);
	void HandleMainMenuStateChanged(bool Index, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class FName CallFunc_GetActiveTab_ActiveTab, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Select1_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	struct FEventReply On_MainAreaDarken_MouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void HandleLobbyDisconnected();
	void PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State);
	void OnExitState(enum class EFortUIState NextUIState);
	void Destruct();
	void DailyRewardsTokenGranted();
	void HandleClientEvent_FinishedModalWindows(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void OnFrontEndVisibilityUpdated(bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void HandleClientEvent_EventMovieFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_NotPlayingEventMovie(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void RequestOpenSocialMenu();
	void Construct();
	void Loading_Screen_Changed(bool IsVisible);
	void BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleQuestsCompleted(TArray<class UFortQuestItem*>& Quests);
	void BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected);
	void BndEvt__ButtonPTT_K2Node_ComponentBoundEvent_138_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void On_Can_PTT();
	void HandleQuestsGranted(TArray<class UFortQuestItem*>& Quests);
	void OnEnterState(enum class EFortUIState PreviousUIState);
	void On_Social_Import_Closed();
	void OnMovieFinished();
	void HandleSurvivorSquadsAutoSlotted();
	void HandleStoreStateChanged(enum class EFortStoreState NewStoreState);
	void ToggleBars(bool Hide);
	void ExecuteUbergraph_FrontEnd(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPTTState CallFunc_GetPTTState_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, enum class EPTTState CallFunc_GetPTTState_ReturnValue1, bool CallFunc_ShouldShowSocialImport_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue5, enum class ESubGame CallFunc_GetSubGame_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue6, enum class EFortStoreState CallFunc_GetStoreState_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue7, bool Temp_bool_Variable, bool CallFunc_IsWaitingForMcp_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue8, class UFortSocialImportPanel* CallFunc_ShowSocialImport_ReturnValue, class UWidget* K2Node_Event_Widget, const struct FContentPushState& K2Node_Event_State, enum class EPTTState Temp_byte_Variable2, enum class EFortUIState K2Node_Event_NextUIState, class UObject* K2Node_HandleClientEvent_EventSource2, class UObject* K2Node_HandleClientEvent_EventFocus2, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent2, enum class EPTTState Temp_byte_Variable3, bool K2Node_Event_bHideHeader, bool K2Node_Event_bHideFooter, bool K2Node_Event_bHideChatWidget, class UObject* K2Node_HandleClientEvent_EventSource1, class UObject* K2Node_HandleClientEvent_EventFocus1, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent1, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, enum class EPTTState Temp_byte_Variable4, bool K2Node_CustomEvent_IsVisible, class UCommonButton* K2Node_ComponentBoundEvent_Button2, TArray<class UFortQuestItem*>& K2Node_CustomEvent_Quests1, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool K2Node_ComponentBoundEvent_Selected, enum class EPTTState Temp_byte_Variable5, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue9, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class EPTTState CallFunc_GetPTTState_ReturnValue2, class UClass* Temp_class_Variable, enum class EPTTState K2Node_Select_Default, class UClass* Temp_class_Variable1, TArray<class UFortQuestItem*>& K2Node_CustomEvent_Quests, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool Temp_bool_Variable1, enum class EFortUIState K2Node_Event_PreviousUIState, class UClass* K2Node_Select1_Default, bool CallFunc_CheckForGifts_ReturnValue, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, bool CallFunc_NeedSeeTrailerMovie_ReturnValue, bool CallFunc_CheckForGifts_ReturnValue1, bool CallFunc_AttemptToOpenBattlePassTabForNewSeason_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortStoreState K2Node_CustomEvent_NewStoreState, bool Temp_bool_Variable2, bool CallFunc_Set_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, bool CallFunc_BooleanAND_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue10, bool CallFunc_Set_Contains_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue11, bool CallFunc_IsCurrentlyShowingLoadingScreen_ReturnValue, bool K2Node_CustomEvent_Hide, enum class ESlateVisibility K2Node_Select3_Default, int32 CallFunc_GetTrailerMovieIndexThatNeedsToBeShownForQuest_IndexOfMovieToShow, bool CallFunc_GetTrailerMovieIndexThatNeedsToBeShownForQuest_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, enum class ESubGame CallFunc_GetSubGame_ReturnValue2, bool K2Node_SwitchEnum1_CmpSuccess, class UFortMcpContext* CallFunc_GetContext_ReturnValue13, int32 CallFunc_IsDailyRewardAvailable_OutMinutesUntilNextReward, bool CallFunc_IsDailyRewardAvailable_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
