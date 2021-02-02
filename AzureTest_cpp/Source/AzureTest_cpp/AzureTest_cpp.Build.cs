// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AzureTest_cpp : ModuleRules
{
	public AzureTest_cpp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
