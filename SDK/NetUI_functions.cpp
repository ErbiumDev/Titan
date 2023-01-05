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


// Function NetUI.ConnectionTimeoutWidget.StopTimeoutUICheck
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UConnectionTimeoutWidget::StopTimeoutUICheck()
{
	static auto Func = Class->GetFunction("ConnectionTimeoutWidget", "StopTimeoutUICheck");

	Params::UConnectionTimeoutWidget_StopTimeoutUICheck_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function NetUI.ConnectionTimeoutWidget.StartTimeoutUICheck
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UConnectionTimeoutWidget::StartTimeoutUICheck()
{
	static auto Func = Class->GetFunction("ConnectionTimeoutWidget", "StartTimeoutUICheck");

	Params::UConnectionTimeoutWidget_StartTimeoutUICheck_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function NetUI.NetDebugWidget.StopTimer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UNetDebugWidget::StopTimer()
{
	static auto Func = Class->GetFunction("NetDebugWidget", "StopTimer");

	Params::UNetDebugWidget_StopTimer_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function NetUI.NetDebugWidget.StartTimer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UNetDebugWidget::StartTimer()
{
	static auto Func = Class->GetFunction("NetDebugWidget", "StartTimer");

	Params::UNetDebugWidget_StartTimer_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
