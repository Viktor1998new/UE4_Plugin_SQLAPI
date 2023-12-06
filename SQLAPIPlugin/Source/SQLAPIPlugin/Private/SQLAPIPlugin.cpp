//Copyright(c) 2022, Viktor.F.P

#include "SQLAPIPlugin.h"
#include "Developer/Settings/Public/ISettingsModule.h"
#include "SQLObject.h"

#define LOCTEXT_NAMESPACE "FSQLAPIPluginModule"
DEFINE_LOG_CATEGORY(LogSQLAPI)

void FSQLAPIPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
    if (PLATFORM_WINDOWS) {

        FString PluginPath;

        if (FPaths::DirectoryExists(FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("SQLAPIPlugin")))) {
            PluginPath = FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("SQLAPIPlugin"));
        }
        else if (FPaths::DirectoryExists(FPaths::Combine(FPaths::EnginePluginsDir(), TEXT("Marketplace"), TEXT("SQLAPIPlugin"))))
        {
            PluginPath = FPaths::Combine(FPaths::EnginePluginsDir(), TEXT("Marketplace"), TEXT("SQLAPIPlugin"));
        }

        FString LibPath = FPaths::Combine(PluginPath, TEXT("Source"), TEXT("ThirdParty"), TEXT("SQLAPI"), TEXT("bin"));
        
        TArray<FString> DLLFiles;
        DLLFiles.Add(TEXT("sqlapi.dll"));
        DLLFiles.Add(TEXT("sqlapid.dll"));
        DLLFiles.Add(TEXT("sqlapiu.dll"));
        DLLFiles.Add(TEXT("sqlapiud.dll"));

        FPlatformProcess::AddDllDirectory(*LibPath);

        for (FString DLL : DLLFiles) {
            if (FPaths::FileExists(FPaths::Combine(LibPath, DLL)))
            {

                FPlatformProcess::GetDllHandle(*DLL); // auto-load dll with plugin - needed as 4.11 breaks above line.
                UE_LOG(LogSQLAPI, Log, TEXT("DLL Load: %s"), *DLL);
            }
            else {
                UE_LOG(LogSQLAPI, Log, TEXT("Path: %s"), *PluginPath);
                checkf(false,TEXT("Failed to load dll"));
            }
        }
    }


    ModuleSettings = GetMutableDefault<USQLObject>();

    // Register settings
    if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
    {
        SettingsModule->RegisterSettings("Project", "Plugins", "SQL",
            LOCTEXT("RuntimeSettingsName", "SQLAPIPlugin"),
            LOCTEXT("RuntimeSettingsDescription", "Configure SQL plugin"),
            ModuleSettings);
    }
}

void FSQLAPIPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSQLAPIPluginModule, SQLAPIPlugin)