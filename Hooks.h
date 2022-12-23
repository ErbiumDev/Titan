#pragma once
#include "Includes.h"
#include "Abilities.h"
#include "Inventory.h"
#include "Game.h"
#include <detours.h>

namespace Hooks {
	void*(*ProcessEventO)(UObject* Obj, UFunction* Func, void* Params);
	void* ProcessEventHook(UObject* Obj, UFunction* Func, void* Params) {
		if (Obj && Func) {
			auto FuncName = Func->GetName();
			//Basic In Game Stuff
			if (FuncName == "ReadyToStartMatch" && bInGame == false) {
				bInGame = true;
				Dump();
				AAthena_GameMode_C* GameMode = (AAthena_GameMode_C*)Obj;
				AAthena_GameState_C* GameState = (AAthena_GameState_C*)GameMode->GameState;
				Player::UpdatePlayerController();
				Game::CreateCheatManager();
				LOG("CheatManager Created!");
				Player::SetupPawn();
				LOG("Pawn Spawned!");
				GPlayerController->CheatManager->God();
				GPlayerController->bInfiniteAmmo = true;
				GPlayerController->ServerSetClientHasFinishedLoading(true);
				GPlayerController->bHasServerFinishedLoading = true;
				GPlayerController->OnRep_bHasServerFinishedLoading();
				LOG("Setup Player!");
				Player::ShowSkin();
				LOG("Set Skin!");
				UFortPlaylistAthena* Playlist = UObject::FindObject<UFortPlaylistAthena>("FortPlaylistAthena Playlist_Playground.Playlist_Playground");
				GameState->CurrentPlaylistData = Playlist;
				GameState->CurrentPlaylistId = Playlist->PlaylistId;
				GameState->OnRep_CurrentPlaylistData();
				GameState->OnRep_CurrentPlaylistId();
				LOG("Playlist Set!");
				GameState->GamePhase = EAthenaGamePhase::Aircraft;
				GameState->OnRep_GamePhase(EAthenaGamePhase::None);
				LOG("Gamephase Set!");
				//GameMode->StartMatch(); (Crashes: Fix is in Reboot but it's not needed so we're good)
				Inventory::SetupInventory();
				LOG("Inventory Setup!");
				GPlayerController->CheatManager->DestroyAll(AFortHLODSMActor::StaticClass());
				LOG("Destroyed LODS!");
			}
			
			if (FuncName == "ServerLoadingScreenDropped" && bLSDropped == false) {
				bLSDropped = true;
				Player::GrantDefaultAbilities();
				LOG("Granted Abilities!");
				UTexture2D* MiniMap_Texture = UObject::FindObject<UTexture2D>("Texture2D MiniMapAthena.MiniMapAthena");
				AAthena_GameState_C* GameState = (AAthena_GameState_C*)GEngine->GameViewport->World->GameState;
				GameState->MinimapBackgroundBrush.ResourceObject = MiniMap_Texture;
				GameState->MinimapSafeZoneBrush = GameState->MinimapCircleBrush = GameState->MinimapNextCircleBrush = GameState->FullMapCircleBrush = GameState->FullMapNextCircleBrush = GameState->MinimapSafeZoneBrush = {};
				LOG("Minimap Set!");
			}

			//Inventory Things
			if (FuncName == "ServerExecuteInventoryItem") {
				FGuid ItemGuid = reinterpret_cast<Params::AFortPlayerController_ServerExecuteInventoryItem_Params*>(Params)->ItemGuid;
				Inventory::EquipInventoryItem(ItemGuid);
			}

			if (FuncName == "ServerAttemptInventoryDrop") {
				FGuid ItemGuid = reinterpret_cast<Params::AFortPlayerController_ServerAttemptInventoryDrop_Params*>(Params)->ItemGuid;
				Inventory::DropItem(ItemGuid);
				Inventory::EquipInventoryItem(GPlayerController->QuickBars->PrimaryQuickBar.Slots[0].Items[0]);
			}

			if (FuncName == "ServerHandlePickup") {
				UFortItemDefinition* ItemDef = reinterpret_cast<Params::AFortPlayerPawn_ServerHandlePickup_Params*>(Params)->Pickup->PrimaryPickupItemEntry.ItemDefinition;
				Inventory::HandleNewItem(ItemDef);
				reinterpret_cast<Params::AFortPlayerPawn_ServerHandlePickup_Params*>(Params)->Pickup->K2_DestroyActor();
			}

			if (FuncName == "CheatScript" && bLSDropped == true) {
				FString Cmd = reinterpret_cast<Params::UCheatManager_CheatScript_Params*>(Params)->ScriptName;
				std::string CmdStr = Cmd.ToString();
				std::string Args = "";
				if (CmdStr.find(" ") != std::string::npos) {
					Args = CmdStr.substr(CmdStr.find(" ") + 1);
				}

				CmdStr = CmdStr.substr(0, CmdStr.find(" "));

				if (CmdStr == "equip") {
					if (Args != "") {
						MessageBoxA(0, Args.c_str(), "Args", MB_OK);
						UFortItemDefinition* ItemDef = UObject::FindObject<UFortItemDefinition>(Args.c_str());
						if (ItemDef) {
							Inventory::HandleNewItem(ItemDef);
						}
					}
				}
			}
		}
		ProcessEventO(Obj, Func, Params);
	}

	void Init() {
		uintptr_t ProcessEventAddr = (uintptr_t(GetModuleHandle(0)) + Offsets::ProcessEvent);
		//auto ProcessEventAddr = UObject::GObjects->GetByIndex(1)->Vft[0x40];
		ProcessEventO = decltype(ProcessEventO)(ProcessEventAddr);
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourAttach(&(PVOID&)ProcessEventO, ProcessEventHook);
		DetourTransactionCommit();
		LOG("Hooks Enabled!");
	}
}