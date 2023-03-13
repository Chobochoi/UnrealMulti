// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTICUBE_MultiCubeCharacter_generated_h
#error "MultiCubeCharacter.generated.h already included, missing '#pragma once' in MultiCubeCharacter.h"
#endif
#define MULTICUBE_MultiCubeCharacter_generated_h

#define MultiCube_Source_MultiCube_MultiCubeCharacter_h_12_SPARSE_DATA
#define MultiCube_Source_MultiCube_MultiCubeCharacter_h_12_RPC_WRAPPERS
#define MultiCube_Source_MultiCube_MultiCubeCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MultiCube_Source_MultiCube_MultiCubeCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiCubeCharacter(); \
	friend struct Z_Construct_UClass_AMultiCubeCharacter_Statics; \
public: \
	DECLARE_CLASS(AMultiCubeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiCube"), NO_API) \
	DECLARE_SERIALIZER(AMultiCubeCharacter)


#define MultiCube_Source_MultiCube_MultiCubeCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMultiCubeCharacter(); \
	friend struct Z_Construct_UClass_AMultiCubeCharacter_Statics; \
public: \
	DECLARE_CLASS(AMultiCubeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiCube"), NO_API) \
	DECLARE_SERIALIZER(AMultiCubeCharacter)


#define MultiCube_Source_MultiCube_MultiCubeCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMultiCubeCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiCubeCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiCubeCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiCubeCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiCubeCharacter(AMultiCubeCharacter&&); \
	NO_API AMultiCubeCharacter(const AMultiCubeCharacter&); \
public:


#define MultiCube_Source_MultiCube_MultiCubeCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiCubeCharacter(AMultiCubeCharacter&&); \
	NO_API AMultiCubeCharacter(const AMultiCubeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiCubeCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiCubeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiCubeCharacter)


#define MultiCube_Source_MultiCube_MultiCubeCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMultiCubeCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMultiCubeCharacter, FollowCamera); }


#define MultiCube_Source_MultiCube_MultiCubeCharacter_h_9_PROLOG
#define MultiCube_Source_MultiCube_MultiCubeCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiCube_Source_MultiCube_MultiCubeCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MultiCube_Source_MultiCube_MultiCubeCharacter_h_12_SPARSE_DATA \
	MultiCube_Source_MultiCube_MultiCubeCharacter_h_12_RPC_WRAPPERS \
	MultiCube_Source_MultiCube_MultiCubeCharacter_h_12_INCLASS \
	MultiCube_Source_MultiCube_MultiCubeCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MultiCube_Source_MultiCube_MultiCubeCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiCube_Source_MultiCube_MultiCubeCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MultiCube_Source_MultiCube_MultiCubeCharacter_h_12_SPARSE_DATA \
	MultiCube_Source_MultiCube_MultiCubeCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MultiCube_Source_MultiCube_MultiCubeCharacter_h_12_INCLASS_NO_PURE_DECLS \
	MultiCube_Source_MultiCube_MultiCubeCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTICUBE_API UClass* StaticClass<class AMultiCubeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MultiCube_Source_MultiCube_MultiCubeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
