// Fill out your copyright notice in the Description page of Project Settings.


#include "LiveLinkGameInstance.h"
#include "Features/IModularFeatures.h"
#include "LiveLinkClient.h"
#include "LiveLinkMvnSource.h"
#include "..\Public\LiveLinkGameInstance.h"

static ULiveLinkGameInstance* LLInstance;

static void SetPortNumber(const TArray< FString >& Args);

FAutoConsoleCommand TestMvnCommand(
	TEXT("mvn.Test"),
	TEXT("test making connection"),
	FConsoleCommandWithArgsDelegate::CreateStatic(&SetPortNumber));

static void SetPortNumber(const TArray< FString >& Args)
{
	uint16 NewPortNumber = 9763;
	if (Args.Num() > 0 && Args[0].Len() > 0)
	{
		NewPortNumber = FCString::Atoi(*Args[0]);
	}
	FLiveLinkClient* Client = &IModularFeatures::Get().GetModularFeature<FLiveLinkClient>(FLiveLinkClient::ModularFeatureName);
	check(Client);
	Client->RemoveSource(LLInstance->CurrentConnetion);
	LLInstance->CurrentConnetion = Client->AddSource(MakeShared<FLiveLinkMvnSource>(NewPortNumber, true));
	LLInstance->PortNumber = NewPortNumber;
}

ULiveLinkGameInstance::ULiveLinkGameInstance() : PortNumber(9763)
{
	LLInstance = this;
}

void ULiveLinkGameInstance::OnStart()
{
	Super::OnStart();

#if WITH_EDITOR
	return;
#endif

	SetPortNumber({ FString::FromInt(PortNumber) });
}

void ULiveLinkGameInstance::Shutdown()
{
	Super::Shutdown();

	FLiveLinkClient* Client = &IModularFeatures::Get().GetModularFeature<FLiveLinkClient>(FLiveLinkClient::ModularFeatureName);
	check(Client);
	Client->RemoveSource(MakeShared<FLiveLinkMvnSource>(PortNumber, true));
}

