#include "NativizedAssets.h"
#include "Character_Blueprint__pf2132744816.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
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
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
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
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
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
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/RecastNavMesh.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
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
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Character_Blueprint__pf2132744816.h"
#include "Paused_Widget__pf3975599377.h"
#include "Game_Over_Widget__pf3975599377.h"
#include "Option_Widget__pf3975599377.h"
#include "Default_Widget__pf3975599377.h"
#include "Main_Menu_Widget__pf3975599377.h"
#include "Highest_Score_Blueprint__pf2132744816.h"
#include "Score_Blueprint__pf2132744816.h"
#include "Mob_Re_Blueprint__pf2132744816.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Classes/Sound/AmbientSound.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Save_Game_1_Blueprint__pf4030252459.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Engine/TextRenderActor.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "PaperFlipbookComponent.h"
#include "PaperFlipbook.h"
#include "PaperSprite.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Floor_Blueprint__pf2132744816.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/UMG/Public/Components/CheckBox.h"
#include "Runtime/Engine/Classes/Kismet/KismetInputLibrary.h"
#include "Runtime/Slate/Public/Framework/Commands/InputChord.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/ClothingSystemRuntime/Public/ClothingSimulationFactory.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
ACharacter_Blueprint_C__pf2132744816::ACharacter_Blueprint_C__pf2132744816(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ACharacter_Blueprint_C__pf2132744816::StaticClass() == GetClass()))
	{
		ACharacter_Blueprint_C__pf2132744816::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	auto __Local__0 = CastChecked<UCapsuleComponent>(GetDefaultSubobjectByName(TEXT("CollisionCylinder")));
	__Local__0->BodyInstance.bEnableGravity = false;
	auto __Local__1 = CastChecked<UCharacterMovementComponent>(GetDefaultSubobjectByName(TEXT("CharMoveComp")));
	auto& __Local__2 = (*(AccessPrivateProperty<float >((__Local__1), UCharacterMovementComponent::__PPO__WalkableFloorZ() )));
	__Local__2 = 0.710000f;
	__Local__1->NavAgentProps.AgentRadius = 34.000000f;
	__Local__1->NavAgentProps.AgentHeight = 176.000000f;
	static TWeakObjectPtr<UProperty> __Local__4{};
	const UProperty* __Local__3 = __Local__4.Get();
	if (nullptr == __Local__3)
	{
		__Local__3 = (UNavMovementComponent::StaticClass())->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
		check(__Local__3);
		__Local__4 = __Local__3;
	}
	(((UBoolProperty*)__Local__3)->SetPropertyValue_InContainer((__Local__1), false, 0));
	auto __Local__5 = CastChecked<USkeletalMeshComponent>(GetDefaultSubobjectByName(TEXT("CharacterMesh0")));
	__Local__5->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	auto& __Local__6 = (*(AccessPrivateProperty<USceneComponent* >((__Local__5), USceneComponent::__PPO__AttachParent() )));
	__Local__5->PrimaryComponentTick.EndTickGroup = ETickingGroup::TG_PostPhysics;
	bpv__Text__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));
	bpv__Text__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Text__pf->AttachToComponent(__Local__5, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Text__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Camera"), /* Literal Text */
	TEXT("[99FF9E044F74A2DE33307CAB69E7EC5D]"), /* Namespace */
	TEXT("9DE32B1941DAEF48BE77E3A41E8D00DE") /* Key */
	);
	bpv__Text__pf->bHiddenInGame = true;
	bpv__Text__pf->RelativeLocation = FVector(20.000000, 40.000000, 0.000000);
	if(!bpv__Text__pf->IsTemplate())
	{
		bpv__Text__pf->BodyInstance.FixupData(bpv__Text__pf);
	}
	bpv__Opacity_Timeline_Opacity_9D4FE74141D7C70D0929EDBDB12AE53E__pf = 0.000000f;
	bpv__Opacity_Timeline__Direction_9D4FE74141D7C70D0929EDBDB12AE53E__pf = ETimelineDirection::Type::Forward;
	bpv__Opacity_Timeline__pf = nullptr;
	bpv__Mob_Re__pf = TArray<AMob_Re_Blueprint_C__pf2132744816*> ();
	bpv__Success_Count__pf = -1;
	bpv__Score__pf = nullptr;
	bpv__IsGameOver__pf = false;
	bpv__Fall_Speed__pf = 1.000000f;
	bpv__Spawn_Chance__pf = 120;
	bpv__HS_Original__pf = 0;
	bpv__Highest_Score_Actor__pf = nullptr;
	bpv__Main_Menu_Widget__pf = nullptr;
	bpv__Default_Widget__pf = nullptr;
	bpv__Option_Widget__pf = nullptr;
	bpv__Game_Over_Widget__pf = nullptr;
	bpv__Paused_Widget__pf = nullptr;
	bpv__IsPaused__pf = false;
	bpv__Main_IsFirst__pf = true;
	auto& __Local__7 = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )));
	auto& __Local__8 = (*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )));
	auto& __Local__9 = (*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() )));
	AutoPossessPlayer = EAutoReceiveInput::Type::Player0;
}
void ACharacter_Blueprint_C__pf2132744816::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Text__pf)
	{
		bpv__Text__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void ACharacter_Blueprint_C__pf2132744816::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UPaused_Widget_C__pf3975599377::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UGame_Over_Widget_C__pf3975599377::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UOption_Widget_C__pf3975599377::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UDefault_Widget_C__pf3975599377::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMain_Menu_Widget_C__pf3975599377::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AHighest_Score_Blueprint_C__pf2132744816::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AScore_Blueprint_C__pf2132744816::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AMob_Re_Blueprint_C__pf2132744816::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(USave_Game_1_Blueprint_C__pf4030252459::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__10 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__10);
	auto __Local__11 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Opacity_Timeline_Template"));
	InDynamicClass->Timelines.Add(__Local__11);
	auto __Local__12 = NewObject<UInputKeyDelegateBinding>(InDynamicClass, UInputKeyDelegateBinding::StaticClass(), TEXT("InputKeyDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__12);
	__Local__11->TimelineLength = 0.500000f;
	__Local__11->bValidatedAsWired = true;
	__Local__11->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__11->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__11->FloatTracks.GetData(), 1);
	auto& __Local__13 = __Local__11->FloatTracks[0];
	auto __Local__14 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__14);
	__Local__14->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__14->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__14->FloatCurve.Keys.GetData(), 2);
	auto& __Local__15 = __Local__14->FloatCurve.Keys[0];
	__Local__15.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__15.Value = 1.000000f;
	auto& __Local__16 = __Local__14->FloatCurve.Keys[1];
	__Local__16.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__16.Time = 0.500000f;
	__Local__16.Value = 0.100000f;
	__Local__13.CurveFloat = __Local__14;
	__Local__13.TrackName = FName(TEXT("Opacity"));
	__Local__11->TimelineGuid = FGuid(0x9D4FE741, 0x41D7C70D, 0x0929EDBD, 0xB12AE53E);
	__Local__12->InputKeyDelegateBindings = TArray<FBlueprintInputKeyDelegateBinding> ();
	__Local__12->InputKeyDelegateBindings.AddUninitialized(1);
	FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__12->InputKeyDelegateBindings.GetData(), 1);
	auto& __Local__17 = __Local__12->InputKeyDelegateBindings[0];
	__Local__17.InputChord.Key = FKey(TEXT("AnyKey"));
	__Local__17.FunctionNameToBind = FName(TEXT("InpActEvt_AnyKey_K2Node_InputKeyEvent_1"));
}
void ACharacter_Blueprint_C__pf2132744816::bpf__ExecuteUbergraph_Character_Blueprint__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue3__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue5__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue4__pf{};
	bool bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 42:
			{
				__StateStack.Push(45);
			}
		case 43:
			{
				TArray<UImage*>  __Local__18 = TArray<UImage*> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpv__Option_Widget__pf)) ? (bpv__Option_Widget__pf->bpv__Keyboards__pf) : (__Local__18)), b0l_____int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item6__pf);
				bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::NotEqual_ObjectObject(b0l__CallFunc_Array_Get_Item6__pf, b0l__K2Node_CustomEvent_Image__pf);
				if (!bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 44:
			{
				TArray<UImage*>  __Local__19 = TArray<UImage*> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpv__Option_Widget__pf)) ? (bpv__Option_Widget__pf->bpv__Keyboards__pf) : (__Local__19)), b0l_____int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item6__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item6__pf))
				{
					b0l__CallFunc_Array_Get_Item6__pf->UImage::SetOpacity(bpv__Opacity_Timeline_Opacity_9D4FE74141D7C70D0929EDBDB12AE53E__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 45:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue3__pf = UKismetMathLibrary::Add_IntInt(b0l_____int_Loop_Counter_Variable3__pf, 1);
				b0l_____int_Loop_Counter_Variable3__pf = bpfv__CallFunc_Add_IntInt_ReturnValue3__pf;
			}
		case 46:
			{
				TArray<UImage*>  __Local__20 = TArray<UImage*> {};
				bpfv__CallFunc_Array_Length_ReturnValue5__pf = FCustomThunkTemplates::Array_Length(((IsValid(bpv__Option_Widget__pf)) ? (bpv__Option_Widget__pf->bpv__Keyboards__pf) : (__Local__20)));
				bpfv__CallFunc_Less_IntInt_ReturnValue4__pf = UKismetMathLibrary::Less_IntInt(b0l_____int_Loop_Counter_Variable3__pf, bpfv__CallFunc_Array_Length_ReturnValue5__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 47:
			{
				b0l_____int_Array_Index_Variable__pf = b0l_____int_Loop_Counter_Variable3__pf;
				__CurrentState = 42;
				break;
			}
		case 48:
			{
				b0l_____int_Loop_Counter_Variable3__pf = 0;
			}
		case 49:
			{
				b0l_____int_Array_Index_Variable__pf = 0;
				__CurrentState = 46;
				break;
			}
		case 136:
			{
				__CurrentState = 48;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ACharacter_Blueprint_C__pf2132744816::bpf__ExecuteUbergraph_Character_Blueprint__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 138);
	return; //KCST_EndOfThread
}
void ACharacter_Blueprint_C__pf2132744816::bpf__ExecuteUbergraph_Character_Blueprint__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 17:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b0l_____bool_Variable__pf);
				b0l_____bool_Variable__pf = bpfv__CallFunc_Not_PreBool_ReturnValue__pf;
			}
		case 18:
			{
				if (!b0l_____bool_Variable__pf)
				{
					__CurrentState = 20;
					break;
				}
			}
		case 19:
			{
				if(IsValid(bpv__Opacity_Timeline__pf))
				{
					bpv__Opacity_Timeline__pf->UTimelineComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 20:
			{
				if(IsValid(bpv__Opacity_Timeline__pf))
				{
					bpv__Opacity_Timeline__pf->UTimelineComponent::Reverse();
				}
				__CurrentState = -1;
				break;
			}
		case 137:
			{
				__CurrentState = 17;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ACharacter_Blueprint_C__pf2132744816::bpf__ExecuteUbergraph_Character_Blueprint__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_SetGamePaused_ReturnValue4__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue7__pf{};
	UOption_Widget_C__pf3975599377* bpfv__CallFunc_Create_ReturnValue5__pf{};
	check(bpp__EntryPoint__pf == 127);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_SetGamePaused_ReturnValue4__pf = UGameplayStatics::SetGamePaused(this, true);
	bpfv__CallFunc_GetPlayerController_ReturnValue7__pf = UGameplayStatics::GetPlayerController(this, 0);
	bpfv__CallFunc_Create_ReturnValue5__pf = CastChecked<UOption_Widget_C__pf3975599377>(UWidgetBlueprintLibrary::Create(this, UOption_Widget_C__pf3975599377::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue7__pf), ECastCheckedType::NullAllowed);
	bpv__Option_Widget__pf = bpfv__CallFunc_Create_ReturnValue5__pf;
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__Option_Widget__pf))
	{
		bpv__Option_Widget__pf->UUserWidget::AddToViewport(90);
	}
	bpfv__CallFunc_GetPlayerController_ReturnValue7__pf = UGameplayStatics::GetPlayerController(this, 0);
	UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(bpfv__CallFunc_GetPlayerController_ReturnValue7__pf, bpv__Option_Widget__pf, EMouseLockMode::DoNotLock);
	bpfv__CallFunc_GetPlayerController_ReturnValue7__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue7__pf))
	{
		bpfv__CallFunc_GetPlayerController_ReturnValue7__pf->bShowMouseCursor = true;
	}
	return; //KCST_EndOfThread
}
void ACharacter_Blueprint_C__pf2132744816::bpf__ExecuteUbergraph_Character_Blueprint__pf_4(int32 bpp__EntryPoint__pf)
{
	USave_Game_1_Blueprint_C__pf4030252459* bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf{};
	bool bpfv__CallFunc_SaveGameToSlot_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue2__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	UGame_Over_Widget_C__pf3975599377* bpfv__CallFunc_Create_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(ACharacter_Blueprint_C__pf2132744816::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), 0.100000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr));
			}
		case 3:
			{
				int32  __Local__21 = 0;
				bpfv__CallFunc_Greater_IntInt_ReturnValue2__pf = UKismetMathLibrary::Greater_IntInt(((IsValid(bpv__Score__pf)) ? (bpv__Score__pf->bpv__Score__pf) : (__Local__21)), bpv__HS_Original__pf);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf = CastChecked<USave_Game_1_Blueprint_C__pf4030252459>(UGameplayStatics::CreateSaveGameObject(USave_Game_1_Blueprint_C__pf4030252459::StaticClass()), ECastCheckedType::NullAllowed);
			}
		case 5:
			{
				int32  __Local__22 = 0;
				if(IsValid(bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf))
				{
					bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf->bpv__Highest_Score__pf = ((IsValid(bpv__Score__pf)) ? (bpv__Score__pf->bpv__Score__pf) : (__Local__22));
				}
			}
		case 6:
			{
				bpfv__CallFunc_SaveGameToSlot_ReturnValue__pf = UGameplayStatics::SaveGameToSlot(bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf, FString(TEXT("Slot_1")), 0);
				__CurrentState = -1;
				break;
			}
		case 68:
			{
				__CurrentState = 69;
				break;
			}
		case 69:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UGame_Over_Widget_C__pf3975599377>(UWidgetBlueprintLibrary::Create(this, UGame_Over_Widget_C__pf3975599377::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 70:
			{
				bpv__Game_Over_Widget__pf = bpfv__CallFunc_Create_ReturnValue__pf;
			}
		case 71:
			{
				if(IsValid(bpv__Game_Over_Widget__pf))
				{
					bpv__Game_Over_Widget__pf->UUserWidget::AddToViewport(900);
				}
			}
		case 72:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(bpfv__CallFunc_GetPlayerController_ReturnValue__pf, bpfv__CallFunc_Create_ReturnValue__pf, EMouseLockMode::DoNotLock);
			}
		case 73:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue__pf->bShowMouseCursor = true;
				}
			}
		case 74:
			{
				bpv__IsGameOver__pf = true;
			}
		case 75:
			{
				bpv__Fall_Speed__pf = 0.000000;
			}
		case 76:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AAmbientSound::StaticClass(), /*out*/ TArrayCaster< AAmbientSound* >(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get< AActor* >());
			}
		case 77:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item2__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item2__pf) && IsValid(b0l__CallFunc_Array_Get_Item2__pf->AudioComponent))
				{
					b0l__CallFunc_Array_Get_Item2__pf->AudioComponent->Stop();
				}
			}
		case 78:
			{
				UKismetSystemLibrary::Delay(this, 0.100000, FLatentActionInfo(1, 161077614, TEXT("ExecuteUbergraph_Character_Blueprint_4"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ACharacter_Blueprint_C__pf2132744816::bpf__ExecuteUbergraph_Character_Blueprint__pf_5(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_SetGamePaused_ReturnValue3__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue6__pf{};
	UMain_Menu_Widget_C__pf3975599377* bpfv__CallFunc_Create_ReturnValue4__pf{};
	check(bpp__EntryPoint__pf == 135);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_SetGamePaused_ReturnValue3__pf = UGameplayStatics::SetGamePaused(this, true);
	bpfv__CallFunc_GetPlayerController_ReturnValue6__pf = UGameplayStatics::GetPlayerController(this, 0);
	bpfv__CallFunc_Create_ReturnValue4__pf = CastChecked<UMain_Menu_Widget_C__pf3975599377>(UWidgetBlueprintLibrary::Create(this, UMain_Menu_Widget_C__pf3975599377::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue6__pf), ECastCheckedType::NullAllowed);
	bpv__Main_Menu_Widget__pf = bpfv__CallFunc_Create_ReturnValue4__pf;
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__Main_Menu_Widget__pf))
	{
		bpv__Main_Menu_Widget__pf->UUserWidget::AddToViewport(90);
	}
	bpfv__CallFunc_GetPlayerController_ReturnValue6__pf = UGameplayStatics::GetPlayerController(this, 0);
	UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(bpfv__CallFunc_GetPlayerController_ReturnValue6__pf, bpv__Main_Menu_Widget__pf, EMouseLockMode::DoNotLock);
	bpfv__CallFunc_GetPlayerController_ReturnValue6__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue6__pf))
	{
		bpfv__CallFunc_GetPlayerController_ReturnValue6__pf->bShowMouseCursor = true;
	}
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.SetRes 1920x1080f")), ((APlayerController*)nullptr));
	return; //KCST_EndOfThread
}
void ACharacter_Blueprint_C__pf2132744816::bpf__ExecuteUbergraph_Character_Blueprint__pf_6(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 21:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l_____int_Loop_Counter_Variable__pf, 1);
				b0l_____int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 22:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__Mob_Re__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l_____int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 26;
					break;
				}
			}
		case 23:
			{
				b0l_____int_Array_Index_Variable4__pf = b0l_____int_Loop_Counter_Variable__pf;
			}
		case 24:
			{
				__StateStack.Push(21);
			}
		case 25:
			{
				FCustomThunkTemplates::Array_Get(bpv__Mob_Re__pf, b0l_____int_Array_Index_Variable4__pf, /*out*/ b0l__CallFunc_Array_Get_Item5__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item5__pf))
				{
					b0l__CallFunc_Array_Get_Item5__pf->bpf__Key_Pressed__pf(b0l__K2Node_InputKeyEvent_Key__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 26:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(0, bpv__Success_Count__pf);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 30;
					break;
				}
			}
		case 27:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(ACharacter_Blueprint_C__pf2132744816::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr));
			}
		case 28:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(0.200000, bpv__Fall_Speed__pf);
				bpv__Fall_Speed__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
			}
		case 29:
			{
				if(IsValid(bpv__Default_Widget__pf))
				{
					bpv__Default_Widget__pf->bpf__Speed_Update__pf(0.200000, FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Wrong Key"), /* Literal Text */
	TEXT("[99FF9E044F74A2DE33307CAB69E7EC5D]"), /* Namespace */
	TEXT("065948B5432E1BAD8D1CBCAF22D55D72") /* Key */
	));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				FCustomThunkTemplates::Array_Clear(bpv__Mob_Re__pf);
			}
		case 31:
			{
				bpv__Success_Count__pf = -1;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 32:
			{
				b0l_____int_Loop_Counter_Variable__pf = 0;
			}
		case 33:
			{
				b0l_____int_Array_Index_Variable4__pf = 0;
				__CurrentState = 22;
				break;
			}
		case 58:
			{
				__CurrentState = 59;
				break;
			}
		case 59:
			{
				if (!bpv__IsGameOver__pf)
				{
					__CurrentState = 60;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 60:
			{
				uint8* __Local__25 = (uint8*)FMemory_Alloca(FKey::StaticStruct()->GetStructureSize());
				FKey::StaticStruct()->InitializeStruct(__Local__25);
				FKey& __Local__24 = *reinterpret_cast<FKey*>(__Local__25);
				auto& __Local__26 = (*(AccessPrivateProperty<FName >(&(__Local__24), FKey::__PPO__KeyName() )));
				__Local__26 = FName(TEXT("Escape"));
				bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue__pf = UKismetInputLibrary::EqualEqual_KeyKey(b0l__K2Node_InputKeyEvent_Key__pf, __Local__24);
				if (!bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue__pf)
				{
					__CurrentState = 32;
					break;
				}
			}
		case 61:
			{
				bpf__Pause__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ACharacter_Blueprint_C__pf2132744816::bpf__ExecuteUbergraph_Character_Blueprint__pf_7(int32 bpp__EntryPoint__pf)
{
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue2__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue3__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue4__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue5__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 7:
			{
				if (!b0l_____bool_IsClosed_Variable__pf)
				{
					__CurrentState = 8;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				b0l_____bool_IsClosed_Variable__pf = true;
			}
		case 9:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue5__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__CallFunc_Create_ReturnValue3__pf = CastChecked<UDefault_Widget_C__pf3975599377>(UWidgetBlueprintLibrary::Create(this, UDefault_Widget_C__pf3975599377::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue5__pf), ECastCheckedType::NullAllowed);
			}
		case 10:
			{
				bpv__Default_Widget__pf = b0l__CallFunc_Create_ReturnValue3__pf;
			}
		case 11:
			{
				if(IsValid(bpv__Default_Widget__pf))
				{
					bpv__Default_Widget__pf->UUserWidget::AddToViewport(50);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				b0l_____bool_Has_Been_Initd_Variable__pf = true;
			}
		case 13:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 14:
			{
				b0l_____bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				if (!b0l_____bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 12;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				__StateStack.Push(7);
				__CurrentState = 15;
				break;
			}
		case 62:
			{
				b0l_____int_Array_Index_Variable3__pf = 0;
			}
		case 63:
			{
				bpfv__CallFunc_Array_Length_ReturnValue2__pf = FCustomThunkTemplates::Array_Length(bpv__Mob_Re__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue3__pf = UKismetMathLibrary::Less_IntInt(b0l_____int_Loop_Counter_Variable4__pf, bpfv__CallFunc_Array_Length_ReturnValue2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 64:
			{
				b0l_____int_Array_Index_Variable3__pf = b0l_____int_Loop_Counter_Variable4__pf;
			}
		case 65:
			{
				__StateStack.Push(67);
			}
		case 66:
			{
				FCustomThunkTemplates::Array_Get(bpv__Mob_Re__pf, b0l_____int_Array_Index_Variable3__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					b0l__CallFunc_Array_Get_Item__pf->K2_DestroyActor();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 67:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue4__pf = UKismetMathLibrary::Add_IntInt(b0l_____int_Loop_Counter_Variable4__pf, 1);
				b0l_____int_Loop_Counter_Variable4__pf = bpfv__CallFunc_Add_IntInt_ReturnValue4__pf;
				__CurrentState = 63;
				break;
			}
		case 79:
			{
				__CurrentState = 80;
				break;
			}
		case 80:
			{
				__StateStack.Push(92);
				__StateStack.Push(83);
				__StateStack.Push(82);
			}
		case 81:
			{
				__StateStack.Push(100);
				__StateStack.Push(99);
				__CurrentState = 16;
				break;
			}
		case 82:
			{
				b0l_____int_Loop_Counter_Variable4__pf = 0;
				__CurrentState = 62;
				break;
			}
		case 83:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue2__pf = UGameplayStatics::GetPlayerController(this, 0);
				UWidgetBlueprintLibrary::SetInputMode_GameOnly(bpfv__CallFunc_GetPlayerController_ReturnValue2__pf);
			}
		case 84:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue2__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue2__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue2__pf->bShowMouseCursor = false;
				}
			}
		case 85:
			{
				if(IsValid(bpv__Game_Over_Widget__pf))
				{
					bpv__Game_Over_Widget__pf->RemoveFromParent();
				}
			}
		case 86:
			{
				if(IsValid(bpv__Default_Widget__pf))
				{
					bpv__Default_Widget__pf->bpv__Speed__pf = 1.000000;
				}
			}
		case 87:
			{
				TArray<FString>  __Local__27 = TArray<FString> {};
				FCustomThunkTemplates::Array_Clear(((IsValid(bpv__Default_Widget__pf)) ? (bpv__Default_Widget__pf->bpv__Reasons__pf) : (__Local__27)));
			}
		case 88:
			{
				if(IsValid(bpv__Default_Widget__pf) && IsValid(bpv__Default_Widget__pf->bpv__Spawn_Rate_Text__pf))
				{
					bpv__Default_Widget__pf->bpv__Spawn_Rate_Text__pf->SetText(FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("1/120 per tick"), /* Literal Text */
	TEXT("[99FF9E044F74A2DE33307CAB69E7EC5D]"), /* Namespace */
	TEXT("1B266A094D11E05A98F29BBC5E1E479C") /* Key */
	));
				}
			}
		case 89:
			{
				if(IsValid(bpv__Default_Widget__pf))
				{
					bpv__Default_Widget__pf->bpf__Speed_Update__pf(0.000000, FText::GetEmpty());
				}
			}
		case 90:
			{
				if(IsValid(bpv__Default_Widget__pf) && IsValid(bpv__Default_Widget__pf->bpv__Reason_F__pf))
				{
					bpv__Default_Widget__pf->bpv__Reason_F__pf->SetText(FText::GetEmpty());
				}
			}
		case 91:
			{
				TArray<FString>  __Local__28 = TArray<FString> {};
				FCustomThunkTemplates::Array_Clear(((IsValid(bpv__Default_Widget__pf)) ? (bpv__Default_Widget__pf->bpv__Reasons__pf) : (__Local__28)));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 92:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors3__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AAmbientSound::StaticClass(), /*out*/ TArrayCaster< AAmbientSound* >(b0l__CallFunc_GetAllActorsOfClass_OutActors3__pf).Get< AActor* >());
			}
		case 93:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors3__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item4__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item4__pf) && IsValid(b0l__CallFunc_Array_Get_Item4__pf->AudioComponent))
				{
					b0l__CallFunc_Array_Get_Item4__pf->AudioComponent->Play(0.000000);
				}
			}
		case 94:
			{
				FCustomThunkTemplates::Array_Clear(bpv__Mob_Re__pf);
			}
		case 95:
			{
				bpv__Fall_Speed__pf = 1.000000;
			}
		case 96:
			{
				if(IsValid(bpv__Score__pf))
				{
					bpv__Score__pf->bpv__Score__pf = 0;
				}
			}
		case 97:
			{
				if(IsValid(bpv__Score__pf))
				{
					bpv__Score__pf->bpf__Score_Update__pf(0);
				}
			}
		case 98:
			{
				bpv__Spawn_Chance__pf = 120;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 99:
			{
				bpv__IsGameOver__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 100:
			{
				b0l__CallFunc_LoadGameFromSlot_ReturnValue__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Slot_1")), 0);
			}
		case 101:
			{
				b0l__K2Node_DynamicCast_AsSave_Game_1_Blueprint__pf = Cast<USave_Game_1_Blueprint_C__pf4030252459>(b0l__CallFunc_LoadGameFromSlot_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsSave_Game_1_Blueprint__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 102:
			{
				int32  __Local__29 = 0;
				bpv__HS_Original__pf = ((IsValid(b0l__K2Node_DynamicCast_AsSave_Game_1_Blueprint__pf)) ? (b0l__K2Node_DynamicCast_AsSave_Game_1_Blueprint__pf->bpv__Highest_Score__pf) : (__Local__29));
			}
		case 103:
			{
				bpfv__CallFunc_Conv_IntToText_ReturnValue__pf = UKismetTextLibrary::Conv_IntToText(bpv__HS_Original__pf, true, 1, 324);
				if(IsValid(bpv__Highest_Score_Actor__pf) && IsValid(bpv__Highest_Score_Actor__pf->bpv__Score__pf))
				{
					bpv__Highest_Score_Actor__pf->bpv__Score__pf->UTextRenderComponent::K2_SetText(bpfv__CallFunc_Conv_IntToText_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 126:
			{
				__CurrentState = 81;
				break;
			}
		case 134:
			{
				__CurrentState = 9;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ACharacter_Blueprint_C__pf2132744816::bpf__ExecuteUbergraph_Character_Blueprint__pf_8(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_SetGamePaused_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue3__pf{};
	UPaused_Widget_C__pf3975599377* bpfv__CallFunc_Create_ReturnValue2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 107:
			{
				__CurrentState = 108;
				break;
			}
		case 108:
			{
				if (!bpv__IsPaused__pf)
				{
					__CurrentState = 109;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 109:
			{
				bpv__IsPaused__pf = true;
			}
		case 110:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue3__pf = UGameplayStatics::GetPlayerController(this, 0);
				bpfv__CallFunc_Create_ReturnValue2__pf = CastChecked<UPaused_Widget_C__pf3975599377>(UWidgetBlueprintLibrary::Create(this, UPaused_Widget_C__pf3975599377::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue3__pf), ECastCheckedType::NullAllowed);
			}
		case 111:
			{
				bpv__Paused_Widget__pf = bpfv__CallFunc_Create_ReturnValue2__pf;
			}
		case 112:
			{
				if(IsValid(bpv__Paused_Widget__pf))
				{
					bpv__Paused_Widget__pf->UUserWidget::AddToViewport(5);
				}
			}
		case 113:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue3__pf = UGameplayStatics::GetPlayerController(this, 0);
				UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(bpfv__CallFunc_GetPlayerController_ReturnValue3__pf, bpv__Paused_Widget__pf, EMouseLockMode::DoNotLock);
			}
		case 114:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue3__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue3__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue3__pf->bShowMouseCursor = true;
				}
			}
		case 115:
			{
				bpfv__CallFunc_SetGamePaused_ReturnValue__pf = UGameplayStatics::SetGamePaused(this, true);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ACharacter_Blueprint_C__pf2132744816::bpf__ExecuteUbergraph_Character_Blueprint__pf_9(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue4__pf{};
	bool bpfv__CallFunc_SetGamePaused_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 120);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue4__pf = UGameplayStatics::GetPlayerController(this, 0);
	UWidgetBlueprintLibrary::SetInputMode_GameOnly(bpfv__CallFunc_GetPlayerController_ReturnValue4__pf);
	bpfv__CallFunc_GetPlayerController_ReturnValue4__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue4__pf))
	{
		bpfv__CallFunc_GetPlayerController_ReturnValue4__pf->bShowMouseCursor = false;
	}
	bpfv__CallFunc_SetGamePaused_ReturnValue2__pf = UGameplayStatics::SetGamePaused(this, false);
	bpv__IsPaused__pf = false;
	if(IsValid(bpv__Paused_Widget__pf))
	{
		bpv__Paused_Widget__pf->RemoveFromParent();
	}
	return; //KCST_EndOfThread
}
void ACharacter_Blueprint_C__pf2132744816::bpf__ExecuteUbergraph_Character_Blueprint__pf_10(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AMob_Re_Blueprint_C__pf2132744816* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue2__pf{};
	int32 bpfv__CallFunc_RandomInteger_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_AddUnique_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue3__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue4__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue2__pf{};
	bool bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 34:
			{
				b0l_____int_Loop_Counter_Variable2__pf = 0;
			}
		case 35:
			{
				b0l_____int_Array_Index_Variable2__pf = 0;
			}
		case 36:
			{
				bpfv__CallFunc_Array_Length_ReturnValue3__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue2__pf = UKismetMathLibrary::Less_IntInt(b0l_____int_Loop_Counter_Variable2__pf, bpfv__CallFunc_Array_Length_ReturnValue3__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 37:
			{
				b0l_____int_Array_Index_Variable2__pf = b0l_____int_Loop_Counter_Variable2__pf;
			}
		case 38:
			{
				__StateStack.Push(41);
			}
		case 39:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf, b0l_____int_Array_Index_Variable2__pf, /*out*/ b0l__CallFunc_Array_Get_Item3__pf);
				TArray<FText>  __Local__30 = TArray<FText> {};
				bpfv__CallFunc_Array_Length_ReturnValue4__pf = FCustomThunkTemplates::Array_Length(((IsValid(b0l__CallFunc_Array_Get_Item3__pf)) ? (b0l__CallFunc_Array_Get_Item3__pf->bpv__Alphabets__pf) : (__Local__30)));
				bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_Array_Length_ReturnValue4__pf, 0);
				if (!bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 40:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf, b0l_____int_Array_Index_Variable2__pf, /*out*/ b0l__CallFunc_Array_Get_Item3__pf);
				bpfv__CallFunc_Array_AddUnique_ReturnValue__pf = FCustomThunkTemplates::Array_AddUnique(bpv__Mob_Re__pf, b0l__CallFunc_Array_Get_Item3__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 41:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(b0l_____int_Loop_Counter_Variable2__pf, 1);
				b0l_____int_Loop_Counter_Variable2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue2__pf;
				__CurrentState = 36;
				break;
			}
		case 50:
			{
				__CurrentState = 51;
				break;
			}
		case 51:
			{
				if (!bpv__IsGameOver__pf)
				{
					__CurrentState = 52;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 52:
			{
				__StateStack.Push(54);
			}
		case 53:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AMob_Re_Blueprint_C__pf2132744816::StaticClass(), /*out*/ TArrayCaster< AMob_Re_Blueprint_C__pf2132744816* >(b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf).Get< AActor* >());
				__CurrentState = 34;
				break;
			}
		case 54:
			{
				bpfv__CallFunc_RandomInteger_ReturnValue__pf = UKismetMathLibrary::RandomInteger(bpv__Spawn_Chance__pf);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_RandomInteger_ReturnValue__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 55:
			{
				bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(-2500.000000, 3100.000000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf, 387.000000, 3178.000000);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AMob_Re_Blueprint_C__pf2132744816::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
			}
		case 56:
			{
				bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(-2500.000000, 3100.000000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf, 387.000000, 3178.000000);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<AMob_Re_Blueprint_C__pf2132744816>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 57:
			{
				if(IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->AActor::K2_GetActorLocation();
				}
				bpfv__CallFunc_RandomFloatInRange_ReturnValue2__pf = UKismetMathLibrary::RandomFloatInRange(0.800000, 1.200000);
				UGameplayStatics::PlaySoundAtLocation(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(ACharacter_Blueprint_C__pf2132744816::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), 0.400000, bpfv__CallFunc_RandomFloatInRange_ReturnValue2__pf, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ACharacter_Blueprint_C__pf2132744816::bpf__Hovered__pf(UImage* bpp__Image__pf)
{
	b0l__K2Node_CustomEvent_Image__pf = bpp__Image__pf;
	bpf__ExecuteUbergraph_Character_Blueprint__pf_2(137);
}
void ACharacter_Blueprint_C__pf2132744816::bpf__Create_Main_Menu_Widget__pf()
{
	bpf__ExecuteUbergraph_Character_Blueprint__pf_5(135);
}
void ACharacter_Blueprint_C__pf2132744816::bpf__Create_Default_Widget__pf()
{
	bpf__ExecuteUbergraph_Character_Blueprint__pf_7(134);
}
void ACharacter_Blueprint_C__pf2132744816::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_Character_Blueprint__pf_3(127);
}
void ACharacter_Blueprint_C__pf2132744816::bpf__Start__pf()
{
	bpf__ExecuteUbergraph_Character_Blueprint__pf_7(126);
}
void ACharacter_Blueprint_C__pf2132744816::bpf__Resume__pf()
{
	bpf__ExecuteUbergraph_Character_Blueprint__pf_9(120);
}
void ACharacter_Blueprint_C__pf2132744816::bpf__Pause__pf()
{
	bpf__ExecuteUbergraph_Character_Blueprint__pf_8(107);
}
void ACharacter_Blueprint_C__pf2132744816::bpf__Restart__pf()
{
	bpf__ExecuteUbergraph_Character_Blueprint__pf_7(79);
}
void ACharacter_Blueprint_C__pf2132744816::bpf__GamexOver__pfT()
{
	bpf__ExecuteUbergraph_Character_Blueprint__pf_4(68);
}
void ACharacter_Blueprint_C__pf2132744816::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_Character_Blueprint__pf_10(50);
}
void ACharacter_Blueprint_C__pf2132744816::bpf__InpActEvt_AnyKey_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_Character_Blueprint__pf_6(58);
}
void ACharacter_Blueprint_C__pf2132744816::bpf__Opacity_Timeline__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_Character_Blueprint__pf_0(136);
}
void ACharacter_Blueprint_C__pf2132744816::bpf__Opacity_Timeline__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_Character_Blueprint__pf_1(138);
}
void ACharacter_Blueprint_C__pf2132744816::bpf__UserConstructionScript__pf()
{
}
void ACharacter_Blueprint_C__pf2132744816::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Sounds/Game_Over_Sound.Game_Over_Sound 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Sounds/Wrong_Sound.Wrong_Sound 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Sounds/Balloon_Start_Sound.Balloon_Start_Sound 
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
void ACharacter_Blueprint_C__pf2132744816::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.TextRenderComponent 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineMaterials/DefaultTextMaterialOpaque.DefaultTextMaterialOpaque 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/RobotoDistanceField.RobotoDistanceField 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{16, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AmbientSound 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Score_Blueprint.Score_Blueprint_C 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/SaveGame/Save_Game_1_Blueprint.Save_Game_1_Blueprint_C 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Mob_Re_Blueprint.Mob_Re_Blueprint_C 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Widgets/Option_Widget.Option_Widget_C 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetInputLibrary 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Widgets/Default_Widget.Default_Widget_C 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Highest_Score_Blueprint.Highest_Score_Blueprint_C 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{34, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntime.ClothingSimulationFactoryNv 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NavArea_Obstacle 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Widgets/Paused_Widget.Paused_Widget_C 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Widgets/Game_Over_Widget.Game_Over_Widget_C 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Widgets/Main_Menu_Widget.Main_Menu_Widget_C 
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
struct FRegisterHelper__ACharacter_Blueprint_C__pf2132744816
{
	FRegisterHelper__ACharacter_Blueprint_C__pf2132744816()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/Character_Blueprint"), &ACharacter_Blueprint_C__pf2132744816::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ACharacter_Blueprint_C__pf2132744816 Instance;
};
FRegisterHelper__ACharacter_Blueprint_C__pf2132744816 FRegisterHelper__ACharacter_Blueprint_C__pf2132744816::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
