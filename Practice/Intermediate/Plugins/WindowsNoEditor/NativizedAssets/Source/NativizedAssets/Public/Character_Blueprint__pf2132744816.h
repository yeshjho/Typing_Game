#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
class UTextRenderComponent;
class UTimelineComponent;
class AMob_Re_Blueprint_C__pf2132744816;
class AScore_Blueprint_C__pf2132744816;
class AHighest_Score_Blueprint_C__pf2132744816;
class UMain_Menu_Widget_C__pf3975599377;
class UDefault_Widget_C__pf3975599377;
class UOption_Widget_C__pf3975599377;
class UGame_Over_Widget_C__pf3975599377;
class UPaused_Widget_C__pf3975599377;
class AAmbientSound;
class USaveGame;
class USave_Game_1_Blueprint_C__pf4030252459;
class UImage;
#include "Character_Blueprint__pf2132744816.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Character_Blueprint.Character_Blueprint_C,/Game/Character_Blueprint.Character_Blueprint_C", OverrideNativeName="Character_Blueprint_C"))
class ACharacter_Blueprint_C__pf2132744816 : public ACharacter
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="Text"))
	UTextRenderComponent* bpv__Text__pf;
	UPROPERTY(meta=(OverrideNativeName="Opacity_Timeline_Opacity_9D4FE74141D7C70D0929EDBDB12AE53E"))
	float bpv__Opacity_Timeline_Opacity_9D4FE74141D7C70D0929EDBDB12AE53E__pf;
	UPROPERTY(meta=(OverrideNativeName="Opacity_Timeline__Direction_9D4FE74141D7C70D0929EDBDB12AE53E"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Opacity_Timeline__Direction_9D4FE74141D7C70D0929EDBDB12AE53E__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="Character_Blueprint", OverrideNativeName="Opacity_Timeline"))
	UTimelineComponent* bpv__Opacity_Timeline__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Mob Re", Category="기본", OverrideNativeName="Mob_Re"))
	TArray<AMob_Re_Blueprint_C__pf2132744816*> bpv__Mob_Re__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Success Count", Category="기본", OverrideNativeName="Success_Count"))
	int32 bpv__Success_Count__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Score", Category="기본", OverrideNativeName="Score"))
	AScore_Blueprint_C__pf2132744816* bpv__Score__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Game Over", Category="기본", OverrideNativeName="IsGameOver"))
	bool bpv__IsGameOver__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fall Speed", Category="기본", OverrideNativeName="Fall_Speed"))
	float bpv__Fall_Speed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Spawn Chance", Category="기본", OverrideNativeName="Spawn_Chance"))
	int32 bpv__Spawn_Chance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="HS Original", Category="기본", OverrideNativeName="HS_Original"))
	int32 bpv__HS_Original__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Highest Score Actor", Category="기본", OverrideNativeName="Highest_Score_Actor"))
	AHighest_Score_Blueprint_C__pf2132744816* bpv__Highest_Score_Actor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Main Menu Widget", Category="Widgets", OverrideNativeName="Main_Menu_Widget"))
	UMain_Menu_Widget_C__pf3975599377* bpv__Main_Menu_Widget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Default Widget", Category="Widgets", OverrideNativeName="Default_Widget"))
	UDefault_Widget_C__pf3975599377* bpv__Default_Widget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Option Widget", Category="Widgets", OverrideNativeName="Option_Widget"))
	UOption_Widget_C__pf3975599377* bpv__Option_Widget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Game Over Widget", Category="Widgets", OverrideNativeName="Game_Over_Widget"))
	UGame_Over_Widget_C__pf3975599377* bpv__Game_Over_Widget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Paused Widget", Category="Widgets", OverrideNativeName="Paused_Widget"))
	UPaused_Widget_C__pf3975599377* bpv__Paused_Widget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Paused", Category="기본", OverrideNativeName="IsPaused"))
	bool bpv__IsPaused__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Main Is First", Category="Widgets", OverrideNativeName="Main_IsFirst"))
	bool bpv__Main_IsFirst__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_IsClosed_Variable"))
	bool b0l_____bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_Has_Been_Initd_Variable"))
	bool b0l_____bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_Variable"))
	bool b0l_____bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Loop_Counter_Variable"))
	int32 b0l_____int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Loop_Counter_Variable2"))
	int32 b0l_____int_Loop_Counter_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Loop_Counter_Variable3"))
	int32 b0l_____int_Loop_Counter_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Array_Index_Variable"))
	int32 b0l_____int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Array_Index_Variable2"))
	int32 b0l_____int_Array_Index_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Array_Index_Variable3"))
	int32 b0l_____int_Array_Index_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AMob_Re_Blueprint_C__pf2132744816* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AAmbientSound*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item2"))
	AAmbientSound* b0l__CallFunc_Array_Get_Item2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LoadGameFromSlot_ReturnValue"))
	USaveGame* b0l__CallFunc_LoadGameFromSlot_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_1_Blueprint"))
	USave_Game_1_Blueprint_C__pf4030252459* b0l__K2Node_DynamicCast_AsSave_Game_1_Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors2"))
	TArray<AMob_Re_Blueprint_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item3"))
	AMob_Re_Blueprint_C__pf2132744816* b0l__CallFunc_Array_Get_Item3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors3"))
	TArray<AAmbientSound*> b0l__CallFunc_GetAllActorsOfClass_OutActors3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item4"))
	AAmbientSound* b0l__CallFunc_Array_Get_Item4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Loop_Counter_Variable4"))
	int32 b0l_____int_Loop_Counter_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Create_ReturnValue3"))
	UDefault_Widget_C__pf3975599377* b0l__CallFunc_Create_ReturnValue3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Array_Index_Variable4"))
	int32 b0l_____int_Array_Index_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item5"))
	AMob_Re_Blueprint_C__pf2132744816* b0l__CallFunc_Array_Get_Item5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Image"))
	UImage* b0l__K2Node_CustomEvent_Image__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item6"))
	UImage* b0l__CallFunc_Array_Get_Item6__pf;
	ACharacter_Blueprint_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Character_Blueprint__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Character_Blueprint__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Character_Blueprint__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Character_Blueprint__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Character_Blueprint_4"))
	void bpf__ExecuteUbergraph_Character_Blueprint__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Character_Blueprint__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Character_Blueprint__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Character_Blueprint__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Character_Blueprint__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Character_Blueprint__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Character_Blueprint__pf_10(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Hovered"))
	virtual void bpf__Hovered__pf(UImage* bpp__Image__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Create_Main_Menu_Widget"))
	virtual void bpf__Create_Main_Menu_Widget__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Create_Default_Widget"))
	virtual void bpf__Create_Default_Widget__pf();
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Start"))
	virtual void bpf__Start__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Resume"))
	virtual void bpf__Resume__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Pause"))
	virtual void bpf__Pause__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Restart"))
	virtual void bpf__Restart__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Game Over"))
	virtual void bpf__GamexOver__pfT();
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_AnyKey_K2Node_InputKeyEvent_1"))
	virtual void bpf__InpActEvt_AnyKey_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="Opacity_Timeline__UpdateFunc"))
	virtual void bpf__Opacity_Timeline__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Opacity_Timeline__FinishedFunc"))
	virtual void bpf__Opacity_Timeline__FinishedFunc__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
