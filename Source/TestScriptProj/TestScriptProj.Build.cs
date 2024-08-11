// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestScriptProj : ModuleRules
{
	public TestScriptProj(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
