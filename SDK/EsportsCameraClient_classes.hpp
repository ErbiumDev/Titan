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

// 0x40 (0x370 - 0x330)
// Class EsportsCameraClient.EsportsCameraClient
class AEsportsCameraClient : public AActor
{
public:
	uint8                                        Pad_2CC6[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AWebCamReader*                         WebCamReader;                                      // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AWebCamViewer*                         WebCamViewer;                                      // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AM3U8MovieViewer*                      M3U8MovieViewer;                                   // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2CC7[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EsportsCameraClient");
		return Clss;
	}

	void SetDynamicMaterial(class UMaterialInstanceDynamic* MaterialInstanceDynamic);
	bool IsPlayingWebMovie();
	bool IsPlatformEnabled();
	bool HasDynamicMaterial();
};

// 0x0 (0x230 - 0x230)
// Class EsportsCameraClient.EsportsCameraStatusBase
class UEsportsCameraStatusBase : public UCommonUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EsportsCameraStatusBase");
		return Clss;
	}

	void FollowedPlayerChanged(class AEsportsCameraClient* InEsportsCameraClient);
};

// 0x48 (0x378 - 0x330)
// Class EsportsCameraClient.WebCamBase
class AWebCamBase : public AActor
{
public:
	uint8                                        Pad_2CC8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            DynamicTexture;                                    // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              MaterialInstanceDynamic;                           // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                DynamicColors;                                     // 0x348(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CC9[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebCamBase");
		return Clss;
	}

};

// 0x40 (0x3B8 - 0x378)
// Class EsportsCameraClient.M3U8MovieViewer
class AM3U8MovieViewer : public AWebCamBase
{
public:
	uint8                                        Pad_2CCA[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       AudioComponent;                                    // 0x3A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMySoundWave*                          MySoundWave;                                       // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CCB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M3U8MovieViewer");
		return Clss;
	}

};

// 0x10 (0x2A0 - 0x290)
// Class EsportsCameraClient.MySoundWave
class UMySoundWave : public USoundWaveProcedural
{
public:
	uint8                                        Pad_2CCC[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MySoundWave");
		return Clss;
	}

};

// 0x0 (0x378 - 0x378)
// Class EsportsCameraClient.WebCamReader
class AWebCamReader : public AWebCamBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebCamReader");
		return Clss;
	}

};

// 0x8 (0x380 - 0x378)
// Class EsportsCameraClient.WebCamViewer
class AWebCamViewer : public AWebCamBase
{
public:
	uint8                                        Pad_2CCD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebCamViewer");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
