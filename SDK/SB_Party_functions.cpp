// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Party_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Party.PartyMemberState.IsPartyLeader
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPartyMemberState::IsPartyLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function Party.PartyMemberState.IsPartyLeader");

	UPartyMemberState_IsPartyLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Party.PartyMemberState.IsLocalPlayer
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPartyMemberState::IsLocalPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Party.PartyMemberState.IsLocalPlayer");

	UPartyMemberState_IsLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
