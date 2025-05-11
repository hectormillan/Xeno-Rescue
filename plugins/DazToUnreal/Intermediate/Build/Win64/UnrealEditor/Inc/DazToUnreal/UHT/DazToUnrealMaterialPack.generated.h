// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DazToUnrealMaterialPack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAZTOUNREAL_DazToUnrealMaterialPack_generated_h
#error "DazToUnrealMaterialPack.generated.h already included, missing '#pragma once' in DazToUnrealMaterialPack.h"
#endif
#define DAZTOUNREAL_DazToUnrealMaterialPack_generated_h

#define FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics; \
	DAZTOUNREAL_API static class UScriptStruct* StaticStruct();


template<> DAZTOUNREAL_API UScriptStruct* StaticStruct<struct FDazMaterialMappingInfo>();

#define FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_47_SPARSE_DATA
#define FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_47_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_47_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_47_RPC_WRAPPERS
#define FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_47_ACCESSORS
#define FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUDazToUnrealMaterialPack(); \
	friend struct Z_Construct_UClass_UDazToUnrealMaterialPack_Statics; \
public: \
	DECLARE_CLASS(UDazToUnrealMaterialPack, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DazToUnreal"), NO_API) \
	DECLARE_SERIALIZER(UDazToUnrealMaterialPack)


#define FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDazToUnrealMaterialPack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDazToUnrealMaterialPack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDazToUnrealMaterialPack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDazToUnrealMaterialPack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDazToUnrealMaterialPack(UDazToUnrealMaterialPack&&); \
	NO_API UDazToUnrealMaterialPack(const UDazToUnrealMaterialPack&); \
public: \
	NO_API virtual ~UDazToUnrealMaterialPack();


#define FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_44_PROLOG
#define FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_47_SPARSE_DATA \
	FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_47_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_47_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_47_RPC_WRAPPERS \
	FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_47_ACCESSORS \
	FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_47_INCLASS \
	FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAZTOUNREAL_API UClass* StaticClass<class UDazToUnrealMaterialPack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h


#define FOREACH_ENUM_EDAZMATERIALTYPE(op) \
	op(EDazMaterialType::Base) \
	op(EDazMaterialType::Alpha) \
	op(EDazMaterialType::Masked) \
	op(EDazMaterialType::Skin) \
	op(EDazMaterialType::Hair) \
	op(EDazMaterialType::Scalp) \
	op(EDazMaterialType::EyeMoisture) \
	op(EDazMaterialType::Cornea) \
	op(EDazMaterialType::NoDraw) 

enum class EDazMaterialType : uint8;
template<> struct TIsUEnumClass<EDazMaterialType> { enum { Value = true }; };
template<> DAZTOUNREAL_API UEnum* StaticEnum<EDazMaterialType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
