#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension>
struct List_1_tF512ECCA426FF10471372F52B5C8784FC96A7EAC;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable>
struct List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// Singleton`1<CameraManager>
struct Singleton_1_tAC2D4F57CDAD34ED8AD3368CA3B3090E6DA5EC0E;
// Singleton`1<GameManager>
struct Singleton_1_t3D2F23D966DBD653F6411E976BD4A5A33E9DD1B7;
// Singleton`1<LevelManager>
struct Singleton_1_t57146DEC2403B0DC891826D5FF9CBD3A240BB726;
// Singleton`1<System.Object>
struct Singleton_1_t761811FA61B8CEAEB90FA0D60BD999994A7FE1E6;
// Singleton`1<PlayerManager>
struct Singleton_1_tAB8900DF126641F42134EDEB430B6D866841F00A;
// Singleton`1<StatsManager>
struct Singleton_1_tC01C0A4A5261DA12ECDA08077833E23FE530CBA7;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77;
// View`1<GameEndView>
struct View_1_t5BAF756D8FC11B225BB3171C72482CCBD5C70A8A;
// View`1<GamePlayView>
struct View_1_tF71BB4B137A698F16D5C93BA9B104EA9EF939A71;
// View`1<MainMenuView>
struct View_1_t0AE4A1ED9FD00208340489321E405EDDB84585C1;
// View`1<System.Object>
struct View_1_tBA8146540E028CF9261DF2B9B8385668E1F1B39E;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Cinemachine.CinemachineComponentBase[]
struct CinemachineComponentBaseU5BU5D_t479D9A9F2F2C4AB6F50F6C64FAC4BC8EC602C077;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Cinemachine.CinemachineCore/Stage[]
struct StageU5BU5D_tF198CE3C6DE5C3D67552DAB4B9680F3BFF319981;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Ball
struct Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraManager
struct CameraManager_t27CFDF23ED636E9025EFEA9A5E8B0004355206BB;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50;
// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// EventManager
struct EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameData
struct GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6;
// GameEndView
struct GameEndView_t23F24B39254973CBD2546BFCE605FC12215FCEB0;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GamePlayView
struct GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Cinemachine.ICinemachineTargetGroup
struct ICinemachineTargetGroup_t3741E5378B5C1636777589A1BE1811E9E96ADF1B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// LevelManager
struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// MainMenuView
struct MainMenuView_t0683229FCA1D2E67D4324BB73A987442BF21AC9D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlayerManager
struct PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// StatsManager
struct StatsManager_tC4FC040D87839B5C03060ACC2B3A01B02F165F87;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// Target
struct Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5;
// TargetBallon
struct TargetBallon_tE08085478FDE1CBD769734051D32BE26E82A05AD;
// TargetGoalArea
struct TargetGoalArea_tBF73B45BA30F3834C1958B6AA9777CF6622AAD2C;
// TargetStar
struct TargetStar_t9380397AF6F5C40A3B20889B0C134CD21DDC3B18;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Cinemachine.CinemachineBrain/VcamActivatedEvent
struct VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154;
// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate
struct CreatePipelineDelegate_tC9ED5364DE6A2A753E8C9FF767C2C37C5CBB6BFC;
// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate
struct DestroyPipelineDelegate_tDBA135A8B9ACD670F6144200C281F32F728BB842;
// EventManager/OnSetLevelStatus
struct OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3;
// EventManager/OnShoot
struct OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C;
// EventManager/OnTargetShoot
struct OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC;
// GameManager/OnGamePhaseChanged
struct OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// LevelManager/<countDownStart>d__13
struct U3CcountDownStartU3Ed__13_tC04C348A30667FF7FBDD5DC00EC89DAE306280F1;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PlayerManager/<corStopLevel>d__22
struct U3CcorStopLevelU3Ed__22_t83EBF110A67FF983AA6997222F5397D02CB853FF;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GamePhase_t7C0433B7DCF8287F900C147672BBF89D9F545FD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_t3D2F23D966DBD653F6411E976BD4A5A33E9DD1B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_t57146DEC2403B0DC891826D5FF9CBD3A240BB726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_t64294B7AF42CAEE4DF55A11C5F3FBAC120E851BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_tAB8900DF126641F42134EDEB430B6D866841F00A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_tAC2D4F57CDAD34ED8AD3368CA3B3090E6DA5EC0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_tC01C0A4A5261DA12ECDA08077833E23FE530CBA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetTypes_t9E95CB4576ACB1675598DF9F401F85EF75B32D32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriggerTypes_tF9475839BCBD57C38490B76BA848D1F934218667_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CcorStopLevelU3Ed__22_t83EBF110A67FF983AA6997222F5397D02CB853FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CcountDownStartU3Ed__13_tC04C348A30667FF7FBDD5DC00EC89DAE306280F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00306AEBBFCAE3C47C81EA3C1FF78CB512433B4D;
IL2CPP_EXTERN_C String_t* _stringLiteral0F8237A6E1D8E9CAE427E47A318C47A62133F44E;
IL2CPP_EXTERN_C String_t* _stringLiteral18DA0645B32D535983A60D101929337CDEA993BA;
IL2CPP_EXTERN_C String_t* _stringLiteral37CAA860A6D249B86D9D29EDEE73652678205CD8;
IL2CPP_EXTERN_C String_t* _stringLiteral38C3EEF0AF7BB4AB38710E28C427B1DB231C9A04;
IL2CPP_EXTERN_C String_t* _stringLiteral594B1EA9D05CF5863BB15FC4D98747883DA38871;
IL2CPP_EXTERN_C String_t* _stringLiteral5A1CB1D0A4EE36EE20A966AAF8F79CD0B960B890;
IL2CPP_EXTERN_C String_t* _stringLiteral9F5E5900D4441B39940CA155B6DEE3835D8C85D8;
IL2CPP_EXTERN_C String_t* _stringLiteral9FDD6A72C045A824BF00D656508FDDFC1BFCBCEF;
IL2CPP_EXTERN_C String_t* _stringLiteralB273814532070AEED668C12C3A0EFA9C9B12A7AD;
IL2CPP_EXTERN_C String_t* _stringLiteralBED0E95CBD82BCFD4D2C4D25FFD4EC73C18AF021;
IL2CPP_EXTERN_C String_t* _stringLiteralE45CAC4C012DB0DEE9724C056D4FE53A7557663F;
IL2CPP_EXTERN_C String_t* _stringLiteralEC483341BB1E174FA270288B05C529F3871C8974;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90_m89404901BB51B3AE97CAD458ADC40CF0E66937F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90_m46588BE9342C290DDE3D68F95BD2B80AC544B952_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTargetGoalArea_tBF73B45BA30F3834C1958B6AA9777CF6622AAD2C_m5A8B6B0EAE8C1A46660C4367CC16783A79D7A3C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GamePlayView_AfterPlayerShoot_m083FB8DA7CF32D56FF3062617631CEEB14844D3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GamePlayView_SetPlayerLevelPoint_m58CB6514A4531953EE700C89C50F95AFB145C596_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GamePlayView_U3CSetCountDownTimeU3Eb__10_0_m065E11A9F85B7968B2543257AF6C2C3A7B63AD46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GamePlayView_U3CSetGoalAnimU3Eb__12_0_m5CF0292CA55A47F6AA2EDA958E97D1A3E4278E8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GamePlayView_U3CSetPlayerLevelPointU3Eb__11_0_m8FF0C3A2BA4E16B95B23DC402DC323E78D7FB15B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisGameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_mB389D0CF42794EF04C41D868300A3359FB425ACD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LevelManager_ClearTargets_mD640D4D983FDB0E56B9D18768DC202AC54FE334E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LevelManager_Instance_OnGamePhaseChanged_m8F33744BF44058F612A228F95108AD3E874913F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m00E0C7315A836B1C0A37EEBE36DDAD1F3950ED6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m30F77B178EC401F84252F3102F42390E2E810237_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m963977D2790A50C740A1551A295B9CE90F4EAC19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_mC04AB51BDEDE7E88FEDBF14B971ADBADCA2AEAF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_mFD940A60BFF417DE575BBFAE67006E1D442B9CB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m23C78C97634E8975A0A58BBCDF1AF60967680FD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m33F542FAC846E5BB3B70A8A2672436F132C37351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_mAC9DF11E32326AC2D20BC2ED3F0B0E38A5FB548F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_mB21628D314EBC540E3AE9BE7A8EF27532D14F5C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_mB7845E881BF4F17C894C2C551B32F3AF463FA2F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_mC2AEEBDB372B0DE799F002D62CD7E38891EF8B81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mF60DBA3F6C157331404BD6819A0AFF03A6339FB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CcorStopLevelU3Ed__22_System_Collections_IEnumerator_Reset_mAD9509877C5C8BF6DB7A494BE548F84FA6942C21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CcountDownStartU3Ed__13_System_Collections_IEnumerator_Reset_m579FCD520293582DFD7DA27BA43597A35530ADDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* View_1_Awake_m79FEE230BFCB321DA98284862AEC993C3D096F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* View_1_Awake_mDA5EE896B4172CD7A6EEE1C68304F6BABAA6B403_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* View_1_Awake_mF4DD2BAF16285FCD1BD2AE1941C07A98D6430B0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* View_1_OnGamePhaseChanged_m96AEB7C31C83C3BB59097AC5AEE7CBFDC3A8B8C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* View_1_OnGamePhaseChanged_mBF2B865F9C11F9AAD3FE04966BF0E548318529FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* View_1_OnGamePhaseChanged_mE708CDC70718F633A1E6B0E2FF134AFC5FB92DB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* View_1_Transition_m17858942056D2583A05390B1B12D083FA6658B48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* View_1_Transition_m79E1C98F2FD308667EE7E4C578E602CDAA1124B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* View_1_Transition_m7AABA56C9D73B455B1F229850D31D465951DA0AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* View_1__ctor_m26198A5F5037D95B5BC5D7BC32909E181841CD4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* View_1__ctor_mB153BF8D371DC9A7E2B3A0F22BF6699AE5907131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* View_1__ctor_mFC016BE4AA8F3665D6FAA6FF0D47F572FCBAB392_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_3;
};
struct Il2CppArrayBounds;

// Constants
struct Constants_t8D6DDE75059F83729DB837146AC979C90F0B7E80  : public RuntimeObject
{
};

// EventManager
struct EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A  : public RuntimeObject
{
	// EventManager/OnSetLevelStatus EventManager::onLevelPhaseChange
	OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* ___onLevelPhaseChange_0;
};

struct EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields
{
	// EventManager/OnTargetShoot EventManager::OnTargetShootDetect
	OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* ___OnTargetShootDetect_1;
	// EventManager/OnShoot EventManager::OnPlayerShoot
	OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* ___OnPlayerShoot_2;
};

// GameData
struct GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6  : public RuntimeObject
{
	// System.Int32 GameData::ScorePointPerGoal
	int32_t ___ScorePointPerGoal_0;
	// System.Int32 GameData::BallShootPower
	int32_t ___BallShootPower_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// SaveLoadManager
struct SaveLoadManager_t6BE6510EA709976E31284BA6AD41BB6C2AB90400  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// LevelManager/<countDownStart>d__13
struct U3CcountDownStartU3Ed__13_tC04C348A30667FF7FBDD5DC00EC89DAE306280F1  : public RuntimeObject
{
	// System.Int32 LevelManager/<countDownStart>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LevelManager/<countDownStart>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 LevelManager/<countDownStart>d__13::<i>5__2
	int32_t ___U3CiU3E5__2_2;
};

// PlayerManager/<corStopLevel>d__22
struct U3CcorStopLevelU3Ed__22_t83EBF110A67FF983AA6997222F5397D02CB853FF  : public RuntimeObject
{
	// System.Int32 PlayerManager/<corStopLevel>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerManager/<corStopLevel>d__22::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerManager PlayerManager/<corStopLevel>d__22::<>4__this
	PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* ___U3CU3E4__this_2;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject* ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject* ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t* ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t* ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t* ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 
{
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// Cinemachine.CameraState/CustomBlendable
struct CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB 
{
	// UnityEngine.Object Cinemachine.CameraState/CustomBlendable::m_Custom
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_Custom_0;
	// System.Single Cinemachine.CameraState/CustomBlendable::m_Weight
	float ___m_Weight_1;
};

// Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA 
{
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_BlendHint
	int32_t ___m_BlendHint_0;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_InheritPosition
	bool ___m_InheritPosition_1;
	// Cinemachine.CinemachineBrain/VcamActivatedEvent Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_OnCameraLive
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};
// Native definition for P/Invoke marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA_marshaled_pinvoke
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};
// Native definition for COM marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA_marshaled_com
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE 
{
	// System.Single Cinemachine.LensSettings::FieldOfView
	float ___FieldOfView_1;
	// System.Single Cinemachine.LensSettings::OrthographicSize
	float ___OrthographicSize_2;
	// System.Single Cinemachine.LensSettings::NearClipPlane
	float ___NearClipPlane_3;
	// System.Single Cinemachine.LensSettings::FarClipPlane
	float ___FarClipPlane_4;
	// System.Single Cinemachine.LensSettings::Dutch
	float ___Dutch_5;
	// Cinemachine.LensSettings/OverrideModes Cinemachine.LensSettings::ModeOverride
	int32_t ___ModeOverride_6;
	// UnityEngine.Vector2 Cinemachine.LensSettings::LensShift
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	// UnityEngine.Camera/GateFitMode Cinemachine.LensSettings::GateFit
	int32_t ___GateFit_8;
	// UnityEngine.Vector2 Cinemachine.LensSettings::m_SensorSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	// System.Boolean Cinemachine.LensSettings::m_OrthoFromCamera
	bool ___m_OrthoFromCamera_10;
	// System.Boolean Cinemachine.LensSettings::m_PhysicalFromCamera
	bool ___m_PhysicalFromCamera_11;
};

struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_StaticFields
{
	// Cinemachine.LensSettings Cinemachine.LensSettings::Default
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___Default_0;
};
// Native definition for P/Invoke marshalling of Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_pinvoke
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
};
// Native definition for COM marshalling of Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_com
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 
{
	// Cinemachine.LensSettings Cinemachine.CameraState::Lens
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___Lens_0;
	// UnityEngine.Vector3 Cinemachine.CameraState::ReferenceUp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	// UnityEngine.Vector3 Cinemachine.CameraState::ReferenceLookAt
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	// UnityEngine.Vector3 Cinemachine.CameraState::RawPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	// UnityEngine.Quaternion Cinemachine.CameraState::RawOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	// UnityEngine.Vector3 Cinemachine.CameraState::PositionDampingBypass
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	// System.Single Cinemachine.CameraState::ShotQuality
	float ___ShotQuality_7;
	// UnityEngine.Vector3 Cinemachine.CameraState::PositionCorrection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	// UnityEngine.Quaternion Cinemachine.CameraState::OrientationCorrection
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	// Cinemachine.CameraState/BlendHintValue Cinemachine.CameraState::BlendHint
	int32_t ___BlendHint_10;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom0
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom1
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom2
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom3
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable> Cinemachine.CameraState::m_CustomOverflow
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	// System.Int32 Cinemachine.CameraState::<NumCustomBlendables>k__BackingField
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_StaticFields
{
	// UnityEngine.Vector3 Cinemachine.CameraState::kNoPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___kNoPoint_3;
};
// Native definition for P/Invoke marshalling of Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_marshaled_pinvoke
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_pinvoke ___Lens_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	float ___ShotQuality_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	int32_t ___BlendHint_10;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for COM marshalling of Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_marshaled_com
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_com ___Lens_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	float ___ShotQuality_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	int32_t ___BlendHint_10;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Ball/<StopBall>d__16
struct U3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90 
{
	// System.Int32 Ball/<StopBall>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Ball/<StopBall>d__16::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// Ball Ball/<StopBall>d__16::<>4__this
	Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Ball/<StopBall>d__16::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24  : public MulticastDelegate_t
{
};

// EventManager/OnSetLevelStatus
struct OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3  : public MulticastDelegate_t
{
};

// EventManager/OnShoot
struct OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C  : public MulticastDelegate_t
{
};

// EventManager/OnTargetShoot
struct OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC  : public MulticastDelegate_t
{
};

// GameManager/OnGamePhaseChanged
struct OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Singleton`1<CameraManager>
struct Singleton_1_tAC2D4F57CDAD34ED8AD3368CA3B3090E6DA5EC0E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_tAC2D4F57CDAD34ED8AD3368CA3B3090E6DA5EC0E_StaticFields
{
	// T Singleton`1::_instance
	CameraManager_t27CFDF23ED636E9025EFEA9A5E8B0004355206BB* ____instance_4;
	// System.Object Singleton`1::_lock
	RuntimeObject* ____lock_5;
	// System.Boolean Singleton`1::_isQuitting
	bool ____isQuitting_6;
};

// Singleton`1<GameEndView>
struct Singleton_1_t3BB34B5C71C26BB84B0A4C85BFDBC6DC06BDFE6A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_t3BB34B5C71C26BB84B0A4C85BFDBC6DC06BDFE6A_StaticFields
{
	// T Singleton`1::_instance
	GameEndView_t23F24B39254973CBD2546BFCE605FC12215FCEB0* ____instance_4;
	// System.Object Singleton`1::_lock
	RuntimeObject* ____lock_5;
	// System.Boolean Singleton`1::_isQuitting
	bool ____isQuitting_6;
};

// Singleton`1<GameManager>
struct Singleton_1_t3D2F23D966DBD653F6411E976BD4A5A33E9DD1B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_t3D2F23D966DBD653F6411E976BD4A5A33E9DD1B7_StaticFields
{
	// T Singleton`1::_instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ____instance_4;
	// System.Object Singleton`1::_lock
	RuntimeObject* ____lock_5;
	// System.Boolean Singleton`1::_isQuitting
	bool ____isQuitting_6;
};

// Singleton`1<GamePlayView>
struct Singleton_1_t64294B7AF42CAEE4DF55A11C5F3FBAC120E851BA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_t64294B7AF42CAEE4DF55A11C5F3FBAC120E851BA_StaticFields
{
	// T Singleton`1::_instance
	GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* ____instance_4;
	// System.Object Singleton`1::_lock
	RuntimeObject* ____lock_5;
	// System.Boolean Singleton`1::_isQuitting
	bool ____isQuitting_6;
};

// Singleton`1<LevelManager>
struct Singleton_1_t57146DEC2403B0DC891826D5FF9CBD3A240BB726  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_t57146DEC2403B0DC891826D5FF9CBD3A240BB726_StaticFields
{
	// T Singleton`1::_instance
	LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* ____instance_4;
	// System.Object Singleton`1::_lock
	RuntimeObject* ____lock_5;
	// System.Boolean Singleton`1::_isQuitting
	bool ____isQuitting_6;
};

// Singleton`1<MainMenuView>
struct Singleton_1_t6590F7710E56C95B9D19A695152FC092E1C61B27  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_t6590F7710E56C95B9D19A695152FC092E1C61B27_StaticFields
{
	// T Singleton`1::_instance
	MainMenuView_t0683229FCA1D2E67D4324BB73A987442BF21AC9D* ____instance_4;
	// System.Object Singleton`1::_lock
	RuntimeObject* ____lock_5;
	// System.Boolean Singleton`1::_isQuitting
	bool ____isQuitting_6;
};

// Singleton`1<PlayerManager>
struct Singleton_1_tAB8900DF126641F42134EDEB430B6D866841F00A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_tAB8900DF126641F42134EDEB430B6D866841F00A_StaticFields
{
	// T Singleton`1::_instance
	PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* ____instance_4;
	// System.Object Singleton`1::_lock
	RuntimeObject* ____lock_5;
	// System.Boolean Singleton`1::_isQuitting
	bool ____isQuitting_6;
};

// Singleton`1<StatsManager>
struct Singleton_1_tC01C0A4A5261DA12ECDA08077833E23FE530CBA7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_tC01C0A4A5261DA12ECDA08077833E23FE530CBA7_StaticFields
{
	// T Singleton`1::_instance
	StatsManager_tC4FC040D87839B5C03060ACC2B3A01B02F165F87* ____instance_4;
	// System.Object Singleton`1::_lock
	RuntimeObject* ____lock_5;
	// System.Boolean Singleton`1::_isQuitting
	bool ____isQuitting_6;
};

// Ball
struct Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LineRenderer Ball::m_ballLine
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___m_ballLine_4;
	// System.Int32 Ball::m_lineCounter
	int32_t ___m_lineCounter_5;
	// UnityEngine.Vector3 Ball::m_mouseFirstPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_mouseFirstPosition_6;
	// UnityEngine.Vector3 Ball::m_mouseLastPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_mouseLastPosition_7;
	// UnityEngine.Rigidbody Ball::m_rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_rigidbody_8;
	// UnityEngine.Transform Ball::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_9;
	// UnityEngine.Vector3 Ball::m_ballStartPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ballStartPos_10;
	// System.Single Ball::m_forceMultiplier
	float ___m_forceMultiplier_11;
	// UnityEngine.Camera Ball::m_mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_mainCamera_12;
	// System.Boolean Ball::m_ballStatu
	bool ___m_ballStatu_13;
};

// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String[] Cinemachine.CinemachineVirtualCameraBase::m_ExcludedPropertiesInInspector
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ExcludedPropertiesInInspector_4;
	// Cinemachine.CinemachineCore/Stage[] Cinemachine.CinemachineVirtualCameraBase::m_LockStageInInspector
	StageU5BU5D_tF198CE3C6DE5C3D67552DAB4B9680F3BFF319981* ___m_LockStageInInspector_5;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ValidatingStreamVersion
	int32_t ___m_ValidatingStreamVersion_6;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_OnValidateCalled
	bool ___m_OnValidateCalled_7;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_StreamingVersion
	int32_t ___m_StreamingVersion_8;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_Priority
	int32_t ___m_Priority_9;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ActivationId
	int32_t ___m_ActivationId_10;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::FollowTargetAttachment
	float ___FollowTargetAttachment_11;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::LookAtTargetAttachment
	float ___LookAtTargetAttachment_12;
	// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode Cinemachine.CinemachineVirtualCameraBase::m_StandbyUpdate
	int32_t ___m_StandbyUpdate_13;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension> Cinemachine.CinemachineVirtualCameraBase::<mExtensions>k__BackingField
	List_1_tF512ECCA426FF10471372F52B5C8784FC96A7EAC* ___U3CmExtensionsU3Ek__BackingField_14;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<PreviousStateIsValid>k__BackingField
	bool ___U3CPreviousStateIsValidU3Ek__BackingField_15;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_WasStarted
	bool ___m_WasStarted_16;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::mSlaveStatusUpdated
	bool ___mSlaveStatusUpdated_17;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_parentVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_parentVcam_18;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_QueuePriority
	int32_t ___m_QueuePriority_19;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedFollowTarget_20;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_CachedFollowTargetVcam_21;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTargetGroup
	RuntimeObject* ___m_CachedFollowTargetGroup_22;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedLookAtTarget_23;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_CachedLookAtTargetVcam_24;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTargetGroup
	RuntimeObject* ___m_CachedLookAtTargetGroup_25;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<FollowTargetChanged>k__BackingField
	bool ___U3CFollowTargetChangedU3Ek__BackingField_26;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<LookAtTargetChanged>k__BackingField
	bool ___U3CLookAtTargetChangedU3Ek__BackingField_27;
};

// Target
struct Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Target::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_4;
	// TargetTypes Target::m_targetType
	int32_t ___m_targetType_5;
	// System.Single Target::m_AnimScaleDownTime
	float ___m_AnimScaleDownTime_6;
	// System.Int32 Target::m_point
	int32_t ___m_point_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// View`1<GameEndView>
struct View_1_t5BAF756D8FC11B225BB3171C72482CCBD5C70A8A  : public Singleton_1_t3BB34B5C71C26BB84B0A4C85BFDBC6DC06BDFE6A
{
	// System.Single View`1::m_FadeInDuration
	float ___m_FadeInDuration_7;
	// System.Single View`1::m_FadeOutDuration
	float ___m_FadeOutDuration_8;
	// UnityEngine.CanvasGroup View`1::m_Group
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___m_Group_9;
	// System.Boolean View`1::m_Visible
	bool ___m_Visible_10;
	// GameManager View`1::m_GameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___m_GameManager_11;
	// System.Single View`1::m_StartTime
	float ___m_StartTime_12;
	// System.Single View`1::m_Duration
	float ___m_Duration_13;
	// System.Boolean View`1::m_InTransition
	bool ___m_InTransition_14;
	// System.Boolean View`1::m_InOrOut
	bool ___m_InOrOut_15;
};

// View`1<GamePlayView>
struct View_1_tF71BB4B137A698F16D5C93BA9B104EA9EF939A71  : public Singleton_1_t64294B7AF42CAEE4DF55A11C5F3FBAC120E851BA
{
	// System.Single View`1::m_FadeInDuration
	float ___m_FadeInDuration_7;
	// System.Single View`1::m_FadeOutDuration
	float ___m_FadeOutDuration_8;
	// UnityEngine.CanvasGroup View`1::m_Group
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___m_Group_9;
	// System.Boolean View`1::m_Visible
	bool ___m_Visible_10;
	// GameManager View`1::m_GameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___m_GameManager_11;
	// System.Single View`1::m_StartTime
	float ___m_StartTime_12;
	// System.Single View`1::m_Duration
	float ___m_Duration_13;
	// System.Boolean View`1::m_InTransition
	bool ___m_InTransition_14;
	// System.Boolean View`1::m_InOrOut
	bool ___m_InOrOut_15;
};

// View`1<MainMenuView>
struct View_1_t0AE4A1ED9FD00208340489321E405EDDB84585C1  : public Singleton_1_t6590F7710E56C95B9D19A695152FC092E1C61B27
{
	// System.Single View`1::m_FadeInDuration
	float ___m_FadeInDuration_7;
	// System.Single View`1::m_FadeOutDuration
	float ___m_FadeOutDuration_8;
	// UnityEngine.CanvasGroup View`1::m_Group
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___m_Group_9;
	// System.Boolean View`1::m_Visible
	bool ___m_Visible_10;
	// GameManager View`1::m_GameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___m_GameManager_11;
	// System.Single View`1::m_StartTime
	float ___m_StartTime_12;
	// System.Single View`1::m_Duration
	float ___m_Duration_13;
	// System.Boolean View`1::m_InTransition
	bool ___m_InTransition_14;
	// System.Boolean View`1::m_InOrOut
	bool ___m_InOrOut_15;
};

// CameraManager
struct CameraManager_t27CFDF23ED636E9025EFEA9A5E8B0004355206BB  : public Singleton_1_tAC2D4F57CDAD34ED8AD3368CA3B3090E6DA5EC0E
{
	// UnityEngine.Camera CameraManager::m_MainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_MainCamera_7;
	// Cinemachine.CinemachineVirtualCamera CameraManager::m_FollowCamera
	CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* ___m_FollowCamera_8;
	// UnityEngine.Animator CameraManager::m_CameraStateAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_CameraStateAnimator_9;
};

// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50  : public CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE
{
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_LookAt
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LookAt_28;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_Follow
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Follow_29;
	// Cinemachine.LensSettings Cinemachine.CinemachineVirtualCamera::m_Lens
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___m_Lens_30;
	// Cinemachine.CinemachineVirtualCameraBase/TransitionParams Cinemachine.CinemachineVirtualCamera::m_Transitions
	TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA ___m_Transitions_31;
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCamera::m_LegacyBlendHint
	int32_t ___m_LegacyBlendHint_32;
	// System.Boolean Cinemachine.CinemachineVirtualCamera::m_UserIsDragging
	bool ___m_UserIsDragging_36;
	// Cinemachine.CameraState Cinemachine.CinemachineVirtualCamera::m_State
	CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 ___m_State_37;
	// Cinemachine.CinemachineComponentBase[] Cinemachine.CinemachineVirtualCamera::m_ComponentPipeline
	CinemachineComponentBaseU5BU5D_t479D9A9F2F2C4AB6F50F6C64FAC4BC8EC602C077* ___m_ComponentPipeline_38;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_ComponentOwner
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ComponentOwner_39;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::mCachedLookAtTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___mCachedLookAtTarget_40;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCamera::mCachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___mCachedLookAtTargetVcam_41;
};

struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_StaticFields
{
	// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate Cinemachine.CinemachineVirtualCamera::CreatePipelineOverride
	CreatePipelineDelegate_tC9ED5364DE6A2A753E8C9FF767C2C37C5CBB6BFC* ___CreatePipelineOverride_34;
	// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate Cinemachine.CinemachineVirtualCamera::DestroyPipelineOverride
	DestroyPipelineDelegate_tDBA135A8B9ACD670F6144200C281F32F728BB842* ___DestroyPipelineOverride_35;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public Singleton_1_t3D2F23D966DBD653F6411E976BD4A5A33E9DD1B7
{
	// GameManager/OnGamePhaseChanged GameManager::onGamePhaseChanged
	OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* ___onGamePhaseChanged_7;
	// GamePhase GameManager::<currentPhase>k__BackingField
	int32_t ___U3CcurrentPhaseU3Ek__BackingField_8;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// LevelManager
struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530  : public Singleton_1_t57146DEC2403B0DC891826D5FF9CBD3A240BB726
{
	// GameManager LevelManager::m_GameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___m_GameManager_7;
	// UnityEngine.GameObject[] LevelManager::m_Targets
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___m_Targets_8;
	// UnityEngine.GameObject LevelManager::m_GoalArea
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GoalArea_9;
	// UnityEngine.Transform LevelManager::m_TargetsParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_TargetsParent_10;
	// UnityEngine.GameObject[] LevelManager::m_Pool
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___m_Pool_11;
	// System.Int32 LevelManager::m_MaxPoolCount
	int32_t ___m_MaxPoolCount_12;
	// System.Int32 LevelManager::m_PoolCounter
	int32_t ___m_PoolCounter_13;
	// UnityEngine.Vector2[] LevelManager::m_TargetPlaceRange
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_TargetPlaceRange_14;
};

// PlayerManager
struct PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84  : public Singleton_1_tAB8900DF126641F42134EDEB430B6D866841F00A
{
	// UnityEngine.GameObject PlayerManager::m_prefabBall
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_prefabBall_7;
	// UnityEngine.LineRenderer PlayerManager::m_aimLineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___m_aimLineRenderer_8;
	// UnityEngine.Vector3 PlayerManager::m_ballStartPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ballStartPosition_9;
	// UnityEngine.Vector3 PlayerManager::m_ballFirstPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ballFirstPosition_10;
	// System.Single PlayerManager::m_forceMultiplier
	float ___m_forceMultiplier_11;
	// GameManager PlayerManager::m_gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___m_gameManager_12;
	// CameraManager PlayerManager::m_cameraManager
	CameraManager_t27CFDF23ED636E9025EFEA9A5E8B0004355206BB* ___m_cameraManager_13;
	// UnityEngine.Camera PlayerManager::m_mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_mainCamera_14;
	// UnityEngine.BoxCollider PlayerManager::m_detectCollider
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___m_detectCollider_15;
	// UnityEngine.Rigidbody PlayerManager::m_ballRigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_ballRigidbody_16;
	// UnityEngine.Transform PlayerManager::m_ballTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ballTransform_17;
	// UnityEngine.Vector3 PlayerManager::m_mouseFirstPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_mouseFirstPosition_18;
	// UnityEngine.Vector3 PlayerManager::m_mouseLastPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_mouseLastPosition_19;
	// UnityEngine.Vector3 PlayerManager::m_instancePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_instancePosition_20;
	// System.Int32 PlayerManager::m_forceMultiplierFromJson
	int32_t ___m_forceMultiplierFromJson_21;
	// System.Boolean PlayerManager::m_ballAimStatu
	bool ___m_ballAimStatu_22;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// StatsManager
struct StatsManager_tC4FC040D87839B5C03060ACC2B3A01B02F165F87  : public Singleton_1_tC01C0A4A5261DA12ECDA08077833E23FE530CBA7
{
};

// TargetBallon
struct TargetBallon_tE08085478FDE1CBD769734051D32BE26E82A05AD  : public Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5
{
};

// TargetGoalArea
struct TargetGoalArea_tBF73B45BA30F3834C1958B6AA9777CF6622AAD2C  : public Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5
{
};

// TargetStar
struct TargetStar_t9380397AF6F5C40A3B20889B0C134CD21DDC3B18  : public Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5
{
};

// GameEndView
struct GameEndView_t23F24B39254973CBD2546BFCE605FC12215FCEB0  : public View_1_t5BAF756D8FC11B225BB3171C72482CCBD5C70A8A
{
	// UnityEngine.UI.Image GameEndView::m_imageGameFail
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_imageGameFail_16;
	// UnityEngine.UI.Image GameEndView::m_imageGameSuccess
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_imageGameSuccess_17;
	// UnityEngine.UI.Text GameEndView::m_TextHighScore
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextHighScore_18;
	// UnityEngine.UI.Text GameEndView::m_TextLevelScore
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextLevelScore_19;
};

// GamePlayView
struct GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD  : public View_1_tF71BB4B137A698F16D5C93BA9B104EA9EF939A71
{
	// UnityEngine.UI.Text GamePlayView::m_txtCountDown
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_txtCountDown_16;
	// UnityEngine.UI.Text GamePlayView::m_txtPlayerLevelPoint
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_txtPlayerLevelPoint_17;
	// UnityEngine.UI.Text GamePlayView::m_txtGoal
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_txtGoal_18;
	// System.Int32 GamePlayView::m_pointOfLevel
	int32_t ___m_pointOfLevel_19;
	// System.Int32 GamePlayView::m_PointPerGoalFromJson
	int32_t ___m_PointPerGoalFromJson_20;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_32;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_33;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_34;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_35;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_36;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_38;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_39;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_40;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_41;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_42;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_44;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_45;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_46;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_47;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_48;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_49;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_50;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_51;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_52;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_53;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_54;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_55;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_58;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_59;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_61;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_62;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_63;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_64;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_65;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_66;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_67;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_68;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_70;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// MainMenuView
struct MainMenuView_t0683229FCA1D2E67D4324BB73A987442BF21AC9D  : public View_1_t0AE4A1ED9FD00208340489321E405EDDB84585C1
{
	// UnityEngine.Transform MainMenuView::m_PanelSettings
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_PanelSettings_16;
	// UnityEngine.UI.InputField MainMenuView::m_txtBallPower
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___m_txtBallPower_17;
	// UnityEngine.UI.InputField MainMenuView::m_txtPointPerGoal
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___m_txtPointPerGoal_18;
	// UnityEngine.UI.Text MainMenuView::m_txtStatu
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_txtStatu_19;
	// UnityEngine.UI.Text MainMenuView::m_txtData
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_txtData_20;
	// System.Boolean MainMenuView::m_PanelStatu
	bool ___m_PanelStatu_21;
	// GameData MainMenuView::m_GameData
	GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ___m_GameData_22;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Ball/<StopBall>d__16>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90_m46588BE9342C290DDE3D68F95BD2B80AC544B952_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Ball/<StopBall>d__16>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90_m89404901BB51B3AE97CAD458ADC40CF0E66937F3_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90* ___stateMachine1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(T,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetEase_TisRuntimeObject_m1889AEFA8CEF7472F2F292AA8DED9CE4AADB35CF_gshared (RuntimeObject* ___t0, int32_t ___ease1, const RuntimeMethod* method) ;
// System.Void Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared (Singleton_1_t761811FA61B8CEAEB90FA0D60BD999994A7FE1E6* __this, const RuntimeMethod* method) ;
// T Singleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Singleton_1_get_Instance_m1E7538A5B8DECDF0740EF37390595FD4356B31FB_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void View`1<System.Object>::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void View_1_Awake_m6DDA0F7D1B48B53E9802BC178F5FD80FC548B185_gshared (View_1_tBA8146540E028CF9261DF2B9B8385668E1F1B39E* __this, const RuntimeMethod* method) ;
// System.Void View`1<System.Object>::OnGamePhaseChanged(GamePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void View_1_OnGamePhaseChanged_mF654041C64478CA87908F1882012CE37A5169FE8_gshared (View_1_tBA8146540E028CF9261DF2B9B8385668E1F1B39E* __this, int32_t ____GamePhase0, const RuntimeMethod* method) ;
// System.Void View`1<System.Object>::Transition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void View_1_Transition_mA4397858D61C14B1E3A47FA5035590CF2BC28E22_gshared (View_1_tBA8146540E028CF9261DF2B9B8385668E1F1B39E* __this, bool ____InOrOut0, const RuntimeMethod* method) ;
// System.Void View`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void View_1__ctor_m166AAAEFF131D381963A69F815CB220A5BEE85F5_gshared (View_1_tBA8146540E028CF9261DF2B9B8385668E1F1B39E* __this, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnComplete<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnComplete_TisRuntimeObject_mF076A1EB869F2F1DB7365AA7D12490B715428668_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared (String_t* ___json0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Ball::Shoot(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_Shoot_m8F39BBED6D992853EEE479972E3573B32D3FADD0 (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___aim0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// System.Void Ball::StopBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_StopBall_m2669806D3F95593EA1478719484E0BE1ADA17D11 (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, const RuntimeMethod* method) ;
// System.Void Ball::ResetBallLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_ResetBallLine_mDFEBC1E96CEB894A81CCB25FB2D181AC72FC9AFC (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Ball/<StopBall>d__16>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90_m46588BE9342C290DDE3D68F95BD2B80AC544B952 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90_m46588BE9342C290DDE3D68F95BD2B80AC544B952_gshared)(__this, ___stateMachine0, method);
}
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Delay_m49549664B58973EEEF1B479B21FB30D0DF3C7EFA (int32_t ___millisecondsDelay0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Ball/<StopBall>d__16>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90_m89404901BB51B3AE97CAD458ADC40CF0E66937F3 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90_m89404901BB51B3AE97CAD458ADC40CF0E66937F3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void Ball/<StopBall>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopBallU3Ed__16_MoveNext_mC42A8684EF0439B795B7104D7DF9F8F656870118 (U3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Ball/<StopBall>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopBallU3Ed__16_SetStateMachine_m2BA1EDE50A687D75AC00156DD87769262C1EDD50 (U3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOScale(UnityEngine.Transform,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOScale_m7BBBF6EA15ED2BB02E4E32122D0FE0C8D2A4467D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>>(T,DG.Tweening.Ease)
inline TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ___t0, int32_t ___ease1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* (*) (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m1889AEFA8CEF7472F2F292AA8DED9CE4AADB35CF_gshared)(___t0, ___ease1, method);
}
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void EventManager::DetectGoal(System.Int32,TargetTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_DetectGoal_m96F8C5C9EA83E1C1BCD0F09336884452BBD12314 (int32_t ____Point0, int32_t ____Type1, const RuntimeMethod* method) ;
// System.Void TargetBallon::AnimateTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetBallon_AnimateTarget_m1F02484E676174F36B4D20C39F5DAC7464E7BDDE (TargetBallon_tE08085478FDE1CBD769734051D32BE26E82A05AD* __this, const RuntimeMethod* method) ;
// System.Void Target::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target__ctor_m5524C5EEF36FA6DB1E6B5BFA323B37E68635C216 (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) ;
// System.Void Target::AnimTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target_AnimTarget_mD1F911DBF67B02E3E503537DC59660D450C0C364 (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, const RuntimeMethod* method) ;
// System.Void Singleton`1<CameraManager>::.ctor()
inline void Singleton_1__ctor_m30F77B178EC401F84252F3102F42390E2E810237 (Singleton_1_tAC2D4F57CDAD34ED8AD3368CA3B3090E6DA5EC0E* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tAC2D4F57CDAD34ED8AD3368CA3B3090E6DA5EC0E*, const RuntimeMethod*))Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void EventManager/OnTargetShoot::Invoke(System.Int32,TargetTypes)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnTargetShoot_Invoke_m6A8D717597E22EE9D88B2B8CC306F4F0CCA77D6C_inline (OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* __this, int32_t ____Point0, int32_t ____Type1, const RuntimeMethod* method) ;
// System.Void EventManager/OnShoot::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnShoot_Invoke_mE6EAADBA6C882AE1D2343BD01B52E208B166A177_inline (OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::ChangePhase(GamePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ChangePhase_m572F89DBF83B87522E55EA65AC6FE765C6C6BE86 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ____GamePhase0, const RuntimeMethod* method) ;
// System.Void GameManager::set_currentPhase(GamePhase)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_currentPhase_m2F78A1B3F4AE40AE951D113146286BA723789508_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void GameManager/OnGamePhaseChanged::Invoke(GamePhase)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnGamePhaseChanged_Invoke_mBCDD59F98828FCC5EA178E2BD0653A7097FCBD00_inline (OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* __this, int32_t ____GamePhase0, const RuntimeMethod* method) ;
// System.Void Singleton`1<GameManager>::.ctor()
inline void Singleton_1__ctor_mFD940A60BFF417DE575BBFAE67006E1D442B9CB8 (Singleton_1_t3D2F23D966DBD653F6411E976BD4A5A33E9DD1B7* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t3D2F23D966DBD653F6411E976BD4A5A33E9DD1B7*, const RuntimeMethod*))Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TargetGoalArea>()
inline TargetGoalArea_tBF73B45BA30F3834C1958B6AA9777CF6622AAD2C* Component_GetComponent_TisTargetGoalArea_tBF73B45BA30F3834C1958B6AA9777CF6622AAD2C_m5A8B6B0EAE8C1A46660C4367CC16783A79D7A3C1 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TargetGoalArea_tBF73B45BA30F3834C1958B6AA9777CF6622AAD2C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T Singleton`1<GameManager>::get_Instance()
inline GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* Singleton_1_get_Instance_m33F542FAC846E5BB3B70A8A2672436F132C37351 (const RuntimeMethod* method)
{
	return ((  GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* (*) (const RuntimeMethod*))Singleton_1_get_Instance_m1E7538A5B8DECDF0740EF37390595FD4356B31FB_gshared)(method);
}
// System.Void GameManager/OnGamePhaseChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGamePhaseChanged__ctor_m681D72890F4F6868B7FED8B3886489A0279DF987 (OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void GameManager::add_onGamePhaseChanged(GameManager/OnGamePhaseChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add_onGamePhaseChanged_m939E0C75F935F0F1201302754A2C673D9B8A24C7 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* ___value0, const RuntimeMethod* method) ;
// System.Void EventManager/OnShoot::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnShoot__ctor_mF2B24DA204E734186929562A8E1B20ABE1DA3C7D (OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void EventManager::add_OnPlayerShoot(EventManager/OnShoot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_add_OnPlayerShoot_m7268B2DE3669F4A6F3820AB4C474158C518DF98A (OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* ___value0, const RuntimeMethod* method) ;
// System.Void EventManager::remove_OnPlayerShoot(EventManager/OnShoot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_remove_OnPlayerShoot_m0C9F0A3FF7FBF9B62008A9E18A0E33A8FF7E76B3 (OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LevelManager::countDownStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelManager_countDownStart_m327F96524B025CF32661BA33A2FFA9D23338AD40 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void LevelManager::CreateRandomTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_CreateRandomTargets_m52F92D5768D817F6CED29C134EFA87AC1C15D17F (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) ;
// System.Void LevelManager/<countDownStart>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcountDownStartU3Ed__13__ctor_mF99AC22B5FCB15D59AAFD5107E7C17BA341699C2 (U3CcountDownStartU3Ed__13_tC04C348A30667FF7FBDD5DC00EC89DAE306280F1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void LevelManager::InstantiateFromPool(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_InstantiateFromPool_m2E81F10E5B3571624F6CBD8D102B1D48606AA35F (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, int32_t ____TargetCount0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Singleton`1<LevelManager>::.ctor()
inline void Singleton_1__ctor_m963977D2790A50C740A1551A295B9CE90F4EAC19 (Singleton_1_t57146DEC2403B0DC891826D5FF9CBD3A240BB726* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t57146DEC2403B0DC891826D5FF9CBD3A240BB726*, const RuntimeMethod*))Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared)(__this, method);
}
// T Singleton`1<GamePlayView>::get_Instance()
inline GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* Singleton_1_get_Instance_m23C78C97634E8975A0A58BBCDF1AF60967680FD0 (const RuntimeMethod* method)
{
	return ((  GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* (*) (const RuntimeMethod*))Singleton_1_get_Instance_m1E7538A5B8DECDF0740EF37390595FD4356B31FB_gshared)(method);
}
// System.Void GamePlayView::SetCountDownTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayView_SetCountDownTime_m64C713AA800B8498E271C217F48E856B7FE1384B (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, int32_t ____Seconds0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// T Singleton`1<PlayerManager>::get_Instance()
inline PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* Singleton_1_get_Instance_mB21628D314EBC540E3AE9BE7A8EF27532D14F5C0 (const RuntimeMethod* method)
{
	return ((  PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* (*) (const RuntimeMethod*))Singleton_1_get_Instance_m1E7538A5B8DECDF0740EF37390595FD4356B31FB_gshared)(method);
}
// System.Void PlayerManager::SetupBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_SetupBall_m8005BB535587435F98C98DE555F6A500ECB4EA7A (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T Singleton`1<CameraManager>::get_Instance()
inline CameraManager_t27CFDF23ED636E9025EFEA9A5E8B0004355206BB* Singleton_1_get_Instance_mB7845E881BF4F17C894C2C551B32F3AF463FA2F8 (const RuntimeMethod* method)
{
	return ((  CameraManager_t27CFDF23ED636E9025EFEA9A5E8B0004355206BB* (*) (const RuntimeMethod*))Singleton_1_get_Instance_m1E7538A5B8DECDF0740EF37390595FD4356B31FB_gshared)(method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void CameraManager::SetCameraAction(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager_SetCameraAction_m5C882746E8BC86777D6DFB86B57B06695FC1416C (CameraManager_t27CFDF23ED636E9025EFEA9A5E8B0004355206BB* __this, bool ____ToPoint0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void CameraManager::SetCameraFollowObject(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager_SetCameraFollowObject_m2445D74A99BD906E6A2BDBB5AAC69E825A656270 (CameraManager_t27CFDF23ED636E9025EFEA9A5E8B0004355206BB* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____Target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void PlayerManager::Shoot(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_Shoot_m54BEF22BFF1793B1E8B437B1D31488C58174321B (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___aim0, const RuntimeMethod* method) ;
// System.Void PlayerManager::ResetBallLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_ResetBallLine_m6F3307E3AFAD6BCDFF8E81A64D17AC239BFFDCAB (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerManager::corStopLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerManager_corStopLevel_m7A7BB778714465ACB6953DF29F1F35BBB349FE5D (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, const RuntimeMethod* method) ;
// System.Void PlayerManager/<corStopLevel>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcorStopLevelU3Ed__22__ctor_m78169B0DD28A6D26950527465B6010F652203134 (U3CcorStopLevelU3Ed__22_t83EBF110A67FF983AA6997222F5397D02CB853FF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Singleton`1<PlayerManager>::.ctor()
inline void Singleton_1__ctor_m00E0C7315A836B1C0A37EEBE36DDAD1F3950ED6C (Singleton_1_tAB8900DF126641F42134EDEB430B6D866841F00A* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tAB8900DF126641F42134EDEB430B6D866841F00A*, const RuntimeMethod*))Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared)(__this, method);
}
// System.Void EventManager::PlayerShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_PlayerShoot_mC5ABB9678C99421816D929BCC5B88EF9FE3E0907 (const RuntimeMethod* method) ;
// System.Int32 StatsManager::GetPlayerHighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StatsManager_GetPlayerHighScore_m2E3629A3B455B3903D6D817C5D0E6E34C48D8EF4 (StatsManager_tC4FC040D87839B5C03060ACC2B3A01B02F165F87* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F (String_t* ___key0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void Singleton`1<StatsManager>::.ctor()
inline void Singleton_1__ctor_mC04AB51BDEDE7E88FEDBF14B971ADBADCA2AEAF8 (Singleton_1_tC01C0A4A5261DA12ECDA08077833E23FE530CBA7* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tC01C0A4A5261DA12ECDA08077833E23FE530CBA7*, const RuntimeMethod*))Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared)(__this, method);
}
// System.Void View`1<GameEndView>::Awake()
inline void View_1_Awake_mDA5EE896B4172CD7A6EEE1C68304F6BABAA6B403 (View_1_t5BAF756D8FC11B225BB3171C72482CCBD5C70A8A* __this, const RuntimeMethod* method)
{
	((  void (*) (View_1_t5BAF756D8FC11B225BB3171C72482CCBD5C70A8A*, const RuntimeMethod*))View_1_Awake_m6DDA0F7D1B48B53E9802BC178F5FD80FC548B185_gshared)(__this, method);
}
// System.Void View`1<GameEndView>::OnGamePhaseChanged(GamePhase)
inline void View_1_OnGamePhaseChanged_mE708CDC70718F633A1E6B0E2FF134AFC5FB92DB9 (View_1_t5BAF756D8FC11B225BB3171C72482CCBD5C70A8A* __this, int32_t ____GamePhase0, const RuntimeMethod* method)
{
	((  void (*) (View_1_t5BAF756D8FC11B225BB3171C72482CCBD5C70A8A*, int32_t, const RuntimeMethod*))View_1_OnGamePhaseChanged_mF654041C64478CA87908F1882012CE37A5169FE8_gshared)(__this, ____GamePhase0, method);
}
// System.Void GameEndView::SetupGameEndView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndView_SetupGameEndView_m1B9DB88D74664A1FA5429FADC288C4EA626C5B79 (GameEndView_t23F24B39254973CBD2546BFCE605FC12215FCEB0* __this, const RuntimeMethod* method) ;
// System.Void View`1<GameEndView>::Transition(System.Boolean)
inline void View_1_Transition_m79E1C98F2FD308667EE7E4C578E602CDAA1124B6 (View_1_t5BAF756D8FC11B225BB3171C72482CCBD5C70A8A* __this, bool ____InOrOut0, const RuntimeMethod* method)
{
	((  void (*) (View_1_t5BAF756D8FC11B225BB3171C72482CCBD5C70A8A*, bool, const RuntimeMethod*))View_1_Transition_mA4397858D61C14B1E3A47FA5035590CF2BC28E22_gshared)(__this, ____InOrOut0, method);
}
// System.Void GameEndView::CheckLevelEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndView_CheckLevelEnd_mC6D1159766A6764D23199A3477CA576C9DBA5B08 (GameEndView_t23F24B39254973CBD2546BFCE605FC12215FCEB0* __this, const RuntimeMethod* method) ;
// System.Int32 GamePlayView::get_LevelPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GamePlayView_get_LevelPoint_m07829F6C2A974DBF5322CE73B9BE82D8E6888F65_inline (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, const RuntimeMethod* method) ;
// System.Void GameEndView::LevelSuccess(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndView_LevelSuccess_m301EE6F0866EC2898F6D65D49BC43E7A9478216A (GameEndView_t23F24B39254973CBD2546BFCE605FC12215FCEB0* __this, int32_t ____levelPoint0, const RuntimeMethod* method) ;
// System.Void GameEndView::LevelFail(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndView_LevelFail_mFFE602462D737B7D6BD4AA44EFCA066B36D709EB (GameEndView_t23F24B39254973CBD2546BFCE605FC12215FCEB0* __this, int32_t ____levelPoint0, const RuntimeMethod* method) ;
// System.Void GameEndView::ShowLevelScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndView_ShowLevelScore_m8FD9A600777F1C67621E3326936A65331A094C27 (GameEndView_t23F24B39254973CBD2546BFCE605FC12215FCEB0* __this, int32_t ____levelPoint0, const RuntimeMethod* method) ;
// T Singleton`1<StatsManager>::get_Instance()
inline StatsManager_tC4FC040D87839B5C03060ACC2B3A01B02F165F87* Singleton_1_get_Instance_mC2AEEBDB372B0DE799F002D62CD7E38891EF8B81 (const RuntimeMethod* method)
{
	return ((  StatsManager_tC4FC040D87839B5C03060ACC2B3A01B02F165F87* (*) (const RuntimeMethod*))Singleton_1_get_Instance_m1E7538A5B8DECDF0740EF37390595FD4356B31FB_gshared)(method);
}
// System.Void StatsManager::SetPlayerHighScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatsManager_SetPlayerHighScore_m18BBDF048ABEA7E1098D7FC56269F9589D691B71 (StatsManager_tC4FC040D87839B5C03060ACC2B3A01B02F165F87* __this, int32_t ____Score0, const RuntimeMethod* method) ;
// System.Void GameEndView::AnimateHighScoreAnimation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndView_AnimateHighScoreAnimation_m898AFBEE8B1D6937E1BB227E17710E8473FF734D (GameEndView_t23F24B39254973CBD2546BFCE605FC12215FCEB0* __this, int32_t ____levelPoint0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOScale(UnityEngine.Transform,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOScale_m163029C9F239BAB93446F934B063D4545494D10A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// System.Void View`1<GameEndView>::.ctor()
inline void View_1__ctor_mFC016BE4AA8F3665D6FAA6FF0D47F572FCBAB392 (View_1_t5BAF756D8FC11B225BB3171C72482CCBD5C70A8A* __this, const RuntimeMethod* method)
{
	((  void (*) (View_1_t5BAF756D8FC11B225BB3171C72482CCBD5C70A8A*, const RuntimeMethod*))View_1__ctor_m166AAAEFF131D381963A69F815CB220A5BEE85F5_gshared)(__this, method);
}
// System.Void View`1<GamePlayView>::Awake()
inline void View_1_Awake_mF4DD2BAF16285FCD1BD2AE1941C07A98D6430B0A (View_1_tF71BB4B137A698F16D5C93BA9B104EA9EF939A71* __this, const RuntimeMethod* method)
{
	((  void (*) (View_1_tF71BB4B137A698F16D5C93BA9B104EA9EF939A71*, const RuntimeMethod*))View_1_Awake_m6DDA0F7D1B48B53E9802BC178F5FD80FC548B185_gshared)(__this, method);
}
// System.Void View`1<GamePlayView>::OnGamePhaseChanged(GamePhase)
inline void View_1_OnGamePhaseChanged_mBF2B865F9C11F9AAD3FE04966BF0E548318529FC (View_1_tF71BB4B137A698F16D5C93BA9B104EA9EF939A71* __this, int32_t ____GamePhase0, const RuntimeMethod* method)
{
	((  void (*) (View_1_tF71BB4B137A698F16D5C93BA9B104EA9EF939A71*, int32_t, const RuntimeMethod*))View_1_OnGamePhaseChanged_mF654041C64478CA87908F1882012CE37A5169FE8_gshared)(__this, ____GamePhase0, method);
}
// System.Void GamePlayView::SetupGameView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayView_SetupGameView_m8ACAD0F526B9C363FC55BD818A00C0BD46FD6EAD (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, const RuntimeMethod* method) ;
// System.Void View`1<GamePlayView>::Transition(System.Boolean)
inline void View_1_Transition_m17858942056D2583A05390B1B12D083FA6658B48 (View_1_tF71BB4B137A698F16D5C93BA9B104EA9EF939A71* __this, bool ____InOrOut0, const RuntimeMethod* method)
{
	((  void (*) (View_1_tF71BB4B137A698F16D5C93BA9B104EA9EF939A71*, bool, const RuntimeMethod*))View_1_Transition_mA4397858D61C14B1E3A47FA5035590CF2BC28E22_gshared)(__this, ____InOrOut0, method);
}
// System.Void EventManager/OnTargetShoot::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTargetShoot__ctor_mEFE22C1B662E78C1FCEFE711C80A88DE25873C90 (OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void EventManager::add_OnTargetShootDetect(EventManager/OnTargetShoot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_add_OnTargetShootDetect_m2DFD571AACE1965A27CE91E835951F955DAE0980 (OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* ___value0, const RuntimeMethod* method) ;
// System.Void EventManager::remove_OnTargetShootDetect(EventManager/OnTargetShoot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_remove_OnTargetShootDetect_mF68658641560A08B58BF9E188E891C9104028D4F (OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void DG.Tweening.TweenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621 (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnComplete<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>>(T,DG.Tweening.TweenCallback)
inline TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mF60DBA3F6C157331404BD6819A0AFF03A6339FB7 (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* (*) (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnComplete_TisRuntimeObject_mF076A1EB869F2F1DB7365AA7D12490B715428668_gshared)(___t0, ___action1, method);
}
// System.Void GamePlayView::SetGoalAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayView_SetGoalAnim_mE74D8F14C40264E9117D0EF22955C00FBA63A2ED (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, const RuntimeMethod* method) ;
// System.Void View`1<GamePlayView>::.ctor()
inline void View_1__ctor_m26198A5F5037D95B5BC5D7BC32909E181841CD4E (View_1_tF71BB4B137A698F16D5C93BA9B104EA9EF939A71* __this, const RuntimeMethod* method)
{
	((  void (*) (View_1_tF71BB4B137A698F16D5C93BA9B104EA9EF939A71*, const RuntimeMethod*))View_1__ctor_m166AAAEFF131D381963A69F815CB220A5BEE85F5_gshared)(__this, method);
}
// System.Void View`1<MainMenuView>::Awake()
inline void View_1_Awake_m79FEE230BFCB321DA98284862AEC993C3D096F76 (View_1_t0AE4A1ED9FD00208340489321E405EDDB84585C1* __this, const RuntimeMethod* method)
{
	((  void (*) (View_1_t0AE4A1ED9FD00208340489321E405EDDB84585C1*, const RuntimeMethod*))View_1_Awake_m6DDA0F7D1B48B53E9802BC178F5FD80FC548B185_gshared)(__this, method);
}
// GamePhase GameManager::get_currentPhase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_currentPhase_m5A8C0BFBD6B904FDE25CDFA6DF74C176DDD1E271_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void View`1<MainMenuView>::OnGamePhaseChanged(GamePhase)
inline void View_1_OnGamePhaseChanged_m96AEB7C31C83C3BB59097AC5AEE7CBFDC3A8B8C4 (View_1_t0AE4A1ED9FD00208340489321E405EDDB84585C1* __this, int32_t ____GamePhase0, const RuntimeMethod* method)
{
	((  void (*) (View_1_t0AE4A1ED9FD00208340489321E405EDDB84585C1*, int32_t, const RuntimeMethod*))View_1_OnGamePhaseChanged_mF654041C64478CA87908F1882012CE37A5169FE8_gshared)(__this, ____GamePhase0, method);
}
// System.Void View`1<MainMenuView>::Transition(System.Boolean)
inline void View_1_Transition_m7AABA56C9D73B455B1F229850D31D465951DA0AA (View_1_t0AE4A1ED9FD00208340489321E405EDDB84585C1* __this, bool ____InOrOut0, const RuntimeMethod* method)
{
	((  void (*) (View_1_t0AE4A1ED9FD00208340489321E405EDDB84585C1*, bool, const RuntimeMethod*))View_1_Transition_mA4397858D61C14B1E3A47FA5035590CF2BC28E22_gshared)(__this, ____InOrOut0, method);
}
// GameData SaveLoadManager::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* SaveLoadManager_Load_m7652FFB647822ED5F256603C39A8543B2AA3D42B (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void SaveLoadManager::Save(GameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadManager_Save_m3A501371B32EDC8A85DDA0E9B19EB633F9035B21 (GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ____GameData0, const RuntimeMethod* method) ;
// System.Void PlayerManager::set_ForceMultiplier(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerManager_set_ForceMultiplier_m6C8DDFB7DECCC8CA3BE10F118B41D5E801B9BD15_inline (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T Singleton`1<LevelManager>::get_Instance()
inline LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* Singleton_1_get_Instance_mAC9DF11E32326AC2D20BC2ED3F0B0E38A5FB548F (const RuntimeMethod* method)
{
	return ((  LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* (*) (const RuntimeMethod*))Singleton_1_get_Instance_m1E7538A5B8DECDF0740EF37390595FD4356B31FB_gshared)(method);
}
// System.Void LevelManager::SetNewPointForGoalArea(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_SetNewPointForGoalArea_mBE82E2D2512CF8A1061027DC845E7A584A1C6E2C (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, int32_t ____NewPoint0, const RuntimeMethod* method) ;
// System.Void GameData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData__ctor_mA9048174D2C20A10AD865A4B919045878E27099A (GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* __this, const RuntimeMethod* method) ;
// System.Void View`1<MainMenuView>::.ctor()
inline void View_1__ctor_mB153BF8D371DC9A7E2B3A0F22BF6699AE5907131 (View_1_t0AE4A1ED9FD00208340489321E405EDDB84585C1* __this, const RuntimeMethod* method)
{
	((  void (*) (View_1_t0AE4A1ED9FD00208340489321E405EDDB84585C1*, const RuntimeMethod*))View_1__ctor_m166AAAEFF131D381963A69F815CB220A5BEE85F5_gshared)(__this, method);
}
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17 (const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85 (String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllText_mE462D8448CA65183AA5D464210706167E0EF19EB (String_t* ___path0, String_t* ___contents1, const RuntimeMethod* method) ;
// System.String System.IO.File::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_m5635BE83C14358AB1721547180F43103F777CEB5 (String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<GameData>(System.String)
inline GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* JsonUtility_FromJson_TisGameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_mB389D0CF42794EF04C41D868300A3359FB425ACD (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData__ctor_mA9048174D2C20A10AD865A4B919045878E27099A (GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ball::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_Start_m6E8CBDA3753768BAFE8CE82AD74B01E8355C50D3 (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___m_rigidbody_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_rigidbody_8), (void*)L_0);
		// m_transform = GetComponent<Transform>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F(__this, Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		__this->___m_transform_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_transform_9), (void*)L_1);
		// m_ballStartPos = m_transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_transform_9;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		__this->___m_ballStartPos_10 = L_3;
		// }
		return;
	}
}
// System.Void Ball::SetBallSetup(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_SetBallSetup_m742C5F8A1341C36E05B18B4B197F9C70FEDAE776 (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____MainCamera0, const RuntimeMethod* method) 
{
	{
		// m_mainCamera = _MainCamera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ____MainCamera0;
		__this->___m_mainCamera_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_mainCamera_12), (void*)L_0);
		// m_ballStatu = true;
		__this->___m_ballStatu_13 = (bool)1;
		// }
		return;
	}
}
// System.Void Ball::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_OnMouseDown_mBC831AE8F66192AF6C8B739D7C8D053D98827D71 (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, const RuntimeMethod* method) 
{
	{
		// m_ballStatu = true;
		__this->___m_ballStatu_13 = (bool)1;
		// m_ballLine.SetPosition(0, m_ballStartPos);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___m_ballLine_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_ballStartPos_10;
		NullCheck(L_0);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_0, 0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Ball::OnMouseDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_OnMouseDrag_m7A08050A67D0E8B51C9C61914408BB8BCAD4706B (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Ray ray = m_mainCamera.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_mainCamera_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2;
		L_2 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_1, NULL);
		// if (Physics.Raycast(ray, out RaycastHit raycastHit) && m_ballStatu)
		bool L_3;
		L_3 = Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A(L_2, (&V_0), NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		bool L_4 = __this->___m_ballStatu_13;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// m_ballLine.SetPosition(1, raycastHit.point);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_5 = __this->___m_ballLine_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		NullCheck(L_5);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_5, 1, L_6, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Ball::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_OnMouseUp_m873D71A70D7F42EE564C57D8E0F03D2CEA721BA4 (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB273814532070AEED668C12C3A0EFA9C9B12A7AD);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Ray ray = m_mainCamera.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_mainCamera_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2;
		L_2 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_1, NULL);
		// if (Physics.Raycast(ray, out RaycastHit raycastHit))
		bool L_3;
		L_3 = Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A(L_2, (&V_0), NULL);
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		// Debug.Log("raycasthit pos : " + raycastHit.point);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		V_1 = L_4;
		String_t* L_5;
		L_5 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_1), NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB273814532070AEED668C12C3A0EFA9C9B12A7AD, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_6, NULL);
		// m_mouseLastPosition = raycastHit.point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		__this->___m_mouseLastPosition_7 = L_7;
		// Shoot(raycastHit.point);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		Ball_Shoot_m8F39BBED6D992853EEE479972E3573B32D3FADD0(__this, L_8, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Ball::Shoot(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_Shoot_m8F39BBED6D992853EEE479972E3573B32D3FADD0 (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___aim0, const RuntimeMethod* method) 
{
	{
		// m_ballStatu = false;
		__this->___m_ballStatu_13 = (bool)0;
		// m_rigidbody.AddForce(new Vector3(aim.x, aim.y, aim.z) * m_forceMultiplier);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___m_rigidbody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___aim0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___aim0;
		float L_4 = L_3.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___aim0;
		float L_6 = L_5.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), L_2, L_4, L_6, /*hidden argument*/NULL);
		float L_8 = __this->___m_forceMultiplier_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_7, L_8, NULL);
		NullCheck(L_0);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_0, L_9, NULL);
		// StopBall();
		Ball_StopBall_m2669806D3F95593EA1478719484E0BE1ADA17D11(__this, NULL);
		// ResetBallLine();
		Ball_ResetBallLine_mDFEBC1E96CEB894A81CCB25FB2D181AC72FC9AFC(__this, NULL);
		// }
		return;
	}
}
// System.Void Ball::StopBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_StopBall_m2669806D3F95593EA1478719484E0BE1ADA17D11 (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90_m46588BE9342C290DDE3D68F95BD2B80AC544B952_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90_m46588BE9342C290DDE3D68F95BD2B80AC544B952(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90_m46588BE9342C290DDE3D68F95BD2B80AC544B952_RuntimeMethod_var);
		return;
	}
}
// System.Void Ball::ResetBallLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_ResetBallLine_mDFEBC1E96CEB894A81CCB25FB2D181AC72FC9AFC (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, const RuntimeMethod* method) 
{
	{
		// m_lineCounter = 0;
		__this->___m_lineCounter_5 = 0;
		// m_ballLine.positionCount = 0;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___m_ballLine_4;
		NullCheck(L_0);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_0, 0, NULL);
		// m_ballLine.positionCount = 2;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1 = __this->___m_ballLine_4;
		NullCheck(L_1);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_1, 2, NULL);
		// }
		return;
	}
}
// System.Void Ball::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball__ctor_mDFF93D8FA13BD70DF4F2FA2B9B402E3B10BD6EDC (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, const RuntimeMethod* method) 
{
	{
		// private float m_forceMultiplier = 5;
		__this->___m_forceMultiplier_11 = (5.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ball/<StopBall>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopBallU3Ed__16_MoveNext_mC42A8684EF0439B795B7104D7DF9F8F656870118 (U3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90_m89404901BB51B3AE97CAD458ADC40CF0E66937F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004d_1;
			}
		}
		{
			// await Task.Delay(2500);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
			L_3 = Task_Delay_m49549664B58973EEEF1B479B21FB30D0DF3C7EFA(((int32_t)2500), NULL);
			NullCheck(L_3);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_4;
			L_4 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_3, NULL);
			V_2 = L_4;
			bool L_5;
			L_5 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_5)
			{
				goto IL_0069_1;
			}
		}
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->___U3CU3E1__state_0 = L_6;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_7 = V_2;
			__this->___U3CU3Eu__1_3 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_8 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90_m89404901BB51B3AE97CAD458ADC40CF0E66937F3(L_8, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90_m89404901BB51B3AE97CAD458ADC40CF0E66937F3_RuntimeMethod_var);
			goto IL_00e4;
		}

IL_004d_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9 = __this->___U3CU3Eu__1_3;
			V_2 = L_9;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_10 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
		}

IL_0069_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			// m_rigidbody.velocity = Vector3.zero;
			Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* L_12 = V_1;
			NullCheck(L_12);
			Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = L_12->___m_rigidbody_8;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
			L_14 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
			NullCheck(L_13);
			Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_13, L_14, NULL);
			// m_rigidbody.angularVelocity = Vector3.zero;
			Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* L_15 = V_1;
			NullCheck(L_15);
			Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_16 = L_15->___m_rigidbody_8;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
			L_17 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
			NullCheck(L_16);
			Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_16, L_17, NULL);
			// m_transform.position = m_ballStartPos;
			Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* L_18 = V_1;
			NullCheck(L_18);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = L_18->___m_transform_9;
			Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* L_20 = V_1;
			NullCheck(L_20);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = L_20->___m_ballStartPos_10;
			NullCheck(L_19);
			Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_21, NULL);
			// m_transform.rotation = Quaternion.identity;
			Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* L_22 = V_1;
			NullCheck(L_22);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = L_22->___m_transform_9;
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
			L_24 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
			NullCheck(L_23);
			Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_23, L_24, NULL);
			// m_ballStatu = true;
			Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* L_25 = V_1;
			NullCheck(L_25);
			L_25->___m_ballStatu_13 = (bool)1;
			goto IL_00d1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ba;
		}
		throw e;
	}

CATCH_00ba:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_26 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_27 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_26, L_27, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e4;
	}// end catch (depth: 1)

IL_00d1:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_28 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_28, NULL);
	}

IL_00e4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStopBallU3Ed__16_MoveNext_mC42A8684EF0439B795B7104D7DF9F8F656870118_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90*>(__this + _offset);
	U3CStopBallU3Ed__16_MoveNext_mC42A8684EF0439B795B7104D7DF9F8F656870118(_thisAdjusted, method);
}
// System.Void Ball/<StopBall>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopBallU3Ed__16_SetStateMachine_m2BA1EDE50A687D75AC00156DD87769262C1EDD50 (U3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStopBallU3Ed__16_SetStateMachine_m2BA1EDE50A687D75AC00156DD87769262C1EDD50_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStopBallU3Ed__16_t34B1EB4F3F128AD140F7D90C77E2A107CF681A90*>(__this + _offset);
	U3CStopBallU3Ed__16_SetStateMachine_m2BA1EDE50A687D75AC00156DD87769262C1EDD50(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Target::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target_Awake_m5C2BAED793C3F80DB421030B6A3BD26B0C5517C2 (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_transform = GetComponent<Transform>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F(__this, Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		__this->___m_transform_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_transform_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Target::AnimTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target_AnimTarget_mD1F911DBF67B02E3E503537DC59660D450C0C364 (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_transform.DOScale(Vector3.zero, m_AnimScaleDownTime).SetEase(Ease.Flash);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_transform_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		float L_2 = __this->___m_AnimScaleDownTime_6;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_3;
		L_3 = ShortcutExtensions_DOScale_m7BBBF6EA15ED2BB02E4E32122D0FE0C8D2A4467D(L_0, L_1, L_2, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_4;
		L_4 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_3, ((int32_t)32), TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Target::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target__ctor_m5524C5EEF36FA6DB1E6B5BFA323B37E68635C216 (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) 
{
	{
		// private float m_AnimScaleDownTime = 0.2f;
		__this->___m_AnimScaleDownTime_6 = (0.200000003f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TargetBallon::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetBallon_OnTriggerEnter_m73B05B53214EC34C17DC0F4271A4A3F247A241DC (TargetBallon_tE08085478FDE1CBD769734051D32BE26E82A05AD* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerTypes_tF9475839BCBD57C38490B76BA848D1F934218667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (other.CompareTag(TriggerTypes.Player.ToString()))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		V_0 = 0;
		Il2CppFakeBox<int32_t> L_1(TriggerTypes_tF9475839BCBD57C38490B76BA848D1F934218667_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// OnBallTouch();
		VirtualActionInvoker0::Invoke(4 /* System.Void Target::OnBallTouch() */, __this);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void TargetBallon::OnBallTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetBallon_OnBallTouch_m07BDD4E8290DD1A29D2A2E05D665E4C0BE527C0A (TargetBallon_tE08085478FDE1CBD769734051D32BE26E82A05AD* __this, const RuntimeMethod* method) 
{
	{
		// EventManager.DetectGoal(m_point, m_targetType);
		int32_t L_0 = ((Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)__this)->___m_point_7;
		int32_t L_1 = ((Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)__this)->___m_targetType_5;
		EventManager_DetectGoal_m96F8C5C9EA83E1C1BCD0F09336884452BBD12314(L_0, L_1, NULL);
		// AnimateTarget();
		TargetBallon_AnimateTarget_m1F02484E676174F36B4D20C39F5DAC7464E7BDDE(__this, NULL);
		// }
		return;
	}
}
// System.Void TargetBallon::AnimateTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetBallon_AnimateTarget_m1F02484E676174F36B4D20C39F5DAC7464E7BDDE (TargetBallon_tE08085478FDE1CBD769734051D32BE26E82A05AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_transform.DOScale(Vector3.zero, 0.5f).SetEase(Ease.Linear);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)__this)->___m_transform_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_2;
		L_2 = ShortcutExtensions_DOScale_m7BBBF6EA15ED2BB02E4E32122D0FE0C8D2A4467D(L_0, L_1, (0.5f), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_3;
		L_3 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_2, 1, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TargetBallon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetBallon__ctor_m38A95E89319671520509DDAB0E381F4AFB16C278 (TargetBallon_tE08085478FDE1CBD769734051D32BE26E82A05AD* __this, const RuntimeMethod* method) 
{
	{
		Target__ctor_m5524C5EEF36FA6DB1E6B5BFA323B37E68635C216(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TargetGoalArea::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetGoalArea_OnTriggerEnter_m3D07F2DA682B0B9E102C87E8CBDF6031A3A29830 (TargetGoalArea_tBF73B45BA30F3834C1958B6AA9777CF6622AAD2C* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerTypes_tF9475839BCBD57C38490B76BA848D1F934218667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (other.CompareTag(TriggerTypes.Player.ToString()))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		V_0 = 0;
		Il2CppFakeBox<int32_t> L_1(TriggerTypes_tF9475839BCBD57C38490B76BA848D1F934218667_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// OnBallTouch();
		VirtualActionInvoker0::Invoke(4 /* System.Void Target::OnBallTouch() */, __this);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void TargetGoalArea::OnBallTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetGoalArea_OnBallTouch_m6ED2ABBA1846A586FB24D773C9454BC3675378D1 (TargetGoalArea_tBF73B45BA30F3834C1958B6AA9777CF6622AAD2C* __this, const RuntimeMethod* method) 
{
	{
		// EventManager.DetectGoal(m_point, m_targetType);
		int32_t L_0 = ((Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)__this)->___m_point_7;
		int32_t L_1 = ((Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)__this)->___m_targetType_5;
		EventManager_DetectGoal_m96F8C5C9EA83E1C1BCD0F09336884452BBD12314(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TargetGoalArea::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetGoalArea__ctor_m1BF06A4018B81830BEFBE0FDDCFCBEA493C4199F (TargetGoalArea_tBF73B45BA30F3834C1958B6AA9777CF6622AAD2C* __this, const RuntimeMethod* method) 
{
	{
		Target__ctor_m5524C5EEF36FA6DB1E6B5BFA323B37E68635C216(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TargetStar::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetStar_OnTriggerEnter_mE1E29B4436855B143583C1C5495CAE3D68681563 (TargetStar_t9380397AF6F5C40A3B20889B0C134CD21DDC3B18* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerTypes_tF9475839BCBD57C38490B76BA848D1F934218667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (other.CompareTag(TriggerTypes.Player.ToString()))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		V_0 = 0;
		Il2CppFakeBox<int32_t> L_1(TriggerTypes_tF9475839BCBD57C38490B76BA848D1F934218667_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// OnBallTouch();
		VirtualActionInvoker0::Invoke(4 /* System.Void Target::OnBallTouch() */, __this);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void TargetStar::OnBallTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetStar_OnBallTouch_mE7CD2D22C84BC211BF1819D5587309338105D155 (TargetStar_t9380397AF6F5C40A3B20889B0C134CD21DDC3B18* __this, const RuntimeMethod* method) 
{
	{
		// EventManager.DetectGoal(m_point, m_targetType);
		int32_t L_0 = ((Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)__this)->___m_point_7;
		int32_t L_1 = ((Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)__this)->___m_targetType_5;
		EventManager_DetectGoal_m96F8C5C9EA83E1C1BCD0F09336884452BBD12314(L_0, L_1, NULL);
		// base.AnimTarget();
		Target_AnimTarget_mD1F911DBF67B02E3E503537DC59660D450C0C364(__this, NULL);
		// }
		return;
	}
}
// System.Void TargetStar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetStar__ctor_mC6E596AD74D71AE274FBC52195761B259806FB60 (TargetStar_t9380397AF6F5C40A3B20889B0C134CD21DDC3B18* __this, const RuntimeMethod* method) 
{
	{
		Target__ctor_m5524C5EEF36FA6DB1E6B5BFA323B37E68635C216(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraManager::SetCameraFollowObject(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager_SetCameraFollowObject_m2445D74A99BD906E6A2BDBB5AAC69E825A656270 (CameraManager_t27CFDF23ED636E9025EFEA9A5E8B0004355206BB* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____Target0, const RuntimeMethod* method) 
{
	{
		// m_FollowCamera.LookAt = _Target;
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_0 = __this->___m_FollowCamera_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ____Target0;
		NullCheck(L_0);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(30 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_LookAt(UnityEngine.Transform) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void CameraManager::SetCameraToPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager_SetCameraToPosition_m45E93B78640CA366C0BDEA9B1A4E527E3F57FEA7 (CameraManager_t27CFDF23ED636E9025EFEA9A5E8B0004355206BB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____Position0, const RuntimeMethod* method) 
{
	{
		// m_MainCamera.transform.position = _Position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_MainCamera_7;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ____Position0;
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void CameraManager::SetCameraAction(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager_SetCameraAction_m5C882746E8BC86777D6DFB86B57B06695FC1416C (CameraManager_t27CFDF23ED636E9025EFEA9A5E8B0004355206BB* __this, bool ____ToPoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00306AEBBFCAE3C47C81EA3C1FF78CB512433B4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18DA0645B32D535983A60D101929337CDEA993BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_ToPoint)
		bool L_0 = ____ToPoint0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// m_CameraStateAnimator.Play(Constants.c_AnimPointCamera);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___m_CameraStateAnimator_9;
		NullCheck(L_1);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_1, _stringLiteral00306AEBBFCAE3C47C81EA3C1FF78CB512433B4D, NULL);
		return;
	}

IL_0014:
	{
		// m_CameraStateAnimator.Play(Constants.c_AnimFollowCamera);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___m_CameraStateAnimator_9;
		NullCheck(L_2);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_2, _stringLiteral18DA0645B32D535983A60D101929337CDEA993BA, NULL);
		// }
		return;
	}
}
// System.Void CameraManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager__ctor_m765956D95C636CA8C1829BF6C0892A8AF76739C0 (CameraManager_t27CFDF23ED636E9025EFEA9A5E8B0004355206BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m30F77B178EC401F84252F3102F42390E2E810237_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tAC2D4F57CDAD34ED8AD3368CA3B3090E6DA5EC0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tAC2D4F57CDAD34ED8AD3368CA3B3090E6DA5EC0E_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m30F77B178EC401F84252F3102F42390E2E810237(__this, Singleton_1__ctor_m30F77B178EC401F84252F3102F42390E2E810237_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EventManager::add_onLevelPhaseChange(EventManager/OnSetLevelStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_add_onLevelPhaseChange_mFCD328604B5EFECFA14472DC8959CD59BBA0DD01 (EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A* __this, OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* V_0 = NULL;
	OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* V_1 = NULL;
	OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* V_2 = NULL;
	{
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* L_0 = __this->___onLevelPhaseChange_0;
		V_0 = L_0;
	}

IL_0007:
	{
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* L_1 = V_0;
		V_1 = L_1;
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* L_2 = V_1;
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3*)CastclassSealed((RuntimeObject*)L_4, OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3_il2cpp_TypeInfo_var));
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3** L_5 = (&__this->___onLevelPhaseChange_0);
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* L_6 = V_2;
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* L_7 = V_1;
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* L_9 = V_0;
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3*)L_9) == ((RuntimeObject*)(OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void EventManager::remove_onLevelPhaseChange(EventManager/OnSetLevelStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_remove_onLevelPhaseChange_m1FD9A75AA36C035016119746C1EEC8CEDD81F8F6 (EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A* __this, OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* V_0 = NULL;
	OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* V_1 = NULL;
	OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* V_2 = NULL;
	{
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* L_0 = __this->___onLevelPhaseChange_0;
		V_0 = L_0;
	}

IL_0007:
	{
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* L_1 = V_0;
		V_1 = L_1;
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* L_2 = V_1;
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3*)CastclassSealed((RuntimeObject*)L_4, OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3_il2cpp_TypeInfo_var));
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3** L_5 = (&__this->___onLevelPhaseChange_0);
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* L_6 = V_2;
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* L_7 = V_1;
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* L_9 = V_0;
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3*)L_9) == ((RuntimeObject*)(OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void EventManager::add_OnTargetShootDetect(EventManager/OnTargetShoot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_add_OnTargetShootDetect_m2DFD571AACE1965A27CE91E835951F955DAE0980 (OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* V_0 = NULL;
	OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* V_1 = NULL;
	OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* V_2 = NULL;
	{
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_0 = ((EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var))->___OnTargetShootDetect_1;
		V_0 = L_0;
	}

IL_0006:
	{
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_1 = V_0;
		V_1 = L_1;
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_2 = V_1;
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC*)CastclassSealed((RuntimeObject*)L_4, OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC_il2cpp_TypeInfo_var));
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_5 = V_2;
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_6 = V_1;
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC*>((&((EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var))->___OnTargetShootDetect_1), L_5, L_6);
		V_0 = L_7;
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_8 = V_0;
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC*)L_8) == ((RuntimeObject*)(OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void EventManager::remove_OnTargetShootDetect(EventManager/OnTargetShoot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_remove_OnTargetShootDetect_mF68658641560A08B58BF9E188E891C9104028D4F (OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* V_0 = NULL;
	OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* V_1 = NULL;
	OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* V_2 = NULL;
	{
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_0 = ((EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var))->___OnTargetShootDetect_1;
		V_0 = L_0;
	}

IL_0006:
	{
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_1 = V_0;
		V_1 = L_1;
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_2 = V_1;
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC*)CastclassSealed((RuntimeObject*)L_4, OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC_il2cpp_TypeInfo_var));
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_5 = V_2;
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_6 = V_1;
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC*>((&((EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var))->___OnTargetShootDetect_1), L_5, L_6);
		V_0 = L_7;
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_8 = V_0;
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC*)L_8) == ((RuntimeObject*)(OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void EventManager::DetectGoal(System.Int32,TargetTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_DetectGoal_m96F8C5C9EA83E1C1BCD0F09336884452BBD12314 (int32_t ____Point0, int32_t ____Type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* G_B2_0 = NULL;
	OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* G_B1_0 = NULL;
	{
		// OnTargetShootDetect?.Invoke(_Point, _Type);
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_0 = ((EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var))->___OnTargetShootDetect_1;
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		int32_t L_2 = ____Point0;
		int32_t L_3 = ____Type1;
		NullCheck(G_B2_0);
		OnTargetShoot_Invoke_m6A8D717597E22EE9D88B2B8CC306F4F0CCA77D6C_inline(G_B2_0, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void EventManager::add_OnPlayerShoot(EventManager/OnShoot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_add_OnPlayerShoot_m7268B2DE3669F4A6F3820AB4C474158C518DF98A (OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* V_0 = NULL;
	OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* V_1 = NULL;
	OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* V_2 = NULL;
	{
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_0 = ((EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var))->___OnPlayerShoot_2;
		V_0 = L_0;
	}

IL_0006:
	{
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_1 = V_0;
		V_1 = L_1;
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_2 = V_1;
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C*)CastclassSealed((RuntimeObject*)L_4, OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C_il2cpp_TypeInfo_var));
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_5 = V_2;
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_6 = V_1;
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C*>((&((EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var))->___OnPlayerShoot_2), L_5, L_6);
		V_0 = L_7;
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_8 = V_0;
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C*)L_8) == ((RuntimeObject*)(OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void EventManager::remove_OnPlayerShoot(EventManager/OnShoot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_remove_OnPlayerShoot_m0C9F0A3FF7FBF9B62008A9E18A0E33A8FF7E76B3 (OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* V_0 = NULL;
	OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* V_1 = NULL;
	OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* V_2 = NULL;
	{
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_0 = ((EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var))->___OnPlayerShoot_2;
		V_0 = L_0;
	}

IL_0006:
	{
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_1 = V_0;
		V_1 = L_1;
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_2 = V_1;
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C*)CastclassSealed((RuntimeObject*)L_4, OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C_il2cpp_TypeInfo_var));
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_5 = V_2;
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_6 = V_1;
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C*>((&((EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var))->___OnPlayerShoot_2), L_5, L_6);
		V_0 = L_7;
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_8 = V_0;
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C*)L_8) == ((RuntimeObject*)(OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void EventManager::PlayerShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_PlayerShoot_mC5ABB9678C99421816D929BCC5B88EF9FE3E0907 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* G_B2_0 = NULL;
	OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* G_B1_0 = NULL;
	{
		// OnPlayerShoot?.Invoke();
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_0 = ((EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var))->___OnPlayerShoot_2;
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		OnShoot_Invoke_mE6EAADBA6C882AE1D2343BD01B52E208B166A177_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void EventManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager__ctor_mB2304AB8CE6B4D03CF0C2CE4000EE529C1133D99 (EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnSetLevelStatus_Invoke_mA2959265269B1F50AAE7A8A294CEBA776DB2E374_Multicast(OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* __this, int32_t ____LevelPhase0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* currentDelegate = reinterpret_cast<OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ____LevelPhase0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnSetLevelStatus_Invoke_mA2959265269B1F50AAE7A8A294CEBA776DB2E374_Open(OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* __this, int32_t ____LevelPhase0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(____LevelPhase0, method);
}
void OnSetLevelStatus_Invoke_mA2959265269B1F50AAE7A8A294CEBA776DB2E374_OpenStaticInvoker(OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* __this, int32_t ____LevelPhase0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ____LevelPhase0);
}
void OnSetLevelStatus_Invoke_mA2959265269B1F50AAE7A8A294CEBA776DB2E374_ClosedStaticInvoker(OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* __this, int32_t ____LevelPhase0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ____LevelPhase0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3 (OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* __this, int32_t ____LevelPhase0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(____LevelPhase0);

}
// System.Void EventManager/OnSetLevelStatus::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSetLevelStatus__ctor_mFAFF2A64D9162AE5D75CF6335CF1B0664BECB3CB (OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnSetLevelStatus_Invoke_mA2959265269B1F50AAE7A8A294CEBA776DB2E374_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnSetLevelStatus_Invoke_mA2959265269B1F50AAE7A8A294CEBA776DB2E374_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnSetLevelStatus_Invoke_mA2959265269B1F50AAE7A8A294CEBA776DB2E374_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnSetLevelStatus_Invoke_mA2959265269B1F50AAE7A8A294CEBA776DB2E374_Multicast;
}
// System.Void EventManager/OnSetLevelStatus::Invoke(GamePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSetLevelStatus_Invoke_mA2959265269B1F50AAE7A8A294CEBA776DB2E374 (OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* __this, int32_t ____LevelPhase0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ____LevelPhase0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult EventManager/OnSetLevelStatus::BeginInvoke(GamePhase,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSetLevelStatus_BeginInvoke_m05EE6BDC15D0AB11D120CCBC319E2EE81CD66975 (OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* __this, int32_t ____LevelPhase0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePhase_t7C0433B7DCF8287F900C147672BBF89D9F545FD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(GamePhase_t7C0433B7DCF8287F900C147672BBF89D9F545FD7_il2cpp_TypeInfo_var, &____LevelPhase0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void EventManager/OnSetLevelStatus::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSetLevelStatus_EndInvoke_m6D7895CEAC50ECA6D4D0649A70DEC39CF1402AA4 (OnSetLevelStatus_tA635A54C0416475611EFA718AE44C03A122DC7D3* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnTargetShoot_Invoke_m6A8D717597E22EE9D88B2B8CC306F4F0CCA77D6C_Multicast(OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* __this, int32_t ____Point0, int32_t ____Type1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* currentDelegate = reinterpret_cast<OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ____Point0, ____Type1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnTargetShoot_Invoke_m6A8D717597E22EE9D88B2B8CC306F4F0CCA77D6C_Open(OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* __this, int32_t ____Point0, int32_t ____Type1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(____Point0, ____Type1, method);
}
void OnTargetShoot_Invoke_m6A8D717597E22EE9D88B2B8CC306F4F0CCA77D6C_OpenStaticInvoker(OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* __this, int32_t ____Point0, int32_t ____Type1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ____Point0, ____Type1);
}
void OnTargetShoot_Invoke_m6A8D717597E22EE9D88B2B8CC306F4F0CCA77D6C_ClosedStaticInvoker(OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* __this, int32_t ____Point0, int32_t ____Type1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ____Point0, ____Type1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC (OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* __this, int32_t ____Point0, int32_t ____Type1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(____Point0, ____Type1);

}
// System.Void EventManager/OnTargetShoot::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTargetShoot__ctor_mEFE22C1B662E78C1FCEFE711C80A88DE25873C90 (OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTargetShoot_Invoke_m6A8D717597E22EE9D88B2B8CC306F4F0CCA77D6C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnTargetShoot_Invoke_m6A8D717597E22EE9D88B2B8CC306F4F0CCA77D6C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTargetShoot_Invoke_m6A8D717597E22EE9D88B2B8CC306F4F0CCA77D6C_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnTargetShoot_Invoke_m6A8D717597E22EE9D88B2B8CC306F4F0CCA77D6C_Multicast;
}
// System.Void EventManager/OnTargetShoot::Invoke(System.Int32,TargetTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTargetShoot_Invoke_m6A8D717597E22EE9D88B2B8CC306F4F0CCA77D6C (OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* __this, int32_t ____Point0, int32_t ____Type1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ____Point0, ____Type1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult EventManager/OnTargetShoot::BeginInvoke(System.Int32,TargetTypes,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnTargetShoot_BeginInvoke_m207A0902FA0FD3AC083B877ADD07E09C7E371F97 (OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* __this, int32_t ____Point0, int32_t ____Type1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetTypes_t9E95CB4576ACB1675598DF9F401F85EF75B32D32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &____Point0);
	__d_args[1] = Box(TargetTypes_t9E95CB4576ACB1675598DF9F401F85EF75B32D32_il2cpp_TypeInfo_var, &____Type1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void EventManager/OnTargetShoot::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTargetShoot_EndInvoke_m024C82C77794227AD20DBAB1F8E9741D18C79BFF (OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnShoot_Invoke_mE6EAADBA6C882AE1D2343BD01B52E208B166A177_Multicast(OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* currentDelegate = reinterpret_cast<OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnShoot_Invoke_mE6EAADBA6C882AE1D2343BD01B52E208B166A177_Open(OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnShoot_Invoke_mE6EAADBA6C882AE1D2343BD01B52E208B166A177_OpenStaticInvoker(OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnShoot_Invoke_mE6EAADBA6C882AE1D2343BD01B52E208B166A177_ClosedStaticInvoker(OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C (OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void EventManager/OnShoot::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnShoot__ctor_mF2B24DA204E734186929562A8E1B20ABE1DA3C7D (OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnShoot_Invoke_mE6EAADBA6C882AE1D2343BD01B52E208B166A177_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnShoot_Invoke_mE6EAADBA6C882AE1D2343BD01B52E208B166A177_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnShoot_Invoke_mE6EAADBA6C882AE1D2343BD01B52E208B166A177_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnShoot_Invoke_mE6EAADBA6C882AE1D2343BD01B52E208B166A177_Multicast;
}
// System.Void EventManager/OnShoot::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnShoot_Invoke_mE6EAADBA6C882AE1D2343BD01B52E208B166A177 (OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult EventManager/OnShoot::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnShoot_BeginInvoke_m71C5704CF32F83AD2F1AFB0FFA45E66D980AE026 (OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void EventManager/OnShoot::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnShoot_EndInvoke_m56CA1288527C1C30B678966CCCCE575189E3ECCA (OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::add_onGamePhaseChanged(GameManager/OnGamePhaseChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add_onGamePhaseChanged_m939E0C75F935F0F1201302754A2C673D9B8A24C7 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* V_0 = NULL;
	OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* V_1 = NULL;
	OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* V_2 = NULL;
	{
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_0 = __this->___onGamePhaseChanged_7;
		V_0 = L_0;
	}

IL_0007:
	{
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_1 = V_0;
		V_1 = L_1;
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_2 = V_1;
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1*)CastclassSealed((RuntimeObject*)L_4, OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1_il2cpp_TypeInfo_var));
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1** L_5 = (&__this->___onGamePhaseChanged_7);
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_6 = V_2;
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_7 = V_1;
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_9 = V_0;
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1*)L_9) == ((RuntimeObject*)(OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GameManager::remove_onGamePhaseChanged(GameManager/OnGamePhaseChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_remove_onGamePhaseChanged_mD9887940911DF7F4CBC0661D25B27C7BDFEC6B97 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* V_0 = NULL;
	OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* V_1 = NULL;
	OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* V_2 = NULL;
	{
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_0 = __this->___onGamePhaseChanged_7;
		V_0 = L_0;
	}

IL_0007:
	{
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_1 = V_0;
		V_1 = L_1;
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_2 = V_1;
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1*)CastclassSealed((RuntimeObject*)L_4, OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1_il2cpp_TypeInfo_var));
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1** L_5 = (&__this->___onGamePhaseChanged_7);
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_6 = V_2;
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_7 = V_1;
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_9 = V_0;
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1*)L_9) == ((RuntimeObject*)(OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// GamePhase GameManager::get_currentPhase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_get_currentPhase_m5A8C0BFBD6B904FDE25CDFA6DF74C176DDD1E271 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// public GamePhase currentPhase { get; private set; }
		int32_t L_0 = __this->___U3CcurrentPhaseU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void GameManager::set_currentPhase(GamePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_currentPhase_m2F78A1B3F4AE40AE951D113146286BA723789508 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public GamePhase currentPhase { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CcurrentPhaseU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325(((int32_t)60), NULL);
		// ChangePhase(GamePhase.MAIN_MENU);
		GameManager_ChangePhase_m572F89DBF83B87522E55EA65AC6FE765C6C6BE86(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::ChangePhase(GamePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ChangePhase_m572F89DBF83B87522E55EA65AC6FE765C6C6BE86 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ____GamePhase0, const RuntimeMethod* method) 
{
	{
		// currentPhase = _GamePhase;
		int32_t L_0 = ____GamePhase0;
		GameManager_set_currentPhase_m2F78A1B3F4AE40AE951D113146286BA723789508_inline(__this, L_0, NULL);
		// if (onGamePhaseChanged != null)
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_1 = __this->___onGamePhaseChanged_7;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// onGamePhaseChanged.Invoke(_GamePhase);
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_2 = __this->___onGamePhaseChanged_7;
		int32_t L_3 = ____GamePhase0;
		NullCheck(L_2);
		OnGamePhaseChanged_Invoke_mBCDD59F98828FCC5EA178E2BD0653A7097FCBD00_inline(L_2, L_3, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_mFD940A60BFF417DE575BBFAE67006E1D442B9CB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t3D2F23D966DBD653F6411E976BD4A5A33E9DD1B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t3D2F23D966DBD653F6411E976BD4A5A33E9DD1B7_il2cpp_TypeInfo_var);
		Singleton_1__ctor_mFD940A60BFF417DE575BBFAE67006E1D442B9CB8(__this, Singleton_1__ctor_mFD940A60BFF417DE575BBFAE67006E1D442B9CB8_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnGamePhaseChanged_Invoke_mBCDD59F98828FCC5EA178E2BD0653A7097FCBD00_Multicast(OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* __this, int32_t ____GamePhase0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* currentDelegate = reinterpret_cast<OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ____GamePhase0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnGamePhaseChanged_Invoke_mBCDD59F98828FCC5EA178E2BD0653A7097FCBD00_Open(OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* __this, int32_t ____GamePhase0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(____GamePhase0, method);
}
void OnGamePhaseChanged_Invoke_mBCDD59F98828FCC5EA178E2BD0653A7097FCBD00_OpenStaticInvoker(OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* __this, int32_t ____GamePhase0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ____GamePhase0);
}
void OnGamePhaseChanged_Invoke_mBCDD59F98828FCC5EA178E2BD0653A7097FCBD00_ClosedStaticInvoker(OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* __this, int32_t ____GamePhase0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ____GamePhase0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1 (OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* __this, int32_t ____GamePhase0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(____GamePhase0);

}
// System.Void GameManager/OnGamePhaseChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGamePhaseChanged__ctor_m681D72890F4F6868B7FED8B3886489A0279DF987 (OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnGamePhaseChanged_Invoke_mBCDD59F98828FCC5EA178E2BD0653A7097FCBD00_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnGamePhaseChanged_Invoke_mBCDD59F98828FCC5EA178E2BD0653A7097FCBD00_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnGamePhaseChanged_Invoke_mBCDD59F98828FCC5EA178E2BD0653A7097FCBD00_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnGamePhaseChanged_Invoke_mBCDD59F98828FCC5EA178E2BD0653A7097FCBD00_Multicast;
}
// System.Void GameManager/OnGamePhaseChanged::Invoke(GamePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGamePhaseChanged_Invoke_mBCDD59F98828FCC5EA178E2BD0653A7097FCBD00 (OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* __this, int32_t ____GamePhase0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ____GamePhase0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GameManager/OnGamePhaseChanged::BeginInvoke(GamePhase,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnGamePhaseChanged_BeginInvoke_mC0D3E2667C546D7BB20E396118368C6822012DC3 (OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* __this, int32_t ____GamePhase0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePhase_t7C0433B7DCF8287F900C147672BBF89D9F545FD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(GamePhase_t7C0433B7DCF8287F900C147672BBF89D9F545FD7_il2cpp_TypeInfo_var, &____GamePhase0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GameManager/OnGamePhaseChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGamePhaseChanged_EndInvoke_mCC90F08BC80D9B0890E6E5A5B2D40E7BE64FAD51 (OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelManager::SetNewPointForGoalArea(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_SetNewPointForGoalArea_mBE82E2D2512CF8A1061027DC845E7A584A1C6E2C (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, int32_t ____NewPoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTargetGoalArea_tBF73B45BA30F3834C1958B6AA9777CF6622AAD2C_m5A8B6B0EAE8C1A46660C4367CC16783A79D7A3C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_GoalArea.transform.GetChild(3).GetComponent<TargetGoalArea>().m_point = _NewPoint;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_GoalArea_9;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, 3, NULL);
		NullCheck(L_2);
		TargetGoalArea_tBF73B45BA30F3834C1958B6AA9777CF6622AAD2C* L_3;
		L_3 = Component_GetComponent_TisTargetGoalArea_tBF73B45BA30F3834C1958B6AA9777CF6622AAD2C_m5A8B6B0EAE8C1A46660C4367CC16783A79D7A3C1(L_2, Component_GetComponent_TisTargetGoalArea_tBF73B45BA30F3834C1958B6AA9777CF6622AAD2C_m5A8B6B0EAE8C1A46660C4367CC16783A79D7A3C1_RuntimeMethod_var);
		int32_t L_4 = ____NewPoint0;
		NullCheck(L_3);
		((Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)L_3)->___m_point_7 = L_4;
		// }
		return;
	}
}
// System.Void LevelManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Awake_m5DEB1CF05B334C6E29A91D604623C1B8401AE09C (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_Instance_OnGamePhaseChanged_m8F33744BF44058F612A228F95108AD3E874913F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m33F542FAC846E5BB3B70A8A2672436F132C37351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t3D2F23D966DBD653F6411E976BD4A5A33E9DD1B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_GameManager = GameManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t3D2F23D966DBD653F6411E976BD4A5A33E9DD1B7_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = Singleton_1_get_Instance_m33F542FAC846E5BB3B70A8A2672436F132C37351(Singleton_1_get_Instance_m33F542FAC846E5BB3B70A8A2672436F132C37351_RuntimeMethod_var);
		__this->___m_GameManager_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GameManager_7), (void*)L_0);
		// m_GameManager.onGamePhaseChanged += Instance_OnGamePhaseChanged;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___m_GameManager_7;
		OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* L_2 = (OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1*)il2cpp_codegen_object_new(OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OnGamePhaseChanged__ctor_m681D72890F4F6868B7FED8B3886489A0279DF987(L_2, __this, (intptr_t)((void*)LevelManager_Instance_OnGamePhaseChanged_m8F33744BF44058F612A228F95108AD3E874913F9_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		GameManager_add_onGamePhaseChanged_m939E0C75F935F0F1201302754A2C673D9B8A24C7(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void LevelManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_OnEnable_m2822B28E1CACDD507598DA89171E862B85C3E9CB (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_ClearTargets_mD640D4D983FDB0E56B9D18768DC202AC54FE334E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.OnPlayerShoot += ClearTargets;
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_0 = (OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C*)il2cpp_codegen_object_new(OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OnShoot__ctor_mF2B24DA204E734186929562A8E1B20ABE1DA3C7D(L_0, __this, (intptr_t)((void*)LevelManager_ClearTargets_mD640D4D983FDB0E56B9D18768DC202AC54FE334E_RuntimeMethod_var), NULL);
		EventManager_add_OnPlayerShoot_m7268B2DE3669F4A6F3820AB4C474158C518DF98A(L_0, NULL);
		// }
		return;
	}
}
// System.Void LevelManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_OnDisable_m91E921A2C26A738EE99B3F3DE525590136EBB55C (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_ClearTargets_mD640D4D983FDB0E56B9D18768DC202AC54FE334E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.OnPlayerShoot -= ClearTargets;
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_0 = (OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C*)il2cpp_codegen_object_new(OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OnShoot__ctor_mF2B24DA204E734186929562A8E1B20ABE1DA3C7D(L_0, __this, (intptr_t)((void*)LevelManager_ClearTargets_mD640D4D983FDB0E56B9D18768DC202AC54FE334E_RuntimeMethod_var), NULL);
		EventManager_remove_OnPlayerShoot_m0C9F0A3FF7FBF9B62008A9E18A0E33A8FF7E76B3(L_0, NULL);
		// }
		return;
	}
}
// System.Void LevelManager::Instance_OnGamePhaseChanged(GamePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Instance_OnGamePhaseChanged_m8F33744BF44058F612A228F95108AD3E874913F9 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, int32_t ____GamePhase0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ____GamePhase0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		// StartCoroutine(countDownStart());
		RuntimeObject* L_1;
		L_1 = LevelManager_countDownStart_m327F96524B025CF32661BA33A2FFA9D23338AD40(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// CreateRandomTargets();
		LevelManager_CreateRandomTargets_m52F92D5768D817F6CED29C134EFA87AC1C15D17F(__this, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator LevelManager::countDownStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelManager_countDownStart_m327F96524B025CF32661BA33A2FFA9D23338AD40 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CcountDownStartU3Ed__13_tC04C348A30667FF7FBDD5DC00EC89DAE306280F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CcountDownStartU3Ed__13_tC04C348A30667FF7FBDD5DC00EC89DAE306280F1* L_0 = (U3CcountDownStartU3Ed__13_tC04C348A30667FF7FBDD5DC00EC89DAE306280F1*)il2cpp_codegen_object_new(U3CcountDownStartU3Ed__13_tC04C348A30667FF7FBDD5DC00EC89DAE306280F1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CcountDownStartU3Ed__13__ctor_mF99AC22B5FCB15D59AAFD5107E7C17BA341699C2(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void LevelManager::CreateRandomTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_CreateRandomTargets_m52F92D5768D817F6CED29C134EFA87AC1C15D17F (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// int randomTarget = Random.Range(3, 8);
		int32_t L_0;
		L_0 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(3, 8, NULL);
		V_0 = L_0;
		// for (int i = 0; i < randomTarget; i++)
		V_1 = 0;
		goto IL_00e0;
	}

IL_000f:
	{
		// if (m_PoolCounter >= m_MaxPoolCount)
		int32_t L_1 = __this->___m_PoolCounter_13;
		int32_t L_2 = __this->___m_MaxPoolCount_12;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0027;
		}
	}
	{
		// InstantiateFromPool(randomTarget - i);
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		LevelManager_InstantiateFromPool_m2E81F10E5B3571624F6CBD8D102B1D48606AA35F(__this, ((int32_t)il2cpp_codegen_subtract(L_3, L_4)), NULL);
		// return;
		return;
	}

IL_0027:
	{
		// var target = Instantiate(m_Targets[Random.Range(0, m_Targets.Length)], m_TargetsParent.transform);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___m_Targets_8;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___m_Targets_8;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		NullCheck(L_5);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___m_TargetsParent_10;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_9, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_2 = L_12;
		// target.transform.position = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_2;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_15, NULL);
		// target.transform.position = new Vector3(Random.Range(m_TargetPlaceRange[0].x, m_TargetPlaceRange[1].x), Random.Range(m_TargetPlaceRange[0].y, m_TargetPlaceRange[1].y),58);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_2;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_18 = __this->___m_TargetPlaceRange_14;
		NullCheck(L_18);
		float L_19 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___x_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_20 = __this->___m_TargetPlaceRange_14;
		NullCheck(L_20);
		float L_21 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___x_0;
		float L_22;
		L_22 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_19, L_21, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_23 = __this->___m_TargetPlaceRange_14;
		NullCheck(L_23);
		float L_24 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___y_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_25 = __this->___m_TargetPlaceRange_14;
		NullCheck(L_25);
		float L_26 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___y_1;
		float L_27;
		L_27 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_24, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), L_22, L_27, (58.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_28, NULL);
		// m_Pool[m_PoolCounter] = target;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_29 = __this->___m_Pool_11;
		int32_t L_30 = __this->___m_PoolCounter_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_2;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_31);
		// m_PoolCounter++;
		int32_t L_32 = __this->___m_PoolCounter_13;
		__this->___m_PoolCounter_13 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		// for (int i = 0; i < randomTarget; i++)
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00e0:
	{
		// for (int i = 0; i < randomTarget; i++)
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LevelManager::InstantiateFromPool(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_InstantiateFromPool_m2E81F10E5B3571624F6CBD8D102B1D48606AA35F (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, int32_t ____TargetCount0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < _TargetCount; i++)
		V_0 = 0;
		goto IL_00c0;
	}

IL_0007:
	{
		// m_Pool[i].transform.localScale = Vector3.one *3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___m_Pool_11;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_5, (3.0f), NULL);
		NullCheck(L_4);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_6, NULL);
		// m_Pool[i].transform.position = Vector3.zero;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___m_Pool_11;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_12, NULL);
		// m_Pool[i].transform.position = new Vector3(Random.Range(m_TargetPlaceRange[0].x, m_TargetPlaceRange[1].x), Random.Range(m_TargetPlaceRange[0].y, m_TargetPlaceRange[1].y), 58);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->___m_Pool_11;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_18 = __this->___m_TargetPlaceRange_14;
		NullCheck(L_18);
		float L_19 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___x_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_20 = __this->___m_TargetPlaceRange_14;
		NullCheck(L_20);
		float L_21 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___x_0;
		float L_22;
		L_22 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_19, L_21, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_23 = __this->___m_TargetPlaceRange_14;
		NullCheck(L_23);
		float L_24 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___y_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_25 = __this->___m_TargetPlaceRange_14;
		NullCheck(L_25);
		float L_26 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___y_1;
		float L_27;
		L_27 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_24, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), L_22, L_27, (58.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_28, NULL);
		// m_Pool[i].gameObject.SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_29 = __this->___m_Pool_11;
		int32_t L_30 = V_0;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_32, NULL);
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)1, NULL);
		// for (int i = 0; i < _TargetCount; i++)
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00c0:
	{
		// for (int i = 0; i < _TargetCount; i++)
		int32_t L_35 = V_0;
		int32_t L_36 = ____TargetCount0;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LevelManager::ClearTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_ClearTargets_mD640D4D983FDB0E56B9D18768DC202AC54FE334E (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_PoolCounter; i++)
		V_0 = 0;
		goto IL_001b;
	}

IL_0004:
	{
		// m_Pool[i].gameObject.SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___m_Pool_11;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// for (int i = 0; i < m_PoolCounter; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001b:
	{
		// for (int i = 0; i < m_PoolCounter; i++)
		int32_t L_6 = V_0;
		int32_t L_7 = __this->___m_PoolCounter_13;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LevelManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager__ctor_m97F35AC08C296B73BD7D85FFB593A7BEA61B3F92 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m963977D2790A50C740A1551A295B9CE90F4EAC19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t57146DEC2403B0DC891826D5FF9CBD3A240BB726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private GameObject[] m_Pool = new GameObject[10];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->___m_Pool_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Pool_11), (void*)L_0);
		// private int m_MaxPoolCount = 10;
		__this->___m_MaxPoolCount_12 = ((int32_t)10);
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t57146DEC2403B0DC891826D5FF9CBD3A240BB726_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m963977D2790A50C740A1551A295B9CE90F4EAC19(__this, Singleton_1__ctor_m963977D2790A50C740A1551A295B9CE90F4EAC19_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelManager/<countDownStart>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcountDownStartU3Ed__13__ctor_mF99AC22B5FCB15D59AAFD5107E7C17BA341699C2 (U3CcountDownStartU3Ed__13_tC04C348A30667FF7FBDD5DC00EC89DAE306280F1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LevelManager/<countDownStart>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcountDownStartU3Ed__13_System_IDisposable_Dispose_mD8AEB57CDCF253FAAE416E659D2FD98CFD6E8D3E (U3CcountDownStartU3Ed__13_tC04C348A30667FF7FBDD5DC00EC89DAE306280F1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LevelManager/<countDownStart>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CcountDownStartU3Ed__13_MoveNext_mF99EFA218F5B41547C396DA6EA2E63C70A186EEE (U3CcountDownStartU3Ed__13_tC04C348A30667FF7FBDD5DC00EC89DAE306280F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m23C78C97634E8975A0A58BBCDF1AF60967680FD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mB21628D314EBC540E3AE9BE7A8EF27532D14F5C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t64294B7AF42CAEE4DF55A11C5F3FBAC120E851BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tAB8900DF126641F42134EDEB430B6D866841F00A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 3; i > 0; i--)
		__this->___U3CiU3E5__2_2 = 3;
		goto IL_0060;
	}

IL_0020:
	{
		// GamePlayView.Instance.SetCountDownTime(i);
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t64294B7AF42CAEE4DF55A11C5F3FBAC120E851BA_il2cpp_TypeInfo_var);
		GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* L_3;
		L_3 = Singleton_1_get_Instance_m23C78C97634E8975A0A58BBCDF1AF60967680FD0(Singleton_1_get_Instance_m23C78C97634E8975A0A58BBCDF1AF60967680FD0_RuntimeMethod_var);
		int32_t L_4 = __this->___U3CiU3E5__2_2;
		NullCheck(L_3);
		GamePlayView_SetCountDownTime_m64C713AA800B8498E271C217F48E856B7FE1384B(L_3, L_4, NULL);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0049:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 3; i > 0; i--)
		int32_t L_6 = __this->___U3CiU3E5__2_2;
		V_1 = L_6;
		int32_t L_7 = V_1;
		__this->___U3CiU3E5__2_2 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
	}

IL_0060:
	{
		// for (int i = 3; i > 0; i--)
		int32_t L_8 = __this->___U3CiU3E5__2_2;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		// PlayerManager.Instance.SetupBall();
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tAB8900DF126641F42134EDEB430B6D866841F00A_il2cpp_TypeInfo_var);
		PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* L_9;
		L_9 = Singleton_1_get_Instance_mB21628D314EBC540E3AE9BE7A8EF27532D14F5C0(Singleton_1_get_Instance_mB21628D314EBC540E3AE9BE7A8EF27532D14F5C0_RuntimeMethod_var);
		NullCheck(L_9);
		PlayerManager_SetupBall_m8005BB535587435F98C98DE555F6A500ECB4EA7A(L_9, NULL);
		// }
		return (bool)0;
	}
}
// System.Object LevelManager/<countDownStart>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CcountDownStartU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF0A856C8BDC543E1886113710F3ECD8FF7AB29DD (U3CcountDownStartU3Ed__13_tC04C348A30667FF7FBDD5DC00EC89DAE306280F1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LevelManager/<countDownStart>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcountDownStartU3Ed__13_System_Collections_IEnumerator_Reset_m579FCD520293582DFD7DA27BA43597A35530ADDE (U3CcountDownStartU3Ed__13_tC04C348A30667FF7FBDD5DC00EC89DAE306280F1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CcountDownStartU3Ed__13_System_Collections_IEnumerator_Reset_m579FCD520293582DFD7DA27BA43597A35530ADDE_RuntimeMethod_var)));
	}
}
// System.Object LevelManager/<countDownStart>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CcountDownStartU3Ed__13_System_Collections_IEnumerator_get_Current_m4F801ECC4043E9F7EF859266508D6B9507686D8C (U3CcountDownStartU3Ed__13_tC04C348A30667FF7FBDD5DC00EC89DAE306280F1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_Awake_m4A997ABB547A7B4C3BA447681C1C8718B7B4A5B6 (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m33F542FAC846E5BB3B70A8A2672436F132C37351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mB7845E881BF4F17C894C2C551B32F3AF463FA2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t3D2F23D966DBD653F6411E976BD4A5A33E9DD1B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tAC2D4F57CDAD34ED8AD3368CA3B3090E6DA5EC0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_gameManager = GameManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t3D2F23D966DBD653F6411E976BD4A5A33E9DD1B7_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = Singleton_1_get_Instance_m33F542FAC846E5BB3B70A8A2672436F132C37351(Singleton_1_get_Instance_m33F542FAC846E5BB3B70A8A2672436F132C37351_RuntimeMethod_var);
		__this->___m_gameManager_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_gameManager_12), (void*)L_0);
		// m_cameraManager = CameraManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tAC2D4F57CDAD34ED8AD3368CA3B3090E6DA5EC0E_il2cpp_TypeInfo_var);
		CameraManager_t27CFDF23ED636E9025EFEA9A5E8B0004355206BB* L_1;
		L_1 = Singleton_1_get_Instance_mB7845E881BF4F17C894C2C551B32F3AF463FA2F8(Singleton_1_get_Instance_mB7845E881BF4F17C894C2C551B32F3AF463FA2F8_RuntimeMethod_var);
		__this->___m_cameraManager_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_cameraManager_13), (void*)L_1);
		// m_detectCollider = GetComponent<BoxCollider>();
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_2;
		L_2 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(__this, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		__this->___m_detectCollider_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_detectCollider_15), (void*)L_2);
		// }
		return;
	}
}
// System.Void PlayerManager::SetupBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_SetupBall_m8005BB535587435F98C98DE555F6A500ECB4EA7A (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mB7845E881BF4F17C894C2C551B32F3AF463FA2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tAC2D4F57CDAD34ED8AD3368CA3B3090E6DA5EC0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// m_cameraManager.SetCameraAction(false);
		CameraManager_t27CFDF23ED636E9025EFEA9A5E8B0004355206BB* L_0 = __this->___m_cameraManager_13;
		NullCheck(L_0);
		CameraManager_SetCameraAction_m5C882746E8BC86777D6DFB86B57B06695FC1416C(L_0, (bool)0, NULL);
		// if (m_ballTransform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_ballTransform_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_00a8;
		}
	}
	{
		// var ball = Instantiate(m_prefabBall, this.gameObject.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___m_prefabBall_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_3, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_0 = L_6;
		// ball.transform.localPosition = m_ballStartPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___m_ballStartPosition_9;
		NullCheck(L_8);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_8, L_9, NULL);
		// m_ballRigidbody = ball.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_0;
		NullCheck(L_10);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11;
		L_11 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_10, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___m_ballRigidbody_16 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ballRigidbody_16), (void*)L_11);
		// m_ballTransform = ball.GetComponent<Transform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728(L_12, GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		__this->___m_ballTransform_17 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ballTransform_17), (void*)L_13);
		// m_mainCamera = CameraManager.Instance.m_MainCamera;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tAC2D4F57CDAD34ED8AD3368CA3B3090E6DA5EC0E_il2cpp_TypeInfo_var);
		CameraManager_t27CFDF23ED636E9025EFEA9A5E8B0004355206BB* L_14;
		L_14 = Singleton_1_get_Instance_mB7845E881BF4F17C894C2C551B32F3AF463FA2F8(Singleton_1_get_Instance_mB7845E881BF4F17C894C2C551B32F3AF463FA2F8_RuntimeMethod_var);
		NullCheck(L_14);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = L_14->___m_MainCamera_7;
		__this->___m_mainCamera_14 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_mainCamera_14), (void*)L_15);
		// m_ballTransform.transform.position = m_ballFirstPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___m_ballTransform_17;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___m_ballFirstPosition_10;
		NullCheck(L_17);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_18, NULL);
		// m_cameraManager.SetCameraFollowObject(m_ballTransform);
		CameraManager_t27CFDF23ED636E9025EFEA9A5E8B0004355206BB* L_19 = __this->___m_cameraManager_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___m_ballTransform_17;
		NullCheck(L_19);
		CameraManager_SetCameraFollowObject_m2445D74A99BD906E6A2BDBB5AAC69E825A656270(L_19, L_20, NULL);
		// m_detectCollider.isTrigger = true;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_21 = __this->___m_detectCollider_15;
		NullCheck(L_21);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_21, (bool)1, NULL);
		// m_ballAimStatu = true;
		__this->___m_ballAimStatu_22 = (bool)1;
		return;
	}

IL_00a8:
	{
		// m_detectCollider.isTrigger = true;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_22 = __this->___m_detectCollider_15;
		NullCheck(L_22);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_22, (bool)1, NULL);
		// m_ballAimStatu = true;
		__this->___m_ballAimStatu_22 = (bool)1;
		// }
		return;
	}
}
// System.Void PlayerManager::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_OnMouseDown_mFA333839875691F496C665DE18D8CB8281EEC904 (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, const RuntimeMethod* method) 
{
	{
		// if (!m_ballAimStatu)
		bool L_0 = __this->___m_ballAimStatu_22;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_aimLineRenderer.SetPosition(0, Vector3.zero );
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1 = __this->___m_aimLineRenderer_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_1);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_1, 0, L_2, NULL);
		// }
		return;
	}
}
// System.Void PlayerManager::OnMouseDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_OnMouseDrag_mDF5E3D73879569B1A69D726B85A8D1FFF5244BE5 (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!m_ballAimStatu)
		bool L_0 = __this->___m_ballAimStatu_22;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Ray ray = m_mainCamera.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___m_mainCamera_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_1);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_3;
		L_3 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_1, L_2, NULL);
		// if (Physics.Raycast(ray, out RaycastHit raycastHit) && m_ballAimStatu)
		bool L_4;
		L_4 = Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A(L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		bool L_5 = __this->___m_ballAimStatu_22;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		// m_aimLineRenderer.SetPosition(1, raycastHit.point);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_6 = __this->___m_aimLineRenderer_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		NullCheck(L_6);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_6, 1, L_7, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void PlayerManager::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_OnMouseUp_mCD474AEE26F351C969809726085E1514E72791F8 (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!m_ballAimStatu)
		bool L_0 = __this->___m_ballAimStatu_22;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Ray ray = m_mainCamera.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___m_mainCamera_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_1);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_3;
		L_3 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_1, L_2, NULL);
		// if (Physics.Raycast(ray, out RaycastHit raycastHit))
		bool L_4;
		L_4 = Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A(L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// m_mouseLastPosition = raycastHit.point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		__this->___m_mouseLastPosition_19 = L_5;
		// Shoot(raycastHit.point);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		PlayerManager_Shoot_m54BEF22BFF1793B1E8B437B1D31488C58174321B(__this, L_6, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void PlayerManager::Shoot(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_Shoot_m54BEF22BFF1793B1E8B437B1D31488C58174321B (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___aim0, const RuntimeMethod* method) 
{
	{
		// if (aim.z < 10) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___aim0;
		float L_1 = L_0.___z_4;
		if ((!(((float)L_1) < ((float)(10.0f)))))
		{
			goto IL_0014;
		}
	}
	{
		// ResetBallLine();
		PlayerManager_ResetBallLine_m6F3307E3AFAD6BCDFF8E81A64D17AC239BFFDCAB(__this, NULL);
		// return;
		return;
	}

IL_0014:
	{
		// m_detectCollider.isTrigger = false;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_2 = __this->___m_detectCollider_15;
		NullCheck(L_2);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_2, (bool)0, NULL);
		// m_ballAimStatu = false;
		__this->___m_ballAimStatu_22 = (bool)0;
		// m_ballRigidbody.AddForce(new Vector3(aim.x, aim.y, aim.z) * m_forceMultiplier * m_forceMultiplierFromJson,ForceMode.Force);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___m_ballRigidbody_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___aim0;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___aim0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___aim0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), L_5, L_7, L_9, /*hidden argument*/NULL);
		float L_11 = __this->___m_forceMultiplier_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, L_11, NULL);
		int32_t L_13 = __this->___m_forceMultiplierFromJson_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, ((float)L_13), NULL);
		NullCheck(L_3);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_3, L_14, 0, NULL);
		// StartCoroutine(corStopLevel());
		RuntimeObject* L_15;
		L_15 = PlayerManager_corStopLevel_m7A7BB778714465ACB6953DF29F1F35BBB349FE5D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_16;
		L_16 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_15, NULL);
		// ResetBallLine();
		PlayerManager_ResetBallLine_m6F3307E3AFAD6BCDFF8E81A64D17AC239BFFDCAB(__this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerManager::corStopLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerManager_corStopLevel_m7A7BB778714465ACB6953DF29F1F35BBB349FE5D (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CcorStopLevelU3Ed__22_t83EBF110A67FF983AA6997222F5397D02CB853FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CcorStopLevelU3Ed__22_t83EBF110A67FF983AA6997222F5397D02CB853FF* L_0 = (U3CcorStopLevelU3Ed__22_t83EBF110A67FF983AA6997222F5397D02CB853FF*)il2cpp_codegen_object_new(U3CcorStopLevelU3Ed__22_t83EBF110A67FF983AA6997222F5397D02CB853FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CcorStopLevelU3Ed__22__ctor_m78169B0DD28A6D26950527465B6010F652203134(L_0, 0, NULL);
		U3CcorStopLevelU3Ed__22_t83EBF110A67FF983AA6997222F5397D02CB853FF* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PlayerManager::ResetBallLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_ResetBallLine_m6F3307E3AFAD6BCDFF8E81A64D17AC239BFFDCAB (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, const RuntimeMethod* method) 
{
	{
		// m_aimLineRenderer.positionCount = 0;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___m_aimLineRenderer_8;
		NullCheck(L_0);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_0, 0, NULL);
		// m_aimLineRenderer.positionCount = 2;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1 = __this->___m_aimLineRenderer_8;
		NullCheck(L_1);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_1, 2, NULL);
		// }
		return;
	}
}
// System.Int32 PlayerManager::get_ForceMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerManager_get_ForceMultiplier_mC06D5307AE9A0F180364A454472AD134AE88DC8A (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_forceMultiplierFromJson; }
		int32_t L_0 = __this->___m_forceMultiplierFromJson_21;
		return L_0;
	}
}
// System.Void PlayerManager::set_ForceMultiplier(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_set_ForceMultiplier_m6C8DDFB7DECCC8CA3BE10F118B41D5E801B9BD15 (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_forceMultiplierFromJson = value; }
		int32_t L_0 = ___value0;
		__this->___m_forceMultiplierFromJson_21 = L_0;
		// set { m_forceMultiplierFromJson = value; }
		return;
	}
}
// System.Void PlayerManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager__ctor_mEDEFFACDDE66D7077DE8CDED6560CA06218B5A0E (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m00E0C7315A836B1C0A37EEBE36DDAD1F3950ED6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tAB8900DF126641F42134EDEB430B6D866841F00A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float m_forceMultiplier = 60f;
		__this->___m_forceMultiplier_11 = (60.0f);
		// private int m_forceMultiplierFromJson = 1;
		__this->___m_forceMultiplierFromJson_21 = 1;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tAB8900DF126641F42134EDEB430B6D866841F00A_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m00E0C7315A836B1C0A37EEBE36DDAD1F3950ED6C(__this, Singleton_1__ctor_m00E0C7315A836B1C0A37EEBE36DDAD1F3950ED6C_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerManager/<corStopLevel>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcorStopLevelU3Ed__22__ctor_m78169B0DD28A6D26950527465B6010F652203134 (U3CcorStopLevelU3Ed__22_t83EBF110A67FF983AA6997222F5397D02CB853FF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerManager/<corStopLevel>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcorStopLevelU3Ed__22_System_IDisposable_Dispose_m798BBC1F6DA88A8CE0A7B7B4EC3F2F431E99B8BD (U3CcorStopLevelU3Ed__22_t83EBF110A67FF983AA6997222F5397D02CB853FF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerManager/<corStopLevel>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CcorStopLevelU3Ed__22_MoveNext_m95F561CA917C8569235528F866294D5671E2D4DE (U3CcorStopLevelU3Ed__22_t83EBF110A67FF983AA6997222F5397D02CB853FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_0072;
			}
			case 3:
			{
				goto IL_009e;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0046:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// m_cameraManager.SetCameraAction(true);
		PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* L_4 = V_1;
		NullCheck(L_4);
		CameraManager_t27CFDF23ED636E9025EFEA9A5E8B0004355206BB* L_5 = L_4->___m_cameraManager_13;
		NullCheck(L_5);
		CameraManager_SetCameraAction_m5C882746E8BC86777D6DFB86B57B06695FC1416C(L_5, (bool)1, NULL);
		// yield return new WaitForSeconds(3f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0072:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// m_cameraManager.SetCameraAction(false);
		PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* L_7 = V_1;
		NullCheck(L_7);
		CameraManager_t27CFDF23ED636E9025EFEA9A5E8B0004355206BB* L_8 = L_7->___m_cameraManager_13;
		NullCheck(L_8);
		CameraManager_SetCameraAction_m5C882746E8BC86777D6DFB86B57B06695FC1416C(L_8, (bool)0, NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_009e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// m_ballRigidbody.velocity = Vector3.zero;
		PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* L_10 = V_1;
		NullCheck(L_10);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = L_10->___m_ballRigidbody_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_11);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_11, L_12, NULL);
		// m_ballRigidbody.angularVelocity = Vector3.zero;
		PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* L_13 = V_1;
		NullCheck(L_13);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_14 = L_13->___m_ballRigidbody_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_14);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_14, L_15, NULL);
		// m_ballTransform.position = m_ballFirstPosition;
		PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* L_16 = V_1;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = L_16->___m_ballTransform_17;
		PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* L_18 = V_1;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = L_18->___m_ballFirstPosition_10;
		NullCheck(L_17);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_19, NULL);
		// m_ballTransform.rotation = Quaternion.identity;
		PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* L_20 = V_1;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = L_20->___m_ballTransform_17;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_21);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_21, L_22, NULL);
		// m_ballAimStatu = false;
		PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* L_23 = V_1;
		NullCheck(L_23);
		L_23->___m_ballAimStatu_22 = (bool)0;
		// EventManager.PlayerShoot();
		EventManager_PlayerShoot_mC5ABB9678C99421816D929BCC5B88EF9FE3E0907(NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlayerManager/<corStopLevel>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CcorStopLevelU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m774C1E966C49CA764CD151B82E82156DC72DDB0D (U3CcorStopLevelU3Ed__22_t83EBF110A67FF983AA6997222F5397D02CB853FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerManager/<corStopLevel>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcorStopLevelU3Ed__22_System_Collections_IEnumerator_Reset_mAD9509877C5C8BF6DB7A494BE548F84FA6942C21 (U3CcorStopLevelU3Ed__22_t83EBF110A67FF983AA6997222F5397D02CB853FF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CcorStopLevelU3Ed__22_System_Collections_IEnumerator_Reset_mAD9509877C5C8BF6DB7A494BE548F84FA6942C21_RuntimeMethod_var)));
	}
}
// System.Object PlayerManager/<corStopLevel>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CcorStopLevelU3Ed__22_System_Collections_IEnumerator_get_Current_m480599FF47E527D8D0CC98F627FA8A2553A946FC (U3CcorStopLevelU3Ed__22_t83EBF110A67FF983AA6997222F5397D02CB853FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StatsManager::SetPlayerHighScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatsManager_SetPlayerHighScore_m18BBDF048ABEA7E1098D7FC56269F9589D691B71 (StatsManager_tC4FC040D87839B5C03060ACC2B3A01B02F165F87* __this, int32_t ____Score0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37CAA860A6D249B86D9D29EDEE73652678205CD8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int score = GetPlayerHighScore();
		int32_t L_0;
		L_0 = StatsManager_GetPlayerHighScore_m2E3629A3B455B3903D6D817C5D0E6E34C48D8EF4(__this, NULL);
		// if (score < _Score)
		int32_t L_1 = ____Score0;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		// PlayerPrefs.SetInt(Constants.c_KeyLevelHighScore, _Score);
		int32_t L_2 = ____Score0;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral37CAA860A6D249B86D9D29EDEE73652678205CD8, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Int32 StatsManager::GetPlayerHighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StatsManager_GetPlayerHighScore_m2E3629A3B455B3903D6D817C5D0E6E34C48D8EF4 (StatsManager_tC4FC040D87839B5C03060ACC2B3A01B02F165F87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37CAA860A6D249B86D9D29EDEE73652678205CD8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.HasKey(Constants.c_KeyLevelHighScore))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteral37CAA860A6D249B86D9D29EDEE73652678205CD8, NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// return PlayerPrefs.GetInt(Constants.c_KeyLevelHighScore);
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral37CAA860A6D249B86D9D29EDEE73652678205CD8, NULL);
		return L_1;
	}

IL_0017:
	{
		// return 0;
		return 0;
	}
}
// System.Void StatsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatsManager__ctor_mD0251ABB61521F5DE033975F0CB59C7E9F240564 (StatsManager_tC4FC040D87839B5C03060ACC2B3A01B02F165F87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_mC04AB51BDEDE7E88FEDBF14B971ADBADCA2AEAF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tC01C0A4A5261DA12ECDA08077833E23FE530CBA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tC01C0A4A5261DA12ECDA08077833E23FE530CBA7_il2cpp_TypeInfo_var);
		Singleton_1__ctor_mC04AB51BDEDE7E88FEDBF14B971ADBADCA2AEAF8(__this, Singleton_1__ctor_mC04AB51BDEDE7E88FEDBF14B971ADBADCA2AEAF8_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameEndView::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndView_Awake_m9D84F7A39974E1A0DC25BF676CAEBC5952931CE3 (GameEndView_t23F24B39254973CBD2546BFCE605FC12215FCEB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&View_1_Awake_mDA5EE896B4172CD7A6EEE1C68304F6BABAA6B403_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		View_1_Awake_mDA5EE896B4172CD7A6EEE1C68304F6BABAA6B403(__this, View_1_Awake_mDA5EE896B4172CD7A6EEE1C68304F6BABAA6B403_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GameEndView::OnGamePhaseChanged(GamePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndView_OnGamePhaseChanged_mF45B6A02039969824957C159DE5AF62F73222108 (GameEndView_t23F24B39254973CBD2546BFCE605FC12215FCEB0* __this, int32_t ____GamePhase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&View_1_OnGamePhaseChanged_mE708CDC70718F633A1E6B0E2FF134AFC5FB92DB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&View_1_Transition_m79E1C98F2FD308667EE7E4C578E602CDAA1124B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnGamePhaseChanged(_GamePhase);
		int32_t L_0 = ____GamePhase0;
		View_1_OnGamePhaseChanged_mE708CDC70718F633A1E6B0E2FF134AFC5FB92DB9(__this, L_0, View_1_OnGamePhaseChanged_mE708CDC70718F633A1E6B0E2FF134AFC5FB92DB9_RuntimeMethod_var);
		int32_t L_1 = ____GamePhase0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ____GamePhase0;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_002c;
		}
	}
	{
		// SetupGameEndView();
		GameEndView_SetupGameEndView_m1B9DB88D74664A1FA5429FADC288C4EA626C5B79(__this, NULL);
		// Transition(true);
		View_1_Transition_m79E1C98F2FD308667EE7E4C578E602CDAA1124B6(__this, (bool)1, View_1_Transition_m79E1C98F2FD308667EE7E4C578E602CDAA1124B6_RuntimeMethod_var);
		// break;
		return;
	}

IL_001d:
	{
		// if (m_Visible)
		bool L_3 = ((View_1_t5BAF756D8FC11B225BB3171C72482CCBD5C70A8A*)__this)->___m_Visible_10;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// Transition(false);
		View_1_Transition_m79E1C98F2FD308667EE7E4C578E602CDAA1124B6(__this, (bool)0, View_1_Transition_m79E1C98F2FD308667EE7E4C578E602CDAA1124B6_RuntimeMethod_var);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void GameEndView::SetupGameEndView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndView_SetupGameEndView_m1B9DB88D74664A1FA5429FADC288C4EA626C5B79 (GameEndView_t23F24B39254973CBD2546BFCE605FC12215FCEB0* __this, const RuntimeMethod* method) 
{
	{
		// m_TextHighScore.transform.localScale = Vector3.zero;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_TextHighScore_18;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_2, NULL);
		// m_TextLevelScore.transform.localScale = Vector3.zero;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___m_TextLevelScore_19;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_4);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_5, NULL);
		// m_imageGameFail.transform.localScale = Vector3.zero;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___m_imageGameFail_16;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_7);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_7, L_8, NULL);
		// m_imageGameSuccess.transform.localScale = Vector3.zero;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___m_imageGameSuccess_17;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_10);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_10, L_11, NULL);
		// CheckLevelEnd();
		GameEndView_CheckLevelEnd_mC6D1159766A6764D23199A3477CA576C9DBA5B08(__this, NULL);
		// }
		return;
	}
}
// System.Void GameEndView::CheckLevelEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndView_CheckLevelEnd_mC6D1159766A6764D23199A3477CA576C9DBA5B08 (GameEndView_t23F24B39254973CBD2546BFCE605FC12215FCEB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m23C78C97634E8975A0A58BBCDF1AF60967680FD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t64294B7AF42CAEE4DF55A11C5F3FBAC120E851BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int levelPoint = GamePlayView.Instance.LevelPoint;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t64294B7AF42CAEE4DF55A11C5F3FBAC120E851BA_il2cpp_TypeInfo_var);
		GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* L_0;
		L_0 = Singleton_1_get_Instance_m23C78C97634E8975A0A58BBCDF1AF60967680FD0(Singleton_1_get_Instance_m23C78C97634E8975A0A58BBCDF1AF60967680FD0_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GamePlayView_get_LevelPoint_m07829F6C2A974DBF5322CE73B9BE82D8E6888F65_inline(L_0, NULL);
		V_0 = L_1;
		// if (levelPoint > 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		// LevelSuccess(levelPoint);
		int32_t L_3 = V_0;
		GameEndView_LevelSuccess_m301EE6F0866EC2898F6D65D49BC43E7A9478216A(__this, L_3, NULL);
		return;
	}

IL_0017:
	{
		// LevelFail(levelPoint);
		int32_t L_4 = V_0;
		GameEndView_LevelFail_mFFE602462D737B7D6BD4AA44EFCA066B36D709EB(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void GameEndView::LevelFail(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndView_LevelFail_mFFE602462D737B7D6BD4AA44EFCA066B36D709EB (GameEndView_t23F24B39254973CBD2546BFCE605FC12215FCEB0* __this, int32_t ____levelPoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_imageGameFail.transform.DOScale(Vector3.one, 1f).SetEase(Ease.OutBounce);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___m_imageGameFail_16;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_3;
		L_3 = ShortcutExtensions_DOScale_m7BBBF6EA15ED2BB02E4E32122D0FE0C8D2A4467D(L_1, L_2, (1.0f), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_4;
		L_4 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_3, ((int32_t)30), TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		// ShowLevelScore(_levelPoint);
		int32_t L_5 = ____levelPoint0;
		GameEndView_ShowLevelScore_m8FD9A600777F1C67621E3326936A65331A094C27(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void GameEndView::LevelSuccess(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndView_LevelSuccess_m301EE6F0866EC2898F6D65D49BC43E7A9478216A (GameEndView_t23F24B39254973CBD2546BFCE605FC12215FCEB0* __this, int32_t ____levelPoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mC2AEEBDB372B0DE799F002D62CD7E38891EF8B81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tC01C0A4A5261DA12ECDA08077833E23FE530CBA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_imageGameSuccess.transform.DOScale(Vector3.one, 1f).SetEase(Ease.OutBounce);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___m_imageGameSuccess_17;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_3;
		L_3 = ShortcutExtensions_DOScale_m7BBBF6EA15ED2BB02E4E32122D0FE0C8D2A4467D(L_1, L_2, (1.0f), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_4;
		L_4 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_3, ((int32_t)30), TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		// ShowLevelScore(_levelPoint);
		int32_t L_5 = ____levelPoint0;
		GameEndView_ShowLevelScore_m8FD9A600777F1C67621E3326936A65331A094C27(__this, L_5, NULL);
		// int highScore = StatsManager.Instance.GetPlayerHighScore();
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tC01C0A4A5261DA12ECDA08077833E23FE530CBA7_il2cpp_TypeInfo_var);
		StatsManager_tC4FC040D87839B5C03060ACC2B3A01B02F165F87* L_6;
		L_6 = Singleton_1_get_Instance_mC2AEEBDB372B0DE799F002D62CD7E38891EF8B81(Singleton_1_get_Instance_mC2AEEBDB372B0DE799F002D62CD7E38891EF8B81_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = StatsManager_GetPlayerHighScore_m2E3629A3B455B3903D6D817C5D0E6E34C48D8EF4(L_6, NULL);
		// if (highScore < _levelPoint)
		int32_t L_8 = ____levelPoint0;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0048;
		}
	}
	{
		// StatsManager.Instance.SetPlayerHighScore(_levelPoint);
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tC01C0A4A5261DA12ECDA08077833E23FE530CBA7_il2cpp_TypeInfo_var);
		StatsManager_tC4FC040D87839B5C03060ACC2B3A01B02F165F87* L_9;
		L_9 = Singleton_1_get_Instance_mC2AEEBDB372B0DE799F002D62CD7E38891EF8B81(Singleton_1_get_Instance_mC2AEEBDB372B0DE799F002D62CD7E38891EF8B81_RuntimeMethod_var);
		int32_t L_10 = ____levelPoint0;
		NullCheck(L_9);
		StatsManager_SetPlayerHighScore_m18BBDF048ABEA7E1098D7FC56269F9589D691B71(L_9, L_10, NULL);
		// AnimateHighScoreAnimation(_levelPoint);
		int32_t L_11 = ____levelPoint0;
		GameEndView_AnimateHighScoreAnimation_m898AFBEE8B1D6937E1BB227E17710E8473FF734D(__this, L_11, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void GameEndView::AnimateHighScoreAnimation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndView_AnimateHighScoreAnimation_m898AFBEE8B1D6937E1BB227E17710E8473FF734D (GameEndView_t23F24B39254973CBD2546BFCE605FC12215FCEB0* __this, int32_t ____levelPoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral594B1EA9D05CF5863BB15FC4D98747883DA38871);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TextHighScore.text = Constants.c_LevelHighScore + _levelPoint.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_TextHighScore_18;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&____levelPoint0), NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral594B1EA9D05CF5863BB15FC4D98747883DA38871, L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// m_TextHighScore.transform.DOScale(1, 1).SetEase(Ease.InOutBounce);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___m_TextHighScore_18;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_5;
		L_5 = ShortcutExtensions_DOScale_m163029C9F239BAB93446F934B063D4545494D10A(L_4, (1.0f), (1.0f), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_6;
		L_6 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_5, ((int32_t)31), TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GameEndView::ShowLevelScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndView_ShowLevelScore_m8FD9A600777F1C67621E3326936A65331A094C27 (GameEndView_t23F24B39254973CBD2546BFCE605FC12215FCEB0* __this, int32_t ____levelPoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE45CAC4C012DB0DEE9724C056D4FE53A7557663F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TextLevelScore.transform.DOScale(Vector3.one, 1f).SetEase(Ease.OutBounce);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_TextLevelScore_19;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_3;
		L_3 = ShortcutExtensions_DOScale_m7BBBF6EA15ED2BB02E4E32122D0FE0C8D2A4467D(L_1, L_2, (1.0f), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_4;
		L_4 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_3, ((int32_t)30), TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		// m_TextLevelScore.text = Constants.c_LevelScore + _levelPoint.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___m_TextLevelScore_19;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&____levelPoint0), NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralE45CAC4C012DB0DEE9724C056D4FE53A7557663F, L_6, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		// }
		return;
	}
}
// System.Void GameEndView::NextGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndView_NextGame_m2EDA2EA94ADC068E3DFC8F2498AB5C836B43CADA (GameEndView_t23F24B39254973CBD2546BFCE605FC12215FCEB0* __this, const RuntimeMethod* method) 
{
	{
		// m_GameManager.ChangePhase(GamePhase.GAME);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((View_1_t5BAF756D8FC11B225BB3171C72482CCBD5C70A8A*)__this)->___m_GameManager_11;
		NullCheck(L_0);
		GameManager_ChangePhase_m572F89DBF83B87522E55EA65AC6FE765C6C6BE86(L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void GameEndView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndView__ctor_m40CCFFEE3407BB16115F3E9689F205A9A0121A00 (GameEndView_t23F24B39254973CBD2546BFCE605FC12215FCEB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&View_1__ctor_mFC016BE4AA8F3665D6FAA6FF0D47F572FCBAB392_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		View_1__ctor_mFC016BE4AA8F3665D6FAA6FF0D47F572FCBAB392(__this, View_1__ctor_mFC016BE4AA8F3665D6FAA6FF0D47F572FCBAB392_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GamePlayView::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayView_Awake_mA727992A1993C68CC7ABF18EAB5C094769FCF240 (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&View_1_Awake_mF4DD2BAF16285FCD1BD2AE1941C07A98D6430B0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		View_1_Awake_mF4DD2BAF16285FCD1BD2AE1941C07A98D6430B0A(__this, View_1_Awake_mF4DD2BAF16285FCD1BD2AE1941C07A98D6430B0A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GamePlayView::OnGamePhaseChanged(GamePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayView_OnGamePhaseChanged_m6016BB8D28E02DAABAF9259320532A3453B3327E (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, int32_t ____GamePhase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&View_1_OnGamePhaseChanged_mBF2B865F9C11F9AAD3FE04966BF0E548318529FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&View_1_Transition_m17858942056D2583A05390B1B12D083FA6658B48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnGamePhaseChanged(_GamePhase);
		int32_t L_0 = ____GamePhase0;
		View_1_OnGamePhaseChanged_mBF2B865F9C11F9AAD3FE04966BF0E548318529FC(__this, L_0, View_1_OnGamePhaseChanged_mBF2B865F9C11F9AAD3FE04966BF0E548318529FC_RuntimeMethod_var);
		int32_t L_1 = ____GamePhase0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		// SetupGameView();
		GamePlayView_SetupGameView_m8ACAD0F526B9C363FC55BD818A00C0BD46FD6EAD(__this, NULL);
		// Transition(true);
		View_1_Transition_m17858942056D2583A05390B1B12D083FA6658B48(__this, (bool)1, View_1_Transition_m17858942056D2583A05390B1B12D083FA6658B48_RuntimeMethod_var);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void GamePlayView::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayView_OnEnable_mF2E6AA7190EEAF4C3FFE38279F11B1AA7BC15281 (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayView_AfterPlayerShoot_m083FB8DA7CF32D56FF3062617631CEEB14844D3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayView_SetPlayerLevelPoint_m58CB6514A4531953EE700C89C50F95AFB145C596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.OnTargetShootDetect += SetPlayerLevelPoint;
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_0 = (OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC*)il2cpp_codegen_object_new(OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OnTargetShoot__ctor_mEFE22C1B662E78C1FCEFE711C80A88DE25873C90(L_0, __this, (intptr_t)((void*)GamePlayView_SetPlayerLevelPoint_m58CB6514A4531953EE700C89C50F95AFB145C596_RuntimeMethod_var), NULL);
		EventManager_add_OnTargetShootDetect_m2DFD571AACE1965A27CE91E835951F955DAE0980(L_0, NULL);
		// EventManager.OnPlayerShoot += AfterPlayerShoot;
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_1 = (OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C*)il2cpp_codegen_object_new(OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OnShoot__ctor_mF2B24DA204E734186929562A8E1B20ABE1DA3C7D(L_1, __this, (intptr_t)((void*)GamePlayView_AfterPlayerShoot_m083FB8DA7CF32D56FF3062617631CEEB14844D3D_RuntimeMethod_var), NULL);
		EventManager_add_OnPlayerShoot_m7268B2DE3669F4A6F3820AB4C474158C518DF98A(L_1, NULL);
		// }
		return;
	}
}
// System.Void GamePlayView::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayView_OnDisable_m857BF767E4315FA2FE794CAEC1C97392B0AE9DE0 (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayView_AfterPlayerShoot_m083FB8DA7CF32D56FF3062617631CEEB14844D3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayView_SetPlayerLevelPoint_m58CB6514A4531953EE700C89C50F95AFB145C596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.OnTargetShootDetect -= SetPlayerLevelPoint;
		OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* L_0 = (OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC*)il2cpp_codegen_object_new(OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OnTargetShoot__ctor_mEFE22C1B662E78C1FCEFE711C80A88DE25873C90(L_0, __this, (intptr_t)((void*)GamePlayView_SetPlayerLevelPoint_m58CB6514A4531953EE700C89C50F95AFB145C596_RuntimeMethod_var), NULL);
		EventManager_remove_OnTargetShootDetect_mF68658641560A08B58BF9E188E891C9104028D4F(L_0, NULL);
		// EventManager.OnPlayerShoot -= AfterPlayerShoot;
		OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* L_1 = (OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C*)il2cpp_codegen_object_new(OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OnShoot__ctor_mF2B24DA204E734186929562A8E1B20ABE1DA3C7D(L_1, __this, (intptr_t)((void*)GamePlayView_AfterPlayerShoot_m083FB8DA7CF32D56FF3062617631CEEB14844D3D_RuntimeMethod_var), NULL);
		EventManager_remove_OnPlayerShoot_m0C9F0A3FF7FBF9B62008A9E18A0E33A8FF7E76B3(L_1, NULL);
		// }
		return;
	}
}
// System.Void GamePlayView::SetupGameView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayView_SetupGameView_m8ACAD0F526B9C363FC55BD818A00C0BD46FD6EAD (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, const RuntimeMethod* method) 
{
	{
		// m_pointOfLevel = 0;
		__this->___m_pointOfLevel_19 = 0;
		// m_txtPlayerLevelPoint.text = m_pointOfLevel.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_txtPlayerLevelPoint_17;
		int32_t* L_1 = (&__this->___m_pointOfLevel_19);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void GamePlayView::SetCountDownTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayView_SetCountDownTime_m64C713AA800B8498E271C217F48E856B7FE1384B (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, int32_t ____Seconds0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayView_U3CSetCountDownTimeU3Eb__10_0_m065E11A9F85B7968B2543257AF6C2C3A7B63AD46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mF60DBA3F6C157331404BD6819A0AFF03A6339FB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_txtCountDown.transform.localScale = Vector2.zero;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_txtCountDown_16;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_2, NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_3, NULL);
		// m_txtCountDown.text = _Seconds.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___m_txtCountDown_16;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&____Seconds0), NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		// m_txtCountDown.transform.DOScale(Vector3.one, 0.75f).SetEase(Ease.InOutQuart).
		//     OnComplete(() => m_txtCountDown.transform.DOScale(Vector3.zero, 0.1f).SetEase(Ease.Flash));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___m_txtCountDown_16;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_9;
		L_9 = ShortcutExtensions_DOScale_m7BBBF6EA15ED2BB02E4E32122D0FE0C8D2A4467D(L_7, L_8, (0.75f), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_10;
		L_10 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_9, ((int32_t)13), TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_11 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_11, __this, (intptr_t)((void*)GamePlayView_U3CSetCountDownTimeU3Eb__10_0_m065E11A9F85B7968B2543257AF6C2C3A7B63AD46_RuntimeMethod_var), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_12;
		L_12 = TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mF60DBA3F6C157331404BD6819A0AFF03A6339FB7(L_10, L_11, TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mF60DBA3F6C157331404BD6819A0AFF03A6339FB7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GamePlayView::SetPlayerLevelPoint(System.Int32,TargetTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayView_SetPlayerLevelPoint_m58CB6514A4531953EE700C89C50F95AFB145C596 (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, int32_t ____Point0, int32_t ____Type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayView_U3CSetPlayerLevelPointU3Eb__11_0_m8FF0C3A2BA4E16B95B23DC402DC323E78D7FB15B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mF60DBA3F6C157331404BD6819A0AFF03A6339FB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_pointOfLevel += _Point;
		int32_t L_0 = __this->___m_pointOfLevel_19;
		int32_t L_1 = ____Point0;
		__this->___m_pointOfLevel_19 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// m_txtPlayerLevelPoint.transform.localScale = Vector2.zero;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___m_txtPlayerLevelPoint_17;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_4, NULL);
		NullCheck(L_3);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_3, L_5, NULL);
		// m_txtPlayerLevelPoint.text = m_pointOfLevel.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___m_txtPlayerLevelPoint_17;
		int32_t* L_7 = (&__this->___m_pointOfLevel_19);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		// m_txtPlayerLevelPoint.transform.DOScale(Vector3.one, 0.75f).SetEase(Ease.InOutQuart).
		//     OnComplete(() => m_txtCountDown.transform.DOScale(Vector3.zero, 0.1f));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___m_txtPlayerLevelPoint_17;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_12;
		L_12 = ShortcutExtensions_DOScale_m7BBBF6EA15ED2BB02E4E32122D0FE0C8D2A4467D(L_10, L_11, (0.75f), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_13;
		L_13 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_12, ((int32_t)13), TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_14 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_14, __this, (intptr_t)((void*)GamePlayView_U3CSetPlayerLevelPointU3Eb__11_0_m8FF0C3A2BA4E16B95B23DC402DC323E78D7FB15B_RuntimeMethod_var), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_15;
		L_15 = TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mF60DBA3F6C157331404BD6819A0AFF03A6339FB7(L_13, L_14, TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mF60DBA3F6C157331404BD6819A0AFF03A6339FB7_RuntimeMethod_var);
		// if (_Type == TargetTypes.Goal)
		int32_t L_16 = ____Type1;
		if (L_16)
		{
			goto IL_007a;
		}
	}
	{
		// SetGoalAnim();
		GamePlayView_SetGoalAnim_mE74D8F14C40264E9117D0EF22955C00FBA63A2ED(__this, NULL);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void GamePlayView::SetGoalAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayView_SetGoalAnim_mE74D8F14C40264E9117D0EF22955C00FBA63A2ED (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayView_U3CSetGoalAnimU3Eb__12_0_m5CF0292CA55A47F6AA2EDA958E97D1A3E4278E8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mF60DBA3F6C157331404BD6819A0AFF03A6339FB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_txtGoal.transform.localScale = Vector3.zero;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_txtGoal_18;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_2, NULL);
		// m_txtGoal.transform.DOScale(Vector3.one, 1.5f).SetEase(Ease.InOutBounce).
		//     OnComplete(() => m_txtGoal.transform.DOScale(Vector3.zero, 0.3f));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___m_txtGoal_18;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_6;
		L_6 = ShortcutExtensions_DOScale_m7BBBF6EA15ED2BB02E4E32122D0FE0C8D2A4467D(L_4, L_5, (1.5f), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_7;
		L_7 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_6, ((int32_t)31), TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_8 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_8, __this, (intptr_t)((void*)GamePlayView_U3CSetGoalAnimU3Eb__12_0_m5CF0292CA55A47F6AA2EDA958E97D1A3E4278E8B_RuntimeMethod_var), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_9;
		L_9 = TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mF60DBA3F6C157331404BD6819A0AFF03A6339FB7(L_7, L_8, TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mF60DBA3F6C157331404BD6819A0AFF03A6339FB7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 GamePlayView::get_LevelPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GamePlayView_get_LevelPoint_m07829F6C2A974DBF5322CE73B9BE82D8E6888F65 (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_pointOfLevel; }
		int32_t L_0 = __this->___m_pointOfLevel_19;
		return L_0;
	}
}
// System.Int32 GamePlayView::get_PointPerGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GamePlayView_get_PointPerGoal_mF488846A66CC7F6853D72CD4DC473709F415F4D6 (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_PointPerGoalFromJson; }
		int32_t L_0 = __this->___m_PointPerGoalFromJson_20;
		return L_0;
	}
}
// System.Void GamePlayView::set_PointPerGoal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayView_set_PointPerGoal_m0958E478E1B17E5DFAA13195EA228056697F322B (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_PointPerGoalFromJson = value; }
		int32_t L_0 = ___value0;
		__this->___m_PointPerGoalFromJson_20 = L_0;
		// set { m_PointPerGoalFromJson = value; }
		return;
	}
}
// System.Void GamePlayView::AfterPlayerShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayView_AfterPlayerShoot_m083FB8DA7CF32D56FF3062617631CEEB14844D3D (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&View_1_Transition_m17858942056D2583A05390B1B12D083FA6658B48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_GameManager.ChangePhase(GamePhase.GAME_END);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((View_1_tF71BB4B137A698F16D5C93BA9B104EA9EF939A71*)__this)->___m_GameManager_11;
		NullCheck(L_0);
		GameManager_ChangePhase_m572F89DBF83B87522E55EA65AC6FE765C6C6BE86(L_0, 2, NULL);
		// Transition(false);
		View_1_Transition_m17858942056D2583A05390B1B12D083FA6658B48(__this, (bool)0, View_1_Transition_m17858942056D2583A05390B1B12D083FA6658B48_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GamePlayView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayView__ctor_mD189229F01FFD12BD452C94180F337CE187DAF1C (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&View_1__ctor_m26198A5F5037D95B5BC5D7BC32909E181841CD4E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		View_1__ctor_m26198A5F5037D95B5BC5D7BC32909E181841CD4E(__this, View_1__ctor_m26198A5F5037D95B5BC5D7BC32909E181841CD4E_RuntimeMethod_var);
		return;
	}
}
// System.Void GamePlayView::<SetCountDownTime>b__10_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayView_U3CSetCountDownTimeU3Eb__10_0_m065E11A9F85B7968B2543257AF6C2C3A7B63AD46 (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnComplete(() => m_txtCountDown.transform.DOScale(Vector3.zero, 0.1f).SetEase(Ease.Flash));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_txtCountDown_16;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_3;
		L_3 = ShortcutExtensions_DOScale_m7BBBF6EA15ED2BB02E4E32122D0FE0C8D2A4467D(L_1, L_2, (0.100000001f), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_4;
		L_4 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_3, ((int32_t)32), TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		return;
	}
}
// System.Void GamePlayView::<SetPlayerLevelPoint>b__11_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayView_U3CSetPlayerLevelPointU3Eb__11_0_m8FF0C3A2BA4E16B95B23DC402DC323E78D7FB15B (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, const RuntimeMethod* method) 
{
	{
		// OnComplete(() => m_txtCountDown.transform.DOScale(Vector3.zero, 0.1f));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_txtCountDown_16;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_3;
		L_3 = ShortcutExtensions_DOScale_m7BBBF6EA15ED2BB02E4E32122D0FE0C8D2A4467D(L_1, L_2, (0.100000001f), NULL);
		return;
	}
}
// System.Void GamePlayView::<SetGoalAnim>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayView_U3CSetGoalAnimU3Eb__12_0_m5CF0292CA55A47F6AA2EDA958E97D1A3E4278E8B (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, const RuntimeMethod* method) 
{
	{
		// OnComplete(() => m_txtGoal.transform.DOScale(Vector3.zero, 0.3f));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_txtGoal_18;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_3;
		L_3 = ShortcutExtensions_DOScale_m7BBBF6EA15ED2BB02E4E32122D0FE0C8D2A4467D(L_1, L_2, (0.300000012f), NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainMenuView::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuView_Awake_m6FA0D2FCCAD07341121FEFB384AF70F24DF0B324 (MainMenuView_t0683229FCA1D2E67D4324BB73A987442BF21AC9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&View_1_Awake_m79FEE230BFCB321DA98284862AEC993C3D096F76_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		View_1_Awake_m79FEE230BFCB321DA98284862AEC993C3D096F76(__this, View_1_Awake_m79FEE230BFCB321DA98284862AEC993C3D096F76_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MainMenuView::OnPlayButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuView_OnPlayButton_m36EA766AA49968696B7B1F5826B3A3D944D6A8E1 (MainMenuView_t0683229FCA1D2E67D4324BB73A987442BF21AC9D* __this, const RuntimeMethod* method) 
{
	{
		// if (m_GameManager.currentPhase == GamePhase.MAIN_MENU)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((View_1_t0AE4A1ED9FD00208340489321E405EDDB84585C1*)__this)->___m_GameManager_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GameManager_get_currentPhase_m5A8C0BFBD6B904FDE25CDFA6DF74C176DDD1E271_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// m_GameManager.ChangePhase(GamePhase.GAME);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((View_1_t0AE4A1ED9FD00208340489321E405EDDB84585C1*)__this)->___m_GameManager_11;
		NullCheck(L_2);
		GameManager_ChangePhase_m572F89DBF83B87522E55EA65AC6FE765C6C6BE86(L_2, 1, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void MainMenuView::OnGamePhaseChanged(GamePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuView_OnGamePhaseChanged_mEA389D7064ECEE0F8738C1A3022794BA320322EB (MainMenuView_t0683229FCA1D2E67D4324BB73A987442BF21AC9D* __this, int32_t ____GamePhase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&View_1_OnGamePhaseChanged_m96AEB7C31C83C3BB59097AC5AEE7CBFDC3A8B8C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&View_1_Transition_m7AABA56C9D73B455B1F229850D31D465951DA0AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnGamePhaseChanged(_GamePhase);
		int32_t L_0 = ____GamePhase0;
		View_1_OnGamePhaseChanged_m96AEB7C31C83C3BB59097AC5AEE7CBFDC3A8B8C4(__this, L_0, View_1_OnGamePhaseChanged_m96AEB7C31C83C3BB59097AC5AEE7CBFDC3A8B8C4_RuntimeMethod_var);
		int32_t L_1 = ____GamePhase0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = ____GamePhase0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_000f:
	{
		// Transition(true);
		View_1_Transition_m7AABA56C9D73B455B1F229850D31D465951DA0AA(__this, (bool)1, View_1_Transition_m7AABA56C9D73B455B1F229850D31D465951DA0AA_RuntimeMethod_var);
		// break;
		return;
	}

IL_0017:
	{
		// if (m_Visible)
		bool L_3 = ((View_1_t0AE4A1ED9FD00208340489321E405EDDB84585C1*)__this)->___m_Visible_10;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// Transition(false);
		View_1_Transition_m7AABA56C9D73B455B1F229850D31D465951DA0AA(__this, (bool)0, View_1_Transition_m7AABA56C9D73B455B1F229850D31D465951DA0AA_RuntimeMethod_var);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void MainMenuView::SetActiveSettingsPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuView_SetActiveSettingsPanel_m03501E80E3B9F0E44501AB8FB6E1B02DDA78BA6F (MainMenuView_t0683229FCA1D2E67D4324BB73A987442BF21AC9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F8237A6E1D8E9CAE427E47A318C47A62133F44E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38C3EEF0AF7BB4AB38710E28C427B1DB231C9A04);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// m_PanelSettings.gameObject.SetActive(!m_PanelStatu);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_PanelSettings_16;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		bool L_2 = __this->___m_PanelStatu_21;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// m_PanelStatu = !m_PanelStatu;
		bool L_3 = __this->___m_PanelStatu_21;
		__this->___m_PanelStatu_21 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		// m_txtData.text = m_PanelStatu ? Constants.c_CloseData : Constants.c_OpenData;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___m_txtData_20;
		bool L_5 = __this->___m_PanelStatu_21;
		G_B1_0 = L_4;
		if (L_5)
		{
			G_B2_0 = L_4;
			goto IL_003d;
		}
	}
	{
		G_B3_0 = _stringLiteral38C3EEF0AF7BB4AB38710E28C427B1DB231C9A04;
		G_B3_1 = G_B1_0;
		goto IL_0042;
	}

IL_003d:
	{
		G_B3_0 = _stringLiteral0F8237A6E1D8E9CAE427E47A318C47A62133F44E;
		G_B3_1 = G_B2_0;
	}

IL_0042:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void MainMenuView::LoadDataFromJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuView_LoadDataFromJson_mB7C31F35C72A57ECB098E19933F4624B342D2CB4 (MainMenuView_t0683229FCA1D2E67D4324BB73A987442BF21AC9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A1CB1D0A4EE36EE20A966AAF8F79CD0B960B890);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_GameData = SaveLoadManager.Load();
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_0;
		L_0 = SaveLoadManager_Load_m7652FFB647822ED5F256603C39A8543B2AA3D42B(NULL);
		__this->___m_GameData_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GameData_22), (void*)L_0);
		// m_txtBallPower.text = m_GameData.BallShootPower.ToString();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___m_txtBallPower_17;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_2 = __this->___m_GameData_22;
		NullCheck(L_2);
		int32_t* L_3 = (&L_2->___BallShootPower_1);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		NullCheck(L_1);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_1, L_4, NULL);
		// m_txtPointPerGoal.text = m_GameData.ScorePointPerGoal.ToString();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->___m_txtPointPerGoal_18;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_6 = __this->___m_GameData_22;
		NullCheck(L_6);
		int32_t* L_7 = (&L_6->___ScorePointPerGoal_0);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		NullCheck(L_5);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_5, L_8, NULL);
		// m_txtStatu.text = Constants.c_JsonStatuLoadSuccess;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___m_txtStatu_19;
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, _stringLiteral5A1CB1D0A4EE36EE20A966AAF8F79CD0B960B890);
		// }
		return;
	}
}
// System.Void MainMenuView::SaveDataToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuView_SaveDataToJson_m082A6894A537B7A86AC1400962F1D1F771E06773 (MainMenuView_t0683229FCA1D2E67D4324BB73A987442BF21AC9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBED0E95CBD82BCFD4D2C4D25FFD4EC73C18AF021);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_GameData.BallShootPower =  Int32.Parse(m_txtBallPower.text);
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_0 = __this->___m_GameData_22;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___m_txtBallPower_17;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_1, NULL);
		int32_t L_3;
		L_3 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_2, NULL);
		NullCheck(L_0);
		L_0->___BallShootPower_1 = L_3;
		// m_GameData.ScorePointPerGoal = Int32.Parse(m_txtPointPerGoal.text);
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_4 = __this->___m_GameData_22;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->___m_txtPointPerGoal_18;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_5, NULL);
		int32_t L_7;
		L_7 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_6, NULL);
		NullCheck(L_4);
		L_4->___ScorePointPerGoal_0 = L_7;
		// SaveLoadManager.Save(m_GameData);
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_8 = __this->___m_GameData_22;
		SaveLoadManager_Save_m3A501371B32EDC8A85DDA0E9B19EB633F9035B21(L_8, NULL);
		// m_txtBallPower.text = String.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_9 = __this->___m_txtBallPower_17;
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_9);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_9, L_10, NULL);
		// m_txtPointPerGoal.text = String.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_11 = __this->___m_txtPointPerGoal_18;
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_11);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_11, L_12, NULL);
		// m_txtStatu.text = Constants.c_JsonStatuSaveSuccess;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___m_txtStatu_19;
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteralBED0E95CBD82BCFD4D2C4D25FFD4EC73C18AF021);
		// }
		return;
	}
}
// System.Void MainMenuView::SetGameData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuView_SetGameData_mF92DF62535F4DA83A2CB595468687AC39704FA83 (MainMenuView_t0683229FCA1D2E67D4324BB73A987442BF21AC9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mAC9DF11E32326AC2D20BC2ED3F0B0E38A5FB548F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mB21628D314EBC540E3AE9BE7A8EF27532D14F5C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t57146DEC2403B0DC891826D5FF9CBD3A240BB726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tAB8900DF126641F42134EDEB430B6D866841F00A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F5E5900D4441B39940CA155B6DEE3835D8C85D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerManager.Instance.ForceMultiplier = m_GameData.BallShootPower;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tAB8900DF126641F42134EDEB430B6D866841F00A_il2cpp_TypeInfo_var);
		PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* L_0;
		L_0 = Singleton_1_get_Instance_mB21628D314EBC540E3AE9BE7A8EF27532D14F5C0(Singleton_1_get_Instance_mB21628D314EBC540E3AE9BE7A8EF27532D14F5C0_RuntimeMethod_var);
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_1 = __this->___m_GameData_22;
		NullCheck(L_1);
		int32_t L_2 = L_1->___BallShootPower_1;
		NullCheck(L_0);
		PlayerManager_set_ForceMultiplier_m6C8DDFB7DECCC8CA3BE10F118B41D5E801B9BD15_inline(L_0, L_2, NULL);
		// LevelManager.Instance.SetNewPointForGoalArea(m_GameData.ScorePointPerGoal);
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t57146DEC2403B0DC891826D5FF9CBD3A240BB726_il2cpp_TypeInfo_var);
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_3;
		L_3 = Singleton_1_get_Instance_mAC9DF11E32326AC2D20BC2ED3F0B0E38A5FB548F(Singleton_1_get_Instance_mAC9DF11E32326AC2D20BC2ED3F0B0E38A5FB548F_RuntimeMethod_var);
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_4 = __this->___m_GameData_22;
		NullCheck(L_4);
		int32_t L_5 = L_4->___ScorePointPerGoal_0;
		NullCheck(L_3);
		LevelManager_SetNewPointForGoalArea_mBE82E2D2512CF8A1061027DC845E7A584A1C6E2C(L_3, L_5, NULL);
		// m_txtStatu.text = Constants.c_DataSetSuccess;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___m_txtStatu_19;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteral9F5E5900D4441B39940CA155B6DEE3835D8C85D8);
		// }
		return;
	}
}
// System.Void MainMenuView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuView__ctor_m335E7A60FAE6CE4EC0E85FED4E844D13EA5B6199 (MainMenuView_t0683229FCA1D2E67D4324BB73A987442BF21AC9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&View_1__ctor_mB153BF8D371DC9A7E2B3A0F22BF6699AE5907131_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private GameData m_GameData = new GameData();
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_0 = (GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6*)il2cpp_codegen_object_new(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameData__ctor_mA9048174D2C20A10AD865A4B919045878E27099A(L_0, NULL);
		__this->___m_GameData_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GameData_22), (void*)L_0);
		View_1__ctor_mB153BF8D371DC9A7E2B3A0F22BF6699AE5907131(__this, View_1__ctor_mB153BF8D371DC9A7E2B3A0F22BF6699AE5907131_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SaveLoadManager::Save(GameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadManager_Save_m3A501371B32EDC8A85DDA0E9B19EB633F9035B21 (GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ____GameData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FDD6A72C045A824BF00D656508FDDFC1BFCBCEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC483341BB1E174FA270288B05C529F3871C8974);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		// string fullPath = Application.persistentDataPath + Constants.c_directory + Constants.c_fileName;
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteralEC483341BB1E174FA270288B05C529F3871C8974, NULL);
		// string gameData = JsonUtility.ToJson(_GameData);
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_2 = ____GameData0;
		String_t* L_3;
		L_3 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_2, NULL);
		V_0 = L_3;
		// if (!File.Exists(fullPath))
		String_t* L_4 = L_1;
		bool L_5;
		L_5 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_4, NULL);
		G_B1_0 = L_4;
		if (L_5)
		{
			G_B2_0 = L_4;
			goto IL_0033;
		}
	}
	{
		// Directory.CreateDirectory(Application.persistentDataPath + Constants.c_directory);
		String_t* L_6;
		L_6 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_6, _stringLiteral9FDD6A72C045A824BF00D656508FDDFC1BFCBCEF, NULL);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_8;
		L_8 = Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2(L_7, NULL);
		G_B2_0 = G_B1_0;
	}

IL_0033:
	{
		// File.WriteAllText(fullPath, gameData);
		String_t* L_9 = V_0;
		File_WriteAllText_mE462D8448CA65183AA5D464210706167E0EF19EB(G_B2_0, L_9, NULL);
		// }
		return;
	}
}
// GameData SaveLoadManager::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* SaveLoadManager_Load_m7652FFB647822ED5F256603C39A8543B2AA3D42B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisGameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_mB389D0CF42794EF04C41D868300A3359FB425ACD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC483341BB1E174FA270288B05C529F3871C8974);
		s_Il2CppMethodInitialized = true;
	}
	GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// GameData templateData = new GameData();
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_0 = (GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6*)il2cpp_codegen_object_new(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameData__ctor_mA9048174D2C20A10AD865A4B919045878E27099A(L_0, NULL);
		V_0 = L_0;
		// string fullPath = Application.persistentDataPath + Constants.c_directory + Constants.c_fileName;
		String_t* L_1;
		L_1 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_1, _stringLiteralEC483341BB1E174FA270288B05C529F3871C8974, NULL);
		V_1 = L_2;
		// if (File.Exists(fullPath))
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_3, NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// string json = File.ReadAllText(fullPath);
		String_t* L_5 = V_1;
		String_t* L_6;
		L_6 = File_ReadAllText_m5635BE83C14358AB1721547180F43103F777CEB5(L_5, NULL);
		// templateData  = JsonUtility.FromJson<GameData>(json);
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_7;
		L_7 = JsonUtility_FromJson_TisGameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_mB389D0CF42794EF04C41D868300A3359FB425ACD(L_6, JsonUtility_FromJson_TisGameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_mB389D0CF42794EF04C41D868300A3359FB425ACD_RuntimeMethod_var);
		V_0 = L_7;
		// return templateData;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_8 = V_0;
		return L_8;
	}

IL_002c:
	{
		// return templateData;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnTargetShoot_Invoke_m6A8D717597E22EE9D88B2B8CC306F4F0CCA77D6C_inline (OnTargetShoot_tF2FD0B4C33A4785C13B2906B2A93EE8F703EFEFC* __this, int32_t ____Point0, int32_t ____Type1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ____Point0, ____Type1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnShoot_Invoke_mE6EAADBA6C882AE1D2343BD01B52E208B166A177_inline (OnShoot_tA159F753C948F6F21A18A68FF9CB5FFF64A6F29C* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_currentPhase_m2F78A1B3F4AE40AE951D113146286BA723789508_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public GamePhase currentPhase { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CcurrentPhaseU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnGamePhaseChanged_Invoke_mBCDD59F98828FCC5EA178E2BD0653A7097FCBD00_inline (OnGamePhaseChanged_t6D2F1C2B8E5D25CB30667D0AF63B09AA4E0CC4A1* __this, int32_t ____GamePhase0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ____GamePhase0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GamePlayView_get_LevelPoint_m07829F6C2A974DBF5322CE73B9BE82D8E6888F65_inline (GamePlayView_t1E473B4A35EC55E6955CEDD7D4EDBF5E017DFADD* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_pointOfLevel; }
		int32_t L_0 = __this->___m_pointOfLevel_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_currentPhase_m5A8C0BFBD6B904FDE25CDFA6DF74C176DDD1E271_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// public GamePhase currentPhase { get; private set; }
		int32_t L_0 = __this->___U3CcurrentPhaseU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerManager_set_ForceMultiplier_m6C8DDFB7DECCC8CA3BE10F118B41D5E801B9BD15_inline (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_forceMultiplierFromJson = value; }
		int32_t L_0 = ___value0;
		__this->___m_forceMultiplierFromJson_21 = L_0;
		// set { m_forceMultiplierFromJson = value; }
		return;
	}
}
