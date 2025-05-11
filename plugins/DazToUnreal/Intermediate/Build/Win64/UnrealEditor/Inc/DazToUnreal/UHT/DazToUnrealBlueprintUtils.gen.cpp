// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DazToUnreal/Public/DazToUnrealBlueprintUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDazToUnrealBlueprintUtils() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DAZTOUNREAL_API UClass* Z_Construct_UClass_UDazToUnrealBlueprintUtils();
	DAZTOUNREAL_API UClass* Z_Construct_UClass_UDazToUnrealBlueprintUtils_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DazToUnreal();
// End Cross Module References
	DEFINE_FUNCTION(UDazToUnrealBlueprintUtils::execGetChildBone)
	{
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParentBone);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UDazToUnrealBlueprintUtils::GetChildBone(Z_Param_Skeleton,Z_Param_ParentBone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDazToUnrealBlueprintUtils::execGetBoneList)
	{
		P_GET_OBJECT(UObject,Z_Param_IKRigObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UDazToUnrealBlueprintUtils::GetBoneList(Z_Param_IKRigObject);
		P_NATIVE_END;
	}
	void UDazToUnrealBlueprintUtils::StaticRegisterNativesUDazToUnrealBlueprintUtils()
	{
		UClass* Class = UDazToUnrealBlueprintUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoneList", &UDazToUnrealBlueprintUtils::execGetBoneList },
			{ "GetChildBone", &UDazToUnrealBlueprintUtils::execGetChildBone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics
	{
		struct DazToUnrealBlueprintUtils_eventGetBoneList_Parms
		{
			const UObject* IKRigObject;
			TArray<FName> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKRigObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IKRigObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics::NewProp_IKRigObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics::NewProp_IKRigObject = { "IKRigObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DazToUnrealBlueprintUtils_eventGetBoneList_Parms, IKRigObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics::NewProp_IKRigObject_MetaData), Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics::NewProp_IKRigObject_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DazToUnrealBlueprintUtils_eventGetBoneList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics::NewProp_IKRigObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics::Function_MetaDataParams[] = {
		{ "Category", "DazToUnrealUtils" },
		{ "Comment", "// Get the list of bones in an IKRig\n" },
		{ "ModuleRelativePath", "Public/DazToUnrealBlueprintUtils.h" },
		{ "ToolTip", "Get the list of bones in an IKRig" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDazToUnrealBlueprintUtils, nullptr, "GetBoneList", nullptr, nullptr, Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics::DazToUnrealBlueprintUtils_eventGetBoneList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics::DazToUnrealBlueprintUtils_eventGetBoneList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics
	{
		struct DazToUnrealBlueprintUtils_eventGetChildBone_Parms
		{
			const USkeleton* Skeleton;
			FName ParentBone;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentBone;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics::NewProp_Skeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DazToUnrealBlueprintUtils_eventGetChildBone_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics::NewProp_Skeleton_MetaData), Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics::NewProp_Skeleton_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics::NewProp_ParentBone = { "ParentBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DazToUnrealBlueprintUtils_eventGetChildBone_Parms, ParentBone), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DazToUnrealBlueprintUtils_eventGetChildBone_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics::NewProp_ParentBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "DazToUnrealUtils" },
		{ "Comment", "// Find the first child bone.  Used for IKRetargeter generation\n" },
		{ "ModuleRelativePath", "Public/DazToUnrealBlueprintUtils.h" },
		{ "ToolTip", "Find the first child bone.  Used for IKRetargeter generation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDazToUnrealBlueprintUtils, nullptr, "GetChildBone", nullptr, nullptr, Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics::DazToUnrealBlueprintUtils_eventGetChildBone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics::DazToUnrealBlueprintUtils_eventGetChildBone_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDazToUnrealBlueprintUtils);
	UClass* Z_Construct_UClass_UDazToUnrealBlueprintUtils_NoRegister()
	{
		return UDazToUnrealBlueprintUtils::StaticClass();
	}
	struct Z_Construct_UClass_UDazToUnrealBlueprintUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDazToUnrealBlueprintUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DazToUnreal,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDazToUnrealBlueprintUtils_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDazToUnrealBlueprintUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetBoneList, "GetBoneList" }, // 1365388683
		{ &Z_Construct_UFunction_UDazToUnrealBlueprintUtils_GetChildBone, "GetChildBone" }, // 638868749
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDazToUnrealBlueprintUtils_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDazToUnrealBlueprintUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DazToUnrealBlueprintUtils.h" },
		{ "ModuleRelativePath", "Public/DazToUnrealBlueprintUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDazToUnrealBlueprintUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDazToUnrealBlueprintUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDazToUnrealBlueprintUtils_Statics::ClassParams = {
		&UDazToUnrealBlueprintUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDazToUnrealBlueprintUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UDazToUnrealBlueprintUtils_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDazToUnrealBlueprintUtils()
	{
		if (!Z_Registration_Info_UClass_UDazToUnrealBlueprintUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDazToUnrealBlueprintUtils.OuterSingleton, Z_Construct_UClass_UDazToUnrealBlueprintUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDazToUnrealBlueprintUtils.OuterSingleton;
	}
	template<> DAZTOUNREAL_API UClass* StaticClass<UDazToUnrealBlueprintUtils>()
	{
		return UDazToUnrealBlueprintUtils::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDazToUnrealBlueprintUtils);
	UDazToUnrealBlueprintUtils::~UDazToUnrealBlueprintUtils() {}
	struct Z_CompiledInDeferFile_FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealBlueprintUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealBlueprintUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDazToUnrealBlueprintUtils, UDazToUnrealBlueprintUtils::StaticClass, TEXT("UDazToUnrealBlueprintUtils"), &Z_Registration_Info_UClass_UDazToUnrealBlueprintUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDazToUnrealBlueprintUtils), 3780123274U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealBlueprintUtils_h_4032950286(TEXT("/Script/DazToUnreal"),
		Z_CompiledInDeferFile_FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealBlueprintUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_DEPLOY_UE53_DazToUnreal_HostProject_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealBlueprintUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
