#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_EasyAntiCheatCommon_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage
struct UEasyAntiCheatNetComponent_ServerMessage_Params
{
	TArray<unsigned char>                              Message;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage
struct UEasyAntiCheatNetComponent_ClientMessage_Params
{
	TArray<unsigned char>                              Message;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
