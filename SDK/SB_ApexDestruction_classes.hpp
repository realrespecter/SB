#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_ApexDestruction_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ApexDestruction.DestructibleActor
// 0x0020 (0x0338 - 0x0318)
class ADestructibleActor : public AActor
{
public:
	class UDestructibleComponent*                      DestructibleComponent;                                    // 0x0318(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      bAffectNavigation : 1;                                    // 0x0320(0x0001) (Edit, BlueprintVisible, Config)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0321(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnActorFracture;                                          // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ApexDestruction.DestructibleActor");
		return ptr;
	}

};


// Class ApexDestruction.DestructibleComponent
// 0x00E0 (0x08E0 - 0x0800)
class UDestructibleComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      bFractureEffectOverride : 1;                              // 0x0800(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0801(0x0007) MISSED OFFSET
	TArray<struct FFractureEffect>                     FractureEffects;                                          // 0x0808(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor)
	bool                                               bEnableHardSleeping;                                      // 0x0818(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0819(0x0003) MISSED OFFSET
	float                                              LargeChunkThreshold;                                      // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0820(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnComponentFracture;                                      // 0x0830(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xA0];                                      // 0x0840(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ApexDestruction.DestructibleComponent");
		return ptr;
	}


	void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
	class UDestructibleMesh* GetDestructibleMesh();
	void ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	void ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength);
};


// Class ApexDestruction.DestructibleFractureSettings
// 0x0090 (0x00B8 - 0x0028)
class UDestructibleFractureSettings : public UObject
{
public:
	int                                                CellSiteCount;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFractureMaterial                           FractureMaterialDesc;                                     // 0x002C(0x0024) (Edit, Transient)
	int                                                RandomSeed;                                               // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FVector>                             VoronoiSites;                                             // 0x0058(0x0010) (ZeroConstructor)
	int                                                OriginalSubmeshCount;                                     // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FDestructibleChunkParameters>        ChunkParameters;                                          // 0x0080(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0090(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ApexDestruction.DestructibleFractureSettings");
		return ptr;
	}

};


// Class ApexDestruction.DestructibleMesh
// 0x00A0 (0x03A0 - 0x0300)
class UDestructibleMesh : public USkeletalMesh
{
public:
	struct FDestructibleParameters                     DefaultDestructibleParameters;                            // 0x0300(0x0088) (Edit)
	TArray<struct FFractureEffect>                     FractureEffects;                                          // 0x0388(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ApexDestruction.DestructibleMesh");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
