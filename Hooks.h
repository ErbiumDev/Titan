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