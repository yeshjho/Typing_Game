// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NATIVIZEDASSETS_Score_Blueprint__pf2132744816_generated_h
#error "Score_Blueprint__pf2132744816.generated.h already included, missing '#pragma once' in Score_Blueprint__pf2132744816.h"
#endif
#define NATIVIZEDASSETS_Score_Blueprint__pf2132744816_generated_h

#define Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__Spd_SpRate__pf) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__SpawnRate__pf); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__FallSpeed__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Spd_SpRate__pf(Z_Param_bpp__SpawnRate__pf,Z_Param_bpp__FallSpeed__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Score_Update__pf) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__Score_Add__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Score_Update__pf(Z_Param_bpp__Score_Add__pf); \
		P_NATIVE_END; \
	}


#define Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__Spd_SpRate__pf) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__SpawnRate__pf); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__FallSpeed__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Spd_SpRate__pf(Z_Param_bpp__SpawnRate__pf,Z_Param_bpp__FallSpeed__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Score_Update__pf) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__Score_Add__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Score_Update__pf(Z_Param_bpp__Score_Add__pf); \
		P_NATIVE_END; \
	}


#define Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_EVENT_PARMS
#define Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_CALLBACK_WRAPPERS \
	void eventbpf__UserConstructionScript__pf(); \



#define Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScore_Blueprint_C__pf2132744816(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AScore_Blueprint_C__pf2132744816(); \
public: \
	DECLARE_CLASS(AScore_Blueprint_C__pf2132744816, ATextRenderActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Blueprints/Score_Blueprint"), NO_API) \
	DECLARE_SERIALIZER(AScore_Blueprint_C__pf2132744816) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAScore_Blueprint_C__pf2132744816(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AScore_Blueprint_C__pf2132744816(); \
public: \
	DECLARE_CLASS(AScore_Blueprint_C__pf2132744816, ATextRenderActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Blueprints/Score_Blueprint"), NO_API) \
	DECLARE_SERIALIZER(AScore_Blueprint_C__pf2132744816) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AScore_Blueprint_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScore_Blueprint_C__pf2132744816) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScore_Blueprint_C__pf2132744816); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScore_Blueprint_C__pf2132744816); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScore_Blueprint_C__pf2132744816(AScore_Blueprint_C__pf2132744816&&); \
	NO_API AScore_Blueprint_C__pf2132744816(const AScore_Blueprint_C__pf2132744816&); \
public:


#define Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScore_Blueprint_C__pf2132744816(AScore_Blueprint_C__pf2132744816&&); \
	NO_API AScore_Blueprint_C__pf2132744816(const AScore_Blueprint_C__pf2132744816&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScore_Blueprint_C__pf2132744816); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScore_Blueprint_C__pf2132744816); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScore_Blueprint_C__pf2132744816)


#define Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_PRIVATE_PROPERTY_OFFSET
#define Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_6_PROLOG \
	Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_EVENT_PARMS


#define Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_PRIVATE_PROPERTY_OFFSET \
	Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_RPC_WRAPPERS \
	Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_CALLBACK_WRAPPERS \
	Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_INCLASS \
	Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_PRIVATE_PROPERTY_OFFSET \
	Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_CALLBACK_WRAPPERS \
	Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_INCLASS_NO_PURE_DECLS \
	Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h_10_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Practice_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Score_Blueprint__pf2132744816_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
