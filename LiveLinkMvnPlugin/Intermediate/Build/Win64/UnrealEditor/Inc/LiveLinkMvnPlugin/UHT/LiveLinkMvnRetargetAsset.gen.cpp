// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMvnPlugin/Public/LiveLinkMvnRetargetAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMvnRetargetAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset();
LIVELINKMVNPLUGIN_API UClass* Z_Construct_UClass_ULiveLinkMvnRetargetAsset();
LIVELINKMVNPLUGIN_API UClass* Z_Construct_UClass_ULiveLinkMvnRetargetAsset_NoRegister();
LIVELINKMVNPLUGIN_API UEnum* Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensMapping();
LIVELINKMVNPLUGIN_API UEnum* Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensRetargetNamingConvention();
LIVELINKMVNPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRemappingRowHandle();
UPackage* Z_Construct_UPackage__Script_LiveLinkMvnPlugin();
// End Cross Module References

// Begin ScriptStruct FRemappingRowHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemappingRowHandle;
class UScriptStruct* FRemappingRowHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemappingRowHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemappingRowHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemappingRowHandle, (UObject*)Z_Construct_UPackage__Script_LiveLinkMvnPlugin(), TEXT("RemappingRowHandle"));
	}
	return Z_Registration_Info_UScriptStruct_RemappingRowHandle.OuterSingleton;
}
template<> LIVELINKMVNPLUGIN_API UScriptStruct* StaticStruct<FRemappingRowHandle>()
{
	return FRemappingRowHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemappingRowHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XsensRemapId_MetaData[] = {
		{ "Category", "RemappingRow" },
		{ "Comment", "/** Xsens Id */" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
		{ "ToolTip", "Xsens Id" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemapId_MetaData[] = {
		{ "Category", "RemappingRow" },
		{ "Comment", "/** Bone name in Unreal mesh */" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
		{ "ToolTip", "Bone name in Unreal mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_XsensRemapId_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_XsensRemapId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RemapId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemappingRowHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewProp_XsensRemapId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewProp_XsensRemapId = { "XsensRemapId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemappingRowHandle, XsensRemapId), Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensMapping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XsensRemapId_MetaData), NewProp_XsensRemapId_MetaData) }; // 2478821521
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewProp_RemapId = { "RemapId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemappingRowHandle, RemapId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemapId_MetaData), NewProp_RemapId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewProp_XsensRemapId_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewProp_XsensRemapId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewProp_RemapId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMvnPlugin,
	nullptr,
	&NewStructOps,
	"RemappingRowHandle",
	Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::PropPointers),
	sizeof(FRemappingRowHandle),
	alignof(FRemappingRowHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemappingRowHandle()
{
	if (!Z_Registration_Info_UScriptStruct_RemappingRowHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemappingRowHandle.InnerSingleton, Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemappingRowHandle.InnerSingleton;
}
// End ScriptStruct FRemappingRowHandle

// Begin Class ULiveLinkMvnRetargetAsset Function GetCustomRemappedBoneName
struct LiveLinkMvnRetargetAsset_eventGetCustomRemappedBoneName_Parms
{
	EXsensMapping Bone;
	FName ReturnValue;
};
static FName NAME_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName = FName(TEXT("GetCustomRemappedBoneName"));
FName ULiveLinkMvnRetargetAsset::GetCustomRemappedBoneName(EXsensMapping Bone) const
{
	LiveLinkMvnRetargetAsset_eventGetCustomRemappedBoneName_Parms Parms;
	Parms.Bone=Bone;
	const_cast<ULiveLinkMvnRetargetAsset*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Live Link Remap" },
		{ "Comment", "/** Blueprint Implementable function for getting a custom remapped bone name from the original */" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
		{ "ToolTip", "Blueprint Implementable function for getting a custom remapped bone name from the original" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Bone;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkMvnRetargetAsset_eventGetCustomRemappedBoneName_Parms, Bone), Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensMapping, METADATA_PARAMS(0, nullptr) }; // 2478821521
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkMvnRetargetAsset_eventGetCustomRemappedBoneName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::NewProp_Bone_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkMvnRetargetAsset, nullptr, "GetCustomRemappedBoneName", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::PropPointers), sizeof(LiveLinkMvnRetargetAsset_eventGetCustomRemappedBoneName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::Function_MetaDataParams) };
static_assert(sizeof(LiveLinkMvnRetargetAsset_eventGetCustomRemappedBoneName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveLinkMvnRetargetAsset::execGetCustomRemappedBoneName)
{
	P_GET_ENUM(EXsensMapping,Z_Param_Bone);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetCustomRemappedBoneName_Implementation(EXsensMapping(Z_Param_Bone));
	P_NATIVE_END;
}
// End Class ULiveLinkMvnRetargetAsset Function GetCustomRemappedBoneName

// Begin Class ULiveLinkMvnRetargetAsset Function GetRemappedBoneNameByConvention
struct Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics
{
	struct LiveLinkMvnRetargetAsset_eventGetRemappedBoneNameByConvention_Parms
	{
		EXsensMapping Bone;
		EXsensRetargetNamingConvention Convention;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Live Link Remap" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Bone;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Convention_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Convention;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkMvnRetargetAsset_eventGetRemappedBoneNameByConvention_Parms, Bone), Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensMapping, METADATA_PARAMS(0, nullptr) }; // 2478821521
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Convention_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Convention = { "Convention", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkMvnRetargetAsset_eventGetRemappedBoneNameByConvention_Parms, Convention), Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensRetargetNamingConvention, METADATA_PARAMS(0, nullptr) }; // 3079108017
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkMvnRetargetAsset_eventGetRemappedBoneNameByConvention_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Bone_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Convention_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Convention,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkMvnRetargetAsset, nullptr, "GetRemappedBoneNameByConvention", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::LiveLinkMvnRetargetAsset_eventGetRemappedBoneNameByConvention_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::LiveLinkMvnRetargetAsset_eventGetRemappedBoneNameByConvention_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveLinkMvnRetargetAsset::execGetRemappedBoneNameByConvention)
{
	P_GET_ENUM(EXsensMapping,Z_Param_Bone);
	P_GET_ENUM(EXsensRetargetNamingConvention,Z_Param_Convention);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetRemappedBoneNameByConvention(EXsensMapping(Z_Param_Bone),EXsensRetargetNamingConvention(Z_Param_Convention));
	P_NATIVE_END;
}
// End Class ULiveLinkMvnRetargetAsset Function GetRemappedBoneNameByConvention

// Begin Class ULiveLinkMvnRetargetAsset
void ULiveLinkMvnRetargetAsset::StaticRegisterNativesULiveLinkMvnRetargetAsset()
{
	UClass* Class = ULiveLinkMvnRetargetAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomRemappedBoneName", &ULiveLinkMvnRetargetAsset::execGetCustomRemappedBoneName },
		{ "GetRemappedBoneNameByConvention", &ULiveLinkMvnRetargetAsset::execGetRemappedBoneNameByConvention },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkMvnRetargetAsset);
UClass* Z_Construct_UClass_ULiveLinkMvnRetargetAsset_NoRegister()
{
	return ULiveLinkMvnRetargetAsset::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LiveLinkMvnRetargetAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_remapping_convention_MetaData[] = {
		{ "Category", "Bones Names" },
		{ "DisplayName", "Naming Convention" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_remapping_rows_MetaData[] = {
		{ "Category", "Live Link Mvn Remap" },
		{ "Comment", "/** Map that stores all the information about bone remapping. This will be populated dynamically from the skeletal mesh. */" },
		{ "DisplayName", "Remapping Assets" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
		{ "ToolTip", "Map that stores all the information about bone remapping. This will be populated dynamically from the skeletal mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_skeletal_mesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_skeleton_MetaData[] = {
		{ "Category", "Live Link Mvn Remap" },
		{ "Comment", "// The skeleton object which we're animating\n" },
		{ "DisplayName", "Skeleton" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
		{ "ToolTip", "The skeleton object which we're animating" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TPoseAnimation_MetaData[] = {
		{ "Category", "Reference Pose" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsForwardY_MetaData[] = {
		{ "Category", "Reference Pose" },
		{ "DisplayName", "Is Forward Y" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_m_remapping_convention_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_m_remapping_convention;
	static const UECodeGen_Private::FStructPropertyParams NewProp_m_remapping_rows_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_m_remapping_rows_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_m_remapping_rows_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_m_remapping_rows;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_skeletal_mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_skeleton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TPoseAnimation;
	static void NewProp_IsForwardY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsForwardY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName, "GetCustomRemappedBoneName" }, // 3442813727
		{ &Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention, "GetRemappedBoneNameByConvention" }, // 737785617
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkMvnRetargetAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_convention_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_convention = { "m_remapping_convention", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkMvnRetargetAsset, m_remapping_convention), Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensRetargetNamingConvention, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_remapping_convention_MetaData), NewProp_m_remapping_convention_MetaData) }; // 3079108017
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_rows_ValueProp = { "m_remapping_rows", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRemappingRowHandle, METADATA_PARAMS(0, nullptr) }; // 2338826904
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_rows_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_rows_Key_KeyProp = { "m_remapping_rows_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensMapping, METADATA_PARAMS(0, nullptr) }; // 2478821521
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_rows = { "m_remapping_rows", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkMvnRetargetAsset, m_remapping_rows), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_remapping_rows_MetaData), NewProp_m_remapping_rows_MetaData) }; // 2478821521 2338826904
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_skeletal_mesh = { "m_skeletal_mesh", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkMvnRetargetAsset, m_skeletal_mesh_DEPRECATED), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_skeletal_mesh_MetaData), NewProp_m_skeletal_mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_skeleton = { "m_skeleton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkMvnRetargetAsset, m_skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_skeleton_MetaData), NewProp_m_skeleton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_TPoseAnimation = { "TPoseAnimation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkMvnRetargetAsset, TPoseAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TPoseAnimation_MetaData), NewProp_TPoseAnimation_MetaData) };
void Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_IsForwardY_SetBit(void* Obj)
{
	((ULiveLinkMvnRetargetAsset*)Obj)->IsForwardY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_IsForwardY = { "IsForwardY", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkMvnRetargetAsset), &Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_IsForwardY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsForwardY_MetaData), NewProp_IsForwardY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_convention_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_convention,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_rows_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_rows_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_rows_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_rows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_skeletal_mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_skeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_TPoseAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_IsForwardY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkRetargetAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMvnPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::ClassParams = {
	&ULiveLinkMvnRetargetAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkMvnRetargetAsset()
{
	if (!Z_Registration_Info_UClass_ULiveLinkMvnRetargetAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkMvnRetargetAsset.OuterSingleton, Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkMvnRetargetAsset.OuterSingleton;
}
template<> LIVELINKMVNPLUGIN_API UClass* StaticClass<ULiveLinkMvnRetargetAsset>()
{
	return ULiveLinkMvnRetargetAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkMvnRetargetAsset);
ULiveLinkMvnRetargetAsset::~ULiveLinkMvnRetargetAsset() {}
// End Class ULiveLinkMvnRetargetAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRemappingRowHandle::StaticStruct, Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewStructOps, TEXT("RemappingRowHandle"), &Z_Registration_Info_UScriptStruct_RemappingRowHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemappingRowHandle), 2338826904U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkMvnRetargetAsset, ULiveLinkMvnRetargetAsset::StaticClass, TEXT("ULiveLinkMvnRetargetAsset"), &Z_Registration_Info_UClass_ULiveLinkMvnRetargetAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkMvnRetargetAsset), 58113732U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_1111338707(TEXT("/Script/LiveLinkMvnPlugin"),
	Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
