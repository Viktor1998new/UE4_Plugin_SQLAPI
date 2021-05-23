// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SQLAPIPLUGIN_SQLObject_generated_h
#error "SQLObject.generated.h already included, missing '#pragma once' in SQLObject.h"
#endif
#define SQLAPIPLUGIN_SQLObject_generated_h

#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_31_SPARSE_DATA
#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_31_RPC_WRAPPERS
#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQLObject(); \
	friend struct Z_Construct_UClass_USQLObject_Statics; \
public: \
	DECLARE_CLASS(USQLObject, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SQLAPIPlugin"), NO_API) \
	DECLARE_SERIALIZER(USQLObject) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUSQLObject(); \
	friend struct Z_Construct_UClass_USQLObject_Statics; \
public: \
	DECLARE_CLASS(USQLObject, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SQLAPIPlugin"), NO_API) \
	DECLARE_SERIALIZER(USQLObject) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQLObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQLObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQLObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQLObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQLObject(USQLObject&&); \
	NO_API USQLObject(const USQLObject&); \
public:


#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQLObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQLObject(USQLObject&&); \
	NO_API USQLObject(const USQLObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQLObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQLObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQLObject)


#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_31_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_28_PROLOG
#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_31_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_31_SPARSE_DATA \
	MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_31_RPC_WRAPPERS \
	MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_31_INCLASS \
	MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_31_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_31_SPARSE_DATA \
	MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_31_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SQLAPIPLUGIN_API UClass* StaticClass<class USQLObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_SQLAPIPlugin_Source_SQLAPIPlugin_Public_SQLObject_h


#define FOREACH_ENUM_ESQLCLIENT(op) \
	op(SA_NotSpecified) \
	op(SA_ODBC) \
	op(SA_Oracle) \
	op(SA_SQLServer) \
	op(SA_InterBase) \
	op(SA_SQLBase) \
	op(SA_DB2) \
	op(SA_Informix) \
	op(SA_Sybase) \
	op(SA_MySQL) \
	op(SA_PostgreSQL) \
	op(SA_SQLite) \
	op(SA_SQLAnywhere) \
	op(SA_CubeSQL) \
	op(SA_DuckDB) \
	op(SA_Reserved) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
