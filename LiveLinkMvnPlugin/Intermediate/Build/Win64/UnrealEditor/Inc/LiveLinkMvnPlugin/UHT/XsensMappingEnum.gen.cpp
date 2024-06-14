// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMvnPlugin/Public/XsensMappingEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXsensMappingEnum() {}

// Begin Cross Module References
LIVELINKMVNPLUGIN_API UEnum* Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensMapping();
LIVELINKMVNPLUGIN_API UEnum* Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensRetargetNamingConvention();
UPackage* Z_Construct_UPackage__Script_LiveLinkMvnPlugin();
// End Cross Module References

// Begin Enum EXsensMapping
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EXsensMapping;
static UEnum* EXsensMapping_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EXsensMapping.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EXsensMapping.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensMapping, (UObject*)Z_Construct_UPackage__Script_LiveLinkMvnPlugin(), TEXT("EXsensMapping"));
	}
	return Z_Registration_Info_UEnum_EXsensMapping.OuterSingleton;
}
template<> LIVELINKMVNPLUGIN_API UEnum* StaticEnum<EXsensMapping>()
{
	return EXsensMapping_StaticEnum();
}
struct Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Name", "EXsensMapping::Count" },
		{ "Head.DisplayName", "Head" },
		{ "Head.Name", "EXsensMapping::Head" },
		{ "L3.DisplayName", "L3" },
		{ "L3.Name", "EXsensMapping::L3" },
		{ "L5.DisplayName", "L5" },
		{ "L5.Name", "EXsensMapping::L5" },
		{ "LeftCarpus.DisplayName", "LeftCarpus" },
		{ "LeftCarpus.Name", "EXsensMapping::LeftCarpus" },
		{ "LeftFifthDP.DisplayName", "LeftFifthDP" },
		{ "LeftFifthDP.Name", "EXsensMapping::LeftFifthDP" },
		{ "LeftFifthMC.DisplayName", "LeftFifthMC" },
		{ "LeftFifthMC.Name", "EXsensMapping::LeftFifthMC" },
		{ "LeftFifthMP.DisplayName", "LeftFifthMP" },
		{ "LeftFifthMP.Name", "EXsensMapping::LeftFifthMP" },
		{ "LeftFifthPP.DisplayName", "LeftFifthPP" },
		{ "LeftFifthPP.Name", "EXsensMapping::LeftFifthPP" },
		{ "LeftFirstDP.DisplayName", "LeftFirstDP" },
		{ "LeftFirstDP.Name", "EXsensMapping::LeftFirstDP" },
		{ "LeftFirstMC.DisplayName", "LeftFirstMC" },
		{ "LeftFirstMC.Name", "EXsensMapping::LeftFirstMC" },
		{ "LeftFirstPP.DisplayName", "LeftFirstPP" },
		{ "LeftFirstPP.Name", "EXsensMapping::LeftFirstPP" },
		{ "LeftFoot.DisplayName", "LeftFoot" },
		{ "LeftFoot.Name", "EXsensMapping::LeftFoot" },
		{ "LeftForeArm.DisplayName", "LeftForeArm" },
		{ "LeftForeArm.Name", "EXsensMapping::LeftForeArm" },
		{ "LeftFourthDP.DisplayName", "LeftFourthDP" },
		{ "LeftFourthDP.Name", "EXsensMapping::LeftFourthDP" },
		{ "LeftFourthMC.DisplayName", "LeftFourthMC" },
		{ "LeftFourthMC.Name", "EXsensMapping::LeftFourthMC" },
		{ "LeftFourthMP.DisplayName", "LeftFourthMP" },
		{ "LeftFourthMP.Name", "EXsensMapping::LeftFourthMP" },
		{ "LeftFourthPP.DisplayName", "LeftFourthPP" },
		{ "LeftFourthPP.Name", "EXsensMapping::LeftFourthPP" },
		{ "LeftHand.DisplayName", "LeftHand" },
		{ "LeftHand.Name", "EXsensMapping::LeftHand" },
		{ "LeftLowerLeg.DisplayName", "LeftLowerLeg" },
		{ "LeftLowerLeg.Name", "EXsensMapping::LeftLowerLeg" },
		{ "LeftSecondDP.DisplayName", "LeftSecondDP" },
		{ "LeftSecondDP.Name", "EXsensMapping::LeftSecondDP" },
		{ "LeftSecondMC.DisplayName", "LeftSecondMC" },
		{ "LeftSecondMC.Name", "EXsensMapping::LeftSecondMC" },
		{ "LeftSecondMP.DisplayName", "LeftSecondMP" },
		{ "LeftSecondMP.Name", "EXsensMapping::LeftSecondMP" },
		{ "LeftSecondPP.DisplayName", "LeftSecondPP" },
		{ "LeftSecondPP.Name", "EXsensMapping::LeftSecondPP" },
		{ "LeftShoulder.DisplayName", "LeftShoulder" },
		{ "LeftShoulder.Name", "EXsensMapping::LeftShoulder" },
		{ "LeftThirdDP.DisplayName", "LeftThirdDP" },
		{ "LeftThirdDP.Name", "EXsensMapping::LeftThirdDP" },
		{ "LeftThirdMC.DisplayName", "LeftThirdMC" },
		{ "LeftThirdMC.Name", "EXsensMapping::LeftThirdMC" },
		{ "LeftThirdMP.DisplayName", "LeftThirdMP" },
		{ "LeftThirdMP.Name", "EXsensMapping::LeftThirdMP" },
		{ "LeftThirdPP.DisplayName", "LeftThirdPP" },
		{ "LeftThirdPP.Name", "EXsensMapping::LeftThirdPP" },
		{ "LeftToe.DisplayName", "LeftToe" },
		{ "LeftToe.Name", "EXsensMapping::LeftToe" },
		{ "LeftUpperArm.DisplayName", "LeftUpperArm" },
		{ "LeftUpperArm.Name", "EXsensMapping::LeftUpperArm" },
		{ "LeftUpperLeg.DisplayName", "LeftUpperLeg" },
		{ "LeftUpperLeg.Name", "EXsensMapping::LeftUpperLeg" },
		{ "ModuleRelativePath", "Public/XsensMappingEnum.h" },
		{ "Neck.DisplayName", "Neck" },
		{ "Neck.Name", "EXsensMapping::Neck" },
		{ "Pelvis.DisplayName", "Pelvis" },
		{ "Pelvis.Name", "EXsensMapping::Pelvis" },
		{ "Prop1.DisplayName", "Prop1" },
		{ "Prop1.Name", "EXsensMapping::Prop1" },
		{ "Prop2.DisplayName", "Prop2" },
		{ "Prop2.Name", "EXsensMapping::Prop2" },
		{ "Prop3.DisplayName", "Prop3" },
		{ "Prop3.Name", "EXsensMapping::Prop3" },
		{ "Prop4.DisplayName", "Prop4" },
		{ "Prop4.Name", "EXsensMapping::Prop4" },
		{ "RightCarpus.DisplayName", "RightCarpus" },
		{ "RightCarpus.Name", "EXsensMapping::RightCarpus" },
		{ "RightFifthDP.DisplayName", "RightFifthDP" },
		{ "RightFifthDP.Name", "EXsensMapping::RightFifthDP" },
		{ "RightFifthMC.DisplayName", "RightFifthMC" },
		{ "RightFifthMC.Name", "EXsensMapping::RightFifthMC" },
		{ "RightFifthMP.DisplayName", "RightFifthMP" },
		{ "RightFifthMP.Name", "EXsensMapping::RightFifthMP" },
		{ "RightFifthPP.DisplayName", "RightFifthPP" },
		{ "RightFifthPP.Name", "EXsensMapping::RightFifthPP" },
		{ "RightFirstDP.DisplayName", "RightFirstDP" },
		{ "RightFirstDP.Name", "EXsensMapping::RightFirstDP" },
		{ "RightFirstMC.DisplayName", "RightFirstMC" },
		{ "RightFirstMC.Name", "EXsensMapping::RightFirstMC" },
		{ "RightFirstPP.DisplayName", "RightFirstPP" },
		{ "RightFirstPP.Name", "EXsensMapping::RightFirstPP" },
		{ "RightFoot.DisplayName", "RightFoot" },
		{ "RightFoot.Name", "EXsensMapping::RightFoot" },
		{ "RightForeArm.DisplayName", "RightForeArm" },
		{ "RightForeArm.Name", "EXsensMapping::RightForeArm" },
		{ "RightFourthDP.DisplayName", "RightFourthDP" },
		{ "RightFourthDP.Name", "EXsensMapping::RightFourthDP" },
		{ "RightFourthMC.DisplayName", "RightFourthMC" },
		{ "RightFourthMC.Name", "EXsensMapping::RightFourthMC" },
		{ "RightFourthMP.DisplayName", "RightFourthMP" },
		{ "RightFourthMP.Name", "EXsensMapping::RightFourthMP" },
		{ "RightFourthPP.DisplayName", "RightFourthPP" },
		{ "RightFourthPP.Name", "EXsensMapping::RightFourthPP" },
		{ "RightHand.DisplayName", "RightHand" },
		{ "RightHand.Name", "EXsensMapping::RightHand" },
		{ "RightLowerLeg.DisplayName", "RightLowerLeg" },
		{ "RightLowerLeg.Name", "EXsensMapping::RightLowerLeg" },
		{ "RightSecondDP.DisplayName", "RightSecondDP" },
		{ "RightSecondDP.Name", "EXsensMapping::RightSecondDP" },
		{ "RightSecondMC.DisplayName", "RightSecondMC" },
		{ "RightSecondMC.Name", "EXsensMapping::RightSecondMC" },
		{ "RightSecondMP.DisplayName", "RightSecondMP" },
		{ "RightSecondMP.Name", "EXsensMapping::RightSecondMP" },
		{ "RightSecondPP.DisplayName", "RightSecondPP" },
		{ "RightSecondPP.Name", "EXsensMapping::RightSecondPP" },
		{ "RightShoulder.DisplayName", "RightShoulder" },
		{ "RightShoulder.Name", "EXsensMapping::RightShoulder" },
		{ "RightThirdDP.DisplayName", "RightThirdDP" },
		{ "RightThirdDP.Name", "EXsensMapping::RightThirdDP" },
		{ "RightThirdMC.DisplayName", "RightThirdMC" },
		{ "RightThirdMC.Name", "EXsensMapping::RightThirdMC" },
		{ "RightThirdMP.DisplayName", "RightThirdMP" },
		{ "RightThirdMP.Name", "EXsensMapping::RightThirdMP" },
		{ "RightThirdPP.DisplayName", "RightThirdPP" },
		{ "RightThirdPP.Name", "EXsensMapping::RightThirdPP" },
		{ "RightToe.DisplayName", "RightToe" },
		{ "RightToe.Name", "EXsensMapping::RightToe" },
		{ "RightUpperArm.DisplayName", "RightUpperArm" },
		{ "RightUpperArm.Name", "EXsensMapping::RightUpperArm" },
		{ "RightUpperLeg.DisplayName", "RightUpperLeg" },
		{ "RightUpperLeg.Name", "EXsensMapping::RightUpperLeg" },
		{ "Root.DisplayName", "Root" },
		{ "Root.Name", "EXsensMapping::Root" },
		{ "T12.DisplayName", "T12" },
		{ "T12.Name", "EXsensMapping::T12" },
		{ "T8.DisplayName", "T8" },
		{ "T8.Name", "EXsensMapping::T8" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EXsensMapping::Root", (int64)EXsensMapping::Root },
		{ "EXsensMapping::Pelvis", (int64)EXsensMapping::Pelvis },
		{ "EXsensMapping::L5", (int64)EXsensMapping::L5 },
		{ "EXsensMapping::L3", (int64)EXsensMapping::L3 },
		{ "EXsensMapping::T12", (int64)EXsensMapping::T12 },
		{ "EXsensMapping::T8", (int64)EXsensMapping::T8 },
		{ "EXsensMapping::Neck", (int64)EXsensMapping::Neck },
		{ "EXsensMapping::Head", (int64)EXsensMapping::Head },
		{ "EXsensMapping::RightShoulder", (int64)EXsensMapping::RightShoulder },
		{ "EXsensMapping::RightUpperArm", (int64)EXsensMapping::RightUpperArm },
		{ "EXsensMapping::RightForeArm", (int64)EXsensMapping::RightForeArm },
		{ "EXsensMapping::RightHand", (int64)EXsensMapping::RightHand },
		{ "EXsensMapping::LeftShoulder", (int64)EXsensMapping::LeftShoulder },
		{ "EXsensMapping::LeftUpperArm", (int64)EXsensMapping::LeftUpperArm },
		{ "EXsensMapping::LeftForeArm", (int64)EXsensMapping::LeftForeArm },
		{ "EXsensMapping::LeftHand", (int64)EXsensMapping::LeftHand },
		{ "EXsensMapping::RightUpperLeg", (int64)EXsensMapping::RightUpperLeg },
		{ "EXsensMapping::RightLowerLeg", (int64)EXsensMapping::RightLowerLeg },
		{ "EXsensMapping::RightFoot", (int64)EXsensMapping::RightFoot },
		{ "EXsensMapping::RightToe", (int64)EXsensMapping::RightToe },
		{ "EXsensMapping::LeftUpperLeg", (int64)EXsensMapping::LeftUpperLeg },
		{ "EXsensMapping::LeftLowerLeg", (int64)EXsensMapping::LeftLowerLeg },
		{ "EXsensMapping::LeftFoot", (int64)EXsensMapping::LeftFoot },
		{ "EXsensMapping::LeftToe", (int64)EXsensMapping::LeftToe },
		{ "EXsensMapping::Prop1", (int64)EXsensMapping::Prop1 },
		{ "EXsensMapping::Prop2", (int64)EXsensMapping::Prop2 },
		{ "EXsensMapping::Prop3", (int64)EXsensMapping::Prop3 },
		{ "EXsensMapping::Prop4", (int64)EXsensMapping::Prop4 },
		{ "EXsensMapping::LeftCarpus", (int64)EXsensMapping::LeftCarpus },
		{ "EXsensMapping::LeftFirstMC", (int64)EXsensMapping::LeftFirstMC },
		{ "EXsensMapping::LeftFirstPP", (int64)EXsensMapping::LeftFirstPP },
		{ "EXsensMapping::LeftFirstDP", (int64)EXsensMapping::LeftFirstDP },
		{ "EXsensMapping::LeftSecondMC", (int64)EXsensMapping::LeftSecondMC },
		{ "EXsensMapping::LeftSecondPP", (int64)EXsensMapping::LeftSecondPP },
		{ "EXsensMapping::LeftSecondMP", (int64)EXsensMapping::LeftSecondMP },
		{ "EXsensMapping::LeftSecondDP", (int64)EXsensMapping::LeftSecondDP },
		{ "EXsensMapping::LeftThirdMC", (int64)EXsensMapping::LeftThirdMC },
		{ "EXsensMapping::LeftThirdPP", (int64)EXsensMapping::LeftThirdPP },
		{ "EXsensMapping::LeftThirdMP", (int64)EXsensMapping::LeftThirdMP },
		{ "EXsensMapping::LeftThirdDP", (int64)EXsensMapping::LeftThirdDP },
		{ "EXsensMapping::LeftFourthMC", (int64)EXsensMapping::LeftFourthMC },
		{ "EXsensMapping::LeftFourthPP", (int64)EXsensMapping::LeftFourthPP },
		{ "EXsensMapping::LeftFourthMP", (int64)EXsensMapping::LeftFourthMP },
		{ "EXsensMapping::LeftFourthDP", (int64)EXsensMapping::LeftFourthDP },
		{ "EXsensMapping::LeftFifthMC", (int64)EXsensMapping::LeftFifthMC },
		{ "EXsensMapping::LeftFifthPP", (int64)EXsensMapping::LeftFifthPP },
		{ "EXsensMapping::LeftFifthMP", (int64)EXsensMapping::LeftFifthMP },
		{ "EXsensMapping::LeftFifthDP", (int64)EXsensMapping::LeftFifthDP },
		{ "EXsensMapping::RightCarpus", (int64)EXsensMapping::RightCarpus },
		{ "EXsensMapping::RightFirstMC", (int64)EXsensMapping::RightFirstMC },
		{ "EXsensMapping::RightFirstPP", (int64)EXsensMapping::RightFirstPP },
		{ "EXsensMapping::RightFirstDP", (int64)EXsensMapping::RightFirstDP },
		{ "EXsensMapping::RightSecondMC", (int64)EXsensMapping::RightSecondMC },
		{ "EXsensMapping::RightSecondPP", (int64)EXsensMapping::RightSecondPP },
		{ "EXsensMapping::RightSecondMP", (int64)EXsensMapping::RightSecondMP },
		{ "EXsensMapping::RightSecondDP", (int64)EXsensMapping::RightSecondDP },
		{ "EXsensMapping::RightThirdMC", (int64)EXsensMapping::RightThirdMC },
		{ "EXsensMapping::RightThirdPP", (int64)EXsensMapping::RightThirdPP },
		{ "EXsensMapping::RightThirdMP", (int64)EXsensMapping::RightThirdMP },
		{ "EXsensMapping::RightThirdDP", (int64)EXsensMapping::RightThirdDP },
		{ "EXsensMapping::RightFourthMC", (int64)EXsensMapping::RightFourthMC },
		{ "EXsensMapping::RightFourthPP", (int64)EXsensMapping::RightFourthPP },
		{ "EXsensMapping::RightFourthMP", (int64)EXsensMapping::RightFourthMP },
		{ "EXsensMapping::RightFourthDP", (int64)EXsensMapping::RightFourthDP },
		{ "EXsensMapping::RightFifthMC", (int64)EXsensMapping::RightFifthMC },
		{ "EXsensMapping::RightFifthPP", (int64)EXsensMapping::RightFifthPP },
		{ "EXsensMapping::RightFifthMP", (int64)EXsensMapping::RightFifthMP },
		{ "EXsensMapping::RightFifthDP", (int64)EXsensMapping::RightFifthDP },
		{ "EXsensMapping::Count", (int64)EXsensMapping::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensMapping_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LiveLinkMvnPlugin,
	nullptr,
	"EXsensMapping",
	"EXsensMapping",
	Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensMapping_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensMapping_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensMapping_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensMapping_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensMapping()
{
	if (!Z_Registration_Info_UEnum_EXsensMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EXsensMapping.InnerSingleton, Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensMapping_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EXsensMapping.InnerSingleton;
}
// End Enum EXsensMapping

// Begin Enum EXsensRetargetNamingConvention
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EXsensRetargetNamingConvention;
static UEnum* EXsensRetargetNamingConvention_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EXsensRetargetNamingConvention.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EXsensRetargetNamingConvention.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensRetargetNamingConvention, (UObject*)Z_Construct_UPackage__Script_LiveLinkMvnPlugin(), TEXT("EXsensRetargetNamingConvention"));
	}
	return Z_Registration_Info_UEnum_EXsensRetargetNamingConvention.OuterSingleton;
}
template<> LIVELINKMVNPLUGIN_API UEnum* StaticEnum<EXsensRetargetNamingConvention>()
{
	return EXsensRetargetNamingConvention_StaticEnum();
}
struct Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensRetargetNamingConvention_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Custom.Comment", "// Use custom Blueprint callback to compute bone names\n" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "EXsensRetargetNamingConvention::Custom" },
		{ "Custom.ToolTip", "Use custom Blueprint callback to compute bone names" },
		{ "Default.Comment", "// Default bone map used in Unreal engine and Metahuman\n" },
		{ "Default.DisplayName", "Unreal/Metahuman" },
		{ "Default.Name", "EXsensRetargetNamingConvention::Default" },
		{ "Default.ToolTip", "Default bone map used in Unreal engine and Metahuman" },
		{ "Manual.Comment", "// Manually set bone naming map in \"Remapping Assets: table\n" },
		{ "Manual.DisplayName", "Manual" },
		{ "Manual.Name", "EXsensRetargetNamingConvention::Manual" },
		{ "Manual.ToolTip", "Manually set bone naming map in \"Remapping Assets: table" },
		{ "Maya.Comment", "// Use Maya bone name convention\n" },
		{ "Maya.DisplayName", "Maya" },
		{ "Maya.Name", "EXsensRetargetNamingConvention::Maya" },
		{ "Maya.ToolTip", "Use Maya bone name convention" },
		{ "ModuleRelativePath", "Public/XsensMappingEnum.h" },
		{ "XSens.Comment", "// Use Xsens bone name convention\n" },
		{ "XSens.DisplayName", "Xsens" },
		{ "XSens.Name", "EXsensRetargetNamingConvention::XSens" },
		{ "XSens.ToolTip", "Use Xsens bone name convention" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EXsensRetargetNamingConvention::Default", (int64)EXsensRetargetNamingConvention::Default },
		{ "EXsensRetargetNamingConvention::Custom", (int64)EXsensRetargetNamingConvention::Custom },
		{ "EXsensRetargetNamingConvention::Maya", (int64)EXsensRetargetNamingConvention::Maya },
		{ "EXsensRetargetNamingConvention::XSens", (int64)EXsensRetargetNamingConvention::XSens },
		{ "EXsensRetargetNamingConvention::Manual", (int64)EXsensRetargetNamingConvention::Manual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensRetargetNamingConvention_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LiveLinkMvnPlugin,
	nullptr,
	"EXsensRetargetNamingConvention",
	"EXsensRetargetNamingConvention",
	Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensRetargetNamingConvention_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensRetargetNamingConvention_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensRetargetNamingConvention_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensRetargetNamingConvention_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensRetargetNamingConvention()
{
	if (!Z_Registration_Info_UEnum_EXsensRetargetNamingConvention.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EXsensRetargetNamingConvention.InnerSingleton, Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensRetargetNamingConvention_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EXsensRetargetNamingConvention.InnerSingleton;
}
// End Enum EXsensRetargetNamingConvention

// Begin Registration
struct Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_XsensMappingEnum_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EXsensMapping_StaticEnum, TEXT("EXsensMapping"), &Z_Registration_Info_UEnum_EXsensMapping, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2478821521U) },
		{ EXsensRetargetNamingConvention_StaticEnum, TEXT("EXsensRetargetNamingConvention"), &Z_Registration_Info_UEnum_EXsensRetargetNamingConvention, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3079108017U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_XsensMappingEnum_h_1349045837(TEXT("/Script/LiveLinkMvnPlugin"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_XsensMappingEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_XsensMappingEnum_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
