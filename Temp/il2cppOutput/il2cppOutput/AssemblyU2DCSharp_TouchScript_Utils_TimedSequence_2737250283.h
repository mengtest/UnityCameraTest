﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<TouchScript.TouchPoint>
struct List_1_t328750215;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1445631064;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Utils.TimedSequence`1<TouchScript.TouchPoint>
struct  TimedSequence_1_t2737250283  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<T> TouchScript.Utils.TimedSequence`1::points
	List_1_t328750215 * ___points_0;
	// System.Collections.Generic.List`1<System.Single> TouchScript.Utils.TimedSequence`1::timestamps
	List_1_t1445631064 * ___timestamps_1;

public:
	inline static int32_t get_offset_of_points_0() { return static_cast<int32_t>(offsetof(TimedSequence_1_t2737250283, ___points_0)); }
	inline List_1_t328750215 * get_points_0() const { return ___points_0; }
	inline List_1_t328750215 ** get_address_of_points_0() { return &___points_0; }
	inline void set_points_0(List_1_t328750215 * value)
	{
		___points_0 = value;
		Il2CppCodeGenWriteBarrier(&___points_0, value);
	}

	inline static int32_t get_offset_of_timestamps_1() { return static_cast<int32_t>(offsetof(TimedSequence_1_t2737250283, ___timestamps_1)); }
	inline List_1_t1445631064 * get_timestamps_1() const { return ___timestamps_1; }
	inline List_1_t1445631064 ** get_address_of_timestamps_1() { return &___timestamps_1; }
	inline void set_timestamps_1(List_1_t1445631064 * value)
	{
		___timestamps_1 = value;
		Il2CppCodeGenWriteBarrier(&___timestamps_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
