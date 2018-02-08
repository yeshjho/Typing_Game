#include "NativizedAssets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
namespace
{
	static const FBlueprintDependencyObjectRef NativizedCodeDependenties[] =
	{
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineFonts"), TEXT("Roboto"), TEXT("Roboto"), TEXT("/Script/Engine"), TEXT("Font")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("Button"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("GameplayStatics"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetArrayLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetSystemLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("Character_Blueprint"), TEXT("Character_Blueprint_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PointerToUberGraphFrame"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("UserWidget"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Sounds"), TEXT("Game_Over_Sound"), TEXT("Game_Over_Sound"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Sounds"), TEXT("Wrong_Sound"), TEXT("Wrong_Sound"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Sounds"), TEXT("Balloon_Start_Sound"), TEXT("Balloon_Start_Sound"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("TextRenderComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineMaterials"), TEXT("DefaultTextMaterialOpaque"), TEXT("DefaultTextMaterialOpaque"), TEXT("/Script/Engine"), TEXT("Material")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineFonts"), TEXT("RobotoDistanceField"), TEXT("RobotoDistanceField"), TEXT("/Script/Engine"), TEXT("Font")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SceneComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("TimelineComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ETimelineDirection"), TEXT("/Script/CoreUObject"), TEXT("Enum")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("Image"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PlayerController"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("AmbientSound"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SaveGame"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Actor"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("InputCore"), TEXT("Key"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetMathLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("Score_Blueprint"), TEXT("Score_Blueprint_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/SaveGame"), TEXT("Save_Game_1_Blueprint"), TEXT("Save_Game_1_Blueprint_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("WidgetBlueprintLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("Mob_Re_Blueprint"), TEXT("Mob_Re_Blueprint_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Widgets"), TEXT("Option_Widget"), TEXT("Option_Widget_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetInputLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("LatentActionInfo"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Widgets"), TEXT("Default_Widget"), TEXT("Default_Widget_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetTextLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("Highest_Score_Blueprint"), TEXT("Highest_Score_Blueprint_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Character"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("ClothingSystemRuntime"), TEXT("ClothingSimulationFactoryNv"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("NavArea_Obstacle"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AIModule"), TEXT("AIController"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Widgets"), TEXT("Paused_Widget"), TEXT("Paused_Widget_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Widgets"), TEXT("Game_Over_Widget"), TEXT("Game_Over_Widget_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Widgets"), TEXT("Main_Menu_Widget"), TEXT("Main_Menu_Widget_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Animations"), TEXT("Mob_Re_Anim"), TEXT("Mob_Re_Anim"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Animations"), TEXT("Balloon_Anim"), TEXT("Balloon_Anim"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Sounds"), TEXT("Pop_Sound"), TEXT("Pop_Sound"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Animations"), TEXT("Ballon_Pop_Anim"), TEXT("Ballon_Pop_Anim"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Animations"), TEXT("Mob_Re_Dead_Anim"), TEXT("Mob_Re_Dead_Anim"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Sounds"), TEXT("Body_Fall_Sound"), TEXT("Body_Fall_Sound"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Paper2D"), TEXT("PaperFlipbookComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("HitResult"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PrimitiveComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PhysicalMaterial"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Pawn"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ActorComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("Floor_Blueprint"), TEXT("Floor_Blueprint_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/BasicShapes"), TEXT("Cube"), TEXT("Cube"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/BasicShapes"), TEXT("BasicShapeMaterial"), TEXT("BasicShapeMaterial"), TEXT("/Script/Engine"), TEXT("Material")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("StaticMeshComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("TextRenderActor"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("TextBlock"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetStringLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Textures"), TEXT("Keyboard_Map_Tex"), TEXT("Keyboard_Map_Tex"), TEXT("/Script/Engine"), TEXT("Texture2D")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Textures"), TEXT("Keyboard_Numbers"), TEXT("Keyboard_Numbers"), TEXT("/Script/Engine"), TEXT("Texture2D")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Textures"), TEXT("Keyboard_Funcs"), TEXT("Keyboard_Funcs"), TEXT("/Script/Engine"), TEXT("Texture2D")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Textures"), TEXT("Keyboard_Letters"), TEXT("Keyboard_Letters"), TEXT("/Script/Engine"), TEXT("Texture2D")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Textures"), TEXT("Keyboard_Techs"), TEXT("Keyboard_Techs"), TEXT("/Script/Engine"), TEXT("Texture2D")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Textures"), TEXT("Keyboard_Numpads"), TEXT("Keyboard_Numpads"), TEXT("/Script/Engine"), TEXT("Texture2D")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Textures"), TEXT("Keyboard_Arrows"), TEXT("Keyboard_Arrows"), TEXT("/Script/Engine"), TEXT("Texture2D")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Textures"), TEXT("Keyboard_Miscs"), TEXT("Keyboard_Miscs"), TEXT("/Script/Engine"), TEXT("Texture2D")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Textures"), TEXT("Keyboard_Marks"), TEXT("Keyboard_Marks"), TEXT("/Script/Engine"), TEXT("Texture2D")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("CheckBox"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("SlateCore"), TEXT("Geometry"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("Widget"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("SM_SkySphere"), TEXT("SM_SkySphere"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("M_Sky_Panning_Clouds2"), TEXT("M_Sky_Panning_Clouds2"), TEXT("/Script/Engine"), TEXT("Material")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("C_Sky_Horizon_Color"), TEXT("C_Sky_Horizon_Color"), TEXT("/Script/Engine"), TEXT("CurveLinearColor")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("C_Sky_Zenith_Color"), TEXT("C_Sky_Zenith_Color"), TEXT("/Script/Engine"), TEXT("CurveLinearColor")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("C_Sky_Cloud_Color"), TEXT("C_Sky_Cloud_Color"), TEXT("/Script/Engine"), TEXT("CurveLinearColor")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("CurveLinearColor"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("DirectionalLight"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("MaterialInstanceDynamic"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Light"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("LightComponentBase"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Blueprints/Assets"), TEXT("Skybox"), TEXT("Skybox"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Blueprints/Assets"), TEXT("M_LightStage_Skybox_Master"), TEXT("M_LightStage_Skybox_Master"), TEXT("/Script/Engine"), TEXT("Material")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Blueprints/Assets"), TEXT("SM_Arrows"), TEXT("SM_Arrows"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Blueprints/Assets"), TEXT("M_LightStage_Arrows"), TEXT("M_LightStage_Arrows"), TEXT("/Script/Engine"), TEXT("Material")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Blueprints/Assets"), TEXT("SunlightColorLUT"), TEXT("SunlightColorLUT"), TEXT("/Script/Engine"), TEXT("CurveLinearColor")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Blueprints/Assets"), TEXT("FogBrightnessLUT"), TEXT("FogBrightnessLUT"), TEXT("/Script/Engine"), TEXT("CurveFloat")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/HDRI"), TEXT("HDRI_Epic_Courtyard_Daylight"), TEXT("HDRI_Epic_Courtyard_Daylight"), TEXT("/Script/Engine"), TEXT("TextureCube")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Blueprints/Assets"), TEXT("M_LightStage_Skybox_Black"), TEXT("M_LightStage_Skybox_Black"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Blueprints/Assets"), TEXT("M_LightStage_Skybox_HDRI"), TEXT("M_LightStage_Skybox_HDRI"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ExponentialHeightFogComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SkyLightComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("MaterialInstance"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("MaterialInterface"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("AtmosphericFogComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Texture"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("CurveFloat"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("DirectionalLightComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetMaterialLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("LightComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Props"), TEXT("SM_Lamp_Wall"), TEXT("SM_Lamp_Wall"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SpotLightComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Particles"), TEXT("P_Steam_Lit"), TEXT("P_Steam_Lit"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Audio"), TEXT("Steam01_Cue"), TEXT("Steam01_Cue"), TEXT("/Script/Engine"), TEXT("SoundCue")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ParticleSystemComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("AudioComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Particles"), TEXT("P_Smoke"), TEXT("P_Smoke"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Audio"), TEXT("Smoke01_Cue"), TEXT("Smoke01_Cue"), TEXT("/Script/Engine"), TEXT("SoundCue")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Particles"), TEXT("P_Explosion"), TEXT("P_Explosion"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Audio"), TEXT("Explosion_Cue"), TEXT("Explosion_Cue"), TEXT("/Script/Engine"), TEXT("SoundCue")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Audio"), TEXT("Fire_Sparks01_Cue"), TEXT("Fire_Sparks01_Cue"), TEXT("/Script/Engine"), TEXT("SoundCue")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Particles"), TEXT("P_Sparks"), TEXT("P_Sparks"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Particles"), TEXT("P_Fire"), TEXT("P_Fire"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Audio"), TEXT("Fire01_Cue"), TEXT("Fire01_Cue"), TEXT("/Script/Engine"), TEXT("SoundCue")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Props"), TEXT("SM_Lamp_Ceiling"), TEXT("SM_Lamp_Ceiling"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PointLightComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	};
}
const FBlueprintDependencyObjectRef& F__NativeDependencies::Get(int16 Index)
{
static const FBlueprintDependencyObjectRef& NullObjectRef = FBlueprintDependencyObjectRef();
if (Index == -1) { return NullObjectRef; }
	check((Index >= 0) && (Index < 117));
	return ::NativizedCodeDependenties[Index];
};
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
