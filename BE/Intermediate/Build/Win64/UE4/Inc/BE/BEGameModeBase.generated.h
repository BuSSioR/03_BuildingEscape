// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BE_BEGameModeBase_generated_h
#error "BEGameModeBase.generated.h already included, missing '#pragma once' in BEGameModeBase.h"
#endif
#define BE_BEGameModeBase_generated_h

#define BE_Source_BE_BEGameModeBase_h_15_RPC_WRAPPERS
#define BE_Source_BE_BEGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define BE_Source_BE_BEGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABEGameModeBase(); \
	friend BE_API class UClass* Z_Construct_UClass_ABEGameModeBase(); \
public: \
	DECLARE_CLASS(ABEGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/BE"), NO_API) \
	DECLARE_SERIALIZER(ABEGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BE_Source_BE_BEGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABEGameModeBase(); \
	friend BE_API class UClass* Z_Construct_UClass_ABEGameModeBase(); \
public: \
	DECLARE_CLASS(ABEGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/BE"), NO_API) \
	DECLARE_SERIALIZER(ABEGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BE_Source_BE_BEGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABEGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABEGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABEGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABEGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABEGameModeBase(ABEGameModeBase&&); \
	NO_API ABEGameModeBase(const ABEGameModeBase&); \
public:


#define BE_Source_BE_BEGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABEGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABEGameModeBase(ABEGameModeBase&&); \
	NO_API ABEGameModeBase(const ABEGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABEGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABEGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABEGameModeBase)


#define BE_Source_BE_BEGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define BE_Source_BE_BEGameModeBase_h_12_PROLOG
#define BE_Source_BE_BEGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BE_Source_BE_BEGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	BE_Source_BE_BEGameModeBase_h_15_RPC_WRAPPERS \
	BE_Source_BE_BEGameModeBase_h_15_INCLASS \
	BE_Source_BE_BEGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BE_Source_BE_BEGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BE_Source_BE_BEGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	BE_Source_BE_BEGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BE_Source_BE_BEGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	BE_Source_BE_BEGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BE_Source_BE_BEGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
