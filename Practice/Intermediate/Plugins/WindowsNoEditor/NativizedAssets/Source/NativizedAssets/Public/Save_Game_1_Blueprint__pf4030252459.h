#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Save_Game_1_Blueprint__pf4030252459.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/SaveGame/Save_Game_1_Blueprint.Save_Game_1_Blueprint_C", OverrideNativeName="Save_Game_1_Blueprint_C"))
class USave_Game_1_Blueprint_C__pf4030252459 : public USaveGame
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Highest Score", Category="기본", OverrideNativeName="Highest_Score"))
	int32 bpv__Highest_Score__pf;
	USave_Game_1_Blueprint_C__pf4030252459(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
