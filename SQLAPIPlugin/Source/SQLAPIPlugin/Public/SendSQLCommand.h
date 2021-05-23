// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include <SQLAPI.h>
#include "SendSQLCommand.generated.h"

USTRUCT(BlueprintType)
struct FSQLTable
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(BlueprintReadOnly)
		TMap<FString, FString> Raws;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCompletedPin, bool, Success, const TArray<FSQLTable>&, Tables, const FString&, msError);

UCLASS()
class SQLAPIPLUGIN_API USendSQLCommand : public UBlueprintAsyncActionBase
{
	GENERATED_UCLASS_BODY()
public:

	UPROPERTY(BlueprintAssignable)
		FCompletedPin Completed;

	virtual void Activate() override;

public:

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "SQL")
		static USendSQLCommand* SendSQLCommand(const FString IPAddress, const FString BDName, const FString User, const FString Password, const FString Query);

	FString ConverterSaString(SAString Value);

private:

	FString SQLIPAddress;

	FString SQLBDName;

	FString SQLUser;

	FString SQLPassword;

	FString SQLQuery;
	
};
