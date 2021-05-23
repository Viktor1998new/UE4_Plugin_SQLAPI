// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SQLAPIPlugin/Public/SendSQLCommand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSendSQLCommand() {}
// Cross Module References
	SQLAPIPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SQLAPIPlugin();
	SQLAPIPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSQLTable();
	SQLAPIPLUGIN_API UClass* Z_Construct_UClass_USendSQLCommand_NoRegister();
	SQLAPIPLUGIN_API UClass* Z_Construct_UClass_USendSQLCommand();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics
	{
		struct _Script_SQLAPIPlugin_eventCompletedPin_Parms
		{
			bool Success;
			TArray<FSQLTable> Tables;
			FString msError;
		};
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_msError_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_msError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((_Script_SQLAPIPlugin_eventCompletedPin_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SQLAPIPlugin_eventCompletedPin_Parms), &Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::NewProp_Tables_Inner = { "Tables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSQLTable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::NewProp_Tables_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::NewProp_Tables = { "Tables", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SQLAPIPlugin_eventCompletedPin_Parms, Tables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::NewProp_Tables_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::NewProp_Tables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::NewProp_msError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::NewProp_msError = { "msError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SQLAPIPlugin_eventCompletedPin_Parms, msError), METADATA_PARAMS(Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::NewProp_msError_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::NewProp_msError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::NewProp_Tables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::NewProp_Tables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::NewProp_msError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SendSQLCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SQLAPIPlugin, nullptr, "CompletedPin__DelegateSignature", nullptr, nullptr, sizeof(_Script_SQLAPIPlugin_eventCompletedPin_Parms), Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FSQLTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQLAPIPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FSQLTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQLTable, Z_Construct_UPackage__Script_SQLAPIPlugin(), TEXT("SQLTable"), sizeof(FSQLTable), Get_Z_Construct_UScriptStruct_FSQLTable_Hash());
	}
	return Singleton;
}
template<> SQLAPIPLUGIN_API UScriptStruct* StaticStruct<FSQLTable>()
{
	return FSQLTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQLTable(FSQLTable::StaticStruct, TEXT("/Script/SQLAPIPlugin"), TEXT("SQLTable"), false, nullptr, nullptr);
static struct FScriptStruct_SQLAPIPlugin_StaticRegisterNativesFSQLTable
{
	FScriptStruct_SQLAPIPlugin_StaticRegisterNativesFSQLTable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQLTable")),new UScriptStruct::TCppStructOps<FSQLTable>);
	}
} ScriptStruct_SQLAPIPlugin_StaticRegisterNativesFSQLTable;
	struct Z_Construct_UScriptStruct_FSQLTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Raws_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Raws_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Raws_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Raws;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SendSQLCommand.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSQLTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSQLTable>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLTable_Statics::NewProp_Raws_ValueProp = { "Raws", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLTable_Statics::NewProp_Raws_Key_KeyProp = { "Raws_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLTable_Statics::NewProp_Raws_MetaData[] = {
		{ "Category", "SQLTable" },
		{ "ModuleRelativePath", "Public/SendSQLCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSQLTable_Statics::NewProp_Raws = { "Raws", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLTable, Raws), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLTable_Statics::NewProp_Raws_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLTable_Statics::NewProp_Raws_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSQLTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLTable_Statics::NewProp_Raws_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLTable_Statics::NewProp_Raws_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLTable_Statics::NewProp_Raws,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSQLTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SQLAPIPlugin,
		nullptr,
		&NewStructOps,
		"SQLTable",
		sizeof(FSQLTable),
		alignof(FSQLTable),
		Z_Construct_UScriptStruct_FSQLTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSQLTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSQLTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SQLAPIPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQLTable"), sizeof(FSQLTable), Get_Z_Construct_UScriptStruct_FSQLTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSQLTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQLTable_Hash() { return 1746269398U; }
	DEFINE_FUNCTION(USendSQLCommand::execSendSQLCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IPAddress);
		P_GET_PROPERTY(FStrProperty,Z_Param_BDName);
		P_GET_PROPERTY(FStrProperty,Z_Param_User);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY(FStrProperty,Z_Param_Query);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USendSQLCommand**)Z_Param__Result=USendSQLCommand::SendSQLCommand(Z_Param_IPAddress,Z_Param_BDName,Z_Param_User,Z_Param_Password,Z_Param_Query);
		P_NATIVE_END;
	}
	void USendSQLCommand::StaticRegisterNativesUSendSQLCommand()
	{
		UClass* Class = USendSQLCommand::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendSQLCommand", &USendSQLCommand::execSendSQLCommand },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics
	{
		struct SendSQLCommand_eventSendSQLCommand_Parms
		{
			FString IPAddress;
			FString BDName;
			FString User;
			FString Password;
			FString Query;
			USendSQLCommand* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IPAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BDName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BDName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_User;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendSQLCommand_eventSendSQLCommand_Parms, IPAddress), METADATA_PARAMS(Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_IPAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_BDName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_BDName = { "BDName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendSQLCommand_eventSendSQLCommand_Parms, BDName), METADATA_PARAMS(Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_BDName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_BDName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_User_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendSQLCommand_eventSendSQLCommand_Parms, User), METADATA_PARAMS(Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_User_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendSQLCommand_eventSendSQLCommand_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendSQLCommand_eventSendSQLCommand_Parms, Query), METADATA_PARAMS(Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_Query_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendSQLCommand_eventSendSQLCommand_Parms, ReturnValue), Z_Construct_UClass_USendSQLCommand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_IPAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_BDName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_Query,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SQL" },
		{ "ModuleRelativePath", "Public/SendSQLCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USendSQLCommand, nullptr, "SendSQLCommand", nullptr, nullptr, sizeof(SendSQLCommand_eventSendSQLCommand_Parms), Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USendSQLCommand_SendSQLCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USendSQLCommand_SendSQLCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USendSQLCommand_NoRegister()
	{
		return USendSQLCommand::StaticClass();
	}
	struct Z_Construct_UClass_USendSQLCommand_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USendSQLCommand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SQLAPIPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USendSQLCommand_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USendSQLCommand_SendSQLCommand, "SendSQLCommand" }, // 4047893547
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USendSQLCommand_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SendSQLCommand.h" },
		{ "ModuleRelativePath", "Public/SendSQLCommand.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USendSQLCommand_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SendSQLCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USendSQLCommand_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USendSQLCommand, Completed), Z_Construct_UDelegateFunction_SQLAPIPlugin_CompletedPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USendSQLCommand_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USendSQLCommand_Statics::NewProp_Completed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USendSQLCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USendSQLCommand_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USendSQLCommand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USendSQLCommand>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USendSQLCommand_Statics::ClassParams = {
		&USendSQLCommand::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USendSQLCommand_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USendSQLCommand_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USendSQLCommand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USendSQLCommand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USendSQLCommand()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USendSQLCommand_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USendSQLCommand, 45238655);
	template<> SQLAPIPLUGIN_API UClass* StaticClass<USendSQLCommand>()
	{
		return USendSQLCommand::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USendSQLCommand(Z_Construct_UClass_USendSQLCommand, &USendSQLCommand::StaticClass, TEXT("/Script/SQLAPIPlugin"), TEXT("USendSQLCommand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USendSQLCommand);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
