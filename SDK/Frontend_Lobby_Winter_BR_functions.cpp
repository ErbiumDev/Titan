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


// Function Frontend_Lobby_Winter_BR.Frontend_Lobby_Winter_BR_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Winter_BR_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Frontend_Lobby_Winter_BR_C", "ReceiveBeginPlay");

	Params::AFrontend_Lobby_Winter_BR_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Winter_BR.Frontend_Lobby_Winter_BR_C.ExecuteUbergraph_Frontend_Lobby_Winter_BR
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Lobby_Winter_BR_C::ExecuteUbergraph_Frontend_Lobby_Winter_BR(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Frontend_Lobby_Winter_BR_C", "ExecuteUbergraph_Frontend_Lobby_Winter_BR");

	Params::AFrontend_Lobby_Winter_BR_C_ExecuteUbergraph_Frontend_Lobby_Winter_BR_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
