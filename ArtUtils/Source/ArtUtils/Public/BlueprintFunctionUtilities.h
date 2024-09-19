// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlueprintFunctionUtilities.generated.h"

/**
 * 
 */
UCLASS()
class ARTUTILS_API UBlueprintFunctionUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "ArtUtils")
	static void LoadEditorLevelStreaming(ULevelStreaming* LevelStreaming, bool Load);

	UFUNCTION(BlueprintCallable, Category = "ArtUtils")
	static void LoadEditorLevelStreamingByName(FString LevelStreamName, bool Load);

	UFUNCTION(BlueprintCallable, Category = "ArtUtils")
	static TArray<ULevelStreaming*> GetStreamingLevels();	
};
