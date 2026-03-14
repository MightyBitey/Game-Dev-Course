// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GameDevCourse : ModuleRules
{
	public GameDevCourse(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput","HairStrandsCore", "Niagara" });
	}
}
