// Copyright 2018 Movella Technologies B.V., Inc. All Rights Reserved.

#pragma once

#include "Widgets/SCompoundWidget.h"
#include "Widgets/Views/SListView.h"
#include "IMessageContext.h"
#include "MessageEndpoint.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Misc/Guid.h"

struct FLiveLinkPongMessage;
struct FMessageAddress;
class ITableRow;
class STableViewBase;

class SLiveLinkMvnSourceEditor : public SCompoundWidget
{
public:
	DECLARE_DELEGATE_OneParam(FOnOkClicked, int32);

	SLATE_BEGIN_ARGS(SLiveLinkMvnSourceEditor)
	{
	}
	SLATE_ATTRIBUTE(int32, Test)
	SLATE_EVENT(FOnOkClicked, OnOkClicked)
	
	SLATE_END_ARGS()
	
	~SLiveLinkMvnSourceEditor();

	void Construct(const FArguments& Args);

	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime);
public:
	int port = 9763;
	
private:
	FText GetPort() const;
	void GetTextFromInput(const FText & Text);
	FReply OnOkClicked();

	TAttribute<int32> Test;
	FGuid CurrentPollRequest;

	FOnOkClicked OkClicked;


	// Time since our UI was last ticked, allow us to refresh if we haven't been onscreen for a while
	double LastTickTime;
};

