// Copyright 2018 Movella Technologies B.V., Inc. All Rights Reserved.

#include "LiveLinkMvnSourceEditor.h"
#include "LiveLinkMessages.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Input/SEditableTextBox.h"

#include "MessageEndpointBuilder.h"

#define LOCTEXT_NAMESPACE "LiveLinkMvnSourceEditor"

SLiveLinkMvnSourceEditor::~SLiveLinkMvnSourceEditor()
{
}

void SLiveLinkMvnSourceEditor::Construct(const FArguments& Args)
{
	OkClicked = Args._OnOkClicked;
	LastTickTime = 0.0;

	ChildSlot
	[
		SNew(SBox)
		.WidthOverride(250)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.HAlign(HAlign_Left)
				.FillWidth(0.5f)
				[
					SNew(STextBlock)
					.Text(LOCTEXT("MVNPortNumber", "Port Number"))
				]
				+ SHorizontalBox::Slot()
				.HAlign(HAlign_Fill)
				.FillWidth(0.5f)
				[
					SNew(SEditableTextBox)
					.Text(this, &SLiveLinkMvnSourceEditor::GetPort)
					.OnTextChanged_Raw(this, &SLiveLinkMvnSourceEditor::GetTextFromInput)
				]
			]
			+ SVerticalBox::Slot()
			.HAlign(HAlign_Right)
			.AutoHeight()
			[
				SNew(SButton)
				.OnClicked(this, &SLiveLinkMvnSourceEditor::OnOkClicked)
				[
					SNew(STextBlock)
					.Text(LOCTEXT("Ok", "Ok"))
				]
			]
		]
	];

	/*ChildSlot
	[
		SNew(SBox)
		.HeightOverride(100)
		.WidthOverride(200)
	 	[
			 SNew(SEditableTextBox)
		 	.Text( this, &SLiveLinkMvnSourceEditor::GetPort )
 		 	.OnTextChanged_Raw(this, &SLiveLinkMvnSourceEditor::GetTextFromInput)
		]
	];*/
}

FText SLiveLinkMvnSourceEditor::GetPort() const
{
	FString str = FString::FromInt( port );
	return FText::FromString(str);
}


void SLiveLinkMvnSourceEditor::GetTextFromInput(const FText & Text)
{
	port = FCString::Atoi(*Text.ToString());
	UE_LOG(LogTemp, Warning, TEXT("GetTextFromInput %d"), port);
}

void SLiveLinkMvnSourceEditor::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	const double CurrentTickTime = FPlatformTime::Seconds();
	LastTickTime = CurrentTickTime;
}


FReply SLiveLinkMvnSourceEditor::OnOkClicked()
{
	OkClicked.ExecuteIfBound(port);
	return FReply::Handled();
}

#undef LOCTEXT_NAMESPACE
