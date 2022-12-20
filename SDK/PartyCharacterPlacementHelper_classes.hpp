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

// 0x159 (0x471 - 0x318)
// BlueprintGeneratedClass PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C
class APartyCharacterPlacementHelper_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_FE_Smoke;                                        // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Lobby_Character_TopSpot;                        // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      LobbyPlayerPadBottom;                              // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      LobbyPlayerAddPlayer;                              // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      LobbyPlayerPadTop;                                 // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      LobbyPlayerPadGadgets;                             // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  UnderlightBluePoint02;                             // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  UnderlightBluePoint01;                             // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   UnderlightBlue02;                                  // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   UnderlightBlue01;                                  // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   RimSpotLight;                                      // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   TopSpotLight;                                      // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       LightsParent;                                      // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_NoPlayer_Sparkle;                               // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_NoPlayer_Swirl02;                               // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_NoPlayer_Swirl01;                               // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Lobby_Character_Pad_Light_Ring;                 // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Lobby_Character_Pad;                            // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CharacterPlacement;                                // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        PlayerID;                                          // 0x3C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviewMesh;                                       // 0x3C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5287[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           Mesh;                                              // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsPlayerSelected;                                 // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PlayerOnPad;                                       // 0x3D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5288[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MID_Pad;                                           // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugFakePlayer;                                   // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5289[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DebugFakePlayerID_;                                // 0x3E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  Debug_OnFriendLFGRequest;                          // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         PlayerBeingRemoved;                                // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_528A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlay*                              OverlayEmptySpot;                                  // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                              OverlayInputAction;                                // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyPlayerPadTop_C*                  Top;                                               // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyPlayerPadGadgets_C*              Gadgets;                                           // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyPlayerAddPlayer_C*               PlayerAdd;                                         // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       LastAnimatedPlayerPawn;                            // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyPlayerPadBottom_C*               BattlePassWidget;                                  // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthena_PartySuggestion_C*             UI_PartySuggestion;                                // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAllowPartySuggestions;                            // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_528B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OffsetLobbyAddPlayer;                              // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlayerPodiumHovered;                              // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_528C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MID_Pad_Light_Ring;                                // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Top_Light_Ring;                                // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FxActive;                                          // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_528D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthena_PartySuggestion_TempFix_C*     UIPartySuggestionXboxTempFix;                      // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableXboxPartySuggestionFix;                      // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyCharacterPlacementHelper_C");
		return Clss;
	}

	void OnPartySuggestionAccept(int32 PlayerID, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnPartySuggestionChanged(int32 SlotIndex, struct FFortPartySuggestion& FortPartySuggestion, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable12, int32 Temp_int_Variable123, int32 Temp_int_Variable1234, int32 Temp_int_Variable12345, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnPartySuggestionRemoved(int32 SlotIndex, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable12, int32 Temp_int_Variable123, int32 Temp_int_Variable1234, int32 Temp_int_Variable12345, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnPartySuggestionUpdated(int32 SlotIndex, struct FFortPartySuggestion& FortPartySuggestion, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable12, int32 Temp_int_Variable123, int32 Temp_int_Variable1234, int32 Temp_int_Variable12345, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnPartySuggestionAdded(int32 SlotIndex, struct FFortPartySuggestion& FortPartySuggestion, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable12, int32 Temp_int_Variable123, int32 Temp_int_Variable1234, int32 Temp_int_Variable12345, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Refresh_Lights(const struct FFortTeamMemberInfo& Team_Info, const struct FLinearColor& Temp_struct_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, const struct FLinearColor& Temp_struct_Variable1, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue);
	void OnPartyDataChanged(struct FFortTeamMemberInfo& MemberInfo);
	void CompletedQuestPrerequisites(bool* bCompleted, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void IsInLobby(bool* IsInLobby, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsInLobby_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void PlayLobbyAnimation(int32 PartyMemberIndex, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnByIndex_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnLobbyDisconnected();
	void RefreshWidgets(const struct FFortTeamMemberInfo& TeamMemberInfo, bool Has_Player, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, bool Temp_bool_Variable12, enum class ESlateVisibility Temp_byte_Variable1234, enum class ESlateVisibility Temp_byte_Variable12345, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, TArray<struct FFortTeamMemberInfo>& CallFunc_GetTeamMembers_TeamMembers, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_IsInLobby_IsInLobby, bool CallFunc_CompletedQuestPrerequisites_bCompleted, bool CallFunc_IsInLobby_IsInLobby1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, class UFortMcpContext* CallFunc_GetContext_ReturnValue123, enum class ESlateVisibility Temp_byte_Variable123456, enum class ESlateVisibility Temp_byte_Variable1234567, bool Temp_bool_Variable123, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsLocalPlayersUniqueID_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1234, bool CallFunc_BooleanAND_ReturnValue1, int32 CallFunc_GetCurrentPartyMaxSize_ReturnValue, bool CallFunc_BooleanAND_ReturnValue12, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default, class UFortStoreContext* CallFunc_GetContext_ReturnValue12345, enum class EFortStoreState CallFunc_GetStoreState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue12, enum class ESlateVisibility K2Node_Select12_Default, bool CallFunc_BooleanOR_ReturnValue123, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, enum class ESlateVisibility K2Node_Select123_Default, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue123, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123456, enum class EFrontEndCamera CallFunc_GetFrontEndCamera_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1234);
	void InitializeWidgets(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class ULobbyPlayerPadBottom_C* K2Node_DynamicCast_AsLobby_Player_Pad_Bottom, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue12, class ULobbyPlayerAddPlayer_C* K2Node_DynamicCast_AsLobby_Player_Add_Player, bool K2Node_DynamicCast_bSuccess1, class ULobbyPlayerPadGadgets_C* K2Node_DynamicCast_AsLobby_Player_Pad_Gadgets, bool K2Node_DynamicCast_bSuccess12, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue123, class ULobbyPlayerPadTop_C* K2Node_DynamicCast_AsLobby_Player_Pad_Top, bool K2Node_DynamicCast_bSuccess123);
	void OnLobbyPlayerUnhovered(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnTeamMemberRemoved(int32 TeamMemberRemovedInt, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnFrontEndCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnByIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void OnLobbyStarted(int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable12, int32 Temp_int_Variable123, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_GetMaxTeamSizeForSelectedTheater_ReturnValue, int32 Temp_int_Variable1234, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable12345, int32 K2Node_Select_Default, const struct FFortPartySuggestion& CallFunc_GetPartySuggestion_OutSuggestion, bool CallFunc_GetPartySuggestion_ReturnValue);
	void InitializePadUI();
	void Initialize();
	void InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, class UFortPartyContext* CallFunc_GetContext_ReturnValue12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue1234567, class UFortPartyContext* CallFunc_GetContext_ReturnValue12345678, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112, class UFortPartyContext* CallFunc_GetContext_ReturnValue123456789, class UFortPartyContext* CallFunc_GetContext_ReturnValue12345678910, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213, class UFortPartyContext* CallFunc_GetContext_ReturnValue1234567891011, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314, class UFortPartyContext* CallFunc_GetContext_ReturnValue123456789101112, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112131415, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12345678910111213);
	void OnLobbyPlayerUnselected(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnLobbyPlayerSelected(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnLobbyPlayerHovered(int32 PlayerIndex, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void UserConstructionScript(bool CallFunc_SetStaticMesh_ReturnValue);
	void ReceiveBeginPlay();
	void HandleClientEvent_StoreTabClosed(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_StoreTabSelected(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void OnHotfixApplied();
	void ExecuteUbergraph_PartyCharacterPlacementHelper(int32 EntryPoint, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_GetEnableXboxPartySuggestionTempFix_ReturnValue, class UObject* K2Node_HandleClientEvent_EventSource1, class UObject* K2Node_HandleClientEvent_EventFocus1, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, bool K2Node_SwitchInteger_CmpSuccess, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue1, bool CallFunc_GetEnableXboxPartySuggestionTempFix_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Debug_OnFriendLFGRequest__DelegateSignature(int32 PlayerIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
