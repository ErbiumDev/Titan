#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayUnhoverCue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutPerkDetailRow_C::PlayUnhoverCue(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static auto Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "PlayUnhoverCue");

	Params::UHeroLoadoutPerkDetailRow_C_PlayUnhoverCue_Params Parms;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayHoverCue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutPerkDetailRow_C::PlayHoverCue(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "PlayHoverCue");

	Params::UHeroLoadoutPerkDetailRow_C_PlayHoverCue_Params Parms;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetShouldDisplayAsIgnored
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldDisplayAsIgnored                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroLoadoutPerkDetailRow_C::SetShouldDisplayAsIgnored(bool ShouldDisplayAsIgnored)
{
	static auto Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "SetShouldDisplayAsIgnored");

	Params::UHeroLoadoutPerkDetailRow_C_SetShouldDisplayAsIgnored_Params Parms;
	Parms.ShouldDisplayAsIgnored = ShouldDisplayAsIgnored;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetPerkTypeToRepresent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortHeroLoadoutPerkTypePerk_Type                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutPerkDetailRow_C::SetPerkTypeToRepresent(enum class EFortHeroLoadoutPerkType Perk_Type)
{
	static auto Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "SetPerkTypeToRepresent");

	Params::UHeroLoadoutPerkDetailRow_C_SetPerkTypeToRepresent_Params Parms;
	Parms.Perk_Type = Perk_Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.IsPerkUnlocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortHeroLoadoutPerkTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTeamLeadPerkUnlockedForHero_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCommanderPerkUnlockedForHero_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UHeroLoadoutPerkDetailRow_C::IsPerkUnlocked(bool Temp_bool_Variable, enum class EFortHeroLoadoutPerkType Temp_byte_Variable, bool CallFunc_IsTeamLeadPerkUnlockedForHero_ReturnValue, bool CallFunc_IsCommanderPerkUnlockedForHero_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "IsPerkUnlocked");

	Params::UHeroLoadoutPerkDetailRow_C_IsPerkUnlocked_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsTeamLeadPerkUnlockedForHero_ReturnValue = CallFunc_IsTeamLeadPerkUnlockedForHero_ReturnValue;
	Parms.CallFunc_IsCommanderPerkUnlockedForHero_ReturnValue = CallFunc_IsCommanderPerkUnlockedForHero_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.GetPerkAbilityKit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortAbilityKit*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortHeroLoadoutPerkTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHeroType*               K2Node_DynamicCast_AsFort_Hero_Type                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilityKit*             CallFunc_GetAbilityKitForHeroPerk_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilityKit*             CallFunc_GetAbilityKitForTeamLeadPerk_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilityKit*             CallFunc_GetAbilityKitForCommanderPerk_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilityKit*             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UFortAbilityKit* UHeroLoadoutPerkDetailRow_C::GetPerkAbilityKit(enum class EFortHeroLoadoutPerkType Temp_byte_Variable, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortHeroType* K2Node_DynamicCast_AsFort_Hero_Type, bool K2Node_DynamicCast_bSuccess, class UFortAbilityKit* CallFunc_GetAbilityKitForHeroPerk_ReturnValue, class UFortAbilityKit* CallFunc_GetAbilityKitForTeamLeadPerk_ReturnValue, class UFortAbilityKit* CallFunc_GetAbilityKitForCommanderPerk_ReturnValue, class UFortAbilityKit* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "GetPerkAbilityKit");

	Params::UHeroLoadoutPerkDetailRow_C_GetPerkAbilityKit_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Hero_Type = K2Node_DynamicCast_AsFort_Hero_Type;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilityKitForHeroPerk_ReturnValue = CallFunc_GetAbilityKitForHeroPerk_ReturnValue;
	Parms.CallFunc_GetAbilityKitForTeamLeadPerk_ReturnValue = CallFunc_GetAbilityKitForTeamLeadPerk_ReturnValue;
	Parms.CallFunc_GetAbilityKitForCommanderPerk_ReturnValue = CallFunc_GetAbilityKitForCommanderPerk_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetHero
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHero*                   Hero                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutPerkDetailRow_C::SetHero(class UFortHero* Hero)
{
	static auto Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "SetHero");

	Params::UHeroLoadoutPerkDetailRow_C_SetHero_Params Parms;
	Parms.Hero = Hero;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateTextStyles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerkUnlocked_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerkUnlocked_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPerkUnlocked_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutPerkDetailRow_C::UpdateTextStyles(float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable, float Temp_float_Variable2, float Temp_float_Variable3, bool Temp_bool_Variable1, float Temp_float_Variable4, bool Temp_bool_Variable2, float Temp_float_Variable5, float Temp_float_Variable6, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool CallFunc_IsPerkUnlocked_ReturnValue, bool CallFunc_IsPerkUnlocked_ReturnValue1, float K2Node_Select_Default, float K2Node_Select1_Default, bool Temp_bool_Variable5, float K2Node_Select2_Default, bool CallFunc_IsPerkUnlocked_ReturnValue2, float K2Node_Select3_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, class UClass* K2Node_Select4_Default, class UClass* K2Node_Select5_Default)
{
	static auto Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "UpdateTextStyles");

	Params::UHeroLoadoutPerkDetailRow_C_UpdateTextStyles_Params Parms;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_float_Variable4 = Temp_float_Variable4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_float_Variable5 = Temp_float_Variable5;
	Parms.Temp_float_Variable6 = Temp_float_Variable6;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.CallFunc_IsPerkUnlocked_ReturnValue = CallFunc_IsPerkUnlocked_ReturnValue;
	Parms.CallFunc_IsPerkUnlocked_ReturnValue1 = CallFunc_IsPerkUnlocked_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_IsPerkUnlocked_ReturnValue2 = CallFunc_IsPerkUnlocked_ReturnValue2;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateFromState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsPerkUnlocked_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilityKit*             CallFunc_GetPerkAbilityKit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilityKit*             CallFunc_GetPerkAbilityKit_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilityKit*             CallFunc_GetPerkAbilityKit_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// struct FSlateBrush                 CallFunc_NoResourceBrush_ReturnValue                             ()
// struct FSlateBrush                 CallFunc_ResizeBrush_ResizedBrush                                ()
// struct FSlateBrush                 CallFunc_ResizeBrush_ResizedBrush1                               ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContextWithSource_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetCombinedDescription_OutDescription                   ()
// bool                               CallFunc_GetCombinedDescription_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutPerkDetailRow_C::UpdateFromState(bool CallFunc_IsPerkUnlocked_ReturnValue, class UFortAbilityKit* CallFunc_GetPerkAbilityKit_ReturnValue, class UFortAbilityKit* CallFunc_GetPerkAbilityKit_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortAbilityKit* CallFunc_GetPerkAbilityKit_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, class FText CallFunc_TextToUpper_ReturnValue, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, const struct FSlateBrush& CallFunc_ResizeBrush_ResizedBrush, const struct FSlateBrush& CallFunc_ResizeBrush_ResizedBrush1, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable1, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class FText K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "UpdateFromState");

	Params::UHeroLoadoutPerkDetailRow_C_UpdateFromState_Params Parms;
	Parms.CallFunc_IsPerkUnlocked_ReturnValue = CallFunc_IsPerkUnlocked_ReturnValue;
	Parms.CallFunc_GetPerkAbilityKit_ReturnValue = CallFunc_GetPerkAbilityKit_ReturnValue;
	Parms.CallFunc_GetPerkAbilityKit_ReturnValue1 = CallFunc_GetPerkAbilityKit_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetPerkAbilityKit_ReturnValue2 = CallFunc_GetPerkAbilityKit_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_NoResourceBrush_ReturnValue = CallFunc_NoResourceBrush_ReturnValue;
	Parms.CallFunc_ResizeBrush_ResizedBrush = CallFunc_ResizeBrush_ResizedBrush;
	Parms.CallFunc_ResizeBrush_ResizedBrush1 = CallFunc_ResizeBrush_ResizedBrush1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_SpawnTooltipContextWithSource_ReturnValue = CallFunc_SpawnTooltipContextWithSource_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_GetCombinedDescription_OutDescription = CallFunc_GetCombinedDescription_OutDescription;
	Parms.CallFunc_GetCombinedDescription_ReturnValue = CallFunc_GetCombinedDescription_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateFromStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutPerkDetailRow_C::UpdateFromStyle(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, bool Temp_bool_Variable1, class UWidget* K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "UpdateFromStyle");

	Params::UHeroLoadoutPerkDetailRow_C_UpdateFromStyle_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroLoadoutPerkDetailRow_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "PreConstruct");

	Params::UHeroLoadoutPerkDetailRow_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetHoverAlphaValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutPerkDetailRow_C::SetHoverAlphaValue(float NewValue)
{
	static auto Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "SetHoverAlphaValue");

	Params::UHeroLoadoutPerkDetailRow_C_SetHoverAlphaValue_Params Parms;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetHoverHorizontalOffset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutPerkDetailRow_C::SetHoverHorizontalOffset(float NewValue)
{
	static auto Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "SetHoverHorizontalOffset");

	Params::UHeroLoadoutPerkDetailRow_C_SetHoverHorizontalOffset_Params Parms;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.ExecuteUbergraph_HeroLoadoutPerkDetailRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_NewValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutPerkDetailRow_C::ExecuteUbergraph_HeroLoadoutPerkDetailRow(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_NewValue1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float K2Node_CustomEvent_NewValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static auto Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "ExecuteUbergraph_HeroLoadoutPerkDetailRow");

	Params::UHeroLoadoutPerkDetailRow_C_ExecuteUbergraph_HeroLoadoutPerkDetailRow_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_NewValue1 = K2Node_CustomEvent_NewValue1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
