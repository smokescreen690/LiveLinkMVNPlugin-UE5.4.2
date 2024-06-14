// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMvnPlugin/Public/LiveLinkMvnSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMvnSource() {}

// Begin Cross Module References
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
LIVELINKMVNPLUGIN_API UClass* Z_Construct_UClass_ULiveLinkMvnSourceSettings();
LIVELINKMVNPLUGIN_API UClass* Z_Construct_UClass_ULiveLinkMvnSourceSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveLinkMvnPlugin();
// End Cross Module References

// Begin Class ULiveLinkMvnSourceSettings
void ULiveLinkMvnSourceSettings::StaticRegisterNativesULiveLinkMvnSourceSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkMvnSourceSettings);
UClass* Z_Construct_UClass_ULiveLinkMvnSourceSettings_NoRegister()
{
	return ULiveLinkMvnSourceSettings::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** VirtualSubjectSource Settings to be able to differentiate from live sources and keep a name associated to the source */" },
		{ "IncludePath", "LiveLinkMvnSource.h" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnSource.h" },
		{ "ToolTip", "VirtualSubjectSource Settings to be able to differentiate from live sources and keep a name associated to the source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortNumber_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PortNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkMvnSourceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::NewProp_PortNumber = { "PortNumber", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkMvnSourceSettings, PortNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortNumber_MetaData), NewProp_PortNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::NewProp_PortNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMvnPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::ClassParams = {
	&ULiveLinkMvnSourceSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkMvnSourceSettings()
{
	if (!Z_Registration_Info_UClass_ULiveLinkMvnSourceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkMvnSourceSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkMvnSourceSettings.OuterSingleton;
}
template<> LIVELINKMVNPLUGIN_API UClass* StaticClass<ULiveLinkMvnSourceSettings>()
{
	return ULiveLinkMvnSourceSettings::StaticClass();
}
ULiveLinkMvnSourceSettings::ULiveLinkMvnSourceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkMvnSourceSettings);
ULiveLinkMvnSourceSettings::~ULiveLinkMvnSourceSettings() {}
// End Class ULiveLinkMvnSourceSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkMvnSourceSettings, ULiveLinkMvnSourceSettings::StaticClass, TEXT("ULiveLinkMvnSourceSettings"), &Z_Registration_Info_UClass_ULiveLinkMvnSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkMvnSourceSettings), 1572806171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_2664714260(TEXT("/Script/LiveLinkMvnPlugin"),
	Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
