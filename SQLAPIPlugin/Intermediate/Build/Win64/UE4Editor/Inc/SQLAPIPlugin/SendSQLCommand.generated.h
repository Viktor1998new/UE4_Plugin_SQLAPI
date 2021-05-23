// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSQLTable;
class USendSQLCommand;
#ifdef SQLAPIPLUGIN_SendSQLCommand_generated_h
#error "SendSQLCommand.generated.h already included, missing '#pragma once' in SendSQLCommand.h"
#endif
#define SQLAPIPLUGIN_SendSQLCommand_generated_h

#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSQLTable_Statics; \
	SQLAPIPLUGIN_API static class UScriptStruct* StaticStruct();


template<> SQLAPIPLUGIN_API UScriptStruct* StaticStruct<struct FSQLTable>();

#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_20_DELEGATE \
struct _Script_SQLAPIPlugin_eventCompletedPin_Parms \
{ \
	bool Success; \
	TArray<FSQLTable> Tables; \
	FString msError; \
}; \
static inline void FCompletedPin_DelegateWrapper(const FMulticastScriptDelegate& CompletedPin, bool Success, TArray<FSQLTable> const& Tables, const FString& msError) \
{ \
	_Script_SQLAPIPlugin_eventCompletedPin_Parms Parms; \
	Parms.Success=Success ? true : false; \
	Parms.Tables=Tables; \
	Parms.msError=msError; \
	CompletedPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_25_SPARSE_DATA
#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendSQLCommand);


#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendSQLCommand);


#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSendSQLCommand(); \
	friend struct Z_Construct_UClass_USendSQLCommand_Statics; \
public: \
	DECLARE_CLASS(USendSQLCommand, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SQLAPIPlugin"), NO_API) \
	DECLARE_SERIALIZER(USendSQLCommand)


#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUSendSQLCommand(); \
	friend struct Z_Construct_UClass_USendSQLCommand_Statics; \
public: \
	DECLARE_CLASS(USendSQLCommand, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SQLAPIPlugin"), NO_API) \
	DECLARE_SERIALIZER(USendSQLCommand)


#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USendSQLCommand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USendSQLCommand) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USendSQLCommand); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USendSQLCommand); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USendSQLCommand(USendSQLCommand&&); \
	NO_API USendSQLCommand(const USendSQLCommand&); \
public:


#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USendSQLCommand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USendSQLCommand(USendSQLCommand&&); \
	NO_API USendSQLCommand(const USendSQLCommand&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USendSQLCommand); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USendSQLCommand); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USendSQLCommand)


#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_25_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_22_PROLOG
#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_25_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_25_SPARSE_DATA \
	MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_25_RPC_WRAPPERS \
	MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_25_INCLASS \
	MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_25_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_25_SPARSE_DATA \
	MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_25_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SendSQLCommand."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SQLAPIPLUGIN_API UClass* StaticClass<class USendSQLCommand>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SendSQLCommand_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
