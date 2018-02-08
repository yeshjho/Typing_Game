﻿#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class ADirectionalLight;
class UCurveLinearColor;
class UMaterialInstanceDynamic;
class USceneComponent;
class UStaticMeshComponent;
#include "BP_Sky_Sphere__pf1379775596.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Engine/EngineSky/BP_Sky_Sphere.BP_Sky_Sphere_C", OverrideNativeName="BP_Sky_Sphere_C"))
class ABP_Sky_Sphere_C__pf1379775596 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="BP_Skydome", OverrideNativeName="Sky Sphere mesh"))
	UStaticMeshComponent* bpv__SkyxSpherexmesh__pfTT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="BP_Skydome", OverrideNativeName="Base"))
	USceneComponent* bpv__Base__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sky Material", Category="기본", OverrideNativeName="Sky material"))
	UMaterialInstanceDynamic* bpv__Skyxmaterial__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Refresh Material", Category="기본", Tooltip="Use this to update the sky material after moving  a directional light", OverrideNativeName="Refresh material"))
	bool bpv__Refreshxmaterial__pfT;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Directional Light Actor", Category="기본", Tooltip="Assign your level\'s directional light actor to this variable to  match the sky\'s sun position and color", OverrideNativeName="Directional light actor"))
	ADirectionalLight* bpv__Directionalxlightxactor__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Colors Determined By Sun Position", Category="기본", Tooltip="If enabled, sky colors will change according to the sun\'s position", OverrideNativeName="Colors determined by sun position"))
	bool bpv__Colorsxdeterminedxbyxsunxposition__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sun Height", Category="세팅 덮어쓰기", UIMin="-1", UIMax="1", Tooltip="If no directional light is assigned, this value determines the height of the sun", OverrideNativeName="Sun height"))
	float bpv__Sunxheight__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sun Brightness", Category="기본", Tooltip="Brightness multiplier for the sun disk", OverrideNativeName="Sun brightness"))
	float bpv__Sunxbrightness__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Horizon Falloff", Category="세팅 덮어쓰기", Tooltip="Affects the size of the gradient from zenith color to horizon color", OverrideNativeName="Horizon Falloff"))
	float bpv__HorizonxFalloff__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Zenith Color", Category="세팅 덮어쓰기", OverrideNativeName="Zenith Color"))
	FLinearColor bpv__ZenithxColor__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Horizon Color", Category="세팅 덮어쓰기", OverrideNativeName="Horizon color"))
	FLinearColor bpv__Horizonxcolor__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Cloud Color", Category="세팅 덮어쓰기", OverrideNativeName="Cloud color"))
	FLinearColor bpv__Cloudxcolor__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Overall Color", Category="세팅 덮어쓰기", OverrideNativeName="Overall Color"))
	FLinearColor bpv__OverallxColor__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Cloud Speed", Category="기본", Tooltip="Panning speed for the clouds", OverrideNativeName="Cloud speed"))
	float bpv__Cloudxspeed__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Cloud Opacity", Category="기본", Tooltip="Opacity of the panning clouds", OverrideNativeName="Cloud opacity"))
	float bpv__Cloudxopacity__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Stars Brightness", Category="기본", Tooltip="Multiplier for the brightness of the stars when the sun is below the horizon", OverrideNativeName="Stars brightness"))
	float bpv__Starsxbrightness__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Horizon Color Curve", Category="기본", OverrideNativeName="Horizon color curve"))
	UCurveLinearColor* bpv__Horizonxcolorxcurve__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Zenith Color Curve", Category="기본", OverrideNativeName="Zenith color curve"))
	UCurveLinearColor* bpv__Zenithxcolorxcurve__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cloud Color Curve", Category="기본", OverrideNativeName="Cloud color curve"))
	UCurveLinearColor* bpv__Cloudxcolorxcurve__pfTT;
	ABP_Sky_Sphere_C__pf1379775596(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateSunDirection"))
	virtual void bpf__UpdateSunDirection__pf();
public:
};
