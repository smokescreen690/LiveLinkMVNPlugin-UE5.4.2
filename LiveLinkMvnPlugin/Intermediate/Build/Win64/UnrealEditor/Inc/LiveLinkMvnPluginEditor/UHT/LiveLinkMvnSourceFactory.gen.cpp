// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMvnPluginEditor/Private/LiveLinkMvnSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMvnSourceFactory() {}

// Begin Cross Module References
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
LIVELINKMVNPLUGINEDITOR_API UClass* Z_Construct_UClass_ULiveLinkMvnSourceFactory();
LIVELINKMVNPLUGINEDITOR_API UClass* Z_Construct_UClass_ULiveLinkMvnSourceFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveLinkMvnPluginEditor();
// End Cross Module References

// Begin Class ULiveLinkMvnSourceFactory
void ULiveLinkMvnSourceFactory::StaticRegisterNativesULiveLinkMvnSourceFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkMvnSourceFactory);
UClass* Z_Construct_UClass_ULiveLinkMvnSourceFactory_NoRegister()
{
	return ULiveLinkMvnSourceFactory::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkMvnSourceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkMvnSourceFactory.h" },
		{ "ModuleRelativePath", "Private/LiveLinkMvnSourceFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkMvnSourceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULiveLinkMvnSourceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMvnPluginEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnSourceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkMvnSourceFactory_Statics::ClassParams = {
	&ULiveLinkMvnSourceFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnSourceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkMvnSourceFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkMvnSourceFactory()
{
	if (!Z_Registration_Info_UClass_ULiveLinkMvnSourceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkMvnSourceFactory.OuterSingleton, Z_Construct_UClass_ULiveLinkMvnSourceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkMvnSourceFactory.OuterSingleton;
}
template<> LIVELINKMVNPLUGINEDITOR_API UClass* StaticClass<ULiveLinkMvnSourceFactory>()
{
	return ULiveLinkMvnSourceFactory::StaticClass();
}
ULiveLinkMvnSourceFactory::ULiveLinkMvnSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkMvnSourceFactory);
ULiveLinkMvnSourceFactory::~ULiveLinkMvnSourceFactory() {}
// End Class ULiveLinkMvnSourceFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPluginEditor_Private_LiveLinkMvnSourceFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkMvnSourceFactory, ULiveLinkMvnSourceFactory::StaticClass, TEXT("ULiveLinkMvnSourceFactory"), &Z_Registration_Info_UClass_ULiveLinkMvnSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkMvnSourceFactory), 1212784405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPluginEditor_Private_LiveLinkMvnSourceFactory_h_737164458(TEXT("/Script/LiveLinkMvnPluginEditor"),
	Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPluginEditor_Private_LiveLinkMvnSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPluginEditor_Private_LiveLinkMvnSourceFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
