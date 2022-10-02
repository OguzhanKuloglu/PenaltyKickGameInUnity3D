#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// ES3Internal.ES3Member[]
struct ES3MemberU5BU5D_t5320E3A904B7810CCE7F613C15284E403EAEF8DC;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// ES3Reader
struct ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B;
// ES3Settings
struct ES3Settings_t65AC4582C03C21A9D3090FE498071C470A130BF2;
// ES3Types.ES3Type
struct ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE;
// ES3Types.ES3Type_MeshFilter
struct ES3Type_MeshFilter_t0E0076AB34A6FEB7271055F15BFF23F404718692;
// ES3Types.ES3Type_MeshRenderer
struct ES3Type_MeshRenderer_t77D2DF1271A375EB07D56D76CD0A2D7FD34EE1AF;
// ES3Types.ES3Type_MinMaxCurve
struct ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2;
// ES3Types.ES3Type_MinMaxGradient
struct ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A;

IL2CPP_EXTERN_C RuntimeClass* ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1F9261ABE85940E10CA48B7B42F1E5267F122734;
IL2CPP_EXTERN_C String_t* _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14;
IL2CPP_EXTERN_C String_t* _stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19;
IL2CPP_EXTERN_C String_t* _stringLiteral27906925D50A15B990B586241F08C8ED14226340;
IL2CPP_EXTERN_C String_t* _stringLiteral338DFB21C4BCDE10C2A6B0F6B758581AB45E283A;
IL2CPP_EXTERN_C String_t* _stringLiteral36587A0761A180514C267B50EA888F89871F71DF;
IL2CPP_EXTERN_C String_t* _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450;
IL2CPP_EXTERN_C String_t* _stringLiteral3EC42735CF07DB9169F6821DC94EB45DE6B5E1AA;
IL2CPP_EXTERN_C String_t* _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F;
IL2CPP_EXTERN_C String_t* _stringLiteral73792CCBAF937C765700AA0D7388BC226F003166;
IL2CPP_EXTERN_C String_t* _stringLiteral778102C3E486149200F26500543D0E817D018B30;
IL2CPP_EXTERN_C String_t* _stringLiteral82A38EB534B163662598A55A70842F5AA8919477;
IL2CPP_EXTERN_C String_t* _stringLiteral843D6122FFBBF465C80ECD6FDFC0DF88BEAF4E14;
IL2CPP_EXTERN_C String_t* _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A;
IL2CPP_EXTERN_C String_t* _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0;
IL2CPP_EXTERN_C String_t* _stringLiteral892582A238DF4FFEB2A2E7DD5D90A9A7AC6C26C4;
IL2CPP_EXTERN_C String_t* _stringLiteral8DD0A7170C2DECE4F5E82F96AB9B00AAEBA9F438;
IL2CPP_EXTERN_C String_t* _stringLiteral8F76FFC503D9127950E3EAD1DFD82A8C6C91F728;
IL2CPP_EXTERN_C String_t* _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186;
IL2CPP_EXTERN_C String_t* _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF;
IL2CPP_EXTERN_C String_t* _stringLiteralA0ECA3668A8B14855295BD8DD5E88309AF31330B;
IL2CPP_EXTERN_C String_t* _stringLiteralA61873D60BF9FB4C32F7EA140D55CF8C712B7E86;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12;
IL2CPP_EXTERN_C String_t* _stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F;
IL2CPP_EXTERN_C String_t* _stringLiteralBDBEBC1E8A863EAF2A1EFDC4D2393F1540ABF0C9;
IL2CPP_EXTERN_C String_t* _stringLiteralC8D7651AAAFAAA9A55123A4B14C546BC27C603E7;
IL2CPP_EXTERN_C String_t* _stringLiteralD0D915A2B403702AB1F18A340F6557F4030455A2;
IL2CPP_EXTERN_C String_t* _stringLiteralD4A11128F810D574390DA344F324014E964D1876;
IL2CPP_EXTERN_C String_t* _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D;
IL2CPP_EXTERN_C String_t* _stringLiteralDDA23639367EB0B86F361EA02AD294BDFDE6BA0B;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m88F5AE4F47F57108F2D11503B0CF0F3A8B39DE95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948_m21A35630F47AA42AB097D915807D6BD53CBF3CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_m2E281152A940F223547F05BA3E2942B1C8E0A1E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m6FD4650843988DE254D2352A149F9E0D7B56DA4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB_m1F66D8A5665BB474661ED5537E62D626955D6136_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisReflectionProbeUsage_t033508C14CD4AD926A3A215D19913DC21EA22705_mB304BCA0B08E6B3DC4277CD20BF0C7EAC55B336A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D_mF7F8CC6CE7025057CF127A89A9AE1DE8F3E37635_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m65C5A6DA0BFF389A8968C68CBF5690D521C379A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC522ADACDCFB77F66E3394A74AF1238A19DC5509_RuntimeMethod_var;

struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Reader
struct ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B  : public RuntimeObject
{
	// ES3Settings ES3Reader::settings
	ES3Settings_t65AC4582C03C21A9D3090FE498071C470A130BF2* ___settings_0;
	// System.Int32 ES3Reader::serializationDepth
	int32_t ___serializationDepth_1;
	// System.String ES3Reader::overridePropertiesName
	String_t* ___overridePropertiesName_2;
};

// ES3Types.ES3Type
struct ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE  : public RuntimeObject
{
	// ES3Internal.ES3Member[] ES3Types.ES3Type::members
	ES3MemberU5BU5D_t5320E3A904B7810CCE7F613C15284E403EAEF8DC* ___members_1;
	// System.Type ES3Types.ES3Type::type
	Type_t* ___type_2;
	// System.Boolean ES3Types.ES3Type::isPrimitive
	bool ___isPrimitive_3;
	// System.Boolean ES3Types.ES3Type::isValueType
	bool ___isValueType_4;
	// System.Boolean ES3Types.ES3Type::isCollection
	bool ___isCollection_5;
	// System.Boolean ES3Types.ES3Type::isDictionary
	bool ___isDictionary_6;
	// System.Boolean ES3Types.ES3Type::isEnum
	bool ___isEnum_7;
	// System.Boolean ES3Types.ES3Type::isES3TypeUnityObject
	bool ___isES3TypeUnityObject_8;
	// System.Boolean ES3Types.ES3Type::isReflectedType
	bool ___isReflectedType_9;
	// System.Boolean ES3Types.ES3Type::isUnsupported
	bool ___isUnsupported_10;
	// System.Int32 ES3Types.ES3Type::priority
	int32_t ___priority_11;
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

// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A  : public RuntimeObject
{
	// ES3Reader ES3Reader/ES3ReaderPropertyEnumerator::reader
	ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader_0;
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

// ES3Types.ES3ObjectType
struct ES3ObjectType_tED2C85C0990B4C915D41A74652D5396676911EB6  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

// ES3Types.ES3Type_AnimationCurve
struct ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_AnimationCurve::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_Color
struct ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Color::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_Gradient
struct ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Gradient::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_MinMaxCurve
struct ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MinMaxCurve::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_MinMaxGradient
struct ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MinMaxGradient::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_Vector4
struct ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector4::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_bool
struct ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_bool::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_float
struct ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_float::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_int
struct ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_int::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_string
struct ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_string::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// ES3Types.ES3UnityObjectType
struct ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6  : public ES3ObjectType_tED2C85C0990B4C915D41A74652D5396676911EB6
{
};

// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.ParticleSystem/MinMaxGradient
struct MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 
{
	// UnityEngine.ParticleSystemGradientMode UnityEngine.ParticleSystem/MinMaxGradient::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMin
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMin_1;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMax
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMax_2;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMin
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMin_3;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMax
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMax_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// ES3Types.ES3ComponentType
struct ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0  : public ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6
{
};

// ES3Types.ES3Type_GameObject
struct ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4  : public ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6
{
	// System.Boolean ES3Types.ES3Type_GameObject::saveChildren
	bool ___saveChildren_15;
};

struct ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_GameObject::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_14;
};

// ES3Types.ES3Type_Mesh
struct ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91  : public ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6
{
};

struct ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Mesh::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// ES3Types.ES3Type_MeshFilter
struct ES3Type_MeshFilter_t0E0076AB34A6FEB7271055F15BFF23F404718692  : public ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0
{
};

struct ES3Type_MeshFilter_t0E0076AB34A6FEB7271055F15BFF23F404718692_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MeshFilter::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_MeshRenderer
struct ES3Type_MeshRenderer_t77D2DF1271A375EB07D56D76CD0A2D7FD34EE1AF  : public ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0
{
};

struct ES3Type_MeshRenderer_t77D2DF1271A375EB07D56D76CD0A2D7FD34EE1AF_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MeshRenderer::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_Transform
struct ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7  : public ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0
{
};

struct ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_StaticFields
{
	// System.Int32 ES3Types.ES3Type_Transform::countRead
	int32_t ___countRead_13;
	// ES3Types.ES3Type ES3Types.ES3Type_Transform::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_14;
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Collections.IEnumerator ES3Reader/ES3ReaderPropertyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F (ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshRenderer::set_additionalVertexStreams(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshRenderer_set_additionalVertexStreams_m868D054ACBD5ECCE2B5B43781F7932F886B86379 (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightmapIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightmapIndex_mB6F2202FEC2ECBA3538EBDAEE17B073CEF2B5AB8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_realtimeLightmapIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_realtimeLightmapIndex_mE5684918EF41D05B218AEC5D6D3675B8A8F77389 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightmapScaleOffset(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightmapScaleOffset_m1F7EB461298380CCD8EE337F9AAAE40BE5B732A2 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_motionVectorGenerationMode(UnityEngine.MotionVectorGenerationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_motionVectorGenerationMode_m5768AC38CBBAD505E34281889682CA464ED3A32F (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_realtimeLightmapScaleOffset(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_realtimeLightmapScaleOffset_m391D14F3698B3D2BD88DC001931D261E5A3448E9 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightProbeUsage(UnityEngine.Rendering.LightProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightProbeUsage_mDCCD970DAC3546B32EF58876BABBD3353624F703 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightProbeProxyVolumeOverride(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightProbeProxyVolumeOverride_mEAF99A789A36BEDBAFCD2C2084578CF359587A21 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_probeAnchor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_probeAnchor_m0032C3CC1BBF36AC32FCCDE6F4A6F2CE73062327 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_reflectionProbeUsage(UnityEngine.Rendering.ReflectionProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_reflectionProbeUsage_m54A268EACA655AC3C66C4CD7F8C1EF3B41F3E008 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingLayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingLayerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingLayerID_m289E44FD06B6692C7B2ADD1189FE4FC013180C49 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_mode(UnityEngine.ParticleSystemCurveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curveMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curveMax(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curveMin(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constantMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constantMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constant(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_mode(UnityEngine.ParticleSystemGradientMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_gradientMax(UnityEngine.Gradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_gradientMin(UnityEngine.Gradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609 (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_colorMax(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33 (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_colorMin(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_gradient(UnityEngine.Gradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___value0, const RuntimeMethod* method) ;
// System.Void ES3Types.ES3Type_MeshFilter::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MeshFilter_ReadComponent_TisRuntimeObject_m958050D3E84BCC4C27D181DFBB1939B526FB3757_gshared (ES3Type_MeshFilter_t0E0076AB34A6FEB7271055F15BFF23F404718692* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m6FD4650843988DE254D2352A149F9E0D7B56DA4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var instance = (UnityEngine.MeshFilter)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5*)CastclassSealed((RuntimeObject*)L_0, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_il2cpp_TypeInfo_var));
		// foreach(string propertyName in reader.Properties)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_2;
					if (!L_5)
					{
						goto IL_005f;
					}
				}
				{
					RuntimeObject* L_6 = V_2;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_005f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0045_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				bool L_9;
				L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var)), _stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F, NULL);
				if (!L_9)
				{
					goto IL_003f_1;
				}
			}
			{
				// instance.sharedMesh = reader.Read<UnityEngine.Mesh>(ES3Type_Mesh.Instance);
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_10 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_11 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_12 = ((ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_11);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_13;
				L_13 = GenericVirtualFuncInvoker1< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m6FD4650843988DE254D2352A149F9E0D7B56DA4A_RuntimeMethod_var, L_11, L_12);
				NullCheck(L_10);
				MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_10, L_13, NULL);
				// break;
				goto IL_0045_1;
			}

IL_003f_1:
			{
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_14 = ___reader0;
				NullCheck(L_14);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_14);
			}

IL_0045_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_15 = V_1;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0060;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MeshRenderer::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MeshRenderer_ReadComponent_TisRuntimeObject_m96BFBD9C6BF4E8996020584F9A5A1B35167678D3_gshared (ES3Type_MeshRenderer_t77D2DF1271A375EB07D56D76CD0A2D7FD34EE1AF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m88F5AE4F47F57108F2D11503B0CF0F3A8B39DE95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948_m21A35630F47AA42AB097D915807D6BD53CBF3CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_m2E281152A940F223547F05BA3E2942B1C8E0A1E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m6FD4650843988DE254D2352A149F9E0D7B56DA4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB_m1F66D8A5665BB474661ED5537E62D626955D6136_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisReflectionProbeUsage_t033508C14CD4AD926A3A215D19913DC21EA22705_mB304BCA0B08E6B3DC4277CD20BF0C7EAC55B336A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D_mF7F8CC6CE7025057CF127A89A9AE1DE8F3E37635_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m65C5A6DA0BFF389A8968C68CBF5690D521C379A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC522ADACDCFB77F66E3394A74AF1238A19DC5509_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F9261ABE85940E10CA48B7B42F1E5267F122734);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral338DFB21C4BCDE10C2A6B0F6B758581AB45E283A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC42735CF07DB9169F6821DC94EB45DE6B5E1AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73792CCBAF937C765700AA0D7388BC226F003166);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82A38EB534B163662598A55A70842F5AA8919477);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843D6122FFBBF465C80ECD6FDFC0DF88BEAF4E14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral892582A238DF4FFEB2A2E7DD5D90A9A7AC6C26C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD0A7170C2DECE4F5E82F96AB9B00AAEBA9F438);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F76FFC503D9127950E3EAD1DFD82A8C6C91F728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0ECA3668A8B14855295BD8DD5E88309AF31330B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA61873D60BF9FB4C32F7EA140D55CF8C712B7E86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDBEBC1E8A863EAF2A1EFDC4D2393F1540ABF0C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8D7651AAAFAAA9A55123A4B14C546BC27C603E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0D915A2B403702AB1F18A340F6557F4030455A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDA23639367EB0B86F361EA02AD294BDFDE6BA0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		// var instance = (UnityEngine.MeshRenderer)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)CastclassClass((RuntimeObject*)L_0, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var));
		// foreach(string propertyName in reader.Properties)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0406:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_4;
					if (!L_5)
					{
						goto IL_0419;
					}
				}
				{
					RuntimeObject* L_6 = V_4;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0419:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_03f9_1;
			}

IL_0018_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				uint32_t L_10;
				L_10 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_9, NULL);
				V_3 = L_10;
				uint32_t L_11 = V_3;
				if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1039612288)))))
				{
					goto IL_00ba_1;
				}
			}
			{
				uint32_t L_12 = V_3;
				if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)394058932)))))
				{
					goto IL_007c_1;
				}
			}
			{
				uint32_t L_13 = V_3;
				if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)258071601)))))
				{
					goto IL_0061_1;
				}
			}
			{
				uint32_t L_14 = V_3;
				if ((((int32_t)L_14) == ((int32_t)((int32_t)49525662))))
				{
					goto IL_015b_1;
				}
			}
			{
				uint32_t L_15 = V_3;
				if ((((int32_t)L_15) == ((int32_t)((int32_t)258071601))))
				{
					goto IL_0257_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0061_1:
			{
				uint32_t L_16 = V_3;
				if ((((int32_t)L_16) == ((int32_t)((int32_t)369730773))))
				{
					goto IL_01af_1;
				}
			}
			{
				uint32_t L_17 = V_3;
				if ((((int32_t)L_17) == ((int32_t)((int32_t)394058932))))
				{
					goto IL_01d9_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_007c_1:
			{
				uint32_t L_18 = V_3;
				if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)594369155)))))
				{
					goto IL_009f_1;
				}
			}
			{
				uint32_t L_19 = V_3;
				if ((((int32_t)L_19) == ((int32_t)((int32_t)560621451))))
				{
					goto IL_0185_1;
				}
			}
			{
				uint32_t L_20 = V_3;
				if ((((int32_t)L_20) == ((int32_t)((int32_t)594369155))))
				{
					goto IL_0146_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_009f_1:
			{
				uint32_t L_21 = V_3;
				if ((((int32_t)L_21) == ((int32_t)((int32_t)899577978))))
				{
					goto IL_01c4_1;
				}
			}
			{
				uint32_t L_22 = V_3;
				if ((((int32_t)L_22) == ((int32_t)((int32_t)1039612288))))
				{
					goto IL_0242_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_00ba_1:
			{
				uint32_t L_23 = V_3;
				if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)2066010489)))))
				{
					goto IL_0100_1;
				}
			}
			{
				uint32_t L_24 = V_3;
				if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)1681590497)))))
				{
					goto IL_00e5_1;
				}
			}
			{
				uint32_t L_25 = V_3;
				if ((((int32_t)L_25) == ((int32_t)((int32_t)1435400483))))
				{
					goto IL_026c_1;
				}
			}
			{
				uint32_t L_26 = V_3;
				if ((((int32_t)L_26) == ((int32_t)((int32_t)1681590497))))
				{
					goto IL_0296_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_00e5_1:
			{
				uint32_t L_27 = V_3;
				if ((((int32_t)L_27) == ((int32_t)((int32_t)2056288458))))
				{
					goto IL_019a_1;
				}
			}
			{
				uint32_t L_28 = V_3;
				if ((((int32_t)L_28) == ((int32_t)((int32_t)2066010489))))
				{
					goto IL_01ee_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0100_1:
			{
				uint32_t L_29 = V_3;
				if ((!(((uint32_t)L_29) <= ((uint32_t)((int32_t)-879427281)))))
				{
					goto IL_0120_1;
				}
			}
			{
				uint32_t L_30 = V_3;
				if ((((int32_t)L_30) == ((int32_t)((int32_t)-1450632603))))
				{
					goto IL_0170_1;
				}
			}
			{
				uint32_t L_31 = V_3;
				if ((((int32_t)L_31) == ((int32_t)((int32_t)-879427281))))
				{
					goto IL_0203_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0120_1:
			{
				uint32_t L_32 = V_3;
				if ((((int32_t)L_32) == ((int32_t)((int32_t)-641088577))))
				{
					goto IL_022d_1;
				}
			}
			{
				uint32_t L_33 = V_3;
				if ((((int32_t)L_33) == ((int32_t)((int32_t)-170312451))))
				{
					goto IL_0281_1;
				}
			}
			{
				uint32_t L_34 = V_3;
				if ((((int32_t)L_34) == ((int32_t)((int32_t)-95858950))))
				{
					goto IL_0218_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0146_1:
			{
				String_t* L_35 = V_2;
				bool L_36;
				L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteralA61873D60BF9FB4C32F7EA140D55CF8C712B7E86, NULL);
				if (L_36)
				{
					goto IL_02ab_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_015b_1:
			{
				String_t* L_37 = V_2;
				bool L_38;
				L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
				if (L_38)
				{
					goto IL_02c1_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0170_1:
			{
				String_t* L_39 = V_2;
				bool L_40;
				L_40 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_39, _stringLiteralD0D915A2B403702AB1F18A340F6557F4030455A2, NULL);
				if (L_40)
				{
					goto IL_02d7_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0185_1:
			{
				String_t* L_41 = V_2;
				bool L_42;
				L_42 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_41, _stringLiteralDDA23639367EB0B86F361EA02AD294BDFDE6BA0B, NULL);
				if (L_42)
				{
					goto IL_02e8_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_019a_1:
			{
				String_t* L_43 = V_2;
				bool L_44;
				L_44 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_43, _stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19, NULL);
				if (L_44)
				{
					goto IL_02fe_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_01af_1:
			{
				String_t* L_45 = V_2;
				bool L_46;
				L_46 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_45, _stringLiteral82A38EB534B163662598A55A70842F5AA8919477, NULL);
				if (L_46)
				{
					goto IL_030f_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_01c4_1:
			{
				String_t* L_47 = V_2;
				bool L_48;
				L_48 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_47, _stringLiteral73792CCBAF937C765700AA0D7388BC226F003166, NULL);
				if (L_48)
				{
					goto IL_0325_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_01d9_1:
			{
				String_t* L_49 = V_2;
				bool L_50;
				L_50 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_49, _stringLiteralA0ECA3668A8B14855295BD8DD5E88309AF31330B, NULL);
				if (L_50)
				{
					goto IL_033b_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_01ee_1:
			{
				String_t* L_51 = V_2;
				bool L_52;
				L_52 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_51, _stringLiteral8DD0A7170C2DECE4F5E82F96AB9B00AAEBA9F438, NULL);
				if (L_52)
				{
					goto IL_0351_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0203_1:
			{
				String_t* L_53 = V_2;
				bool L_54;
				L_54 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_53, _stringLiteralBDBEBC1E8A863EAF2A1EFDC4D2393F1540ABF0C9, NULL);
				if (L_54)
				{
					goto IL_0362_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0218_1:
			{
				String_t* L_55 = V_2;
				bool L_56;
				L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral8F76FFC503D9127950E3EAD1DFD82A8C6C91F728, NULL);
				if (L_56)
				{
					goto IL_0378_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_022d_1:
			{
				String_t* L_57 = V_2;
				bool L_58;
				L_58 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_57, _stringLiteralC8D7651AAAFAAA9A55123A4B14C546BC27C603E7, NULL);
				if (L_58)
				{
					goto IL_0386_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0242_1:
			{
				String_t* L_59 = V_2;
				bool L_60;
				L_60 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_59, _stringLiteral338DFB21C4BCDE10C2A6B0F6B758581AB45E283A, NULL);
				if (L_60)
				{
					goto IL_0399_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0257_1:
			{
				String_t* L_61 = V_2;
				bool L_62;
				L_62 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_61, _stringLiteral843D6122FFBBF465C80ECD6FDFC0DF88BEAF4E14, NULL);
				if (L_62)
				{
					goto IL_03ac_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_026c_1:
			{
				String_t* L_63 = V_2;
				bool L_64;
				L_64 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_63, _stringLiteral3EC42735CF07DB9169F6821DC94EB45DE6B5E1AA, NULL);
				if (L_64)
				{
					goto IL_03ba_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0281_1:
			{
				String_t* L_65 = V_2;
				bool L_66;
				L_66 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_65, _stringLiteral892582A238DF4FFEB2A2E7DD5D90A9A7AC6C26C4, NULL);
				if (L_66)
				{
					goto IL_03cd_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0296_1:
			{
				String_t* L_67 = V_2;
				bool L_68;
				L_68 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_67, _stringLiteral1F9261ABE85940E10CA48B7B42F1E5267F122734, NULL);
				if (L_68)
				{
					goto IL_03e0_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_02ab_1:
			{
				// instance.additionalVertexStreams = reader.Read<UnityEngine.Mesh>(ES3Type_Mesh.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_69 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_70);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_72;
				L_72 = GenericVirtualFuncInvoker1< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m6FD4650843988DE254D2352A149F9E0D7B56DA4A_RuntimeMethod_var, L_70, L_71);
				NullCheck(L_69);
				MeshRenderer_set_additionalVertexStreams_m868D054ACBD5ECCE2B5B43781F7932F886B86379(L_69, L_72, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_02c1_1:
			{
				// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_73 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_74 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_75 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_74);
				bool L_76;
				L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_74, L_75);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_73);
				Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_73, L_76, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_02d7_1:
			{
				// instance.shadowCastingMode = reader.Read<UnityEngine.Rendering.ShadowCastingMode>();
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_77 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
				NullCheck(L_78);
				int32_t L_79;
				L_79 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D_mF7F8CC6CE7025057CF127A89A9AE1DE8F3E37635_RuntimeMethod_var, L_78);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_77);
				Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_77, L_79, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_02e8_1:
			{
				// instance.receiveShadows = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_80 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_81 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_82 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_81);
				bool L_83;
				L_83 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_81, L_82);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_80);
				Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_80, L_83, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_02fe_1:
			{
				// instance.sharedMaterials = reader.Read<UnityEngine.Material[]>();
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_84 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_85 = ___reader0;
				NullCheck(L_85);
				MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_86;
				L_86 = GenericVirtualFuncInvoker0< MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* >::Invoke(ES3Reader_Read_TisMaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_m2E281152A940F223547F05BA3E2942B1C8E0A1E3_RuntimeMethod_var, L_85);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_84);
				Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_84, L_86, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_030f_1:
			{
				// instance.lightmapIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_87 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_88);
				int32_t L_90;
				L_90 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_88, L_89);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_87);
				Renderer_set_lightmapIndex_mB6F2202FEC2ECBA3538EBDAEE17B073CEF2B5AB8((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_87, L_90, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_0325_1:
			{
				// instance.realtimeLightmapIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_91 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_92 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_93 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_92);
				int32_t L_94;
				L_94 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_92, L_93);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_91);
				Renderer_set_realtimeLightmapIndex_mE5684918EF41D05B218AEC5D6D3675B8A8F77389((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_91, L_94, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_033b_1:
			{
				// instance.lightmapScaleOffset = reader.Read<UnityEngine.Vector4>(ES3Type_Vector4.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_96 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_97 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_96);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_98;
				L_98 = GenericVirtualFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC522ADACDCFB77F66E3394A74AF1238A19DC5509_RuntimeMethod_var, L_96, L_97);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_95);
				Renderer_set_lightmapScaleOffset_m1F7EB461298380CCD8EE337F9AAAE40BE5B732A2((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_95, L_98, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_0351_1:
			{
				// instance.motionVectorGenerationMode = reader.Read<UnityEngine.MotionVectorGenerationMode>();
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_99 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___reader0;
				NullCheck(L_100);
				int32_t L_101;
				L_101 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisMotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB_m1F66D8A5665BB474661ED5537E62D626955D6136_RuntimeMethod_var, L_100);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_99);
				Renderer_set_motionVectorGenerationMode_m5768AC38CBBAD505E34281889682CA464ED3A32F((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_99, L_101, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_0362_1:
			{
				// instance.realtimeLightmapScaleOffset = reader.Read<UnityEngine.Vector4>(ES3Type_Vector4.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_102 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_104 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_103);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_105;
				L_105 = GenericVirtualFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC522ADACDCFB77F66E3394A74AF1238A19DC5509_RuntimeMethod_var, L_103, L_104);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_102);
				Renderer_set_realtimeLightmapScaleOffset_m391D14F3698B3D2BD88DC001931D261E5A3448E9((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_102, L_105, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_0378_1:
			{
				// instance.lightProbeUsage = reader.Read<UnityEngine.Rendering.LightProbeUsage>();
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_106 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_107 = ___reader0;
				NullCheck(L_107);
				int32_t L_108;
				L_108 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisLightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948_m21A35630F47AA42AB097D915807D6BD53CBF3CFB_RuntimeMethod_var, L_107);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_106);
				Renderer_set_lightProbeUsage_mDCCD970DAC3546B32EF58876BABBD3353624F703((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_106, L_108, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_0386_1:
			{
				// instance.lightProbeProxyVolumeOverride = reader.Read<UnityEngine.GameObject>(ES3Type_GameObject.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_109 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_110 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_111 = ((ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_110);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_112;
				L_112 = GenericVirtualFuncInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m88F5AE4F47F57108F2D11503B0CF0F3A8B39DE95_RuntimeMethod_var, L_110, L_111);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_109);
				Renderer_set_lightProbeProxyVolumeOverride_mEAF99A789A36BEDBAFCD2C2084578CF359587A21((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_109, L_112, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_0399_1:
			{
				// instance.probeAnchor = reader.Read<UnityEngine.Transform>(ES3Type_Transform.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_113 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_114 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_115 = ((ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_114);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116;
				L_116 = GenericVirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m65C5A6DA0BFF389A8968C68CBF5690D521C379A9_RuntimeMethod_var, L_114, L_115);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_113);
				Renderer_set_probeAnchor_m0032C3CC1BBF36AC32FCCDE6F4A6F2CE73062327((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_113, L_116, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_03ac_1:
			{
				// instance.reflectionProbeUsage = reader.Read<UnityEngine.Rendering.ReflectionProbeUsage>();
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_117 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_118 = ___reader0;
				NullCheck(L_118);
				int32_t L_119;
				L_119 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisReflectionProbeUsage_t033508C14CD4AD926A3A215D19913DC21EA22705_mB304BCA0B08E6B3DC4277CD20BF0C7EAC55B336A_RuntimeMethod_var, L_118);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_117);
				Renderer_set_reflectionProbeUsage_m54A268EACA655AC3C66C4CD7F8C1EF3B41F3E008((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_117, L_119, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_03ba_1:
			{
				// instance.sortingLayerName = reader.Read<System.String>(ES3Type_string.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_120 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_121 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_122 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_121);
				String_t* L_123;
				L_123 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_121, L_122);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_120);
				Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_120, L_123, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_03cd_1:
			{
				// instance.sortingLayerID = reader.Read<System.Int32>(ES3Type_int.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_124 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_125 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_126 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_125);
				int32_t L_127;
				L_127 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_125, L_126);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_124);
				Renderer_set_sortingLayerID_m289E44FD06B6692C7B2ADD1189FE4FC013180C49((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_124, L_127, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_03e0_1:
			{
				// instance.sortingOrder = reader.Read<System.Int32>(ES3Type_int.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_128 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_129 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_130 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_129);
				int32_t L_131;
				L_131 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_129, L_130);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_128);
				Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_128, L_131, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_03f3_1:
			{
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_132 = ___reader0;
				NullCheck(L_132);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_132);
			}

IL_03f9_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_133 = V_1;
				NullCheck(L_133);
				bool L_134;
				L_134 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_133);
				if (L_134)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_041a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_041a:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m2E23A591D18DC884526FF92BAD49C032A01E632E_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_32 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m84A7D41A581B1A824C8153B8FEAFADFE0D5DB22F_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_32 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B5BC622C3723AD1DB582A0F6E53C3A22F6DB9E8_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_32 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m527815E4237F9FAC57C3D03935416834DF2644BC_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_32 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3C1ACF05B2611C8A4D17D83945DC5AF929DDBACC_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_32 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m3DC74EF1F959CE98FEBF6531E405DEB772813BA6_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_32 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6B1F5B925879640308E9E698E8DD1023FBB6BEA6_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_32 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m6E788FCFA5DA10F69F994A36E969D641E5A8DD52_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_32 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mBBF124593C5CD3CEA596AB14DA83E4416A702C9D_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_32 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisRuntimeObject_m3660BC9515316A3ABFDD66EADFA37F291A6E4B14_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_32 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mBF4D6423FE3EEFFED53C8E68CADB86E206D2B630_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_32 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mB71C94FE365100AE20BA12B3F32622F557136799_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_32 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m74CC6993A8A6401973294A4EE878DA5101886331_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_32 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA7FA10B8E2A4EFB4C6B5761FDAAFDB1EEA7EF4BA_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_32 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m3E73BAB98E84842C6B0943E5004FB60F7F70DC21_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_32 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mBB070D90446E9C88A5AFCEC027B96974A8FA12D3_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_32 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m835857921667E5864DBC854D663F195938393F07_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_32 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m72CD5EA3170578D29EB653800E578EDCE631A03E_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_32 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m111814DF4DA06D5B9C69A29E1E932E636C2A2ECD_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_31 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_32 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_37 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_38 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_40 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_41 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_43 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_44 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_47 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_49 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_50 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisRuntimeObject_mFDDEE82B41C772BC46B25B9189B7D57F171FB87A_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m03D377F6193113C0BB46DB2F4D6261200A5EC2EA_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m966F3EC0EF8FC28F37A1D6B0A3E09AAF3D92B225_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m5ADC3E09C97E08B59601873C23DC60E1354E9129_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_mEF2602E61EE4223040DFB8E8E69FF5C3300769B0_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_mD7CE054CB0971ECD2BF0D426E2FF8D30BC52F343_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m5C4C0609DC53C8C230B212BD4859CC728129AE87_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mFAA74D6C32458BEF41BA5DFDF946C39EB4A4B180_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mCF7150521FB027C6800D60E9FD32FBAEE5AA6A0C_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_mFC5202B674A688E429908128BCC1BCAA3DAD6D3C_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_mC8906B5E2F2A78EDBECA0A60149C0A2C37E98F0C_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m583C5A29B6A003DFEF36BE3F1F3A239D24232A0A_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m4253242C84DDBB6B1E7075AD30F23A08611F3400_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_mCA4496E9A1329D434F0FB3B5561651B81A34CC9D_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m575DF1D5565121B8B215EAB6A4BDD98567EA2EAA_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_m1D92D581E84094387F0DFC90B611D7316C9FB8DB_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m2C3A7F6EA16560FB5D7C8F904B6BA4D864B60095_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m260592C7F6AD4FCCDE21F1634D9A0F22070F1ECF_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_mA6297B84BB85199732D9C660DD10D16DD8C77725_gshared (ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_mDB2EA9DC94E153636389B418974FB12A4B9707BC_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t160FAF0246EBCBDACA93D303A36A6E2090FA5733_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m186EB3D04D95C953ADB9ABDEEADBF8244F3ED286_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA416466C65384ACCDDF9115F166D3A065CE9EE04_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_28 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_31 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m49D6E91C6E27786E1C74658D2327C8D3C6C20FAB_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_28 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_31 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m14A60784E7F53317ED36DC8704BAE35E9E5316F1_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_28 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_31 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mAFA4300A0D3DDD916DCBC74CF732CD63E095D448_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_28 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_31 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m212F4D2D1D8AE29D8B9BEAF8F708F78A2770C40D_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_28 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_31 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m469978992C0569DED76F7CB9275B6CF4545A6D64_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_28 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_31 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7FBB7A68513D01159A082C78D7FBABCCF6CD4EB7_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_28 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_31 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m44001EB5F62E532D4D45F37C2D2A2C723D25E6D3_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_28 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_31 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mF8219F44E486A9F807C5CECDC3F9DC353FF3D46F_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_28 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_31 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisRuntimeObject_mCE05DCF6333C8909FB51723EE802C4FF692FD7FE_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_28 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_31 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m096847157BEB7D585EDE494156B0C1CE84C3AD1F_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_28 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_31 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m1CD69049D871CE0BAE19AA0C5FA2A73176FBB27A_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_28 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_31 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mD04F693E45552AF5769484F682D5CBD9B26CDFF8_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_28 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_31 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71D0B9F6A67799C841FA94DA3DEEC712B3C2DC09_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_28 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_31 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1ED08301B7BB2D11F2ACFCADB130765019D08714_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_28 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_31 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m90DAFA82E6D8A169F79B8CBB860A73A9CF630019_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_28 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_31 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m664777119857F4C419B4B81EF2813D5CB9EFB5DA_gshared (ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mFC18C1E8E1C6967C832F75AB46E4110F2D7854D1(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m4641CFF13327012D9E5738F7E5BA771E89128326_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_27 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_28 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_31 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_33 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_34 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tF895A2109649EB2A9C445652CA8E4C98A66318E5_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mC858EC37A2B40799000F9417F9AD7926375FC9A5_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
