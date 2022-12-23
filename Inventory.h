#pragma once
#include "Includes.h"
namespace Inventory {
	void Update() {
		GPlayerController->WorldInventory->HandleInventoryLocalUpdate();
		GPlayerController->HandleWorldInventoryLocalUpdate();
		GPlayerController->OnRep_QuickBar();
		GPlayerController->QuickBars->OnRep_PrimaryQuickBar();
		GPlayerController->QuickBars->OnRep_SecondaryQuickBar();
	}

	int GetOpenSlot() {
		for (int i = 0; i < 6; i++) {
			if (GPlayerController->QuickBars->PrimaryQuickBar.Slots[i].Items.Data == nullptr) {
				return i;
			}
		}
		return -1;
	}

	int GetItemSlot(FGuid ItemGuid) {
		for (int i = 0; i < 6; i++) {
			if (GPlayerController->QuickBars->PrimaryQuickBar.Slots[i].Items.Data != nullptr && GPlayerController->QuickBars->PrimaryQuickBar.Slots[i].Items[0] == ItemGuid) {
				return i;
			}
		}
		return -1;
	}

	void EquipItem(UFortWorldItem* Weapon) {
		AFortWeapon* WeaponData = GPawn->EquipWeaponDefinition((UFortWeaponItemDefinition*)Weapon->GetItemDefinitionBP(), Weapon->GetItemGuid());
		WeaponData->OnRep_ReplicatedWeaponData();
		WeaponData->ClientGivenTo(GPawn);
		GPawn->ClientInternalEquipWeapon(WeaponData);
	}

	void SpawnPickup(UFortWorldItem* Item) {
		FTransform SpawnTransform = BaseTransform;
		SpawnTransform.Translation = GPawn->K2_GetActorLocation();
		AFortPickupAthena* Pickup = reinterpret_cast<AFortPickupAthena*>(GGameplayStatics->FinishSpawningActor(GGameplayStatics->BeginDeferredActorSpawnFromClass(GEngine->GameViewport->World, AFortPickupAthena::StaticClass(), SpawnTransform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, GPlayerController), SpawnTransform));
		Pickup->PrimaryPickupItemEntry = Item->ItemEntry;
		Pickup->OnRep_PrimaryPickupItemEntry();
		Pickup->TossPickup(GPawn->K2_GetActorLocation(), GPawn, Pickup->PrimaryPickupItemEntry.Count, true);
	}

	void DropItem(FGuid ItemGuid) {
		//Get the Slot the items in
		int ItemSlot = GetItemSlot(ItemGuid);
		//Remove the Item (and Spawn the Pickup)
		for (int i = 0; i < GPlayerController->WorldInventory->Inventory.ItemInstances.Num(); i++) {
			if (GPlayerController->WorldInventory->Inventory.ItemInstances[i]->ItemEntry.ItemGuid == ItemGuid) {
				SpawnPickup(GPlayerController->WorldInventory->Inventory.ItemInstances[i]);
				GPlayerController->WorldInventory->Inventory.ItemInstances.RemoveAt(i);
				break;
			}
		}
		for (int i = 0; i < GPlayerController->WorldInventory->Inventory.ReplicatedEntries.Num(); i++) {
			if (GPlayerController->WorldInventory->Inventory.ReplicatedEntries[i].ItemGuid == ItemGuid) {
				GPlayerController->WorldInventory->Inventory.ReplicatedEntries.RemoveAt(i);
				break;
			}
		}
		GPlayerController->QuickBars->ServerRemoveItemInternal(ItemGuid, false, true);
		GPlayerController->QuickBars->EmptySlot(EFortQuickBars::Primary, ItemSlot);
		//Free The Slot Data
		GPlayerController->QuickBars->PrimaryQuickBar.Slots[ItemSlot].Items.Data = nullptr;
		GPlayerController->QuickBars->PrimaryQuickBar.Slots[ItemSlot].Items.ResetNum();
		Update();
	}

	UFortWorldItem* AddItemToInventory(UFortItemDefinition* ItemDef, int Slot, int Count = 1, EFortQuickBars QBs = EFortQuickBars::Primary) {
		UFortWorldItem* Weapon = (UFortWorldItem*)ItemDef->CreateTemporaryItemInstanceBP(Count, 1);
		GPlayerController->WorldInventory->Inventory.ReplicatedEntries.Add(Weapon->ItemEntry);
		GPlayerController->WorldInventory->Inventory.ItemInstances.Add(Weapon);
		GPlayerController->QuickBars->ServerAddItemInternal(Weapon->GetItemGuid(), QBs, Slot);
		Update();
		return Weapon;
	}

	void HandleNewItem(UFortItemDefinition* ItemDef, int Count = 1) {
		int Slot = GetOpenSlot();
		if (Slot != -1) {
			AddItemToInventory(ItemDef, Slot, Count);
		}
		else {
			//Swap Logic
			FGuid CurrentSlot = {};
			if (GPlayerController->QuickBars->PrimaryQuickBar.CurrentFocusedSlot != 0) {
				CurrentSlot = GPlayerController->QuickBars->PrimaryQuickBar.Slots[GPlayerController->QuickBars->PrimaryQuickBar.CurrentFocusedSlot].Items[0];
			}
			else {
				CurrentSlot = GPlayerController->QuickBars->PrimaryQuickBar.Slots[1].Items[0];
			}
			
			DropItem(CurrentSlot);
			AddItemToInventory(ItemDef, GPlayerController->QuickBars->PrimaryQuickBar.CurrentFocusedSlot, Count);
		}
	}

	void EquipInventoryItem(FGuid ItemGuid) {
		for (int i = 0; i < GPlayerController->WorldInventory->Inventory.ItemInstances.Num(); i++) {
			if (GPlayerController->WorldInventory->Inventory.ItemInstances[i]->GetItemGuid() == ItemGuid) {
				EquipItem(GPlayerController->WorldInventory->Inventory.ItemInstances[i]);
				break;
			}
		}
	}

	void SetupInventory() {
		GPlayerController->QuickBars = reinterpret_cast<AFortQuickBars*>(GGameplayStatics->FinishSpawningActor(GGameplayStatics->BeginDeferredActorSpawnFromClass(GEngine->GameViewport->World, AFortQuickBars::StaticClass(), BaseTransform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, GPlayerController), BaseTransform));

		auto WorldInventory = GPlayerController->WorldInventory;
		auto Inventory = WorldInventory->Inventory;
		
		auto Pickaxe = GPlayerController->CustomizationLoadout.Pickaxe;
		UFortWeaponMeleeItemDefinition* PickaxeWeaponDef = nullptr;
		
		if (!Pickaxe) {
			Pickaxe = UObject::FindObject<UAthenaPickaxeItemDefinition>("AthenaPickaxeItemDefinition DefaultPickaxe.DefaultPickaxe");
			PickaxeWeaponDef = UObject::FindObject<UFortWeaponMeleeItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
		}
		else {
			if (!Pickaxe->WeaponDefinition || Pickaxe->GetName() == "Pickaxe_Random") {
				PickaxeWeaponDef = UObject::FindObject<UFortWeaponMeleeItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
			}
			else {
				PickaxeWeaponDef = Pickaxe->WeaponDefinition;
			}
		}

		LOG(("Equipping Pickaxe: " + Pickaxe->DisplayName.ToString()));

		EquipItem(AddItemToInventory(PickaxeWeaponDef, 0));
	}
}