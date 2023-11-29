// Copyright sf5gaming

using UnrealBuildTool;

public class AuraTarget : TargetRules
{
	public AuraTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
        DefaultBuildSettings = BuildSettingsVersion.Latest;

		ExtraModuleNames.AddRange( new string[] { "Aura" } );
	}
}
