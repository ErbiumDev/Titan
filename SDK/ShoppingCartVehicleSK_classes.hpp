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

// 0x358 (0xFF8 - 0xCA0)
// BlueprintGeneratedClass ShoppingCartVehicleSK.ShoppingCartVehicleSK_C
class AShoppingCartVehicleSK_C : public AFortAthenaSKPushVehicle
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xCA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         BulletCollision;                                   // 0xCA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         PawnStepUpCollision_Bottom;                        // 0xCB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         OverlapTrigger;                                    // 0xCB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         PawnStepUpCollision;                               // 0xCC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortVehicleAudioVoice*                AudioWind;                                         // 0xCC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Shopping_Cart_Vehicle_WheelDust;                 // 0xCD0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortCollisionAudioComponent*          FortCollisionAudio;                                // 0xCD8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortVehicleAudioVoice*                AudioScrape;                                       // 0xCE0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortVehicleAudioVoice*                AudioInAir;                                        // 0xCE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortVehicleAudioVoice*                AudioSkid;                                         // 0xCF0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortVehicleAudioVoice*                AudioCoast;                                        // 0xCF8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortVehicleAudioVoice*                AudioMovement;                                     // 0xD00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            OnDeathSound;                                      // 0xD08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PassengerPawn;                                     // 0xD10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        ImpulsePower;                                      // 0xD18(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        RearVectorThreshold;                               // 0xD38(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               ImpulseVector;                                     // 0xD58(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37FF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortPickup*>                   AttachedPickups;                                   // 0xD68(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AFortPickup*                           FortPickup;                                        // 0xD78(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        MaxPickups;                                        // 0xD80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentPickups;                                    // 0xD84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*              ObjectReference;                                   // 0xD88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     DrivingPlayerController;                           // 0xD90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TurningAmount;                                     // 0xD98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3800[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraShake*                          CameraShake;                                       // 0xDA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_RocketLauncher_Generic_Athena_C*    BoundRocket;                                       // 0xDA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       DriverPawn;                                        // 0xDB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CorrectiveImpulse;                                 // 0xDB8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3801[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraShake*                          CoastingCameraShake;                               // 0xDC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NormalizedSpeed;                                   // 0xDD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScreenShakeFrequencyMin;                           // 0xDD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScreenShakeFrequencyMax;                           // 0xDD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScreenShakeYawFrequencyMultipier;                  // 0xDDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AmplitudeMin;                                      // 0xDE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AmplitudeMax;                                      // 0xDE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InAirSmoothed;                                     // 0xDE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraShakeSpeedCurvePow;                          // 0xDEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SmoothedSpringCompression;                         // 0xDF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3802[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        ScreenShakeMult;                                   // 0xDF8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        RumbleMultipier;                                   // 0xE18(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        RumbleMulti;                                       // 0xE38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SparksRumbleMulti;                                 // 0xE3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCoastingCameraShake;                              // 0xE40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3803[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SprintAmplitude;                                   // 0xE44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       LastDriver;                                        // 0xE48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZImpulseMultiplier;                                // 0xE50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinVelocityToLaunch;                               // 0xE54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxLaunchVelocity;                                 // 0xE58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LaunchAngle;                                       // 0xE5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                 LastHitPlayer;                                     // 0xE60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LaunchMultiplier;                                  // 0xE68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3804[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Hit_ZImpulseMultiplier;                            // 0xE70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Hit_LateralImpulseMultiplier;                      // 0xE90(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Hit_MaxImpulseVelocity;                            // 0xEB0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        HealthToDestroyProp;                               // 0xED0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IgnoreHitLastDriver;                               // 0xED4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PassengerIsInstigator;                             // 0xED5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3805[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  DoorMesh;                                          // 0xED8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        CanLaunchPlayer;                                   // 0xEE0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        PassengerCameraShakeMultiplier;                    // 0xF00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3806[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraShake*                          PassengerCameraShake;                              // 0xF08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     PassengerPlayerController;                         // 0xF10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              QuestItem;                                         // 0xF18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ObjBackendName;                                    // 0xF20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ObjStat;                                           // 0xF28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UParticleSystemComponent*              InWaterFX;                                         // 0xF38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                GCParamsEmpty;                                     // 0xF40(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ShoppingCartVehicleSK_C");
		return Clss;
	}

	class FName GetVehicleSeatPrimaryAction(class AFortPlayerPawn* FortPlayerPawn, class FName CallFunc_GetShoppingCartCoastActionName_ReturnValue, class FName CallFunc_GetVehicleJumpActionName_ReturnValue, uint8 CallFunc_GetVehicleSeatIndex_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	TArray<class FText> GetVehicleSeatActionLabels(class AFortPlayerPawn* PlayerPawn, enum class ECommonInputType OverrideInputType, const TArray<class FText>& ReturnLabels_Local, bool CallFunc_IsDrivingVehicle_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3);
	TArray<class FText> GetVehicleSeatLabels(class AFortPlayerPawn* PlayerPawn, enum class ECommonInputType OverrideInputType, const TArray<class FText>& ReturnLabels_Local, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1);
	TArray<class FName> GetVehicleSeatActionNames(class AFortPlayerPawn* PlayerPawn, enum class ECommonInputType OverrideInputType, class AFortPlayerPawn* PlayerPawn_Local, const TArray<class FName>& ReturnActionNames_Local, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class FName CallFunc_GetVehicleChangeSeatActionName_ReturnValue, class FName CallFunc_GetShoppingCartCoastActionName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsDrivingVehicle_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class FName CallFunc_GetVehicleExitActionName_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue1, class FName CallFunc_GetVehicleJumpActionName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3);
	void UpdateDynamicCameraShake(float ShakeFrequency, float CamerShakeAmplitude, float SpringFudgeValue, float ShakeAmount, float CallFunc_GetForwardSpeedKmh_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FClamp_ReturnValue1, bool CallFunc_IsInAir_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue1, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue1, const struct FFOscillator& K2Node_MakeStruct_FOscillator, float CallFunc_Multiply_FloatFloat_ReturnValue3, const struct FFOscillator& K2Node_MakeStruct_FOscillator1, const struct FROscillator& K2Node_MakeStruct_ROscillator, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, float CallFunc_GetForwardSpeedKmh_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue4, const struct FFOscillator& K2Node_MakeStruct_FOscillator2, float CallFunc_Multiply_FloatFloat_ReturnValue5, float CallFunc_Lerp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue6, const struct FFOscillator& K2Node_MakeStruct_FOscillator3, const struct FROscillator& K2Node_MakeStruct_ROscillator1, float CallFunc_Lerp_ReturnValue1);
	void IsLocalPlayerRiding(bool* Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue1, bool CallFunc_IsValid_ReturnValue1);
	void OnRep_CorrectiveImpulse();
	void PlayHapticsOnHit(float HitMagnitude, const TArray<class APlayerController*>& ValidPlayerControllers, float CameraShakeMagnitude, int32 DriverPassengerBoth, float HitDelta, float CameraPushVelocityDelta, float HitLength, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Variable2, int32 Temp_int_Variable3, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, const struct FVector& CallFunc_GetPreviousLinearVelocity_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, class APlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, class APlayerController* CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, class APlayerController* CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_GetPreviousLinearVelocity_ReturnValue1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetComponentVelocity_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue2, bool CallFunc_IsValid_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue1, bool CallFunc_IsValid_ReturnValue2);
	void AttachWeaponToCart(int32 Selection, bool K2Node_SwitchInteger_CmpSuccess, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue4, float CallFunc_RandomFloatInRange_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue5, float CallFunc_RandomFloatInRange_ReturnValue2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void OnRep_ImpulseVector();
	void UserConstructionScript();
	void OnCollisionHitEffects(struct FVector& HitLocation, struct FVector& HitNormalImpulse, struct FVector& HitFrictionImpulse, struct FVector& HitNormal, class AActor* HitActor, enum class EPhysicalSurface HitSurfaceType);
	void ApplyImpulse();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void AttachToCart();
	void DropItems();
	void UpdateMovementCosmeticParameters();
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveTick(float DeltaSeconds);
	void PedalForceFeedback();
	void OnPawnEnterVehicle(class AFortPlayerPawn* PlayerPawn, int32 SeatIdx);
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void RocketSpawned();
	void OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, class FName ExitSocketName);
	void OnDamaged(float Damage, struct FGameplayTagContainer& DamageTags, struct FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser);
	void Update_Damage_State(float Damage);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnSpringCompression();
	void OnEnteredWaterVolume(struct FVector& WaterSurfacePoint);
	void OnExitedWaterVolume(struct FVector& WaterSurfacePoint);
	void CheckWater();
	void PawnHitByVehicle(class AFortPawn* Pawn, struct FVector& ImpactPoint, struct FVector& ImpactNormal, const struct FVector& LaunchVector);
	void OnStopTick();
	void OnIsCoastingChanged();
	void OnIsSprintingChanged();
	void StopDriverRumble();
	void StartDriverRumble();
	void StartDriverCameraShake();
	void StopCoastCameraShake();
	void StopDriverCameraShake();
	void CanHitLastDriver();
	void ExecuteUbergraph_ShoppingCartVehicleSK(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UCameraShake* CallFunc_PlayCameraShake_ReturnValue, bool CallFunc_IsAsleep_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AFortPlayerPawn* K2Node_Event_PlayerPawn1, int32 K2Node_Event_SeatIdx, bool K2Node_SwitchInteger_CmpSuccess, class AController* CallFunc_GetController_ReturnValue, class AFortWeapon* K2Node_CustomEvent_NewWeapon, class AFortWeapon* K2Node_CustomEvent_PrevWeapon, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AB_RocketLauncher_Generic_Athena_C* K2Node_DynamicCast_AsB_Rocket_Launcher_Generic_Athena, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsCoasting_ReturnValue, class AFortPlayerPawn* CallFunc_GetDriver_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AFortPlayerPawn* K2Node_Event_PlayerPawn, class FName K2Node_Event_ExitSocketName, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormalImpulse, const struct FVector& K2Node_Event_HitFrictionImpulse, const struct FVector& K2Node_Event_HitNormal, class AActor* K2Node_Event_HitActor, enum class EPhysicalSurface K2Node_Event_HitSurfaceType, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class AController* K2Node_Event_EventInstigator, class AActor* K2Node_Event_DamageCauser, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess2, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_OnCollision_OutResult, float CallFunc_OnCollision_OutMagnitude, float CallFunc_GetHealth_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, float CallFunc_GetMaxHealth_ReturnValue, float K2Node_CustomEvent_Damage, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AFortPlayerPawn* CallFunc_GetDriver_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, float K2Node_Event_DeltaSeconds, class AController* CallFunc_GetInstigatorController_ReturnValue, bool CallFunc_HasDriver_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue1, float K2Node_Event_Damage1, const struct FGameplayTagContainer& K2Node_Event_DamageTags1, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext1, bool CallFunc_HasDriver_ReturnValue1, class AController* CallFunc_GetInstigatorController_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue2, class AB_RocketLauncher_Generic_Athena_C* K2Node_DynamicCast_AsB_Rocket_Launcher_Generic_Athena1, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsDedicatedServer_ReturnValue, class UCameraShake* CallFunc_PlayCameraShake_ReturnValue1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AController* CallFunc_GetController_ReturnValue1, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess4, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess5, const struct FGameplayTagContainer& CallFunc_GetAthenaPlaylistContextTags_ReturnValue, bool CallFunc_HasTag_ReturnValue, const struct FVector& K2Node_Event_WaterSurfacePoint1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& K2Node_Event_WaterSurfacePoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue1, enum class EDynamicForceFeedbackAction Temp_byte_Variable, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, int32 CallFunc_GetRenderingDetailMode_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue1, const struct FVector& CallFunc_InverseTransformDirection_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue3, class AFortPawn* K2Node_Event_Pawn, const struct FVector& K2Node_Event_ImpactPoint, const struct FVector& K2Node_Event_ImpactNormal, const struct FVector& K2Node_Event_LaunchVector, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess6, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess7, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue5, bool CallFunc_BooleanOR_ReturnValue, TArray<class AFortPlayerPawn*>& CallFunc_GetAllPassengers_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, class AFortPlayerPawn* CallFunc_Array_Get_Item, bool CallFunc_BooleanOR_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, TArray<class AFortPlayerPawn*>& CallFunc_GetAllPassengers_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_IsLocalPlayerRiding_Result, bool CallFunc_IsCoasting_ReturnValue1, bool CallFunc_IsSprinting_ReturnValue, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AFortPickup* K2Node_DynamicCast_AsFort_Pickup, bool K2Node_DynamicCast_bSuccess8, bool CallFunc_IsCoasting_ReturnValue2, bool CallFunc_IsValid_ReturnValue6, int32 Temp_int_Array_Index_Variable1, class AFortPickup* CallFunc_Array_Get_Item1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_IsValid_ReturnValue7, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_IsValid_ReturnValue8, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_Less_IntInt_ReturnValue2, bool CallFunc_IsValid_ReturnValue9, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_IsValid_ReturnValue10, bool CallFunc_IsValid_ReturnValue11, class UCameraShake* CallFunc_PlayCameraShake_ReturnValue2, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_IsValid_ReturnValue13, float CallFunc_FMax_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetForwardSpeedKmh_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, bool CallFunc_IsValid_ReturnValue14, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, class UParticleSystem* Temp_object_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, class UParticleSystem* Temp_object_Variable1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, int32 Temp_int_Array_Index_Variable2, class AFortPlayerPawn* CallFunc_Array_Get_Item2, bool CallFunc_IsValid_ReturnValue15, bool CallFunc_IsValid_ReturnValue16, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue17, class UParticleSystem* K2Node_Select_Default, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1, bool CallFunc_IsInAir_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, float CallFunc_GetValueAtLevel_ReturnValue1, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue3, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue5, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, class AController* CallFunc_GetController_ReturnValue2, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller1, bool K2Node_DynamicCast_bSuccess9);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
