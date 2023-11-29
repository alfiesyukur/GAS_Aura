// Copyright sf5gaming

using UnrealBuildTool;

public class AuraEditorTarget : TargetRules
{
    public AuraEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
        DefaultBuildSettings = BuildSettingsVersion.Latest;
        
        ExtraModuleNames.AddRange(new string[] { "Aura" });
    }
}
