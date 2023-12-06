// Copyright Epic Games, Inc. All Rights Reserved.
using System.IO;
using UnrealBuildTool;

public class SQLAPIPlugin : ModuleRules
{

	private string ThirdPartyPath
	{
		get { return Path.Combine(ModuleDirectory, "../ThirdParty/SQLAPI"); }
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

        string LibPath = Path.Combine(ThirdPartyPath, "lib");

		string[] Libs = new string[] {"sqlapi","sqlapid","sqlapis","sqlapisd","sqlapiu","sqlapiud","sqlapius", "sqlapiusd"};

        foreach (string Element in Libs)
        {
            PublicAdditionalLibraries.Add(Path.Combine(LibPath, Element + ".lib"));

        }

        string binPath = Path.Combine(ThirdPartyPath, "bin");

		string[] Dlls = new string[] { "sqlapi", "sqlapid", "sqlapiu", "sqlapiud" };

		foreach (string Element in Dlls)
        {
            RuntimeDependencies.Add(Path.Combine(binPath, Element + ".dll"));
            PublicDelayLoadDLLs.Add(Element + ".dll");
        }

		PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "include"));
		PrivateIncludePaths.Add(Path.Combine(ThirdPartyPath, "include"));

        PublicDefinitions.Add("_WIN32_WINNT_WIN10_TH2=0x0A00");
        PublicDefinitions.Add("_WIN32_WINNT_WIN10_RS1=0x0A00");
        PublicDefinitions.Add("_WIN32_WINNT_WIN10_RS2=0x0A00");
        PublicDefinitions.Add("_WIN32_WINNT_WIN10_RS3=0x0A00");
        PublicDefinitions.Add("_WIN32_WINNT_WIN10_RS4=0x0A00");
        PublicDefinitions.Add("_WIN32_WINNT_WIN10_RS5=0x0A00");
    }
}