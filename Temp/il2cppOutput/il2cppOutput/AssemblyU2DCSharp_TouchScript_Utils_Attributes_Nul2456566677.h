﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_PropertyAttribute2606999759.h"

// UnityEngine.Object
struct Object_t1021602117;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Utils.Attributes.NullToggleAttribute
struct  NullToggleAttribute_t2456566677  : public PropertyAttribute_t2606999759
{
public:
	// System.Int32 TouchScript.Utils.Attributes.NullToggleAttribute::NullIntValue
	int32_t ___NullIntValue_0;
	// System.Single TouchScript.Utils.Attributes.NullToggleAttribute::NullFloatValue
	float ___NullFloatValue_1;
	// UnityEngine.Object TouchScript.Utils.Attributes.NullToggleAttribute::NullObjectValue
	Object_t1021602117 * ___NullObjectValue_2;

public:
	inline static int32_t get_offset_of_NullIntValue_0() { return static_cast<int32_t>(offsetof(NullToggleAttribute_t2456566677, ___NullIntValue_0)); }
	inline int32_t get_NullIntValue_0() const { return ___NullIntValue_0; }
	inline int32_t* get_address_of_NullIntValue_0() { return &___NullIntValue_0; }
	inline void set_NullIntValue_0(int32_t value)
	{
		___NullIntValue_0 = value;
	}

	inline static int32_t get_offset_of_NullFloatValue_1() { return static_cast<int32_t>(offsetof(NullToggleAttribute_t2456566677, ___NullFloatValue_1)); }
	inline float get_NullFloatValue_1() const { return ___NullFloatValue_1; }
	inline float* get_address_of_NullFloatValue_1() { return &___NullFloatValue_1; }
	inline void set_NullFloatValue_1(float value)
	{
		___NullFloatValue_1 = value;
	}

	inline static int32_t get_offset_of_NullObjectValue_2() { return static_cast<int32_t>(offsetof(NullToggleAttribute_t2456566677, ___NullObjectValue_2)); }
	inline Object_t1021602117 * get_NullObjectValue_2() const { return ___NullObjectValue_2; }
	inline Object_t1021602117 ** get_address_of_NullObjectValue_2() { return &___NullObjectValue_2; }
	inline void set_NullObjectValue_2(Object_t1021602117 * value)
	{
		___NullObjectValue_2 = value;
		Il2CppCodeGenWriteBarrier(&___NullObjectValue_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif