// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DazToUnreal/Public/DazToUnrealMaterialPack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDazToUnrealMaterialPack() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DAZTOUNREAL_API UClass* Z_Construct_UClass_UDazToUnrealMaterialPack();
	DAZTOUNREAL_API UClass* Z_Construct_UClass_UDazToUnrealMaterialPack_NoRegister();
	DAZTOUNREAL_API UEnum* Z_Construct_UEnum_DazToUnreal_EDazMaterialType();
	DAZTOUNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FDazMaterialMappingInfo();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_DazToUnreal();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDazMaterialType;
	static UEnum* EDazMaterialType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDazMaterialType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDazMaterialType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DazToUnreal_EDazMaterialType, (UObject*)Z_Construct_UPackage__Script_DazToUnreal(), TEXT("EDazMaterialType"));
		}
		return Z_Registration_Info_UEnum_EDazMaterialType.OuterSingleton;
	}
	template<> DAZTOUNREAL_API UEnum* StaticEnum<EDazMaterialType>()
	{
		return EDazMaterialType_StaticEnum();
	}
	struct Z_Construct_UEnum_DazToUnreal_EDazMaterialType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DazToUnreal_EDazMaterialType_Statics::Enumerators[] = {
		{ "EDazMaterialType::Base", (int64)EDazMaterialType::Base },
		{ "EDazMaterialType::Alpha", (int64)EDazMaterialType::Alpha },
		{ "EDazMaterialType::Masked", (int64)EDazMaterialType::Masked },
		{ "EDazMaterialType::Skin", (int64)EDazMaterialType::Skin },
		{ "EDazMaterialType::Hair", (int64)EDazMaterialType::Hair },
		{ "EDazMaterialType::Scalp", (int64)EDazMaterialType::Scalp },
		{ "EDazMaterialType::EyeMoisture", (int64)EDazMaterialType::EyeMoisture },
		{ "EDazMaterialType::Cornea", (int64)EDazMaterialType::Cornea },
		{ "EDazMaterialType::NoDraw", (int64)EDazMaterialType::NoDraw },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DazToUnreal_EDazMaterialType_Statics::Enum_MetaDataParams[] = {
		{ "Alpha.Name", "EDazMaterialType::Alpha" },
		{ "Base.Name", "EDazMaterialType::Base" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Permitted spline point types for SplineComponent. */" },
		{ "Cornea.Name", "EDazMaterialType::Cornea" },
		{ "EyeMoisture.Name", "EDazMaterialType::EyeMoisture" },
		{ "Hair.Name", "EDazMaterialType::Hair" },
		{ "Masked.Name", "EDazMaterialType::Masked" },
		{ "ModuleRelativePath", "Public/DazToUnrealMaterialPack.h" },
		{ "NoDraw.Name", "EDazMaterialType::NoDraw" },
		{ "Scalp.Name", "EDazMaterialType::Scalp" },
		{ "Skin.Name", "EDazMaterialType::Skin" },
		{ "ToolTip", "Permitted spline point types for SplineComponent." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DazToUnreal_EDazMaterialType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DazToUnreal,
		nullptr,
		"EDazMaterialType",
		"EDazMaterialType",
		Z_Construct_UEnum_DazToUnreal_EDazMaterialType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DazToUnreal_EDazMaterialType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DazToUnreal_EDazMaterialType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DazToUnreal_EDazMaterialType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DazToUnreal_EDazMaterialType()
	{
		if (!Z_Registration_Info_UEnum_EDazMaterialType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDazMaterialType.InnerSingleton, Z_Construct_UEnum_DazToUnreal_EDazMaterialType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDazMaterialType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DazMaterialMappingInfo;
class UScriptStruct* FDazMaterialMappingInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DazMaterialMappingInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DazMaterialMappingInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDazMaterialMappingInfo, (UObject*)Z_Construct_UPackage__Script_DazToUnreal(), TEXT("DazMaterialMappingInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DazMaterialMappingInfo.OuterSingleton;
}
template<> DAZTOUNREAL_API UScriptStruct* StaticStruct<FDazMaterialMappingInfo>()
{
	return FDazMaterialMappingInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DazShaderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DazShaderName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DazToUnrealMaterialPack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDazMaterialMappingInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_DazShaderName_MetaData[] = {
		{ "Category", "Material Mapping" },
		{ "Comment", "/** Needs to match the name of the shader from Daz Studio.  Examples: PBRSkin, Iray Uber, Daz Studio Default */" },
		{ "ModuleRelativePath", "Public/DazToUnrealMaterialPack.h" },
		{ "ToolTip", "Needs to match the name of the shader from Daz Studio.  Examples: PBRSkin, Iray Uber, Daz Studio Default" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_DazShaderName = { "DazShaderName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDazMaterialMappingInfo, DazShaderName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_DazShaderName_MetaData), Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_DazShaderName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialType_MetaData[] = {
		{ "Category", "Material Mapping" },
		{ "Comment", "/** Type of the material */" },
		{ "ModuleRelativePath", "Public/DazToUnrealMaterialPack.h" },
		{ "ToolTip", "Type of the material" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialType = { "MaterialType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDazMaterialMappingInfo, MaterialType), Z_Construct_UEnum_DazToUnreal_EDazMaterialType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialType_MetaData), Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialType_MetaData) }; // 3756387625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialPath_MetaData[] = {
		{ "AllowedClasses", "Material" },
		{ "Category", "Material Mapping" },
		{ "Comment", "/** Path to the material to use */" },
		{ "ModuleRelativePath", "Public/DazToUnrealMaterialPack.h" },
		{ "ToolTip", "Path to the material to use" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialPath = { "MaterialPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDazMaterialMappingInfo, MaterialPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialPath_MetaData), Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_DazShaderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DazToUnreal,
		nullptr,
		&NewStructOps,
		"DazMaterialMappingInfo",
		Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::PropPointers),
		sizeof(FDazMaterialMappingInfo),
		alignof(FDazMaterialMappingInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDazMaterialMappingInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_DazMaterialMappingInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DazMaterialMappingInfo.InnerSingleton, Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DazMaterialMappingInfo.InnerSingleton;
	}
	void UDazToUnrealMaterialPack::StaticRegisterNativesUDazToUnrealMaterialPack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDazToUnrealMaterialPack);
	UClass* Z_Construct_UClass_UDazToUnrealMaterialPack_NoRegister()
	{
		return UDazToUnrealMaterialPack::StaticClass();
	}
	struct Z_Construct_UClass_UDazToUnrealMaterialPack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DazToUnreal,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DazToUnrealMaterialPack.h" },
		{ "ModuleRelativePath", "Public/DazToUnrealMaterialPack.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDazMaterialMappingInfo, METADATA_PARAMS(0, nullptr) }; // 661755120
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Material Mapping" },
		{ "Comment", "/** The materials in this pack */" },
		{ "ModuleRelativePath", "Public/DazToUnrealMaterialPack.h" },
		{ "ToolTip", "The materials in this pack" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDazToUnrealMaterialPack, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::NewProp_Materials_MetaData), Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::NewProp_Materials_MetaData) }; // 661755120
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::NewProp_Materials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDazToUnrealMaterialPack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::ClassParams = {
		&UDazToUnrealMaterialPack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::Class_MetaDataParams), Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDazToUnrealMaterialPack()
	{
		if (!Z_Registration_Info_UClass_UDazToUnrealMaterialPack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDazToUnrealMaterialPack.OuterSingleton, Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDazToUnrealMaterialPack.OuterSingleton;
	}
	template<> DAZTOUNREAL_API UClass* StaticClass<UDazToUnrealMaterialPack>()
	{
		return UDazToUnrealMaterialPack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDazToUnrealMaterialPack);
	UDazToUnrealMaterialPack::~UDazToUnrealMaterialPack() {}
	struct Z_CompiledInDeferFile_FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_Statics::EnumInfo[] = {
		{ EDazMaterialType_StaticEnum, TEXT("EDazMaterialType"), &Z_Registration_Info_UEnum_EDazMaterialType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3756387625U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_Statics::ScriptStructInfo[] = {
		{ FDazMaterialMappingInfo::StaticStruct, Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewStructOps, TEXT("DazMaterialMappingInfo"), &Z_Registration_Info_UScriptStruct_DazMaterialMappingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDazMaterialMappingInfo), 661755120U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDazToUnrealMaterialPack, UDazToUnrealMaterialPack::StaticClass, TEXT("UDazToUnrealMaterialPack"), &Z_Registration_Info_UClass_UDazToUnrealMaterialPack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDazToUnrealMaterialPack), 3965386659U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_2061318889(TEXT("/Script/DazToUnreal"),
		Z_CompiledInDeferFile_FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealMaterialPack_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
