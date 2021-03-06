#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3549286319.h"
#include "UnityEngine_Analytics_U3CModuleU3E692745525.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Analyti731021378.h"
#include "mscorlib_System_Void1185182177.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g2865362463.h"
#include "mscorlib_System_Int322950945753.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Tracka3943537984.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Analyt4199345191.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "mscorlib_System_String1847450689.h"
#include "UnityEngine_UnityEngine_Analytics_AnalyticsResult2273004240.h"
#include "UnityEngine_UnityEngine_Object631007953.h"
#include "mscorlib_System_Object3080106164.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Tracka3058750293.h"
#include "mscorlib_System_Collections_Generic_List_1_gen235857739.h"
#include "mscorlib_System_Boolean97287965.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera2125101616.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera2146457487.h"
#include "mscorlib_System_Reflection_PropertyInfo687341951.h"
#include "mscorlib_System_Reflection_FieldInfo4181702585.h"
#include "mscorlib_System_Char3634460470.h"
#include "mscorlib_System_Type2483944760.h"

// UnityEngine.Analytics.AnalyticsTracker
struct AnalyticsTracker_t731021378;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// UnityEngine.Analytics.TrackableProperty
struct TrackableProperty_t3943537984;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1329213854;
// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>
struct List_1_t235857739;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// UnityEngine.Analytics.TrackableProperty/FieldWithTarget
struct FieldWithTarget_t3058750293;
// System.Object
struct Il2CppObject;
// UnityEngine.Object
struct Object_t631007953;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Type
struct Type_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
extern Il2CppClass* Dictionary_2_t2865362463_il2cpp_TypeInfo_var;
extern Il2CppClass* TrackableProperty_t3943537984_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m613166151_MethodInfo_var;
extern const uint32_t AnalyticsTracker__ctor_m3762295226_MetadataUsageId;
extern Il2CppClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_Clear_m3181358953_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m3935023107_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m1027239081_MethodInfo_var;
extern const MethodInfo* Dictionary_2_set_Item_m1535556385_MethodInfo_var;
extern const uint32_t AnalyticsTracker_BuildParameters_m43920649_MetadataUsageId;
extern const MethodInfo* List_1_GetEnumerator_m466435735_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3689659642_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m1993744362_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m536244888_MethodInfo_var;
extern const uint32_t TrackableProperty_GetHashCode_m3407865350_MetadataUsageId;
extern Il2CppClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern Il2CppClass* Il2CppObject_il2cpp_TypeInfo_var;
extern const uint32_t FieldWithTarget_GetValue_m2315870500_MetadataUsageId;

// System.String[]
struct StringU5BU5D_t1281789340  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Il2CppObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const MethodInfo* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m1938428402_gshared (Dictionary_2_t132545152 * __this, const MethodInfo* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const MethodInfo* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  Il2CppObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const MethodInfo* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, Il2CppObject * p0, Il2CppObject * p1, const MethodInfo* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const MethodInfo* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  Il2CppObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const MethodInfo* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const MethodInfo* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const MethodInfo* method);

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
#define Dictionary_2__ctor_m613166151(__this, method) ((  void (*) (Dictionary_2_t2865362463 *, const MethodInfo*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void UnityEngine.Analytics.TrackableProperty::.ctor()
extern "C"  void TrackableProperty__ctor_m29288901 (TrackableProperty_t3943537984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1339182015 (MonoBehaviour_t3962482529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsTracker::TriggerEvent()
extern "C"  void AnalyticsTracker_TriggerEvent_m2244736785 (AnalyticsTracker_t731021378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsTracker::BuildParameters()
extern "C"  void AnalyticsTracker_BuildParameters_m43920649 (AnalyticsTracker_t731021378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsTracker::SendEvent()
extern "C"  void AnalyticsTracker_SendEvent_m2955089255 (AnalyticsTracker_t731021378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::CustomEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t Analytics_CustomEvent_m2189063691 (Il2CppObject * __this /* static, unused */, String_t* p0, Il2CppObject* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
#define Dictionary_2_Clear_m3181358953(__this, method) ((  void (*) (Dictionary_2_t2865362463 *, const MethodInfo*))Dictionary_2_Clear_m1938428402_gshared)(__this, method)
// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget> UnityEngine.Analytics.TrackableProperty::get_fields()
extern "C"  List_1_t235857739 * TrackableProperty_get_fields_m3682628132 (TrackableProperty_t3943537984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::get_Count()
#define List_1_get_Count_m3935023107(__this, method) ((  int32_t (*) (List_1_t235857739 *, const MethodInfo*))List_1_get_Count_m2934127733_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::get_Item(System.Int32)
#define List_1_get_Item_m1027239081(__this, p0, method) ((  FieldWithTarget_t3058750293 * (*) (List_1_t235857739 *, int32_t, const MethodInfo*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// UnityEngine.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_target()
extern "C"  Object_t631007953 * FieldWithTarget_get_target_m2252597932 (FieldWithTarget_t3058750293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m1920811489 (Il2CppObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_doStatic()
extern "C"  bool FieldWithTarget_get_doStatic_m1956244749 (FieldWithTarget_t3058750293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::GetValue()
extern "C"  Il2CppObject * FieldWithTarget_GetValue_m2315870500 (FieldWithTarget_t3058750293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_paramName()
extern "C"  String_t* FieldWithTarget_get_paramName_m3501478659 (FieldWithTarget_t3058750293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m1535556385(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2865362463 *, String_t*, Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::GetEnumerator()
#define List_1_GetEnumerator_m466435735(__this, method) ((  Enumerator_t2125101616  (*) (List_1_t235857739 *, const MethodInfo*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::get_Current()
#define Enumerator_get_Current_m3689659642(__this, method) ((  FieldWithTarget_t3058750293 * (*) (Enumerator_t2125101616 *, const MethodInfo*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::MoveNext()
#define Enumerator_MoveNext_m1993744362(__this, method) ((  bool (*) (Enumerator_t2125101616 *, const MethodInfo*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::Dispose()
#define Enumerator_Dispose_m536244888(__this, method) ((  void (*) (Enumerator_t2125101616 *, const MethodInfo*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.String[] System.String::Split(System.Char[])
extern "C"  StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
extern "C"  PropertyInfo_t * Type_GetProperty_m3414567179 (Type_t * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Type::GetField(System.String)
extern "C"  FieldInfo_t * Type_GetField_m2961003358 (Type_t * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Analytics.AnalyticsTracker::.ctor()
extern "C"  void AnalyticsTracker__ctor_m3762295226 (AnalyticsTracker_t731021378 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsTracker__ctor_m3762295226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = (Dictionary_2_t2865362463 *)il2cpp_codegen_object_new(Dictionary_2_t2865362463_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m613166151(L_0, /*hidden argument*/Dictionary_2__ctor_m613166151_MethodInfo_var);
		__this->set_m_Dict_3(L_0);
		__this->set_m_PrevDictHash_4(0);
		TrackableProperty_t3943537984 * L_1 = (TrackableProperty_t3943537984 *)il2cpp_codegen_object_new(TrackableProperty_t3943537984_il2cpp_TypeInfo_var);
		TrackableProperty__ctor_m29288901(L_1, /*hidden argument*/NULL);
		__this->set_m_TrackableProperty_5(L_1);
		__this->set_m_Trigger_6(0);
		MonoBehaviour__ctor_m1339182015(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Analytics.AnalyticsTracker::get_eventName()
extern "C"  String_t* AnalyticsTracker_get_eventName_m2051345506 (AnalyticsTracker_t731021378 * __this, const MethodInfo* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_EventName_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::set_eventName(System.String)
extern "C"  void AnalyticsTracker_set_eventName_m370326070 (AnalyticsTracker_t731021378 * __this, String_t* ___value0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_EventName_2(L_0);
		return;
	}
}
// UnityEngine.Analytics.TrackableProperty UnityEngine.Analytics.AnalyticsTracker::get_TP()
extern "C"  TrackableProperty_t3943537984 * AnalyticsTracker_get_TP_m2800669040 (AnalyticsTracker_t731021378 * __this, const MethodInfo* method)
{
	TrackableProperty_t3943537984 * V_0 = NULL;
	{
		TrackableProperty_t3943537984 * L_0 = __this->get_m_TrackableProperty_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		TrackableProperty_t3943537984 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::set_TP(UnityEngine.Analytics.TrackableProperty)
extern "C"  void AnalyticsTracker_set_TP_m4206182699 (AnalyticsTracker_t731021378 * __this, TrackableProperty_t3943537984 * ___value0, const MethodInfo* method)
{
	{
		TrackableProperty_t3943537984 * L_0 = ___value0;
		__this->set_m_TrackableProperty_5(L_0);
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::Awake()
extern "C"  void AnalyticsTracker_Awake_m2774678677 (AnalyticsTracker_t731021378 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m2244736785(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::Start()
extern "C"  void AnalyticsTracker_Start_m3944341596 (AnalyticsTracker_t731021378 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0015;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m2244736785(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnEnable()
extern "C"  void AnalyticsTracker_OnEnable_m175592117 (AnalyticsTracker_t731021378 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0015;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m2244736785(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnDisable()
extern "C"  void AnalyticsTracker_OnDisable_m2584849643 (AnalyticsTracker_t731021378 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0015;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m2244736785(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnApplicationPause()
extern "C"  void AnalyticsTracker_OnApplicationPause_m2421888091 (AnalyticsTracker_t731021378 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_0015;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m2244736785(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnDestroy()
extern "C"  void AnalyticsTracker_OnDestroy_m3072032071 (AnalyticsTracker_t731021378 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)6))))
		{
			goto IL_0015;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m2244736785(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::TriggerEvent()
extern "C"  void AnalyticsTracker_TriggerEvent_m2244736785 (AnalyticsTracker_t731021378 * __this, const MethodInfo* method)
{
	{
		AnalyticsTracker_BuildParameters_m43920649(__this, /*hidden argument*/NULL);
		AnalyticsTracker_SendEvent_m2955089255(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::SendEvent()
extern "C"  void AnalyticsTracker_SendEvent_m2955089255 (AnalyticsTracker_t731021378 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get_m_EventName_2();
		Dictionary_2_t2865362463 * L_1 = __this->get_m_Dict_3();
		Analytics_CustomEvent_m2189063691(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::BuildParameters()
extern "C"  void AnalyticsTracker_BuildParameters_m43920649 (AnalyticsTracker_t731021378 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsTracker_BuildParameters_m43920649_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	FieldWithTarget_t3058750293 * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		TrackableProperty_t3943537984 * L_0 = __this->get_m_TrackableProperty_5();
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_m_PrevDictHash_4();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		Dictionary_2_t2865362463 * L_4 = __this->get_m_Dict_3();
		Dictionary_2_Clear_m3181358953(L_4, /*hidden argument*/Dictionary_2_Clear_m3181358953_MethodInfo_var);
	}

IL_0024:
	{
		int32_t L_5 = V_0;
		__this->set_m_PrevDictHash_4(L_5);
		V_1 = 0;
		TrackableProperty_t3943537984 * L_6 = __this->get_m_TrackableProperty_5();
		List_1_t235857739 * L_7 = TrackableProperty_get_fields_m3682628132(L_6, /*hidden argument*/NULL);
		int32_t L_8 = List_1_get_Count_m3935023107(L_7, /*hidden argument*/List_1_get_Count_m3935023107_MethodInfo_var);
		V_2 = L_8;
		goto IL_0099;
	}

IL_0043:
	{
		TrackableProperty_t3943537984 * L_9 = __this->get_m_TrackableProperty_5();
		List_1_t235857739 * L_10 = TrackableProperty_get_fields_m3682628132(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		FieldWithTarget_t3058750293 * L_12 = List_1_get_Item_m1027239081(L_10, L_11, /*hidden argument*/List_1_get_Item_m1027239081_MethodInfo_var);
		V_3 = L_12;
		FieldWithTarget_t3058750293 * L_13 = V_3;
		Object_t631007953 * L_14 = FieldWithTarget_get_target_m2252597932(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Inequality_m1920811489(NULL /*static, unused*/, L_14, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0072;
		}
	}
	{
		FieldWithTarget_t3058750293 * L_16 = V_3;
		bool L_17 = FieldWithTarget_get_doStatic_m1956244749(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0094;
		}
	}

IL_0072:
	{
		FieldWithTarget_t3058750293 * L_18 = V_3;
		Il2CppObject * L_19 = FieldWithTarget_GetValue_m2315870500(L_18, /*hidden argument*/NULL);
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		V_4 = L_20;
		Dictionary_2_t2865362463 * L_21 = __this->get_m_Dict_3();
		FieldWithTarget_t3058750293 * L_22 = V_3;
		String_t* L_23 = FieldWithTarget_get_paramName_m3501478659(L_22, /*hidden argument*/NULL);
		String_t* L_24 = V_4;
		Dictionary_2_set_Item_m1535556385(L_21, L_23, L_24, /*hidden argument*/Dictionary_2_set_Item_m1535556385_MethodInfo_var);
	}

IL_0094:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0043;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty::.ctor()
extern "C"  void TrackableProperty__ctor_m29288901 (TrackableProperty_t3943537984 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget> UnityEngine.Analytics.TrackableProperty::get_fields()
extern "C"  List_1_t235857739 * TrackableProperty_get_fields_m3682628132 (TrackableProperty_t3943537984 * __this, const MethodInfo* method)
{
	List_1_t235857739 * V_0 = NULL;
	{
		List_1_t235857739 * L_0 = __this->get_m_Fields_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		List_1_t235857739 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty::set_fields(System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>)
extern "C"  void TrackableProperty_set_fields_m1461281003 (TrackableProperty_t3943537984 * __this, List_1_t235857739 * ___value0, const MethodInfo* method)
{
	{
		List_1_t235857739 * L_0 = ___value0;
		__this->set_m_Fields_1(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Analytics.TrackableProperty::GetHashCode()
extern "C"  int32_t TrackableProperty_GetHashCode_m3407865350 (TrackableProperty_t3943537984 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableProperty_GetHashCode_m3407865350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldWithTarget_t3058750293 * V_1 = NULL;
	Enumerator_t2125101616  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t1436737249 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1436737249 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = ((int32_t)17);
		List_1_t235857739 * L_0 = __this->get_m_Fields_1();
		Enumerator_t2125101616  L_1 = List_1_GetEnumerator_m466435735(L_0, /*hidden argument*/List_1_GetEnumerator_m466435735_MethodInfo_var);
		V_2 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_0017:
		{
			FieldWithTarget_t3058750293 * L_2 = Enumerator_get_Current_m3689659642((&V_2), /*hidden argument*/Enumerator_get_Current_m3689659642_MethodInfo_var);
			V_1 = L_2;
			int32_t L_3 = V_0;
			FieldWithTarget_t3058750293 * L_4 = V_1;
			String_t* L_5 = FieldWithTarget_get_paramName_m3501478659(L_4, /*hidden argument*/NULL);
			int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
			V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)23)))+(int32_t)L_6));
		}

IL_0030:
		{
			bool L_7 = Enumerator_MoveNext_m1993744362((&V_2), /*hidden argument*/Enumerator_MoveNext_m1993744362_MethodInfo_var);
			if (L_7)
			{
				goto IL_0017;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1436737249 *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m536244888((&V_2), /*hidden argument*/Enumerator_Dispose_m536244888_MethodInfo_var);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1436737249 *)
	}

IL_004f:
	{
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0056;
	}

IL_0056:
	{
		int32_t L_9 = V_3;
		return L_9;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::.ctor()
extern "C"  void FieldWithTarget__ctor_m583221563 (FieldWithTarget_t3058750293 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_paramName()
extern "C"  String_t* FieldWithTarget_get_paramName_m3501478659 (FieldWithTarget_t3058750293 * __this, const MethodInfo* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ParamName_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_paramName(System.String)
extern "C"  void FieldWithTarget_set_paramName_m2405671065 (FieldWithTarget_t3058750293 * __this, String_t* ___value0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_ParamName_0(L_0);
		return;
	}
}
// UnityEngine.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_target()
extern "C"  Object_t631007953 * FieldWithTarget_get_target_m2252597932 (FieldWithTarget_t3058750293 * __this, const MethodInfo* method)
{
	Object_t631007953 * V_0 = NULL;
	{
		Object_t631007953 * L_0 = __this->get_m_Target_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Object_t631007953 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_target(UnityEngine.Object)
extern "C"  void FieldWithTarget_set_target_m875118251 (FieldWithTarget_t3058750293 * __this, Object_t631007953 * ___value0, const MethodInfo* method)
{
	{
		Object_t631007953 * L_0 = ___value0;
		__this->set_m_Target_1(L_0);
		return;
	}
}
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_fieldPath()
extern "C"  String_t* FieldWithTarget_get_fieldPath_m341366840 (FieldWithTarget_t3058750293 * __this, const MethodInfo* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_FieldPath_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_fieldPath(System.String)
extern "C"  void FieldWithTarget_set_fieldPath_m2073198625 (FieldWithTarget_t3058750293 * __this, String_t* ___value0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_FieldPath_2(L_0);
		return;
	}
}
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_typeString()
extern "C"  String_t* FieldWithTarget_get_typeString_m238478345 (FieldWithTarget_t3058750293 * __this, const MethodInfo* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_TypeString_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_typeString(System.String)
extern "C"  void FieldWithTarget_set_typeString_m937652251 (FieldWithTarget_t3058750293 * __this, String_t* ___value0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_TypeString_3(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_doStatic()
extern "C"  bool FieldWithTarget_get_doStatic_m1956244749 (FieldWithTarget_t3058750293 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_DoStatic_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_doStatic(System.Boolean)
extern "C"  void FieldWithTarget_set_doStatic_m3781634168 (FieldWithTarget_t3058750293 * __this, bool ___value0, const MethodInfo* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_DoStatic_4(L_0);
		return;
	}
}
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_staticString()
extern "C"  String_t* FieldWithTarget_get_staticString_m2597372683 (FieldWithTarget_t3058750293 * __this, const MethodInfo* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_StaticString_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_staticString(System.String)
extern "C"  void FieldWithTarget_set_staticString_m3203090702 (FieldWithTarget_t3058750293 * __this, String_t* ___value0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_StaticString_5(L_0);
		return;
	}
}
// System.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::GetValue()
extern "C"  Il2CppObject * FieldWithTarget_GetValue_m2315870500 (FieldWithTarget_t3058750293 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FieldWithTarget_GetValue_m2315870500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppObject * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	String_t* V_2 = NULL;
	StringU5BU5D_t1281789340* V_3 = NULL;
	int32_t V_4 = 0;
	PropertyInfo_t * V_5 = NULL;
	FieldInfo_t * V_6 = NULL;
	Exception_t1436737249 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1436737249 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get_m_DoStatic_4();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = __this->get_m_StaticString_5();
		V_0 = L_1;
		goto IL_009c;
	}

IL_0019:
	{
		Object_t631007953 * L_2 = __this->get_m_Target_1();
		V_1 = L_2;
		String_t* L_3 = __this->get_m_FieldPath_2();
		CharU5BU5D_t3528271667* L_4 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		StringU5BU5D_t1281789340* L_5 = String_Split_m3646115398(L_3, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		V_4 = 0;
		goto IL_008b;
	}

IL_0040:
	{
		StringU5BU5D_t1281789340* L_6 = V_3;
		int32_t L_7 = V_4;
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
	}

IL_0046:
	try
	{ // begin try (depth: 1)
		Il2CppObject * L_10 = V_1;
		Type_t * L_11 = Object_GetType_m88164663(L_10, /*hidden argument*/NULL);
		String_t* L_12 = V_2;
		PropertyInfo_t * L_13 = Type_GetProperty_m3414567179(L_11, L_12, /*hidden argument*/NULL);
		V_5 = L_13;
		PropertyInfo_t * L_14 = V_5;
		Il2CppObject * L_15 = V_1;
		Il2CppObject * L_16 = VirtFuncInvoker2< Il2CppObject *, Il2CppObject *, ObjectU5BU5D_t2843939325* >::Invoke(22 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_14, L_15, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		V_1 = L_16;
		goto IL_0084;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1436737249 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Il2CppObject_il2cpp_TypeInfo_var, e.ex->klass))
			goto CATCH_0065;
		throw e;
	}

CATCH_0065:
	{ // begin catch(System.Object)
		Il2CppObject * L_17 = V_1;
		Type_t * L_18 = Object_GetType_m88164663(L_17, /*hidden argument*/NULL);
		String_t* L_19 = V_2;
		FieldInfo_t * L_20 = Type_GetField_m2961003358(L_18, L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		FieldInfo_t * L_21 = V_6;
		Il2CppObject * L_22 = V_1;
		Il2CppObject * L_23 = VirtFuncInvoker1< Il2CppObject *, Il2CppObject * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_21, L_22);
		V_1 = L_23;
		goto IL_0084;
	} // end catch (depth: 1)

IL_0084:
	{
		int32_t L_24 = V_4;
		V_4 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_008b:
	{
		int32_t L_25 = V_4;
		StringU5BU5D_t1281789340* L_26 = V_3;
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_26)->max_length)))))))
		{
			goto IL_0040;
		}
	}
	{
		Il2CppObject * L_27 = V_1;
		V_0 = L_27;
		goto IL_009c;
	}

IL_009c:
	{
		Il2CppObject * L_28 = V_0;
		return L_28;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
