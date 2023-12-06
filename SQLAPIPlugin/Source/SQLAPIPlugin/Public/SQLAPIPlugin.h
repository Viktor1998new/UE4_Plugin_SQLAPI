//Copyright(c) 2022, Viktor.F.P

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogSQLAPI, Log, All);

class USQLObject;

class FSQLAPIPluginModule : public IModuleInterface
{
public:

	USQLObject* ModuleSettings;

	static inline FSQLAPIPluginModule& Get()
	{
		return FModuleManager::LoadModuleChecked<FSQLAPIPluginModule>("SQLAPIPlugin");
	}

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
