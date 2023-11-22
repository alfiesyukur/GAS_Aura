// Copyright sf5gaming

using UnrealBuildTool;

public class AuraTarget : TargetRules
{
	public AuraTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_3;
        DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "Aura" } );
	}
}
