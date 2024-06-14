// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMvnPlugin/Public/MvnRemoteControlManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMvnRemoteControlManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LIVELINKMVNPLUGIN_API UClass* Z_Construct_UClass_UMvnRemoteControlManager();
LIVELINKMVNPLUGIN_API UClass* Z_Construct_UClass_UMvnRemoteControlManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveLinkMvnPlugin();
// End Cross Module References

// Begin Class UMvnRemoteControlManager Function StartRecording
struct Z_Construct_UFunction_UMvnRemoteControlManager_StartRecording_Statics
{
	struct MvnRemoteControlManager_eventStartRecording_Parms
	{
		float _fTimeOffsetInSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Xsens Mvn Remote Control" },
		{ "Comment", "/** start recording for all sessions */" },
		{ "ModuleRelativePath", "Public/MvnRemoteControlManager.h" },
		{ "ToolTip", "start recording for all sessions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__fTimeOffsetInSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMvnRemoteControlManager_StartRecording_Statics::NewProp__fTimeOffsetInSeconds = { "_fTimeOffsetInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MvnRemoteControlManager_eventStartRecording_Parms, _fTimeOffsetInSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMvnRemoteControlManager_StartRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMvnRemoteControlManager_StartRecording_Statics::NewProp__fTimeOffsetInSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMvnRemoteControlManager_StartRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMvnRemoteControlManager_StartRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMvnRemoteControlManager, nullptr, "StartRecording", nullptr, nullptr, Z_Construct_UFunction_UMvnRemoteControlManager_StartRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMvnRemoteControlManager_StartRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMvnRemoteControlManager_StartRecording_Statics::MvnRemoteControlManager_eventStartRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMvnRemoteControlManager_StartRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMvnRemoteControlManager_StartRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMvnRemoteControlManager_StartRecording_Statics::MvnRemoteControlManager_eventStartRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMvnRemoteControlManager_StartRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMvnRemoteControlManager_StartRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMvnRemoteControlManager::execStartRecording)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param__fTimeOffsetInSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMvnRemoteControlManager::StartRecording(Z_Param__fTimeOffsetInSeconds);
	P_NATIVE_END;
}
// End Class UMvnRemoteControlManager Function StartRecording

// Begin Class UMvnRemoteControlManager Function StopRecording
struct Z_Construct_UFunction_UMvnRemoteControlManager_StopRecording_Statics
{
	struct MvnRemoteControlManager_eventStopRecording_Parms
	{
		float _fTimeOffsetInSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Xsens Mvn Remote Control" },
		{ "Comment", "/** stop recording for all sessions */" },
		{ "ModuleRelativePath", "Public/MvnRemoteControlManager.h" },
		{ "ToolTip", "stop recording for all sessions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__fTimeOffsetInSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMvnRemoteControlManager_StopRecording_Statics::NewProp__fTimeOffsetInSeconds = { "_fTimeOffsetInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MvnRemoteControlManager_eventStopRecording_Parms, _fTimeOffsetInSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMvnRemoteControlManager_StopRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMvnRemoteControlManager_StopRecording_Statics::NewProp__fTimeOffsetInSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMvnRemoteControlManager_StopRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMvnRemoteControlManager_StopRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMvnRemoteControlManager, nullptr, "StopRecording", nullptr, nullptr, Z_Construct_UFunction_UMvnRemoteControlManager_StopRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMvnRemoteControlManager_StopRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMvnRemoteControlManager_StopRecording_Statics::MvnRemoteControlManager_eventStopRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMvnRemoteControlManager_StopRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMvnRemoteControlManager_StopRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMvnRemoteControlManager_StopRecording_Statics::MvnRemoteControlManager_eventStopRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMvnRemoteControlManager_StopRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMvnRemoteControlManager_StopRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMvnRemoteControlManager::execStopRecording)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param__fTimeOffsetInSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMvnRemoteControlManager::StopRecording(Z_Param__fTimeOffsetInSeconds);
	P_NATIVE_END;
}
// End Class UMvnRemoteControlManager Function StopRecording

// Begin Class UMvnRemoteControlManager
void UMvnRemoteControlManager::StaticRegisterNativesUMvnRemoteControlManager()
{
	UClass* Class = UMvnRemoteControlManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartRecording", &UMvnRemoteControlManager::execStartRecording },
		{ "StopRecording", &UMvnRemoteControlManager::execStopRecording },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMvnRemoteControlManager);
UClass* Z_Construct_UClass_UMvnRemoteControlManager_NoRegister()
{
	return UMvnRemoteControlManager::StaticClass();
}
struct Z_Construct_UClass_UMvnRemoteControlManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MvnRemoteControlManager.h" },
		{ "ModuleRelativePath", "Public/MvnRemoteControlManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMvnRemoteControlManager_StartRecording, "StartRecording" }, // 127662817
		{ &Z_Construct_UFunction_UMvnRemoteControlManager_StopRecording, "StopRecording" }, // 1218456590
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMvnRemoteControlManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMvnRemoteControlManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMvnPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMvnRemoteControlManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMvnRemoteControlManager_Statics::ClassParams = {
	&UMvnRemoteControlManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMvnRemoteControlManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UMvnRemoteControlManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMvnRemoteControlManager()
{
	if (!Z_Registration_Info_UClass_UMvnRemoteControlManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMvnRemoteControlManager.OuterSingleton, Z_Construct_UClass_UMvnRemoteControlManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMvnRemoteControlManager.OuterSingleton;
}
template<> LIVELINKMVNPLUGIN_API UClass* StaticClass<UMvnRemoteControlManager>()
{
	return UMvnRemoteControlManager::StaticClass();
}
UMvnRemoteControlManager::UMvnRemoteControlManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMvnRemoteControlManager);
UMvnRemoteControlManager::~UMvnRemoteControlManager() {}
// End Class UMvnRemoteControlManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_MvnRemoteControlManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMvnRemoteControlManager, UMvnRemoteControlManager::StaticClass, TEXT("UMvnRemoteControlManager"), &Z_Registration_Info_UClass_UMvnRemoteControlManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMvnRemoteControlManager), 2286707960U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_MvnRemoteControlManager_h_2608256894(TEXT("/Script/LiveLinkMvnPlugin"),
	Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_MvnRemoteControlManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_MvnRemoteControlManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
