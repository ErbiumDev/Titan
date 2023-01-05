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


// Function MinigameMode_SpikyStadium_Silent.MinigameMode_SpikyStadium_Silent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMinigameMode_SpikyStadium_Silent_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("MinigameMode_SpikyStadium_Silent_C", "UserConstructionScript");

	Params::AMinigameMode_SpikyStadium_Silent_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameMode_SpikyStadium_Silent.MinigameMode_SpikyStadium_Silent_C.HandleMinigameStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMinigameMode_SpikyStadium_Silent_C::HandleMinigameStarted()
{
	static auto Func = Class->GetFunction("MinigameMode_SpikyStadium_Silent_C", "HandleMinigameStarted");

	Params::AMinigameMode_SpikyStadium_Silent_C_HandleMinigameStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameMode_SpikyStadium_Silent.MinigameMode_SpikyStadium_Silent_C.HandleMinigameWarmup
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMinigameMode_SpikyStadium_Silent_C::HandleMinigameWarmup()
{
	static auto Func = Class->GetFunction("MinigameMode_SpikyStadium_Silent_C", "HandleMinigameWarmup");

	Params::AMinigameMode_SpikyStadium_Silent_C_HandleMinigameWarmup_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameMode_SpikyStadium_Silent.MinigameMode_SpikyStadium_Silent_C.HandleMinigameEnded
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMinigameMode_SpikyStadium_Silent_C::HandleMinigameEnded()
{
	static auto Func = Class->GetFunction("MinigameMode_SpikyStadium_Silent_C", "HandleMinigameEnded");

	Params::AMinigameMode_SpikyStadium_Silent_C_HandleMinigameEnded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameMode_SpikyStadium_Silent.MinigameMode_SpikyStadium_Silent_C.ExecuteUbergraph_MinigameMode_SpikyStadium_Silent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMinigameMode_SpikyStadium_Silent_C::ExecuteUbergraph_MinigameMode_SpikyStadium_Silent(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("MinigameMode_SpikyStadium_Silent_C", "ExecuteUbergraph_MinigameMode_SpikyStadium_Silent");

	Params::AMinigameMode_SpikyStadium_Silent_C_ExecuteUbergraph_MinigameMode_SpikyStadium_Silent_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
