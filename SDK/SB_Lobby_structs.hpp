#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Basic.hpp"
#include "SB_OnlineSubsystemUtils_classes.hpp"
#include "SB_Engine_classes.hpp"
#include "SB_CoreUObject_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Lobby.ELobbyBeaconJoinState
enum class ELobbyBeaconJoinState : uint8_t
{
	ELobbyBeaconJoinState__None    = 0,
	ELobbyBeaconJoinState__SentJoinRequest = 1,
	ELobbyBeaconJoinState__JoinRequestAcknowledged = 2,
	ELobbyBeaconJoinState__ELobbyBeaconJoinState_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Lobby.LobbyPlayerStateActorInfo
// 0x000C (0x0018 - 0x000C)
struct FLobbyPlayerStateActorInfo : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class ALobbyBeaconPlayerState*                     LobbyPlayerState;                                         // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Lobby.LobbyPlayerStateInfoArray
// 0x0018 (0x00C8 - 0x00B0)
struct FLobbyPlayerStateInfoArray : public FFastArraySerializer
{
	TArray<struct FLobbyPlayerStateActorInfo>          Players;                                                  // 0x00B0(0x0010) (ZeroConstructor)
	class ALobbyBeaconState*                           ParentState;                                              // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
