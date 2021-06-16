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
#include "AssemblyU2DCSharp_U3CModuleU3E692745525.h"
#include "AssemblyU2DCSharp_ChangeLookAtTarget2878842841.h"
#include "mscorlib_System_Void1185182177.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "UnityEngine_UnityEngine_Object631007953.h"
#include "mscorlib_System_Object3080106164.h"
#include "UnityEngine_UnityEngine_GameObject1113636619.h"
#include "mscorlib_System_Boolean97287965.h"
#include "UnityEngine_UnityEngine_Component1923634451.h"
#include "mscorlib_System_String1847450689.h"
#include "UnityEngine_UnityEngine_Vector33722313464.h"
#include "AssemblyU2DCSharp_LookAtTarget1968561443.h"
#include "UnityEngine_UnityEngine_Camera4157153871.h"
#include "UnityEngine_UnityEngine_Transform3600365921.h"
#include "mscorlib_System_Single1397266774.h"
#include "AssemblyU2DCSharp_RotateAround1321500788.h"
#include "mscorlib_System_Int322950945753.h"

// ChangeLookAtTarget
struct ChangeLookAtTarget_t2878842841;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.Object
struct Il2CppObject;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Transform
struct Transform_t3600365921;
// LookAtTarget
struct LookAtTarget_t1968561443;
// RotateAround
struct RotateAround_t1321500788;
extern Il2CppClass* Object_t631007953_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral941449485;
extern const uint32_t ChangeLookAtTarget_Start_m3179497627_MetadataUsageId;
extern Il2CppClass* LookAtTarget_t1968561443_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t ChangeLookAtTarget_OnMouseDown_m1551922072_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral2249127133;
extern const uint32_t LookAtTarget_Start_m3878085324_MetadataUsageId;
extern const uint32_t LookAtTarget_Update_m3580379366_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral743214968;
extern const uint32_t RotateAround_Start_m4136461483_MetadataUsageId;




// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1339182015 (MonoBehaviour_t3962482529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1454075600 (Il2CppObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m2648350745 (Component_t1923634451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m1780991845 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m882983993 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m393750976 (GameObject_t1113636619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C"  Vector3_t3722313464  Transform_get_localScale_m2509514663 (Transform_t3600365921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Clamp_m500974738 (Il2CppObject * __this /* static, unused */, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
extern "C"  void Camera_set_fieldOfView_m4094496100 (Camera_t4157153871 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m487959476 (Il2CppObject * __this /* static, unused */, Object_t631007953 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m2921103810 (Component_t1923634451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
extern "C"  void Transform_LookAt_m3477419764 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m102368104 (Transform_t3600365921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern "C"  Vector3_t3722313464  Transform_get_up_m4257750918 (Transform_t3600365921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m3562456068 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  void Transform_RotateAround_m3655132564 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChangeLookAtTarget::.ctor()
extern "C"  void ChangeLookAtTarget__ctor_m2918513255 (ChangeLookAtTarget_t2878842841 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1339182015(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChangeLookAtTarget::Start()
extern "C"  void ChangeLookAtTarget_Start_m3179497627 (ChangeLookAtTarget_t2878842841 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChangeLookAtTarget_Start_m3179497627_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1454075600(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m2648350745(__this, /*hidden argument*/NULL);
		__this->set_target_2(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m1780991845(NULL /*static, unused*/, _stringLiteral941449485, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void ChangeLookAtTarget::OnMouseDown()
extern "C"  void ChangeLookAtTarget_OnMouseDown_m1551922072 (ChangeLookAtTarget_t2878842841 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChangeLookAtTarget_OnMouseDown_m1551922072_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		GameObject_t1113636619 * L_0 = __this->get_target_2();
		((LookAtTarget_t1968561443_StaticFields*)LookAtTarget_t1968561443_il2cpp_TypeInfo_var->static_fields)->set_target_2(L_0);
		Camera_t4157153871 * L_1 = Camera_get_main_m882983993(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_target_2();
		Transform_t3600365921 * L_3 = GameObject_get_transform_m393750976(L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Transform_get_localScale_m2509514663(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = (&V_0)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Clamp_m500974738(NULL /*static, unused*/, ((float)((float)(60.0f)*(float)L_5)), (1.0f), (100.0f), /*hidden argument*/NULL);
		Camera_set_fieldOfView_m4094496100(L_1, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LookAtTarget::.ctor()
extern "C"  void LookAtTarget__ctor_m1681727390 (LookAtTarget_t1968561443 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1339182015(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LookAtTarget::Start()
extern "C"  void LookAtTarget_Start_m3878085324 (LookAtTarget_t1968561443 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LookAtTarget_Start_m3878085324_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = ((LookAtTarget_t1968561443_StaticFields*)LookAtTarget_t1968561443_il2cpp_TypeInfo_var->static_fields)->get_target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1454075600(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m2648350745(__this, /*hidden argument*/NULL);
		((LookAtTarget_t1968561443_StaticFields*)LookAtTarget_t1968561443_il2cpp_TypeInfo_var->static_fields)->set_target_2(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m1780991845(NULL /*static, unused*/, _stringLiteral2249127133, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void LookAtTarget::Update()
extern "C"  void LookAtTarget_Update_m3580379366 (LookAtTarget_t1968561443 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LookAtTarget_Update_m3580379366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = ((LookAtTarget_t1968561443_StaticFields*)LookAtTarget_t1968561443_il2cpp_TypeInfo_var->static_fields)->get_target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m487959476(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Transform_t3600365921 * L_2 = Component_get_transform_m2921103810(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = ((LookAtTarget_t1968561443_StaticFields*)LookAtTarget_t1968561443_il2cpp_TypeInfo_var->static_fields)->get_target_2();
		Transform_t3600365921 * L_4 = GameObject_get_transform_m393750976(L_3, /*hidden argument*/NULL);
		Transform_LookAt_m3477419764(L_2, L_4, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void RotateAround::.ctor()
extern "C"  void RotateAround__ctor_m3310336593 (RotateAround_t1321500788 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1339182015(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RotateAround::Start()
extern "C"  void RotateAround_Start_m4136461483 (RotateAround_t1321500788 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RotateAround_Start_m4136461483_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = __this->get_target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1454075600(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m2648350745(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m393750976(L_2, /*hidden argument*/NULL);
		__this->set_target_2(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m1780991845(NULL /*static, unused*/, _stringLiteral743214968, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void RotateAround::Update()
extern "C"  void RotateAround_Update_m2089674717 (RotateAround_t1321500788 * __this, const MethodInfo* method)
{
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m2921103810(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = __this->get_target_2();
		Transform_t3600365921 * L_2 = Component_get_transform_m2921103810(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Transform_get_position_m102368104(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = __this->get_target_2();
		Transform_t3600365921 * L_5 = Component_get_transform_m2921103810(L_4, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = Transform_get_up_m4257750918(L_5, /*hidden argument*/NULL);
		int32_t L_7 = __this->get_speed_3();
		float L_8 = Time_get_deltaTime_m3562456068(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_RotateAround_m3655132564(L_0, L_3, L_6, ((float)((float)(((float)((float)L_7)))*(float)L_8)), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
