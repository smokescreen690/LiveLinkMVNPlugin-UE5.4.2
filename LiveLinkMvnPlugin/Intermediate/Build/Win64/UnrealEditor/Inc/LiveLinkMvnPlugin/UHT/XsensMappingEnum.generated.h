// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XsensMappingEnum.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKMVNPLUGIN_XsensMappingEnum_generated_h
#error "XsensMappingEnum.generated.h already included, missing '#pragma once' in XsensMappingEnum.h"
#endif
#define LIVELINKMVNPLUGIN_XsensMappingEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Rebuilt_LiveLinkMvnPlugin_HostProject_Plugins_LiveLinkMvnPlugin_Source_LiveLinkMvnPlugin_Public_XsensMappingEnum_h


#define FOREACH_ENUM_EXSENSMAPPING(op) \
	op(EXsensMapping::Root) \
	op(EXsensMapping::Pelvis) \
	op(EXsensMapping::L5) \
	op(EXsensMapping::L3) \
	op(EXsensMapping::T12) \
	op(EXsensMapping::T8) \
	op(EXsensMapping::Neck) \
	op(EXsensMapping::Head) \
	op(EXsensMapping::RightShoulder) \
	op(EXsensMapping::RightUpperArm) \
	op(EXsensMapping::RightForeArm) \
	op(EXsensMapping::RightHand) \
	op(EXsensMapping::LeftShoulder) \
	op(EXsensMapping::LeftUpperArm) \
	op(EXsensMapping::LeftForeArm) \
	op(EXsensMapping::LeftHand) \
	op(EXsensMapping::RightUpperLeg) \
	op(EXsensMapping::RightLowerLeg) \
	op(EXsensMapping::RightFoot) \
	op(EXsensMapping::RightToe) \
	op(EXsensMapping::LeftUpperLeg) \
	op(EXsensMapping::LeftLowerLeg) \
	op(EXsensMapping::LeftFoot) \
	op(EXsensMapping::LeftToe) \
	op(EXsensMapping::Prop1) \
	op(EXsensMapping::Prop2) \
	op(EXsensMapping::Prop3) \
	op(EXsensMapping::Prop4) \
	op(EXsensMapping::LeftCarpus) \
	op(EXsensMapping::LeftFirstMC) \
	op(EXsensMapping::LeftFirstPP) \
	op(EXsensMapping::LeftFirstDP) \
	op(EXsensMapping::LeftSecondMC) \
	op(EXsensMapping::LeftSecondPP) \
	op(EXsensMapping::LeftSecondMP) \
	op(EXsensMapping::LeftSecondDP) \
	op(EXsensMapping::LeftThirdMC) \
	op(EXsensMapping::LeftThirdPP) \
	op(EXsensMapping::LeftThirdMP) \
	op(EXsensMapping::LeftThirdDP) \
	op(EXsensMapping::LeftFourthMC) \
	op(EXsensMapping::LeftFourthPP) \
	op(EXsensMapping::LeftFourthMP) \
	op(EXsensMapping::LeftFourthDP) \
	op(EXsensMapping::LeftFifthMC) \
	op(EXsensMapping::LeftFifthPP) \
	op(EXsensMapping::LeftFifthMP) \
	op(EXsensMapping::LeftFifthDP) \
	op(EXsensMapping::RightCarpus) \
	op(EXsensMapping::RightFirstMC) \
	op(EXsensMapping::RightFirstPP) \
	op(EXsensMapping::RightFirstDP) \
	op(EXsensMapping::RightSecondMC) \
	op(EXsensMapping::RightSecondPP) \
	op(EXsensMapping::RightSecondMP) \
	op(EXsensMapping::RightSecondDP) \
	op(EXsensMapping::RightThirdMC) \
	op(EXsensMapping::RightThirdPP) \
	op(EXsensMapping::RightThirdMP) \
	op(EXsensMapping::RightThirdDP) \
	op(EXsensMapping::RightFourthMC) \
	op(EXsensMapping::RightFourthPP) \
	op(EXsensMapping::RightFourthMP) \
	op(EXsensMapping::RightFourthDP) \
	op(EXsensMapping::RightFifthMC) \
	op(EXsensMapping::RightFifthPP) \
	op(EXsensMapping::RightFifthMP) \
	op(EXsensMapping::RightFifthDP) \
	op(EXsensMapping::Count) 

enum class EXsensMapping : uint8;
template<> struct TIsUEnumClass<EXsensMapping> { enum { Value = true }; };
template<> LIVELINKMVNPLUGIN_API UEnum* StaticEnum<EXsensMapping>();

#define FOREACH_ENUM_EXSENSRETARGETNAMINGCONVENTION(op) \
	op(EXsensRetargetNamingConvention::Default) \
	op(EXsensRetargetNamingConvention::Custom) \
	op(EXsensRetargetNamingConvention::Maya) \
	op(EXsensRetargetNamingConvention::XSens) \
	op(EXsensRetargetNamingConvention::Manual) 

enum class EXsensRetargetNamingConvention : uint8;
template<> struct TIsUEnumClass<EXsensRetargetNamingConvention> { enum { Value = true }; };
template<> LIVELINKMVNPLUGIN_API UEnum* StaticEnum<EXsensRetargetNamingConvention>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
