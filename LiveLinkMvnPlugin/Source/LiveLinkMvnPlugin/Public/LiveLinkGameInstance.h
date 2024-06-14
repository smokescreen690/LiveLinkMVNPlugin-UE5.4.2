// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "LiveLinkGameInstance.generated.h"

UCLASS()
class LIVELINKMVNPLUGIN_API ULiveLinkGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ULiveLinkGameInstance();
	//void SetPortNumber(const TArray< FString >& Args);

protected:
	// Called when the game starts or when spawned
	virtual void OnStart() override;
	virtual void Shutdown() override;

public:	
	UPROPERTY(EditAnywhere, Category  = "LiveLink")
	uint16 PortNumber;
	FGuid CurrentConnetion;

};
