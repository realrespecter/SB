#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_ApexDestruction_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ApexDestruction.DestructibleComponent.SetDestructibleMesh
struct UDestructibleComponent_SetDestructibleMesh_Params
{
	class UDestructibleMesh*                           NewMesh;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ApexDestruction.DestructibleComponent.GetDestructibleMesh
struct UDestructibleComponent_GetDestructibleMesh_Params
{
	class UDestructibleMesh*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage
struct UDestructibleComponent_ApplyRadiusDamage_Params
{
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HurtOrigin;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DamageRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseStrength;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFullDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ApexDestruction.DestructibleComponent.ApplyDamage
struct UDestructibleComponent_ApplyDamage_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ImpulseStrength;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
