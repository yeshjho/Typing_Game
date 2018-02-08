#include "NativizedAssets.h"
#include "Option_Widget__pf3975599377.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/CheckBox.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Option_Widget__pf3975599377.h"
#include "Character_Blueprint__pf2132744816.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
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
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
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
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
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
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UOption_Widget_C__pf3975599377::UOption_Widget_C__pf3975599377(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UOption_Widget_C__pf3975599377::StaticClass() == GetClass()))
	{
		UOption_Widget_C__pf3975599377::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Arrow_Check__pf = nullptr;
	bpv__Background_White__pf = nullptr;
	bpv__Cancel_Button__pf = nullptr;
	bpv__Confirm_Button__pf = nullptr;
	bpv__Control_Check__pf = nullptr;
	bpv__Func_Check__pf = nullptr;
	bpv__KB_Arrows__pf = nullptr;
	bpv__KB_Functions__pf = nullptr;
	bpv__KB_Letters__pf = nullptr;
	bpv__KB_Marks__pf = nullptr;
	bpv__KB_Miscs__pf = nullptr;
	bpv__KB_Numbers__pf = nullptr;
	bpv__KB_Numpads__pf = nullptr;
	bpv__KB_Techs__pf = nullptr;
	bpv__Key_Setting_Button__pf = nullptr;
	bpv__Korean_Check__pf = nullptr;
	bpv__Letters_Check__pf = nullptr;
	bpv__Miscs_Check__pf = nullptr;
	bpv__Numbers_Check__pf = nullptr;
	bpv__Numpad_Check__pf = nullptr;
	bpv__Reset_High_Score_Button__pf = nullptr;
	bpv__Speed_Setting_Button__pf = nullptr;
	bpv__Keyboards__pf = TArray<UImage*> ();
	bpv__Character__pf = nullptr;
	bpv__Triggered__pf = false;
	bCanEverPaint = false;
}
void UOption_Widget_C__pf3975599377::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UOption_Widget_C__pf3975599377::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ACharacter_Blueprint_C__pf2132744816::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(3);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 3);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("Speed_Setting_Button"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__Speed_Setting_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("Reset_High_Score_Button"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Reset_High_Score_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("Key_Setting_Button"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Key_Setting_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__5 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__6 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__5), UPanelWidget::__PPO__Slots() )));
	__Local__6 = TArray<UPanelSlot*> ();
	__Local__6.Reserve(24);
	auto __Local__7 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__7->LayoutData.Offsets.Left = 618.000000f;
	__Local__7->LayoutData.Offsets.Top = 124.000000f;
	__Local__7->LayoutData.Offsets.Right = 686.000000f;
	__Local__7->LayoutData.Offsets.Bottom = 162.000000f;
	__Local__7->Parent = __Local__5;
	auto __Local__8 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Key_Setting_Button"));
	auto& __Local__9 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__8), UPanelWidget::__PPO__Slots() )));
	__Local__9 = TArray<UPanelSlot*> ();
	__Local__9.Reserve(1);
	auto __Local__10 = NewObject<UButtonSlot>(__Local__8, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__10->Parent = __Local__8;
	auto __Local__11 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_106"));
	__Local__11->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Key Setting"), /* Literal Text */
	TEXT("[AC482EBF42ED84534E123083B08F06DB]"), /* Namespace */
	TEXT("02C091EC4C6D6773CF19D8BC32058E13") /* Key */
	);
	auto& __Local__12 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__11->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__12 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__11->Font.Size = 54;
	__Local__11->Slot = __Local__10;
	__Local__10->Content = __Local__11;
	__Local__9.Add(__Local__10);
	__Local__8->Slot = __Local__7;
	__Local__7->Content = __Local__8;
	__Local__6.Add(__Local__7);
	auto __Local__13 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_1"));
	__Local__13->LayoutData.Offsets.Left = 616.000000f;
	__Local__13->LayoutData.Offsets.Top = 452.000000f;
	__Local__13->LayoutData.Offsets.Right = 686.000000f;
	__Local__13->LayoutData.Offsets.Bottom = 162.000000f;
	__Local__13->Parent = __Local__5;
	auto __Local__14 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Speed_Setting_Button"));
	auto& __Local__15 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__14), UPanelWidget::__PPO__Slots() )));
	__Local__15 = TArray<UPanelSlot*> ();
	__Local__15.Reserve(1);
	auto __Local__16 = NewObject<UButtonSlot>(__Local__14, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__16->Parent = __Local__14;
	auto __Local__17 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextSpeedSetting"));
	__Local__17->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Speed Setting"), /* Literal Text */
	TEXT("[AC482EBF42ED84534E123083B08F06DB]"), /* Namespace */
	TEXT("2A39559A4E6CA84FFFD3F68B063CC75C") /* Key */
	);
	auto& __Local__18 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__17->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__18 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__17->Font.Size = 54;
	__Local__17->Slot = __Local__16;
	__Local__16->Content = __Local__17;
	__Local__15.Add(__Local__16);
	__Local__14->Slot = __Local__13;
	__Local__13->Content = __Local__14;
	__Local__6.Add(__Local__13);
	auto __Local__19 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_2"));
	__Local__19->LayoutData.Offsets.Left = 616.000000f;
	__Local__19->LayoutData.Offsets.Top = 788.000000f;
	__Local__19->LayoutData.Offsets.Right = 686.000000f;
	__Local__19->LayoutData.Offsets.Bottom = 162.000000f;
	__Local__19->Parent = __Local__5;
	auto __Local__20 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Reset_High_Score_Button"));
	auto& __Local__21 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__20), UPanelWidget::__PPO__Slots() )));
	__Local__21 = TArray<UPanelSlot*> ();
	__Local__21.Reserve(1);
	auto __Local__22 = NewObject<UButtonSlot>(__Local__20, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__22->Parent = __Local__20;
	auto __Local__23 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextResetHighScore"));
	__Local__23->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Reset High Score"), /* Literal Text */
	TEXT("[AC482EBF42ED84534E123083B08F06DB]"), /* Namespace */
	TEXT("AA54827544BE5D5A971C7D844BC677BF") /* Key */
	);
	auto& __Local__24 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__23->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__24 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__23->Font.Size = 54;
	__Local__23->Slot = __Local__22;
	__Local__22->Content = __Local__23;
	__Local__21.Add(__Local__22);
	__Local__20->Slot = __Local__19;
	__Local__19->Content = __Local__20;
	__Local__6.Add(__Local__19);
	auto __Local__25 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_3"));
	__Local__25->LayoutData.Offsets.Left = -58.000000f;
	__Local__25->LayoutData.Offsets.Top = -16.000000f;
	__Local__25->LayoutData.Offsets.Right = 2012.000000f;
	__Local__25->LayoutData.Offsets.Bottom = 1112.000000f;
	__Local__25->ZOrder = -5;
	__Local__25->Parent = __Local__5;
	auto __Local__26 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Background_Gray"));
	__Local__26->ColorAndOpacity = FLinearColor(0.070000, 0.070000, 0.070000, 1.000000);
	__Local__26->bIsVariable = false;
	__Local__26->Slot = __Local__25;
	__Local__25->Content = __Local__26;
	__Local__6.Add(__Local__25);
	auto __Local__27 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_11"));
	__Local__27->LayoutData.Offsets.Left = -56.000000f;
	__Local__27->LayoutData.Offsets.Top = -44.000000f;
	__Local__27->LayoutData.Offsets.Right = 2048.000000f;
	__Local__27->LayoutData.Offsets.Bottom = 1162.000000f;
	__Local__27->ZOrder = -1;
	__Local__27->Parent = __Local__5;
	auto __Local__28 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Background_White"));
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__6.Add(__Local__27);
	auto __Local__29 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_5"));
	__Local__29->LayoutData.Offsets.Left = 40.000000f;
	__Local__29->LayoutData.Offsets.Top = 150.000000f;
	__Local__29->LayoutData.Offsets.Right = 1834.814819f;
	__Local__29->LayoutData.Offsets.Bottom = 520.000000f;
	__Local__29->Parent = __Local__5;
	auto __Local__30 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Keyboard_Image"));
	__Local__30->Brush.ImageSize = FVector2D(2400.000000, 716.000000);
	auto& __Local__31 = (*(AccessPrivateProperty<UObject* >(&(__Local__30->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__31 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOption_Widget_C__pf3975599377::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__30->bIsVariable = false;
	__Local__30->Slot = __Local__29;
	__Local__30->Visibility = ESlateVisibility::Collapsed;
	__Local__29->Content = __Local__30;
	__Local__6.Add(__Local__29);
	auto __Local__32 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_7"));
	__Local__32->LayoutData.Offsets.Left = 40.000000f;
	__Local__32->LayoutData.Offsets.Top = 150.000000f;
	__Local__32->LayoutData.Offsets.Right = 1834.814819f;
	__Local__32->LayoutData.Offsets.Bottom = 520.000000f;
	__Local__32->Parent = __Local__5;
	auto __Local__33 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("KB_Numbers"));
	__Local__33->Brush.ImageSize = FVector2D(2400.000000, 716.000000);
	auto& __Local__34 = (*(AccessPrivateProperty<UObject* >(&(__Local__33->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__34 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOption_Widget_C__pf3975599377::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__33->Slot = __Local__32;
	__Local__32->Content = __Local__33;
	__Local__6.Add(__Local__32);
	auto __Local__35 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_8"));
	__Local__35->LayoutData.Offsets.Left = 40.000000f;
	__Local__35->LayoutData.Offsets.Top = 150.000000f;
	__Local__35->LayoutData.Offsets.Right = 1834.814819f;
	__Local__35->LayoutData.Offsets.Bottom = 520.000000f;
	__Local__35->Parent = __Local__5;
	auto __Local__36 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("KB_Functions"));
	__Local__36->Brush.ImageSize = FVector2D(2400.000000, 716.000000);
	auto& __Local__37 = (*(AccessPrivateProperty<UObject* >(&(__Local__36->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__37 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOption_Widget_C__pf3975599377::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__36->Slot = __Local__35;
	__Local__35->Content = __Local__36;
	__Local__6.Add(__Local__35);
	auto __Local__38 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_9"));
	__Local__38->LayoutData.Offsets.Left = 40.000000f;
	__Local__38->LayoutData.Offsets.Top = 150.000000f;
	__Local__38->LayoutData.Offsets.Right = 1834.814819f;
	__Local__38->LayoutData.Offsets.Bottom = 520.000000f;
	__Local__38->Parent = __Local__5;
	auto __Local__39 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("KB_Letters"));
	__Local__39->Brush.ImageSize = FVector2D(2400.000000, 716.000000);
	auto& __Local__40 = (*(AccessPrivateProperty<UObject* >(&(__Local__39->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__40 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOption_Widget_C__pf3975599377::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__39->Slot = __Local__38;
	__Local__38->Content = __Local__39;
	__Local__6.Add(__Local__38);
	auto __Local__41 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_10"));
	__Local__41->LayoutData.Offsets.Left = 40.000000f;
	__Local__41->LayoutData.Offsets.Top = 150.000000f;
	__Local__41->LayoutData.Offsets.Right = 1834.814819f;
	__Local__41->LayoutData.Offsets.Bottom = 520.000000f;
	__Local__41->Parent = __Local__5;
	auto __Local__42 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("KB_Techs"));
	__Local__42->Brush.ImageSize = FVector2D(2400.000000, 716.000000);
	auto& __Local__43 = (*(AccessPrivateProperty<UObject* >(&(__Local__42->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__43 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOption_Widget_C__pf3975599377::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__42->Slot = __Local__41;
	__Local__41->Content = __Local__42;
	__Local__6.Add(__Local__41);
	auto __Local__44 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_12"));
	__Local__44->LayoutData.Offsets.Left = 40.000000f;
	__Local__44->LayoutData.Offsets.Top = 150.000000f;
	__Local__44->LayoutData.Offsets.Right = 1834.814819f;
	__Local__44->LayoutData.Offsets.Bottom = 520.000000f;
	__Local__44->Parent = __Local__5;
	auto __Local__45 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("KB_Numpads"));
	__Local__45->Brush.ImageSize = FVector2D(2400.000000, 716.000000);
	auto& __Local__46 = (*(AccessPrivateProperty<UObject* >(&(__Local__45->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__46 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOption_Widget_C__pf3975599377::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__45->Slot = __Local__44;
	__Local__44->Content = __Local__45;
	__Local__6.Add(__Local__44);
	auto __Local__47 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_13"));
	__Local__47->LayoutData.Offsets.Left = 40.000000f;
	__Local__47->LayoutData.Offsets.Top = 150.000000f;
	__Local__47->LayoutData.Offsets.Right = 1834.814819f;
	__Local__47->LayoutData.Offsets.Bottom = 520.000000f;
	__Local__47->Parent = __Local__5;
	auto __Local__48 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("KB_Arrows"));
	__Local__48->Brush.ImageSize = FVector2D(2400.000000, 716.000000);
	auto& __Local__49 = (*(AccessPrivateProperty<UObject* >(&(__Local__48->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__49 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOption_Widget_C__pf3975599377::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__48->Slot = __Local__47;
	__Local__47->Content = __Local__48;
	__Local__6.Add(__Local__47);
	auto __Local__50 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_14"));
	__Local__50->LayoutData.Offsets.Left = 40.000000f;
	__Local__50->LayoutData.Offsets.Top = 150.000000f;
	__Local__50->LayoutData.Offsets.Right = 1834.814819f;
	__Local__50->LayoutData.Offsets.Bottom = 520.000000f;
	__Local__50->Parent = __Local__5;
	auto __Local__51 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("KB_Miscs"));
	__Local__51->Brush.ImageSize = FVector2D(2400.000000, 716.000000);
	auto& __Local__52 = (*(AccessPrivateProperty<UObject* >(&(__Local__51->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__52 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOption_Widget_C__pf3975599377::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__51->Slot = __Local__50;
	__Local__50->Content = __Local__51;
	__Local__6.Add(__Local__50);
	auto __Local__53 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_15"));
	__Local__53->LayoutData.Offsets.Left = 40.000000f;
	__Local__53->LayoutData.Offsets.Top = 150.000000f;
	__Local__53->LayoutData.Offsets.Right = 1834.814819f;
	__Local__53->LayoutData.Offsets.Bottom = 520.000000f;
	__Local__53->Parent = __Local__5;
	auto __Local__54 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("KB_Marks"));
	__Local__54->Brush.ImageSize = FVector2D(2400.000000, 716.000000);
	auto& __Local__55 = (*(AccessPrivateProperty<UObject* >(&(__Local__54->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__55 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOption_Widget_C__pf3975599377::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__54->Slot = __Local__53;
	__Local__53->Content = __Local__54;
	__Local__6.Add(__Local__53);
	auto __Local__56 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_4"));
	__Local__56->LayoutData.Offsets.Left = 76.000000f;
	__Local__56->LayoutData.Offsets.Top = 780.000000f;
	__Local__56->LayoutData.Offsets.Right = 153.333328f;
	__Local__56->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__56->ZOrder = 1;
	__Local__56->Parent = __Local__5;
	auto __Local__57 = NewObject<UCheckBox>(__Local__1, UCheckBox::StaticClass(), TEXT("Letters_Check"));
	auto& __Local__58 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__57), UPanelWidget::__PPO__Slots() )));
	__Local__58 = TArray<UPanelSlot*> ();
	__Local__58.Reserve(1);
	auto __Local__59 = NewObject<UPanelSlot>(__Local__57, UPanelSlot::StaticClass(), TEXT("PanelSlot_0"));
	__Local__59->Parent = __Local__57;
	auto __Local__60 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_67"));
	__Local__60->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("   Letters"), /* Literal Text */
	TEXT("[AC482EBF42ED84534E123083B08F06DB]"), /* Namespace */
	TEXT("F8B35789447EE5294B6EEAB2A4A5A329") /* Key */
	);
	auto& __Local__61 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__60->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__61 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__60->Slot = __Local__59;
	__Local__59->Content = __Local__60;
	__Local__58.Add(__Local__59);
	__Local__57->Slot = __Local__56;
	__Local__56->Content = __Local__57;
	__Local__6.Add(__Local__56);
	auto __Local__62 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_6"));
	__Local__62->LayoutData.Offsets.Left = 564.000000f;
	__Local__62->LayoutData.Offsets.Top = 884.000000f;
	__Local__62->LayoutData.Offsets.Right = 144.444443f;
	__Local__62->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__62->ZOrder = 1;
	__Local__62->Parent = __Local__5;
	auto __Local__63 = NewObject<UCheckBox>(__Local__1, UCheckBox::StaticClass(), TEXT("Miscs_Check"));
	auto& __Local__64 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__63), UPanelWidget::__PPO__Slots() )));
	__Local__64 = TArray<UPanelSlot*> ();
	__Local__64.Reserve(1);
	auto __Local__65 = NewObject<UPanelSlot>(__Local__63, UPanelSlot::StaticClass(), TEXT("PanelSlot_0"));
	__Local__65->Parent = __Local__63;
	auto __Local__66 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_68"));
	__Local__66->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("   Miscs"), /* Literal Text */
	TEXT("[AC482EBF42ED84534E123083B08F06DB]"), /* Namespace */
	TEXT("E7521A4F47323D772B7F62AE0165E048") /* Key */
	);
	auto& __Local__67 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__66->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__67 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__66->Slot = __Local__65;
	__Local__65->Content = __Local__66;
	__Local__64.Add(__Local__65);
	__Local__63->Slot = __Local__62;
	__Local__62->Content = __Local__63;
	__Local__6.Add(__Local__62);
	auto __Local__68 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_16"));
	__Local__68->LayoutData.Offsets.Left = 564.000000f;
	__Local__68->LayoutData.Offsets.Top = 832.000000f;
	__Local__68->LayoutData.Offsets.Right = 240.888885f;
	__Local__68->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__68->ZOrder = 1;
	__Local__68->Parent = __Local__5;
	auto __Local__69 = NewObject<UCheckBox>(__Local__1, UCheckBox::StaticClass(), TEXT("Control_Check"));
	auto& __Local__70 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__69), UPanelWidget::__PPO__Slots() )));
	__Local__70 = TArray<UPanelSlot*> ();
	__Local__70.Reserve(1);
	auto __Local__71 = NewObject<UPanelSlot>(__Local__69, UPanelSlot::StaticClass(), TEXT("PanelSlot_0"));
	__Local__71->Parent = __Local__69;
	auto __Local__72 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_69"));
	__Local__72->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("   Control Keys"), /* Literal Text */
	TEXT("[AC482EBF42ED84534E123083B08F06DB]"), /* Namespace */
	TEXT("923468C54E8590F2AE08A3A19B0EE0F3") /* Key */
	);
	auto& __Local__73 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__72->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__73 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__72->Slot = __Local__71;
	__Local__71->Content = __Local__72;
	__Local__70.Add(__Local__71);
	__Local__69->Slot = __Local__68;
	__Local__68->Content = __Local__69;
	__Local__6.Add(__Local__68);
	auto __Local__74 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_17"));
	__Local__74->LayoutData.Offsets.Left = 564.000000f;
	__Local__74->LayoutData.Offsets.Top = 780.000000f;
	__Local__74->LayoutData.Offsets.Right = 223.111115f;
	__Local__74->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__74->ZOrder = 1;
	__Local__74->Parent = __Local__5;
	auto __Local__75 = NewObject<UCheckBox>(__Local__1, UCheckBox::StaticClass(), TEXT("Arrow_Check"));
	auto& __Local__76 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__75), UPanelWidget::__PPO__Slots() )));
	__Local__76 = TArray<UPanelSlot*> ();
	__Local__76.Reserve(1);
	auto __Local__77 = NewObject<UPanelSlot>(__Local__75, UPanelSlot::StaticClass(), TEXT("PanelSlot_0"));
	__Local__77->Parent = __Local__75;
	auto __Local__78 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_70"));
	__Local__78->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("   Arrow Keys"), /* Literal Text */
	TEXT("[AC482EBF42ED84534E123083B08F06DB]"), /* Namespace */
	TEXT("3FBE3011495B405E3042249061CA8316") /* Key */
	);
	auto& __Local__79 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__78->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__79 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__78->Slot = __Local__77;
	__Local__77->Content = __Local__78;
	__Local__76.Add(__Local__77);
	__Local__75->Slot = __Local__74;
	__Local__74->Content = __Local__75;
	__Local__6.Add(__Local__74);
	auto __Local__80 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_18"));
	__Local__80->LayoutData.Offsets.Left = 76.000000f;
	__Local__80->LayoutData.Offsets.Top = 936.000000f;
	__Local__80->LayoutData.Offsets.Right = 239.259247f;
	__Local__80->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__80->ZOrder = 1;
	__Local__80->Parent = __Local__5;
	auto __Local__81 = NewObject<UCheckBox>(__Local__1, UCheckBox::StaticClass(), TEXT("Numpad_Check"));
	auto& __Local__82 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__81), UPanelWidget::__PPO__Slots() )));
	__Local__82 = TArray<UPanelSlot*> ();
	__Local__82.Reserve(1);
	auto __Local__83 = NewObject<UPanelSlot>(__Local__81, UPanelSlot::StaticClass(), TEXT("PanelSlot_0"));
	__Local__83->Parent = __Local__81;
	auto __Local__84 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_71"));
	__Local__84->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("   Number Pad"), /* Literal Text */
	TEXT("[AC482EBF42ED84534E123083B08F06DB]"), /* Namespace */
	TEXT("EEBF46D04D0D458915AF03899F567CB0") /* Key */
	);
	auto& __Local__85 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__84->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__85 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__84->Slot = __Local__83;
	__Local__83->Content = __Local__84;
	__Local__82.Add(__Local__83);
	__Local__81->Slot = __Local__80;
	__Local__80->Content = __Local__81;
	__Local__6.Add(__Local__80);
	auto __Local__86 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_19"));
	__Local__86->LayoutData.Offsets.Left = 76.000000f;
	__Local__86->LayoutData.Offsets.Top = 884.000000f;
	__Local__86->LayoutData.Offsets.Right = 192.148148f;
	__Local__86->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__86->ZOrder = 1;
	__Local__86->Parent = __Local__5;
	auto __Local__87 = NewObject<UCheckBox>(__Local__1, UCheckBox::StaticClass(), TEXT("Numbers_Check"));
	auto& __Local__88 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__87), UPanelWidget::__PPO__Slots() )));
	__Local__88 = TArray<UPanelSlot*> ();
	__Local__88.Reserve(1);
	auto __Local__89 = NewObject<UPanelSlot>(__Local__87, UPanelSlot::StaticClass(), TEXT("PanelSlot_0"));
	__Local__89->Parent = __Local__87;
	auto __Local__90 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_72"));
	__Local__90->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("   Numbers"), /* Literal Text */
	TEXT("[AC482EBF42ED84534E123083B08F06DB]"), /* Namespace */
	TEXT("4C3EC5DB4E5E05C12BBCA5A3CE6208BE") /* Key */
	);
	auto& __Local__91 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__90->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__91 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__90->Slot = __Local__89;
	__Local__89->Content = __Local__90;
	__Local__88.Add(__Local__89);
	__Local__87->Slot = __Local__86;
	__Local__86->Content = __Local__87;
	__Local__6.Add(__Local__86);
	auto __Local__92 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_20"));
	__Local__92->LayoutData.Offsets.Left = 76.000000f;
	__Local__92->LayoutData.Offsets.Top = 832.000000f;
	__Local__92->LayoutData.Offsets.Right = 265.333313f;
	__Local__92->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__92->ZOrder = 1;
	__Local__92->Parent = __Local__5;
	auto __Local__93 = NewObject<UCheckBox>(__Local__1, UCheckBox::StaticClass(), TEXT("Func_Check"));
	auto& __Local__94 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__93), UPanelWidget::__PPO__Slots() )));
	__Local__94 = TArray<UPanelSlot*> ();
	__Local__94.Reserve(1);
	auto __Local__95 = NewObject<UPanelSlot>(__Local__93, UPanelSlot::StaticClass(), TEXT("PanelSlot_0"));
	__Local__95->Parent = __Local__93;
	auto __Local__96 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_73"));
	__Local__96->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("   Function Keys"), /* Literal Text */
	TEXT("[AC482EBF42ED84534E123083B08F06DB]"), /* Namespace */
	TEXT("6A0C9078495152B6099F80A099774562") /* Key */
	);
	auto& __Local__97 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__96->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__97 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__96->Slot = __Local__95;
	__Local__95->Content = __Local__96;
	__Local__94.Add(__Local__95);
	__Local__93->Slot = __Local__92;
	__Local__92->Content = __Local__93;
	__Local__6.Add(__Local__92);
	auto __Local__98 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_21"));
	__Local__98->LayoutData.Offsets.Left = 1276.000000f;
	__Local__98->LayoutData.Offsets.Top = 772.000000f;
	__Local__98->LayoutData.Offsets.Right = 155.111115f;
	__Local__98->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__98->ZOrder = 1;
	__Local__98->Parent = __Local__5;
	auto __Local__99 = NewObject<UCheckBox>(__Local__1, UCheckBox::StaticClass(), TEXT("Korean_Check"));
	auto& __Local__100 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__99), UPanelWidget::__PPO__Slots() )));
	__Local__100 = TArray<UPanelSlot*> ();
	__Local__100.Reserve(1);
	auto __Local__101 = NewObject<UPanelSlot>(__Local__99, UPanelSlot::StaticClass(), TEXT("PanelSlot_0"));
	__Local__101->Parent = __Local__99;
	auto __Local__102 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_74"));
	__Local__102->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("   Korean"), /* Literal Text */
	TEXT("[AC482EBF42ED84534E123083B08F06DB]"), /* Namespace */
	TEXT("BD3D15C349FFCECA60F6B38CBA357AD2") /* Key */
	);
	auto& __Local__103 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__102->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__103 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__102->Slot = __Local__101;
	__Local__101->Content = __Local__102;
	__Local__100.Add(__Local__101);
	__Local__99->Slot = __Local__98;
	__Local__98->Content = __Local__99;
	__Local__6.Add(__Local__98);
	auto __Local__104 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_22"));
	__Local__104->LayoutData.Offsets.Left = 1464.000000f;
	__Local__104->LayoutData.Offsets.Top = 1000.000000f;
	__Local__104->LayoutData.Offsets.Right = 191.851852f;
	__Local__104->LayoutData.Offsets.Bottom = 47.407406f;
	__Local__104->Parent = __Local__5;
	auto __Local__105 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Confirm_Button"));
	auto& __Local__106 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__105), UPanelWidget::__PPO__Slots() )));
	__Local__106 = TArray<UPanelSlot*> ();
	__Local__106.Reserve(1);
	auto __Local__107 = NewObject<UButtonSlot>(__Local__105, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__107->Parent = __Local__105;
	auto __Local__108 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_151"));
	__Local__108->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Confirm"), /* Literal Text */
	TEXT("[AC482EBF42ED84534E123083B08F06DB]"), /* Namespace */
	TEXT("EEEAE55242AE3710228837802C85C2C5") /* Key */
	);
	auto& __Local__109 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__108->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__109 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__108->Slot = __Local__107;
	__Local__107->Content = __Local__108;
	__Local__106.Add(__Local__107);
	__Local__105->Slot = __Local__104;
	__Local__104->Content = __Local__105;
	__Local__6.Add(__Local__104);
	auto __Local__110 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_23"));
	__Local__110->LayoutData.Offsets.Left = 1684.000000f;
	__Local__110->LayoutData.Offsets.Top = 1000.000000f;
	__Local__110->LayoutData.Offsets.Right = 191.851852f;
	__Local__110->LayoutData.Offsets.Bottom = 47.407406f;
	__Local__110->Parent = __Local__5;
	auto __Local__111 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Cancel_Button"));
	auto& __Local__112 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__111), UPanelWidget::__PPO__Slots() )));
	__Local__112 = TArray<UPanelSlot*> ();
	__Local__112.Reserve(1);
	auto __Local__113 = NewObject<UButtonSlot>(__Local__111, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__113->Parent = __Local__111;
	auto __Local__114 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_152"));
	__Local__114->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Cancel"), /* Literal Text */
	TEXT("[AC482EBF42ED84534E123083B08F06DB]"), /* Namespace */
	TEXT("77C7BF6C41E946C628DCC59D18B074CD") /* Key */
	);
	auto& __Local__115 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__114->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__115 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__114->Slot = __Local__113;
	__Local__113->Content = __Local__114;
	__Local__112.Add(__Local__113);
	__Local__111->Slot = __Local__110;
	__Local__110->Content = __Local__111;
	__Local__6.Add(__Local__110);
	__Local__1->RootWidget = __Local__5;
}
void UOption_Widget_C__pf3975599377::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__116;
	SlotNames.Append(__Local__116);
}
void UOption_Widget_C__pf3975599377::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__117;
	TArray<FDelegateRuntimeBinding>  __Local__118;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UOption_Widget_C__pf3975599377::StaticClass())->MiscConvertedSubobjects[0]), __Local__117, __Local__118);
}
void UOption_Widget_C__pf3975599377::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UOption_Widget_C__pf3975599377::bpf__ExecuteUbergraph_Option_Widget__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsHovered_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__Triggered__pf = false;
			}
		case 2:
			{
				b0l_____bool_IsClosed_Variable__pf = false;
			}
		case 3:
			{
				b0l_____bool_Has_Been_Initd_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 4:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 5:
			{
				b0l_____bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				__CurrentState = 10;
				break;
			}
		case 10:
			{
				if(IsValid(bpv__Arrow_Check__pf))
				{
					bpfv__CallFunc_IsHovered_ReturnValue__pf = bpv__Arrow_Check__pf->UWidget::IsHovered();
				}
				if (!bpfv__CallFunc_IsHovered_ReturnValue__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 11:
			{
				__StateStack.Push(16);
			}
		case 12:
			{
				if (!b0l_____bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 19;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				if (!bpv__Triggered__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 14:
			{
				__StateStack.Push(15);
				__CurrentState = 1;
				break;
			}
		case 15:
			{
				if(IsValid(bpv__Character__pf))
				{
					bpv__Character__pf->bpf__Hovered__pf(bpv__KB_Arrows__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				if (!b0l_____bool_IsClosed_Variable__pf)
				{
					__CurrentState = 17;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				b0l_____bool_IsClosed_Variable__pf = true;
			}
		case 18:
			{
				bpv__Triggered__pf = true;
				__CurrentState = 15;
				break;
			}
		case 19:
			{
				b0l_____bool_Has_Been_Initd_Variable__pf = true;
				__CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UOption_Widget_C__pf3975599377::bpf__ExecuteUbergraph_Option_Widget__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue3__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue4__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue5__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue6__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue7__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue8__pf{};
	check(bpp__EntryPoint__pf == 20);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__Keyboards__pf, bpv__KB_Arrows__pf);
	bpfv__CallFunc_Array_Add_ReturnValue2__pf = FCustomThunkTemplates::Array_Add(bpv__Keyboards__pf, bpv__KB_Functions__pf);
	bpfv__CallFunc_Array_Add_ReturnValue3__pf = FCustomThunkTemplates::Array_Add(bpv__Keyboards__pf, bpv__KB_Letters__pf);
	bpfv__CallFunc_Array_Add_ReturnValue6__pf = FCustomThunkTemplates::Array_Add(bpv__Keyboards__pf, bpv__KB_Miscs__pf);
	bpfv__CallFunc_Array_Add_ReturnValue7__pf = FCustomThunkTemplates::Array_Add(bpv__Keyboards__pf, bpv__KB_Numpads__pf);
	bpfv__CallFunc_Array_Add_ReturnValue8__pf = FCustomThunkTemplates::Array_Add(bpv__Keyboards__pf, bpv__KB_Techs__pf);
	bpfv__CallFunc_Array_Add_ReturnValue5__pf = FCustomThunkTemplates::Array_Add(bpv__Keyboards__pf, bpv__KB_Numbers__pf);
	bpfv__CallFunc_Array_Add_ReturnValue4__pf = FCustomThunkTemplates::Array_Add(bpv__Keyboards__pf, bpv__KB_Marks__pf);
	(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
	UGameplayStatics::GetAllActorsOfClass(this, ACharacter_Blueprint_C__pf2132744816::StaticClass(), /*out*/ TArrayCaster< ACharacter_Blueprint_C__pf2132744816* >(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get< AActor* >());
	FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
	bpv__Character__pf = b0l__CallFunc_Array_Get_Item__pf;
	if(IsValid(bpv__Key_Setting_Button__pf))
	{
		bpv__Key_Setting_Button__pf->SetVisibility(ESlateVisibility::Collapsed);
	}
	if(IsValid(bpv__Reset_High_Score_Button__pf))
	{
		bpv__Reset_High_Score_Button__pf->SetVisibility(ESlateVisibility::Collapsed);
	}
	if(IsValid(bpv__Speed_Setting_Button__pf))
	{
		bpv__Speed_Setting_Button__pf->SetVisibility(ESlateVisibility::Collapsed);
	}
	return; //KCST_EndOfThread
}
void UOption_Widget_C__pf3975599377::bpf__ExecuteUbergraph_Option_Widget__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 8);
	return; //KCST_EndOfThread
}
void UOption_Widget_C__pf3975599377::bpf__ExecuteUbergraph_Option_Widget__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 7);
	return; //KCST_EndOfThread
}
void UOption_Widget_C__pf3975599377::bpf__ExecuteUbergraph_Option_Widget__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 6);
	return; //KCST_EndOfThread
}
void UOption_Widget_C__pf3975599377::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_Option_Widget__pf_1(20);
}
void UOption_Widget_C__pf3975599377::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_Option_Widget__pf_0(9);
}
void UOption_Widget_C__pf3975599377::bpf__BndEvt__Speed_Setting_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Option_Widget__pf_2(8);
}
void UOption_Widget_C__pf3975599377::bpf__BndEvt__Reset_High_Score_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Option_Widget__pf_3(7);
}
void UOption_Widget_C__pf3975599377::bpf__BndEvt__Key_Setting_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Option_Widget__pf_4(6);
}
void UOption_Widget_C__pf3975599377::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Textures/Keyboard_Map_Tex.Keyboard_Map_Tex 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Textures/Keyboard_Numbers.Keyboard_Numbers 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Textures/Keyboard_Funcs.Keyboard_Funcs 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Textures/Keyboard_Letters.Keyboard_Letters 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Textures/Keyboard_Techs.Keyboard_Techs 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Textures/Keyboard_Numpads.Keyboard_Numpads 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Textures/Keyboard_Arrows.Keyboard_Arrows 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Textures/Keyboard_Miscs.Keyboard_Miscs 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Textures/Keyboard_Marks.Keyboard_Marks 
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
void UOption_Widget_C__pf3975599377::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.CheckBox 
		{70, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Character_Blueprint.Character_Blueprint_C 
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
struct FRegisterHelper__UOption_Widget_C__pf3975599377
{
	FRegisterHelper__UOption_Widget_C__pf3975599377()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Widgets/Option_Widget"), &UOption_Widget_C__pf3975599377::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UOption_Widget_C__pf3975599377 Instance;
};
FRegisterHelper__UOption_Widget_C__pf3975599377 FRegisterHelper__UOption_Widget_C__pf3975599377::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
