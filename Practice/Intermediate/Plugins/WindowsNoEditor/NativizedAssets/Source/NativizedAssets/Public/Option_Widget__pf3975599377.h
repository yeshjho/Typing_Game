#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class ACharacter_Blueprint_C__pf2132744816;
class UImage;
class UButton;
class UCheckBox;
#include "Option_Widget__pf3975599377.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Widgets/Option_Widget.Option_Widget_C", OverrideNativeName="Option_Widget_C"))
class UOption_Widget_C__pf3975599377 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Arrow_Check", Category="Option_Widget", OverrideNativeName="Arrow_Check"))
	UCheckBox* bpv__Arrow_Check__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Background_White", Category="Option_Widget", OverrideNativeName="Background_White"))
	UImage* bpv__Background_White__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Cancel_Button", Category="Option_Widget", OverrideNativeName="Cancel_Button"))
	UButton* bpv__Cancel_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Confirm_Button", Category="Option_Widget", OverrideNativeName="Confirm_Button"))
	UButton* bpv__Confirm_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Control_Check", Category="Option_Widget", OverrideNativeName="Control_Check"))
	UCheckBox* bpv__Control_Check__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Func_Check", Category="Option_Widget", OverrideNativeName="Func_Check"))
	UCheckBox* bpv__Func_Check__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="KB_Arrows", Category="Option_Widget", OverrideNativeName="KB_Arrows"))
	UImage* bpv__KB_Arrows__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="KB_Functions", Category="Option_Widget", OverrideNativeName="KB_Functions"))
	UImage* bpv__KB_Functions__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="KB_Letters", Category="Option_Widget", OverrideNativeName="KB_Letters"))
	UImage* bpv__KB_Letters__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="KB_Marks", Category="Option_Widget", OverrideNativeName="KB_Marks"))
	UImage* bpv__KB_Marks__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="KB_Miscs", Category="Option_Widget", OverrideNativeName="KB_Miscs"))
	UImage* bpv__KB_Miscs__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="KB_Numbers", Category="Option_Widget", OverrideNativeName="KB_Numbers"))
	UImage* bpv__KB_Numbers__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="KB_Numpads", Category="Option_Widget", OverrideNativeName="KB_Numpads"))
	UImage* bpv__KB_Numpads__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="KB_Techs", Category="Option_Widget", OverrideNativeName="KB_Techs"))
	UImage* bpv__KB_Techs__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Key_Setting_Button", Category="Option_Widget", OverrideNativeName="Key_Setting_Button"))
	UButton* bpv__Key_Setting_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Korean_Check", Category="Option_Widget", OverrideNativeName="Korean_Check"))
	UCheckBox* bpv__Korean_Check__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Letters_Check", Category="Option_Widget", OverrideNativeName="Letters_Check"))
	UCheckBox* bpv__Letters_Check__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Miscs_Check", Category="Option_Widget", OverrideNativeName="Miscs_Check"))
	UCheckBox* bpv__Miscs_Check__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Numbers_Check", Category="Option_Widget", OverrideNativeName="Numbers_Check"))
	UCheckBox* bpv__Numbers_Check__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Numpad_Check", Category="Option_Widget", OverrideNativeName="Numpad_Check"))
	UCheckBox* bpv__Numpad_Check__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Reset_High_Score_Button", Category="Option_Widget", OverrideNativeName="Reset_High_Score_Button"))
	UButton* bpv__Reset_High_Score_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Speed_Setting_Button", Category="Option_Widget", OverrideNativeName="Speed_Setting_Button"))
	UButton* bpv__Speed_Setting_Button__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Keyboards", Category="기본", OverrideNativeName="Keyboards"))
	TArray<UImage*> bpv__Keyboards__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Character", Category="기본", OverrideNativeName="Character"))
	ACharacter_Blueprint_C__pf2132744816* bpv__Character__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Triggered", Category="기본", OverrideNativeName="Triggered"))
	bool bpv__Triggered__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_IsClosed_Variable"))
	bool b0l_____bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_Has_Been_Initd_Variable"))
	bool b0l_____bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ACharacter_Blueprint_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ACharacter_Blueprint_C__pf2132744816* b0l__CallFunc_Array_Get_Item__pf;
	UOption_Widget_C__pf3975599377(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Option_Widget__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Option_Widget__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Option_Widget__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Option_Widget__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Option_Widget__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Speed_Setting_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Speed_Setting_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Reset_High_Score_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Reset_High_Score_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Key_Setting_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Key_Setting_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
