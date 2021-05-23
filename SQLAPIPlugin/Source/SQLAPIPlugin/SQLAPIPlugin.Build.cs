// Copyright Epic Games, Inc. All Rights Reserved.
using System.IO;
using UnrealBuildTool;

public class SQLAPIPlugin : ModuleRules
{
	private string ModulePath
	{
		get { return ModuleDirectory; }
	}

	private string ThirdPartyPath
	{
		get { return Path.GetFullPath(Path.Combine(ModulePath, "../../ThirdParty/")); }
	}

	public SQLAPIPlugin(ReadOnlyTargetRules Target) : base(Target)
	{

	PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);

		string LibPath = Path.Combine(ThirdPartyPath, "SQLAPI", "lib");

        PublicAdditionalLibraries.Add(Path.Combine(LibPath, "sqlapi.lib"));
        PublicAdditionalLibraries.Add(Path.Combine(LibPath, "sqlapiu.lib"));
        PublicAdditionalLibraries.Add(Path.Combine(LibPath, "sqlapiud.lib"));
        PublicAdditionalLibraries.Add(Path.Combine(LibPath, "sqlapid.lib"));
        PublicAdditionalLibraries.Add(Path.Combine(LibPath, "sqlapis.lib"));
		PublicAdditionalLibraries.Add(Path.Combine(LibPath, "sqlapisd.lib"));
		PublicAdditionalLibraries.Add(Path.Combine(LibPath, "sqlapius.lib"));
		PublicAdditionalLibraries.Add(Path.Combine(LibPath, "sqlapiusd.lib"));

        // TODO: Copy dlls to alternative package directory, to be loaded through a manual process
        PublicDelayLoadDLLs.Add("sqlapi.dll");
		RuntimeDependencies.Add(Path.Combine(LibPath, "sqlapi.dll"));

		PublicDelayLoadDLLs.Add("sqlapid.dll");
		RuntimeDependencies.Add(Path.Combine(LibPath, "sqlapid.dll"));

		PublicDelayLoadDLLs.Add("sqlapiu.dll");
		RuntimeDependencies.Add(Path.Combine(LibPath, "sqlapiu.dll"));

		PublicDelayLoadDLLs.Add("sqlapiud.dll");
		RuntimeDependencies.Add(Path.Combine(LibPath, "sqlapiud.dll"));


		PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "SQLAPI", "include"));
		PrivateIncludePaths.Add(Path.Combine(ThirdPartyPath, "SQLAPI", "include"));

	}
}