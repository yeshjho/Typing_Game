#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
class UButton;
class AScore_Blueprint_C__pf2132744816;
class ACharacter_Blueprint_C__pf2132744816;
#include "Game_Over_Widget__pf3975599377.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Widgets/Game_Over_Widget.Game_Over_Widget_C", OverrideNativeName="Game_Over_Widget_C"))
class UGame_Over_Widget_C__pf3975599377 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Exit_Game_Button", Category="Game_Over_Widget", OverrideNativeName="Exit_Game_Button"))
	UButton* bpv__Exit_Game_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Exit_Menu_Button", Category="Game_Over_Widget", OverrideNativeName="Exit_Menu_Button"))
	UButton* bpv__Exit_Menu_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Restart_Button", Category="Game_Over_Widget", OverrideNativeName="Restart_Button"))
	UButton* bpv__Restart_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Score_Current", Category="Game_Over_Widget", OverrideNativeName="Score_Current"))
	UTextBlock* bpv__Score_Current__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Score_Highest", Category="Game_Over_Widget", OverrideNativeName="Score_Highest"))
	UTextBlock* bpv__Score_Highest__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AScore_Blueprint_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AScore_Blueprint_C__pf2132744816* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors2"))
	TArray<ACharacter_Blueprint_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item2"))
	ACharacter_Blueprint_C__pf2132744816* b0l__CallFunc_Array_Get_Item2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors3"))
	TArray<ACharacter_Blueprint_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item3"))
	ACharacter_Blueprint_C__pf2132744816* b0l__CallFunc_Array_Get_Item3__pf;
	UGame_Over_Widget_C__pf3975599377(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Game_Over_Widget__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Game_Over_Widget__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Game_Over_Widget__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Game_Over_Widget__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Exit_Menu_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Exit_Menu_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Exit_Game_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Exit_Game_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Restart_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Restart_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
