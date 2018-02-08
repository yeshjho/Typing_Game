#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/TextRenderActor.h"
class ACharacter_Blueprint_C__pf2132744816;
#include "Score_Blueprint__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Score_Blueprint.Score_Blueprint_C,/Game/Score_Blueprint.Score_Blueprint_C", OverrideNativeName="Score_Blueprint_C"))
class AScore_Blueprint_C__pf2132744816 : public ATextRenderActor
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Score", Category="기본", OverrideNativeName="Score"))
	int32 bpv__Score__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Character", Category="기본", OverrideNativeName="Character"))
	ACharacter_Blueprint_C__pf2132744816* bpv__Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_IsClosed_Variable"))
	bool b0l_____bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_Has_Been_Initd_Variable"))
	bool b0l_____bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_Has_Been_Initd_Variable2"))
	bool b0l_____bool_Has_Been_Initd_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_IsClosed_Variable2"))
	bool b0l_____bool_IsClosed_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_Has_Been_Initd_Variable3"))
	bool b0l_____bool_Has_Been_Initd_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_Has_Been_Initd_Variable4"))
	bool b0l_____bool_Has_Been_Initd_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_IsClosed_Variable3"))
	bool b0l_____bool_IsClosed_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_IsClosed_Variable4"))
	bool b0l_____bool_IsClosed_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_Has_Been_Initd_Variable5"))
	bool b0l_____bool_Has_Been_Initd_Variable5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_IsClosed_Variable5"))
	bool b0l_____bool_IsClosed_Variable5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_IsClosed_Variable6"))
	bool b0l_____bool_IsClosed_Variable6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_Has_Been_Initd_Variable6"))
	bool b0l_____bool_Has_Been_Initd_Variable6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Score_Add"))
	int32 b0l__K2Node_CustomEvent_Score_Add__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_Has_Been_Initd_Variable7"))
	bool b0l_____bool_Has_Been_Initd_Variable7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_IsClosed_Variable7"))
	bool b0l_____bool_IsClosed_Variable7__pf;
	AScore_Blueprint_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Score_Blueprint__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Score_Update"))
	virtual void bpf__Score_Update__pf(int32 bpp__Score_Add__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Spd_SpRate"))
	virtual void bpf__Spd_SpRate__pf(int32 bpp__SpawnRate__pf, float bpp__FallSpeed__pf);
public:
};
