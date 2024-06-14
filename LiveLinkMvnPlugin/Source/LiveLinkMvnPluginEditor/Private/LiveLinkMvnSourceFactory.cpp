// Copyright 2018 Movella Technologies B.V., Inc. All Rights Reserved.

#include "LiveLinkMvnSourceFactory.h"
#include "LiveLinkMvnSource.h"
#include "LiveLinkMvnSourceEditor.h"

#define LOCTEXT_NAMESPACE "LiveLinkMvnSourceFactory"

FText ULiveLinkMvnSourceFactory::GetSourceDisplayName() const
{
	return LOCTEXT("SourceDisplayName", "Xsens Live Source");
}

FText ULiveLinkMvnSourceFactory::GetSourceTooltip() const
{
	return LOCTEXT("SourceTooltip", "Creates a connection to a MVN Live Stream");
}

TSharedPtr<SWidget> ULiveLinkMvnSourceFactory::BuildCreationPanel(FOnLiveLinkSourceCreated InOnLiveLinkSourceCreated) const
{
	return SNew(SLiveLinkMvnSourceEditor)
		.OnOkClicked(SLiveLinkMvnSourceEditor::FOnOkClicked::CreateUObject(this, &ULiveLinkMvnSourceFactory::OnOkClicked, InOnLiveLinkSourceCreated));
}

TSharedPtr<ILiveLinkSource> ULiveLinkMvnSourceFactory::CreateSource(const FString& ConnectionString) const
{
	const int32 Port = FCString::Atoi(*ConnectionString);
	const bool bIsRunning = true;
	
	return MakeShared<FLiveLinkMvnSource>(Port, bIsRunning);
}

void ULiveLinkMvnSourceFactory::OnOkClicked(int32 InPort, FOnLiveLinkSourceCreated InOnLiveLinkSourceCreated) const
{
	InOnLiveLinkSourceCreated.ExecuteIfBound(MakeShared<FLiveLinkMvnSource>(InPort, true), FString());
}

#undef LOCTEXT_NAMESPACE
