// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "OpenDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenDoor() {}
// Cross Module References
	BE_API UClass* Z_Construct_UClass_UOpenDoor_NoRegister();
	BE_API UClass* Z_Construct_UClass_UOpenDoor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BE();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolume_NoRegister();
// End Cross Module References
	void UOpenDoor::StaticRegisterNativesUOpenDoor()
	{
	}
	UClass* Z_Construct_UClass_UOpenDoor_NoRegister()
	{
		return UOpenDoor::StaticClass();
	}
	UClass* Z_Construct_UClass_UOpenDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_BE,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "OpenDoor.h" },
				{ "ModuleRelativePath", "OpenDoor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorCloseDelay_MetaData[] = {
				{ "Category", "OpenDoor" },
				{ "ModuleRelativePath", "OpenDoor.h" },
				{ "ToolTip", "pawn inhariets from actor" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DoorCloseDelay = { UE4CodeGen_Private::EPropertyClass::Float, "DoorCloseDelay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UOpenDoor, DoorCloseDelay), METADATA_PARAMS(NewProp_DoorCloseDelay_MetaData, ARRAY_COUNT(NewProp_DoorCloseDelay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorThatOpens_MetaData[] = {
				{ "Category", "OpenDoor" },
				{ "ModuleRelativePath", "OpenDoor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorThatOpens = { UE4CodeGen_Private::EPropertyClass::Object, "ActorThatOpens", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UOpenDoor, ActorThatOpens), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_ActorThatOpens_MetaData, ARRAY_COUNT(NewProp_ActorThatOpens_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressurePlate_MetaData[] = {
				{ "Category", "OpenDoor" },
				{ "ModuleRelativePath", "OpenDoor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PressurePlate = { UE4CodeGen_Private::EPropertyClass::Object, "PressurePlate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UOpenDoor, PressurePlate), Z_Construct_UClass_AVolume_NoRegister, METADATA_PARAMS(NewProp_PressurePlate_MetaData, ARRAY_COUNT(NewProp_PressurePlate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenAngle_MetaData[] = {
				{ "Category", "OpenDoor" },
				{ "ModuleRelativePath", "OpenDoor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpenAngle = { UE4CodeGen_Private::EPropertyClass::Float, "OpenAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020001, 1, nullptr, STRUCT_OFFSET(UOpenDoor, OpenAngle), METADATA_PARAMS(NewProp_OpenAngle_MetaData, ARRAY_COUNT(NewProp_OpenAngle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoorCloseDelay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorThatOpens,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PressurePlate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OpenAngle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UOpenDoor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UOpenDoor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenDoor, 2722345523);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenDoor(Z_Construct_UClass_UOpenDoor, &UOpenDoor::StaticClass, TEXT("/Script/BE"), TEXT("UOpenDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
