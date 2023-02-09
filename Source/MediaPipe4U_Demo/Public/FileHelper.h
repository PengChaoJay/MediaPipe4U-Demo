// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FileHelper.generated.h"

/**
 * 
 */
UCLASS(meta=(BlueprintThreadSafe, ScriptName = "FileHelpers"))
class MEDIAPIPE4U_DEMO_API UFileHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	static  bool ShowOpenImageDialog(const FString& DialogTitle, FString& File);

	UFUNCTION(BlueprintCallable)
	static  bool ShowOpenVideoDialog(const FString& DialogTitle, FString& File);
 
	UFUNCTION(BlueprintCallable)
	static  bool SaveBVHFileDialog(const FString& DialogTitle, FString& File);
};
