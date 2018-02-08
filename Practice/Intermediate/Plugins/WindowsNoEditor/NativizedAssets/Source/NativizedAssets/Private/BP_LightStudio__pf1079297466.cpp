#include "NativizedAssets.h"
#include "BP_LightStudio__pf1079297466.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Components/DirectionalLightComponent.h"
#include "Runtime/Engine/Classes/Atmosphere/AtmosphericFogComponent.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
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
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
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
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
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
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Components/ExponentialHeightFogComponent.h"
#include "Runtime/Engine/Classes/Components/SkyLightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "BP_LightStudio__pf1079297466.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetMaterialLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
ABP_LightStudio_C__pf1079297466::ABP_LightStudio_C__pf1079297466(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ABP_LightStudio_C__pf1079297466::StaticClass() == GetClass()))
	{
		ABP_LightStudio_C__pf1079297466::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Scene1__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Scene1"));
	bpv__Skybox__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Skybox"));
	bpv__PrevisArrow__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PrevisArrow"));
	bpv__ExponentialHeightFog1__pf = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("ExponentialHeightFog1"));
	bpv__SkyLight1__pf = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLight1"));
	RootComponent = bpv__Scene1__pf;
	bpv__Scene1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Scene1__pf->Mobility = EComponentMobility::Type::Static;
	bpv__Skybox__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Skybox__pf->AttachToComponent(bpv__Scene1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Skybox__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__0 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Skybox__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__1 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__0), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__1 = TArray<FResponseChannel> ();
	__Local__1.AddUninitialized(8);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__1.GetData(), 8);
	auto& __Local__2 = __Local__1[0];
	__Local__2.Channel = FName(TEXT("WorldStatic"));
	__Local__2.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__3 = __Local__1[1];
	__Local__3.Channel = FName(TEXT("WorldDynamic"));
	__Local__3.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__4 = __Local__1[2];
	__Local__4.Channel = FName(TEXT("Pawn"));
	__Local__4.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__5 = __Local__1[3];
	__Local__5.Channel = FName(TEXT("Visibility"));
	__Local__5.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__6 = __Local__1[4];
	__Local__6.Channel = FName(TEXT("Camera"));
	__Local__6.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__7 = __Local__1[5];
	__Local__7.Channel = FName(TEXT("PhysicsBody"));
	__Local__7.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__8 = __Local__1[6];
	__Local__8.Channel = FName(TEXT("Vehicle"));
	__Local__8.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__9 = __Local__1[7];
	__Local__9.Channel = FName(TEXT("Destructible"));
	__Local__9.Response = ECollisionResponse::ECR_Ignore;
	bpv__Skybox__pf->BodyInstance.bAutoWeld = false;
	auto& __Local__10 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(bpv__Skybox__pf->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__10 = ECollisionEnabled::Type::NoCollision;
	bpv__Skybox__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_LightStudio_C__pf1079297466::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Skybox__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Skybox__pf->OverrideMaterials.Reserve(1);
	bpv__Skybox__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_LightStudio_C__pf1079297466::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__Skybox__pf->CastShadow = false;
	bpv__Skybox__pf->bCastDynamicShadow = false;
	bpv__Skybox__pf->bCastStaticShadow = false;
	bpv__Skybox__pf->RelativeScale3D = FVector(50000.000000, 50000.000000, 50000.000000);
	bpv__Skybox__pf->Mobility = EComponentMobility::Type::Static;
	if(!bpv__Skybox__pf->IsTemplate())
	{
		bpv__Skybox__pf->BodyInstance.FixupData(bpv__Skybox__pf);
	}
	bpv__PrevisArrow__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PrevisArrow__pf->AttachToComponent(bpv__Scene1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PrevisArrow__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__11 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__PrevisArrow__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__12 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__11), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__12 = TArray<FResponseChannel> ();
	__Local__12.AddUninitialized(8);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__12.GetData(), 8);
	auto& __Local__13 = __Local__12[0];
	__Local__13.Channel = FName(TEXT("WorldStatic"));
	__Local__13.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__14 = __Local__12[1];
	__Local__14.Channel = FName(TEXT("WorldDynamic"));
	__Local__14.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__15 = __Local__12[2];
	__Local__15.Channel = FName(TEXT("Pawn"));
	__Local__15.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__16 = __Local__12[3];
	__Local__16.Channel = FName(TEXT("Visibility"));
	__Local__16.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__17 = __Local__12[4];
	__Local__17.Channel = FName(TEXT("Camera"));
	__Local__17.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__18 = __Local__12[5];
	__Local__18.Channel = FName(TEXT("PhysicsBody"));
	__Local__18.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__19 = __Local__12[6];
	__Local__19.Channel = FName(TEXT("Vehicle"));
	__Local__19.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__20 = __Local__12[7];
	__Local__20.Channel = FName(TEXT("Destructible"));
	__Local__20.Response = ECollisionResponse::ECR_Ignore;
	bpv__PrevisArrow__pf->BodyInstance.bAutoWeld = false;
	auto& __Local__21 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(bpv__PrevisArrow__pf->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__21 = ECollisionEnabled::Type::NoCollision;
	bpv__PrevisArrow__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_LightStudio_C__pf1079297466::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__PrevisArrow__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__PrevisArrow__pf->OverrideMaterials.Reserve(1);
	bpv__PrevisArrow__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_LightStudio_C__pf1079297466::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bpv__PrevisArrow__pf->CastShadow = false;
	bpv__PrevisArrow__pf->bCastDynamicShadow = false;
	bpv__PrevisArrow__pf->bCastStaticShadow = false;
	bpv__PrevisArrow__pf->bHiddenInGame = true;
	bpv__PrevisArrow__pf->RelativeScale3D = FVector(0.500000, 0.500000, 0.500000);
	if(!bpv__PrevisArrow__pf->IsTemplate())
	{
		bpv__PrevisArrow__pf->BodyInstance.FixupData(bpv__PrevisArrow__pf);
	}
	bpv__ExponentialHeightFog1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ExponentialHeightFog1__pf->AttachToComponent(bpv__Scene1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__ExponentialHeightFog1__pf->DirectionalInscatteringColor = FLinearColor(1.000000, 0.000000, 0.633525, 1.000000);
	bpv__SkyLight1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SkyLight1__pf->AttachToComponent(bpv__Scene1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SkyLight1__pf->bLowerHemisphereIsBlack = false;
	bpv__SkyLight1__pf->LightGuid = FGuid(0x5AAD5B23, 0x481D8BFB, 0xBD1106B7, 0x0A98C594);
	bpv__GlobalBrightness__pf = 1.000000f;
	bpv__Use_HDRI__pf = false;
	bpv__UseSunLight__pf = true;
	bpv__SunBrightness__pf = 1.000000f;
	bpv__SunTint__pf = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__StationaryLightForSun__pf = false;
	bpv__SunDirectionalLight__pf = nullptr;
	bpv__UseAtmosphere__pf = true;
	bpv__AtmosphereBrightness__pf = 1.000000f;
	bpv__AtmosphereTint__pf = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__PrevisArrowMaterial__pf = nullptr;
	bpv__LightColor__pf = FLinearColor(0.000000, 0.000000, 0.000000, 0.000000);
	bpv__SunColorCurve__pf = CastChecked<UCurveLinearColor>(CastChecked<UDynamicClass>(ABP_LightStudio_C__pf1079297466::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__OverrideSunColor__pf = false;
	bpv__AtmosphereDensityMultiplier__pf = 1.000000f;
	bpv__AtmosphereAltitude__pf = 100000.000000f;
	bpv__DisableSunDisk__pf = false;
	bpv__UseFog__pf = false;
	bpv__FogBrightness__pf = 1.000000f;
	bpv__FogTint__pf = FLinearColor(0.500000, 0.500000, 0.500000, 1.000000);
	bpv__FogAltitude__pf = 0.000000f;
	bpv__FogMaxOpacity__pf = 1.000000f;
	bpv__FogHeightFalloff__pf = 0.200000f;
	bpv__FogDensity__pf = 0.020000f;
	bpv__FogBrightnessCurve__pf = CastChecked<UCurveFloat>(CastChecked<UDynamicClass>(ABP_LightStudio_C__pf1079297466::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__FogStartDistance__pf = 3000.000000f;
	bpv__DisableGroundScattering__pf = false;
	bpv__AtmosphereDistanceScale__pf = 1.000000f;
	bpv__SkyboxMaterial__pf = nullptr;
	bpv__HDRI_Brightness__pf = 1.000000f;
	bpv__HDRI_Contrast__pf = 1.000000f;
	bpv__HDRI_Tint__pf = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__HDRI_Cubemap__pf = CastChecked<UTexture>(CastChecked<UDynamicClass>(ABP_LightStudio_C__pf1079297466::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__HDRI_Rotation__pf = 0.000000f;
	bpv__AtmosphereOpacityHorizon__pf = 1.000000f;
	bpv__AtmosphereOpacityZenith__pf = 1.000000f;
	bpv__HighDensityAtmosphere__pf = true;
	bpv__AtmosphericFog__pf = nullptr;
	bpv__UseSkylight__pf = true;
	bpv__Shadowdistance__pf = 10000.000000f;
	bpv__LightShaftBloom__pf = false;
	bpv__LightShaftOcclusion__pf = false;
	bpv__OcclusionMaskDarkness__pf = 0.050000f;
	bpv__BloomScale__pf = 0.200000f;
	bpv__BloomThreshold__pf = 0.000000f;
	bpv__BloomTint__pf = FColor(255, 255, 255, 0);
	bpv__AtmosphereFogMultiplier__pf = 1.000000f;
	bpv__AtmosphereDensityHeight__pf = 0.500000f;
	bpv__AtmosphereMaxScatteringOrder__pf = 4;
	bpv__AtmosphereAltitudeSampleNumber__pf = 2;
	bpv__LightFunctionMaterial__pf = nullptr;
	bpv__MIC_Black__pf = CastChecked<UMaterialInstance>(CastChecked<UDynamicClass>(ABP_LightStudio_C__pf1079297466::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__MIC_HDRI__pf = CastChecked<UMaterialInstance>(CastChecked<UDynamicClass>(ABP_LightStudio_C__pf1079297466::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
}
void ABP_LightStudio_C__pf1079297466::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Scene1__pf)
	{
		bpv__Scene1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Skybox__pf)
	{
		bpv__Skybox__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PrevisArrow__pf)
	{
		bpv__PrevisArrow__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ExponentialHeightFog1__pf)
	{
		bpv__ExponentialHeightFog1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SkyLight1__pf)
	{
		bpv__SkyLight1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void ABP_LightStudio_C__pf1079297466::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__22 = NewObject<UDirectionalLightComponent>(InDynamicClass, UDirectionalLightComponent::StaticClass(), TEXT("NODE_AddDirectionalLightComponent-0"));
	InDynamicClass->ComponentTemplates.Add(__Local__22);
	auto __Local__23 = NewObject<UDirectionalLightComponent>(InDynamicClass, UDirectionalLightComponent::StaticClass(), TEXT("NODE_AddDirectionalLightComponent-1"));
	InDynamicClass->ComponentTemplates.Add(__Local__23);
	auto __Local__24 = NewObject<UAtmosphericFogComponent>(InDynamicClass, UAtmosphericFogComponent::StaticClass(), TEXT("NODE_AddAtmosphericFogComponent-0"));
	InDynamicClass->ComponentTemplates.Add(__Local__24);
	auto __Local__25 = NewObject<UAtmosphericFogComponent>(InDynamicClass, UAtmosphericFogComponent::StaticClass(), TEXT("NODE_AddAtmosphericFogComponent-1"));
	InDynamicClass->ComponentTemplates.Add(__Local__25);
	auto __Local__26 = NewObject<UAtmosphericFogComponent>(InDynamicClass, UAtmosphericFogComponent::StaticClass(), TEXT("NODE_AddAtmosphericFogComponent-2"));
	InDynamicClass->ComponentTemplates.Add(__Local__26);
	auto __Local__27 = NewObject<UAtmosphericFogComponent>(InDynamicClass, UAtmosphericFogComponent::StaticClass(), TEXT("NODE_AddAtmosphericFogComponent-3"));
	InDynamicClass->ComponentTemplates.Add(__Local__27);
	auto __Local__28 = NewObject<UDirectionalLightComponent>(InDynamicClass, UDirectionalLightComponent::StaticClass(), TEXT("NODE_AddDirectionalLightComponent-2"));
	InDynamicClass->ComponentTemplates.Add(__Local__28);
	auto __Local__29 = NewObject<UDirectionalLightComponent>(InDynamicClass, UDirectionalLightComponent::StaticClass(), TEXT("NODE_AddDirectionalLightComponent-3"));
	InDynamicClass->ComponentTemplates.Add(__Local__29);
	auto __Local__30 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("SceneComponent_22"));
	InDynamicClass->ComponentTemplates.Add(__Local__30);
	__Local__22->DynamicShadowDistanceMovableLight = 200000.000000f;
	__Local__22->CascadeDistributionExponent = 4.000000f;
	__Local__22->ShadowBias = 0.400000f;
	__Local__22->bAffectDynamicIndirectLighting = true;
	__Local__22->LightGuid = FGuid(0xAD4C7FD9, 0x4D53BE24, 0x7394B6A6, 0x2867AEA7);
	__Local__22->Intensity = 3.141593f;
	__Local__23->ShadowBias = 0.400000f;
	__Local__23->bAffectDynamicIndirectLighting = true;
	__Local__23->LightGuid = FGuid(0xFEC362C3, 0x472E80D3, 0xB8C078A9, 0xE4E23323);
	__Local__23->Intensity = 3.141593f;
	__Local__23->Mobility = EComponentMobility::Type::Stationary;
	auto& __Local__31 = (*(AccessPrivateProperty<FAtmospherePrecomputeParameters >((__Local__24), UAtmosphericFogComponent::__PPO__PrecomputeParams() )));
	__Local__31.DensityHeight = 0.800000f;
	auto& __Local__32 = (*(AccessPrivateProperty<FAtmospherePrecomputeParameters >((__Local__27), UAtmosphericFogComponent::__PPO__PrecomputeParams() )));
	__Local__32.DensityHeight = 0.800000f;
	__Local__28->ShadowBias = 0.400000f;
	__Local__28->bAffectDynamicIndirectLighting = true;
	__Local__28->LightGuid = FGuid(0xFEC362C3, 0x472E80D3, 0xB8C078A9, 0xE4E23323);
	__Local__28->Intensity = 3.141593f;
	__Local__28->Mobility = EComponentMobility::Type::Stationary;
	__Local__29->DynamicShadowDistanceMovableLight = 200000.000000f;
	__Local__29->CascadeDistributionExponent = 4.000000f;
	__Local__29->ShadowBias = 0.400000f;
	__Local__29->bAffectDynamicIndirectLighting = true;
	__Local__29->LightGuid = FGuid(0xAD4C7FD9, 0x4D53BE24, 0x7394B6A6, 0x2867AEA7);
	__Local__29->Intensity = 3.141593f;
}
void ABP_LightStudio_C__pf1079297466::bpf__UserConstructionScript__pf()
{
	bool bpfv_____bool_Variable__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_K2_SetWorldLocation_SweepHitResult__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_K2_SetWorldLocation_SweepHitResult2__pf{};
	float bpfv__CallFunc_NormalizedSunAngle_Angle__pf{};
	float bpfv__CallFunc_GetFloatValue_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf{};
	FLinearColor bpfv__CallFunc_Conv_FloatToLinearColor_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_LinearColorLerp_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Multiply_LinearColorLinearColor_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Multiply_LinearColorLinearColor_ReturnValue2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf{};
	UMaterialInterface* bpfv__K2Node_Select_Default__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue2__pf{};
	FHitResult bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue5__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(47);
				__StateStack.Push(40);
				__StateStack.Push(36);
				__StateStack.Push(22);
				__StateStack.Push(11);
			}
		case 2:
			{
				if(IsValid(bpv__Skybox__pf))
				{
					bpv__Skybox__pf->USceneComponent::K2_SetWorldRotation(FRotator(0.000000,0.000000,0.000000), false, /*out*/ bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, false);
				}
			}
		case 3:
			{
				bpfv_____bool_Variable__pf = bpv__Use_HDRI__pf;
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, TSwitchValue<bool , UMaterialInterface* >(bpfv_____bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , UMaterialInterface* >(false, *(UMaterialInterface**)(&(bpv__MIC_Black__pf))), TSwitchPair<bool , UMaterialInterface* >(true, *(UMaterialInterface**)(&(bpv__MIC_HDRI__pf)))));
			}
		case 4:
			{
				bpv__SkyboxMaterial__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
			}
		case 5:
			{
				if(IsValid(bpv__Skybox__pf))
				{
					bpv__Skybox__pf->SetMaterial(0, bpv__SkyboxMaterial__pf);
				}
			}
		case 6:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__HDRI_Brightness__pf, bpv__GlobalBrightness__pf);
				if(IsValid(bpv__SkyboxMaterial__pf))
				{
					bpv__SkyboxMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("HDRI_Brightness")), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				}
			}
		case 7:
			{
				if(IsValid(bpv__SkyboxMaterial__pf))
				{
					bpv__SkyboxMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("HDRI_Tint")), bpv__HDRI_Tint__pf);
				}
			}
		case 8:
			{
				if(IsValid(bpv__SkyboxMaterial__pf))
				{
					bpv__SkyboxMaterial__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("HDRI_Cubemap")), bpv__HDRI_Cubemap__pf);
				}
			}
		case 9:
			{
				if(IsValid(bpv__PrevisArrow__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__PrevisArrow__pf->USceneComponent::K2_GetComponentRotation();
				}
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_BreakRotator_Yaw__pf, -360.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, bpv__HDRI_Rotation__pf);
				if(IsValid(bpv__SkyboxMaterial__pf))
				{
					bpv__SkyboxMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("CubemapRotation")), bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				}
			}
		case 10:
			{
				if(IsValid(bpv__SkyboxMaterial__pf))
				{
					bpv__SkyboxMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("HDRI_Contrast")), bpv__HDRI_Contrast__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpf__AtmosphereDensity__pf();
			}
		case 12:
			{
				if(IsValid(bpv__AtmosphericFog__pf))
				{
					bpv__AtmosphericFog__pf->USceneComponent::SetVisibility(bpv__UseAtmosphere__pf, false);
				}
			}
		case 13:
			{
				bpfv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpv__AtmosphereAltitude__pf);
				if(IsValid(bpv__AtmosphericFog__pf))
				{
					bpv__AtmosphericFog__pf->USceneComponent::K2_SetWorldLocation(bpfv__CallFunc_MakeVector_ReturnValue2__pf, false, /*out*/ bpfv__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, false);
				}
			}
		case 14:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__GlobalBrightness__pf, bpv__AtmosphereBrightness__pf);
				if(IsValid(bpv__AtmosphericFog__pf))
				{
					bpv__AtmosphericFog__pf->UAtmosphericFogComponent::SetDefaultBrightness(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf);
				}
			}
		case 15:
			{
				if(IsValid(bpv__AtmosphericFog__pf))
				{
					bpv__AtmosphericFog__pf->UAtmosphericFogComponent::DisableSunDisk(bpv__DisableSunDisk__pf);
				}
			}
		case 16:
			{
				if(IsValid(bpv__AtmosphericFog__pf))
				{
					bpv__AtmosphericFog__pf->UAtmosphericFogComponent::DisableGroundScattering(bpv__DisableGroundScattering__pf);
				}
			}
		case 17:
			{
				if(IsValid(bpv__AtmosphericFog__pf))
				{
					bpv__AtmosphericFog__pf->UAtmosphericFogComponent::SetSunMultiplier(bpv__AtmosphereBrightness__pf);
				}
			}
		case 18:
			{
				if(IsValid(bpv__AtmosphericFog__pf))
				{
					bpv__AtmosphericFog__pf->UAtmosphericFogComponent::SetDefaultLightColor(bpv__AtmosphereTint__pf);
				}
			}
		case 19:
			{
				if(IsValid(bpv__AtmosphericFog__pf))
				{
					bpv__AtmosphericFog__pf->UAtmosphericFogComponent::SetDistanceScale(bpv__AtmosphereDistanceScale__pf);
				}
			}
		case 20:
			{
				if(IsValid(bpv__AtmosphericFog__pf))
				{
					bpv__AtmosphericFog__pf->UAtmosphericFogComponent::SetDensityMultiplier(bpv__AtmosphereDensityMultiplier__pf);
				}
			}
		case 21:
			{
				if(IsValid(bpv__AtmosphericFog__pf))
				{
					bpv__AtmosphericFog__pf->UAtmosphericFogComponent::SetFogMultiplier(bpv__AtmosphereFogMultiplier__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				if (!bpv__UseSunLight__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 23:
			{
				bpf__SunMobility__pf();
			}
		case 24:
			{
				bpf__CalculateSunColor__pf();
			}
		case 25:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue5__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__SunBrightness__pf, bpv__GlobalBrightness__pf);
				if(IsValid(bpv__SunDirectionalLight__pf))
				{
					bpv__SunDirectionalLight__pf->ULightComponent::SetIntensity(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue5__pf);
				}
			}
		case 26:
			{
				if(IsValid(bpv__SunDirectionalLight__pf))
				{
					bpv__SunDirectionalLight__pf->ULightComponent::SetLightColor(bpv__LightColor__pf, true);
				}
			}
		case 27:
			{
				if(IsValid(bpv__SunDirectionalLight__pf))
				{
					bpv__SunDirectionalLight__pf->UDirectionalLightComponent::SetDynamicShadowDistanceMovableLight(bpv__Shadowdistance__pf);
				}
			}
		case 28:
			{
				if(IsValid(bpv__SunDirectionalLight__pf))
				{
					bpv__SunDirectionalLight__pf->UDirectionalLightComponent::SetDynamicShadowDistanceStationaryLight(bpv__Shadowdistance__pf);
				}
			}
		case 29:
			{
				if(IsValid(bpv__SunDirectionalLight__pf))
				{
					bpv__SunDirectionalLight__pf->ULightComponent::SetEnableLightShaftBloom(bpv__LightShaftBloom__pf);
				}
			}
		case 30:
			{
				if(IsValid(bpv__SunDirectionalLight__pf))
				{
					bpv__SunDirectionalLight__pf->UDirectionalLightComponent::SetEnableLightShaftOcclusion(bpv__LightShaftOcclusion__pf);
				}
			}
		case 31:
			{
				if(IsValid(bpv__SunDirectionalLight__pf))
				{
					bpv__SunDirectionalLight__pf->UDirectionalLightComponent::SetOcclusionMaskDarkness(bpv__OcclusionMaskDarkness__pf);
				}
			}
		case 32:
			{
				if(IsValid(bpv__SunDirectionalLight__pf))
				{
					bpv__SunDirectionalLight__pf->ULightComponent::SetBloomScale(bpv__BloomScale__pf);
				}
			}
		case 33:
			{
				if(IsValid(bpv__SunDirectionalLight__pf))
				{
					bpv__SunDirectionalLight__pf->ULightComponent::SetBloomThreshold(bpv__BloomThreshold__pf);
				}
			}
		case 34:
			{
				if(IsValid(bpv__SunDirectionalLight__pf))
				{
					bpv__SunDirectionalLight__pf->ULightComponent::SetBloomTint(bpv__BloomTint__pf);
				}
			}
		case 35:
			{
				if(IsValid(bpv__SunDirectionalLight__pf))
				{
					bpv__SunDirectionalLight__pf->ULightComponent::SetLightFunctionMaterial(bpv__LightFunctionMaterial__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 36:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue2__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_LightStudio_C__pf1079297466::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
			}
		case 37:
			{
				bpv__PrevisArrowMaterial__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue2__pf;
			}
		case 38:
			{
				if(IsValid(bpv__PrevisArrow__pf))
				{
					bpv__PrevisArrow__pf->SetMaterial(0, bpv__PrevisArrowMaterial__pf);
				}
			}
		case 39:
			{
				if(IsValid(bpv__PrevisArrowMaterial__pf))
				{
					bpv__PrevisArrowMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("SunColor")), bpv__LightColor__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 40:
			{
				if(IsValid(bpv__ExponentialHeightFog1__pf))
				{
					bpv__ExponentialHeightFog1__pf->USceneComponent::SetVisibility(bpv__UseFog__pf, false);
				}
			}
		case 41:
			{
				bpf__NormalizedSunAngle__pf(/*out*/ bpfv__CallFunc_NormalizedSunAngle_Angle__pf);
				if(IsValid(bpv__FogBrightnessCurve__pf))
				{
					bpfv__CallFunc_GetFloatValue_ReturnValue__pf = bpv__FogBrightnessCurve__pf->UCurveFloat::GetFloatValue(bpfv__CallFunc_NormalizedSunAngle_Angle__pf);
				}
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__FogBrightness__pf, bpfv__CallFunc_GetFloatValue_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__GlobalBrightness__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf);
				bpfv__CallFunc_Conv_FloatToLinearColor_ReturnValue__pf = UKismetMathLibrary::Conv_FloatToLinearColor(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf);
				bpfv__CallFunc_LinearColorLerp_ReturnValue__pf = UKismetMathLibrary::LinearColorLerp(bpv__LightColor__pf, FLinearColor(1.000000,1.000000,1.000000,1.000000), 0.500000);
				bpfv__CallFunc_Multiply_LinearColorLinearColor_ReturnValue__pf = UKismetMathLibrary::Multiply_LinearColorLinearColor(bpv__FogTint__pf, bpfv__CallFunc_Conv_FloatToLinearColor_ReturnValue__pf);
				bpfv__CallFunc_Multiply_LinearColorLinearColor_ReturnValue2__pf = UKismetMathLibrary::Multiply_LinearColorLinearColor(bpfv__CallFunc_LinearColorLerp_ReturnValue__pf, bpfv__CallFunc_Multiply_LinearColorLinearColor_ReturnValue__pf);
				if(IsValid(bpv__ExponentialHeightFog1__pf))
				{
					bpv__ExponentialHeightFog1__pf->UExponentialHeightFogComponent::SetFogInscatteringColor(bpfv__CallFunc_Multiply_LinearColorLinearColor_ReturnValue2__pf);
				}
			}
		case 42:
			{
				if(IsValid(bpv__ExponentialHeightFog1__pf))
				{
					bpv__ExponentialHeightFog1__pf->UExponentialHeightFogComponent::SetFogMaxOpacity(bpv__FogMaxOpacity__pf);
				}
			}
		case 43:
			{
				if(IsValid(bpv__ExponentialHeightFog1__pf))
				{
					bpv__ExponentialHeightFog1__pf->UExponentialHeightFogComponent::SetFogHeightFalloff(bpv__FogHeightFalloff__pf);
				}
			}
		case 44:
			{
				if(IsValid(bpv__ExponentialHeightFog1__pf))
				{
					bpv__ExponentialHeightFog1__pf->UExponentialHeightFogComponent::SetFogDensity(bpv__FogDensity__pf);
				}
			}
		case 45:
			{
				if(IsValid(bpv__ExponentialHeightFog1__pf))
				{
					bpv__ExponentialHeightFog1__pf->UExponentialHeightFogComponent::SetStartDistance(bpv__FogStartDistance__pf);
				}
			}
		case 46:
			{
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpv__FogAltitude__pf);
				if(IsValid(bpv__ExponentialHeightFog1__pf))
				{
					bpv__ExponentialHeightFog1__pf->USceneComponent::K2_SetWorldLocation(bpfv__CallFunc_MakeVector_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetWorldLocation_SweepHitResult2__pf, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 47:
			{
				if(IsValid(bpv__SkyLight1__pf))
				{
					bpv__SkyLight1__pf->USkyLightComponent::RecaptureSky();
				}
			}
		case 48:
			{
				if (!bpv__UseSkylight__pf)
				{
					__CurrentState = 49;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 49:
			{
				if(IsValid(bpv__SkyLight1__pf))
				{
					bpv__SkyLight1__pf->UActorComponent::K2_DestroyComponent(this);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_LightStudio_C__pf1079297466::bpf__CalculateSunColor__pf()
{
	float bpfv__CallFunc_NormalizedSunAngle_Angle__pf{};
	FLinearColor bpfv__CallFunc_GetLinearColorValue_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakColor_R__pf{};
	float bpfv__CallFunc_BreakColor_G__pf{};
	float bpfv__CallFunc_BreakColor_B__pf{};
	float bpfv__CallFunc_BreakColor_A__pf{};
	FLinearColor bpfv__CallFunc_MakeColor_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Multiply_LinearColorLinearColor_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_SelectColor_ReturnValue__pf(EForceInit::ForceInit);
	bpf__NormalizedSunAngle__pf(/*out*/ bpfv__CallFunc_NormalizedSunAngle_Angle__pf);
	if(IsValid(bpv__SunColorCurve__pf))
	{
		bpfv__CallFunc_GetLinearColorValue_ReturnValue__pf = bpv__SunColorCurve__pf->GetLinearColorValue(bpfv__CallFunc_NormalizedSunAngle_Angle__pf);
	}
	UKismetMathLibrary::BreakColor(bpfv__CallFunc_GetLinearColorValue_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakColor_R__pf, /*out*/ bpfv__CallFunc_BreakColor_G__pf, /*out*/ bpfv__CallFunc_BreakColor_B__pf, /*out*/ bpfv__CallFunc_BreakColor_A__pf);
	bpfv__CallFunc_MakeColor_ReturnValue__pf = UKismetMathLibrary::MakeColor(bpfv__CallFunc_BreakColor_R__pf, bpfv__CallFunc_BreakColor_G__pf, bpfv__CallFunc_BreakColor_B__pf, 1.000000);
	bpfv__CallFunc_Multiply_LinearColorLinearColor_ReturnValue__pf = UKismetMathLibrary::Multiply_LinearColorLinearColor(bpfv__CallFunc_MakeColor_ReturnValue__pf, bpv__SunTint__pf);
	bpfv__CallFunc_SelectColor_ReturnValue__pf = UKismetMathLibrary::SelectColor(bpv__SunTint__pf, bpfv__CallFunc_Multiply_LinearColorLinearColor_ReturnValue__pf, bpv__OverrideSunColor__pf);
	bpv__LightColor__pf = bpfv__CallFunc_SelectColor_ReturnValue__pf;
}
void ABP_LightStudio_C__pf1079297466::bpf__SunMobility__pf()
{
	FTransform bpfv_____struct_Variable__pf{};
	FTransform bpfv_____struct_Variable2__pf{};
	UDirectionalLightComponent* bpfv__CallFunc_AddComponent_ReturnValue__pf{};
	UDirectionalLightComponent* bpfv__CallFunc_AddComponent_ReturnValue2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__StationaryLightForSun__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				bpfv_____struct_Variable__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				bpfv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<UDirectionalLightComponent>(AActor::AddComponent(FName(TEXT("NODE_AddDirectionalLightComponent-2")), false, bpfv_____struct_Variable__pf, this), ECastCheckedType::NullAllowed);
			}
		case 3:
			{
				bpv__SunDirectionalLight__pf = bpfv__CallFunc_AddComponent_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv_____struct_Variable2__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				bpfv__CallFunc_AddComponent_ReturnValue2__pf = CastChecked<UDirectionalLightComponent>(AActor::AddComponent(FName(TEXT("NODE_AddDirectionalLightComponent-3")), false, bpfv_____struct_Variable2__pf, this), ECastCheckedType::NullAllowed);
			}
		case 5:
			{
				bpv__SunDirectionalLight__pf = bpfv__CallFunc_AddComponent_ReturnValue2__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_LightStudio_C__pf1079297466::bpf__NormalizedSunAngle__pf(/*out*/ float& bpp__Angle__pf)
{
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Abs_ReturnValue2__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf = AActor::K2_GetActorRotation();
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_BreakRotator_Pitch__pf, 90.000000);
	bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Abs_ReturnValue__pf, 90.000000);
	bpfv__CallFunc_Abs_ReturnValue2__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Abs_ReturnValue2__pf, -1.000000);
	bpp__Angle__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
}
void ABP_LightStudio_C__pf1079297466::bpf__AtmosphereDensity__pf()
{
	FTransform bpfv_____struct_Variable__pf{};
	FTransform bpfv_____struct_Variable2__pf{};
	UAtmosphericFogComponent* bpfv__CallFunc_AddComponent_ReturnValue__pf{};
	UAtmosphericFogComponent* bpfv__CallFunc_AddComponent_ReturnValue2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__HighDensityAtmosphere__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				bpfv_____struct_Variable2__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				bpfv__CallFunc_AddComponent_ReturnValue2__pf = CastChecked<UAtmosphericFogComponent>(AActor::AddComponent(FName(TEXT("NODE_AddAtmosphericFogComponent-3")), false, bpfv_____struct_Variable2__pf, this), ECastCheckedType::NullAllowed);
			}
		case 3:
			{
				bpv__AtmosphericFog__pf = bpfv__CallFunc_AddComponent_ReturnValue2__pf;
			}
		case 4:
			{
				if(IsValid(bpv__AtmosphericFog__pf))
				{
					bpv__AtmosphericFog__pf->UAtmosphericFogComponent::SetPrecomputeParams(bpv__AtmosphereDensityHeight__pf, bpv__AtmosphereMaxScatteringOrder__pf, bpv__AtmosphereAltitudeSampleNumber__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv_____struct_Variable__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				bpfv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<UAtmosphericFogComponent>(AActor::AddComponent(FName(TEXT("NODE_AddAtmosphericFogComponent-2")), false, bpfv_____struct_Variable__pf, this), ECastCheckedType::NullAllowed);
			}
		case 6:
			{
				bpv__AtmosphericFog__pf = bpfv__CallFunc_AddComponent_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_LightStudio_C__pf1079297466::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/StarterContent/Blueprints/Assets/Skybox.Skybox 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/StarterContent/Blueprints/Assets/M_LightStage_Skybox_Master.M_LightStage_Skybox_Master 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/StarterContent/Blueprints/Assets/SM_Arrows.SM_Arrows 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/StarterContent/Blueprints/Assets/M_LightStage_Arrows.M_LightStage_Arrows 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveLinearColor /Game/StarterContent/Blueprints/Assets/SunlightColorLUT.SunlightColorLUT 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveFloat /Game/StarterContent/Blueprints/Assets/FogBrightnessLUT.FogBrightnessLUT 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  TextureCube /Game/StarterContent/HDRI/HDRI_Epic_Courtyard_Daylight.HDRI_Epic_Courtyard_Daylight 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/StarterContent/Blueprints/Assets/M_LightStage_Skybox_Black.M_LightStage_Skybox_Black 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/StarterContent/Blueprints/Assets/M_LightStage_Skybox_HDRI.M_LightStage_Skybox_HDRI 
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
void ABP_LightStudio_C__pf1079297466::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ExponentialHeightFogComponent 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SkyLightComponent 
		{21, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstance 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.AtmosphericFogComponent 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CurveFloat 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CurveLinearColor 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.DirectionalLightComponent 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.LightComponent 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
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
struct FRegisterHelper__ABP_LightStudio_C__pf1079297466
{
	FRegisterHelper__ABP_LightStudio_C__pf1079297466()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/StarterContent/Blueprints/BP_LightStudio"), &ABP_LightStudio_C__pf1079297466::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_LightStudio_C__pf1079297466 Instance;
};
FRegisterHelper__ABP_LightStudio_C__pf1079297466 FRegisterHelper__ABP_LightStudio_C__pf1079297466::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
