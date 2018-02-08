#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
#include "Default_Widget__pf3975599377.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Widgets/Default_Widget.Default_Widget_C", OverrideNativeName="Default_Widget_C"))
class UDefault_Widget_C__pf3975599377 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Reason_F", Category="Default_Widget", OverrideNativeName="Reason_F"))
	UTextBlock* bpv__Reason_F__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Reason_S", Category="Default_Widget", OverrideNativeName="Reason_S"))
	UTextBlock* bpv__Reason_S__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Reason_T", Category="Default_Widget", OverrideNativeName="Reason_T"))
	UTextBlock* bpv__Reason_T__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Spawn_Rate_Text", Category="Default_Widget", OverrideNativeName="Spawn_Rate_Text"))
	UTextBlock* bpv__Spawn_Rate_Text__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Speed_Text", Category="Default_Widget", OverrideNativeName="Speed_Text"))
	UTextBlock* bpv__Speed_Text__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speed", Category="기본", OverrideNativeName="Speed"))
	float bpv__Speed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Reasons", Category="기본", OverrideNativeName="Reasons"))
	TArray<FString> bpv__Reasons__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Speed_Add"))
	float b0l__K2Node_CustomEvent_Speed_Add__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Reason"))
	FText b0l__K2Node_CustomEvent_Reason__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FString b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item2"))
	FString b0l__CallFunc_Array_Get_Item2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item3"))
	FString b0l__CallFunc_Array_Get_Item3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_New_Rate"))
	int32 b0l__K2Node_CustomEvent_New_Rate__pf;
	UDefault_Widget_C__pf3975599377(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Default_Widget__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Default_Widget__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Spawn_Update"))
	virtual void bpf__Spawn_Update__pf(int32 bpp__New_Rate__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Speed_Update"))
	virtual void bpf__Speed_Update__pf(float bpp__Speed_Add__pf, const FText& bpp__Reason__pf__const);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
