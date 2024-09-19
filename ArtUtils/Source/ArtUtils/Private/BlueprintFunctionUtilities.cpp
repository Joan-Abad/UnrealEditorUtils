// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintFunctionUtilities.h"

#include "Subsystems/UnrealEditorSubsystem.h"

void UBlueprintFunctionUtilities::LoadEditorLevelStreaming(ULevelStreaming* LevelStreaming, bool Load)
{
	LevelStreaming->SetShouldBeVisibleInEditor(Load);
	LevelStreaming->GetWorld()->FlushLevelStreaming();
	
	if(ULevel* LoadedLevel = LevelStreaming->GetLoadedLevel())
	{
		auto& Actors = LoadedLevel->Actors;
		for ( int32 ActorIndex = 0; ActorIndex < Actors.Num(); ++ActorIndex )
		{
			AActor* Actor = Actors[ActorIndex];
			if ( Actor )
			{
				if (Actor->bHiddenEdLevel == Load )
				{
					Actor->bHiddenEdLevel = !Load;
					if ( Load )
					{
						Actor->ReregisterAllComponents();
					}
					else
					{
						Actor->UnregisterAllComponents();
					}
				}
			}
		}
	}
}

void UBlueprintFunctionUtilities::LoadEditorLevelStreamingByName(FString LevelStreamName, bool Load)
{
	ULevelStreaming* SelectedLevelStreaming = nullptr;
	TArray<ULevelStreaming*> LevelStreamings = GetStreamingLevels();

	for(const auto& LevelStreaming : LevelStreamings)
	{
		FString AssetName = LevelStreaming->GetWorldAsset().GetAssetName();
		
		if(AssetName == LevelStreamName)
		{
			SelectedLevelStreaming = LevelStreaming;
			break; 
		}
	}

	
	SelectedLevelStreaming->SetShouldBeVisibleInEditor(Load);
	SelectedLevelStreaming->GetWorld()->FlushLevelStreaming();
	
	if(ULevel* LoadedLevel = SelectedLevelStreaming->GetLoadedLevel())
	{
		auto& Actors = LoadedLevel->Actors;
		for ( int32 ActorIndex = 0; ActorIndex < Actors.Num(); ++ActorIndex )
		{
			AActor* Actor = Actors[ActorIndex];
			if ( Actor )
			{
				if (Actor->bHiddenEdLevel == Load )
				{
					Actor->bHiddenEdLevel = !Load;
					if ( Load )
					{
						Actor->ReregisterAllComponents();
					}
					else
					{
						Actor->UnregisterAllComponents();
					}
				}
			}
		}
	}
}

TArray<ULevelStreaming*> UBlueprintFunctionUtilities::GetStreamingLevels()
{
	if(UUnrealEditorSubsystem* UES = GEditor->GetEditorSubsystem<UUnrealEditorSubsystem>())
	{
		const TArray<ULevelStreaming*>& WorldStreamingLevels = UES->GetEditorWorld()->GetStreamingLevels();
		UE_LOG(LogTemp, Warning, TEXT("World StreamingLevels: %d"), WorldStreamingLevels.Num()); 
		return WorldStreamingLevels;
	}		
	
	return TArray<ULevelStreaming*>();
}