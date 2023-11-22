// Copyright sf5gaming

using UnrealBuildTool;

public class AuraEditorTarget : TargetRules
{
    public AuraEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_3;
        DefaultBuildSettings = BuildSettingsVersion.V4;
        ExtraModuleNames.AddRange(new string[] { "Aura" });
    }
}
