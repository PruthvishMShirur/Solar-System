#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.GameObject
struct GameObject_t1113636619;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LookAtTarget
struct  LookAtTarget_t1968561443  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct LookAtTarget_t1968561443_StaticFields
{
public:
	// UnityEngine.GameObject LookAtTarget::target
	GameObject_t1113636619 * ___target_2;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(LookAtTarget_t1968561443_StaticFields, ___target_2)); }
	inline GameObject_t1113636619 * get_target_2() const { return ___target_2; }
	inline GameObject_t1113636619 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_t1113636619 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
