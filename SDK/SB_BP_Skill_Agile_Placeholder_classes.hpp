#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Skill_Agile_Placeholder_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Skill_Agile_Placeholder.BP_Skill_Agile_Placeholder_C
// 0x0008 (0x0320 - 0x0318)
class ABP_Skill_Agile_Placeholder_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Skill_Agile_Placeholder.BP_Skill_Agile_Placeholder_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
