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


// Function BP_Snow_Ambient_Lobby.BP_Snow_Ambient_Lobby_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Snow_Ambient_Lobby_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_Snow_Ambient_Lobby_C", "UserConstructionScript");

	Params::ABP_Snow_Ambient_Lobby_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Snow_Ambient_Lobby.BP_Snow_Ambient_Lobby_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Snow_Ambient_Lobby_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_Snow_Ambient_Lobby_C", "ReceiveBeginPlay");

	Params::ABP_Snow_Ambient_Lobby_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Snow_Ambient_Lobby.BP_Snow_Ambient_Lobby_C.UpdateGameSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Snow_Ambient_Lobby_C::UpdateGameSettings()
{
	static auto Func = Class->GetFunction("BP_Snow_Ambient_Lobby_C", "UpdateGameSettings");

	Params::ABP_Snow_Ambient_Lobby_C_UpdateGameSettings_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Snow_Ambient_Lobby.BP_Snow_Ambient_Lobby_C.ExecuteUbergraph_BP_Snow_Ambient_Lobby
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Snow_Ambient_Lobby_C::ExecuteUbergraph_BP_Snow_Ambient_Lobby(int32 EntryPoint, bool CallFunc_IsActive_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_Snow_Ambient_Lobby_C", "ExecuteUbergraph_BP_Snow_Ambient_Lobby");

	Params::ABP_Snow_Ambient_Lobby_C_ExecuteUbergraph_BP_Snow_Ambient_Lobby_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
