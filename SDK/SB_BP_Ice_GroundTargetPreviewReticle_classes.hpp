#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Ice_GroundTargetPreviewReticle_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Ice_GroundTargetPreviewReticle.BP_Ice_GroundTargetPreviewReticle_C
// 0x0010 (0x0328 - 0x0318)
class ABP_Ice_GroundTargetPreviewReticle_C : public AActor
{
public:
	class UStaticMeshComponent*                        Cylinder;                                                 // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ice_GroundTargetPreviewReticle.BP_Ice_GroundTargetPreviewReticle_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
