// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SQLAPIPlugin/Public/SQLObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQLObject() {}
// Cross Module References
	SQLAPIPLUGIN_API UEnum* Z_Construct_UEnum_SQLAPIPlugin_ESQLClient();
	UPackage* Z_Construct_UPackage__Script_SQLAPIPlugin();
	SQLAPIPLUGIN_API UClass* Z_Construct_UClass_USQLObject_NoRegister();
	SQLAPIPLUGIN_API UClass* Z_Construct_UClass_USQLObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ESQLClient_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SQLAPIPlugin_ESQLClient, Z_Construct_UPackage__Script_SQLAPIPlugin(), TEXT("ESQLClient"));
		}
		return Singleton;
	}
	template<> SQLAPIPLUGIN_API UEnum* StaticEnum<ESQLClient>()
	{
		return ESQLClient_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESQLClient(ESQLClient_StaticEnum, TEXT("/Script/SQLAPIPlugin"), TEXT("ESQLClient"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SQLAPIPlugin_ESQLClient_Hash() { return 2399581417U; }
	UEnum* Z_Construct_UEnum_SQLAPIPlugin_ESQLClient()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SQLAPIPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESQLClient"), 0, Get_Z_Construct_UEnum_SQLAPIPlugin_ESQLClient_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SA_NotSpecified", (int64)SA_NotSpecified },
				{ "SA_ODBC", (int64)SA_ODBC },
				{ "SA_Oracle", (int64)SA_Oracle },
				{ "SA_SQLServer", (int64)SA_SQLServer },
				{ "SA_InterBase", (int64)SA_InterBase },
				{ "SA_SQLBase", (int64)SA_SQLBase },
				{ "SA_DB2", (int64)SA_DB2 },
				{ "SA_Informix", (int64)SA_Informix },
				{ "SA_Sybase", (int64)SA_Sybase },
				{ "SA_MySQL", (int64)SA_MySQL },
				{ "SA_PostgreSQL", (int64)SA_PostgreSQL },
				{ "SA_SQLite", (int64)SA_SQLite },
				{ "SA_SQLAnywhere", (int64)SA_SQLAnywhere },
				{ "SA_CubeSQL", (int64)SA_CubeSQL },
				{ "SA_DuckDB", (int64)SA_DuckDB },
				{ "SA_Reserved", (int64)SA_Reserved },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SQLObject.h" },
				{ "SA_CubeSQL.DisplayName", "CubeSQL" },
				{ "SA_CubeSQL.Name", "SA_CubeSQL" },
				{ "SA_DB2.DisplayName", "IBM DB2" },
				{ "SA_DB2.Name", "SA_DB2" },
				{ "SA_DuckDB.DisplayName", "DuckDB" },
				{ "SA_DuckDB.Name", "SA_DuckDB" },
				{ "SA_Informix.DisplayName", "Informix" },
				{ "SA_Informix.Name", "SA_Informix" },
				{ "SA_InterBase.DisplayName", "InterBase / Firebird" },
				{ "SA_InterBase.Name", "SA_InterBase" },
				{ "SA_MySQL.DisplayName", "MySQL / MariaDB" },
				{ "SA_MySQL.Name", "SA_MySQL" },
				{ "SA_NotSpecified.DisplayName", "DBMS client is not specified" },
				{ "SA_NotSpecified.Name", "SA_NotSpecified" },
				{ "SA_ODBC.DisplayName", "ODBC" },
				{ "SA_ODBC.Name", "SA_ODBC" },
				{ "SA_Oracle.DisplayName", "Oracle" },
				{ "SA_Oracle.Name", "SA_Oracle" },
				{ "SA_PostgreSQL.DisplayName", "PostgreSQL" },
				{ "SA_PostgreSQL.Name", "SA_PostgreSQL" },
				{ "SA_Reserved.DisplayName", "Reserved" },
				{ "SA_Reserved.Name", "SA_Reserved" },
				{ "SA_SQLAnywhere.DisplayName", "SQL Anywhere" },
				{ "SA_SQLAnywhere.Name", "SA_SQLAnywhere" },
				{ "SA_SQLBase.DisplayName", "SQLBase" },
				{ "SA_SQLBase.Name", "SA_SQLBase" },
				{ "SA_SQLite.DisplayName", "SQLite" },
				{ "SA_SQLite.Name", "SA_SQLite" },
				{ "SA_SQLServer.DisplayName", "Microsoft SQL Server" },
				{ "SA_SQLServer.Name", "SA_SQLServer" },
				{ "SA_Sybase.DisplayName", "Sybase ASE" },
				{ "SA_Sybase.Name", "SA_Sybase" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SQLAPIPlugin,
				nullptr,
				"ESQLClient",
				"ESQLClient",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USQLObject::StaticRegisterNativesUSQLObject()
	{
	}
	UClass* Z_Construct_UClass_USQLObject_NoRegister()
	{
		return USQLObject::StaticClass();
	}
	struct Z_Construct_UClass_USQLObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SQLClient_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SQLClient;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USQLObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SQLAPIPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQLObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SQLObject.h" },
		{ "ModuleRelativePath", "Public/SQLObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQLObject_Statics::NewProp_SQLClient_MetaData[] = {
		{ "Category", "SQLSettings" },
		{ "ModuleRelativePath", "Public/SQLObject.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USQLObject_Statics::NewProp_SQLClient = { "SQLClient", nullptr, (EPropertyFlags)0x0010000000004015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USQLObject, SQLClient), Z_Construct_UEnum_SQLAPIPlugin_ESQLClient, METADATA_PARAMS(Z_Construct_UClass_USQLObject_Statics::NewProp_SQLClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQLObject_Statics::NewProp_SQLClient_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USQLObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQLObject_Statics::NewProp_SQLClient,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USQLObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USQLObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USQLObject_Statics::ClassParams = {
		&USQLObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USQLObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USQLObject_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USQLObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USQLObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USQLObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USQLObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQLObject, 3810428978);
	template<> SQLAPIPLUGIN_API UClass* StaticClass<USQLObject>()
	{
		return USQLObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQLObject(Z_Construct_UClass_USQLObject, &USQLObject::StaticClass, TEXT("/Script/SQLAPIPlugin"), TEXT("USQLObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQLObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
