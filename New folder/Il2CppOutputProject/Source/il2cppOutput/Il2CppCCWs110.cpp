﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation>
struct Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493;
// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String>
struct Action_2_tCD3A19F09D928B91560C314DF9651496E00DD76F;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_t0E8AEAD57F4E842649411A16470AC632AB9C970D;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.InputControl,System.Single>
struct Dictionary_2_tD9AF58FD2A2776973AD15D0D2222092EB1DC03A4;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_t68C23527642AC5DB8C32E9468893B995CFA0EE37;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct Dictionary_2_tE70FC4126194B961620E1F57B12665AE688A4382;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout>
struct Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t2DCDF01C81B9244A5794A0927B4527FEFA140173;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Boolean>
struct Dictionary_2_t727597657DBCDE8841E480361B4F6009E211BACA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_tABC1A87A6841AE3B7F37FCFB71B428D40EB048A4;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler>
struct EventFunction_1_t4CF5C391B37A361E289786E1A716C8224E32DA1F;
// System.Func`2<UnityEngine.InputSystem.InputControl,System.String>
struct Func_2_t98DA4F6FDB8252DB2E23D85DA4AFD83E31126912;
// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single>
struct Func_3_t18B48906F1B089C7F2B521F0A6C36D03976CCF6E;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver>
struct IReadOnlyList_1_t07B62E15F4ACCEC3780112A4378BB82F179F9734;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t3FD44D9B4073D45F5043F02E045D2D7AE8A81481;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_tCBCC559E472FFE1F547661BA38961FEA157E610E;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>
struct List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4;
// System.Collections.Generic.List`1<System.Diagnostics.Tracing.EventProvider/SessionInfo>
struct List_1_t53BBC0AA893BF75B4925CA24EBF5975C942A4D17;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tCE1A9246904165288188F4BB4BB971B1EAF21339;
// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Tuple`2<System.Int32,System.Int32>
struct Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Microsoft.MixedReality.Toolkit.Boundary.Edge[]
struct EdgeU5BU5D_t34FE85CA4657553D2AFF71A1072BFF41A1BD7DA0;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t1C94B57362A0B1A6505F19356263BECF45D00E8E;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_tB4B5958DB863092A77C4B1563316110446E90309;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_t1EA05E36F788958E2F8162D0A2A6D406491B4E39;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Diagnostics.Tracing.ActivityFilter
struct ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385;
// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin
struct AppRemotingPlugin_t913B737DC9F4F1E31FF4F98D4144872A1B724D1C;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// Microsoft.MixedReality.Toolkit.Input.BaseGlobalInputSource
struct BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB;
// Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData
struct BoundaryEventData_t0E104B2DEDCB28391DBD07973B24029B2D864C46;
// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest
struct BoundingBoxExampleTest_tE5A16357EE378EBC55A75544FE52AB6BF83996C5;
// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample
struct BoundsControlRuntimeExample_t3148E39C75C36C87606FF624C3B21DEFB182D370;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// Microsoft.MixedReality.Toolkit.Experimental.InteractiveElement.CompressableButton
struct CompressableButton_tC8BB46222E63EBAFAD36C362895906BF091643C5;
// Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver
struct CustomInteractablesReceiver_tE1AF621AEB72C5BCE710D1BC11B8C372D58C5D7D;
// WinRT.Delegate
struct Delegate_t7333859EF67840D55604C04EFB7A875783646C5E;
// Microsoft.MixedReality.Toolkit.UI.Dialog
struct Dialog_tDCB45916B52CB0F883285FCE6E6C4999AC686204;
// UnityEngine.Windows.Speech.DictationRecognizer
struct DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B;
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture
struct DrawOnTexture_t74F60E93A229405A2E1320A6768C620442836B39;
// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96;
// System.Diagnostics.Tracing.EventPayload
struct EventPayload_t43BB09A63B3B7D1DDA3D998D4167167A8443BEFA;
// System.Diagnostics.Tracing.EventSource
struct EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A;
// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother
struct EyeGazeSmoother_t6DEC5C0A35740D638DDEF18A5836EBDF4A07D144;
// Microsoft.MixedReality.Toolkit.UI.FollowMeToggle
struct FollowMeToggle_t4E26EDB8BB583BDCCFE216755488393ECA5437FE;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.UI.GazeHandHelper
struct GazeHandHelper_tB51A5D2BD3917F9AC38903D0D2EDED65FC75B4CC;
// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection
struct GridObjectCollection_t908A9C2F223BFF41BB022A723C62593281F236C2;
// Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl
struct GridObjectLayoutControl_t1BCE20D066A9D88A97053545E1CBD0D165380DC5;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint
struct HandConstraint_tE964BB1E24517C25B95D37CEC9D859866B0D310E;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp
struct HandConstraintPalmUp_t88F15CC3D7F8E84758F67A0F3460685FDEE23242;
// Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint
struct HandInteractionHint_tF96FA59408050757030CC7887257D1AF72A0F412;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.Runtime.InteropServices.IMarshal
struct IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_tA64B5DA65248A5197256A84A569E745B8579CB16;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t7E6E610339CBD844D8062BDE80EC0E15E2ED6247;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride
struct IMixedRealityGazeProviderHeadOverride_tFF58435BFB549DE9195170C5E37AD885E42EFBF8;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t3196307F098DCEFBD251512224039745B7F4B96B;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t37E1E92066EA816628E60A45958488D2F5439D6D;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_t4D3A9A7F97CA8B9DA8F0F3CC76DABA5FF3DB3A50;
// UnityEngine.InputSystem.InputAction
struct InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE;
// Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle
struct InscribedRectangle_tE2D55E32FFEF8D166C1753BF82F5547ABFFCBCBF;
// UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile
struct MixedRealityBoundaryVisualizationProfile_t06EA6C9C08995D7C4D28B8A5B48D4791DB807413;
// System.Reflection.Module
struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7;
// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator
struct ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2;
// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride
struct ProjectionOverride_t378E9B4EF8C3FA80922E7EC95176F4B0DB63F0BD;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.InteropServices.SafeBuffer
struct SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t2B5D333FB9CAF7BE763E0AE99EE05569C8EA1F0F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.VFX.VisualEffectAsset
struct VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater
struct WindowsMixedRealityReprojectionUpdater_t402999B70BA37FA6205A97F17889D3931767A8CE;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand
struct WindowsMixedRealityXRSDKGGVHand_t13D1BBDEAFEB911EB12EFA8BDD8BA35056A20851;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback
struct EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA;

IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// System.Runtime.InteropServices.IAgileObject
struct NOVTABLE IAgileObject_t6F1702BEB08256952B124A9982A893DF328C2434 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m970326E6407CE3EC1CF64E69994517B316028691(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_mF5A8C72B170E0798C7D1709BFD0E501FDF566349(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m257651767765E9EB93F950F3ADA01F4ACF8A2D59(uint32_t ___value0) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() = 0;
};

// System.Object


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12
struct U3CSequenceU3Ed__12_t1DD821C904BD37C11636BE253742C50F1ECF937C  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<>4__this
	BoundingBoxExampleTest_tE5A16357EE378EBC55A75544FE52AB6BF83996C5 * ___U3CU3E4__this_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<cube>5__2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CcubeU3E5__2_3;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<om>5__3
	ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656 * ___U3ComU3E5__3_4;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<newObject>5__4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CnewObjectU3E5__4_5;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<bc>5__5
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * ___U3CbcU3E5__5_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<lastParent>5__6
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3ClastParentU3E5__6_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t1DD821C904BD37C11636BE253742C50F1ECF937C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t1DD821C904BD37C11636BE253742C50F1ECF937C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t1DD821C904BD37C11636BE253742C50F1ECF937C, ___U3CU3E4__this_2)); }
	inline BoundingBoxExampleTest_tE5A16357EE378EBC55A75544FE52AB6BF83996C5 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BoundingBoxExampleTest_tE5A16357EE378EBC55A75544FE52AB6BF83996C5 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BoundingBoxExampleTest_tE5A16357EE378EBC55A75544FE52AB6BF83996C5 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcubeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t1DD821C904BD37C11636BE253742C50F1ECF937C, ___U3CcubeU3E5__2_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CcubeU3E5__2_3() const { return ___U3CcubeU3E5__2_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CcubeU3E5__2_3() { return &___U3CcubeU3E5__2_3; }
	inline void set_U3CcubeU3E5__2_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CcubeU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcubeU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ComU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t1DD821C904BD37C11636BE253742C50F1ECF937C, ___U3ComU3E5__3_4)); }
	inline ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656 * get_U3ComU3E5__3_4() const { return ___U3ComU3E5__3_4; }
	inline ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656 ** get_address_of_U3ComU3E5__3_4() { return &___U3ComU3E5__3_4; }
	inline void set_U3ComU3E5__3_4(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656 * value)
	{
		___U3ComU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ComU3E5__3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnewObjectU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t1DD821C904BD37C11636BE253742C50F1ECF937C, ___U3CnewObjectU3E5__4_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CnewObjectU3E5__4_5() const { return ___U3CnewObjectU3E5__4_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CnewObjectU3E5__4_5() { return &___U3CnewObjectU3E5__4_5; }
	inline void set_U3CnewObjectU3E5__4_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CnewObjectU3E5__4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnewObjectU3E5__4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbcU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t1DD821C904BD37C11636BE253742C50F1ECF937C, ___U3CbcU3E5__5_6)); }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * get_U3CbcU3E5__5_6() const { return ___U3CbcU3E5__5_6; }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 ** get_address_of_U3CbcU3E5__5_6() { return &___U3CbcU3E5__5_6; }
	inline void set_U3CbcU3E5__5_6(BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * value)
	{
		___U3CbcU3E5__5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbcU3E5__5_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastParentU3E5__6_7() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t1DD821C904BD37C11636BE253742C50F1ECF937C, ___U3ClastParentU3E5__6_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3ClastParentU3E5__6_7() const { return ___U3ClastParentU3E5__6_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3ClastParentU3E5__6_7() { return &___U3ClastParentU3E5__6_7; }
	inline void set_U3ClastParentU3E5__6_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3ClastParentU3E5__6_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastParentU3E5__6_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13
struct U3CWaitForSpeechCommandU3Ed__13_t9CB1CCB7D8A85765735EC9B93D023C99C3A77CD8  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13::<>4__this
	BoundingBoxExampleTest_tE5A16357EE378EBC55A75544FE52AB6BF83996C5 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForSpeechCommandU3Ed__13_t9CB1CCB7D8A85765735EC9B93D023C99C3A77CD8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForSpeechCommandU3Ed__13_t9CB1CCB7D8A85765735EC9B93D023C99C3A77CD8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitForSpeechCommandU3Ed__13_t9CB1CCB7D8A85765735EC9B93D023C99C3A77CD8, ___U3CU3E4__this_2)); }
	inline BoundingBoxExampleTest_tE5A16357EE378EBC55A75544FE52AB6BF83996C5 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BoundingBoxExampleTest_tE5A16357EE378EBC55A75544FE52AB6BF83996C5 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BoundingBoxExampleTest_tE5A16357EE378EBC55A75544FE52AB6BF83996C5 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12
struct U3CSequenceU3Ed__12_t1D9A238AA12DA1C2F4010E2E5F884A7175450DB5  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<>4__this
	BoundsControlRuntimeExample_t3148E39C75C36C87606FF624C3B21DEFB182D370 * ___U3CU3E4__this_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<cube>5__2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CcubeU3E5__2_3;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<om>5__3
	ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656 * ___U3ComU3E5__3_4;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<newObject>5__4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CnewObjectU3E5__4_5;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<bc>5__5
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * ___U3CbcU3E5__5_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<lastParent>5__6
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3ClastParentU3E5__6_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t1D9A238AA12DA1C2F4010E2E5F884A7175450DB5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t1D9A238AA12DA1C2F4010E2E5F884A7175450DB5, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t1D9A238AA12DA1C2F4010E2E5F884A7175450DB5, ___U3CU3E4__this_2)); }
	inline BoundsControlRuntimeExample_t3148E39C75C36C87606FF624C3B21DEFB182D370 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BoundsControlRuntimeExample_t3148E39C75C36C87606FF624C3B21DEFB182D370 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BoundsControlRuntimeExample_t3148E39C75C36C87606FF624C3B21DEFB182D370 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcubeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t1D9A238AA12DA1C2F4010E2E5F884A7175450DB5, ___U3CcubeU3E5__2_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CcubeU3E5__2_3() const { return ___U3CcubeU3E5__2_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CcubeU3E5__2_3() { return &___U3CcubeU3E5__2_3; }
	inline void set_U3CcubeU3E5__2_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CcubeU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcubeU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ComU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t1D9A238AA12DA1C2F4010E2E5F884A7175450DB5, ___U3ComU3E5__3_4)); }
	inline ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656 * get_U3ComU3E5__3_4() const { return ___U3ComU3E5__3_4; }
	inline ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656 ** get_address_of_U3ComU3E5__3_4() { return &___U3ComU3E5__3_4; }
	inline void set_U3ComU3E5__3_4(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656 * value)
	{
		___U3ComU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ComU3E5__3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnewObjectU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t1D9A238AA12DA1C2F4010E2E5F884A7175450DB5, ___U3CnewObjectU3E5__4_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CnewObjectU3E5__4_5() const { return ___U3CnewObjectU3E5__4_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CnewObjectU3E5__4_5() { return &___U3CnewObjectU3E5__4_5; }
	inline void set_U3CnewObjectU3E5__4_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CnewObjectU3E5__4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnewObjectU3E5__4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbcU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t1D9A238AA12DA1C2F4010E2E5F884A7175450DB5, ___U3CbcU3E5__5_6)); }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * get_U3CbcU3E5__5_6() const { return ___U3CbcU3E5__5_6; }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 ** get_address_of_U3CbcU3E5__5_6() { return &___U3CbcU3E5__5_6; }
	inline void set_U3CbcU3E5__5_6(BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * value)
	{
		___U3CbcU3E5__5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbcU3E5__5_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastParentU3E5__6_7() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t1D9A238AA12DA1C2F4010E2E5F884A7175450DB5, ___U3ClastParentU3E5__6_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3ClastParentU3E5__6_7() const { return ___U3ClastParentU3E5__6_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3ClastParentU3E5__6_7() { return &___U3ClastParentU3E5__6_7; }
	inline void set_U3ClastParentU3E5__6_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3ClastParentU3E5__6_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastParentU3E5__6_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13
struct U3CWaitForSpeechCommandU3Ed__13_t41F84FDBD07F4A8FD4CFBD7AF943A0B0909447F7  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13::<>4__this
	BoundsControlRuntimeExample_t3148E39C75C36C87606FF624C3B21DEFB182D370 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForSpeechCommandU3Ed__13_t41F84FDBD07F4A8FD4CFBD7AF943A0B0909447F7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForSpeechCommandU3Ed__13_t41F84FDBD07F4A8FD4CFBD7AF943A0B0909447F7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitForSpeechCommandU3Ed__13_t41F84FDBD07F4A8FD4CFBD7AF943A0B0909447F7, ___U3CU3E4__this_2)); }
	inline BoundsControlRuntimeExample_t3148E39C75C36C87606FF624C3B21DEFB182D370 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BoundsControlRuntimeExample_t3148E39C75C36C87606FF624C3B21DEFB182D370 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BoundsControlRuntimeExample_t3148E39C75C36C87606FF624C3B21DEFB182D370 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.UI.Button/<OnFinishSubmit>d__9
struct U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.Button/<OnFinishSubmit>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.Button/<OnFinishSubmit>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.UI.Button UnityEngine.UI.Button/<OnFinishSubmit>d__9::<>4__this
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___U3CU3E4__this_2;
	// System.Single UnityEngine.UI.Button/<OnFinishSubmit>d__9::<fadeTime>5__2
	float ___U3CfadeTimeU3E5__2_3;
	// System.Single UnityEngine.UI.Button/<OnFinishSubmit>d__9::<elapsedTime>5__3
	float ___U3CelapsedTimeU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CU3E4__this_2)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfadeTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CfadeTimeU3E5__2_3)); }
	inline float get_U3CfadeTimeU3E5__2_3() const { return ___U3CfadeTimeU3E5__2_3; }
	inline float* get_address_of_U3CfadeTimeU3E5__2_3() { return &___U3CfadeTimeU3E5__2_3; }
	inline void set_U3CfadeTimeU3E5__2_3(float value)
	{
		___U3CfadeTimeU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__3_4() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CelapsedTimeU3E5__3_4)); }
	inline float get_U3CelapsedTimeU3E5__3_4() const { return ___U3CelapsedTimeU3E5__3_4; }
	inline float* get_address_of_U3CelapsedTimeU3E5__3_4() { return &___U3CelapsedTimeU3E5__3_4; }
	inline void set_U3CelapsedTimeU3E5__3_4(float value)
	{
		___U3CelapsedTimeU3E5__3_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.InteractiveElement.CompressableButton/<AnimateHighlightPlate>d__104
struct U3CAnimateHighlightPlateU3Ed__104_t0AA7673102C4A87C0153D814FE243BA15792761A  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.InteractiveElement.CompressableButton/<AnimateHighlightPlate>d__104::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Experimental.InteractiveElement.CompressableButton/<AnimateHighlightPlate>d__104::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Experimental.InteractiveElement.CompressableButton Microsoft.MixedReality.Toolkit.Experimental.InteractiveElement.CompressableButton/<AnimateHighlightPlate>d__104::<>4__this
	CompressableButton_tC8BB46222E63EBAFAD36C362895906BF091643C5 * ___U3CU3E4__this_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.InteractiveElement.CompressableButton/<AnimateHighlightPlate>d__104::fadeIn
	bool ___fadeIn_3;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.InteractiveElement.CompressableButton/<AnimateHighlightPlate>d__104::time
	float ___time_4;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.InteractiveElement.CompressableButton/<AnimateHighlightPlate>d__104::<blendTime>5__2
	float ___U3CblendTimeU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__104_t0AA7673102C4A87C0153D814FE243BA15792761A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__104_t0AA7673102C4A87C0153D814FE243BA15792761A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__104_t0AA7673102C4A87C0153D814FE243BA15792761A, ___U3CU3E4__this_2)); }
	inline CompressableButton_tC8BB46222E63EBAFAD36C362895906BF091643C5 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CompressableButton_tC8BB46222E63EBAFAD36C362895906BF091643C5 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CompressableButton_tC8BB46222E63EBAFAD36C362895906BF091643C5 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_fadeIn_3() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__104_t0AA7673102C4A87C0153D814FE243BA15792761A, ___fadeIn_3)); }
	inline bool get_fadeIn_3() const { return ___fadeIn_3; }
	inline bool* get_address_of_fadeIn_3() { return &___fadeIn_3; }
	inline void set_fadeIn_3(bool value)
	{
		___fadeIn_3 = value;
	}

	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__104_t0AA7673102C4A87C0153D814FE243BA15792761A, ___time_4)); }
	inline float get_time_4() const { return ___time_4; }
	inline float* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(float value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of_U3CblendTimeU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__104_t0AA7673102C4A87C0153D814FE243BA15792761A, ___U3CblendTimeU3E5__2_5)); }
	inline float get_U3CblendTimeU3E5__2_5() const { return ___U3CblendTimeU3E5__2_5; }
	inline float* get_address_of_U3CblendTimeU3E5__2_5() { return &___U3CblendTimeU3E5__2_5; }
	inline void set_U3CblendTimeU3E5__2_5(float value)
	{
		___U3CblendTimeU3E5__2_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<ClickTimer>d__14
struct U3CClickTimerU3Ed__14_t883403490A2B7D12BBBA1A09073CC4E8710A4730  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<ClickTimer>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<ClickTimer>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<ClickTimer>d__14::time
	float ___time_2;
	// Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<ClickTimer>d__14::<>4__this
	CustomInteractablesReceiver_tE1AF621AEB72C5BCE710D1BC11B8C372D58C5D7D * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClickTimerU3Ed__14_t883403490A2B7D12BBBA1A09073CC4E8710A4730, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClickTimerU3Ed__14_t883403490A2B7D12BBBA1A09073CC4E8710A4730, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CClickTimerU3Ed__14_t883403490A2B7D12BBBA1A09073CC4E8710A4730, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CClickTimerU3Ed__14_t883403490A2B7D12BBBA1A09073CC4E8710A4730, ___U3CU3E4__this_3)); }
	inline CustomInteractablesReceiver_tE1AF621AEB72C5BCE710D1BC11B8C372D58C5D7D * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline CustomInteractablesReceiver_tE1AF621AEB72C5BCE710D1BC11B8C372D58C5D7D ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(CustomInteractablesReceiver_tE1AF621AEB72C5BCE710D1BC11B8C372D58C5D7D * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<VoiceTimer>d__15
struct U3CVoiceTimerU3Ed__15_t1912B250463FFED8E88FCEC9256FB981AA56792E  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<VoiceTimer>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<VoiceTimer>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<VoiceTimer>d__15::time
	float ___time_2;
	// Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<VoiceTimer>d__15::<>4__this
	CustomInteractablesReceiver_tE1AF621AEB72C5BCE710D1BC11B8C372D58C5D7D * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CVoiceTimerU3Ed__15_t1912B250463FFED8E88FCEC9256FB981AA56792E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CVoiceTimerU3Ed__15_t1912B250463FFED8E88FCEC9256FB981AA56792E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CVoiceTimerU3Ed__15_t1912B250463FFED8E88FCEC9256FB981AA56792E, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CVoiceTimerU3Ed__15_t1912B250463FFED8E88FCEC9256FB981AA56792E, ___U3CU3E4__this_3)); }
	inline CustomInteractablesReceiver_tE1AF621AEB72C5BCE710D1BC11B8C372D58C5D7D * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline CustomInteractablesReceiver_tE1AF621AEB72C5BCE710D1BC11B8C372D58C5D7D ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(CustomInteractablesReceiver_tE1AF621AEB72C5BCE710D1BC11B8C372D58C5D7D * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// WinRT.Delegate/InitialReference
struct InitialReference_t00703C9260D4202319E4D5824EDBB00725A53239  : public RuntimeObject
{
public:
	// WinRT.Delegate WinRT.Delegate/InitialReference::_delegate
	Delegate_t7333859EF67840D55604C04EFB7A875783646C5E * ____delegate_0;

public:
	inline static int32_t get_offset_of__delegate_0() { return static_cast<int32_t>(offsetof(InitialReference_t00703C9260D4202319E4D5824EDBB00725A53239, ____delegate_0)); }
	inline Delegate_t7333859EF67840D55604C04EFB7A875783646C5E * get__delegate_0() const { return ____delegate_0; }
	inline Delegate_t7333859EF67840D55604C04EFB7A875783646C5E ** get_address_of__delegate_0() { return &____delegate_0; }
	inline void set__delegate_0(Delegate_t7333859EF67840D55604C04EFB7A875783646C5E * value)
	{
		____delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delegate_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.Dialog/<CloseDialog>d__11
struct U3CCloseDialogU3Ed__11_t928FE457184D5FD1A1F35CC3275FC2A59DAABBF4  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Dialog/<CloseDialog>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.Dialog/<CloseDialog>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCloseDialogU3Ed__11_t928FE457184D5FD1A1F35CC3275FC2A59DAABBF4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCloseDialogU3Ed__11_t928FE457184D5FD1A1F35CC3275FC2A59DAABBF4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.Dialog/<OpenDialog>d__10
struct U3COpenDialogU3Ed__10_t780B4BB5E3DAC8921754C4407F06800BB58891AD  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Dialog/<OpenDialog>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.Dialog/<OpenDialog>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COpenDialogU3Ed__10_t780B4BB5E3DAC8921754C4407F06800BB58891AD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3COpenDialogU3Ed__10_t780B4BB5E3DAC8921754C4407F06800BB58891AD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.Dialog/<RunDialogOverTime>d__9
struct U3CRunDialogOverTimeU3Ed__9_t2E7EF1AC02220A73E299143A700188047B018916  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Dialog/<RunDialogOverTime>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.Dialog/<RunDialogOverTime>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.Dialog Microsoft.MixedReality.Toolkit.UI.Dialog/<RunDialogOverTime>d__9::<>4__this
	Dialog_tDCB45916B52CB0F883285FCE6E6C4999AC686204 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRunDialogOverTimeU3Ed__9_t2E7EF1AC02220A73E299143A700188047B018916, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRunDialogOverTimeU3Ed__9_t2E7EF1AC02220A73E299143A700188047B018916, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRunDialogOverTimeU3Ed__9_t2E7EF1AC02220A73E299143A700188047B018916, ___U3CU3E4__this_2)); }
	inline Dialog_tDCB45916B52CB0F883285FCE6E6C4999AC686204 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Dialog_tDCB45916B52CB0F883285FCE6E6C4999AC686204 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Dialog_tDCB45916B52CB0F883285FCE6E6C4999AC686204 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75
struct U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::delay
	float ___delay_2;
	// UnityEngine.UI.Dropdown UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::<>4__this
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30, ___U3CU3E4__this_3)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.EyeTrackingDemoUtils/<LoadNewScene>d__8
struct U3CLoadNewSceneU3Ed__8_tC90CA1734C6222BC76778C658B85DF5569ED6A77  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.EyeTrackingDemoUtils/<LoadNewScene>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.EyeTrackingDemoUtils/<LoadNewScene>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.EyeTrackingDemoUtils/<LoadNewScene>d__8::delayInSeconds
	float ___delayInSeconds_2;
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.EyeTrackingDemoUtils/<LoadNewScene>d__8::sceneToBeLoaded
	String_t* ___sceneToBeLoaded_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadNewSceneU3Ed__8_tC90CA1734C6222BC76778C658B85DF5569ED6A77, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadNewSceneU3Ed__8_tC90CA1734C6222BC76778C658B85DF5569ED6A77, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delayInSeconds_2() { return static_cast<int32_t>(offsetof(U3CLoadNewSceneU3Ed__8_tC90CA1734C6222BC76778C658B85DF5569ED6A77, ___delayInSeconds_2)); }
	inline float get_delayInSeconds_2() const { return ___delayInSeconds_2; }
	inline float* get_address_of_delayInSeconds_2() { return &___delayInSeconds_2; }
	inline void set_delayInSeconds_2(float value)
	{
		___delayInSeconds_2 = value;
	}

	inline static int32_t get_offset_of_sceneToBeLoaded_3() { return static_cast<int32_t>(offsetof(U3CLoadNewSceneU3Ed__8_tC90CA1734C6222BC76778C658B85DF5569ED6A77, ___sceneToBeLoaded_3)); }
	inline String_t* get_sceneToBeLoaded_3() const { return ___sceneToBeLoaded_3; }
	inline String_t** get_address_of_sceneToBeLoaded_3() { return &___sceneToBeLoaded_3; }
	inline void set_sceneToBeLoaded_3(String_t* value)
	{
		___sceneToBeLoaded_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneToBeLoaded_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.FollowMeToggle/<AutoFollowDistanceCheck>d__37
struct U3CAutoFollowDistanceCheckU3Ed__37_tB103232C3193A81F2B40B18D9936AD66339BF9C1  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.FollowMeToggle/<AutoFollowDistanceCheck>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.FollowMeToggle/<AutoFollowDistanceCheck>d__37::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.FollowMeToggle Microsoft.MixedReality.Toolkit.UI.FollowMeToggle/<AutoFollowDistanceCheck>d__37::<>4__this
	FollowMeToggle_t4E26EDB8BB583BDCCFE216755488393ECA5437FE * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAutoFollowDistanceCheckU3Ed__37_tB103232C3193A81F2B40B18D9936AD66339BF9C1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAutoFollowDistanceCheckU3Ed__37_tB103232C3193A81F2B40B18D9936AD66339BF9C1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAutoFollowDistanceCheckU3Ed__37_tB103232C3193A81F2B40B18D9936AD66339BF9C1, ___U3CU3E4__this_2)); }
	inline FollowMeToggle_t4E26EDB8BB583BDCCFE216755488393ECA5437FE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline FollowMeToggle_t4E26EDB8BB583BDCCFE216755488393ECA5437FE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(FollowMeToggle_t4E26EDB8BB583BDCCFE216755488393ECA5437FE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7
struct U3CTestAnchorsU3Ed__7_tD334FEC448EDB158864901827FE817EE4D63BEE1  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::<>4__this
	GridObjectLayoutControl_t1BCE20D066A9D88A97053545E1CBD0D165380DC5 * ___U3CU3E4__this_2;
	// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::<gridCollection>5__2
	GridObjectCollection_t908A9C2F223BFF41BB022A723C62593281F236C2 * ___U3CgridCollectionU3E5__2_3;
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::<path>5__3
	String_t* ___U3CpathU3E5__3_4;
	// System.Text.StringBuilder Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::<stringBuilder>5__4
	StringBuilder_t * ___U3CstringBuilderU3E5__4_5;
	// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::<>7__wrap4
	RuntimeObject* ___U3CU3E7__wrap4_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTestAnchorsU3Ed__7_tD334FEC448EDB158864901827FE817EE4D63BEE1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTestAnchorsU3Ed__7_tD334FEC448EDB158864901827FE817EE4D63BEE1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTestAnchorsU3Ed__7_tD334FEC448EDB158864901827FE817EE4D63BEE1, ___U3CU3E4__this_2)); }
	inline GridObjectLayoutControl_t1BCE20D066A9D88A97053545E1CBD0D165380DC5 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GridObjectLayoutControl_t1BCE20D066A9D88A97053545E1CBD0D165380DC5 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GridObjectLayoutControl_t1BCE20D066A9D88A97053545E1CBD0D165380DC5 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgridCollectionU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CTestAnchorsU3Ed__7_tD334FEC448EDB158864901827FE817EE4D63BEE1, ___U3CgridCollectionU3E5__2_3)); }
	inline GridObjectCollection_t908A9C2F223BFF41BB022A723C62593281F236C2 * get_U3CgridCollectionU3E5__2_3() const { return ___U3CgridCollectionU3E5__2_3; }
	inline GridObjectCollection_t908A9C2F223BFF41BB022A723C62593281F236C2 ** get_address_of_U3CgridCollectionU3E5__2_3() { return &___U3CgridCollectionU3E5__2_3; }
	inline void set_U3CgridCollectionU3E5__2_3(GridObjectCollection_t908A9C2F223BFF41BB022A723C62593281F236C2 * value)
	{
		___U3CgridCollectionU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgridCollectionU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpathU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CTestAnchorsU3Ed__7_tD334FEC448EDB158864901827FE817EE4D63BEE1, ___U3CpathU3E5__3_4)); }
	inline String_t* get_U3CpathU3E5__3_4() const { return ___U3CpathU3E5__3_4; }
	inline String_t** get_address_of_U3CpathU3E5__3_4() { return &___U3CpathU3E5__3_4; }
	inline void set_U3CpathU3E5__3_4(String_t* value)
	{
		___U3CpathU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpathU3E5__3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstringBuilderU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CTestAnchorsU3Ed__7_tD334FEC448EDB158864901827FE817EE4D63BEE1, ___U3CstringBuilderU3E5__4_5)); }
	inline StringBuilder_t * get_U3CstringBuilderU3E5__4_5() const { return ___U3CstringBuilderU3E5__4_5; }
	inline StringBuilder_t ** get_address_of_U3CstringBuilderU3E5__4_5() { return &___U3CstringBuilderU3E5__4_5; }
	inline void set_U3CstringBuilderU3E5__4_5(StringBuilder_t * value)
	{
		___U3CstringBuilderU3E5__4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstringBuilderU3E5__4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap4_6() { return static_cast<int32_t>(offsetof(U3CTestAnchorsU3Ed__7_tD334FEC448EDB158864901827FE817EE4D63BEE1, ___U3CU3E7__wrap4_6)); }
	inline RuntimeObject* get_U3CU3E7__wrap4_6() const { return ___U3CU3E7__wrap4_6; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap4_6() { return &___U3CU3E7__wrap4_6; }
	inline void set_U3CU3E7__wrap4_6(RuntimeObject* value)
	{
		___U3CU3E7__wrap4_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap4_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62
struct U3CToggleCursorsU3Ed__62_t828BDAA338BB69733F59D878F238D92517398A63  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62::controller
	RuntimeObject* ___controller_2;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62::<>4__this
	HandConstraint_tE964BB1E24517C25B95D37CEC9D859866B0D310E * ___U3CU3E4__this_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62::frameDelay
	bool ___frameDelay_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62::visible
	bool ___visible_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__62_t828BDAA338BB69733F59D878F238D92517398A63, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__62_t828BDAA338BB69733F59D878F238D92517398A63, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_controller_2() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__62_t828BDAA338BB69733F59D878F238D92517398A63, ___controller_2)); }
	inline RuntimeObject* get_controller_2() const { return ___controller_2; }
	inline RuntimeObject** get_address_of_controller_2() { return &___controller_2; }
	inline void set_controller_2(RuntimeObject* value)
	{
		___controller_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__62_t828BDAA338BB69733F59D878F238D92517398A63, ___U3CU3E4__this_3)); }
	inline HandConstraint_tE964BB1E24517C25B95D37CEC9D859866B0D310E * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline HandConstraint_tE964BB1E24517C25B95D37CEC9D859866B0D310E ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(HandConstraint_tE964BB1E24517C25B95D37CEC9D859866B0D310E * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_frameDelay_4() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__62_t828BDAA338BB69733F59D878F238D92517398A63, ___frameDelay_4)); }
	inline bool get_frameDelay_4() const { return ___frameDelay_4; }
	inline bool* get_address_of_frameDelay_4() { return &___frameDelay_4; }
	inline void set_frameDelay_4(bool value)
	{
		___frameDelay_4 = value;
	}

	inline static int32_t get_offset_of_visible_5() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__62_t828BDAA338BB69733F59D878F238D92517398A63, ___visible_5)); }
	inline bool get_visible_5() const { return ___visible_5; }
	inline bool* get_address_of_visible_5() { return &___visible_5; }
	inline void set_visible_5(bool value)
	{
		___visible_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp/<WorldLockedReattachCheck>d__42
struct U3CWorldLockedReattachCheckU3Ed__42_tCA3F3D12F65C0E01F2CB7FA32BAE0E0D96AA8F26  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp/<WorldLockedReattachCheck>d__42::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp/<WorldLockedReattachCheck>d__42::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp/<WorldLockedReattachCheck>d__42::<>4__this
	HandConstraintPalmUp_t88F15CC3D7F8E84758F67A0F3460685FDEE23242 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWorldLockedReattachCheckU3Ed__42_tCA3F3D12F65C0E01F2CB7FA32BAE0E0D96AA8F26, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWorldLockedReattachCheckU3Ed__42_tCA3F3D12F65C0E01F2CB7FA32BAE0E0D96AA8F26, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWorldLockedReattachCheckU3Ed__42_tCA3F3D12F65C0E01F2CB7FA32BAE0E0D96AA8F26, ___U3CU3E4__this_2)); }
	inline HandConstraintPalmUp_t88F15CC3D7F8E84758F67A0F3460685FDEE23242 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline HandConstraintPalmUp_t88F15CC3D7F8E84758F67A0F3460685FDEE23242 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(HandConstraintPalmUp_t88F15CC3D7F8E84758F67A0F3460685FDEE23242 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<FadeOutHint>d__45
struct U3CFadeOutHintU3Ed__45_tFA5D0A2AA3F2373B27562A3DB4B151B7B17221FF  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<FadeOutHint>d__45::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<FadeOutHint>d__45::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<FadeOutHint>d__45::<>4__this
	HandInteractionHint_tF96FA59408050757030CC7887257D1AF72A0F412 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeOutHintU3Ed__45_tFA5D0A2AA3F2373B27562A3DB4B151B7B17221FF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeOutHintU3Ed__45_tFA5D0A2AA3F2373B27562A3DB4B151B7B17221FF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeOutHintU3Ed__45_tFA5D0A2AA3F2373B27562A3DB4B151B7B17221FF, ___U3CU3E4__this_2)); }
	inline HandInteractionHint_tF96FA59408050757030CC7887257D1AF72A0F412 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline HandInteractionHint_tF96FA59408050757030CC7887257D1AF72A0F412 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(HandInteractionHint_tF96FA59408050757030CC7887257D1AF72A0F412 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46
struct U3CHintLoopSequenceU3Ed__46_t9318FCDF5B236B689E311C4F940F2B65D20CE638  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<>4__this
	HandInteractionHint_tF96FA59408050757030CC7887257D1AF72A0F412 * ___U3CU3E4__this_2;
	// System.String Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::stateToPlay
	String_t* ___stateToPlay_3;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<timer>5__2
	float ___U3CtimerU3E5__2_4;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<displayDelay>5__3
	float ___U3CdisplayDelayU3E5__3_5;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<visibleTime>5__4
	float ___U3CvisibleTimeU3E5__4_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<playCount>5__5
	int32_t ___U3CplayCountU3E5__5_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<shouldHide>5__6
	bool ___U3CshouldHideU3E5__6_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t9318FCDF5B236B689E311C4F940F2B65D20CE638, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t9318FCDF5B236B689E311C4F940F2B65D20CE638, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t9318FCDF5B236B689E311C4F940F2B65D20CE638, ___U3CU3E4__this_2)); }
	inline HandInteractionHint_tF96FA59408050757030CC7887257D1AF72A0F412 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline HandInteractionHint_tF96FA59408050757030CC7887257D1AF72A0F412 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(HandInteractionHint_tF96FA59408050757030CC7887257D1AF72A0F412 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_stateToPlay_3() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t9318FCDF5B236B689E311C4F940F2B65D20CE638, ___stateToPlay_3)); }
	inline String_t* get_stateToPlay_3() const { return ___stateToPlay_3; }
	inline String_t** get_address_of_stateToPlay_3() { return &___stateToPlay_3; }
	inline void set_stateToPlay_3(String_t* value)
	{
		___stateToPlay_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateToPlay_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimerU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t9318FCDF5B236B689E311C4F940F2B65D20CE638, ___U3CtimerU3E5__2_4)); }
	inline float get_U3CtimerU3E5__2_4() const { return ___U3CtimerU3E5__2_4; }
	inline float* get_address_of_U3CtimerU3E5__2_4() { return &___U3CtimerU3E5__2_4; }
	inline void set_U3CtimerU3E5__2_4(float value)
	{
		___U3CtimerU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CdisplayDelayU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t9318FCDF5B236B689E311C4F940F2B65D20CE638, ___U3CdisplayDelayU3E5__3_5)); }
	inline float get_U3CdisplayDelayU3E5__3_5() const { return ___U3CdisplayDelayU3E5__3_5; }
	inline float* get_address_of_U3CdisplayDelayU3E5__3_5() { return &___U3CdisplayDelayU3E5__3_5; }
	inline void set_U3CdisplayDelayU3E5__3_5(float value)
	{
		___U3CdisplayDelayU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CvisibleTimeU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t9318FCDF5B236B689E311C4F940F2B65D20CE638, ___U3CvisibleTimeU3E5__4_6)); }
	inline float get_U3CvisibleTimeU3E5__4_6() const { return ___U3CvisibleTimeU3E5__4_6; }
	inline float* get_address_of_U3CvisibleTimeU3E5__4_6() { return &___U3CvisibleTimeU3E5__4_6; }
	inline void set_U3CvisibleTimeU3E5__4_6(float value)
	{
		___U3CvisibleTimeU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CplayCountU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t9318FCDF5B236B689E311C4F940F2B65D20CE638, ___U3CplayCountU3E5__5_7)); }
	inline int32_t get_U3CplayCountU3E5__5_7() const { return ___U3CplayCountU3E5__5_7; }
	inline int32_t* get_address_of_U3CplayCountU3E5__5_7() { return &___U3CplayCountU3E5__5_7; }
	inline void set_U3CplayCountU3E5__5_7(int32_t value)
	{
		___U3CplayCountU3E5__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CshouldHideU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t9318FCDF5B236B689E311C4F940F2B65D20CE638, ___U3CshouldHideU3E5__6_8)); }
	inline bool get_U3CshouldHideU3E5__6_8() const { return ___U3CshouldHideU3E5__6_8; }
	inline bool* get_address_of_U3CshouldHideU3E5__6_8() { return &___U3CshouldHideU3E5__6_8; }
	inline void set_U3CshouldHideU3E5__6_8(bool value)
	{
		___U3CshouldHideU3E5__6_8 = value;
	}
};


// System.Collections.Hashtable/KeyCollection
struct KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/KeyCollection::_hashtable
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____hashtable_0;

public:
	inline static int32_t get_offset_of__hashtable_0() { return static_cast<int32_t>(offsetof(KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE, ____hashtable_0)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__hashtable_0() const { return ____hashtable_0; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__hashtable_0() { return &____hashtable_0; }
	inline void set__hashtable_0(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hashtable_0), (void*)value);
	}
};


// UnityEngine.InputSystem.InputActionRebindingExtensions/DeferBindingResolutionWrapper
struct DeferBindingResolutionWrapper_tC1A3045CC80EBCF50A89C15432D6769348AEA3C1  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt32,System.Boolean>
struct Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_t727597657DBCDE8841E480361B4F6009E211BACA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	uint32_t ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6, ___dictionary_0)); }
	inline Dictionary_2_t727597657DBCDE8841E480361B4F6009E211BACA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t727597657DBCDE8841E480361B4F6009E211BACA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t727597657DBCDE8841E480361B4F6009E211BACA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6, ___currentKey_3)); }
	inline uint32_t get_currentKey_3() const { return ___currentKey_3; }
	inline uint32_t* get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(uint32_t value)
	{
		___currentKey_3 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Single>
struct Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputAction>
struct ReadOnlyArray_1_t1A7D980C21C71555DD2BFB1402F87665F3580ED4 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputActionU5BU5D_t1C94B57362A0B1A6505F19356263BECF45D00E8E* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t1A7D980C21C71555DD2BFB1402F87665F3580ED4, ___m_Array_0)); }
	inline InputActionU5BU5D_t1C94B57362A0B1A6505F19356263BECF45D00E8E* get_m_Array_0() const { return ___m_Array_0; }
	inline InputActionU5BU5D_t1C94B57362A0B1A6505F19356263BECF45D00E8E** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InputActionU5BU5D_t1C94B57362A0B1A6505F19356263BECF45D00E8E* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t1A7D980C21C71555DD2BFB1402F87665F3580ED4, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t1A7D980C21C71555DD2BFB1402F87665F3580ED4, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// Windows.Foundation.DateTime
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// Microsoft.MixedReality.OpenXR.Remoting.SecureConnectionServerConfiguration
struct SecureConnectionServerConfiguration_tF5E7245D41C5092EB14D08CF73F1EE1FA9DFE5B7 
{
public:
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureConnectionServerConfiguration::SecureListen
	bool ___SecureListen_0;
	// System.String Microsoft.MixedReality.OpenXR.Remoting.SecureConnectionServerConfiguration::CertificateStorePath
	String_t* ___CertificateStorePath_1;
	// System.String Microsoft.MixedReality.OpenXR.Remoting.SecureConnectionServerConfiguration::SubjectName
	String_t* ___SubjectName_2;
	// System.String Microsoft.MixedReality.OpenXR.Remoting.SecureConnectionServerConfiguration::KeyPassphrase
	String_t* ___KeyPassphrase_3;
	// System.String Microsoft.MixedReality.OpenXR.Remoting.SecureConnectionServerConfiguration::AuthenticationRealm
	String_t* ___AuthenticationRealm_4;
	// System.String Microsoft.MixedReality.OpenXR.Remoting.SecureConnectionServerConfiguration::Token
	String_t* ___Token_5;

public:
	inline static int32_t get_offset_of_SecureListen_0() { return static_cast<int32_t>(offsetof(SecureConnectionServerConfiguration_tF5E7245D41C5092EB14D08CF73F1EE1FA9DFE5B7, ___SecureListen_0)); }
	inline bool get_SecureListen_0() const { return ___SecureListen_0; }
	inline bool* get_address_of_SecureListen_0() { return &___SecureListen_0; }
	inline void set_SecureListen_0(bool value)
	{
		___SecureListen_0 = value;
	}

	inline static int32_t get_offset_of_CertificateStorePath_1() { return static_cast<int32_t>(offsetof(SecureConnectionServerConfiguration_tF5E7245D41C5092EB14D08CF73F1EE1FA9DFE5B7, ___CertificateStorePath_1)); }
	inline String_t* get_CertificateStorePath_1() const { return ___CertificateStorePath_1; }
	inline String_t** get_address_of_CertificateStorePath_1() { return &___CertificateStorePath_1; }
	inline void set_CertificateStorePath_1(String_t* value)
	{
		___CertificateStorePath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CertificateStorePath_1), (void*)value);
	}

	inline static int32_t get_offset_of_SubjectName_2() { return static_cast<int32_t>(offsetof(SecureConnectionServerConfiguration_tF5E7245D41C5092EB14D08CF73F1EE1FA9DFE5B7, ___SubjectName_2)); }
	inline String_t* get_SubjectName_2() const { return ___SubjectName_2; }
	inline String_t** get_address_of_SubjectName_2() { return &___SubjectName_2; }
	inline void set_SubjectName_2(String_t* value)
	{
		___SubjectName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SubjectName_2), (void*)value);
	}

	inline static int32_t get_offset_of_KeyPassphrase_3() { return static_cast<int32_t>(offsetof(SecureConnectionServerConfiguration_tF5E7245D41C5092EB14D08CF73F1EE1FA9DFE5B7, ___KeyPassphrase_3)); }
	inline String_t* get_KeyPassphrase_3() const { return ___KeyPassphrase_3; }
	inline String_t** get_address_of_KeyPassphrase_3() { return &___KeyPassphrase_3; }
	inline void set_KeyPassphrase_3(String_t* value)
	{
		___KeyPassphrase_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyPassphrase_3), (void*)value);
	}

	inline static int32_t get_offset_of_AuthenticationRealm_4() { return static_cast<int32_t>(offsetof(SecureConnectionServerConfiguration_tF5E7245D41C5092EB14D08CF73F1EE1FA9DFE5B7, ___AuthenticationRealm_4)); }
	inline String_t* get_AuthenticationRealm_4() const { return ___AuthenticationRealm_4; }
	inline String_t** get_address_of_AuthenticationRealm_4() { return &___AuthenticationRealm_4; }
	inline void set_AuthenticationRealm_4(String_t* value)
	{
		___AuthenticationRealm_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AuthenticationRealm_4), (void*)value);
	}

	inline static int32_t get_offset_of_Token_5() { return static_cast<int32_t>(offsetof(SecureConnectionServerConfiguration_tF5E7245D41C5092EB14D08CF73F1EE1FA9DFE5B7, ___Token_5)); }
	inline String_t* get_Token_5() const { return ___Token_5; }
	inline String_t** get_address_of_Token_5() { return &___Token_5; }
	inline void set_Token_5(String_t* value)
	{
		___Token_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Token_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureConnectionServerConfiguration
#pragma pack(push, tp, 8)
struct SecureConnectionServerConfiguration_tF5E7245D41C5092EB14D08CF73F1EE1FA9DFE5B7_marshaled_pinvoke
{
	int32_t ___SecureListen_0;
	char* ___CertificateStorePath_1;
	char* ___SubjectName_2;
	char* ___KeyPassphrase_3;
	char* ___AuthenticationRealm_4;
	char* ___Token_5;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureConnectionServerConfiguration
#pragma pack(push, tp, 8)
struct SecureConnectionServerConfiguration_tF5E7245D41C5092EB14D08CF73F1EE1FA9DFE5B7_marshaled_com
{
	int32_t ___SecureListen_0;
	Il2CppChar* ___CertificateStorePath_1;
	Il2CppChar* ___SubjectName_2;
	Il2CppChar* ___KeyPassphrase_3;
	Il2CppChar* ___AuthenticationRealm_4;
	Il2CppChar* ___Token_5;
};
#pragma pack(pop, tp)

// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// System.Numerics.Vector3
struct Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 
{
public:
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Windows.Foundation.Numerics.Vector3
struct Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F 
{
public:
	// System.Single Windows.Foundation.Numerics.Vector3::X
	float ___X_0;
	// System.Single Windows.Foundation.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single Windows.Foundation.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer
struct U3CbufferU3Ee__FixedBuffer_t730F25E28C11E82BBDDD3D0F2F6B9ADC1FDD5D5F 
{
public:
	union
	{
		struct
		{
			// System.Char UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer::FixedElementField
			Il2CppChar ___FixedElementField_0;
		};
		uint8_t U3CbufferU3Ee__FixedBuffer_t730F25E28C11E82BBDDD3D0F2F6B9ADC1FDD5D5F__padding[128];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CbufferU3Ee__FixedBuffer_t730F25E28C11E82BBDDD3D0F2F6B9ADC1FDD5D5F, ___FixedElementField_0)); }
	inline Il2CppChar get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline Il2CppChar* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(Il2CppChar value)
	{
		___FixedElementField_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer
struct U3CbufferU3Ee__FixedBuffer_t730F25E28C11E82BBDDD3D0F2F6B9ADC1FDD5D5F_marshaled_pinvoke
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CbufferU3Ee__FixedBuffer_t730F25E28C11E82BBDDD3D0F2F6B9ADC1FDD5D5F__padding[128];
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer
struct U3CbufferU3Ee__FixedBuffer_t730F25E28C11E82BBDDD3D0F2F6B9ADC1FDD5D5F_marshaled_com
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CbufferU3Ee__FixedBuffer_t730F25E28C11E82BBDDD3D0F2F6B9ADC1FDD5D5F__padding[128];
	};
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Cache::table
	Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 * ___table_0;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D, ___table_0)); }
	inline Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 * get_table_0() const { return ___table_0; }
	inline Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___table_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D_marshaled_pinvoke
{
	Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 * ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D_marshaled_com
{
	Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 * ___table_0;
};
// Windows.Foundation.IReference`1<System.Numerics.Vector3>
struct NOVTABLE IReference_1_t82C05BA472430109829B64EEB0BA4AA8DA57EF70 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m41BE14B78D883205B1AB0B0F28DB78816768D26D(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Vector3>
struct NOVTABLE IReference_1_t2E90AA27DAF67A0C5212F008ED5019775E438EAF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mEFF123E1BD76AEDAED0313C6AC9D05313CBA7487(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F * comReturnValue) = 0;
};

// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct AutoStartBehavior_t4F9338F24376C00A42FB9194C9B340D42FD9424B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_t4F9338F24376C00A42FB9194C9B340D42FD9424B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_typeName_5() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___typeName_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_typeName_5() const { return ___typeName_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_typeName_5() { return &___typeName_5; }
	inline void set_typeName_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___typeName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_5), (void*)value);
	}

	inline static int32_t get_offset_of_isEnabled_9() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___isEnabled_9)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_9() const { return ___isEnabled_9; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_9() { return &___isEnabled_9; }
	inline void set_isEnabled_9(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_9 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_10() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___isMarkedDestroyed_10)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_10() const { return ___isMarkedDestroyed_10; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_10() { return &___isMarkedDestroyed_10; }
	inline void set_isMarkedDestroyed_10(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_10 = value;
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
	}
};


// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale
struct ExperienceScale_t8635D4021890BD6566EBAC2F6143BDA554B395AD 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExperienceScale_t8635D4021890BD6566EBAC2F6143BDA554B395AD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* ___buckets_10;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_11;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_12;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_13;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_20;

public:
	inline static int32_t get_offset_of_buckets_10() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___buckets_10)); }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* get_buckets_10() const { return ___buckets_10; }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190** get_address_of_buckets_10() { return &___buckets_10; }
	inline void set_buckets_10(bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* value)
	{
		___buckets_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_10), (void*)value);
	}

	inline static int32_t get_offset_of_count_11() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___count_11)); }
	inline int32_t get_count_11() const { return ___count_11; }
	inline int32_t* get_address_of_count_11() { return &___count_11; }
	inline void set_count_11(int32_t value)
	{
		___count_11 = value;
	}

	inline static int32_t get_offset_of_occupancy_12() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___occupancy_12)); }
	inline int32_t get_occupancy_12() const { return ___occupancy_12; }
	inline int32_t* get_address_of_occupancy_12() { return &___occupancy_12; }
	inline void set_occupancy_12(int32_t value)
	{
		___occupancy_12 = value;
	}

	inline static int32_t get_offset_of_loadsize_13() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadsize_13)); }
	inline int32_t get_loadsize_13() const { return ___loadsize_13; }
	inline int32_t* get_address_of_loadsize_13() { return &___loadsize_13; }
	inline void set_loadsize_13(int32_t value)
	{
		___loadsize_13 = value;
	}

	inline static int32_t get_offset_of_loadFactor_14() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadFactor_14)); }
	inline float get_loadFactor_14() const { return ___loadFactor_14; }
	inline float* get_address_of_loadFactor_14() { return &___loadFactor_14; }
	inline void set_loadFactor_14(float value)
	{
		___loadFactor_14 = value;
	}

	inline static int32_t get_offset_of_version_15() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___version_15)); }
	inline int32_t get_version_15() const { return ___version_15; }
	inline int32_t* get_address_of_version_15() { return &___version_15; }
	inline void set_version_15(int32_t value)
	{
		___version_15 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_16() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___isWriterInProgress_16)); }
	inline bool get_isWriterInProgress_16() const { return ___isWriterInProgress_16; }
	inline bool* get_address_of_isWriterInProgress_16() { return &___isWriterInProgress_16; }
	inline void set_isWriterInProgress_16(bool value)
	{
		___isWriterInProgress_16 = value;
	}

	inline static int32_t get_offset_of_keys_17() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___keys_17)); }
	inline RuntimeObject* get_keys_17() const { return ___keys_17; }
	inline RuntimeObject** get_address_of_keys_17() { return &___keys_17; }
	inline void set_keys_17(RuntimeObject* value)
	{
		___keys_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_17), (void*)value);
	}

	inline static int32_t get_offset_of_values_18() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___values_18)); }
	inline RuntimeObject* get_values_18() const { return ___values_18; }
	inline RuntimeObject** get_address_of_values_18() { return &___values_18; }
	inline void set_values_18(RuntimeObject* value)
	{
		___values_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_18), (void*)value);
	}

	inline static int32_t get_offset_of__keycomparer_19() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____keycomparer_19)); }
	inline RuntimeObject* get__keycomparer_19() const { return ____keycomparer_19; }
	inline RuntimeObject** get_address_of__keycomparer_19() { return &____keycomparer_19; }
	inline void set__keycomparer_19(RuntimeObject* value)
	{
		____keycomparer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keycomparer_19), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_20() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____syncRoot_20)); }
	inline RuntimeObject * get__syncRoot_20() const { return ____syncRoot_20; }
	inline RuntimeObject ** get_address_of__syncRoot_20() { return &____syncRoot_20; }
	inline void set__syncRoot_20(RuntimeObject * value)
	{
		____syncRoot_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_20), (void*)value);
	}
};

// System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess
struct NOVTABLE IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBufferByteAccess_GetBuffer_m8F6F0F782B7EA90FC90602224E5817AF96A568A9(intptr_t* comReturnValue) = 0;
};

// UnityEngine.InputSystem.LowLevel.IMECompositionString
struct IMECompositionString_t42ECE0DA43AE6DB97ED39288E2EA4C66F4BF2326 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Int32 UnityEngine.InputSystem.LowLevel.IMECompositionString::size
					int32_t ___size_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___size_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buffer_1_OffsetPadding[4];
					// UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer UnityEngine.InputSystem.LowLevel.IMECompositionString::buffer
					U3CbufferU3Ee__FixedBuffer_t730F25E28C11E82BBDDD3D0F2F6B9ADC1FDD5D5F  ___buffer_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buffer_1_OffsetPadding_forAlignmentOnly[4];
					U3CbufferU3Ee__FixedBuffer_t730F25E28C11E82BBDDD3D0F2F6B9ADC1FDD5D5F  ___buffer_1_forAlignmentOnly;
				};
			};
		};
		uint8_t IMECompositionString_t42ECE0DA43AE6DB97ED39288E2EA4C66F4BF2326__padding[132];
	};

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(IMECompositionString_t42ECE0DA43AE6DB97ED39288E2EA4C66F4BF2326, ___size_0)); }
	inline int32_t get_size_0() const { return ___size_0; }
	inline int32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(int32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(IMECompositionString_t42ECE0DA43AE6DB97ED39288E2EA4C66F4BF2326, ___buffer_1)); }
	inline U3CbufferU3Ee__FixedBuffer_t730F25E28C11E82BBDDD3D0F2F6B9ADC1FDD5D5F  get_buffer_1() const { return ___buffer_1; }
	inline U3CbufferU3Ee__FixedBuffer_t730F25E28C11E82BBDDD3D0F2F6B9ADC1FDD5D5F * get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(U3CbufferU3Ee__FixedBuffer_t730F25E28C11E82BBDDD3D0F2F6B9ADC1FDD5D5F  value)
	{
		___buffer_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString
struct IMECompositionString_t42ECE0DA43AE6DB97ED39288E2EA4C66F4BF2326_marshaled_pinvoke
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___size_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___size_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buffer_1_OffsetPadding[4];
					U3CbufferU3Ee__FixedBuffer_t730F25E28C11E82BBDDD3D0F2F6B9ADC1FDD5D5F_marshaled_pinvoke ___buffer_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buffer_1_OffsetPadding_forAlignmentOnly[4];
					U3CbufferU3Ee__FixedBuffer_t730F25E28C11E82BBDDD3D0F2F6B9ADC1FDD5D5F_marshaled_pinvoke ___buffer_1_forAlignmentOnly;
				};
			};
		};
		uint8_t IMECompositionString_t42ECE0DA43AE6DB97ED39288E2EA4C66F4BF2326__padding[132];
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString
struct IMECompositionString_t42ECE0DA43AE6DB97ED39288E2EA4C66F4BF2326_marshaled_com
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___size_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___size_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buffer_1_OffsetPadding[4];
					U3CbufferU3Ee__FixedBuffer_t730F25E28C11E82BBDDD3D0F2F6B9ADC1FDD5D5F_marshaled_com ___buffer_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buffer_1_OffsetPadding_forAlignmentOnly[4];
					U3CbufferU3Ee__FixedBuffer_t730F25E28C11E82BBDDD3D0F2F6B9ADC1FDD5D5F_marshaled_com ___buffer_1_forAlignmentOnly;
				};
			};
		};
		uint8_t IMECompositionString_t42ECE0DA43AE6DB97ED39288E2EA4C66F4BF2326__padding[132];
	};
};
// System.Runtime.InteropServices.IMarshal
struct NOVTABLE IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetUnmarshalClass_m8E46B958BDAD31CAB4469F61769C4A43CEE851B0(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetMarshalSizeMax_mF0954EED35E28BBA1CE5D782B9468FAFA2794CE7(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_MarshalInterface_mA481A30479B4E39647B608B7ED40FB7AEB302A68(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_UnmarshalInterface_m535C6AE1A1625CCBEE16A8AADD6FA0228668B5AF(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_ReleaseMarshalData_m99BFE51BA91305E8BDDBAE578DE0DE99A1FA626F(intptr_t ___pStm0) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_DisconnectObject_m7B4B9C315995DCCA208E1681D8747ED4005BAC30(uint32_t ___dwReserved0) = 0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel
struct RecognitionConfidenceLevel_t5E3D9BFFCECBCC8588F02F2EBA4B71AB534B525D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognitionConfidenceLevel_t5E3D9BFFCECBCC8588F02F2EBA4B71AB534B525D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.Remoting.RemotingVideoCodec
struct RemotingVideoCodec_t14B3E68A0A793E6225C9B119D63F55E0CD4D34BF 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.RemotingVideoCodec::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RemotingVideoCodec_t14B3E68A0A793E6225C9B119D63F55E0CD4D34BF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions
struct SpatialAwarenessMeshDisplayOptions_t52B5EF15035B3B4E9730D18D55C39B002AAFEDED 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshDisplayOptions_t52B5EF15035B3B4E9730D18D55C39B002AAFEDED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail
struct SpatialAwarenessMeshLevelOfDetail_t44282F26EC5DB1B8FA50BFED8F7D447D9D503C19 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshLevelOfDetail_t44282F26EC5DB1B8FA50BFED8F7D447D9D503C19, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes
struct SpatialAwarenessSurfaceTypes_tD276ABAB4DC7F97729F7C70558091B45225D0B7A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessSurfaceTypes_tD276ABAB4DC7F97729F7C70558091B45225D0B7A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.VFX.VFXEventAttribute::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Boolean UnityEngine.VFX.VFXEventAttribute::m_Owner
	bool ___m_Owner_1;
	// UnityEngine.VFX.VisualEffectAsset UnityEngine.VFX.VFXEventAttribute::m_VfxAsset
	VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * ___m_VfxAsset_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Owner_1() { return static_cast<int32_t>(offsetof(VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF, ___m_Owner_1)); }
	inline bool get_m_Owner_1() const { return ___m_Owner_1; }
	inline bool* get_address_of_m_Owner_1() { return &___m_Owner_1; }
	inline void set_m_Owner_1(bool value)
	{
		___m_Owner_1 = value;
	}

	inline static int32_t get_offset_of_m_VfxAsset_2() { return static_cast<int32_t>(offsetof(VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF, ___m_VfxAsset_2)); }
	inline VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * get_m_VfxAsset_2() const { return ___m_VfxAsset_2; }
	inline VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 ** get_address_of_m_VfxAsset_2() { return &___m_VfxAsset_2; }
	inline void set_m_VfxAsset_2(VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * value)
	{
		___m_VfxAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VfxAsset_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
	VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * ___m_VfxAsset_2;
};
// Native definition for COM marshalling of UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
	VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * ___m_VfxAsset_2;
};

// UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.VFX.VFXSpawnerState::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Boolean UnityEngine.VFX.VFXSpawnerState::m_Owner
	bool ___m_Owner_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Owner_1() { return static_cast<int32_t>(offsetof(VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD, ___m_Owner_1)); }
	inline bool get_m_Owner_1() const { return ___m_Owner_1; }
	inline bool* get_address_of_m_Owner_1() { return &___m_Owner_1; }
	inline void set_m_Owner_1(bool value)
	{
		___m_Owner_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_marshaled_com
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
};

// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Positions_0)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_Positions_0() const { return ___m_Positions_0; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_Positions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Colors_1() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Colors_1)); }
	inline List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * get_m_Colors_1() const { return ___m_Colors_1; }
	inline List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 ** get_address_of_m_Colors_1() { return &___m_Colors_1; }
	inline void set_m_Colors_1(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * value)
	{
		___m_Colors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Colors_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv0S_2() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv0S_2)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv0S_2() const { return ___m_Uv0S_2; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv0S_2() { return &___m_Uv0S_2; }
	inline void set_m_Uv0S_2(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv0S_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv0S_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv1S_3() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv1S_3)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv1S_3() const { return ___m_Uv1S_3; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv1S_3() { return &___m_Uv1S_3; }
	inline void set_m_Uv1S_3(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv1S_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv1S_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv2S_4() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv2S_4)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv2S_4() const { return ___m_Uv2S_4; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv2S_4() { return &___m_Uv2S_4; }
	inline void set_m_Uv2S_4(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv2S_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv2S_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv3S_5() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv3S_5)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv3S_5() const { return ___m_Uv3S_5; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv3S_5() { return &___m_Uv3S_5; }
	inline void set_m_Uv3S_5(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv3S_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv3S_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Normals_6() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Normals_6)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_Normals_6() const { return ___m_Normals_6; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_Normals_6() { return &___m_Normals_6; }
	inline void set_m_Normals_6(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_Normals_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normals_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tangents_7() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Tangents_7)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Tangents_7() const { return ___m_Tangents_7; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Tangents_7() { return &___m_Tangents_7; }
	inline void set_m_Tangents_7(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Tangents_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tangents_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Indices_8() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Indices_8)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_m_Indices_8() const { return ___m_Indices_8; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_m_Indices_8() { return &___m_Indices_8; }
	inline void set_m_Indices_8(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___m_Indices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Indices_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ListsInitalized_11() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_ListsInitalized_11)); }
	inline bool get_m_ListsInitalized_11() const { return ___m_ListsInitalized_11; }
	inline bool* get_address_of_m_ListsInitalized_11() { return &___m_ListsInitalized_11; }
	inline void set_m_ListsInitalized_11(bool value)
	{
		___m_ListsInitalized_11 = value;
	}
};

struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s_DefaultNormal_10;

public:
	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_10() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields, ___s_DefaultNormal_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_s_DefaultNormal_10() const { return ___s_DefaultNormal_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_s_DefaultNormal_10() { return &___s_DefaultNormal_10; }
	inline void set_s_DefaultNormal_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___s_DefaultNormal_10 = value;
	}
};


// UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.WebCam.VideoCapture::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_StaticFields
{
public:
	// System.Int64 UnityEngine.Windows.WebCam.VideoCapture::HR_SUCCESS
	int64_t ___HR_SUCCESS_1;

public:
	inline static int32_t get_offset_of_HR_SUCCESS_1() { return static_cast<int32_t>(offsetof(VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_StaticFields, ___HR_SUCCESS_1)); }
	inline int64_t get_HR_SUCCESS_1() const { return ___HR_SUCCESS_1; }
	inline int64_t* get_address_of_HR_SUCCESS_1() { return &___HR_SUCCESS_1; }
	inline void set_HR_SUCCESS_1(int64_t value)
	{
		___HR_SUCCESS_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};

// Microsoft.MixedReality.Toolkit.Utilities.VolumeType
struct VolumeType_t9D95A54643DA66E1BE571ABE42718CB880F88C51 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_t9D95A54643DA66E1BE571ABE42718CB880F88C51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.WinRtToNetFxStreamAdapter
struct WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.WinRtToNetFxStreamAdapter::_oneByteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____oneByteBuffer_4;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_5;
	// System.Object System.IO.WinRtToNetFxStreamAdapter::_winRtStream
	RuntimeObject * ____winRtStream_6;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canRead
	bool ____canRead_7;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canWrite
	bool ____canWrite_8;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canSeek
	bool ____canSeek_9;

public:
	inline static int32_t get_offset_of__oneByteBuffer_4() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____oneByteBuffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__oneByteBuffer_4() const { return ____oneByteBuffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__oneByteBuffer_4() { return &____oneByteBuffer_4; }
	inline void set__oneByteBuffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____oneByteBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____oneByteBuffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__leaveUnderlyingStreamOpen_5() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____leaveUnderlyingStreamOpen_5)); }
	inline bool get__leaveUnderlyingStreamOpen_5() const { return ____leaveUnderlyingStreamOpen_5; }
	inline bool* get_address_of__leaveUnderlyingStreamOpen_5() { return &____leaveUnderlyingStreamOpen_5; }
	inline void set__leaveUnderlyingStreamOpen_5(bool value)
	{
		____leaveUnderlyingStreamOpen_5 = value;
	}

	inline static int32_t get_offset_of__winRtStream_6() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____winRtStream_6)); }
	inline RuntimeObject * get__winRtStream_6() const { return ____winRtStream_6; }
	inline RuntimeObject ** get_address_of__winRtStream_6() { return &____winRtStream_6; }
	inline void set__winRtStream_6(RuntimeObject * value)
	{
		____winRtStream_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____winRtStream_6), (void*)value);
	}

	inline static int32_t get_offset_of__canRead_7() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____canRead_7)); }
	inline bool get__canRead_7() const { return ____canRead_7; }
	inline bool* get_address_of__canRead_7() { return &____canRead_7; }
	inline void set__canRead_7(bool value)
	{
		____canRead_7 = value;
	}

	inline static int32_t get_offset_of__canWrite_8() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____canWrite_8)); }
	inline bool get__canWrite_8() const { return ____canWrite_8; }
	inline bool* get_address_of__canWrite_8() { return &____canWrite_8; }
	inline void set__canWrite_8(bool value)
	{
		____canWrite_8 = value;
	}

	inline static int32_t get_offset_of__canSeek_9() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____canSeek_9)); }
	inline bool get__canSeek_9() const { return ____canSeek_9; }
	inline bool* get_address_of__canSeek_9() { return &____canSeek_9; }
	inline void set__canSeek_9(bool value)
	{
		____canSeek_9 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129  : public RuntimeObject
{
public:
	// System.Byte[] System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____data_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_dataStartOffs
	int32_t ____dataStartOffs_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_usefulDataLength
	int32_t ____usefulDataLength_3;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_maxDataCapacity
	int32_t ____maxDataCapacity_4;
	// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_pinHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____pinHandle_5;
	// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_dataPtr
	intptr_t ____dataPtr_6;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____data_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__data_1() const { return ____data_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_1), (void*)value);
	}

	inline static int32_t get_offset_of__dataStartOffs_2() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____dataStartOffs_2)); }
	inline int32_t get__dataStartOffs_2() const { return ____dataStartOffs_2; }
	inline int32_t* get_address_of__dataStartOffs_2() { return &____dataStartOffs_2; }
	inline void set__dataStartOffs_2(int32_t value)
	{
		____dataStartOffs_2 = value;
	}

	inline static int32_t get_offset_of__usefulDataLength_3() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____usefulDataLength_3)); }
	inline int32_t get__usefulDataLength_3() const { return ____usefulDataLength_3; }
	inline int32_t* get_address_of__usefulDataLength_3() { return &____usefulDataLength_3; }
	inline void set__usefulDataLength_3(int32_t value)
	{
		____usefulDataLength_3 = value;
	}

	inline static int32_t get_offset_of__maxDataCapacity_4() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____maxDataCapacity_4)); }
	inline int32_t get__maxDataCapacity_4() const { return ____maxDataCapacity_4; }
	inline int32_t* get_address_of__maxDataCapacity_4() { return &____maxDataCapacity_4; }
	inline void set__maxDataCapacity_4(int32_t value)
	{
		____maxDataCapacity_4 = value;
	}

	inline static int32_t get_offset_of__pinHandle_5() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____pinHandle_5)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__pinHandle_5() const { return ____pinHandle_5; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__pinHandle_5() { return &____pinHandle_5; }
	inline void set__pinHandle_5(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____pinHandle_5 = value;
	}

	inline static int32_t get_offset_of__dataPtr_6() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____dataPtr_6)); }
	inline intptr_t get__dataPtr_6() const { return ____dataPtr_6; }
	inline intptr_t* get_address_of__dataPtr_6() { return &____dataPtr_6; }
	inline void set__dataPtr_6(intptr_t value)
	{
		____dataPtr_6 = value;
	}
};

struct WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ThreadStaticFields
{
public:
	// System.Runtime.InteropServices.IMarshal System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::s_winRtMarshalProxy
	RuntimeObject* ___s_winRtMarshalProxy_0;

public:
	inline static int32_t get_offset_of_s_winRtMarshalProxy_0() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ThreadStaticFields, ___s_winRtMarshalProxy_0)); }
	inline RuntimeObject* get_s_winRtMarshalProxy_0() const { return ___s_winRtMarshalProxy_0; }
	inline RuntimeObject** get_address_of_s_winRtMarshalProxy_0() { return &___s_winRtMarshalProxy_0; }
	inline void set_s_winRtMarshalProxy_0(RuntimeObject* value)
	{
		___s_winRtMarshalProxy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_winRtMarshalProxy_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7
struct U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491  : public RuntimeObject
{
public:
	// System.Int32 System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Tuple`2<System.Int32,System.Int32> System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<>2__current
	Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * ___U3CU3E2__current_1;
	// System.Int32 System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Diagnostics.Tracing.ActivityFilter System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<>4__this
	ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * ___U3CU3E4__this_3;
	// System.Guid System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::sourceGuid
	Guid_t  ___sourceGuid_4;
	// System.Guid System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<>3__sourceGuid
	Guid_t  ___U3CU3E3__sourceGuid_5;
	// System.Diagnostics.Tracing.ActivityFilter System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<af>5__1
	ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * ___U3CafU3E5__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CU3E2__current_1)); }
	inline Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CU3E4__this_3)); }
	inline ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_sourceGuid_4() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___sourceGuid_4)); }
	inline Guid_t  get_sourceGuid_4() const { return ___sourceGuid_4; }
	inline Guid_t * get_address_of_sourceGuid_4() { return &___sourceGuid_4; }
	inline void set_sourceGuid_4(Guid_t  value)
	{
		___sourceGuid_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__sourceGuid_5() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CU3E3__sourceGuid_5)); }
	inline Guid_t  get_U3CU3E3__sourceGuid_5() const { return ___U3CU3E3__sourceGuid_5; }
	inline Guid_t * get_address_of_U3CU3E3__sourceGuid_5() { return &___U3CU3E3__sourceGuid_5; }
	inline void set_U3CU3E3__sourceGuid_5(Guid_t  value)
	{
		___U3CU3E3__sourceGuid_5 = value;
	}

	inline static int32_t get_offset_of_U3CafU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CafU3E5__1_6)); }
	inline ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * get_U3CafU3E5__1_6() const { return ___U3CafU3E5__1_6; }
	inline ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 ** get_address_of_U3CafU3E5__1_6() { return &___U3CafU3E5__1_6; }
	inline void set_U3CafU3E5__1_6(ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * value)
	{
		___U3CafU3E5__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CafU3E5__1_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<ComputeHeatmapAt>d__20
struct U3CComputeHeatmapAtU3Ed__20_t8F7D6FFED7BF9E5B04BFC8E3EB214663EE8AA18E  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<ComputeHeatmapAt>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<ComputeHeatmapAt>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<ComputeHeatmapAt>d__20::currPosUV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___currPosUV_2;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<ComputeHeatmapAt>d__20::<>4__this
	DrawOnTexture_t74F60E93A229405A2E1320A6768C620442836B39 * ___U3CU3E4__this_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<ComputeHeatmapAt>d__20::positiveX
	bool ___positiveX_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<ComputeHeatmapAt>d__20::positiveY
	bool ___positiveY_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CComputeHeatmapAtU3Ed__20_t8F7D6FFED7BF9E5B04BFC8E3EB214663EE8AA18E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CComputeHeatmapAtU3Ed__20_t8F7D6FFED7BF9E5B04BFC8E3EB214663EE8AA18E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_currPosUV_2() { return static_cast<int32_t>(offsetof(U3CComputeHeatmapAtU3Ed__20_t8F7D6FFED7BF9E5B04BFC8E3EB214663EE8AA18E, ___currPosUV_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_currPosUV_2() const { return ___currPosUV_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_currPosUV_2() { return &___currPosUV_2; }
	inline void set_currPosUV_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___currPosUV_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CComputeHeatmapAtU3Ed__20_t8F7D6FFED7BF9E5B04BFC8E3EB214663EE8AA18E, ___U3CU3E4__this_3)); }
	inline DrawOnTexture_t74F60E93A229405A2E1320A6768C620442836B39 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline DrawOnTexture_t74F60E93A229405A2E1320A6768C620442836B39 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(DrawOnTexture_t74F60E93A229405A2E1320A6768C620442836B39 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveX_4() { return static_cast<int32_t>(offsetof(U3CComputeHeatmapAtU3Ed__20_t8F7D6FFED7BF9E5B04BFC8E3EB214663EE8AA18E, ___positiveX_4)); }
	inline bool get_positiveX_4() const { return ___positiveX_4; }
	inline bool* get_address_of_positiveX_4() { return &___positiveX_4; }
	inline void set_positiveX_4(bool value)
	{
		___positiveX_4 = value;
	}

	inline static int32_t get_offset_of_positiveY_5() { return static_cast<int32_t>(offsetof(U3CComputeHeatmapAtU3Ed__20_t8F7D6FFED7BF9E5B04BFC8E3EB214663EE8AA18E, ___positiveY_5)); }
	inline bool get_positiveY_5() const { return ___positiveY_5; }
	inline bool* get_address_of_positiveY_5() { return &___positiveY_5; }
	inline void set_positiveY_5(bool value)
	{
		___positiveY_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<DrawAt>d__19
struct U3CDrawAtU3Ed__19_tAF6FC7CAE12609EC0810109A147B784DC92A01A7  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<DrawAt>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<DrawAt>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<DrawAt>d__19::<>4__this
	DrawOnTexture_t74F60E93A229405A2E1320A6768C620442836B39 * ___U3CU3E4__this_2;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<DrawAt>d__19::posUV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___posUV_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDrawAtU3Ed__19_tAF6FC7CAE12609EC0810109A147B784DC92A01A7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDrawAtU3Ed__19_tAF6FC7CAE12609EC0810109A147B784DC92A01A7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDrawAtU3Ed__19_tAF6FC7CAE12609EC0810109A147B784DC92A01A7, ___U3CU3E4__this_2)); }
	inline DrawOnTexture_t74F60E93A229405A2E1320A6768C620442836B39 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DrawOnTexture_t74F60E93A229405A2E1320A6768C620442836B39 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DrawOnTexture_t74F60E93A229405A2E1320A6768C620442836B39 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_posUV_3() { return static_cast<int32_t>(offsetof(U3CDrawAtU3Ed__19_tAF6FC7CAE12609EC0810109A147B784DC92A01A7, ___posUV_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_posUV_3() const { return ___posUV_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_posUV_3() { return &___posUV_3; }
	inline void set_posUV_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___posUV_3 = value;
	}
};


// System.Diagnostics.Tracing.EventPayload/<GetEnumerator>d__17
struct U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD  : public RuntimeObject
{
public:
	// System.Int32 System.Diagnostics.Tracing.EventPayload/<GetEnumerator>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> System.Diagnostics.Tracing.EventPayload/<GetEnumerator>d__17::<>2__current
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  ___U3CU3E2__current_1;
	// System.Diagnostics.Tracing.EventPayload System.Diagnostics.Tracing.EventPayload/<GetEnumerator>d__17::<>4__this
	EventPayload_t43BB09A63B3B7D1DDA3D998D4167167A8443BEFA * ___U3CU3E4__this_2;
	// System.Int32 System.Diagnostics.Tracing.EventPayload/<GetEnumerator>d__17::<i>5__1
	int32_t ___U3CiU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD, ___U3CU3E4__this_2)); }
	inline EventPayload_t43BB09A63B3B7D1DDA3D998D4167167A8443BEFA * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline EventPayload_t43BB09A63B3B7D1DDA3D998D4167167A8443BEFA ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(EventPayload_t43BB09A63B3B7D1DDA3D998D4167167A8443BEFA * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD, ___U3CiU3E5__1_3)); }
	inline int32_t get_U3CiU3E5__1_3() const { return ___U3CiU3E5__1_3; }
	inline int32_t* get_address_of_U3CiU3E5__1_3() { return &___U3CiU3E5__1_3; }
	inline void set_U3CiU3E5__1_3(int32_t value)
	{
		___U3CiU3E5__1_3 = value;
	}
};


// System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode
struct WriteEventErrorCode_tBC26AED9CF2B3FB2A599E68EA076E136A9F92CEA 
{
public:
	// System.Int32 System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WriteEventErrorCode_tBC26AED9CF2B3FB2A599E68EA076E136A9F92CEA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11
struct U3CGetAllHandPositionsU3Ed__11_tB8C18D127800092F10EDD6ED060F0200B51453EC  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11::<>2__current
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.UI.GazeHandHelper Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11::<>4__this
	GazeHandHelper_tB51A5D2BD3917F9AC38903D0D2EDED65FC75B4CC * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt32,System.Boolean> Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11::<>7__wrap1
	Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6  ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAllHandPositionsU3Ed__11_tB8C18D127800092F10EDD6ED060F0200B51453EC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAllHandPositionsU3Ed__11_tB8C18D127800092F10EDD6ED060F0200B51453EC, ___U3CU3E2__current_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetAllHandPositionsU3Ed__11_tB8C18D127800092F10EDD6ED060F0200B51453EC, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetAllHandPositionsU3Ed__11_tB8C18D127800092F10EDD6ED060F0200B51453EC, ___U3CU3E4__this_3)); }
	inline GazeHandHelper_tB51A5D2BD3917F9AC38903D0D2EDED65FC75B4CC * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GazeHandHelper_tB51A5D2BD3917F9AC38903D0D2EDED65FC75B4CC ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GazeHandHelper_tB51A5D2BD3917F9AC38903D0D2EDED65FC75B4CC * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CGetAllHandPositionsU3Ed__11_tB8C18D127800092F10EDD6ED060F0200B51453EC, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6 * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___dictionary_0), (void*)NULL);
	}
};


// UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31
struct U3CGetEnumeratorU3Ed__31_tE1253F5510F24171181A71B4D87807F415DB1C4A  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<>2__current
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * ___U3CU3E2__current_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<>4__this
	InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * ___U3CU3E4__this_2;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<i>5__2
	int32_t ___U3CiU3E5__2_3;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<actions>5__3
	ReadOnlyArray_1_t1A7D980C21C71555DD2BFB1402F87665F3580ED4  ___U3CactionsU3E5__3_4;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<actionCount>5__4
	int32_t ___U3CactionCountU3E5__4_5;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<n>5__5
	int32_t ___U3CnU3E5__5_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__31_tE1253F5510F24171181A71B4D87807F415DB1C4A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__31_tE1253F5510F24171181A71B4D87807F415DB1C4A, ___U3CU3E2__current_1)); }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__31_tE1253F5510F24171181A71B4D87807F415DB1C4A, ___U3CU3E4__this_2)); }
	inline InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__31_tE1253F5510F24171181A71B4D87807F415DB1C4A, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CactionsU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__31_tE1253F5510F24171181A71B4D87807F415DB1C4A, ___U3CactionsU3E5__3_4)); }
	inline ReadOnlyArray_1_t1A7D980C21C71555DD2BFB1402F87665F3580ED4  get_U3CactionsU3E5__3_4() const { return ___U3CactionsU3E5__3_4; }
	inline ReadOnlyArray_1_t1A7D980C21C71555DD2BFB1402F87665F3580ED4 * get_address_of_U3CactionsU3E5__3_4() { return &___U3CactionsU3E5__3_4; }
	inline void set_U3CactionsU3E5__3_4(ReadOnlyArray_1_t1A7D980C21C71555DD2BFB1402F87665F3580ED4  value)
	{
		___U3CactionsU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CactionsU3E5__3_4))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CactionCountU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__31_tE1253F5510F24171181A71B4D87807F415DB1C4A, ___U3CactionCountU3E5__4_5)); }
	inline int32_t get_U3CactionCountU3E5__4_5() const { return ___U3CactionCountU3E5__4_5; }
	inline int32_t* get_address_of_U3CactionCountU3E5__4_5() { return &___U3CactionCountU3E5__4_5; }
	inline void set_U3CactionCountU3E5__4_5(int32_t value)
	{
		___U3CactionCountU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CnU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__31_tE1253F5510F24171181A71B4D87807F415DB1C4A, ___U3CnU3E5__5_6)); }
	inline int32_t get_U3CnU3E5__5_6() const { return ___U3CnU3E5__5_6; }
	inline int32_t* get_address_of_U3CnU3E5__5_6() { return &___U3CnU3E5__5_6; }
	inline void set_U3CnU3E5__5_6(int32_t value)
	{
		___U3CnU3E5__5_6 = value;
	}
};


// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_t904B93767740996C64FD20D5C1425440048E7BBF 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t904B93767740996C64FD20D5C1425440048E7BBF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags
struct Flags_t46A486E2DB0EE268818D207578A4F2BEAB17BE0A 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t46A486E2DB0EE268818D207578A4F2BEAB17BE0A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct BaseDataProvider_1_tE3B2A984DE10A3776A20BD1233716F00AB8137AD  : public BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tE3B2A984DE10A3776A20BD1233716F00AB8137AD, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tE3B2A984DE10A3776A20BD1233716F00AB8137AD, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t5DB3231FD37A2CCF293DD0B9C73000370D729468  : public BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t5DB3231FD37A2CCF293DD0B9C73000370D729468, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t5DB3231FD37A2CCF293DD0B9C73000370D729468, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>
struct BaseDataProvider_1_t34B47B4B23709AF9474686DD4F3788244D1271A9  : public BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t34B47B4B23709AF9474686DD4F3788244D1271A9, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t34B47B4B23709AF9474686DD4F3788244D1271A9, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5  : public BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_13;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_14;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_tCBCC559E472FFE1F547661BA38961FEA157E610E * ___postponedActions_15;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_t3FD44D9B4073D45F5043F02E045D2D7AE8A81481 * ___postponedObjectActions_16;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t2DCDF01C81B9244A5794A0927B4527FEFA140173 * ___U3CEventHandlersByTypeU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___U3CEventListenersU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_13() { return static_cast<int32_t>(offsetof(BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5, ___eventExecutionDepth_13)); }
	inline int32_t get_eventExecutionDepth_13() const { return ___eventExecutionDepth_13; }
	inline int32_t* get_address_of_eventExecutionDepth_13() { return &___eventExecutionDepth_13; }
	inline void set_eventExecutionDepth_13(int32_t value)
	{
		___eventExecutionDepth_13 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_14() { return static_cast<int32_t>(offsetof(BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5, ___eventSystemHandlerType_14)); }
	inline Type_t * get_eventSystemHandlerType_14() const { return ___eventSystemHandlerType_14; }
	inline Type_t ** get_address_of_eventSystemHandlerType_14() { return &___eventSystemHandlerType_14; }
	inline void set_eventSystemHandlerType_14(Type_t * value)
	{
		___eventSystemHandlerType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_14), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_15() { return static_cast<int32_t>(offsetof(BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5, ___postponedActions_15)); }
	inline List_1_tCBCC559E472FFE1F547661BA38961FEA157E610E * get_postponedActions_15() const { return ___postponedActions_15; }
	inline List_1_tCBCC559E472FFE1F547661BA38961FEA157E610E ** get_address_of_postponedActions_15() { return &___postponedActions_15; }
	inline void set_postponedActions_15(List_1_tCBCC559E472FFE1F547661BA38961FEA157E610E * value)
	{
		___postponedActions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_15), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_16() { return static_cast<int32_t>(offsetof(BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5, ___postponedObjectActions_16)); }
	inline List_1_t3FD44D9B4073D45F5043F02E045D2D7AE8A81481 * get_postponedObjectActions_16() const { return ___postponedObjectActions_16; }
	inline List_1_t3FD44D9B4073D45F5043F02E045D2D7AE8A81481 ** get_address_of_postponedObjectActions_16() { return &___postponedObjectActions_16; }
	inline void set_postponedObjectActions_16(List_1_t3FD44D9B4073D45F5043F02E045D2D7AE8A81481 * value)
	{
		___postponedObjectActions_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5, ___U3CEventHandlersByTypeU3Ek__BackingField_17)); }
	inline Dictionary_2_t2DCDF01C81B9244A5794A0927B4527FEFA140173 * get_U3CEventHandlersByTypeU3Ek__BackingField_17() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_17; }
	inline Dictionary_2_t2DCDF01C81B9244A5794A0927B4527FEFA140173 ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_17() { return &___U3CEventHandlersByTypeU3Ek__BackingField_17; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_17(Dictionary_2_t2DCDF01C81B9244A5794A0927B4527FEFA140173 * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5, ___U3CEventListenersU3Ek__BackingField_18)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_U3CEventListenersU3Ek__BackingField_18() const { return ___U3CEventListenersU3Ek__BackingField_18; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_U3CEventListenersU3Ek__BackingField_18() { return &___U3CEventListenersU3Ek__BackingField_18; }
	inline void set_U3CEventListenersU3Ek__BackingField_18(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___U3CEventListenersU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_18), (void*)value);
	}
};

struct BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TraverseEventSystemHandlerHierarchyPerfMarker_19;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5_StaticFields, ___enableDanglingHandlerDiagnostics_12)); }
	inline bool get_enableDanglingHandlerDiagnostics_12() const { return ___enableDanglingHandlerDiagnostics_12; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_12() { return &___enableDanglingHandlerDiagnostics_12; }
	inline void set_enableDanglingHandlerDiagnostics_12(bool value)
	{
		___enableDanglingHandlerDiagnostics_12 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_19() { return static_cast<int32_t>(offsetof(BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TraverseEventSystemHandlerHierarchyPerfMarker_19() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_19() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_19; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_19 = value;
	}
};


// System.Diagnostics.Tracing.EventProvider
struct EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589  : public RuntimeObject
{
public:
	// Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback System.Diagnostics.Tracing.EventProvider::m_etwCallback
	EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA * ___m_etwCallback_1;
	// System.Runtime.InteropServices.GCHandle System.Diagnostics.Tracing.EventProvider::m_thisGCHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___m_thisGCHandle_2;
	// System.Int64 System.Diagnostics.Tracing.EventProvider::m_regHandle
	int64_t ___m_regHandle_3;
	// System.Byte System.Diagnostics.Tracing.EventProvider::m_level
	uint8_t ___m_level_4;
	// System.Int64 System.Diagnostics.Tracing.EventProvider::m_anyKeywordMask
	int64_t ___m_anyKeywordMask_5;
	// System.Int64 System.Diagnostics.Tracing.EventProvider::m_allKeywordMask
	int64_t ___m_allKeywordMask_6;
	// System.Collections.Generic.List`1<System.Diagnostics.Tracing.EventProvider/SessionInfo> System.Diagnostics.Tracing.EventProvider::m_liveSessions
	List_1_t53BBC0AA893BF75B4925CA24EBF5975C942A4D17 * ___m_liveSessions_7;
	// System.Boolean System.Diagnostics.Tracing.EventProvider::m_enabled
	bool ___m_enabled_8;
	// System.Guid System.Diagnostics.Tracing.EventProvider::m_providerId
	Guid_t  ___m_providerId_9;
	// System.Boolean System.Diagnostics.Tracing.EventProvider::m_disposed
	bool ___m_disposed_10;

public:
	inline static int32_t get_offset_of_m_etwCallback_1() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_etwCallback_1)); }
	inline EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA * get_m_etwCallback_1() const { return ___m_etwCallback_1; }
	inline EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA ** get_address_of_m_etwCallback_1() { return &___m_etwCallback_1; }
	inline void set_m_etwCallback_1(EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA * value)
	{
		___m_etwCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_etwCallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_thisGCHandle_2() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_thisGCHandle_2)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_m_thisGCHandle_2() const { return ___m_thisGCHandle_2; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_m_thisGCHandle_2() { return &___m_thisGCHandle_2; }
	inline void set_m_thisGCHandle_2(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___m_thisGCHandle_2 = value;
	}

	inline static int32_t get_offset_of_m_regHandle_3() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_regHandle_3)); }
	inline int64_t get_m_regHandle_3() const { return ___m_regHandle_3; }
	inline int64_t* get_address_of_m_regHandle_3() { return &___m_regHandle_3; }
	inline void set_m_regHandle_3(int64_t value)
	{
		___m_regHandle_3 = value;
	}

	inline static int32_t get_offset_of_m_level_4() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_level_4)); }
	inline uint8_t get_m_level_4() const { return ___m_level_4; }
	inline uint8_t* get_address_of_m_level_4() { return &___m_level_4; }
	inline void set_m_level_4(uint8_t value)
	{
		___m_level_4 = value;
	}

	inline static int32_t get_offset_of_m_anyKeywordMask_5() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_anyKeywordMask_5)); }
	inline int64_t get_m_anyKeywordMask_5() const { return ___m_anyKeywordMask_5; }
	inline int64_t* get_address_of_m_anyKeywordMask_5() { return &___m_anyKeywordMask_5; }
	inline void set_m_anyKeywordMask_5(int64_t value)
	{
		___m_anyKeywordMask_5 = value;
	}

	inline static int32_t get_offset_of_m_allKeywordMask_6() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_allKeywordMask_6)); }
	inline int64_t get_m_allKeywordMask_6() const { return ___m_allKeywordMask_6; }
	inline int64_t* get_address_of_m_allKeywordMask_6() { return &___m_allKeywordMask_6; }
	inline void set_m_allKeywordMask_6(int64_t value)
	{
		___m_allKeywordMask_6 = value;
	}

	inline static int32_t get_offset_of_m_liveSessions_7() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_liveSessions_7)); }
	inline List_1_t53BBC0AA893BF75B4925CA24EBF5975C942A4D17 * get_m_liveSessions_7() const { return ___m_liveSessions_7; }
	inline List_1_t53BBC0AA893BF75B4925CA24EBF5975C942A4D17 ** get_address_of_m_liveSessions_7() { return &___m_liveSessions_7; }
	inline void set_m_liveSessions_7(List_1_t53BBC0AA893BF75B4925CA24EBF5975C942A4D17 * value)
	{
		___m_liveSessions_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_liveSessions_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_enabled_8() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_enabled_8)); }
	inline bool get_m_enabled_8() const { return ___m_enabled_8; }
	inline bool* get_address_of_m_enabled_8() { return &___m_enabled_8; }
	inline void set_m_enabled_8(bool value)
	{
		___m_enabled_8 = value;
	}

	inline static int32_t get_offset_of_m_providerId_9() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_providerId_9)); }
	inline Guid_t  get_m_providerId_9() const { return ___m_providerId_9; }
	inline Guid_t * get_address_of_m_providerId_9() { return &___m_providerId_9; }
	inline void set_m_providerId_9(Guid_t  value)
	{
		___m_providerId_9 = value;
	}

	inline static int32_t get_offset_of_m_disposed_10() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_disposed_10)); }
	inline bool get_m_disposed_10() const { return ___m_disposed_10; }
	inline bool* get_address_of_m_disposed_10() { return &___m_disposed_10; }
	inline void set_m_disposed_10(bool value)
	{
		___m_disposed_10 = value;
	}
};

struct EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589_StaticFields
{
public:
	// System.Boolean System.Diagnostics.Tracing.EventProvider::m_setInformationMissing
	bool ___m_setInformationMissing_0;
	// System.Int32[] System.Diagnostics.Tracing.EventProvider::nibblebits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___nibblebits_12;

public:
	inline static int32_t get_offset_of_m_setInformationMissing_0() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589_StaticFields, ___m_setInformationMissing_0)); }
	inline bool get_m_setInformationMissing_0() const { return ___m_setInformationMissing_0; }
	inline bool* get_address_of_m_setInformationMissing_0() { return &___m_setInformationMissing_0; }
	inline void set_m_setInformationMissing_0(bool value)
	{
		___m_setInformationMissing_0 = value;
	}

	inline static int32_t get_offset_of_nibblebits_12() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589_StaticFields, ___nibblebits_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_nibblebits_12() const { return ___nibblebits_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_nibblebits_12() { return &___nibblebits_12; }
	inline void set_nibblebits_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___nibblebits_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nibblebits_12), (void*)value);
	}
};

struct EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589_ThreadStaticFields
{
public:
	// System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode System.Diagnostics.Tracing.EventProvider::s_returnCode
	int32_t ___s_returnCode_11;

public:
	inline static int32_t get_offset_of_s_returnCode_11() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589_ThreadStaticFields, ___s_returnCode_11)); }
	inline int32_t get_s_returnCode_11() const { return ___s_returnCode_11; }
	inline int32_t* get_address_of_s_returnCode_11() { return &___s_returnCode_11; }
	inline void set_s_returnCode_11(int32_t value)
	{
		___s_returnCode_11 = value;
	}
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration
struct RemotingConfiguration_tBEEF8625AB8EF988A254B612961188D5341008E9 
{
public:
	// System.String Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration::RemoteHostName
	String_t* ___RemoteHostName_0;
	// System.UInt16 Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration::RemotePort
	uint16_t ___RemotePort_1;
	// System.UInt32 Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration::MaxBitrateKbps
	uint32_t ___MaxBitrateKbps_2;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingVideoCodec Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration::VideoCodec
	int32_t ___VideoCodec_3;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration::EnableAudio
	bool ___EnableAudio_4;

public:
	inline static int32_t get_offset_of_RemoteHostName_0() { return static_cast<int32_t>(offsetof(RemotingConfiguration_tBEEF8625AB8EF988A254B612961188D5341008E9, ___RemoteHostName_0)); }
	inline String_t* get_RemoteHostName_0() const { return ___RemoteHostName_0; }
	inline String_t** get_address_of_RemoteHostName_0() { return &___RemoteHostName_0; }
	inline void set_RemoteHostName_0(String_t* value)
	{
		___RemoteHostName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteHostName_0), (void*)value);
	}

	inline static int32_t get_offset_of_RemotePort_1() { return static_cast<int32_t>(offsetof(RemotingConfiguration_tBEEF8625AB8EF988A254B612961188D5341008E9, ___RemotePort_1)); }
	inline uint16_t get_RemotePort_1() const { return ___RemotePort_1; }
	inline uint16_t* get_address_of_RemotePort_1() { return &___RemotePort_1; }
	inline void set_RemotePort_1(uint16_t value)
	{
		___RemotePort_1 = value;
	}

	inline static int32_t get_offset_of_MaxBitrateKbps_2() { return static_cast<int32_t>(offsetof(RemotingConfiguration_tBEEF8625AB8EF988A254B612961188D5341008E9, ___MaxBitrateKbps_2)); }
	inline uint32_t get_MaxBitrateKbps_2() const { return ___MaxBitrateKbps_2; }
	inline uint32_t* get_address_of_MaxBitrateKbps_2() { return &___MaxBitrateKbps_2; }
	inline void set_MaxBitrateKbps_2(uint32_t value)
	{
		___MaxBitrateKbps_2 = value;
	}

	inline static int32_t get_offset_of_VideoCodec_3() { return static_cast<int32_t>(offsetof(RemotingConfiguration_tBEEF8625AB8EF988A254B612961188D5341008E9, ___VideoCodec_3)); }
	inline int32_t get_VideoCodec_3() const { return ___VideoCodec_3; }
	inline int32_t* get_address_of_VideoCodec_3() { return &___VideoCodec_3; }
	inline void set_VideoCodec_3(int32_t value)
	{
		___VideoCodec_3 = value;
	}

	inline static int32_t get_offset_of_EnableAudio_4() { return static_cast<int32_t>(offsetof(RemotingConfiguration_tBEEF8625AB8EF988A254B612961188D5341008E9, ___EnableAudio_4)); }
	inline bool get_EnableAudio_4() const { return ___EnableAudio_4; }
	inline bool* get_address_of_EnableAudio_4() { return &___EnableAudio_4; }
	inline void set_EnableAudio_4(bool value)
	{
		___EnableAudio_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration
#pragma pack(push, tp, 8)
struct RemotingConfiguration_tBEEF8625AB8EF988A254B612961188D5341008E9_marshaled_pinvoke
{
	char* ___RemoteHostName_0;
	uint16_t ___RemotePort_1;
	uint32_t ___MaxBitrateKbps_2;
	int32_t ___VideoCodec_3;
	int32_t ___EnableAudio_4;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration
#pragma pack(push, tp, 8)
struct RemotingConfiguration_tBEEF8625AB8EF988A254B612961188D5341008E9_marshaled_com
{
	Il2CppChar* ___RemoteHostName_0;
	uint16_t ___RemotePort_1;
	uint32_t ___MaxBitrateKbps_2;
	int32_t ___VideoCodec_3;
	int32_t ___EnableAudio_4;
};
#pragma pack(pop, tp)

// Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration
struct RemotingListenConfiguration_t1E9B5AD9B307202D2F456AD712C91812AD63AD62 
{
public:
	// System.String Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::ListenInterface
	String_t* ___ListenInterface_0;
	// System.UInt16 Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::HandshakeListenPort
	uint16_t ___HandshakeListenPort_1;
	// System.UInt16 Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::TransportListenPort
	uint16_t ___TransportListenPort_2;
	// System.UInt32 Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::MaxBitrateKbps
	uint32_t ___MaxBitrateKbps_3;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingVideoCodec Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::VideoCodec
	int32_t ___VideoCodec_4;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::EnableAudio
	bool ___EnableAudio_5;

public:
	inline static int32_t get_offset_of_ListenInterface_0() { return static_cast<int32_t>(offsetof(RemotingListenConfiguration_t1E9B5AD9B307202D2F456AD712C91812AD63AD62, ___ListenInterface_0)); }
	inline String_t* get_ListenInterface_0() const { return ___ListenInterface_0; }
	inline String_t** get_address_of_ListenInterface_0() { return &___ListenInterface_0; }
	inline void set_ListenInterface_0(String_t* value)
	{
		___ListenInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ListenInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_HandshakeListenPort_1() { return static_cast<int32_t>(offsetof(RemotingListenConfiguration_t1E9B5AD9B307202D2F456AD712C91812AD63AD62, ___HandshakeListenPort_1)); }
	inline uint16_t get_HandshakeListenPort_1() const { return ___HandshakeListenPort_1; }
	inline uint16_t* get_address_of_HandshakeListenPort_1() { return &___HandshakeListenPort_1; }
	inline void set_HandshakeListenPort_1(uint16_t value)
	{
		___HandshakeListenPort_1 = value;
	}

	inline static int32_t get_offset_of_TransportListenPort_2() { return static_cast<int32_t>(offsetof(RemotingListenConfiguration_t1E9B5AD9B307202D2F456AD712C91812AD63AD62, ___TransportListenPort_2)); }
	inline uint16_t get_TransportListenPort_2() const { return ___TransportListenPort_2; }
	inline uint16_t* get_address_of_TransportListenPort_2() { return &___TransportListenPort_2; }
	inline void set_TransportListenPort_2(uint16_t value)
	{
		___TransportListenPort_2 = value;
	}

	inline static int32_t get_offset_of_MaxBitrateKbps_3() { return static_cast<int32_t>(offsetof(RemotingListenConfiguration_t1E9B5AD9B307202D2F456AD712C91812AD63AD62, ___MaxBitrateKbps_3)); }
	inline uint32_t get_MaxBitrateKbps_3() const { return ___MaxBitrateKbps_3; }
	inline uint32_t* get_address_of_MaxBitrateKbps_3() { return &___MaxBitrateKbps_3; }
	inline void set_MaxBitrateKbps_3(uint32_t value)
	{
		___MaxBitrateKbps_3 = value;
	}

	inline static int32_t get_offset_of_VideoCodec_4() { return static_cast<int32_t>(offsetof(RemotingListenConfiguration_t1E9B5AD9B307202D2F456AD712C91812AD63AD62, ___VideoCodec_4)); }
	inline int32_t get_VideoCodec_4() const { return ___VideoCodec_4; }
	inline int32_t* get_address_of_VideoCodec_4() { return &___VideoCodec_4; }
	inline void set_VideoCodec_4(int32_t value)
	{
		___VideoCodec_4 = value;
	}

	inline static int32_t get_offset_of_EnableAudio_5() { return static_cast<int32_t>(offsetof(RemotingListenConfiguration_t1E9B5AD9B307202D2F456AD712C91812AD63AD62, ___EnableAudio_5)); }
	inline bool get_EnableAudio_5() const { return ___EnableAudio_5; }
	inline bool* get_address_of_EnableAudio_5() { return &___EnableAudio_5; }
	inline void set_EnableAudio_5(bool value)
	{
		___EnableAudio_5 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration
#pragma pack(push, tp, 8)
struct RemotingListenConfiguration_t1E9B5AD9B307202D2F456AD712C91812AD63AD62_marshaled_pinvoke
{
	char* ___ListenInterface_0;
	uint16_t ___HandshakeListenPort_1;
	uint16_t ___TransportListenPort_2;
	uint32_t ___MaxBitrateKbps_3;
	int32_t ___VideoCodec_4;
	int32_t ___EnableAudio_5;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration
#pragma pack(push, tp, 8)
struct RemotingListenConfiguration_t1E9B5AD9B307202D2F456AD712C91812AD63AD62_marshaled_com
{
	Il2CppChar* ___ListenInterface_0;
	uint16_t ___HandshakeListenPort_1;
	uint16_t ___TransportListenPort_2;
	uint32_t ___MaxBitrateKbps_3;
	int32_t ___VideoCodec_4;
	int32_t ___EnableAudio_5;
};
#pragma pack(pop, tp)

// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Runtime.InteropServices.SafeBuffer System.IO.UnmanagedMemoryStream::_buffer
	SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * ____buffer_4;
	// System.Byte* System.IO.UnmanagedMemoryStream::_mem
	uint8_t* ____mem_5;
	// System.Int64 System.IO.UnmanagedMemoryStream::_length
	int64_t ____length_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::_capacity
	int64_t ____capacity_7;
	// System.Int64 System.IO.UnmanagedMemoryStream::_position
	int64_t ____position_8;
	// System.Int64 System.IO.UnmanagedMemoryStream::_offset
	int64_t ____offset_9;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::_access
	int32_t ____access_10;
	// System.Boolean System.IO.UnmanagedMemoryStream::_isOpen
	bool ____isOpen_11;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.UnmanagedMemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_12;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____buffer_4)); }
	inline SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * get__buffer_4() const { return ____buffer_4; }
	inline SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 ** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__mem_5() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____mem_5)); }
	inline uint8_t* get__mem_5() const { return ____mem_5; }
	inline uint8_t** get_address_of__mem_5() { return &____mem_5; }
	inline void set__mem_5(uint8_t* value)
	{
		____mem_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____length_6)); }
	inline int64_t get__length_6() const { return ____length_6; }
	inline int64_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int64_t value)
	{
		____length_6 = value;
	}

	inline static int32_t get_offset_of__capacity_7() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____capacity_7)); }
	inline int64_t get__capacity_7() const { return ____capacity_7; }
	inline int64_t* get_address_of__capacity_7() { return &____capacity_7; }
	inline void set__capacity_7(int64_t value)
	{
		____capacity_7 = value;
	}

	inline static int32_t get_offset_of__position_8() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____position_8)); }
	inline int64_t get__position_8() const { return ____position_8; }
	inline int64_t* get_address_of__position_8() { return &____position_8; }
	inline void set__position_8(int64_t value)
	{
		____position_8 = value;
	}

	inline static int32_t get_offset_of__offset_9() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____offset_9)); }
	inline int64_t get__offset_9() const { return ____offset_9; }
	inline int64_t* get_address_of__offset_9() { return &____offset_9; }
	inline void set__offset_9(int64_t value)
	{
		____offset_9 = value;
	}

	inline static int32_t get_offset_of__access_10() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____access_10)); }
	inline int32_t get__access_10() const { return ____access_10; }
	inline int32_t* get_address_of__access_10() { return &____access_10; }
	inline void set__access_10(int32_t value)
	{
		____access_10 = value;
	}

	inline static int32_t get_offset_of__isOpen_11() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____isOpen_11)); }
	inline bool get__isOpen_11() const { return ____isOpen_11; }
	inline bool* get_address_of__isOpen_11() { return &____isOpen_11; }
	inline void set__isOpen_11(bool value)
	{
		____isOpen_11 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_12() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____lastReadTask_12)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_12() const { return ____lastReadTask_12; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_12() { return &____lastReadTask_12; }
	inline void set__lastReadTask_12(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_12), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/BlankCertificateHandler
struct BlankCertificateHandler_t3829B4780CA459FF4520D7F84E71DCA09B853C40  : public CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E
{
public:

public:
};


// System.Collections.Hashtable/SyncHashtable
struct SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C  : public Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/SyncHashtable::_table
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____table_21;

public:
	inline static int32_t get_offset_of__table_21() { return static_cast<int32_t>(offsetof(SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C, ____table_21)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__table_21() const { return ____table_21; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__table_21() { return &____table_21; }
	inline void set__table_21(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____table_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____table_21), (void*)value);
	}
};


// UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator
struct Enumerator_t613E3A70E3E0E8A2ED3EFB43FC5A713ABAA44DDA 
{
public:
	// UnityEngine.InputSystem.LowLevel.IMECompositionString UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator::m_CompositionString
	IMECompositionString_t42ECE0DA43AE6DB97ED39288E2EA4C66F4BF2326  ___m_CompositionString_0;
	// System.Char UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator::m_CurrentCharacter
	Il2CppChar ___m_CurrentCharacter_1;
	// System.Int32 UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_2;

public:
	inline static int32_t get_offset_of_m_CompositionString_0() { return static_cast<int32_t>(offsetof(Enumerator_t613E3A70E3E0E8A2ED3EFB43FC5A713ABAA44DDA, ___m_CompositionString_0)); }
	inline IMECompositionString_t42ECE0DA43AE6DB97ED39288E2EA4C66F4BF2326  get_m_CompositionString_0() const { return ___m_CompositionString_0; }
	inline IMECompositionString_t42ECE0DA43AE6DB97ED39288E2EA4C66F4BF2326 * get_address_of_m_CompositionString_0() { return &___m_CompositionString_0; }
	inline void set_m_CompositionString_0(IMECompositionString_t42ECE0DA43AE6DB97ED39288E2EA4C66F4BF2326  value)
	{
		___m_CompositionString_0 = value;
	}

	inline static int32_t get_offset_of_m_CurrentCharacter_1() { return static_cast<int32_t>(offsetof(Enumerator_t613E3A70E3E0E8A2ED3EFB43FC5A713ABAA44DDA, ___m_CurrentCharacter_1)); }
	inline Il2CppChar get_m_CurrentCharacter_1() const { return ___m_CurrentCharacter_1; }
	inline Il2CppChar* get_address_of_m_CurrentCharacter_1() { return &___m_CurrentCharacter_1; }
	inline void set_m_CurrentCharacter_1(Il2CppChar value)
	{
		___m_CurrentCharacter_1 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_2() { return static_cast<int32_t>(offsetof(Enumerator_t613E3A70E3E0E8A2ED3EFB43FC5A713ABAA44DDA, ___m_CurrentIndex_2)); }
	inline int32_t get_m_CurrentIndex_2() const { return ___m_CurrentIndex_2; }
	inline int32_t* get_address_of_m_CurrentIndex_2() { return &___m_CurrentIndex_2; }
	inline void set_m_CurrentIndex_2(int32_t value)
	{
		___m_CurrentIndex_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator
struct Enumerator_t613E3A70E3E0E8A2ED3EFB43FC5A713ABAA44DDA_marshaled_pinvoke
{
	IMECompositionString_t42ECE0DA43AE6DB97ED39288E2EA4C66F4BF2326_marshaled_pinvoke ___m_CompositionString_0;
	uint8_t ___m_CurrentCharacter_1;
	int32_t ___m_CurrentIndex_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator
struct Enumerator_t613E3A70E3E0E8A2ED3EFB43FC5A713ABAA44DDA_marshaled_com
{
	IMECompositionString_t42ECE0DA43AE6DB97ED39288E2EA4C66F4BF2326_marshaled_com ___m_CompositionString_0;
	uint8_t ___m_CurrentCharacter_1;
	int32_t ___m_CurrentIndex_2;
};

// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>
struct InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Indices_1() { return static_cast<int32_t>(offsetof(InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8, ___m_Indices_1)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_m_Indices_1() const { return ___m_Indices_1; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_m_Indices_1() { return &___m_Indices_1; }
	inline void set_m_Indices_1(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___m_Indices_1 = value;
	}

	inline static int32_t get_offset_of_m_Allocator_2() { return static_cast<int32_t>(offsetof(InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8, ___m_Allocator_2)); }
	inline int32_t get_m_Allocator_2() const { return ___m_Allocator_2; }
	inline int32_t* get_address_of_m_Allocator_2() { return &___m_Allocator_2; }
	inline void set_m_Allocator_2(int32_t value)
	{
		___m_Allocator_2 = value;
	}
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD 
{
public:
	// T System.Nullable`1::value
	InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD, ___value_0)); }
	inline InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  get_value_0() const { return ___value_0; }
	inline InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_t6A986D0C39D2BBC9E6B5A99ECE66D351FA8A37BA  : public BaseDataProvider_1_tE3B2A984DE10A3776A20BD1233716F00AB8137AD
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CIsOpaqueU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseCameraSettingsProvider_t6A986D0C39D2BBC9E6B5A99ECE66D351FA8A37BA, ___U3CIsOpaqueU3Ek__BackingField_14)); }
	inline bool get_U3CIsOpaqueU3Ek__BackingField_14() const { return ___U3CIsOpaqueU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsOpaqueU3Ek__BackingField_14() { return &___U3CIsOpaqueU3Ek__BackingField_14; }
	inline void set_U3CIsOpaqueU3Ek__BackingField_14(bool value)
	{
		___U3CIsOpaqueU3Ek__BackingField_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t093531A22CC9FCFCA718CA9048E8C1EA4A9BEF02  : public BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseCoreSystem_t093531A22CC9FCFCA718CA9048E8C1EA4A9BEF02, ___U3CRegistrarU3Ek__BackingField_20)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_20() const { return ___U3CRegistrarU3Ek__BackingField_20; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_20() { return &___U3CRegistrarU3Ek__BackingField_20; }
	inline void set_U3CRegistrarU3Ek__BackingField_20(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_20), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A  : public BaseDataProvider_1_t5DB3231FD37A2CCF293DD0B9C73000370D729468
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_14;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_t1EA05E36F788958E2F8162D0A2A6D406491B4E39* ___pointerConfigurations_15;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_t0E8AEAD57F4E842649411A16470AC632AB9C970D * ___activePointersToConfig_17;

public:
	inline static int32_t get_offset_of_enablePointerCache_14() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A, ___enablePointerCache_14)); }
	inline bool get_enablePointerCache_14() const { return ___enablePointerCache_14; }
	inline bool* get_address_of_enablePointerCache_14() { return &___enablePointerCache_14; }
	inline void set_enablePointerCache_14(bool value)
	{
		___enablePointerCache_14 = value;
	}

	inline static int32_t get_offset_of_pointerConfigurations_15() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A, ___pointerConfigurations_15)); }
	inline PointerConfigU5BU5D_t1EA05E36F788958E2F8162D0A2A6D406491B4E39* get_pointerConfigurations_15() const { return ___pointerConfigurations_15; }
	inline PointerConfigU5BU5D_t1EA05E36F788958E2F8162D0A2A6D406491B4E39** get_address_of_pointerConfigurations_15() { return &___pointerConfigurations_15; }
	inline void set_pointerConfigurations_15(PointerConfigU5BU5D_t1EA05E36F788958E2F8162D0A2A6D406491B4E39* value)
	{
		___pointerConfigurations_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerConfigurations_15), (void*)value);
	}

	inline static int32_t get_offset_of_activePointersToConfig_17() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A, ___activePointersToConfig_17)); }
	inline Dictionary_2_t0E8AEAD57F4E842649411A16470AC632AB9C970D * get_activePointersToConfig_17() const { return ___activePointersToConfig_17; }
	inline Dictionary_2_t0E8AEAD57F4E842649411A16470AC632AB9C970D ** get_address_of_activePointersToConfig_17() { return &___activePointersToConfig_17; }
	inline void set_activePointersToConfig_17(Dictionary_2_t0E8AEAD57F4E842649411A16470AC632AB9C970D * value)
	{
		___activePointersToConfig_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointersToConfig_17), (void*)value);
	}
};

struct BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestPointersPerfMarker_16;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RecyclePointersPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CreatePointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CreatePointerPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CleanActivePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CleanActivePointersPerfMarker_20;

public:
	inline static int32_t get_offset_of_RequestPointersPerfMarker_16() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A_StaticFields, ___RequestPointersPerfMarker_16)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestPointersPerfMarker_16() const { return ___RequestPointersPerfMarker_16; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestPointersPerfMarker_16() { return &___RequestPointersPerfMarker_16; }
	inline void set_RequestPointersPerfMarker_16(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestPointersPerfMarker_16 = value;
	}

	inline static int32_t get_offset_of_RecyclePointersPerfMarker_18() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A_StaticFields, ___RecyclePointersPerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RecyclePointersPerfMarker_18() const { return ___RecyclePointersPerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RecyclePointersPerfMarker_18() { return &___RecyclePointersPerfMarker_18; }
	inline void set_RecyclePointersPerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RecyclePointersPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_CreatePointerPerfMarker_19() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A_StaticFields, ___CreatePointerPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CreatePointerPerfMarker_19() const { return ___CreatePointerPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CreatePointerPerfMarker_19() { return &___CreatePointerPerfMarker_19; }
	inline void set_CreatePointerPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CreatePointerPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_CleanActivePointersPerfMarker_20() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A_StaticFields, ___CleanActivePointersPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CleanActivePointersPerfMarker_20() const { return ___CleanActivePointersPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CleanActivePointersPerfMarker_20() { return &___CleanActivePointersPerfMarker_20; }
	inline void set_CleanActivePointersPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CleanActivePointersPerfMarker_20 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_t9979BC83AF86C4814E92D2936476A01FFB27B7D7  : public BaseDataProvider_1_t34B47B4B23709AF9474686DD4F3788244D1271A9
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::observedObjectParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___observedObjectParent_15;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_16;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_17;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<StartupBehavior>k__BackingField
	int32_t ___U3CStartupBehaviorU3Ek__BackingField_18;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<DefaultPhysicsLayer>k__BackingField
	int32_t ___U3CDefaultPhysicsLayerU3Ek__BackingField_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsStationaryObserver>k__BackingField
	bool ___U3CIsStationaryObserverU3Ek__BackingField_21;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverRotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CObserverRotationU3Ek__BackingField_22;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverOrigin>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CObserverOriginU3Ek__BackingField_23;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverVolumeType>k__BackingField
	int32_t ___U3CObserverVolumeTypeU3Ek__BackingField_24;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObservationExtents>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CObservationExtentsU3Ek__BackingField_25;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<UpdateInterval>k__BackingField
	float ___U3CUpdateIntervalU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of_observedObjectParent_15() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t9979BC83AF86C4814E92D2936476A01FFB27B7D7, ___observedObjectParent_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_observedObjectParent_15() const { return ___observedObjectParent_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_observedObjectParent_15() { return &___observedObjectParent_15; }
	inline void set_observedObjectParent_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___observedObjectParent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observedObjectParent_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t9979BC83AF86C4814E92D2936476A01FFB27B7D7, ___U3CSourceIdU3Ek__BackingField_16)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_16() const { return ___U3CSourceIdU3Ek__BackingField_16; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_16() { return &___U3CSourceIdU3Ek__BackingField_16; }
	inline void set_U3CSourceIdU3Ek__BackingField_16(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t9979BC83AF86C4814E92D2936476A01FFB27B7D7, ___U3CSourceNameU3Ek__BackingField_17)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_17() const { return ___U3CSourceNameU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_17() { return &___U3CSourceNameU3Ek__BackingField_17; }
	inline void set_U3CSourceNameU3Ek__BackingField_17(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartupBehaviorU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t9979BC83AF86C4814E92D2936476A01FFB27B7D7, ___U3CStartupBehaviorU3Ek__BackingField_18)); }
	inline int32_t get_U3CStartupBehaviorU3Ek__BackingField_18() const { return ___U3CStartupBehaviorU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CStartupBehaviorU3Ek__BackingField_18() { return &___U3CStartupBehaviorU3Ek__BackingField_18; }
	inline void set_U3CStartupBehaviorU3Ek__BackingField_18(int32_t value)
	{
		___U3CStartupBehaviorU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultPhysicsLayerU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t9979BC83AF86C4814E92D2936476A01FFB27B7D7, ___U3CDefaultPhysicsLayerU3Ek__BackingField_19)); }
	inline int32_t get_U3CDefaultPhysicsLayerU3Ek__BackingField_19() const { return ___U3CDefaultPhysicsLayerU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CDefaultPhysicsLayerU3Ek__BackingField_19() { return &___U3CDefaultPhysicsLayerU3Ek__BackingField_19; }
	inline void set_U3CDefaultPhysicsLayerU3Ek__BackingField_19(int32_t value)
	{
		___U3CDefaultPhysicsLayerU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t9979BC83AF86C4814E92D2936476A01FFB27B7D7, ___U3CIsRunningU3Ek__BackingField_20)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_20() const { return ___U3CIsRunningU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_20() { return &___U3CIsRunningU3Ek__BackingField_20; }
	inline void set_U3CIsRunningU3Ek__BackingField_20(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CIsStationaryObserverU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t9979BC83AF86C4814E92D2936476A01FFB27B7D7, ___U3CIsStationaryObserverU3Ek__BackingField_21)); }
	inline bool get_U3CIsStationaryObserverU3Ek__BackingField_21() const { return ___U3CIsStationaryObserverU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CIsStationaryObserverU3Ek__BackingField_21() { return &___U3CIsStationaryObserverU3Ek__BackingField_21; }
	inline void set_U3CIsStationaryObserverU3Ek__BackingField_21(bool value)
	{
		___U3CIsStationaryObserverU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CObserverRotationU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t9979BC83AF86C4814E92D2936476A01FFB27B7D7, ___U3CObserverRotationU3Ek__BackingField_22)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CObserverRotationU3Ek__BackingField_22() const { return ___U3CObserverRotationU3Ek__BackingField_22; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CObserverRotationU3Ek__BackingField_22() { return &___U3CObserverRotationU3Ek__BackingField_22; }
	inline void set_U3CObserverRotationU3Ek__BackingField_22(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CObserverRotationU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CObserverOriginU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t9979BC83AF86C4814E92D2936476A01FFB27B7D7, ___U3CObserverOriginU3Ek__BackingField_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CObserverOriginU3Ek__BackingField_23() const { return ___U3CObserverOriginU3Ek__BackingField_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CObserverOriginU3Ek__BackingField_23() { return &___U3CObserverOriginU3Ek__BackingField_23; }
	inline void set_U3CObserverOriginU3Ek__BackingField_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CObserverOriginU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CObserverVolumeTypeU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t9979BC83AF86C4814E92D2936476A01FFB27B7D7, ___U3CObserverVolumeTypeU3Ek__BackingField_24)); }
	inline int32_t get_U3CObserverVolumeTypeU3Ek__BackingField_24() const { return ___U3CObserverVolumeTypeU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CObserverVolumeTypeU3Ek__BackingField_24() { return &___U3CObserverVolumeTypeU3Ek__BackingField_24; }
	inline void set_U3CObserverVolumeTypeU3Ek__BackingField_24(int32_t value)
	{
		___U3CObserverVolumeTypeU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CObservationExtentsU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t9979BC83AF86C4814E92D2936476A01FFB27B7D7, ___U3CObservationExtentsU3Ek__BackingField_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CObservationExtentsU3Ek__BackingField_25() const { return ___U3CObservationExtentsU3Ek__BackingField_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CObservationExtentsU3Ek__BackingField_25() { return &___U3CObservationExtentsU3Ek__BackingField_25; }
	inline void set_U3CObservationExtentsU3Ek__BackingField_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CObservationExtentsU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CUpdateIntervalU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t9979BC83AF86C4814E92D2936476A01FFB27B7D7, ___U3CUpdateIntervalU3Ek__BackingField_26)); }
	inline float get_U3CUpdateIntervalU3Ek__BackingField_26() const { return ___U3CUpdateIntervalU3Ek__BackingField_26; }
	inline float* get_address_of_U3CUpdateIntervalU3Ek__BackingField_26() { return &___U3CUpdateIntervalU3Ek__BackingField_26; }
	inline void set_U3CUpdateIntervalU3Ek__BackingField_26(float value)
	{
		___U3CUpdateIntervalU3Ek__BackingField_26 = value;
	}
};


// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Connect>d__17
struct U3CConnectU3Ed__17_t1BA83F62BA9FAF10775E004B8CA5587F53DA141F  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Connect>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Connect>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Connect>d__17::<>4__this
	AppRemotingPlugin_t913B737DC9F4F1E31FF4F98D4144872A1B724D1C * ___U3CU3E4__this_2;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Connect>d__17::configuration
	RemotingConfiguration_tBEEF8625AB8EF988A254B612961188D5341008E9  ___configuration_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CConnectU3Ed__17_t1BA83F62BA9FAF10775E004B8CA5587F53DA141F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CConnectU3Ed__17_t1BA83F62BA9FAF10775E004B8CA5587F53DA141F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CConnectU3Ed__17_t1BA83F62BA9FAF10775E004B8CA5587F53DA141F, ___U3CU3E4__this_2)); }
	inline AppRemotingPlugin_t913B737DC9F4F1E31FF4F98D4144872A1B724D1C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AppRemotingPlugin_t913B737DC9F4F1E31FF4F98D4144872A1B724D1C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AppRemotingPlugin_t913B737DC9F4F1E31FF4F98D4144872A1B724D1C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_configuration_3() { return static_cast<int32_t>(offsetof(U3CConnectU3Ed__17_t1BA83F62BA9FAF10775E004B8CA5587F53DA141F, ___configuration_3)); }
	inline RemotingConfiguration_tBEEF8625AB8EF988A254B612961188D5341008E9  get_configuration_3() const { return ___configuration_3; }
	inline RemotingConfiguration_tBEEF8625AB8EF988A254B612961188D5341008E9 * get_address_of_configuration_3() { return &___configuration_3; }
	inline void set_configuration_3(RemotingConfiguration_tBEEF8625AB8EF988A254B612961188D5341008E9  value)
	{
		___configuration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___configuration_3))->___RemoteHostName_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__18
struct U3CListenU3Ed__18_t3BE1E2EB24F8B3129D42D384DC96F90FB2575550  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__18::<>4__this
	AppRemotingPlugin_t913B737DC9F4F1E31FF4F98D4144872A1B724D1C * ___U3CU3E4__this_2;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__18::configuration
	RemotingListenConfiguration_t1E9B5AD9B307202D2F456AD712C91812AD63AD62  ___configuration_3;
	// Microsoft.MixedReality.OpenXR.Remoting.SecureConnectionServerConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__18::secureConnectionServerConfiguration
	SecureConnectionServerConfiguration_tF5E7245D41C5092EB14D08CF73F1EE1FA9DFE5B7  ___secureConnectionServerConfiguration_4;
	// System.Action Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__18::onRemotingListenCompleted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onRemotingListenCompleted_5;
	// UnityEngine.WaitForSeconds Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__18::<defaultWait>5__2
	WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ___U3CdefaultWaitU3E5__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CListenU3Ed__18_t3BE1E2EB24F8B3129D42D384DC96F90FB2575550, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CListenU3Ed__18_t3BE1E2EB24F8B3129D42D384DC96F90FB2575550, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CListenU3Ed__18_t3BE1E2EB24F8B3129D42D384DC96F90FB2575550, ___U3CU3E4__this_2)); }
	inline AppRemotingPlugin_t913B737DC9F4F1E31FF4F98D4144872A1B724D1C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AppRemotingPlugin_t913B737DC9F4F1E31FF4F98D4144872A1B724D1C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AppRemotingPlugin_t913B737DC9F4F1E31FF4F98D4144872A1B724D1C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_configuration_3() { return static_cast<int32_t>(offsetof(U3CListenU3Ed__18_t3BE1E2EB24F8B3129D42D384DC96F90FB2575550, ___configuration_3)); }
	inline RemotingListenConfiguration_t1E9B5AD9B307202D2F456AD712C91812AD63AD62  get_configuration_3() const { return ___configuration_3; }
	inline RemotingListenConfiguration_t1E9B5AD9B307202D2F456AD712C91812AD63AD62 * get_address_of_configuration_3() { return &___configuration_3; }
	inline void set_configuration_3(RemotingListenConfiguration_t1E9B5AD9B307202D2F456AD712C91812AD63AD62  value)
	{
		___configuration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___configuration_3))->___ListenInterface_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secureConnectionServerConfiguration_4() { return static_cast<int32_t>(offsetof(U3CListenU3Ed__18_t3BE1E2EB24F8B3129D42D384DC96F90FB2575550, ___secureConnectionServerConfiguration_4)); }
	inline SecureConnectionServerConfiguration_tF5E7245D41C5092EB14D08CF73F1EE1FA9DFE5B7  get_secureConnectionServerConfiguration_4() const { return ___secureConnectionServerConfiguration_4; }
	inline SecureConnectionServerConfiguration_tF5E7245D41C5092EB14D08CF73F1EE1FA9DFE5B7 * get_address_of_secureConnectionServerConfiguration_4() { return &___secureConnectionServerConfiguration_4; }
	inline void set_secureConnectionServerConfiguration_4(SecureConnectionServerConfiguration_tF5E7245D41C5092EB14D08CF73F1EE1FA9DFE5B7  value)
	{
		___secureConnectionServerConfiguration_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secureConnectionServerConfiguration_4))->___CertificateStorePath_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___secureConnectionServerConfiguration_4))->___SubjectName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___secureConnectionServerConfiguration_4))->___KeyPassphrase_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___secureConnectionServerConfiguration_4))->___AuthenticationRealm_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___secureConnectionServerConfiguration_4))->___Token_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_onRemotingListenCompleted_5() { return static_cast<int32_t>(offsetof(U3CListenU3Ed__18_t3BE1E2EB24F8B3129D42D384DC96F90FB2575550, ___onRemotingListenCompleted_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onRemotingListenCompleted_5() const { return ___onRemotingListenCompleted_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onRemotingListenCompleted_5() { return &___onRemotingListenCompleted_5; }
	inline void set_onRemotingListenCompleted_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onRemotingListenCompleted_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRemotingListenCompleted_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdefaultWaitU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CListenU3Ed__18_t3BE1E2EB24F8B3129D42D384DC96F90FB2575550, ___U3CdefaultWaitU3E5__2_6)); }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * get_U3CdefaultWaitU3E5__2_6() const { return ___U3CdefaultWaitU3E5__2_6; }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 ** get_address_of_U3CdefaultWaitU3E5__2_6() { return &___U3CdefaultWaitU3E5__2_6; }
	inline void set_U3CdefaultWaitU3E5__2_6(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * value)
	{
		___U3CdefaultWaitU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdefaultWaitU3E5__2_6), (void*)value);
	}
};


// System.Reflection.Assembly/UnmanagedMemoryStreamForModule
struct UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44  : public UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62
{
public:
	// System.Reflection.Module System.Reflection.Assembly/UnmanagedMemoryStreamForModule::module
	Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * ___module_13;

public:
	inline static int32_t get_offset_of_module_13() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44, ___module_13)); }
	inline Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * get_module_13() const { return ___module_13; }
	inline Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 ** get_address_of_module_13() { return &___module_13; }
	inline void set_module_13(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * value)
	{
		___module_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_13), (void*)value);
	}
};


// System.Diagnostics.Tracing.EventSource/OverideEventProvider
struct OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940  : public EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589
{
public:
	// System.Diagnostics.Tracing.EventSource System.Diagnostics.Tracing.EventSource/OverideEventProvider::m_eventSource
	EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A * ___m_eventSource_13;

public:
	inline static int32_t get_offset_of_m_eventSource_13() { return static_cast<int32_t>(offsetof(OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940, ___m_eventSource_13)); }
	inline EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A * get_m_eventSource_13() const { return ___m_eventSource_13; }
	inline EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A ** get_address_of_m_eventSource_13() { return &___m_eventSource_13; }
	inline void set_m_eventSource_13(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A * value)
	{
		___m_eventSource_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventSource_13), (void*)value);
	}
};


// UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8
struct U3Cget_bindingsU3Ed__8_t3ADB872E35B157EC21C5AC30500C0D4B5936F56F  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.InputBinding UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<>2__current
	InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<>4__this
	InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * ___U3CU3E4__this_3;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<numActionMaps>5__2
	int32_t ___U3CnumActionMapsU3E5__2_4;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<i>5__3
	int32_t ___U3CiU3E5__3_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<bindings>5__4
	InputBindingU5BU5D_tB4B5958DB863092A77C4B1563316110446E90309* ___U3CbindingsU3E5__4_6;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<numBindings>5__5
	int32_t ___U3CnumBindingsU3E5__5_7;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<n>5__6
	int32_t ___U3CnU3E5__6_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_bindingsU3Ed__8_t3ADB872E35B157EC21C5AC30500C0D4B5936F56F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_bindingsU3Ed__8_t3ADB872E35B157EC21C5AC30500C0D4B5936F56F, ___U3CU3E2__current_1)); }
	inline InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_bindingsU3Ed__8_t3ADB872E35B157EC21C5AC30500C0D4B5936F56F, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_bindingsU3Ed__8_t3ADB872E35B157EC21C5AC30500C0D4B5936F56F, ___U3CU3E4__this_3)); }
	inline InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnumActionMapsU3E5__2_4() { return static_cast<int32_t>(offsetof(U3Cget_bindingsU3Ed__8_t3ADB872E35B157EC21C5AC30500C0D4B5936F56F, ___U3CnumActionMapsU3E5__2_4)); }
	inline int32_t get_U3CnumActionMapsU3E5__2_4() const { return ___U3CnumActionMapsU3E5__2_4; }
	inline int32_t* get_address_of_U3CnumActionMapsU3E5__2_4() { return &___U3CnumActionMapsU3E5__2_4; }
	inline void set_U3CnumActionMapsU3E5__2_4(int32_t value)
	{
		___U3CnumActionMapsU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_5() { return static_cast<int32_t>(offsetof(U3Cget_bindingsU3Ed__8_t3ADB872E35B157EC21C5AC30500C0D4B5936F56F, ___U3CiU3E5__3_5)); }
	inline int32_t get_U3CiU3E5__3_5() const { return ___U3CiU3E5__3_5; }
	inline int32_t* get_address_of_U3CiU3E5__3_5() { return &___U3CiU3E5__3_5; }
	inline void set_U3CiU3E5__3_5(int32_t value)
	{
		___U3CiU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CbindingsU3E5__4_6() { return static_cast<int32_t>(offsetof(U3Cget_bindingsU3Ed__8_t3ADB872E35B157EC21C5AC30500C0D4B5936F56F, ___U3CbindingsU3E5__4_6)); }
	inline InputBindingU5BU5D_tB4B5958DB863092A77C4B1563316110446E90309* get_U3CbindingsU3E5__4_6() const { return ___U3CbindingsU3E5__4_6; }
	inline InputBindingU5BU5D_tB4B5958DB863092A77C4B1563316110446E90309** get_address_of_U3CbindingsU3E5__4_6() { return &___U3CbindingsU3E5__4_6; }
	inline void set_U3CbindingsU3E5__4_6(InputBindingU5BU5D_tB4B5958DB863092A77C4B1563316110446E90309* value)
	{
		___U3CbindingsU3E5__4_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbindingsU3E5__4_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnumBindingsU3E5__5_7() { return static_cast<int32_t>(offsetof(U3Cget_bindingsU3Ed__8_t3ADB872E35B157EC21C5AC30500C0D4B5936F56F, ___U3CnumBindingsU3E5__5_7)); }
	inline int32_t get_U3CnumBindingsU3E5__5_7() const { return ___U3CnumBindingsU3E5__5_7; }
	inline int32_t* get_address_of_U3CnumBindingsU3E5__5_7() { return &___U3CnumBindingsU3E5__5_7; }
	inline void set_U3CnumBindingsU3E5__5_7(int32_t value)
	{
		___U3CnumBindingsU3E5__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CnU3E5__6_8() { return static_cast<int32_t>(offsetof(U3Cget_bindingsU3Ed__8_t3ADB872E35B157EC21C5AC30500C0D4B5936F56F, ___U3CnU3E5__6_8)); }
	inline int32_t get_U3CnU3E5__6_8() const { return ___U3CnU3E5__6_8; }
	inline int32_t* get_address_of_U3CnU3E5__6_8() { return &___U3CnU3E5__6_8; }
	inline void set_U3CnU3E5__6_8(int32_t value)
	{
		___U3CnU3E5__6_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem
struct BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718  : public BaseCoreSystem_t093531A22CC9FCFCA718CA9048E8C1EA4A9BEF02
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<IsXRDevicePresent>k__BackingField
	bool ___U3CIsXRDevicePresentU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<BoundaryProfile>k__BackingField
	MixedRealityBoundaryVisualizationProfile_t06EA6C9C08995D7C4D28B8A5B48D4791DB807413 * ___U3CBoundaryProfileU3Ek__BackingField_22;
	// Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryEventData
	BoundaryEventData_t0E104B2DEDCB28391DBD07973B24029B2D864C46 * ___boundaryEventData_23;
	// System.String Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_24;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_26;
	// System.String Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_27;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryVisualizationParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___boundaryVisualizationParent_30;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::ignoreRaycastLayerValue
	int32_t ___ignoreRaycastLayerValue_31;
	// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryVisualizationProfile
	MixedRealityBoundaryVisualizationProfile_t06EA6C9C08995D7C4D28B8A5B48D4791DB807413 * ___boundaryVisualizationProfile_32;
	// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Scale>k__BackingField
	int32_t ___U3CScaleU3Ek__BackingField_33;
	// System.Single Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<BoundaryHeight>k__BackingField
	float ___U3CBoundaryHeightU3Ek__BackingField_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showFloor
	bool ___showFloor_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showPlayArea
	bool ___showPlayArea_36;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::floorPhysicsLayer
	int32_t ___floorPhysicsLayer_37;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showTrackedArea
	bool ___showTrackedArea_38;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::playAreaPhysicsLayer
	int32_t ___playAreaPhysicsLayer_39;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showBoundaryWalls
	bool ___showBoundaryWalls_40;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::trackedAreaPhysicsLayer
	int32_t ___trackedAreaPhysicsLayer_41;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showCeiling
	bool ___showCeiling_42;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryWallsPhysicsLayer
	int32_t ___boundaryWallsPhysicsLayer_43;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::ceilingPhysicsLayer
	int32_t ___ceilingPhysicsLayer_44;
	// Microsoft.MixedReality.Toolkit.Boundary.Edge[] Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Bounds>k__BackingField
	EdgeU5BU5D_t34FE85CA4657553D2AFF71A1072BFF41A1BD7DA0* ___U3CBoundsU3Ek__BackingField_45;
	// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<FloorHeight>k__BackingField
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CFloorHeightU3Ek__BackingField_46;
	// Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::RectangularBounds
	InscribedRectangle_tE2D55E32FFEF8D166C1753BF82F5547ABFFCBCBF * ___RectangularBounds_47;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentFloorObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentFloorObject_48;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentPlayAreaObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentPlayAreaObject_49;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentTrackedAreaObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentTrackedAreaObject_50;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentBoundaryWallObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentBoundaryWallObject_51;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentCeilingObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentCeilingObject_52;

public:
	inline static int32_t get_offset_of_U3CIsXRDevicePresentU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___U3CIsXRDevicePresentU3Ek__BackingField_21)); }
	inline bool get_U3CIsXRDevicePresentU3Ek__BackingField_21() const { return ___U3CIsXRDevicePresentU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CIsXRDevicePresentU3Ek__BackingField_21() { return &___U3CIsXRDevicePresentU3Ek__BackingField_21; }
	inline void set_U3CIsXRDevicePresentU3Ek__BackingField_21(bool value)
	{
		___U3CIsXRDevicePresentU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CBoundaryProfileU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___U3CBoundaryProfileU3Ek__BackingField_22)); }
	inline MixedRealityBoundaryVisualizationProfile_t06EA6C9C08995D7C4D28B8A5B48D4791DB807413 * get_U3CBoundaryProfileU3Ek__BackingField_22() const { return ___U3CBoundaryProfileU3Ek__BackingField_22; }
	inline MixedRealityBoundaryVisualizationProfile_t06EA6C9C08995D7C4D28B8A5B48D4791DB807413 ** get_address_of_U3CBoundaryProfileU3Ek__BackingField_22() { return &___U3CBoundaryProfileU3Ek__BackingField_22; }
	inline void set_U3CBoundaryProfileU3Ek__BackingField_22(MixedRealityBoundaryVisualizationProfile_t06EA6C9C08995D7C4D28B8A5B48D4791DB807413 * value)
	{
		___U3CBoundaryProfileU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBoundaryProfileU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryEventData_23() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___boundaryEventData_23)); }
	inline BoundaryEventData_t0E104B2DEDCB28391DBD07973B24029B2D864C46 * get_boundaryEventData_23() const { return ___boundaryEventData_23; }
	inline BoundaryEventData_t0E104B2DEDCB28391DBD07973B24029B2D864C46 ** get_address_of_boundaryEventData_23() { return &___boundaryEventData_23; }
	inline void set_boundaryEventData_23(BoundaryEventData_t0E104B2DEDCB28391DBD07973B24029B2D864C46 * value)
	{
		___boundaryEventData_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryEventData_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___U3CNameU3Ek__BackingField_24)); }
	inline String_t* get_U3CNameU3Ek__BackingField_24() const { return ___U3CNameU3Ek__BackingField_24; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_24() { return &___U3CNameU3Ek__BackingField_24; }
	inline void set_U3CNameU3Ek__BackingField_24(String_t* value)
	{
		___U3CNameU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___U3CSourceIdU3Ek__BackingField_26)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_26() const { return ___U3CSourceIdU3Ek__BackingField_26; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_26() { return &___U3CSourceIdU3Ek__BackingField_26; }
	inline void set_U3CSourceIdU3Ek__BackingField_26(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___U3CSourceNameU3Ek__BackingField_27)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_27() const { return ___U3CSourceNameU3Ek__BackingField_27; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_27() { return &___U3CSourceNameU3Ek__BackingField_27; }
	inline void set_U3CSourceNameU3Ek__BackingField_27(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryVisualizationParent_30() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___boundaryVisualizationParent_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_boundaryVisualizationParent_30() const { return ___boundaryVisualizationParent_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_boundaryVisualizationParent_30() { return &___boundaryVisualizationParent_30; }
	inline void set_boundaryVisualizationParent_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___boundaryVisualizationParent_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryVisualizationParent_30), (void*)value);
	}

	inline static int32_t get_offset_of_ignoreRaycastLayerValue_31() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___ignoreRaycastLayerValue_31)); }
	inline int32_t get_ignoreRaycastLayerValue_31() const { return ___ignoreRaycastLayerValue_31; }
	inline int32_t* get_address_of_ignoreRaycastLayerValue_31() { return &___ignoreRaycastLayerValue_31; }
	inline void set_ignoreRaycastLayerValue_31(int32_t value)
	{
		___ignoreRaycastLayerValue_31 = value;
	}

	inline static int32_t get_offset_of_boundaryVisualizationProfile_32() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___boundaryVisualizationProfile_32)); }
	inline MixedRealityBoundaryVisualizationProfile_t06EA6C9C08995D7C4D28B8A5B48D4791DB807413 * get_boundaryVisualizationProfile_32() const { return ___boundaryVisualizationProfile_32; }
	inline MixedRealityBoundaryVisualizationProfile_t06EA6C9C08995D7C4D28B8A5B48D4791DB807413 ** get_address_of_boundaryVisualizationProfile_32() { return &___boundaryVisualizationProfile_32; }
	inline void set_boundaryVisualizationProfile_32(MixedRealityBoundaryVisualizationProfile_t06EA6C9C08995D7C4D28B8A5B48D4791DB807413 * value)
	{
		___boundaryVisualizationProfile_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryVisualizationProfile_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CScaleU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___U3CScaleU3Ek__BackingField_33)); }
	inline int32_t get_U3CScaleU3Ek__BackingField_33() const { return ___U3CScaleU3Ek__BackingField_33; }
	inline int32_t* get_address_of_U3CScaleU3Ek__BackingField_33() { return &___U3CScaleU3Ek__BackingField_33; }
	inline void set_U3CScaleU3Ek__BackingField_33(int32_t value)
	{
		___U3CScaleU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CBoundaryHeightU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___U3CBoundaryHeightU3Ek__BackingField_34)); }
	inline float get_U3CBoundaryHeightU3Ek__BackingField_34() const { return ___U3CBoundaryHeightU3Ek__BackingField_34; }
	inline float* get_address_of_U3CBoundaryHeightU3Ek__BackingField_34() { return &___U3CBoundaryHeightU3Ek__BackingField_34; }
	inline void set_U3CBoundaryHeightU3Ek__BackingField_34(float value)
	{
		___U3CBoundaryHeightU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_showFloor_35() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___showFloor_35)); }
	inline bool get_showFloor_35() const { return ___showFloor_35; }
	inline bool* get_address_of_showFloor_35() { return &___showFloor_35; }
	inline void set_showFloor_35(bool value)
	{
		___showFloor_35 = value;
	}

	inline static int32_t get_offset_of_showPlayArea_36() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___showPlayArea_36)); }
	inline bool get_showPlayArea_36() const { return ___showPlayArea_36; }
	inline bool* get_address_of_showPlayArea_36() { return &___showPlayArea_36; }
	inline void set_showPlayArea_36(bool value)
	{
		___showPlayArea_36 = value;
	}

	inline static int32_t get_offset_of_floorPhysicsLayer_37() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___floorPhysicsLayer_37)); }
	inline int32_t get_floorPhysicsLayer_37() const { return ___floorPhysicsLayer_37; }
	inline int32_t* get_address_of_floorPhysicsLayer_37() { return &___floorPhysicsLayer_37; }
	inline void set_floorPhysicsLayer_37(int32_t value)
	{
		___floorPhysicsLayer_37 = value;
	}

	inline static int32_t get_offset_of_showTrackedArea_38() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___showTrackedArea_38)); }
	inline bool get_showTrackedArea_38() const { return ___showTrackedArea_38; }
	inline bool* get_address_of_showTrackedArea_38() { return &___showTrackedArea_38; }
	inline void set_showTrackedArea_38(bool value)
	{
		___showTrackedArea_38 = value;
	}

	inline static int32_t get_offset_of_playAreaPhysicsLayer_39() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___playAreaPhysicsLayer_39)); }
	inline int32_t get_playAreaPhysicsLayer_39() const { return ___playAreaPhysicsLayer_39; }
	inline int32_t* get_address_of_playAreaPhysicsLayer_39() { return &___playAreaPhysicsLayer_39; }
	inline void set_playAreaPhysicsLayer_39(int32_t value)
	{
		___playAreaPhysicsLayer_39 = value;
	}

	inline static int32_t get_offset_of_showBoundaryWalls_40() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___showBoundaryWalls_40)); }
	inline bool get_showBoundaryWalls_40() const { return ___showBoundaryWalls_40; }
	inline bool* get_address_of_showBoundaryWalls_40() { return &___showBoundaryWalls_40; }
	inline void set_showBoundaryWalls_40(bool value)
	{
		___showBoundaryWalls_40 = value;
	}

	inline static int32_t get_offset_of_trackedAreaPhysicsLayer_41() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___trackedAreaPhysicsLayer_41)); }
	inline int32_t get_trackedAreaPhysicsLayer_41() const { return ___trackedAreaPhysicsLayer_41; }
	inline int32_t* get_address_of_trackedAreaPhysicsLayer_41() { return &___trackedAreaPhysicsLayer_41; }
	inline void set_trackedAreaPhysicsLayer_41(int32_t value)
	{
		___trackedAreaPhysicsLayer_41 = value;
	}

	inline static int32_t get_offset_of_showCeiling_42() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___showCeiling_42)); }
	inline bool get_showCeiling_42() const { return ___showCeiling_42; }
	inline bool* get_address_of_showCeiling_42() { return &___showCeiling_42; }
	inline void set_showCeiling_42(bool value)
	{
		___showCeiling_42 = value;
	}

	inline static int32_t get_offset_of_boundaryWallsPhysicsLayer_43() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___boundaryWallsPhysicsLayer_43)); }
	inline int32_t get_boundaryWallsPhysicsLayer_43() const { return ___boundaryWallsPhysicsLayer_43; }
	inline int32_t* get_address_of_boundaryWallsPhysicsLayer_43() { return &___boundaryWallsPhysicsLayer_43; }
	inline void set_boundaryWallsPhysicsLayer_43(int32_t value)
	{
		___boundaryWallsPhysicsLayer_43 = value;
	}

	inline static int32_t get_offset_of_ceilingPhysicsLayer_44() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___ceilingPhysicsLayer_44)); }
	inline int32_t get_ceilingPhysicsLayer_44() const { return ___ceilingPhysicsLayer_44; }
	inline int32_t* get_address_of_ceilingPhysicsLayer_44() { return &___ceilingPhysicsLayer_44; }
	inline void set_ceilingPhysicsLayer_44(int32_t value)
	{
		___ceilingPhysicsLayer_44 = value;
	}

	inline static int32_t get_offset_of_U3CBoundsU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___U3CBoundsU3Ek__BackingField_45)); }
	inline EdgeU5BU5D_t34FE85CA4657553D2AFF71A1072BFF41A1BD7DA0* get_U3CBoundsU3Ek__BackingField_45() const { return ___U3CBoundsU3Ek__BackingField_45; }
	inline EdgeU5BU5D_t34FE85CA4657553D2AFF71A1072BFF41A1BD7DA0** get_address_of_U3CBoundsU3Ek__BackingField_45() { return &___U3CBoundsU3Ek__BackingField_45; }
	inline void set_U3CBoundsU3Ek__BackingField_45(EdgeU5BU5D_t34FE85CA4657553D2AFF71A1072BFF41A1BD7DA0* value)
	{
		___U3CBoundsU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBoundsU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFloorHeightU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___U3CFloorHeightU3Ek__BackingField_46)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_U3CFloorHeightU3Ek__BackingField_46() const { return ___U3CFloorHeightU3Ek__BackingField_46; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_U3CFloorHeightU3Ek__BackingField_46() { return &___U3CFloorHeightU3Ek__BackingField_46; }
	inline void set_U3CFloorHeightU3Ek__BackingField_46(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___U3CFloorHeightU3Ek__BackingField_46 = value;
	}

	inline static int32_t get_offset_of_RectangularBounds_47() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___RectangularBounds_47)); }
	inline InscribedRectangle_tE2D55E32FFEF8D166C1753BF82F5547ABFFCBCBF * get_RectangularBounds_47() const { return ___RectangularBounds_47; }
	inline InscribedRectangle_tE2D55E32FFEF8D166C1753BF82F5547ABFFCBCBF ** get_address_of_RectangularBounds_47() { return &___RectangularBounds_47; }
	inline void set_RectangularBounds_47(InscribedRectangle_tE2D55E32FFEF8D166C1753BF82F5547ABFFCBCBF * value)
	{
		___RectangularBounds_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RectangularBounds_47), (void*)value);
	}

	inline static int32_t get_offset_of_currentFloorObject_48() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___currentFloorObject_48)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentFloorObject_48() const { return ___currentFloorObject_48; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentFloorObject_48() { return &___currentFloorObject_48; }
	inline void set_currentFloorObject_48(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentFloorObject_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFloorObject_48), (void*)value);
	}

	inline static int32_t get_offset_of_currentPlayAreaObject_49() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___currentPlayAreaObject_49)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentPlayAreaObject_49() const { return ___currentPlayAreaObject_49; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentPlayAreaObject_49() { return &___currentPlayAreaObject_49; }
	inline void set_currentPlayAreaObject_49(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentPlayAreaObject_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentPlayAreaObject_49), (void*)value);
	}

	inline static int32_t get_offset_of_currentTrackedAreaObject_50() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___currentTrackedAreaObject_50)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentTrackedAreaObject_50() const { return ___currentTrackedAreaObject_50; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentTrackedAreaObject_50() { return &___currentTrackedAreaObject_50; }
	inline void set_currentTrackedAreaObject_50(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentTrackedAreaObject_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentTrackedAreaObject_50), (void*)value);
	}

	inline static int32_t get_offset_of_currentBoundaryWallObject_51() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___currentBoundaryWallObject_51)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentBoundaryWallObject_51() const { return ___currentBoundaryWallObject_51; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentBoundaryWallObject_51() { return &___currentBoundaryWallObject_51; }
	inline void set_currentBoundaryWallObject_51(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentBoundaryWallObject_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentBoundaryWallObject_51), (void*)value);
	}

	inline static int32_t get_offset_of_currentCeilingObject_52() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718, ___currentCeilingObject_52)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentCeilingObject_52() const { return ___currentCeilingObject_52; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentCeilingObject_52() { return &___currentCeilingObject_52; }
	inline void set_currentCeilingObject_52(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentCeilingObject_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentCeilingObject_52), (void*)value);
	}
};

struct BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler> Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::OnVisualizationChanged
	EventFunction_1_t4CF5C391B37A361E289786E1A716C8224E32DA1F * ___OnVisualizationChanged_25;

public:
	inline static int32_t get_offset_of_OnVisualizationChanged_25() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718_StaticFields, ___OnVisualizationChanged_25)); }
	inline EventFunction_1_t4CF5C391B37A361E289786E1A716C8224E32DA1F * get_OnVisualizationChanged_25() const { return ___OnVisualizationChanged_25; }
	inline EventFunction_1_t4CF5C391B37A361E289786E1A716C8224E32DA1F ** get_address_of_OnVisualizationChanged_25() { return &___OnVisualizationChanged_25; }
	inline void set_OnVisualizationChanged_25(EventFunction_1_t4CF5C391B37A361E289786E1A716C8224E32DA1F * value)
	{
		___OnVisualizationChanged_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVisualizationChanged_25), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver
struct BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423  : public BaseSpatialObserver_t9979BC83AF86C4814E92D2936476A01FFB27B7D7
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshEventData
	MixedRealitySpatialAwarenessEventData_1_tCE1A9246904165288188F4BB4BB971B1EAF21339 * ___meshEventData_27;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::displayOption
	int32_t ___displayOption_37;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::levelOfDetail
	int32_t ___levelOfDetail_38;
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshes
	Dictionary_2_tE70FC4126194B961620E1F57B12665AE688A4382 * ___meshes_39;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshPhysicsLayer
	int32_t ___meshPhysicsLayer_40;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<RecalculateNormals>k__BackingField
	bool ___U3CRecalculateNormalsU3Ek__BackingField_41;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<TrianglesPerCubicMeter>k__BackingField
	int32_t ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::occlusionMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___occlusionMaterial_43;
	// UnityEngine.PhysicMaterial Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::physicsMaterial
	PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * ___physicsMaterial_44;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::visibleMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___visibleMaterial_45;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::runtimeSpatialMeshPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___runtimeSpatialMeshPrefab_46;

public:
	inline static int32_t get_offset_of_meshEventData_27() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423, ___meshEventData_27)); }
	inline MixedRealitySpatialAwarenessEventData_1_tCE1A9246904165288188F4BB4BB971B1EAF21339 * get_meshEventData_27() const { return ___meshEventData_27; }
	inline MixedRealitySpatialAwarenessEventData_1_tCE1A9246904165288188F4BB4BB971B1EAF21339 ** get_address_of_meshEventData_27() { return &___meshEventData_27; }
	inline void set_meshEventData_27(MixedRealitySpatialAwarenessEventData_1_tCE1A9246904165288188F4BB4BB971B1EAF21339 * value)
	{
		___meshEventData_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshEventData_27), (void*)value);
	}

	inline static int32_t get_offset_of_displayOption_37() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423, ___displayOption_37)); }
	inline int32_t get_displayOption_37() const { return ___displayOption_37; }
	inline int32_t* get_address_of_displayOption_37() { return &___displayOption_37; }
	inline void set_displayOption_37(int32_t value)
	{
		___displayOption_37 = value;
	}

	inline static int32_t get_offset_of_levelOfDetail_38() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423, ___levelOfDetail_38)); }
	inline int32_t get_levelOfDetail_38() const { return ___levelOfDetail_38; }
	inline int32_t* get_address_of_levelOfDetail_38() { return &___levelOfDetail_38; }
	inline void set_levelOfDetail_38(int32_t value)
	{
		___levelOfDetail_38 = value;
	}

	inline static int32_t get_offset_of_meshes_39() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423, ___meshes_39)); }
	inline Dictionary_2_tE70FC4126194B961620E1F57B12665AE688A4382 * get_meshes_39() const { return ___meshes_39; }
	inline Dictionary_2_tE70FC4126194B961620E1F57B12665AE688A4382 ** get_address_of_meshes_39() { return &___meshes_39; }
	inline void set_meshes_39(Dictionary_2_tE70FC4126194B961620E1F57B12665AE688A4382 * value)
	{
		___meshes_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_39), (void*)value);
	}

	inline static int32_t get_offset_of_meshPhysicsLayer_40() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423, ___meshPhysicsLayer_40)); }
	inline int32_t get_meshPhysicsLayer_40() const { return ___meshPhysicsLayer_40; }
	inline int32_t* get_address_of_meshPhysicsLayer_40() { return &___meshPhysicsLayer_40; }
	inline void set_meshPhysicsLayer_40(int32_t value)
	{
		___meshPhysicsLayer_40 = value;
	}

	inline static int32_t get_offset_of_U3CRecalculateNormalsU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423, ___U3CRecalculateNormalsU3Ek__BackingField_41)); }
	inline bool get_U3CRecalculateNormalsU3Ek__BackingField_41() const { return ___U3CRecalculateNormalsU3Ek__BackingField_41; }
	inline bool* get_address_of_U3CRecalculateNormalsU3Ek__BackingField_41() { return &___U3CRecalculateNormalsU3Ek__BackingField_41; }
	inline void set_U3CRecalculateNormalsU3Ek__BackingField_41(bool value)
	{
		___U3CRecalculateNormalsU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423, ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42)); }
	inline int32_t get_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() const { return ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42; }
	inline int32_t* get_address_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() { return &___U3CTrianglesPerCubicMeterU3Ek__BackingField_42; }
	inline void set_U3CTrianglesPerCubicMeterU3Ek__BackingField_42(int32_t value)
	{
		___U3CTrianglesPerCubicMeterU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_occlusionMaterial_43() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423, ___occlusionMaterial_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_occlusionMaterial_43() const { return ___occlusionMaterial_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_occlusionMaterial_43() { return &___occlusionMaterial_43; }
	inline void set_occlusionMaterial_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___occlusionMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMaterial_43), (void*)value);
	}

	inline static int32_t get_offset_of_physicsMaterial_44() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423, ___physicsMaterial_44)); }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * get_physicsMaterial_44() const { return ___physicsMaterial_44; }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 ** get_address_of_physicsMaterial_44() { return &___physicsMaterial_44; }
	inline void set_physicsMaterial_44(PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * value)
	{
		___physicsMaterial_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___physicsMaterial_44), (void*)value);
	}

	inline static int32_t get_offset_of_visibleMaterial_45() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423, ___visibleMaterial_45)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_visibleMaterial_45() const { return ___visibleMaterial_45; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_visibleMaterial_45() { return &___visibleMaterial_45; }
	inline void set_visibleMaterial_45(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___visibleMaterial_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visibleMaterial_45), (void*)value);
	}

	inline static int32_t get_offset_of_runtimeSpatialMeshPrefab_46() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423, ___runtimeSpatialMeshPrefab_46)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_runtimeSpatialMeshPrefab_46() const { return ___runtimeSpatialMeshPrefab_46; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_runtimeSpatialMeshPrefab_46() { return &___runtimeSpatialMeshPrefab_46; }
	inline void set_runtimeSpatialMeshPrefab_46(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___runtimeSpatialMeshPrefab_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runtimeSpatialMeshPrefab_46), (void*)value);
	}
};

struct BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshDisplayOptionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshDisplayOptionPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshPhysicsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshPhysicsPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedPhysicsLayerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedPhysicsLayerPerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAddedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshAddedPerfMarker_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAdded
	EventFunction_1_tABC1A87A6841AE3B7F37FCFB71B428D40EB048A4 * ___OnMeshAdded_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshUpdatedPerfMarker_33;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdated
	EventFunction_1_tABC1A87A6841AE3B7F37FCFB71B428D40EB048A4 * ___OnMeshUpdated_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemovedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshRemovedPerfMarker_35;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemoved
	EventFunction_1_tABC1A87A6841AE3B7F37FCFB71B428D40EB048A4 * ___OnMeshRemoved_36;

public:
	inline static int32_t get_offset_of_ApplyUpdatedMeshDisplayOptionPerfMarker_28() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423_StaticFields, ___ApplyUpdatedMeshDisplayOptionPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshDisplayOptionPerfMarker_28() const { return ___ApplyUpdatedMeshDisplayOptionPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshDisplayOptionPerfMarker_28() { return &___ApplyUpdatedMeshDisplayOptionPerfMarker_28; }
	inline void set_ApplyUpdatedMeshDisplayOptionPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshDisplayOptionPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedMeshPhysicsPerfMarker_29() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423_StaticFields, ___ApplyUpdatedMeshPhysicsPerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshPhysicsPerfMarker_29() const { return ___ApplyUpdatedMeshPhysicsPerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshPhysicsPerfMarker_29() { return &___ApplyUpdatedMeshPhysicsPerfMarker_29; }
	inline void set_ApplyUpdatedMeshPhysicsPerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshPhysicsPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedPhysicsLayerPerfMarker_30() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423_StaticFields, ___ApplyUpdatedPhysicsLayerPerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedPhysicsLayerPerfMarker_30() const { return ___ApplyUpdatedPhysicsLayerPerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedPhysicsLayerPerfMarker_30() { return &___ApplyUpdatedPhysicsLayerPerfMarker_30; }
	inline void set_ApplyUpdatedPhysicsLayerPerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedPhysicsLayerPerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_OnMeshAddedPerfMarker_31() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423_StaticFields, ___OnMeshAddedPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshAddedPerfMarker_31() const { return ___OnMeshAddedPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshAddedPerfMarker_31() { return &___OnMeshAddedPerfMarker_31; }
	inline void set_OnMeshAddedPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshAddedPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_OnMeshAdded_32() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423_StaticFields, ___OnMeshAdded_32)); }
	inline EventFunction_1_tABC1A87A6841AE3B7F37FCFB71B428D40EB048A4 * get_OnMeshAdded_32() const { return ___OnMeshAdded_32; }
	inline EventFunction_1_tABC1A87A6841AE3B7F37FCFB71B428D40EB048A4 ** get_address_of_OnMeshAdded_32() { return &___OnMeshAdded_32; }
	inline void set_OnMeshAdded_32(EventFunction_1_tABC1A87A6841AE3B7F37FCFB71B428D40EB048A4 * value)
	{
		___OnMeshAdded_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshAdded_32), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshUpdatedPerfMarker_33() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423_StaticFields, ___OnMeshUpdatedPerfMarker_33)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshUpdatedPerfMarker_33() const { return ___OnMeshUpdatedPerfMarker_33; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshUpdatedPerfMarker_33() { return &___OnMeshUpdatedPerfMarker_33; }
	inline void set_OnMeshUpdatedPerfMarker_33(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshUpdatedPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_OnMeshUpdated_34() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423_StaticFields, ___OnMeshUpdated_34)); }
	inline EventFunction_1_tABC1A87A6841AE3B7F37FCFB71B428D40EB048A4 * get_OnMeshUpdated_34() const { return ___OnMeshUpdated_34; }
	inline EventFunction_1_tABC1A87A6841AE3B7F37FCFB71B428D40EB048A4 ** get_address_of_OnMeshUpdated_34() { return &___OnMeshUpdated_34; }
	inline void set_OnMeshUpdated_34(EventFunction_1_tABC1A87A6841AE3B7F37FCFB71B428D40EB048A4 * value)
	{
		___OnMeshUpdated_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshUpdated_34), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshRemovedPerfMarker_35() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423_StaticFields, ___OnMeshRemovedPerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshRemovedPerfMarker_35() const { return ___OnMeshRemovedPerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshRemovedPerfMarker_35() { return &___OnMeshRemovedPerfMarker_35; }
	inline void set_OnMeshRemovedPerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshRemovedPerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_OnMeshRemoved_36() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423_StaticFields, ___OnMeshRemoved_36)); }
	inline EventFunction_1_tABC1A87A6841AE3B7F37FCFB71B428D40EB048A4 * get_OnMeshRemoved_36() const { return ___OnMeshRemoved_36; }
	inline EventFunction_1_tABC1A87A6841AE3B7F37FCFB71B428D40EB048A4 ** get_address_of_OnMeshRemoved_36() { return &___OnMeshRemoved_36; }
	inline void set_OnMeshRemoved_36(EventFunction_1_tABC1A87A6841AE3B7F37FCFB71B428D40EB048A4 * value)
	{
		___OnMeshRemoved_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshRemoved_36), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct BaseWindowsMixedRealityCameraSettings_t51025810E76E50BAE2139CDF2307E9ADB9484B51  : public BaseCameraSettingsProvider_t6A986D0C39D2BBC9E6B5A99ECE66D351FA8A37BA
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::reprojectionUpdater
	WindowsMixedRealityReprojectionUpdater_t402999B70BA37FA6205A97F17889D3931767A8CE * ___reprojectionUpdater_16;
	// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::projectionOverride
	ProjectionOverride_t378E9B4EF8C3FA80922E7EC95176F4B0DB63F0BD * ___projectionOverride_17;

public:
	inline static int32_t get_offset_of_reprojectionUpdater_16() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t51025810E76E50BAE2139CDF2307E9ADB9484B51, ___reprojectionUpdater_16)); }
	inline WindowsMixedRealityReprojectionUpdater_t402999B70BA37FA6205A97F17889D3931767A8CE * get_reprojectionUpdater_16() const { return ___reprojectionUpdater_16; }
	inline WindowsMixedRealityReprojectionUpdater_t402999B70BA37FA6205A97F17889D3931767A8CE ** get_address_of_reprojectionUpdater_16() { return &___reprojectionUpdater_16; }
	inline void set_reprojectionUpdater_16(WindowsMixedRealityReprojectionUpdater_t402999B70BA37FA6205A97F17889D3931767A8CE * value)
	{
		___reprojectionUpdater_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reprojectionUpdater_16), (void*)value);
	}

	inline static int32_t get_offset_of_projectionOverride_17() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t51025810E76E50BAE2139CDF2307E9ADB9484B51, ___projectionOverride_17)); }
	inline ProjectionOverride_t378E9B4EF8C3FA80922E7EC95176F4B0DB63F0BD * get_projectionOverride_17() const { return ___projectionOverride_17; }
	inline ProjectionOverride_t378E9B4EF8C3FA80922E7EC95176F4B0DB63F0BD ** get_address_of_projectionOverride_17() { return &___projectionOverride_17; }
	inline void set_projectionOverride_17(ProjectionOverride_t378E9B4EF8C3FA80922E7EC95176F4B0DB63F0BD * value)
	{
		___projectionOverride_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectionOverride_17), (void*)value);
	}
};

struct BaseWindowsMixedRealityCameraSettings_t51025810E76E50BAE2139CDF2307E9ADB9484B51_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::isTryGetViewConfigurationSupported
	bool ___isTryGetViewConfigurationSupported_15;

public:
	inline static int32_t get_offset_of_isTryGetViewConfigurationSupported_15() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t51025810E76E50BAE2139CDF2307E9ADB9484B51_StaticFields, ___isTryGetViewConfigurationSupported_15)); }
	inline bool get_isTryGetViewConfigurationSupported_15() const { return ___isTryGetViewConfigurationSupported_15; }
	inline bool* get_address_of_isTryGetViewConfigurationSupported_15() { return &___isTryGetViewConfigurationSupported_15; }
	inline void set_isTryGetViewConfigurationSupported_15(bool value)
	{
		___isTryGetViewConfigurationSupported_15 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider
struct WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F  : public BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::hasFailed
	bool ___hasFailed_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::hasListener
	bool ___hasListener_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::isTransitioning
	bool ___isTransitioning_26;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::inputSource
	RuntimeObject* ___inputSource_27;
	// System.Text.StringBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::textSoFar
	StringBuilder_t * ___textSoFar_28;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::deviceName
	String_t* ___deviceName_29;
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::samplingRate
	int32_t ___samplingRate_30;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationResult
	String_t* ___dictationResult_31;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationAudioClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___dictationAudioClip_32;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilPhraseRecognitionSystemHasStarted
	WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___waitUntilPhraseRecognitionSystemHasStarted_34;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilPhraseRecognitionSystemHasStopped
	WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___waitUntilPhraseRecognitionSystemHasStopped_35;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilDictationRecognizerHasStarted
	WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___waitUntilDictationRecognizerHasStarted_36;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilDictationRecognizerHasStopped
	WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___waitUntilDictationRecognizerHasStopped_37;

public:
	inline static int32_t get_offset_of_U3CIsListeningU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___U3CIsListeningU3Ek__BackingField_21)); }
	inline bool get_U3CIsListeningU3Ek__BackingField_21() const { return ___U3CIsListeningU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CIsListeningU3Ek__BackingField_21() { return &___U3CIsListeningU3Ek__BackingField_21; }
	inline void set_U3CIsListeningU3Ek__BackingField_21(bool value)
	{
		___U3CIsListeningU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_hasFailed_24() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___hasFailed_24)); }
	inline bool get_hasFailed_24() const { return ___hasFailed_24; }
	inline bool* get_address_of_hasFailed_24() { return &___hasFailed_24; }
	inline void set_hasFailed_24(bool value)
	{
		___hasFailed_24 = value;
	}

	inline static int32_t get_offset_of_hasListener_25() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___hasListener_25)); }
	inline bool get_hasListener_25() const { return ___hasListener_25; }
	inline bool* get_address_of_hasListener_25() { return &___hasListener_25; }
	inline void set_hasListener_25(bool value)
	{
		___hasListener_25 = value;
	}

	inline static int32_t get_offset_of_isTransitioning_26() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___isTransitioning_26)); }
	inline bool get_isTransitioning_26() const { return ___isTransitioning_26; }
	inline bool* get_address_of_isTransitioning_26() { return &___isTransitioning_26; }
	inline void set_isTransitioning_26(bool value)
	{
		___isTransitioning_26 = value;
	}

	inline static int32_t get_offset_of_inputSource_27() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___inputSource_27)); }
	inline RuntimeObject* get_inputSource_27() const { return ___inputSource_27; }
	inline RuntimeObject** get_address_of_inputSource_27() { return &___inputSource_27; }
	inline void set_inputSource_27(RuntimeObject* value)
	{
		___inputSource_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_27), (void*)value);
	}

	inline static int32_t get_offset_of_textSoFar_28() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___textSoFar_28)); }
	inline StringBuilder_t * get_textSoFar_28() const { return ___textSoFar_28; }
	inline StringBuilder_t ** get_address_of_textSoFar_28() { return &___textSoFar_28; }
	inline void set_textSoFar_28(StringBuilder_t * value)
	{
		___textSoFar_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textSoFar_28), (void*)value);
	}

	inline static int32_t get_offset_of_deviceName_29() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___deviceName_29)); }
	inline String_t* get_deviceName_29() const { return ___deviceName_29; }
	inline String_t** get_address_of_deviceName_29() { return &___deviceName_29; }
	inline void set_deviceName_29(String_t* value)
	{
		___deviceName_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceName_29), (void*)value);
	}

	inline static int32_t get_offset_of_samplingRate_30() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___samplingRate_30)); }
	inline int32_t get_samplingRate_30() const { return ___samplingRate_30; }
	inline int32_t* get_address_of_samplingRate_30() { return &___samplingRate_30; }
	inline void set_samplingRate_30(int32_t value)
	{
		___samplingRate_30 = value;
	}

	inline static int32_t get_offset_of_dictationResult_31() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___dictationResult_31)); }
	inline String_t* get_dictationResult_31() const { return ___dictationResult_31; }
	inline String_t** get_address_of_dictationResult_31() { return &___dictationResult_31; }
	inline void set_dictationResult_31(String_t* value)
	{
		___dictationResult_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationResult_31), (void*)value);
	}

	inline static int32_t get_offset_of_dictationAudioClip_32() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___dictationAudioClip_32)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_dictationAudioClip_32() const { return ___dictationAudioClip_32; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_dictationAudioClip_32() { return &___dictationAudioClip_32; }
	inline void set_dictationAudioClip_32(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___dictationAudioClip_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationAudioClip_32), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilPhraseRecognitionSystemHasStarted_34() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___waitUntilPhraseRecognitionSystemHasStarted_34)); }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * get_waitUntilPhraseRecognitionSystemHasStarted_34() const { return ___waitUntilPhraseRecognitionSystemHasStarted_34; }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 ** get_address_of_waitUntilPhraseRecognitionSystemHasStarted_34() { return &___waitUntilPhraseRecognitionSystemHasStarted_34; }
	inline void set_waitUntilPhraseRecognitionSystemHasStarted_34(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * value)
	{
		___waitUntilPhraseRecognitionSystemHasStarted_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilPhraseRecognitionSystemHasStarted_34), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilPhraseRecognitionSystemHasStopped_35() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___waitUntilPhraseRecognitionSystemHasStopped_35)); }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * get_waitUntilPhraseRecognitionSystemHasStopped_35() const { return ___waitUntilPhraseRecognitionSystemHasStopped_35; }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 ** get_address_of_waitUntilPhraseRecognitionSystemHasStopped_35() { return &___waitUntilPhraseRecognitionSystemHasStopped_35; }
	inline void set_waitUntilPhraseRecognitionSystemHasStopped_35(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * value)
	{
		___waitUntilPhraseRecognitionSystemHasStopped_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilPhraseRecognitionSystemHasStopped_35), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilDictationRecognizerHasStarted_36() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___waitUntilDictationRecognizerHasStarted_36)); }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * get_waitUntilDictationRecognizerHasStarted_36() const { return ___waitUntilDictationRecognizerHasStarted_36; }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 ** get_address_of_waitUntilDictationRecognizerHasStarted_36() { return &___waitUntilDictationRecognizerHasStarted_36; }
	inline void set_waitUntilDictationRecognizerHasStarted_36(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * value)
	{
		___waitUntilDictationRecognizerHasStarted_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilDictationRecognizerHasStarted_36), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilDictationRecognizerHasStopped_37() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___waitUntilDictationRecognizerHasStopped_37)); }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * get_waitUntilDictationRecognizerHasStopped_37() const { return ___waitUntilDictationRecognizerHasStopped_37; }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 ** get_address_of_waitUntilDictationRecognizerHasStopped_37() { return &___waitUntilDictationRecognizerHasStopped_37; }
	inline void set_waitUntilDictationRecognizerHasStopped_37(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * value)
	{
		___waitUntilDictationRecognizerHasStopped_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilDictationRecognizerHasStopped_37), (void*)value);
	}
};

struct WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StartRecordingAsyncPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___StartRecordingAsyncPerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecordingAsyncPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___StopRecordingAsyncPerfMarker_23;
	// UnityEngine.Windows.Speech.DictationRecognizer Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationRecognizer
	DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * ___dictationRecognizer_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_38;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationHypothesisPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DictationHypothesisPerfMarker_39;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationResultPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DictationResultPerfMarker_40;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationCompletePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DictationCompletePerfMarker_41;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationErrorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DictationErrorPerfMarker_42;

public:
	inline static int32_t get_offset_of_StartRecordingAsyncPerfMarker_22() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields, ___StartRecordingAsyncPerfMarker_22)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_StartRecordingAsyncPerfMarker_22() const { return ___StartRecordingAsyncPerfMarker_22; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_StartRecordingAsyncPerfMarker_22() { return &___StartRecordingAsyncPerfMarker_22; }
	inline void set_StartRecordingAsyncPerfMarker_22(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___StartRecordingAsyncPerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_StopRecordingAsyncPerfMarker_23() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields, ___StopRecordingAsyncPerfMarker_23)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_StopRecordingAsyncPerfMarker_23() const { return ___StopRecordingAsyncPerfMarker_23; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_StopRecordingAsyncPerfMarker_23() { return &___StopRecordingAsyncPerfMarker_23; }
	inline void set_StopRecordingAsyncPerfMarker_23(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___StopRecordingAsyncPerfMarker_23 = value;
	}

	inline static int32_t get_offset_of_dictationRecognizer_33() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields, ___dictationRecognizer_33)); }
	inline DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * get_dictationRecognizer_33() const { return ___dictationRecognizer_33; }
	inline DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B ** get_address_of_dictationRecognizer_33() { return &___dictationRecognizer_33; }
	inline void set_dictationRecognizer_33(DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * value)
	{
		___dictationRecognizer_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationRecognizer_33), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_38() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields, ___UpdatePerfMarker_38)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_38() const { return ___UpdatePerfMarker_38; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_38() { return &___UpdatePerfMarker_38; }
	inline void set_UpdatePerfMarker_38(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_38 = value;
	}

	inline static int32_t get_offset_of_DictationHypothesisPerfMarker_39() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields, ___DictationHypothesisPerfMarker_39)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DictationHypothesisPerfMarker_39() const { return ___DictationHypothesisPerfMarker_39; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DictationHypothesisPerfMarker_39() { return &___DictationHypothesisPerfMarker_39; }
	inline void set_DictationHypothesisPerfMarker_39(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DictationHypothesisPerfMarker_39 = value;
	}

	inline static int32_t get_offset_of_DictationResultPerfMarker_40() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields, ___DictationResultPerfMarker_40)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DictationResultPerfMarker_40() const { return ___DictationResultPerfMarker_40; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DictationResultPerfMarker_40() { return &___DictationResultPerfMarker_40; }
	inline void set_DictationResultPerfMarker_40(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DictationResultPerfMarker_40 = value;
	}

	inline static int32_t get_offset_of_DictationCompletePerfMarker_41() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields, ___DictationCompletePerfMarker_41)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DictationCompletePerfMarker_41() const { return ___DictationCompletePerfMarker_41; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DictationCompletePerfMarker_41() { return &___DictationCompletePerfMarker_41; }
	inline void set_DictationCompletePerfMarker_41(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DictationCompletePerfMarker_41 = value;
	}

	inline static int32_t get_offset_of_DictationErrorPerfMarker_42() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields, ___DictationErrorPerfMarker_42)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DictationErrorPerfMarker_42() const { return ___DictationErrorPerfMarker_42; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DictationErrorPerfMarker_42() { return &___DictationErrorPerfMarker_42; }
	inline void set_DictationErrorPerfMarker_42(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DictationErrorPerfMarker_42 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider
struct WindowsMixedRealityEyeGazeDataProvider_t0AC0E44FEAF3B512EC1874F4E6A121F2CA14CE21  : public BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::<SmoothEyeTracking>k__BackingField
	bool ___U3CSmoothEyeTrackingU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::gazeSmoother
	EyeGazeSmoother_t6DEC5C0A35740D638DDEF18A5836EBDF4A07D144 * ___gazeSmoother_22;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::OnSaccade
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccade_23;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::OnSaccadeX
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeX_24;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::OnSaccadeY
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeY_25;

public:
	inline static int32_t get_offset_of_U3CSmoothEyeTrackingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t0AC0E44FEAF3B512EC1874F4E6A121F2CA14CE21, ___U3CSmoothEyeTrackingU3Ek__BackingField_21)); }
	inline bool get_U3CSmoothEyeTrackingU3Ek__BackingField_21() const { return ___U3CSmoothEyeTrackingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CSmoothEyeTrackingU3Ek__BackingField_21() { return &___U3CSmoothEyeTrackingU3Ek__BackingField_21; }
	inline void set_U3CSmoothEyeTrackingU3Ek__BackingField_21(bool value)
	{
		___U3CSmoothEyeTrackingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_gazeSmoother_22() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t0AC0E44FEAF3B512EC1874F4E6A121F2CA14CE21, ___gazeSmoother_22)); }
	inline EyeGazeSmoother_t6DEC5C0A35740D638DDEF18A5836EBDF4A07D144 * get_gazeSmoother_22() const { return ___gazeSmoother_22; }
	inline EyeGazeSmoother_t6DEC5C0A35740D638DDEF18A5836EBDF4A07D144 ** get_address_of_gazeSmoother_22() { return &___gazeSmoother_22; }
	inline void set_gazeSmoother_22(EyeGazeSmoother_t6DEC5C0A35740D638DDEF18A5836EBDF4A07D144 * value)
	{
		___gazeSmoother_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeSmoother_22), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccade_23() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t0AC0E44FEAF3B512EC1874F4E6A121F2CA14CE21, ___OnSaccade_23)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccade_23() const { return ___OnSaccade_23; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccade_23() { return &___OnSaccade_23; }
	inline void set_OnSaccade_23(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccade_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccade_23), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeX_24() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t0AC0E44FEAF3B512EC1874F4E6A121F2CA14CE21, ___OnSaccadeX_24)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeX_24() const { return ___OnSaccadeX_24; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeX_24() { return &___OnSaccadeX_24; }
	inline void set_OnSaccadeX_24(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeX_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeX_24), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeY_25() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t0AC0E44FEAF3B512EC1874F4E6A121F2CA14CE21, ___OnSaccadeY_25)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeY_25() const { return ___OnSaccadeY_25; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeY_25() { return &___OnSaccadeY_25; }
	inline void set_OnSaccadeY_25(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeY_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeY_25), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver
struct WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7  : public BaseSpatialObserver_t9979BC83AF86C4814E92D2936476A01FFB27B7D7
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<SurfaceTypes>k__BackingField
	int32_t ___U3CSurfaceTypesU3Ek__BackingField_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<ShouldLoadFromFile>k__BackingField
	bool ___U3CShouldLoadFromFileU3Ek__BackingField_28;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<InstantiationBatchRate>k__BackingField
	int32_t ___U3CInstantiationBatchRateU3Ek__BackingField_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<InferRegions>k__BackingField
	bool ___U3CInferRegionsU3Ek__BackingField_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<RequestMeshData>k__BackingField
	bool ___U3CRequestMeshDataU3Ek__BackingField_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<RequestPlaneData>k__BackingField
	bool ___U3CRequestPlaneDataU3Ek__BackingField_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<RequestOcclusionMask>k__BackingField
	bool ___U3CRequestOcclusionMaskU3Ek__BackingField_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<UsePersistentObjects>k__BackingField
	bool ___U3CUsePersistentObjectsU3Ek__BackingField_34;
	// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<QueryRadius>k__BackingField
	float ___U3CQueryRadiusU3Ek__BackingField_35;
	// UnityEngine.Vector2Int Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<OcclusionMaskResolution>k__BackingField
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___U3COcclusionMaskResolutionU3Ek__BackingField_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<CreateGameObjects>k__BackingField
	bool ___U3CCreateGameObjectsU3Ek__BackingField_37;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<AutoUpdate>k__BackingField
	bool ___U3CAutoUpdateU3Ek__BackingField_38;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<OrientScene>k__BackingField
	bool ___U3COrientSceneU3Ek__BackingField_39;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<WorldMeshLevelOfDetail>k__BackingField
	int32_t ___U3CWorldMeshLevelOfDetailU3Ek__BackingField_40;
	// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<FirstAutoUpdateDelay>k__BackingField
	float ___U3CFirstAutoUpdateDelayU3Ek__BackingField_41;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<UpdateOnceInitialized>k__BackingField
	bool ___U3CUpdateOnceInitializedU3Ek__BackingField_42;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<DefaultMaterial>k__BackingField
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3CDefaultMaterialU3Ek__BackingField_43;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<DefaultWorldMeshMaterial>k__BackingField
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3CDefaultWorldMeshMaterialU3Ek__BackingField_44;
	// System.Byte[] Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::sceneBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___sceneBytes_45;
	// UnityEngine.TextAsset Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::serializedScene
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * ___serializedScene_46;

public:
	inline static int32_t get_offset_of_U3CSurfaceTypesU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7, ___U3CSurfaceTypesU3Ek__BackingField_27)); }
	inline int32_t get_U3CSurfaceTypesU3Ek__BackingField_27() const { return ___U3CSurfaceTypesU3Ek__BackingField_27; }
	inline int32_t* get_address_of_U3CSurfaceTypesU3Ek__BackingField_27() { return &___U3CSurfaceTypesU3Ek__BackingField_27; }
	inline void set_U3CSurfaceTypesU3Ek__BackingField_27(int32_t value)
	{
		___U3CSurfaceTypesU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CShouldLoadFromFileU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7, ___U3CShouldLoadFromFileU3Ek__BackingField_28)); }
	inline bool get_U3CShouldLoadFromFileU3Ek__BackingField_28() const { return ___U3CShouldLoadFromFileU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CShouldLoadFromFileU3Ek__BackingField_28() { return &___U3CShouldLoadFromFileU3Ek__BackingField_28; }
	inline void set_U3CShouldLoadFromFileU3Ek__BackingField_28(bool value)
	{
		___U3CShouldLoadFromFileU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CInstantiationBatchRateU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7, ___U3CInstantiationBatchRateU3Ek__BackingField_29)); }
	inline int32_t get_U3CInstantiationBatchRateU3Ek__BackingField_29() const { return ___U3CInstantiationBatchRateU3Ek__BackingField_29; }
	inline int32_t* get_address_of_U3CInstantiationBatchRateU3Ek__BackingField_29() { return &___U3CInstantiationBatchRateU3Ek__BackingField_29; }
	inline void set_U3CInstantiationBatchRateU3Ek__BackingField_29(int32_t value)
	{
		___U3CInstantiationBatchRateU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CInferRegionsU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7, ___U3CInferRegionsU3Ek__BackingField_30)); }
	inline bool get_U3CInferRegionsU3Ek__BackingField_30() const { return ___U3CInferRegionsU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CInferRegionsU3Ek__BackingField_30() { return &___U3CInferRegionsU3Ek__BackingField_30; }
	inline void set_U3CInferRegionsU3Ek__BackingField_30(bool value)
	{
		___U3CInferRegionsU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CRequestMeshDataU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7, ___U3CRequestMeshDataU3Ek__BackingField_31)); }
	inline bool get_U3CRequestMeshDataU3Ek__BackingField_31() const { return ___U3CRequestMeshDataU3Ek__BackingField_31; }
	inline bool* get_address_of_U3CRequestMeshDataU3Ek__BackingField_31() { return &___U3CRequestMeshDataU3Ek__BackingField_31; }
	inline void set_U3CRequestMeshDataU3Ek__BackingField_31(bool value)
	{
		___U3CRequestMeshDataU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CRequestPlaneDataU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7, ___U3CRequestPlaneDataU3Ek__BackingField_32)); }
	inline bool get_U3CRequestPlaneDataU3Ek__BackingField_32() const { return ___U3CRequestPlaneDataU3Ek__BackingField_32; }
	inline bool* get_address_of_U3CRequestPlaneDataU3Ek__BackingField_32() { return &___U3CRequestPlaneDataU3Ek__BackingField_32; }
	inline void set_U3CRequestPlaneDataU3Ek__BackingField_32(bool value)
	{
		___U3CRequestPlaneDataU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CRequestOcclusionMaskU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7, ___U3CRequestOcclusionMaskU3Ek__BackingField_33)); }
	inline bool get_U3CRequestOcclusionMaskU3Ek__BackingField_33() const { return ___U3CRequestOcclusionMaskU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CRequestOcclusionMaskU3Ek__BackingField_33() { return &___U3CRequestOcclusionMaskU3Ek__BackingField_33; }
	inline void set_U3CRequestOcclusionMaskU3Ek__BackingField_33(bool value)
	{
		___U3CRequestOcclusionMaskU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CUsePersistentObjectsU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7, ___U3CUsePersistentObjectsU3Ek__BackingField_34)); }
	inline bool get_U3CUsePersistentObjectsU3Ek__BackingField_34() const { return ___U3CUsePersistentObjectsU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CUsePersistentObjectsU3Ek__BackingField_34() { return &___U3CUsePersistentObjectsU3Ek__BackingField_34; }
	inline void set_U3CUsePersistentObjectsU3Ek__BackingField_34(bool value)
	{
		___U3CUsePersistentObjectsU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CQueryRadiusU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7, ___U3CQueryRadiusU3Ek__BackingField_35)); }
	inline float get_U3CQueryRadiusU3Ek__BackingField_35() const { return ___U3CQueryRadiusU3Ek__BackingField_35; }
	inline float* get_address_of_U3CQueryRadiusU3Ek__BackingField_35() { return &___U3CQueryRadiusU3Ek__BackingField_35; }
	inline void set_U3CQueryRadiusU3Ek__BackingField_35(float value)
	{
		___U3CQueryRadiusU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3COcclusionMaskResolutionU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7, ___U3COcclusionMaskResolutionU3Ek__BackingField_36)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_U3COcclusionMaskResolutionU3Ek__BackingField_36() const { return ___U3COcclusionMaskResolutionU3Ek__BackingField_36; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_U3COcclusionMaskResolutionU3Ek__BackingField_36() { return &___U3COcclusionMaskResolutionU3Ek__BackingField_36; }
	inline void set_U3COcclusionMaskResolutionU3Ek__BackingField_36(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___U3COcclusionMaskResolutionU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CCreateGameObjectsU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7, ___U3CCreateGameObjectsU3Ek__BackingField_37)); }
	inline bool get_U3CCreateGameObjectsU3Ek__BackingField_37() const { return ___U3CCreateGameObjectsU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CCreateGameObjectsU3Ek__BackingField_37() { return &___U3CCreateGameObjectsU3Ek__BackingField_37; }
	inline void set_U3CCreateGameObjectsU3Ek__BackingField_37(bool value)
	{
		___U3CCreateGameObjectsU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3CAutoUpdateU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7, ___U3CAutoUpdateU3Ek__BackingField_38)); }
	inline bool get_U3CAutoUpdateU3Ek__BackingField_38() const { return ___U3CAutoUpdateU3Ek__BackingField_38; }
	inline bool* get_address_of_U3CAutoUpdateU3Ek__BackingField_38() { return &___U3CAutoUpdateU3Ek__BackingField_38; }
	inline void set_U3CAutoUpdateU3Ek__BackingField_38(bool value)
	{
		___U3CAutoUpdateU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_U3COrientSceneU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7, ___U3COrientSceneU3Ek__BackingField_39)); }
	inline bool get_U3COrientSceneU3Ek__BackingField_39() const { return ___U3COrientSceneU3Ek__BackingField_39; }
	inline bool* get_address_of_U3COrientSceneU3Ek__BackingField_39() { return &___U3COrientSceneU3Ek__BackingField_39; }
	inline void set_U3COrientSceneU3Ek__BackingField_39(bool value)
	{
		___U3COrientSceneU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_U3CWorldMeshLevelOfDetailU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7, ___U3CWorldMeshLevelOfDetailU3Ek__BackingField_40)); }
	inline int32_t get_U3CWorldMeshLevelOfDetailU3Ek__BackingField_40() const { return ___U3CWorldMeshLevelOfDetailU3Ek__BackingField_40; }
	inline int32_t* get_address_of_U3CWorldMeshLevelOfDetailU3Ek__BackingField_40() { return &___U3CWorldMeshLevelOfDetailU3Ek__BackingField_40; }
	inline void set_U3CWorldMeshLevelOfDetailU3Ek__BackingField_40(int32_t value)
	{
		___U3CWorldMeshLevelOfDetailU3Ek__BackingField_40 = value;
	}

	inline static int32_t get_offset_of_U3CFirstAutoUpdateDelayU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7, ___U3CFirstAutoUpdateDelayU3Ek__BackingField_41)); }
	inline float get_U3CFirstAutoUpdateDelayU3Ek__BackingField_41() const { return ___U3CFirstAutoUpdateDelayU3Ek__BackingField_41; }
	inline float* get_address_of_U3CFirstAutoUpdateDelayU3Ek__BackingField_41() { return &___U3CFirstAutoUpdateDelayU3Ek__BackingField_41; }
	inline void set_U3CFirstAutoUpdateDelayU3Ek__BackingField_41(float value)
	{
		___U3CFirstAutoUpdateDelayU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3CUpdateOnceInitializedU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7, ___U3CUpdateOnceInitializedU3Ek__BackingField_42)); }
	inline bool get_U3CUpdateOnceInitializedU3Ek__BackingField_42() const { return ___U3CUpdateOnceInitializedU3Ek__BackingField_42; }
	inline bool* get_address_of_U3CUpdateOnceInitializedU3Ek__BackingField_42() { return &___U3CUpdateOnceInitializedU3Ek__BackingField_42; }
	inline void set_U3CUpdateOnceInitializedU3Ek__BackingField_42(bool value)
	{
		___U3CUpdateOnceInitializedU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultMaterialU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7, ___U3CDefaultMaterialU3Ek__BackingField_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3CDefaultMaterialU3Ek__BackingField_43() const { return ___U3CDefaultMaterialU3Ek__BackingField_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3CDefaultMaterialU3Ek__BackingField_43() { return &___U3CDefaultMaterialU3Ek__BackingField_43; }
	inline void set_U3CDefaultMaterialU3Ek__BackingField_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3CDefaultMaterialU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultMaterialU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultWorldMeshMaterialU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7, ___U3CDefaultWorldMeshMaterialU3Ek__BackingField_44)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3CDefaultWorldMeshMaterialU3Ek__BackingField_44() const { return ___U3CDefaultWorldMeshMaterialU3Ek__BackingField_44; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3CDefaultWorldMeshMaterialU3Ek__BackingField_44() { return &___U3CDefaultWorldMeshMaterialU3Ek__BackingField_44; }
	inline void set_U3CDefaultWorldMeshMaterialU3Ek__BackingField_44(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3CDefaultWorldMeshMaterialU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultWorldMeshMaterialU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_sceneBytes_45() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7, ___sceneBytes_45)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_sceneBytes_45() const { return ___sceneBytes_45; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_sceneBytes_45() { return &___sceneBytes_45; }
	inline void set_sceneBytes_45(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___sceneBytes_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneBytes_45), (void*)value);
	}

	inline static int32_t get_offset_of_serializedScene_46() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7, ___serializedScene_46)); }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * get_serializedScene_46() const { return ___serializedScene_46; }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 ** get_address_of_serializedScene_46() { return &___serializedScene_46; }
	inline void set_serializedScene_46(TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * value)
	{
		___serializedScene_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializedScene_46), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider
struct WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5  : public BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::<RecognitionConfidenceLevel>k__BackingField
	int32_t ___U3CRecognitionConfidenceLevelU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Input.BaseGlobalInputSource Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::globalInputSource
	BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036 * ___globalInputSource_22;
	// UnityEngine.Windows.Speech.KeywordRecognizer Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::keywordRecognizer
	KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * ___keywordRecognizer_23;

public:
	inline static int32_t get_offset_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5, ___U3CRecognitionConfidenceLevelU3Ek__BackingField_21)); }
	inline int32_t get_U3CRecognitionConfidenceLevelU3Ek__BackingField_21() const { return ___U3CRecognitionConfidenceLevelU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_21() { return &___U3CRecognitionConfidenceLevelU3Ek__BackingField_21; }
	inline void set_U3CRecognitionConfidenceLevelU3Ek__BackingField_21(int32_t value)
	{
		___U3CRecognitionConfidenceLevelU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_globalInputSource_22() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5, ___globalInputSource_22)); }
	inline BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036 * get_globalInputSource_22() const { return ___globalInputSource_22; }
	inline BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036 ** get_address_of_globalInputSource_22() { return &___globalInputSource_22; }
	inline void set_globalInputSource_22(BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036 * value)
	{
		___globalInputSource_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalInputSource_22), (void*)value);
	}

	inline static int32_t get_offset_of_keywordRecognizer_23() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5, ___keywordRecognizer_23)); }
	inline KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * get_keywordRecognizer_23() const { return ___keywordRecognizer_23; }
	inline KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F ** get_address_of_keywordRecognizer_23() { return &___keywordRecognizer_23; }
	inline void set_keywordRecognizer_23(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * value)
	{
		___keywordRecognizer_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keywordRecognizer_23), (void*)value);
	}
};

struct WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::OnPhraseRecognizedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnPhraseRecognizedPerfMarker_25;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_24() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_StaticFields, ___UpdatePerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_24() const { return ___UpdatePerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_24() { return &___UpdatePerfMarker_24; }
	inline void set_UpdatePerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_OnPhraseRecognizedPerfMarker_25() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_StaticFields, ___OnPhraseRecognizedPerfMarker_25)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnPhraseRecognizedPerfMarker_25() const { return ___OnPhraseRecognizedPerfMarker_25; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnPhraseRecognizedPerfMarker_25() { return &___OnPhraseRecognizedPerfMarker_25; }
	inline void set_OnPhraseRecognizedPerfMarker_25(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnPhraseRecognizedPerfMarker_25 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t481EB74A36039900DA57F5348518DC3B44075F99  : public BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevices_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevicesSubset
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevicesSubset_23;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::lastInputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___lastInputDevices_24;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::<DesiredInputCharacteristics>k__BackingField
	List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_inputDevices_22() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t481EB74A36039900DA57F5348518DC3B44075F99, ___inputDevices_22)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevices_22() const { return ___inputDevices_22; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevices_22() { return &___inputDevices_22; }
	inline void set_inputDevices_22(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevices_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevices_22), (void*)value);
	}

	inline static int32_t get_offset_of_inputDevicesSubset_23() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t481EB74A36039900DA57F5348518DC3B44075F99, ___inputDevicesSubset_23)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevicesSubset_23() const { return ___inputDevicesSubset_23; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevicesSubset_23() { return &___inputDevicesSubset_23; }
	inline void set_inputDevicesSubset_23(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevicesSubset_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevicesSubset_23), (void*)value);
	}

	inline static int32_t get_offset_of_lastInputDevices_24() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t481EB74A36039900DA57F5348518DC3B44075F99, ___lastInputDevices_24)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_lastInputDevices_24() const { return ___lastInputDevices_24; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_lastInputDevices_24() { return &___lastInputDevices_24; }
	inline void set_lastInputDevices_24(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___lastInputDevices_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastInputDevices_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t481EB74A36039900DA57F5348518DC3B44075F99, ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25)); }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * get_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() const { return ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25; }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C ** get_address_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() { return &___U3CDesiredInputCharacteristicsU3Ek__BackingField_25; }
	inline void set_U3CDesiredInputCharacteristicsU3Ek__BackingField_25(List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * value)
	{
		___U3CDesiredInputCharacteristicsU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDesiredInputCharacteristicsU3Ek__BackingField_25), (void*)value);
	}
};

struct XRSDKDeviceManager_t481EB74A36039900DA57F5348518DC3B44075F99_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::ActiveControllers
	Dictionary_2_t68C23527642AC5DB8C32E9468893B995CFA0EE37 * ___ActiveControllers_21;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetOrAddControllerPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveControllerPerfMarker_28;

public:
	inline static int32_t get_offset_of_ActiveControllers_21() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t481EB74A36039900DA57F5348518DC3B44075F99_StaticFields, ___ActiveControllers_21)); }
	inline Dictionary_2_t68C23527642AC5DB8C32E9468893B995CFA0EE37 * get_ActiveControllers_21() const { return ___ActiveControllers_21; }
	inline Dictionary_2_t68C23527642AC5DB8C32E9468893B995CFA0EE37 ** get_address_of_ActiveControllers_21() { return &___ActiveControllers_21; }
	inline void set_ActiveControllers_21(Dictionary_2_t68C23527642AC5DB8C32E9468893B995CFA0EE37 * value)
	{
		___ActiveControllers_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveControllers_21), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_26() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t481EB74A36039900DA57F5348518DC3B44075F99_StaticFields, ___UpdatePerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_26() const { return ___UpdatePerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_26() { return &___UpdatePerfMarker_26; }
	inline void set_UpdatePerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_GetOrAddControllerPerfMarker_27() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t481EB74A36039900DA57F5348518DC3B44075F99_StaticFields, ___GetOrAddControllerPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetOrAddControllerPerfMarker_27() const { return ___GetOrAddControllerPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetOrAddControllerPerfMarker_27() { return &___GetOrAddControllerPerfMarker_27; }
	inline void set_GetOrAddControllerPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetOrAddControllerPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_RemoveControllerPerfMarker_28() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t481EB74A36039900DA57F5348518DC3B44075F99_StaticFields, ___RemoveControllerPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveControllerPerfMarker_28() const { return ___RemoveControllerPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveControllerPerfMarker_28() { return &___RemoveControllerPerfMarker_28; }
	inline void set_RemoveControllerPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveControllerPerfMarker_28 = value;
	}
};


// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ActionToRebind
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * ___m_ActionToRebind_1;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingMask
	Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD  ___m_BindingMask_2;
	// System.Type UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ControlType
	Type_t * ___m_ControlType_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExpectedLayout
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_ExpectedLayout_4;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePathCount
	int32_t ___m_IncludePathCount_5;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePaths
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_IncludePaths_6;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePathCount
	int32_t ___m_ExcludePathCount_7;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePaths
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_ExcludePaths_8;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_TargetBindingIndex
	int32_t ___m_TargetBindingIndex_9;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingGroupForNewBinding
	String_t* ___m_BindingGroupForNewBinding_10;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_CancelBinding
	String_t* ___m_CancelBinding_11;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_MagnitudeThreshold
	float ___m_MagnitudeThreshold_12;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Scores
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Scores_13;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Magnitudes
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Magnitudes_14;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LastMatchTime
	double ___m_LastMatchTime_15;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartTime
	double ___m_StartTime_16;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Timeout
	float ___m_Timeout_17;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_WaitSecondsAfterMatch
	float ___m_WaitSecondsAfterMatch_18;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Candidates
	InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8  ___m_Candidates_19;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComplete
	Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * ___m_OnComplete_20;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnCancel
	Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * ___m_OnCancel_21;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnPotentialMatch
	Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * ___m_OnPotentialMatch_22;
	// System.Func`2<UnityEngine.InputSystem.InputControl,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnGeneratePath
	Func_2_t98DA4F6FDB8252DB2E23D85DA4AFD83E31126912 * ___m_OnGeneratePath_23;
	// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComputeScore
	Func_3_t18B48906F1B089C7F2B521F0A6C36D03976CCF6E * ___m_OnComputeScore_24;
	// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnApplyBinding
	Action_2_tCD3A19F09D928B91560C314DF9651496E00DD76F * ___m_OnApplyBinding_25;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnEventDelegate
	Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493 * ___m_OnEventDelegate_26;
	// System.Action UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnAfterUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnAfterUpdateDelegate_27;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LayoutCache
	Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  ___m_LayoutCache_28;
	// System.Text.StringBuilder UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_PathBuilder
	StringBuilder_t * ___m_PathBuilder_29;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Flags
	int32_t ___m_Flags_30;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.InputControl,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartingActuations
	Dictionary_2_tD9AF58FD2A2776973AD15D0D2222092EB1DC03A4 * ___m_StartingActuations_31;

public:
	inline static int32_t get_offset_of_m_ActionToRebind_1() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_ActionToRebind_1)); }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * get_m_ActionToRebind_1() const { return ___m_ActionToRebind_1; }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 ** get_address_of_m_ActionToRebind_1() { return &___m_ActionToRebind_1; }
	inline void set_m_ActionToRebind_1(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * value)
	{
		___m_ActionToRebind_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionToRebind_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_2() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_BindingMask_2)); }
	inline Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD  get_m_BindingMask_2() const { return ___m_BindingMask_2; }
	inline Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD * get_address_of_m_BindingMask_2() { return &___m_BindingMask_2; }
	inline void set_m_BindingMask_2(Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD  value)
	{
		___m_BindingMask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ControlType_3() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_ControlType_3)); }
	inline Type_t * get_m_ControlType_3() const { return ___m_ControlType_3; }
	inline Type_t ** get_address_of_m_ControlType_3() { return &___m_ControlType_3; }
	inline void set_m_ControlType_3(Type_t * value)
	{
		___m_ControlType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlType_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExpectedLayout_4() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_ExpectedLayout_4)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_ExpectedLayout_4() const { return ___m_ExpectedLayout_4; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_ExpectedLayout_4() { return &___m_ExpectedLayout_4; }
	inline void set_m_ExpectedLayout_4(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_ExpectedLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ExpectedLayout_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ExpectedLayout_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_IncludePathCount_5() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_IncludePathCount_5)); }
	inline int32_t get_m_IncludePathCount_5() const { return ___m_IncludePathCount_5; }
	inline int32_t* get_address_of_m_IncludePathCount_5() { return &___m_IncludePathCount_5; }
	inline void set_m_IncludePathCount_5(int32_t value)
	{
		___m_IncludePathCount_5 = value;
	}

	inline static int32_t get_offset_of_m_IncludePaths_6() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_IncludePaths_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_IncludePaths_6() const { return ___m_IncludePaths_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_IncludePaths_6() { return &___m_IncludePaths_6; }
	inline void set_m_IncludePaths_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_IncludePaths_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_IncludePaths_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExcludePathCount_7() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_ExcludePathCount_7)); }
	inline int32_t get_m_ExcludePathCount_7() const { return ___m_ExcludePathCount_7; }
	inline int32_t* get_address_of_m_ExcludePathCount_7() { return &___m_ExcludePathCount_7; }
	inline void set_m_ExcludePathCount_7(int32_t value)
	{
		___m_ExcludePathCount_7 = value;
	}

	inline static int32_t get_offset_of_m_ExcludePaths_8() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_ExcludePaths_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_ExcludePaths_8() const { return ___m_ExcludePaths_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_ExcludePaths_8() { return &___m_ExcludePaths_8; }
	inline void set_m_ExcludePaths_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_ExcludePaths_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExcludePaths_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetBindingIndex_9() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_TargetBindingIndex_9)); }
	inline int32_t get_m_TargetBindingIndex_9() const { return ___m_TargetBindingIndex_9; }
	inline int32_t* get_address_of_m_TargetBindingIndex_9() { return &___m_TargetBindingIndex_9; }
	inline void set_m_TargetBindingIndex_9(int32_t value)
	{
		___m_TargetBindingIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_BindingGroupForNewBinding_10() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_BindingGroupForNewBinding_10)); }
	inline String_t* get_m_BindingGroupForNewBinding_10() const { return ___m_BindingGroupForNewBinding_10; }
	inline String_t** get_address_of_m_BindingGroupForNewBinding_10() { return &___m_BindingGroupForNewBinding_10; }
	inline void set_m_BindingGroupForNewBinding_10(String_t* value)
	{
		___m_BindingGroupForNewBinding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingGroupForNewBinding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelBinding_11() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_CancelBinding_11)); }
	inline String_t* get_m_CancelBinding_11() const { return ___m_CancelBinding_11; }
	inline String_t** get_address_of_m_CancelBinding_11() { return &___m_CancelBinding_11; }
	inline void set_m_CancelBinding_11(String_t* value)
	{
		___m_CancelBinding_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelBinding_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_MagnitudeThreshold_12() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_MagnitudeThreshold_12)); }
	inline float get_m_MagnitudeThreshold_12() const { return ___m_MagnitudeThreshold_12; }
	inline float* get_address_of_m_MagnitudeThreshold_12() { return &___m_MagnitudeThreshold_12; }
	inline void set_m_MagnitudeThreshold_12(float value)
	{
		___m_MagnitudeThreshold_12 = value;
	}

	inline static int32_t get_offset_of_m_Scores_13() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_Scores_13)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Scores_13() const { return ___m_Scores_13; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Scores_13() { return &___m_Scores_13; }
	inline void set_m_Scores_13(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Scores_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scores_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Magnitudes_14() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_Magnitudes_14)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Magnitudes_14() const { return ___m_Magnitudes_14; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Magnitudes_14() { return &___m_Magnitudes_14; }
	inline void set_m_Magnitudes_14(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Magnitudes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Magnitudes_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastMatchTime_15() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_LastMatchTime_15)); }
	inline double get_m_LastMatchTime_15() const { return ___m_LastMatchTime_15; }
	inline double* get_address_of_m_LastMatchTime_15() { return &___m_LastMatchTime_15; }
	inline void set_m_LastMatchTime_15(double value)
	{
		___m_LastMatchTime_15 = value;
	}

	inline static int32_t get_offset_of_m_StartTime_16() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_StartTime_16)); }
	inline double get_m_StartTime_16() const { return ___m_StartTime_16; }
	inline double* get_address_of_m_StartTime_16() { return &___m_StartTime_16; }
	inline void set_m_StartTime_16(double value)
	{
		___m_StartTime_16 = value;
	}

	inline static int32_t get_offset_of_m_Timeout_17() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_Timeout_17)); }
	inline float get_m_Timeout_17() const { return ___m_Timeout_17; }
	inline float* get_address_of_m_Timeout_17() { return &___m_Timeout_17; }
	inline void set_m_Timeout_17(float value)
	{
		___m_Timeout_17 = value;
	}

	inline static int32_t get_offset_of_m_WaitSecondsAfterMatch_18() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_WaitSecondsAfterMatch_18)); }
	inline float get_m_WaitSecondsAfterMatch_18() const { return ___m_WaitSecondsAfterMatch_18; }
	inline float* get_address_of_m_WaitSecondsAfterMatch_18() { return &___m_WaitSecondsAfterMatch_18; }
	inline void set_m_WaitSecondsAfterMatch_18(float value)
	{
		___m_WaitSecondsAfterMatch_18 = value;
	}

	inline static int32_t get_offset_of_m_Candidates_19() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_Candidates_19)); }
	inline InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8  get_m_Candidates_19() const { return ___m_Candidates_19; }
	inline InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8 * get_address_of_m_Candidates_19() { return &___m_Candidates_19; }
	inline void set_m_Candidates_19(InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8  value)
	{
		___m_Candidates_19 = value;
	}

	inline static int32_t get_offset_of_m_OnComplete_20() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnComplete_20)); }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * get_m_OnComplete_20() const { return ___m_OnComplete_20; }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B ** get_address_of_m_OnComplete_20() { return &___m_OnComplete_20; }
	inline void set_m_OnComplete_20(Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * value)
	{
		___m_OnComplete_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnComplete_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnCancel_21() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnCancel_21)); }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * get_m_OnCancel_21() const { return ___m_OnCancel_21; }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B ** get_address_of_m_OnCancel_21() { return &___m_OnCancel_21; }
	inline void set_m_OnCancel_21(Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * value)
	{
		___m_OnCancel_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCancel_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnPotentialMatch_22() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnPotentialMatch_22)); }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * get_m_OnPotentialMatch_22() const { return ___m_OnPotentialMatch_22; }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B ** get_address_of_m_OnPotentialMatch_22() { return &___m_OnPotentialMatch_22; }
	inline void set_m_OnPotentialMatch_22(Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * value)
	{
		___m_OnPotentialMatch_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnPotentialMatch_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnGeneratePath_23() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnGeneratePath_23)); }
	inline Func_2_t98DA4F6FDB8252DB2E23D85DA4AFD83E31126912 * get_m_OnGeneratePath_23() const { return ___m_OnGeneratePath_23; }
	inline Func_2_t98DA4F6FDB8252DB2E23D85DA4AFD83E31126912 ** get_address_of_m_OnGeneratePath_23() { return &___m_OnGeneratePath_23; }
	inline void set_m_OnGeneratePath_23(Func_2_t98DA4F6FDB8252DB2E23D85DA4AFD83E31126912 * value)
	{
		___m_OnGeneratePath_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnGeneratePath_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnComputeScore_24() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnComputeScore_24)); }
	inline Func_3_t18B48906F1B089C7F2B521F0A6C36D03976CCF6E * get_m_OnComputeScore_24() const { return ___m_OnComputeScore_24; }
	inline Func_3_t18B48906F1B089C7F2B521F0A6C36D03976CCF6E ** get_address_of_m_OnComputeScore_24() { return &___m_OnComputeScore_24; }
	inline void set_m_OnComputeScore_24(Func_3_t18B48906F1B089C7F2B521F0A6C36D03976CCF6E * value)
	{
		___m_OnComputeScore_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnComputeScore_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnApplyBinding_25() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnApplyBinding_25)); }
	inline Action_2_tCD3A19F09D928B91560C314DF9651496E00DD76F * get_m_OnApplyBinding_25() const { return ___m_OnApplyBinding_25; }
	inline Action_2_tCD3A19F09D928B91560C314DF9651496E00DD76F ** get_address_of_m_OnApplyBinding_25() { return &___m_OnApplyBinding_25; }
	inline void set_m_OnApplyBinding_25(Action_2_tCD3A19F09D928B91560C314DF9651496E00DD76F * value)
	{
		___m_OnApplyBinding_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnApplyBinding_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnEventDelegate_26() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnEventDelegate_26)); }
	inline Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493 * get_m_OnEventDelegate_26() const { return ___m_OnEventDelegate_26; }
	inline Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493 ** get_address_of_m_OnEventDelegate_26() { return &___m_OnEventDelegate_26; }
	inline void set_m_OnEventDelegate_26(Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493 * value)
	{
		___m_OnEventDelegate_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEventDelegate_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateDelegate_27() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnAfterUpdateDelegate_27)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnAfterUpdateDelegate_27() const { return ___m_OnAfterUpdateDelegate_27; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnAfterUpdateDelegate_27() { return &___m_OnAfterUpdateDelegate_27; }
	inline void set_m_OnAfterUpdateDelegate_27(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnAfterUpdateDelegate_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnAfterUpdateDelegate_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_LayoutCache_28() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_LayoutCache_28)); }
	inline Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  get_m_LayoutCache_28() const { return ___m_LayoutCache_28; }
	inline Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D * get_address_of_m_LayoutCache_28() { return &___m_LayoutCache_28; }
	inline void set_m_LayoutCache_28(Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  value)
	{
		___m_LayoutCache_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_LayoutCache_28))->___table_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_PathBuilder_29() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_PathBuilder_29)); }
	inline StringBuilder_t * get_m_PathBuilder_29() const { return ___m_PathBuilder_29; }
	inline StringBuilder_t ** get_address_of_m_PathBuilder_29() { return &___m_PathBuilder_29; }
	inline void set_m_PathBuilder_29(StringBuilder_t * value)
	{
		___m_PathBuilder_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PathBuilder_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_30() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_Flags_30)); }
	inline int32_t get_m_Flags_30() const { return ___m_Flags_30; }
	inline int32_t* get_address_of_m_Flags_30() { return &___m_Flags_30; }
	inline void set_m_Flags_30(int32_t value)
	{
		___m_Flags_30 = value;
	}

	inline static int32_t get_offset_of_m_StartingActuations_31() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_StartingActuations_31)); }
	inline Dictionary_2_tD9AF58FD2A2776973AD15D0D2222092EB1DC03A4 * get_m_StartingActuations_31() const { return ___m_StartingActuations_31; }
	inline Dictionary_2_tD9AF58FD2A2776973AD15D0D2222092EB1DC03A4 ** get_address_of_m_StartingActuations_31() { return &___m_StartingActuations_31; }
	inline void set_m_StartingActuations_31(Dictionary_2_tD9AF58FD2A2776973AD15D0D2222092EB1DC03A4 * value)
	{
		___m_StartingActuations_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingActuations_31), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F  : public BaseSpatialMeshObserver_tD5158223B7E371C0AB9E597ECA3F6D5D4BECB423
{
public:
	// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::observersCache
	RuntimeObject* ___observersCache_47;
	// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshSubsystem
	XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * ___meshSubsystem_48;
	// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshWorkQueue
	Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * ___meshWorkQueue_50;
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshInfos
	List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * ___meshInfos_51;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::outstandingMeshObject
	SpatialAwarenessMeshObject_t2B5D333FB9CAF7BE763E0AE99EE05569C8EA1F0F * ___outstandingMeshObject_52;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::spareMeshObject
	SpatialAwarenessMeshObject_t2B5D333FB9CAF7BE763E0AE99EE05569C8EA1F0F * ___spareMeshObject_53;
	// System.Single Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::lastUpdated
	float ___lastUpdated_54;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObserverOrigin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObserverOrigin_63;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObservationExtents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObservationExtents_64;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObserverVolumeType
	int32_t ___oldObserverVolumeType_65;

public:
	inline static int32_t get_offset_of_observersCache_47() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F, ___observersCache_47)); }
	inline RuntimeObject* get_observersCache_47() const { return ___observersCache_47; }
	inline RuntimeObject** get_address_of_observersCache_47() { return &___observersCache_47; }
	inline void set_observersCache_47(RuntimeObject* value)
	{
		___observersCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observersCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_meshSubsystem_48() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F, ___meshSubsystem_48)); }
	inline XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * get_meshSubsystem_48() const { return ___meshSubsystem_48; }
	inline XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 ** get_address_of_meshSubsystem_48() { return &___meshSubsystem_48; }
	inline void set_meshSubsystem_48(XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * value)
	{
		___meshSubsystem_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshSubsystem_48), (void*)value);
	}

	inline static int32_t get_offset_of_meshWorkQueue_50() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F, ___meshWorkQueue_50)); }
	inline Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * get_meshWorkQueue_50() const { return ___meshWorkQueue_50; }
	inline Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B ** get_address_of_meshWorkQueue_50() { return &___meshWorkQueue_50; }
	inline void set_meshWorkQueue_50(Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * value)
	{
		___meshWorkQueue_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshWorkQueue_50), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfos_51() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F, ___meshInfos_51)); }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * get_meshInfos_51() const { return ___meshInfos_51; }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D ** get_address_of_meshInfos_51() { return &___meshInfos_51; }
	inline void set_meshInfos_51(List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * value)
	{
		___meshInfos_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfos_51), (void*)value);
	}

	inline static int32_t get_offset_of_outstandingMeshObject_52() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F, ___outstandingMeshObject_52)); }
	inline SpatialAwarenessMeshObject_t2B5D333FB9CAF7BE763E0AE99EE05569C8EA1F0F * get_outstandingMeshObject_52() const { return ___outstandingMeshObject_52; }
	inline SpatialAwarenessMeshObject_t2B5D333FB9CAF7BE763E0AE99EE05569C8EA1F0F ** get_address_of_outstandingMeshObject_52() { return &___outstandingMeshObject_52; }
	inline void set_outstandingMeshObject_52(SpatialAwarenessMeshObject_t2B5D333FB9CAF7BE763E0AE99EE05569C8EA1F0F * value)
	{
		___outstandingMeshObject_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outstandingMeshObject_52), (void*)value);
	}

	inline static int32_t get_offset_of_spareMeshObject_53() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F, ___spareMeshObject_53)); }
	inline SpatialAwarenessMeshObject_t2B5D333FB9CAF7BE763E0AE99EE05569C8EA1F0F * get_spareMeshObject_53() const { return ___spareMeshObject_53; }
	inline SpatialAwarenessMeshObject_t2B5D333FB9CAF7BE763E0AE99EE05569C8EA1F0F ** get_address_of_spareMeshObject_53() { return &___spareMeshObject_53; }
	inline void set_spareMeshObject_53(SpatialAwarenessMeshObject_t2B5D333FB9CAF7BE763E0AE99EE05569C8EA1F0F * value)
	{
		___spareMeshObject_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spareMeshObject_53), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdated_54() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F, ___lastUpdated_54)); }
	inline float get_lastUpdated_54() const { return ___lastUpdated_54; }
	inline float* get_address_of_lastUpdated_54() { return &___lastUpdated_54; }
	inline void set_lastUpdated_54(float value)
	{
		___lastUpdated_54 = value;
	}

	inline static int32_t get_offset_of_oldObserverOrigin_63() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F, ___oldObserverOrigin_63)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObserverOrigin_63() const { return ___oldObserverOrigin_63; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObserverOrigin_63() { return &___oldObserverOrigin_63; }
	inline void set_oldObserverOrigin_63(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObserverOrigin_63 = value;
	}

	inline static int32_t get_offset_of_oldObservationExtents_64() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F, ___oldObservationExtents_64)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObservationExtents_64() const { return ___oldObservationExtents_64; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObservationExtents_64() { return &___oldObservationExtents_64; }
	inline void set_oldObservationExtents_64(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObservationExtents_64 = value;
	}

	inline static int32_t get_offset_of_oldObserverVolumeType_65() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F, ___oldObserverVolumeType_65)); }
	inline int32_t get_oldObserverVolumeType_65() const { return ___oldObserverVolumeType_65; }
	inline int32_t* get_address_of_oldObserverVolumeType_65() { return &___oldObserverVolumeType_65; }
	inline void set_oldObserverVolumeType_65(int32_t value)
	{
		___oldObserverVolumeType_65 = value;
	}
};

struct GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ResumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResumePerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::SuspendPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SuspendPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ClearObservationsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ClearObservationsPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserverPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateObserverPerfMarker_58;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMeshPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestMeshPerfMarker_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveMeshObjectPerfMarker_60;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ReclaimMeshObjectPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ConfigureObserverVolumePerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateMeshesPerfMarker_66;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationActionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___MeshGenerationActionPerfMarker_67;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_49() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F_StaticFields, ___UpdatePerfMarker_49)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_49() const { return ___UpdatePerfMarker_49; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_49() { return &___UpdatePerfMarker_49; }
	inline void set_UpdatePerfMarker_49(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_ResumePerfMarker_55() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F_StaticFields, ___ResumePerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResumePerfMarker_55() const { return ___ResumePerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResumePerfMarker_55() { return &___ResumePerfMarker_55; }
	inline void set_ResumePerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResumePerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_SuspendPerfMarker_56() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F_StaticFields, ___SuspendPerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SuspendPerfMarker_56() const { return ___SuspendPerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SuspendPerfMarker_56() { return &___SuspendPerfMarker_56; }
	inline void set_SuspendPerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SuspendPerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsPerfMarker_57() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F_StaticFields, ___ClearObservationsPerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ClearObservationsPerfMarker_57() const { return ___ClearObservationsPerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ClearObservationsPerfMarker_57() { return &___ClearObservationsPerfMarker_57; }
	inline void set_ClearObservationsPerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ClearObservationsPerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_UpdateObserverPerfMarker_58() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F_StaticFields, ___UpdateObserverPerfMarker_58)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateObserverPerfMarker_58() const { return ___UpdateObserverPerfMarker_58; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateObserverPerfMarker_58() { return &___UpdateObserverPerfMarker_58; }
	inline void set_UpdateObserverPerfMarker_58(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateObserverPerfMarker_58 = value;
	}

	inline static int32_t get_offset_of_RequestMeshPerfMarker_59() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F_StaticFields, ___RequestMeshPerfMarker_59)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestMeshPerfMarker_59() const { return ___RequestMeshPerfMarker_59; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestMeshPerfMarker_59() { return &___RequestMeshPerfMarker_59; }
	inline void set_RequestMeshPerfMarker_59(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestMeshPerfMarker_59 = value;
	}

	inline static int32_t get_offset_of_RemoveMeshObjectPerfMarker_60() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F_StaticFields, ___RemoveMeshObjectPerfMarker_60)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveMeshObjectPerfMarker_60() const { return ___RemoveMeshObjectPerfMarker_60; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveMeshObjectPerfMarker_60() { return &___RemoveMeshObjectPerfMarker_60; }
	inline void set_RemoveMeshObjectPerfMarker_60(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveMeshObjectPerfMarker_60 = value;
	}

	inline static int32_t get_offset_of_ReclaimMeshObjectPerfMarker_61() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F_StaticFields, ___ReclaimMeshObjectPerfMarker_61)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ReclaimMeshObjectPerfMarker_61() const { return ___ReclaimMeshObjectPerfMarker_61; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ReclaimMeshObjectPerfMarker_61() { return &___ReclaimMeshObjectPerfMarker_61; }
	inline void set_ReclaimMeshObjectPerfMarker_61(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ReclaimMeshObjectPerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_62() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F_StaticFields, ___ConfigureObserverVolumePerfMarker_62)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ConfigureObserverVolumePerfMarker_62() const { return ___ConfigureObserverVolumePerfMarker_62; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ConfigureObserverVolumePerfMarker_62() { return &___ConfigureObserverVolumePerfMarker_62; }
	inline void set_ConfigureObserverVolumePerfMarker_62(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ConfigureObserverVolumePerfMarker_62 = value;
	}

	inline static int32_t get_offset_of_UpdateMeshesPerfMarker_66() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F_StaticFields, ___UpdateMeshesPerfMarker_66)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateMeshesPerfMarker_66() const { return ___UpdateMeshesPerfMarker_66; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateMeshesPerfMarker_66() { return &___UpdateMeshesPerfMarker_66; }
	inline void set_UpdateMeshesPerfMarker_66(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateMeshesPerfMarker_66 = value;
	}

	inline static int32_t get_offset_of_MeshGenerationActionPerfMarker_67() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F_StaticFields, ___MeshGenerationActionPerfMarker_67)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_MeshGenerationActionPerfMarker_67() const { return ___MeshGenerationActionPerfMarker_67; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_MeshGenerationActionPerfMarker_67() { return &___MeshGenerationActionPerfMarker_67; }
	inline void set_MeshGenerationActionPerfMarker_67(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___MeshGenerationActionPerfMarker_67 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings
struct WindowsMixedRealityCameraSettings_t6B424442E39CAB3317E7320A32A980B3CBEE3D6D  : public BaseWindowsMixedRealityCameraSettings_t51025810E76E50BAE2139CDF2307E9ADB9484B51
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager
struct WindowsMixedRealityDeviceManager_tB0B001BE58035212604D90DB9E84F31D159D1567  : public XRSDKDeviceManager_t481EB74A36039900DA57F5348518DC3B44075F99
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::mixedRealityGazeProviderHeadOverride
	RuntimeObject* ___mixedRealityGazeProviderHeadOverride_29;
	// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::voiceController
	WindowsMixedRealityXRSDKGGVHand_t13D1BBDEAFEB911EB12EFA8BDD8BA35056A20851 * ___voiceController_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::shouldSendVoiceEvents
	bool ___shouldSendVoiceEvents_31;

public:
	inline static int32_t get_offset_of_mixedRealityGazeProviderHeadOverride_29() { return static_cast<int32_t>(offsetof(WindowsMixedRealityDeviceManager_tB0B001BE58035212604D90DB9E84F31D159D1567, ___mixedRealityGazeProviderHeadOverride_29)); }
	inline RuntimeObject* get_mixedRealityGazeProviderHeadOverride_29() const { return ___mixedRealityGazeProviderHeadOverride_29; }
	inline RuntimeObject** get_address_of_mixedRealityGazeProviderHeadOverride_29() { return &___mixedRealityGazeProviderHeadOverride_29; }
	inline void set_mixedRealityGazeProviderHeadOverride_29(RuntimeObject* value)
	{
		___mixedRealityGazeProviderHeadOverride_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixedRealityGazeProviderHeadOverride_29), (void*)value);
	}

	inline static int32_t get_offset_of_voiceController_30() { return static_cast<int32_t>(offsetof(WindowsMixedRealityDeviceManager_tB0B001BE58035212604D90DB9E84F31D159D1567, ___voiceController_30)); }
	inline WindowsMixedRealityXRSDKGGVHand_t13D1BBDEAFEB911EB12EFA8BDD8BA35056A20851 * get_voiceController_30() const { return ___voiceController_30; }
	inline WindowsMixedRealityXRSDKGGVHand_t13D1BBDEAFEB911EB12EFA8BDD8BA35056A20851 ** get_address_of_voiceController_30() { return &___voiceController_30; }
	inline void set_voiceController_30(WindowsMixedRealityXRSDKGGVHand_t13D1BBDEAFEB911EB12EFA8BDD8BA35056A20851 * value)
	{
		___voiceController_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceController_30), (void*)value);
	}

	inline static int32_t get_offset_of_shouldSendVoiceEvents_31() { return static_cast<int32_t>(offsetof(WindowsMixedRealityDeviceManager_tB0B001BE58035212604D90DB9E84F31D159D1567, ___shouldSendVoiceEvents_31)); }
	inline bool get_shouldSendVoiceEvents_31() const { return ___shouldSendVoiceEvents_31; }
	inline bool* get_address_of_shouldSendVoiceEvents_31() { return &___shouldSendVoiceEvents_31; }
	inline void set_shouldSendVoiceEvents_31(bool value)
	{
		___shouldSendVoiceEvents_31 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem
struct XRSDKBoundarySystem_t9E4B50F5600463D98ACAAEE2294A8411A9A4B2C6  : public BaseBoundarySystem_tD9F94D1E2C9DEE252D5F5AC6F2682D56173ED718
{
public:
	// System.String Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_54;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(XRSDKBoundarySystem_t9E4B50F5600463D98ACAAEE2294A8411A9A4B2C6, ___U3CNameU3Ek__BackingField_54)); }
	inline String_t* get_U3CNameU3Ek__BackingField_54() const { return ___U3CNameU3Ek__BackingField_54; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_54() { return &___U3CNameU3Ek__BackingField_54; }
	inline void set_U3CNameU3Ek__BackingField_54(String_t* value)
	{
		___U3CNameU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_54), (void*)value);
	}
};

struct XRSDKBoundarySystem_t9E4B50F5600463D98ACAAEE2294A8411A9A4B2C6_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::XRInputSubsystems
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___XRInputSubsystems_53;

public:
	inline static int32_t get_offset_of_XRInputSubsystems_53() { return static_cast<int32_t>(offsetof(XRSDKBoundarySystem_t9E4B50F5600463D98ACAAEE2294A8411A9A4B2C6_StaticFields, ___XRInputSubsystems_53)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_XRInputSubsystems_53() const { return ___XRInputSubsystems_53; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_XRInputSubsystems_53() { return &___XRInputSubsystems_53; }
	inline void set_XRInputSubsystems_53(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___XRInputSubsystems_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XRInputSubsystems_53), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver
struct WindowsMixedRealitySpatialMeshObserver_t76BE9D80BE7AA623478EC3E8ADD81AC8379BC5B9  : public GenericXRSDKSpatialMeshObserver_tCBE768BCA6C3A6FC9091B833D05BE5BD73040B7F
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::oldObserverOrigin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObserverOrigin_69;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::oldObservationExtents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObservationExtents_70;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::oldObserverVolumeType
	int32_t ___oldObserverVolumeType_71;

public:
	inline static int32_t get_offset_of_oldObserverOrigin_69() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t76BE9D80BE7AA623478EC3E8ADD81AC8379BC5B9, ___oldObserverOrigin_69)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObserverOrigin_69() const { return ___oldObserverOrigin_69; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObserverOrigin_69() { return &___oldObserverOrigin_69; }
	inline void set_oldObserverOrigin_69(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObserverOrigin_69 = value;
	}

	inline static int32_t get_offset_of_oldObservationExtents_70() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t76BE9D80BE7AA623478EC3E8ADD81AC8379BC5B9, ___oldObservationExtents_70)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObservationExtents_70() const { return ___oldObservationExtents_70; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObservationExtents_70() { return &___oldObservationExtents_70; }
	inline void set_oldObservationExtents_70(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObservationExtents_70 = value;
	}

	inline static int32_t get_offset_of_oldObserverVolumeType_71() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t76BE9D80BE7AA623478EC3E8ADD81AC8379BC5B9, ___oldObserverVolumeType_71)); }
	inline int32_t get_oldObserverVolumeType_71() const { return ___oldObserverVolumeType_71; }
	inline int32_t* get_address_of_oldObserverVolumeType_71() { return &___oldObserverVolumeType_71; }
	inline void set_oldObserverVolumeType_71(int32_t value)
	{
		___oldObserverVolumeType_71 = value;
	}
};

struct WindowsMixedRealitySpatialMeshObserver_t76BE9D80BE7AA623478EC3E8ADD81AC8379BC5B9_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ConfigureObserverVolumePerfMarker_68;

public:
	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_68() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t76BE9D80BE7AA623478EC3E8ADD81AC8379BC5B9_StaticFields, ___ConfigureObserverVolumePerfMarker_68)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ConfigureObserverVolumePerfMarker_68() const { return ___ConfigureObserverVolumePerfMarker_68; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ConfigureObserverVolumePerfMarker_68() { return &___ConfigureObserverVolumePerfMarker_68; }
	inline void set_ConfigureObserverVolumePerfMarker_68(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ConfigureObserverVolumePerfMarker_68 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);


// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.get_Capacity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_mFCD1D3C1A5DC7CB389927A5529BCD86518ED0AB5_inline (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method);
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_mBC04A275BE71FE110C0A6B94A66A5F9726F6461F_inline (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.put_Length(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m2B1B2192ECCDAE8762FC18CC6B16B4BC5551D95B (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess.GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_mAF0662BC19B20E3AC7377C080B057C9423B49014 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.GetUnmarshalClass(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_mF89EBF002568BC8D18BA6B28CE2A02A3C67D8426 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.GetMarshalSizeMax(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m4140DA5FB36C45D0C1EC1352BEA8DE6696578064 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.MarshalInterface(System.IntPtr,System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_mB73D77AE608A5F1EF29F56F06C45DE1C04B8F639 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.UnmarshalInterface(System.IntPtr,System.Guid&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_m71734EF46FAADB9CEE534A73D08FC73352F37B39 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.ReleaseMarshalData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m1BBAA5FC9C261A979249C3720C077D910619B4BF (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, intptr_t ___pStm0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.DisconnectObject(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_mA7586ECB5656276267A0336CA96A2083B41B1BBC (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, uint32_t ___dwReserved0, const RuntimeMethod* method);

// COM Callable Wrapper for UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Numerics.Vector3
struct Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper>, IReference_1_t82C05BA472430109829B64EEB0BA4AA8DA57EF70, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t82C05BA472430109829B64EEB0BA4AA8DA57EF70::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t82C05BA472430109829B64EEB0BA4AA8DA57EF70*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t82C05BA472430109829B64EEB0BA4AA8DA57EF70::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m41BE14B78D883205B1AB0B0F28DB78816768D26D(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  returnValue;
		try
		{
			returnValue = *static_cast<Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 *>(UnBox(GetManagedObjectInline(), Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Numerics.Vector3
struct Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper>, IReference_1_t2E90AA27DAF67A0C5212F008ED5019775E438EAF, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t2E90AA27DAF67A0C5212F008ED5019775E438EAF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t2E90AA27DAF67A0C5212F008ED5019775E438EAF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t2E90AA27DAF67A0C5212F008ED5019775E438EAF::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mEFF123E1BD76AEDAED0313C6AC9D05313CBA7487(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F  returnValue;
		try
		{
			returnValue = *static_cast<Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F *>(UnBox(GetManagedObjectInline(), Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.WinRtToNetFxStreamAdapter
struct WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider
struct WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings
struct WindowsMixedRealityCameraSettings_t6B424442E39CAB3317E7320A32A980B3CBEE3D6D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsMixedRealityCameraSettings_t6B424442E39CAB3317E7320A32A980B3CBEE3D6D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsMixedRealityCameraSettings_t6B424442E39CAB3317E7320A32A980B3CBEE3D6D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsMixedRealityCameraSettings_t6B424442E39CAB3317E7320A32A980B3CBEE3D6D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsMixedRealityCameraSettings_t6B424442E39CAB3317E7320A32A980B3CBEE3D6D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsMixedRealityCameraSettings_t6B424442E39CAB3317E7320A32A980B3CBEE3D6D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsMixedRealityCameraSettings_t6B424442E39CAB3317E7320A32A980B3CBEE3D6D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager
struct WindowsMixedRealityDeviceManager_tB0B001BE58035212604D90DB9E84F31D159D1567_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsMixedRealityDeviceManager_tB0B001BE58035212604D90DB9E84F31D159D1567_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsMixedRealityDeviceManager_tB0B001BE58035212604D90DB9E84F31D159D1567_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsMixedRealityDeviceManager_tB0B001BE58035212604D90DB9E84F31D159D1567_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsMixedRealityDeviceManager_tB0B001BE58035212604D90DB9E84F31D159D1567(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsMixedRealityDeviceManager_tB0B001BE58035212604D90DB9E84F31D159D1567_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsMixedRealityDeviceManager_tB0B001BE58035212604D90DB9E84F31D159D1567_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider
struct WindowsMixedRealityEyeGazeDataProvider_t0AC0E44FEAF3B512EC1874F4E6A121F2CA14CE21_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsMixedRealityEyeGazeDataProvider_t0AC0E44FEAF3B512EC1874F4E6A121F2CA14CE21_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsMixedRealityEyeGazeDataProvider_t0AC0E44FEAF3B512EC1874F4E6A121F2CA14CE21_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsMixedRealityEyeGazeDataProvider_t0AC0E44FEAF3B512EC1874F4E6A121F2CA14CE21_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsMixedRealityEyeGazeDataProvider_t0AC0E44FEAF3B512EC1874F4E6A121F2CA14CE21(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsMixedRealityEyeGazeDataProvider_t0AC0E44FEAF3B512EC1874F4E6A121F2CA14CE21_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsMixedRealityEyeGazeDataProvider_t0AC0E44FEAF3B512EC1874F4E6A121F2CA14CE21_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver
struct WindowsMixedRealitySpatialMeshObserver_t76BE9D80BE7AA623478EC3E8ADD81AC8379BC5B9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsMixedRealitySpatialMeshObserver_t76BE9D80BE7AA623478EC3E8ADD81AC8379BC5B9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsMixedRealitySpatialMeshObserver_t76BE9D80BE7AA623478EC3E8ADD81AC8379BC5B9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsMixedRealitySpatialMeshObserver_t76BE9D80BE7AA623478EC3E8ADD81AC8379BC5B9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsMixedRealitySpatialMeshObserver_t76BE9D80BE7AA623478EC3E8ADD81AC8379BC5B9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsMixedRealitySpatialMeshObserver_t76BE9D80BE7AA623478EC3E8ADD81AC8379BC5B9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsMixedRealitySpatialMeshObserver_t76BE9D80BE7AA623478EC3E8ADD81AC8379BC5B9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper>, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC, IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E, IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F, IAgileObject_t6F1702BEB08256952B124A9982A893DF328C2434
{
	inline WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAgileObject_t6F1702BEB08256952B124A9982A893DF328C2434::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAgileObject_t6F1702BEB08256952B124A9982A893DF328C2434*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m970326E6407CE3EC1CF64E69994517B316028691(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			returnValue = WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_mFCD1D3C1A5DC7CB389927A5529BCD86518ED0AB5_inline(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_mF5A8C72B170E0798C7D1709BFD0E501FDF566349(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			returnValue = WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_mBC04A275BE71FE110C0A6B94A66A5F9726F6461F_inline(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m257651767765E9EB93F950F3ADA01F4ACF8A2D59(uint32_t ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m2B1B2192ECCDAE8762FC18CC6B16B4BC5551D95B(__thisValue, ___value0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBufferByteAccess_GetBuffer_m8F6F0F782B7EA90FC90602224E5817AF96A568A9(intptr_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		intptr_t returnValue;
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			returnValue = WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_mAF0662BC19B20E3AC7377C080B057C9423B49014(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_GetUnmarshalClass_m8E46B958BDAD31CAB4469F61769C4A43CEE851B0(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pCid5' to managed representation
		Guid_t  ____pCid5_empty;
		memset((&____pCid5_empty), 0, sizeof(____pCid5_empty));

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_mF89EBF002568BC8D18BA6B28CE2A02A3C67D8426(__thisValue, ___riid0, ___pv1, ___dwDestContext2, ___pvDestContext3, ___mshlFlags4, (&____pCid5_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pCid5' back from managed representation
		*___pCid5 = ____pCid5_empty;

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_GetMarshalSizeMax_mF0954EED35E28BBA1CE5D782B9468FAFA2794CE7(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pSize5' to managed representation
		uint32_t ____pSize5_empty = 0;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m4140DA5FB36C45D0C1EC1352BEA8DE6696578064(__thisValue, ___riid0, ___pv1, ___dwDestContext2, ___pvDestContext3, ___mshlflags4, (&____pSize5_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pSize5' back from managed representation
		*___pSize5 = ____pSize5_empty;

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_MarshalInterface_mA481A30479B4E39647B608B7ED40FB7AEB302A68(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_mB73D77AE608A5F1EF29F56F06C45DE1C04B8F639(__thisValue, ___pStm0, ___riid1, ___pv2, ___dwDestContext3, ___pvDestContext4, ___mshlflags5, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_UnmarshalInterface_m535C6AE1A1625CCBEE16A8AADD6FA0228668B5AF(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___ppv2' to managed representation
		intptr_t ____ppv2_empty;
		memset((&____ppv2_empty), 0, sizeof(____ppv2_empty));

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_m71734EF46FAADB9CEE534A73D08FC73352F37B39(__thisValue, ___pStm0, ___riid1, (&____ppv2_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___ppv2' back from managed representation
		*___ppv2 = ____ppv2_empty;

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_ReleaseMarshalData_m99BFE51BA91305E8BDDBAE578DE0DE99A1FA626F(intptr_t ___pStm0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m1BBAA5FC9C261A979249C3720C077D910619B4BF(__thisValue, ___pStm0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_DisconnectObject_m7B4B9C315995DCCA208E1681D8747ED4005BAC30(uint32_t ___dwReserved0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_mA7586ECB5656276267A0336CA96A2083B41B1BBC(__thisValue, ___dwReserved0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver
struct WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsSceneUnderstandingObserver_t68DCF295E05853184FC851D3B67E7C3A552766C7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider
struct WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem
struct XRSDKBoundarySystem_t9E4B50F5600463D98ACAAEE2294A8411A9A4B2C6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XRSDKBoundarySystem_t9E4B50F5600463D98ACAAEE2294A8411A9A4B2C6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline XRSDKBoundarySystem_t9E4B50F5600463D98ACAAEE2294A8411A9A4B2C6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XRSDKBoundarySystem_t9E4B50F5600463D98ACAAEE2294A8411A9A4B2C6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XRSDKBoundarySystem_t9E4B50F5600463D98ACAAEE2294A8411A9A4B2C6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XRSDKBoundarySystem_t9E4B50F5600463D98ACAAEE2294A8411A9A4B2C6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XRSDKBoundarySystem_t9E4B50F5600463D98ACAAEE2294A8411A9A4B2C6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t481EB74A36039900DA57F5348518DC3B44075F99_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XRSDKDeviceManager_t481EB74A36039900DA57F5348518DC3B44075F99_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline XRSDKDeviceManager_t481EB74A36039900DA57F5348518DC3B44075F99_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XRSDKDeviceManager_t481EB74A36039900DA57F5348518DC3B44075F99_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XRSDKDeviceManager_t481EB74A36039900DA57F5348518DC3B44075F99(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XRSDKDeviceManager_t481EB74A36039900DA57F5348518DC3B44075F99_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XRSDKDeviceManager_t481EB74A36039900DA57F5348518DC3B44075F99_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7
struct U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Connect>d__17
struct U3CConnectU3Ed__17_t1BA83F62BA9FAF10775E004B8CA5587F53DA141F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CConnectU3Ed__17_t1BA83F62BA9FAF10775E004B8CA5587F53DA141F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CConnectU3Ed__17_t1BA83F62BA9FAF10775E004B8CA5587F53DA141F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CConnectU3Ed__17_t1BA83F62BA9FAF10775E004B8CA5587F53DA141F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CConnectU3Ed__17_t1BA83F62BA9FAF10775E004B8CA5587F53DA141F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CConnectU3Ed__17_t1BA83F62BA9FAF10775E004B8CA5587F53DA141F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CConnectU3Ed__17_t1BA83F62BA9FAF10775E004B8CA5587F53DA141F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__18
struct U3CListenU3Ed__18_t3BE1E2EB24F8B3129D42D384DC96F90FB2575550_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CListenU3Ed__18_t3BE1E2EB24F8B3129D42D384DC96F90FB2575550_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CListenU3Ed__18_t3BE1E2EB24F8B3129D42D384DC96F90FB2575550_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CListenU3Ed__18_t3BE1E2EB24F8B3129D42D384DC96F90FB2575550_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CListenU3Ed__18_t3BE1E2EB24F8B3129D42D384DC96F90FB2575550(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CListenU3Ed__18_t3BE1E2EB24F8B3129D42D384DC96F90FB2575550_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CListenU3Ed__18_t3BE1E2EB24F8B3129D42D384DC96F90FB2575550_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Reflection.Assembly/UnmanagedMemoryStreamForModule
struct UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12
struct U3CSequenceU3Ed__12_t1DD821C904BD37C11636BE253742C50F1ECF937C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSequenceU3Ed__12_t1DD821C904BD37C11636BE253742C50F1ECF937C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CSequenceU3Ed__12_t1DD821C904BD37C11636BE253742C50F1ECF937C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSequenceU3Ed__12_t1DD821C904BD37C11636BE253742C50F1ECF937C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSequenceU3Ed__12_t1DD821C904BD37C11636BE253742C50F1ECF937C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSequenceU3Ed__12_t1DD821C904BD37C11636BE253742C50F1ECF937C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSequenceU3Ed__12_t1DD821C904BD37C11636BE253742C50F1ECF937C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13
struct U3CWaitForSpeechCommandU3Ed__13_t9CB1CCB7D8A85765735EC9B93D023C99C3A77CD8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CWaitForSpeechCommandU3Ed__13_t9CB1CCB7D8A85765735EC9B93D023C99C3A77CD8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CWaitForSpeechCommandU3Ed__13_t9CB1CCB7D8A85765735EC9B93D023C99C3A77CD8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CWaitForSpeechCommandU3Ed__13_t9CB1CCB7D8A85765735EC9B93D023C99C3A77CD8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CWaitForSpeechCommandU3Ed__13_t9CB1CCB7D8A85765735EC9B93D023C99C3A77CD8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CWaitForSpeechCommandU3Ed__13_t9CB1CCB7D8A85765735EC9B93D023C99C3A77CD8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CWaitForSpeechCommandU3Ed__13_t9CB1CCB7D8A85765735EC9B93D023C99C3A77CD8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12
struct U3CSequenceU3Ed__12_t1D9A238AA12DA1C2F4010E2E5F884A7175450DB5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSequenceU3Ed__12_t1D9A238AA12DA1C2F4010E2E5F884A7175450DB5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CSequenceU3Ed__12_t1D9A238AA12DA1C2F4010E2E5F884A7175450DB5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSequenceU3Ed__12_t1D9A238AA12DA1C2F4010E2E5F884A7175450DB5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSequenceU3Ed__12_t1D9A238AA12DA1C2F4010E2E5F884A7175450DB5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSequenceU3Ed__12_t1D9A238AA12DA1C2F4010E2E5F884A7175450DB5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSequenceU3Ed__12_t1D9A238AA12DA1C2F4010E2E5F884A7175450DB5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13
struct U3CWaitForSpeechCommandU3Ed__13_t41F84FDBD07F4A8FD4CFBD7AF943A0B0909447F7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CWaitForSpeechCommandU3Ed__13_t41F84FDBD07F4A8FD4CFBD7AF943A0B0909447F7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CWaitForSpeechCommandU3Ed__13_t41F84FDBD07F4A8FD4CFBD7AF943A0B0909447F7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CWaitForSpeechCommandU3Ed__13_t41F84FDBD07F4A8FD4CFBD7AF943A0B0909447F7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CWaitForSpeechCommandU3Ed__13_t41F84FDBD07F4A8FD4CFBD7AF943A0B0909447F7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CWaitForSpeechCommandU3Ed__13_t41F84FDBD07F4A8FD4CFBD7AF943A0B0909447F7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CWaitForSpeechCommandU3Ed__13_t41F84FDBD07F4A8FD4CFBD7AF943A0B0909447F7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.Button/<OnFinishSubmit>d__9
struct U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Experimental.InteractiveElement.CompressableButton/<AnimateHighlightPlate>d__104
struct U3CAnimateHighlightPlateU3Ed__104_t0AA7673102C4A87C0153D814FE243BA15792761A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAnimateHighlightPlateU3Ed__104_t0AA7673102C4A87C0153D814FE243BA15792761A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CAnimateHighlightPlateU3Ed__104_t0AA7673102C4A87C0153D814FE243BA15792761A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAnimateHighlightPlateU3Ed__104_t0AA7673102C4A87C0153D814FE243BA15792761A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAnimateHighlightPlateU3Ed__104_t0AA7673102C4A87C0153D814FE243BA15792761A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAnimateHighlightPlateU3Ed__104_t0AA7673102C4A87C0153D814FE243BA15792761A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAnimateHighlightPlateU3Ed__104_t0AA7673102C4A87C0153D814FE243BA15792761A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<ClickTimer>d__14
struct U3CClickTimerU3Ed__14_t883403490A2B7D12BBBA1A09073CC4E8710A4730_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CClickTimerU3Ed__14_t883403490A2B7D12BBBA1A09073CC4E8710A4730_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CClickTimerU3Ed__14_t883403490A2B7D12BBBA1A09073CC4E8710A4730_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CClickTimerU3Ed__14_t883403490A2B7D12BBBA1A09073CC4E8710A4730_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CClickTimerU3Ed__14_t883403490A2B7D12BBBA1A09073CC4E8710A4730(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CClickTimerU3Ed__14_t883403490A2B7D12BBBA1A09073CC4E8710A4730_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CClickTimerU3Ed__14_t883403490A2B7D12BBBA1A09073CC4E8710A4730_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<VoiceTimer>d__15
struct U3CVoiceTimerU3Ed__15_t1912B250463FFED8E88FCEC9256FB981AA56792E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CVoiceTimerU3Ed__15_t1912B250463FFED8E88FCEC9256FB981AA56792E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CVoiceTimerU3Ed__15_t1912B250463FFED8E88FCEC9256FB981AA56792E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CVoiceTimerU3Ed__15_t1912B250463FFED8E88FCEC9256FB981AA56792E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CVoiceTimerU3Ed__15_t1912B250463FFED8E88FCEC9256FB981AA56792E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CVoiceTimerU3Ed__15_t1912B250463FFED8E88FCEC9256FB981AA56792E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CVoiceTimerU3Ed__15_t1912B250463FFED8E88FCEC9256FB981AA56792E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for WinRT.Delegate/InitialReference
struct InitialReference_t00703C9260D4202319E4D5824EDBB00725A53239_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InitialReference_t00703C9260D4202319E4D5824EDBB00725A53239_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline InitialReference_t00703C9260D4202319E4D5824EDBB00725A53239_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InitialReference_t00703C9260D4202319E4D5824EDBB00725A53239_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InitialReference_t00703C9260D4202319E4D5824EDBB00725A53239(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InitialReference_t00703C9260D4202319E4D5824EDBB00725A53239_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InitialReference_t00703C9260D4202319E4D5824EDBB00725A53239_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/BlankCertificateHandler
struct BlankCertificateHandler_t3829B4780CA459FF4520D7F84E71DCA09B853C40_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BlankCertificateHandler_t3829B4780CA459FF4520D7F84E71DCA09B853C40_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline BlankCertificateHandler_t3829B4780CA459FF4520D7F84E71DCA09B853C40_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BlankCertificateHandler_t3829B4780CA459FF4520D7F84E71DCA09B853C40_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BlankCertificateHandler_t3829B4780CA459FF4520D7F84E71DCA09B853C40(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BlankCertificateHandler_t3829B4780CA459FF4520D7F84E71DCA09B853C40_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BlankCertificateHandler_t3829B4780CA459FF4520D7F84E71DCA09B853C40_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.Dialog/<CloseDialog>d__11
struct U3CCloseDialogU3Ed__11_t928FE457184D5FD1A1F35CC3275FC2A59DAABBF4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCloseDialogU3Ed__11_t928FE457184D5FD1A1F35CC3275FC2A59DAABBF4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCloseDialogU3Ed__11_t928FE457184D5FD1A1F35CC3275FC2A59DAABBF4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCloseDialogU3Ed__11_t928FE457184D5FD1A1F35CC3275FC2A59DAABBF4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCloseDialogU3Ed__11_t928FE457184D5FD1A1F35CC3275FC2A59DAABBF4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCloseDialogU3Ed__11_t928FE457184D5FD1A1F35CC3275FC2A59DAABBF4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCloseDialogU3Ed__11_t928FE457184D5FD1A1F35CC3275FC2A59DAABBF4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.Dialog/<OpenDialog>d__10
struct U3COpenDialogU3Ed__10_t780B4BB5E3DAC8921754C4407F06800BB58891AD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3COpenDialogU3Ed__10_t780B4BB5E3DAC8921754C4407F06800BB58891AD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3COpenDialogU3Ed__10_t780B4BB5E3DAC8921754C4407F06800BB58891AD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3COpenDialogU3Ed__10_t780B4BB5E3DAC8921754C4407F06800BB58891AD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3COpenDialogU3Ed__10_t780B4BB5E3DAC8921754C4407F06800BB58891AD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3COpenDialogU3Ed__10_t780B4BB5E3DAC8921754C4407F06800BB58891AD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3COpenDialogU3Ed__10_t780B4BB5E3DAC8921754C4407F06800BB58891AD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.Dialog/<RunDialogOverTime>d__9
struct U3CRunDialogOverTimeU3Ed__9_t2E7EF1AC02220A73E299143A700188047B018916_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRunDialogOverTimeU3Ed__9_t2E7EF1AC02220A73E299143A700188047B018916_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CRunDialogOverTimeU3Ed__9_t2E7EF1AC02220A73E299143A700188047B018916_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRunDialogOverTimeU3Ed__9_t2E7EF1AC02220A73E299143A700188047B018916_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRunDialogOverTimeU3Ed__9_t2E7EF1AC02220A73E299143A700188047B018916(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRunDialogOverTimeU3Ed__9_t2E7EF1AC02220A73E299143A700188047B018916_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRunDialogOverTimeU3Ed__9_t2E7EF1AC02220A73E299143A700188047B018916_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<ComputeHeatmapAt>d__20
struct U3CComputeHeatmapAtU3Ed__20_t8F7D6FFED7BF9E5B04BFC8E3EB214663EE8AA18E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CComputeHeatmapAtU3Ed__20_t8F7D6FFED7BF9E5B04BFC8E3EB214663EE8AA18E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CComputeHeatmapAtU3Ed__20_t8F7D6FFED7BF9E5B04BFC8E3EB214663EE8AA18E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CComputeHeatmapAtU3Ed__20_t8F7D6FFED7BF9E5B04BFC8E3EB214663EE8AA18E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CComputeHeatmapAtU3Ed__20_t8F7D6FFED7BF9E5B04BFC8E3EB214663EE8AA18E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CComputeHeatmapAtU3Ed__20_t8F7D6FFED7BF9E5B04BFC8E3EB214663EE8AA18E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CComputeHeatmapAtU3Ed__20_t8F7D6FFED7BF9E5B04BFC8E3EB214663EE8AA18E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<DrawAt>d__19
struct U3CDrawAtU3Ed__19_tAF6FC7CAE12609EC0810109A147B784DC92A01A7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDrawAtU3Ed__19_tAF6FC7CAE12609EC0810109A147B784DC92A01A7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDrawAtU3Ed__19_tAF6FC7CAE12609EC0810109A147B784DC92A01A7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDrawAtU3Ed__19_tAF6FC7CAE12609EC0810109A147B784DC92A01A7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDrawAtU3Ed__19_tAF6FC7CAE12609EC0810109A147B784DC92A01A7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDrawAtU3Ed__19_tAF6FC7CAE12609EC0810109A147B784DC92A01A7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDrawAtU3Ed__19_tAF6FC7CAE12609EC0810109A147B784DC92A01A7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75
struct U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Diagnostics.Tracing.EventPayload/<GetEnumerator>d__17
struct U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Diagnostics.Tracing.EventSource/OverideEventProvider
struct OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.EyeTrackingDemoUtils/<LoadNewScene>d__8
struct U3CLoadNewSceneU3Ed__8_tC90CA1734C6222BC76778C658B85DF5569ED6A77_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CLoadNewSceneU3Ed__8_tC90CA1734C6222BC76778C658B85DF5569ED6A77_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CLoadNewSceneU3Ed__8_tC90CA1734C6222BC76778C658B85DF5569ED6A77_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CLoadNewSceneU3Ed__8_tC90CA1734C6222BC76778C658B85DF5569ED6A77_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CLoadNewSceneU3Ed__8_tC90CA1734C6222BC76778C658B85DF5569ED6A77(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CLoadNewSceneU3Ed__8_tC90CA1734C6222BC76778C658B85DF5569ED6A77_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CLoadNewSceneU3Ed__8_tC90CA1734C6222BC76778C658B85DF5569ED6A77_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.FollowMeToggle/<AutoFollowDistanceCheck>d__37
struct U3CAutoFollowDistanceCheckU3Ed__37_tB103232C3193A81F2B40B18D9936AD66339BF9C1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAutoFollowDistanceCheckU3Ed__37_tB103232C3193A81F2B40B18D9936AD66339BF9C1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CAutoFollowDistanceCheckU3Ed__37_tB103232C3193A81F2B40B18D9936AD66339BF9C1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAutoFollowDistanceCheckU3Ed__37_tB103232C3193A81F2B40B18D9936AD66339BF9C1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAutoFollowDistanceCheckU3Ed__37_tB103232C3193A81F2B40B18D9936AD66339BF9C1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAutoFollowDistanceCheckU3Ed__37_tB103232C3193A81F2B40B18D9936AD66339BF9C1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAutoFollowDistanceCheckU3Ed__37_tB103232C3193A81F2B40B18D9936AD66339BF9C1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11
struct U3CGetAllHandPositionsU3Ed__11_tB8C18D127800092F10EDD6ED060F0200B51453EC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetAllHandPositionsU3Ed__11_tB8C18D127800092F10EDD6ED060F0200B51453EC_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetAllHandPositionsU3Ed__11_tB8C18D127800092F10EDD6ED060F0200B51453EC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetAllHandPositionsU3Ed__11_tB8C18D127800092F10EDD6ED060F0200B51453EC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetAllHandPositionsU3Ed__11_tB8C18D127800092F10EDD6ED060F0200B51453EC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetAllHandPositionsU3Ed__11_tB8C18D127800092F10EDD6ED060F0200B51453EC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetAllHandPositionsU3Ed__11_tB8C18D127800092F10EDD6ED060F0200B51453EC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7
struct U3CTestAnchorsU3Ed__7_tD334FEC448EDB158864901827FE817EE4D63BEE1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CTestAnchorsU3Ed__7_tD334FEC448EDB158864901827FE817EE4D63BEE1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CTestAnchorsU3Ed__7_tD334FEC448EDB158864901827FE817EE4D63BEE1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CTestAnchorsU3Ed__7_tD334FEC448EDB158864901827FE817EE4D63BEE1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CTestAnchorsU3Ed__7_tD334FEC448EDB158864901827FE817EE4D63BEE1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CTestAnchorsU3Ed__7_tD334FEC448EDB158864901827FE817EE4D63BEE1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CTestAnchorsU3Ed__7_tD334FEC448EDB158864901827FE817EE4D63BEE1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62
struct U3CToggleCursorsU3Ed__62_t828BDAA338BB69733F59D878F238D92517398A63_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CToggleCursorsU3Ed__62_t828BDAA338BB69733F59D878F238D92517398A63_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CToggleCursorsU3Ed__62_t828BDAA338BB69733F59D878F238D92517398A63_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CToggleCursorsU3Ed__62_t828BDAA338BB69733F59D878F238D92517398A63_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CToggleCursorsU3Ed__62_t828BDAA338BB69733F59D878F238D92517398A63(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CToggleCursorsU3Ed__62_t828BDAA338BB69733F59D878F238D92517398A63_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CToggleCursorsU3Ed__62_t828BDAA338BB69733F59D878F238D92517398A63_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp/<WorldLockedReattachCheck>d__42
struct U3CWorldLockedReattachCheckU3Ed__42_tCA3F3D12F65C0E01F2CB7FA32BAE0E0D96AA8F26_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CWorldLockedReattachCheckU3Ed__42_tCA3F3D12F65C0E01F2CB7FA32BAE0E0D96AA8F26_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CWorldLockedReattachCheckU3Ed__42_tCA3F3D12F65C0E01F2CB7FA32BAE0E0D96AA8F26_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CWorldLockedReattachCheckU3Ed__42_tCA3F3D12F65C0E01F2CB7FA32BAE0E0D96AA8F26_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CWorldLockedReattachCheckU3Ed__42_tCA3F3D12F65C0E01F2CB7FA32BAE0E0D96AA8F26(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CWorldLockedReattachCheckU3Ed__42_tCA3F3D12F65C0E01F2CB7FA32BAE0E0D96AA8F26_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CWorldLockedReattachCheckU3Ed__42_tCA3F3D12F65C0E01F2CB7FA32BAE0E0D96AA8F26_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<FadeOutHint>d__45
struct U3CFadeOutHintU3Ed__45_tFA5D0A2AA3F2373B27562A3DB4B151B7B17221FF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CFadeOutHintU3Ed__45_tFA5D0A2AA3F2373B27562A3DB4B151B7B17221FF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CFadeOutHintU3Ed__45_tFA5D0A2AA3F2373B27562A3DB4B151B7B17221FF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CFadeOutHintU3Ed__45_tFA5D0A2AA3F2373B27562A3DB4B151B7B17221FF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CFadeOutHintU3Ed__45_tFA5D0A2AA3F2373B27562A3DB4B151B7B17221FF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CFadeOutHintU3Ed__45_tFA5D0A2AA3F2373B27562A3DB4B151B7B17221FF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CFadeOutHintU3Ed__45_tFA5D0A2AA3F2373B27562A3DB4B151B7B17221FF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46
struct U3CHintLoopSequenceU3Ed__46_t9318FCDF5B236B689E311C4F940F2B65D20CE638_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CHintLoopSequenceU3Ed__46_t9318FCDF5B236B689E311C4F940F2B65D20CE638_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CHintLoopSequenceU3Ed__46_t9318FCDF5B236B689E311C4F940F2B65D20CE638_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CHintLoopSequenceU3Ed__46_t9318FCDF5B236B689E311C4F940F2B65D20CE638_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CHintLoopSequenceU3Ed__46_t9318FCDF5B236B689E311C4F940F2B65D20CE638(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CHintLoopSequenceU3Ed__46_t9318FCDF5B236B689E311C4F940F2B65D20CE638_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CHintLoopSequenceU3Ed__46_t9318FCDF5B236B689E311C4F940F2B65D20CE638_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Hashtable/KeyCollection
struct KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Hashtable/SyncHashtable
struct SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator
struct Enumerator_t613E3A70E3E0E8A2ED3EFB43FC5A713ABAA44DDA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_t613E3A70E3E0E8A2ED3EFB43FC5A713ABAA44DDA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_t613E3A70E3E0E8A2ED3EFB43FC5A713ABAA44DDA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_t613E3A70E3E0E8A2ED3EFB43FC5A713ABAA44DDA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_t613E3A70E3E0E8A2ED3EFB43FC5A713ABAA44DDA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_t613E3A70E3E0E8A2ED3EFB43FC5A713ABAA44DDA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_t613E3A70E3E0E8A2ED3EFB43FC5A713ABAA44DDA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31
struct U3CGetEnumeratorU3Ed__31_tE1253F5510F24171181A71B4D87807F415DB1C4A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__31_tE1253F5510F24171181A71B4D87807F415DB1C4A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__31_tE1253F5510F24171181A71B4D87807F415DB1C4A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__31_tE1253F5510F24171181A71B4D87807F415DB1C4A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__31_tE1253F5510F24171181A71B4D87807F415DB1C4A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__31_tE1253F5510F24171181A71B4D87807F415DB1C4A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__31_tE1253F5510F24171181A71B4D87807F415DB1C4A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8
struct U3Cget_bindingsU3Ed__8_t3ADB872E35B157EC21C5AC30500C0D4B5936F56F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3Cget_bindingsU3Ed__8_t3ADB872E35B157EC21C5AC30500C0D4B5936F56F_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3Cget_bindingsU3Ed__8_t3ADB872E35B157EC21C5AC30500C0D4B5936F56F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3Cget_bindingsU3Ed__8_t3ADB872E35B157EC21C5AC30500C0D4B5936F56F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3Cget_bindingsU3Ed__8_t3ADB872E35B157EC21C5AC30500C0D4B5936F56F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3Cget_bindingsU3Ed__8_t3ADB872E35B157EC21C5AC30500C0D4B5936F56F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3Cget_bindingsU3Ed__8_t3ADB872E35B157EC21C5AC30500C0D4B5936F56F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionRebindingExtensions/DeferBindingResolutionWrapper
struct DeferBindingResolutionWrapper_tC1A3045CC80EBCF50A89C15432D6769348AEA3C1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DeferBindingResolutionWrapper_tC1A3045CC80EBCF50A89C15432D6769348AEA3C1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline DeferBindingResolutionWrapper_tC1A3045CC80EBCF50A89C15432D6769348AEA3C1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DeferBindingResolutionWrapper_tC1A3045CC80EBCF50A89C15432D6769348AEA3C1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DeferBindingResolutionWrapper_tC1A3045CC80EBCF50A89C15432D6769348AEA3C1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DeferBindingResolutionWrapper_tC1A3045CC80EBCF50A89C15432D6769348AEA3C1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DeferBindingResolutionWrapper_tC1A3045CC80EBCF50A89C15432D6769348AEA3C1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F_ComCallableWrapper(obj));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_mFCD1D3C1A5DC7CB389927A5529BCD86518ED0AB5_inline (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__maxDataCapacity_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_mBC04A275BE71FE110C0A6B94A66A5F9726F6461F_inline (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__usefulDataLength_3();
		return L_0;
	}
}
