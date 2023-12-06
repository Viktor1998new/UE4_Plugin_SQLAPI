// Fill out your copyright notice in the Description page of Project Settings.

//Copyright(c) 2022, Viktor.F.P

#pragma once
#include "CoreMinimal.h"
#include "SQLObject.generated.h"

UENUM(BlueprintType)
enum  ESQLClient {
	SA_NotSpecified  UMETA(DisplayName = "DBMS client is not specified"),
	SA_ODBC UMETA(DisplayName = "ODBC"),
	SA_Oracle UMETA(DisplayName = "Oracle"),
	SA_SQLServer UMETA(DisplayName = "Microsoft SQL Server"),
	SA_InterBase UMETA(DisplayName = "InterBase / Firebird"),
	SA_SQLBase UMETA(DisplayName = "SQLBase"),
	SA_DB2  UMETA(DisplayName = "IBM DB2"),
	SA_Informix UMETA(DisplayName = "Informix"),
	SA_Sybase UMETA(DisplayName = "Sybase ASE"),
	SA_MySQL UMETA(DisplayName = "MySQL / MariaDB"),
	SA_PostgreSQL UMETA(DisplayName = "PostgreSQL"),
	SA_SQLite UMETA(DisplayName = "SQLite"),
	SA_SQLAnywhere UMETA(DisplayName = "SQL Anywhere"),
	SA_CubeSQL UMETA(DisplayName = "CubeSQL"),
	SA_DuckDB UMETA(DisplayName = "DuckDB"),
	SA_Reserved = (int)(((unsigned int)(-1)) / 2) UMETA(DisplayName = "Reserved")
};										    

UCLASS(config = Engine, defaultconfig)
class SQLAPIPLUGIN_API USQLObject : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(config,EditAnywhere, BlueprintReadOnly, Category = "SQLSettings")
		TEnumAsByte<ESQLClient> SQLClient;
};
