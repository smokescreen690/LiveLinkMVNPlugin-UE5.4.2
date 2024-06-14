// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMvnPlugin/Public/LiveLinkMvnTransformController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMvnTransformController() {}

// Begin Cross Module References
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase();
LIVELINKMVNPLUGIN_API UClass* Z_Construct_UClass_ULiveLinkMvnTransformController();
LIVELINKMVNPLUGIN_API UClass* Z_Construct_UClass_ULiveLinkMvnTransformController_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveLinkMvnPlugin();
// End Cross Module References

// Begin Class ULiveLinkMvnTransformController
void ULiveLinkMvnTransformController::StaticRegisterNativesULiveLinkMvnTransformController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkMvnTransformController);
UClass* Z_Construct_UClass_ULiveLinkMvnTransformController_NoRegister()
{
	return ULiveLinkMvnTransformController::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkMvnTransformController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkMvnTransformController.h" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnTransformController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentIndex_MetaData[] = {
		{ "Category", "LiveLinkMVN" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnTransformController.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SegmentIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkMvnTransformController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::NewProp_SegmentIndex = { "SegmentIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkMvnTransformController, SegmentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentIndex_MetaData), NewProp_SegmentIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::NewProp_SegmentIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMvnPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::ClassParams = {
	&ULiveLinkMvnTransformController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkMvnTransformController()
{
	if (!Z_Registration_Info_UClass_ULiveLinkMvnTransformController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkMvnTransformController.OuterSingleton, Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkMvnTransformController.OuterSingleton;
}
template<> LIVELINKMVNPLUGIN_API UClass* StaticClass<ULiveLinkMvnTransformController>()
{
	return ULiveLinkMvnTransformController::StaticClass();
}
ULiveLinkMvnTransformController::ULiveLinkMvnTransformController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkMvnTransformController);
ULiveLinkMvnTransformController::~ULiveLinkMvnTransformController() {}
// End Class ULiveLinkMvnTransformController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnTransformController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkMvnTransformController, ULiveLinkMvnTransformController::StaticClass, TEXT("ULiveLinkMvnTransformController"), &Z_Registration_Info_UClass_ULiveLinkMvnTransformController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkMvnTransformController), 313434496U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnTransformController_h_2338783666(TEXT("/Script/LiveLinkMvnPlugin"),
	Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnTransformController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnTransformController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
