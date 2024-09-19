// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintFunctionUtilities.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelStreaming;
#ifdef ARTUTILS_BlueprintFunctionUtilities_generated_h
#error "BlueprintFunctionUtilities.generated.h already included, missing '#pragma once' in BlueprintFunctionUtilities.h"
#endif
#define ARTUTILS_BlueprintFunctionUtilities_generated_h

#define FID_Users_Joan_Documents_UnrealProjects_Empty5_4_Plugins_ArtUtils_Source_ArtUtils_Public_BlueprintFunctionUtilities_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStreamingLevels); \
	DECLARE_FUNCTION(execLoadEditorLevelStreamingByName); \
	DECLARE_FUNCTION(execLoadEditorLevelStreaming);


#define FID_Users_Joan_Documents_UnrealProjects_Empty5_4_Plugins_ArtUtils_Source_ArtUtils_Public_BlueprintFunctionUtilities_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintFunctionUtilities(); \
	friend struct Z_Construct_UClass_UBlueprintFunctionUtilities_Statics; \
public: \
	DECLARE_CLASS(UBlueprintFunctionUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArtUtils"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintFunctionUtilities)


#define FID_Users_Joan_Documents_UnrealProjects_Empty5_4_Plugins_ArtUtils_Source_ArtUtils_Public_BlueprintFunctionUtilities_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintFunctionUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintFunctionUtilities(UBlueprintFunctionUtilities&&); \
	UBlueprintFunctionUtilities(const UBlueprintFunctionUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintFunctionUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintFunctionUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintFunctionUtilities) \
	NO_API virtual ~UBlueprintFunctionUtilities();


#define FID_Users_Joan_Documents_UnrealProjects_Empty5_4_Plugins_ArtUtils_Source_ArtUtils_Public_BlueprintFunctionUtilities_h_12_PROLOG
#define FID_Users_Joan_Documents_UnrealProjects_Empty5_4_Plugins_ArtUtils_Source_ArtUtils_Public_BlueprintFunctionUtilities_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Joan_Documents_UnrealProjects_Empty5_4_Plugins_ArtUtils_Source_ArtUtils_Public_BlueprintFunctionUtilities_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Joan_Documents_UnrealProjects_Empty5_4_Plugins_ArtUtils_Source_ArtUtils_Public_BlueprintFunctionUtilities_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Joan_Documents_UnrealProjects_Empty5_4_Plugins_ArtUtils_Source_ArtUtils_Public_BlueprintFunctionUtilities_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTUTILS_API UClass* StaticClass<class UBlueprintFunctionUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Joan_Documents_UnrealProjects_Empty5_4_Plugins_ArtUtils_Source_ArtUtils_Public_BlueprintFunctionUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
