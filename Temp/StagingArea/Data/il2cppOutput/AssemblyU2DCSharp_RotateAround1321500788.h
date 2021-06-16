#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.Transform
struct Transform_t3600365921;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RotateAround
struct  RotateAround_t1321500788  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform RotateAround::target
	Transform_t3600365921 * ___target_2;
	// System.Int32 RotateAround::speed
	int32_t ___speed_3;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(RotateAround_t1321500788, ___target_2)); }
	inline Transform_t3600365921 * get_target_2() const { return ___target_2; }
	inline Transform_t3600365921 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3600365921 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(RotateAround_t1321500788, ___speed_3)); }
	inline int32_t get_speed_3() const { return ___speed_3; }
	inline int32_t* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(int32_t value)
	{
		___speed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
