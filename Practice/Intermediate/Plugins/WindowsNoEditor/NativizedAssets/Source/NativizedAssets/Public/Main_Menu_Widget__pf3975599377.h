#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
class ACharacter_Blueprint_C__pf2132744816;
#include "Main_Menu_Widget__pf3975599377.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Widgets/Main_Menu_Widget.Main_Menu_Widget_C", OverrideNativeName="Main_Menu_Widget_C"))
class UMain_Menu_Widget_C__pf3975599377 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_146", Category="Main_Menu_Widget", OverrideNativeName="Image_146"))
	UImage* bpv__Image_146__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Option_Button", Category="Main_Menu_Widget", OverrideNativeName="Option_Button"))
	UButton* bpv__Option_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Quit_Button", Category="Main_Menu_Widget", OverrideNativeName="Quit_Button"))
	UButton* bpv__Quit_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Shop_Button", Category="Main_Menu_Widget", OverrideNativeName="Shop_Button"))
	UButton* bpv__Shop_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Start_Game_Button", Category="Main_Menu_Widget", OverrideNativeName="Start_Game_Button"))
	UButton* bpv__Start_Game_Button__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ACharacter_Blueprint_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ACharacter_Blueprint_C__pf2132744816* b0l__CallFunc_Array_Get_Item__pf;
	UMain_Menu_Widget_C__pf3975599377(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Main_Menu_Widget__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Main_Menu_Widget__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Start_Game_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Start_Game_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Quit_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Quit_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
