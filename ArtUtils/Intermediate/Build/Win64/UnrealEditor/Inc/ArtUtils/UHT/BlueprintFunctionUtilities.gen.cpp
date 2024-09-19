// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArtUtils/Public/BlueprintFunctionUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintFunctionUtilities() {}

// Begin Cross Module References
ARTUTILS_API UClass* Z_Construct_UClass_UBlueprintFunctionUtilities();
ARTUTILS_API UClass* Z_Construct_UClass_UBlueprintFunctionUtilities_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArtUtils();
// End Cross Module References

// Begin Class UBlueprintFunctionUtilities Function GetStreamingLevels
struct Z_Construct_UFunction_UBlueprintFunctionUtilities_GetStreamingLevels_Statics
{
	struct BlueprintFunctionUtilities_eventGetStreamingLevels_Parms
	{
		TArray<ULevelStreaming*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArtUtils" },
		{ "ModuleRelativePath", "Public/BlueprintFunctionUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintFunctionUtilities_GetStreamingLevels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintFunctionUtilities_GetStreamingLevels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintFunctionUtilities_eventGetStreamingLevels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFunctionUtilities_GetStreamingLevels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionUtilities_GetStreamingLevels_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionUtilities_GetStreamingLevels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionUtilities_GetStreamingLevels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFunctionUtilities_GetStreamingLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFunctionUtilities, nullptr, "GetStreamingLevels", nullptr, nullptr, Z_Construct_UFunction_UBlueprintFunctionUtilities_GetStreamingLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionUtilities_GetStreamingLevels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintFunctionUtilities_GetStreamingLevels_Statics::BlueprintFunctionUtilities_eventGetStreamingLevels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionUtilities_GetStreamingLevels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintFunctionUtilities_GetStreamingLevels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintFunctionUtilities_GetStreamingLevels_Statics::BlueprintFunctionUtilities_eventGetStreamingLevels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintFunctionUtilities_GetStreamingLevels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFunctionUtilities_GetStreamingLevels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintFunctionUtilities::execGetStreamingLevels)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ULevelStreaming*>*)Z_Param__Result=UBlueprintFunctionUtilities::GetStreamingLevels();
	P_NATIVE_END;
}
// End Class UBlueprintFunctionUtilities Function GetStreamingLevels

// Begin Class UBlueprintFunctionUtilities Function LoadEditorLevelStreaming
struct Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreaming_Statics
{
	struct BlueprintFunctionUtilities_eventLoadEditorLevelStreaming_Parms
	{
		ULevelStreaming* LevelStreaming;
		bool Load;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArtUtils" },
		{ "ModuleRelativePath", "Public/BlueprintFunctionUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelStreaming;
	static void NewProp_Load_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Load;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreaming_Statics::NewProp_LevelStreaming = { "LevelStreaming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintFunctionUtilities_eventLoadEditorLevelStreaming_Parms, LevelStreaming), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreaming_Statics::NewProp_Load_SetBit(void* Obj)
{
	((BlueprintFunctionUtilities_eventLoadEditorLevelStreaming_Parms*)Obj)->Load = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreaming_Statics::NewProp_Load = { "Load", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintFunctionUtilities_eventLoadEditorLevelStreaming_Parms), &Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreaming_Statics::NewProp_Load_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreaming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreaming_Statics::NewProp_LevelStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreaming_Statics::NewProp_Load,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreaming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFunctionUtilities, nullptr, "LoadEditorLevelStreaming", nullptr, nullptr, Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreaming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreaming_Statics::BlueprintFunctionUtilities_eventLoadEditorLevelStreaming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreaming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreaming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreaming_Statics::BlueprintFunctionUtilities_eventLoadEditorLevelStreaming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreaming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreaming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintFunctionUtilities::execLoadEditorLevelStreaming)
{
	P_GET_OBJECT(ULevelStreaming,Z_Param_LevelStreaming);
	P_GET_UBOOL(Z_Param_Load);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBlueprintFunctionUtilities::LoadEditorLevelStreaming(Z_Param_LevelStreaming,Z_Param_Load);
	P_NATIVE_END;
}
// End Class UBlueprintFunctionUtilities Function LoadEditorLevelStreaming

// Begin Class UBlueprintFunctionUtilities Function LoadEditorLevelStreamingByName
struct Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreamingByName_Statics
{
	struct BlueprintFunctionUtilities_eventLoadEditorLevelStreamingByName_Parms
	{
		FString LevelStreamName;
		bool Load;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArtUtils" },
		{ "ModuleRelativePath", "Public/BlueprintFunctionUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelStreamName;
	static void NewProp_Load_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Load;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreamingByName_Statics::NewProp_LevelStreamName = { "LevelStreamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintFunctionUtilities_eventLoadEditorLevelStreamingByName_Parms, LevelStreamName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreamingByName_Statics::NewProp_Load_SetBit(void* Obj)
{
	((BlueprintFunctionUtilities_eventLoadEditorLevelStreamingByName_Parms*)Obj)->Load = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreamingByName_Statics::NewProp_Load = { "Load", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintFunctionUtilities_eventLoadEditorLevelStreamingByName_Parms), &Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreamingByName_Statics::NewProp_Load_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreamingByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreamingByName_Statics::NewProp_LevelStreamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreamingByName_Statics::NewProp_Load,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreamingByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreamingByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFunctionUtilities, nullptr, "LoadEditorLevelStreamingByName", nullptr, nullptr, Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreamingByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreamingByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreamingByName_Statics::BlueprintFunctionUtilities_eventLoadEditorLevelStreamingByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreamingByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreamingByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreamingByName_Statics::BlueprintFunctionUtilities_eventLoadEditorLevelStreamingByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreamingByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreamingByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintFunctionUtilities::execLoadEditorLevelStreamingByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LevelStreamName);
	P_GET_UBOOL(Z_Param_Load);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBlueprintFunctionUtilities::LoadEditorLevelStreamingByName(Z_Param_LevelStreamName,Z_Param_Load);
	P_NATIVE_END;
}
// End Class UBlueprintFunctionUtilities Function LoadEditorLevelStreamingByName

// Begin Class UBlueprintFunctionUtilities
void UBlueprintFunctionUtilities::StaticRegisterNativesUBlueprintFunctionUtilities()
{
	UClass* Class = UBlueprintFunctionUtilities::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetStreamingLevels", &UBlueprintFunctionUtilities::execGetStreamingLevels },
		{ "LoadEditorLevelStreaming", &UBlueprintFunctionUtilities::execLoadEditorLevelStreaming },
		{ "LoadEditorLevelStreamingByName", &UBlueprintFunctionUtilities::execLoadEditorLevelStreamingByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintFunctionUtilities);
UClass* Z_Construct_UClass_UBlueprintFunctionUtilities_NoRegister()
{
	return UBlueprintFunctionUtilities::StaticClass();
}
struct Z_Construct_UClass_UBlueprintFunctionUtilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BlueprintFunctionUtilities.h" },
		{ "ModuleRelativePath", "Public/BlueprintFunctionUtilities.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintFunctionUtilities_GetStreamingLevels, "GetStreamingLevels" }, // 1504963559
		{ &Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreaming, "LoadEditorLevelStreaming" }, // 1948198152
		{ &Z_Construct_UFunction_UBlueprintFunctionUtilities_LoadEditorLevelStreamingByName, "LoadEditorLevelStreamingByName" }, // 3012643858
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintFunctionUtilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlueprintFunctionUtilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ArtUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintFunctionUtilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintFunctionUtilities_Statics::ClassParams = {
	&UBlueprintFunctionUtilities::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintFunctionUtilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintFunctionUtilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintFunctionUtilities()
{
	if (!Z_Registration_Info_UClass_UBlueprintFunctionUtilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintFunctionUtilities.OuterSingleton, Z_Construct_UClass_UBlueprintFunctionUtilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintFunctionUtilities.OuterSingleton;
}
template<> ARTUTILS_API UClass* StaticClass<UBlueprintFunctionUtilities>()
{
	return UBlueprintFunctionUtilities::StaticClass();
}
UBlueprintFunctionUtilities::UBlueprintFunctionUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintFunctionUtilities);
UBlueprintFunctionUtilities::~UBlueprintFunctionUtilities() {}
// End Class UBlueprintFunctionUtilities

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Joan_Documents_UnrealProjects_Empty5_4_Plugins_ArtUtils_Source_ArtUtils_Public_BlueprintFunctionUtilities_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintFunctionUtilities, UBlueprintFunctionUtilities::StaticClass, TEXT("UBlueprintFunctionUtilities"), &Z_Registration_Info_UClass_UBlueprintFunctionUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintFunctionUtilities), 3113519626U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Joan_Documents_UnrealProjects_Empty5_4_Plugins_ArtUtils_Source_ArtUtils_Public_BlueprintFunctionUtilities_h_2972609886(TEXT("/Script/ArtUtils"),
	Z_CompiledInDeferFile_FID_Users_Joan_Documents_UnrealProjects_Empty5_4_Plugins_ArtUtils_Source_ArtUtils_Public_BlueprintFunctionUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Joan_Documents_UnrealProjects_Empty5_4_Plugins_ArtUtils_Source_ArtUtils_Public_BlueprintFunctionUtilities_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
