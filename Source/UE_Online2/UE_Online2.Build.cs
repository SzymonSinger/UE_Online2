// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_Online2 : ModuleRules
{
	public UE_Online2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
