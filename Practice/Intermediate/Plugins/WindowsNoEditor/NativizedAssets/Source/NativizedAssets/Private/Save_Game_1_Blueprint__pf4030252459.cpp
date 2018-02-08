#include "NativizedAssets.h"
#include "Save_Game_1_Blueprint__pf4030252459.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Save_Game_1_Blueprint__pf4030252459.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
USave_Game_1_Blueprint_C__pf4030252459::USave_Game_1_Blueprint_C__pf4030252459(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (USave_Game_1_Blueprint_C__pf4030252459::StaticClass() == GetClass()))
	{
		USave_Game_1_Blueprint_C__pf4030252459::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Highest_Score__pf = 0;
}
void USave_Game_1_Blueprint_C__pf4030252459::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void USave_Game_1_Blueprint_C__pf4030252459::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
void USave_Game_1_Blueprint_C__pf4030252459::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
void USave_Game_1_Blueprint_C__pf4030252459::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{20, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
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
struct FRegisterHelper__USave_Game_1_Blueprint_C__pf4030252459
{
	FRegisterHelper__USave_Game_1_Blueprint_C__pf4030252459()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/SaveGame/Save_Game_1_Blueprint"), &USave_Game_1_Blueprint_C__pf4030252459::__StaticDependenciesAssets);
	}
	static FRegisterHelper__USave_Game_1_Blueprint_C__pf4030252459 Instance;
};
FRegisterHelper__USave_Game_1_Blueprint_C__pf4030252459 FRegisterHelper__USave_Game_1_Blueprint_C__pf4030252459::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
