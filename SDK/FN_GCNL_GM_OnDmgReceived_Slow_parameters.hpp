#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GCNL_GM_OnDmgReceived_Slow.GCNL_GM_OnDmgReceived_Slow_C.OnWhileActiveParticleSystemActivate
struct AGCNL_GM_OnDmgReceived_Slow_C_OnWhileActiveParticleSystemActivate_Params
{
	class UParticleSystemComponent**                   WhileActiveParticleSysComponent;                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GCNL_GM_OnDmgReceived_Slow.GCNL_GM_OnDmgReceived_Slow_C.UserConstructionScript
struct AGCNL_GM_OnDmgReceived_Slow_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
