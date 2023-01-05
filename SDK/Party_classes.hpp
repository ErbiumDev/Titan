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

// 0x30 (0x58 - 0x28)
// Class Party.Chatroom
class UChatroom : public UObject
{
public:
	class FString                                CurrentChatRoomId;                                 // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxChatRoomRetries;                                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumChatRoomRetries;                                // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_116E[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Chatroom");
		return Clss;
	}

};

// 0x168 (0x190 - 0x28)
// Class Party.SocialManager
class USocialManager : public UObject
{
public:
	uint8                                        Pad_116F[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USocialToolkit*>                SocialToolkits;                                    // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1170[0x140];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialManager");
		return Clss;
	}

};

// 0x238 (0x260 - 0x28)
// Class Party.SocialParty
class USocialParty : public UObject
{
public:
	uint8                                        Pad_1171[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class APartyBeaconClient>        ReservationBeaconClientClass;                      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1172[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      OwningLocalUserId;                                 // 0x70(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      CurrentLeaderId;                                   // 0x98(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FUniqueNetIdRepl, class UPartyMember*> PartyMembersById;                                  // 0xC0(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1173[0x80];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class APartyBeaconClient*                    ReservationBeaconClient;                           // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1174[0xC8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialParty");
		return Clss;
	}

};

// 0xB0 (0xD8 - 0x28)
// Class Party.PartyMember
class UPartyMember : public UObject
{
public:
	uint8                                        Pad_1175[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialUser*                           SocialUser;                                        // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1176[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyMember");
		return Clss;
	}

};

// 0x1A0 (0x1C8 - 0x28)
// Class Party.SocialToolkit
class USocialToolkit : public UObject
{
public:
	uint8                                        Pad_1177[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialUser*                           LocalUser;                                         // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USocialUser*>                   AllUsers;                                          // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1178[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class ULocalPlayer*                          LocalPlayerOwner;                                  // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USocialChatManager*                    SocialChatManager;                                 // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1179[0xF0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialToolkit");
		return Clss;
	}

};

// 0x150 (0x178 - 0x28)
// Class Party.SocialChatManager
class USocialChatManager : public UObject
{
public:
	TMap<TWeakObjectPtr<class USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser;                        // 0x28(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FString, class USocialChatRoom*>  ChatRoomsById;                                     // 0x78(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FString, class USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName;                     // 0xC8(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_117A[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatManager");
		return Clss;
	}

};

// 0xC0 (0xE8 - 0x28)
// Class Party.SocialChatChannel
class USocialChatChannel : public UObject
{
public:
	uint8                                        Pad_117B[0xC0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatChannel");
		return Clss;
	}

};

// 0x10 (0xF8 - 0xE8)
// Class Party.SocialChatRoom
class USocialChatRoom : public USocialChatChannel
{
public:
	uint8                                        Pad_117C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatRoom");
		return Clss;
	}

};

// 0x0 (0xF8 - 0xF8)
// Class Party.SocialPartyChatRoom
class USocialPartyChatRoom : public USocialChatRoom
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialPartyChatRoom");
		return Clss;
	}

};

// 0x8 (0xF0 - 0xE8)
// Class Party.SocialPrivateMessageChannel
class USocialPrivateMessageChannel : public USocialChatChannel
{
public:
	class USocialUser*                           TargetUser;                                        // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialPrivateMessageChannel");
		return Clss;
	}

};

// 0x0 (0xE8 - 0xE8)
// Class Party.SocialReadOnlyChatChannel
class USocialReadOnlyChatChannel : public USocialChatChannel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialReadOnlyChatChannel");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class Party.SocialSettings
class USocialSettings : public UObject
{
public:
	TArray<class FName>                          OssNamesWithEnvironmentIdPrefix;                   // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	int32                                        DefaultMaxPartySize;                               // 0x38(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPreferPlatformInvites;                            // 0x3C(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_117D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialSettings");
		return Clss;
	}

};

// 0x110 (0x138 - 0x28)
// Class Party.SocialUser
class USocialUser : public UObject
{
public:
	uint8                                        Pad_117E[0x110];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialUser");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
