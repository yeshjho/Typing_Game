#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UPaperFlipbookComponent;
class UTimelineComponent;
class AFloor_Blueprint_C__pf2132744816;
class AScore_Blueprint_C__pf2132744816;
class AHighest_Score_Blueprint_C__pf2132744816;
class ACharacter_Blueprint_C__pf2132744816;
class UPhysicalMaterial;
class AActor;
class UPrimitiveComponent;
#include "Mob_Re_Blueprint__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Mob_Re_Blueprint.Mob_Re_Blueprint_C", OverrideNativeName="Mob_Re_Blueprint_C"))
class AMob_Re_Blueprint_C__pf2132744816 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="Body"))
	UPaperFlipbookComponent* bpv__Body__pf;
	UPROPERTY(meta=(OverrideNativeName="Dead_Rotation_Falling_Speed_7E5BED6E41CFB643C3FDC1AF0312D732"))
	float bpv__Dead_Rotation_Falling_Speed_7E5BED6E41CFB643C3FDC1AF0312D732__pf;
	UPROPERTY(meta=(OverrideNativeName="Dead_Rotation_Roll_7E5BED6E41CFB643C3FDC1AF0312D732"))
	float bpv__Dead_Rotation_Roll_7E5BED6E41CFB643C3FDC1AF0312D732__pf;
	UPROPERTY(meta=(OverrideNativeName="Dead_Rotation__Direction_7E5BED6E41CFB643C3FDC1AF0312D732"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Dead_Rotation__Direction_7E5BED6E41CFB643C3FDC1AF0312D732__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="Mob_Re_Blueprint", OverrideNativeName="Dead_Rotation"))
	UTimelineComponent* bpv__Dead_Rotation__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Alphabets", Category="Balloon Info", OverrideNativeName="Alphabets"))
	TArray<FText> bpv__Alphabets__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Key List", Category="Lists", OverrideNativeName="Key_list"))
	TArray<FKey> bpv__Key_list__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Looping", Category="기본", OverrideNativeName="Looping"))
	int32 bpv__Looping__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Balloons", Category="Balloon_Info", OverrideNativeName="Balloons"))
	TArray<UPaperFlipbookComponent*> bpv__Balloons__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ball Num", Category="Balloon_Info", OverrideNativeName="Ball_Num"))
	int32 bpv__Ball_Num__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ball Loc", Category="Balloon_Info", OverrideNativeName="Ball_Loc"))
	FVector bpv__Ball_Loc__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ball Rot", Category="Balloon_Info", OverrideNativeName="Ball_Rot"))
	FRotator bpv__Ball_Rot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Alphabet Index", Category="Balloon Info", OverrideNativeName="Alphabet_Index"))
	int32 bpv__Alphabet_Index__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Alphabet List", Category="Lists", OverrideNativeName="Alphabet_list"))
	TArray<FText> bpv__Alphabet_list__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ball Color", Category="Lists", OverrideNativeName="Ball_Color"))
	TArray<FLinearColor> bpv__Ball_Color__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Pop Balloon Index", Category="Popping Balloon", OverrideNativeName="Pop_Balloon_Index"))
	TArray<int32> bpv__Pop_Balloon_Index__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="In Charge", Category="Popping Balloon", OverrideNativeName="In_Charge"))
	TArray<FString> bpv__In_Charge__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Index A", Category="Index_of_Thread", OverrideNativeName="Index_A"))
	int32 bpv__Index_A__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Index B", Category="Index Of Thread", OverrideNativeName="Index_B"))
	int32 bpv__Index_B__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Index C", Category="Index Of Thread", OverrideNativeName="Index_C"))
	int32 bpv__Index_C__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Index D", Category="Index Of Thread", OverrideNativeName="Index_D"))
	int32 bpv__Index_D__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Index E", Category="Index Of Thread", OverrideNativeName="Index_E"))
	int32 bpv__Index_E__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Dead", Category="기본", OverrideNativeName="IsDead"))
	bool bpv__IsDead__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Floor", Category="References", OverrideNativeName="Floor"))
	AFloor_Blueprint_C__pf2132744816* bpv__Floor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Score", Category="References", OverrideNativeName="Score"))
	AScore_Blueprint_C__pf2132744816* bpv__Score__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="HS Score", Category="References", OverrideNativeName="HS_Score"))
	AHighest_Score_Blueprint_C__pf2132744816* bpv__HS_Score__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Character", Category="References", OverrideNativeName="Character"))
	ACharacter_Blueprint_C__pf2132744816* bpv__Character__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Local Fall Speed", Category="기본", OverrideNativeName="Local_Fall_Speed"))
	float bpv__Local_Fall_Speed__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Key"))
	FKey b0l__K2Node_CustomEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FText b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item2"))
	FText b0l__CallFunc_Array_Get_Item2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item3"))
	FText b0l__CallFunc_Array_Get_Item3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCharacter_Blueprint"))
	ACharacter_Blueprint_C__pf2132744816* b0l__K2Node_DynamicCast_AsCharacter_Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item4"))
	FLinearColor b0l__CallFunc_Array_Get_Item4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item5"))
	int32 b0l__CallFunc_Array_Get_Item5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item6"))
	int32 b0l__CallFunc_Array_Get_Item6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item7"))
	int32 b0l__CallFunc_Array_Get_Item7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item8"))
	int32 b0l__CallFunc_Array_Get_Item8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item9"))
	int32 b0l__CallFunc_Array_Get_Item9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_Has_Been_Initd_Variable"))
	bool b0l_____bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item10"))
	UPaperFlipbookComponent* b0l__CallFunc_Array_Get_Item10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AScore_Blueprint_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item11"))
	AScore_Blueprint_C__pf2132744816* b0l__CallFunc_Array_Get_Item11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors2"))
	TArray<AFloor_Blueprint_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item12"))
	AFloor_Blueprint_C__pf2132744816* b0l__CallFunc_Array_Get_Item12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_IsClosed_Variable"))
	bool b0l_____bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors3"))
	TArray<ACharacter_Blueprint_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item13"))
	ACharacter_Blueprint_C__pf2132744816* b0l__CallFunc_Array_Get_Item13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit"))
	bool b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap"))
	bool b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time"))
	float b0l__CallFunc_BreakHitResult_Time__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location"))
	FVector b0l__CallFunc_BreakHitResult_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint"))
	FVector b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal"))
	FVector b0l__CallFunc_BreakHitResult_Normal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal"))
	FVector b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat"))
	UPhysicalMaterial* b0l__CallFunc_BreakHitResult_PhysMat__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor"))
	AActor* b0l__CallFunc_BreakHitResult_HitActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent"))
	UPrimitiveComponent* b0l__CallFunc_BreakHitResult_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName"))
	FName b0l__CallFunc_BreakHitResult_HitBoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem"))
	int32 b0l__CallFunc_BreakHitResult_HitItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex"))
	int32 b0l__CallFunc_BreakHitResult_FaceIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart"))
	FVector b0l__CallFunc_BreakHitResult_TraceStart__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd"))
	FVector b0l__CallFunc_BreakHitResult_TraceEnd__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item14"))
	UPaperFlipbookComponent* b0l__CallFunc_Array_Get_Item14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item15"))
	UPaperFlipbookComponent* b0l__CallFunc_Array_Get_Item15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors4"))
	TArray<AHighest_Score_Blueprint_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item16"))
	AHighest_Score_Blueprint_C__pf2132744816* b0l__CallFunc_Array_Get_Item16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item17"))
	UPaperFlipbookComponent* b0l__CallFunc_Array_Get_Item17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item18"))
	UPaperFlipbookComponent* b0l__CallFunc_Array_Get_Item18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___string_Variable"))
	FString b0l_____string_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___string_Variable2"))
	FString b0l_____string_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___string_Variable3"))
	FString b0l_____string_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___string_Variable4"))
	FString b0l_____string_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___string_Variable5"))
	FString b0l_____string_Variable5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___struct_Variable"))
	FTransform b0l_____struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AddComponent_ReturnValue2"))
	UPaperFlipbookComponent* b0l__CallFunc_AddComponent_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult2"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item19"))
	UPaperFlipbookComponent* b0l__CallFunc_Array_Get_Item19__pf;
	AMob_Re_Blueprint_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Mob_Re_Blueprint__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Mob_Re_Blueprint_1"))
	void bpf__ExecuteUbergraph_Mob_Re_Blueprint__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Mob_Re_Blueprint__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Mob_Re_Blueprint__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Mob_Re_Blueprint__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Key_Pressed"))
	virtual void bpf__Key_Pressed__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="Dead_Rotation__UpdateFunc"))
	virtual void bpf__Dead_Rotation__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Dead_Rotation__FinishedFunc"))
	virtual void bpf__Dead_Rotation__FinishedFunc__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
