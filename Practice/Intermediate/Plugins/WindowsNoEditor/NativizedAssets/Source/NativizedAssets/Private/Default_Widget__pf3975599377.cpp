#include "NativizedAssets.h"
#include "Default_Widget__pf3975599377.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Default_Widget__pf3975599377.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/RecastNavMesh.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationSystem.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationPath.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavMeshBoundsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UDefault_Widget_C__pf3975599377::UDefault_Widget_C__pf3975599377(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UDefault_Widget_C__pf3975599377::StaticClass() == GetClass()))
	{
		UDefault_Widget_C__pf3975599377::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Reason_F__pf = nullptr;
	bpv__Reason_S__pf = nullptr;
	bpv__Reason_T__pf = nullptr;
	bpv__Spawn_Rate_Text__pf = nullptr;
	bpv__Speed_Text__pf = nullptr;
	bpv__Speed__pf = 1.000000f;
	bpv__Reasons__pf = TArray<FString> ();
	bCanEverTick = false;
	bCanEverPaint = false;
}
void UDefault_Widget_C__pf3975599377::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UDefault_Widget_C__pf3975599377::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UCanvasPanel>(__Local__0, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__2 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__2 = TArray<UPanelSlot*> ();
	__Local__2.Reserve(7);
	auto __Local__3 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__3->LayoutData.Offsets.Left = 2.000000f;
	__Local__3->LayoutData.Offsets.Top = 996.000000f;
	__Local__3->LayoutData.Offsets.Right = 311.000000f;
	__Local__3->LayoutData.Offsets.Bottom = 80.000000f;
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Speed_Text"));
	__Local__4->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("1.0"), /* Literal Text */
	TEXT("[4CA7CCCF4B213F2FFD1302B4306603F1]"), /* Namespace */
	TEXT("008E1D364391C73909CBA5A2024998E0") /* Key */
	);
	__Local__4->Font.Size = 48;
	auto& __Local__5 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__4), UTextLayoutWidget::__PPO__Justification() )));
	__Local__5 = ETextJustify::Type::Center;
	__Local__4->bIsVariable = true;
	__Local__4->Slot = __Local__3;
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	auto __Local__6 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_1"));
	__Local__6->LayoutData.Offsets.Left = 8.000000f;
	__Local__6->LayoutData.Offsets.Top = 892.000000f;
	__Local__6->LayoutData.Offsets.Right = 305.000000f;
	__Local__6->LayoutData.Offsets.Bottom = 98.000000f;
	__Local__6->Parent = __Local__1;
	auto __Local__7 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("TextBlock_164"));
	__Local__7->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Speed"), /* Literal Text */
	TEXT("[4CA7CCCF4B213F2FFD1302B4306603F1]"), /* Namespace */
	TEXT("32C00E40459FFC043E5546AA30DE7603") /* Key */
	);
	auto& __Local__8 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__7->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__8 = FLinearColor(1.000000, 0.895339, 0.155000, 1.000000);
	__Local__7->Font.Size = 64;
	auto& __Local__9 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__7), UTextLayoutWidget::__PPO__Justification() )));
	__Local__9 = ETextJustify::Type::Center;
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__2.Add(__Local__6);
	auto __Local__10 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_2"));
	__Local__10->LayoutData.Offsets.Left = 24.000000f;
	__Local__10->LayoutData.Offsets.Top = 856.000000f;
	__Local__10->LayoutData.Offsets.Right = 269.000000f;
	__Local__10->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__10->Parent = __Local__1;
	auto __Local__11 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Reason_F"));
	auto& __Local__12 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__11->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__12 = FLinearColor(1.000000, 0.000000, 0.084490, 1.000000);
	auto& __Local__13 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__11), UTextLayoutWidget::__PPO__Justification() )));
	__Local__13 = ETextJustify::Type::Center;
	__Local__11->bIsVariable = true;
	__Local__11->Slot = __Local__10;
	__Local__10->Content = __Local__11;
	__Local__2.Add(__Local__10);
	auto __Local__14 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_3"));
	__Local__14->LayoutData.Offsets.Left = 24.000000f;
	__Local__14->LayoutData.Offsets.Top = 812.000000f;
	__Local__14->LayoutData.Offsets.Right = 269.000000f;
	__Local__14->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__14->Parent = __Local__1;
	auto __Local__15 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Reason_S"));
	auto& __Local__16 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__15->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__16 = FLinearColor(1.000000, 0.000000, 0.084490, 0.481000);
	auto& __Local__17 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__15), UTextLayoutWidget::__PPO__Justification() )));
	__Local__17 = ETextJustify::Type::Center;
	__Local__15->bIsVariable = true;
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__2.Add(__Local__14);
	auto __Local__18 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_4"));
	__Local__18->LayoutData.Offsets.Left = 24.000000f;
	__Local__18->LayoutData.Offsets.Top = 772.000000f;
	__Local__18->LayoutData.Offsets.Right = 269.000000f;
	__Local__18->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__18->Parent = __Local__1;
	auto __Local__19 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Reason_T"));
	auto& __Local__20 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__19->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__20 = FLinearColor(1.000000, 0.000000, 0.084490, 0.230000);
	auto& __Local__21 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__19), UTextLayoutWidget::__PPO__Justification() )));
	__Local__21 = ETextJustify::Type::Center;
	__Local__19->bIsVariable = true;
	__Local__19->Slot = __Local__18;
	__Local__18->Content = __Local__19;
	__Local__2.Add(__Local__18);
	auto __Local__22 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_5"));
	__Local__22->LayoutData.Offsets.Left = 1608.000000f;
	__Local__22->LayoutData.Offsets.Top = 944.000000f;
	__Local__22->LayoutData.Offsets.Right = 305.000000f;
	__Local__22->LayoutData.Offsets.Bottom = 76.000000f;
	__Local__22->Parent = __Local__1;
	auto __Local__23 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("TextSpawnRate"));
	__Local__23->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Spawn Rate"), /* Literal Text */
	TEXT("[4CA7CCCF4B213F2FFD1302B4306603F1]"), /* Namespace */
	TEXT("C7AFA8704A8BC72E173D9A987D4609E8") /* Key */
	);
	auto& __Local__24 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__23->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__24 = FLinearColor(1.000000, 0.895339, 0.155000, 1.000000);
	__Local__23->Font.Size = 40;
	auto& __Local__25 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__23), UTextLayoutWidget::__PPO__Justification() )));
	__Local__25 = ETextJustify::Type::Center;
	__Local__23->Slot = __Local__22;
	__Local__22->Content = __Local__23;
	__Local__2.Add(__Local__22);
	auto __Local__26 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_6"));
	__Local__26->LayoutData.Offsets.Left = 1604.000000f;
	__Local__26->LayoutData.Offsets.Top = 1020.000000f;
	__Local__26->LayoutData.Offsets.Right = 311.000000f;
	__Local__26->LayoutData.Offsets.Bottom = 52.000000f;
	__Local__26->Parent = __Local__1;
	auto __Local__27 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Spawn_Rate_Text"));
	__Local__27->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("1/120 per tick"), /* Literal Text */
	TEXT("[4CA7CCCF4B213F2FFD1302B4306603F1]"), /* Namespace */
	TEXT("568963F243B95BD03B7B6F93D1BAAC52") /* Key */
	);
	__Local__27->Font.Size = 30;
	auto& __Local__28 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__27), UTextLayoutWidget::__PPO__Justification() )));
	__Local__28 = ETextJustify::Type::Center;
	__Local__27->bIsVariable = true;
	__Local__27->Slot = __Local__26;
	__Local__26->Content = __Local__27;
	__Local__2.Add(__Local__26);
	__Local__0->RootWidget = __Local__1;
}
void UDefault_Widget_C__pf3975599377::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__29;
	SlotNames.Append(__Local__29);
}
void UDefault_Widget_C__pf3975599377::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__30;
	TArray<FDelegateRuntimeBinding>  __Local__31;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UDefault_Widget_C__pf3975599377::StaticClass())->MiscConvertedSubobjects[0]), __Local__30, __Local__31);
}
void UDefault_Widget_C__pf3975599377::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UDefault_Widget_C__pf3975599377::bpf__ExecuteUbergraph_Default_Widget__pf_0(int32 bpp__EntryPoint__pf)
{
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue3__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue4__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue4__pf{};
	check(bpp__EntryPoint__pf == 8);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(b0l__K2Node_CustomEvent_New_Rate__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue3__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("1/")), bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue4__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue3__pf, FString(TEXT(" per tick")));
	bpfv__CallFunc_Conv_StringToText_ReturnValue4__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue4__pf);
	if(IsValid(bpv__Spawn_Rate_Text__pf))
	{
		bpv__Spawn_Rate_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue4__pf);
	}
	return; // KCST_GotoReturn
}
void UDefault_Widget_C__pf3975599377::bpf__ExecuteUbergraph_Default_Widget__pf_1(int32 bpp__EntryPoint__pf)
{
	FText bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue2__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue3__pf{};
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(b0l__K2Node_CustomEvent_Speed_Add__pf, bpv__Speed__pf);
	bpv__Speed__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
	bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf = UKismetTextLibrary::Conv_FloatToText(bpv__Speed__pf, ERoundingMode::HalfToEven, true, 1, 324, 0, 3);
	if(IsValid(bpv__Speed_Text__pf))
	{
		bpv__Speed_Text__pf->SetText(bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf);
	}
	bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(b0l__K2Node_CustomEvent_Reason__pf);
	bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf = UKismetStringLibrary::Conv_FloatToString(b0l__K2Node_CustomEvent_Speed_Add__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf, FString(TEXT("  +")));
	bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf);
	FCustomThunkTemplates::Array_Insert(bpv__Reasons__pf, bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf, 0);
	FCustomThunkTemplates::Array_Get(bpv__Reasons__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
	bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(b0l__CallFunc_Array_Get_Item__pf);
	if(IsValid(bpv__Reason_F__pf))
	{
		bpv__Reason_F__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
	}
	FCustomThunkTemplates::Array_Get(bpv__Reasons__pf, 1, /*out*/ b0l__CallFunc_Array_Get_Item2__pf);
	bpfv__CallFunc_Conv_StringToText_ReturnValue2__pf = UKismetTextLibrary::Conv_StringToText(b0l__CallFunc_Array_Get_Item2__pf);
	if(IsValid(bpv__Reason_S__pf))
	{
		bpv__Reason_S__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue2__pf);
	}
	FCustomThunkTemplates::Array_Get(bpv__Reasons__pf, 2, /*out*/ b0l__CallFunc_Array_Get_Item3__pf);
	bpfv__CallFunc_Conv_StringToText_ReturnValue3__pf = UKismetTextLibrary::Conv_StringToText(b0l__CallFunc_Array_Get_Item3__pf);
	if(IsValid(bpv__Reason_T__pf))
	{
		bpv__Reason_T__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue3__pf);
	}
	return; // KCST_GotoReturn
}
void UDefault_Widget_C__pf3975599377::bpf__Spawn_Update__pf(int32 bpp__New_Rate__pf)
{
	b0l__K2Node_CustomEvent_New_Rate__pf = bpp__New_Rate__pf;
	bpf__ExecuteUbergraph_Default_Widget__pf_0(8);
}
void UDefault_Widget_C__pf3975599377::bpf__Speed_Update__pf(float bpp__Speed_Add__pf, const FText& bpp__Reason__pf__const)
{
	typedef FText  T__Local__32;
	T__Local__32& bpp__Reason__pf = *const_cast<T__Local__32 *>(&bpp__Reason__pf__const);
	b0l__K2Node_CustomEvent_Speed_Add__pf = bpp__Speed_Add__pf;
	b0l__K2Node_CustomEvent_Reason__pf = bpp__Reason__pf;
	bpf__ExecuteUbergraph_Default_Widget__pf_1(1);
}
void UDefault_Widget_C__pf3975599377::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
void UDefault_Widget_C__pf3975599377::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
	};
	for(const FCompactBlueprintDependencyData CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(
			F__NativeDependencies::Get(CompactData.ObjectRefIndex)
			,CompactData.ClassDependency
			,CompactData.CDODependency
			,CompactData.ObjectRefIndex
		));
	} 
}
struct FRegisterHelper__UDefault_Widget_C__pf3975599377
{
	FRegisterHelper__UDefault_Widget_C__pf3975599377()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Widgets/Default_Widget"), &UDefault_Widget_C__pf3975599377::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UDefault_Widget_C__pf3975599377 Instance;
};
FRegisterHelper__UDefault_Widget_C__pf3975599377 FRegisterHelper__UDefault_Widget_C__pf3975599377::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
