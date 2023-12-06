//Copyright(c) 2022, Viktor.F.P

#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UObject/Object.h"
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

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompletedPin, const TArray<FSQLTable>&, Answer);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFail, const FString&, MsError);

UCLASS(EditInlineNew, BlueprintType)
class SQLAPIPLUGIN_API USQL : public UObject
{
	GENERATED_BODY()

public:
	
	SAConnection con;

	UPROPERTY(BlueprintReadOnly)
		FString SQLBDName;

	UPROPERTY(BlueprintAssignable)
		FOnFail OnFail;

	UFUNCTION(BlueprintCallable, Category = "SQL")
		void Disconnect() {
			con.Disconnect();
		}

	UFUNCTION(BlueprintPure, Category = "SQL")
		bool IsConnected() {
			return con.isConnected();
		}
};

UCLASS()
class SQLAPIPLUGIN_API USQLQuery : public UBlueprintAsyncActionBase
{
	GENERATED_UCLASS_BODY()
public:

	UPROPERTY(BlueprintAssignable)
		FCompletedPin Success;

	UPROPERTY(BlueprintAssignable)
		FOnFail OnFail;

	virtual void Activate() override;

public:

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "SQL")
	static USQLQuery* SQLQuery(USQL* SQL, const FString Query) {
	
		USQLQuery* BlueprintNode = NewObject<USQLQuery>();
		BlueprintNode->SQL = SQL;
		BlueprintNode->Query = Query;
		return BlueprintNode;

	};

private:

	USQL* SQL;

	FString Query;
	
};

UCLASS()
class SQLAPIPLUGIN_API USQLConnect : public UBlueprintAsyncActionBase
{
	GENERATED_UCLASS_BODY()
public:

	UPROPERTY(BlueprintAssignable)
		FSuccess Success;
		
	UPROPERTY(BlueprintAssignable)
		FOnFail OnFail;

		virtual void Activate() override;
public:

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "SQL")
		static USQLConnect* SQLConnect(USQL* SQL,const FString IPAddress, const FString BDName, const FString User, const FString Password) {
			USQLConnect* BlueprintNode = NewObject<USQLConnect>();
			BlueprintNode->SQLBDName = FString::Printf(TEXT("%s@%s"), *IPAddress, *BDName);
			BlueprintNode->SQLUser = User;
			BlueprintNode->SQLPassword = Password;
			SQL->SQLBDName = BlueprintNode->SQLBDName;
			BlueprintNode->SQL = SQL;
			return BlueprintNode;

		};


private:

	FString SQLBDName;

	FString SQLUser;

	FString SQLPassword;

	USQL* SQL;
};
