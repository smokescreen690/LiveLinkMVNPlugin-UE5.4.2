// Copyright 2018 Movella Technologies B.V., Inc. All Rights Reserved.

#pragma once

#include "LiveLinkSourceFactory.h"
#include "LiveLinkMessages.h"

#include "LiveLinkMvnSourceFactory.generated.h"

class SLiveLinkMvnSourceEditor;

//UCLASS()
class FLiveLinkMvnEditorPanel //: public SPanel
{
//	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, Category = "LiveLink")
	int Port;
	
	FLiveLinkMvnEditorPanel() : Port(9763) {}
};

UCLASS()
class ULiveLinkMvnSourceFactory : public ULiveLinkSourceFactory
{
public:

	GENERATED_BODY()

	virtual FText GetSourceDisplayName() const;
	virtual FText GetSourceTooltip() const;
	
	virtual EMenuType GetMenuType() const override { return EMenuType::SubPanel; }
	virtual TSharedPtr<SWidget> BuildCreationPanel(FOnLiveLinkSourceCreated OnLiveLinkSourceCreated) const override;
	virtual TSharedPtr<ILiveLinkSource> CreateSource(const FString& ConnectionString) const override;

private:
	void OnOkClicked(int32 InPort, FOnLiveLinkSourceCreated OnLiveLinkSourceCreated) const;

	TSharedPtr<SLiveLinkMvnSourceEditor> ActiveSourceEditor;
	
};
