// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BE_Grabber_generated_h
#error "Grabber.generated.h already included, missing '#pragma once' in Grabber.h"
#endif
#define BE_Grabber_generated_h

#define BE_Source_BE_Grabber_h_16_RPC_WRAPPERS
#define BE_Source_BE_Grabber_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define BE_Source_BE_Grabber_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrabber(); \
	friend BE_API class UClass* Z_Construct_UClass_UGrabber(); \
public: \
	DECLARE_CLASS(UGrabber, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BE"), NO_API) \
	DECLARE_SERIALIZER(UGrabber) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BE_Source_BE_Grabber_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGrabber(); \
	friend BE_API class UClass* Z_Construct_UClass_UGrabber(); \
public: \
	DECLARE_CLASS(UGrabber, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BE"), NO_API) \
	DECLARE_SERIALIZER(UGrabber) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BE_Source_BE_Grabber_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrabber(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrabber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabber(UGrabber&&); \
	NO_API UGrabber(const UGrabber&); \
public:


#define BE_Source_BE_Grabber_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabber(UGrabber&&); \
	NO_API UGrabber(const UGrabber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabber); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGrabber)


#define BE_Source_BE_Grabber_h_16_PRIVATE_PROPERTY_OFFSET
#define BE_Source_BE_Grabber_h_13_PROLOG
#define BE_Source_BE_Grabber_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BE_Source_BE_Grabber_h_16_PRIVATE_PROPERTY_OFFSET \
	BE_Source_BE_Grabber_h_16_RPC_WRAPPERS \
	BE_Source_BE_Grabber_h_16_INCLASS \
	BE_Source_BE_Grabber_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BE_Source_BE_Grabber_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BE_Source_BE_Grabber_h_16_PRIVATE_PROPERTY_OFFSET \
	BE_Source_BE_Grabber_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	BE_Source_BE_Grabber_h_16_INCLASS_NO_PURE_DECLS \
	BE_Source_BE_Grabber_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BE_Source_BE_Grabber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
