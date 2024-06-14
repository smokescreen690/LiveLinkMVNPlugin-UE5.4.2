// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMvnPluginEditor/Private/Factories/LiveLinkMvnRetargetAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMvnRetargetAssetFactory() {}

// Begin Cross Module References
LIVELINKMVNPLUGINEDITOR_API UClass* Z_Construct_UClass_ULiveLinkMvnRetargetAssetFactory();
LIVELINKMVNPLUGINEDITOR_API UClass* Z_Construct_UClass_ULiveLinkMvnRetargetAssetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_LiveLinkMvnPluginEditor();
// End Cross Module References

// Begin Class ULiveLinkMvnRetargetAssetFactory
void ULiveLinkMvnRetargetAssetFactory::StaticRegisterNativesULiveLinkMvnRetargetAssetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkMvnRetargetAssetFactory);
UClass* Z_Construct_UClass_ULiveLinkMvnRetargetAssetFactory_NoRegister()
{
	return ULiveLinkMvnRetargetAssetFactory::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkMvnRetargetAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/LiveLinkMvnRetargetAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/LiveLinkMvnRetargetAssetFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkMvnRetargetAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULiveLinkMvnRetargetAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMvnPluginEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnRetargetAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkMvnRetargetAssetFactory_Statics::ClassParams = {
	&ULiveLinkMvnRetargetAssetFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnRetargetAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkMvnRetargetAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkMvnRetargetAssetFactory()
{
	if (!Z_Registration_Info_UClass_ULiveLinkMvnRetargetAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkMvnRetargetAssetFactory.OuterSingleton, Z_Construct_UClass_ULiveLinkMvnRetargetAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkMvnRetargetAssetFactory.OuterSingleton;
}
template<> LIVELINKMVNPLUGINEDITOR_API UClass* StaticClass<ULiveLinkMvnRetargetAssetFactory>()
{
	return ULiveLinkMvnRetargetAssetFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkMvnRetargetAssetFactory);
ULiveLinkMvnRetargetAssetFactory::~ULiveLinkMvnRetargetAssetFactory() {}
// End Class ULiveLinkMvnRetargetAssetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPluginEditor_Private_Factories_LiveLinkMvnRetargetAssetFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkMvnRetargetAssetFactory, ULiveLinkMvnRetargetAssetFactory::StaticClass, TEXT("ULiveLinkMvnRetargetAssetFactory"), &Z_Registration_Info_UClass_ULiveLinkMvnRetargetAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkMvnRetargetAssetFactory), 508979289U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPluginEditor_Private_Factories_LiveLinkMvnRetargetAssetFactory_h_881931566(TEXT("/Script/LiveLinkMvnPluginEditor"),
	Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPluginEditor_Private_Factories_LiveLinkMvnRetargetAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPluginEditor_Private_Factories_LiveLinkMvnRetargetAssetFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
