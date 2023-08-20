// Fill out your copyright notice in the Description page of Project Settings.


#include "FileHelper.h"
#include "DesktopPlatformModule.h"
#include "Misc/Paths.h"

#if PLATFORM_WINDOWS
#include "Windows/AllowWindowsPlatformTypes.h"
#endif

bool UFileHelper::ShowOpenImageDialog(const FString& DialogTitle, FString& File)
{
#if PLATFORM_WINDOWS  
	TArray<FString> files;
	FDesktopPlatformModule::Get()
		->OpenFileDialog(GetActiveWindow(),
						 DialogTitle,
						 TEXT("/"),
						 TEXT(""),
						 TEXT("Image Files|*.BMP;*.JPG;*.PNG;*.JPEG;"),
						 static_cast<uint32_t>(EFileDialogFlags::None),
						 files
		);
	if (files.Num() > 0)
	{
		File = FPaths::ConvertRelativePathToFull(files[0]);
		return true;
	}
#endif

	return false;
}

bool UFileHelper::ShowOpenVideoDialog(const FString& DialogTitle, FString& File)
{
#if PLATFORM_WINDOWS
	TArray<FString> files;
	FDesktopPlatformModule::Get()
		->OpenFileDialog(GetActiveWindow(),
						 DialogTitle,
						 TEXT("/"),
						 TEXT(""),
						 TEXT("MP4|*.mp4"),
						 static_cast<uint32_t>(EFileDialogFlags::None),
						 files
		);
	if (files.Num() > 0)
	{
		File = FPaths::ConvertRelativePathToFull(files[0]);
		return true;
	}
#endif

	return false;
}

bool UFileHelper::SaveBVHFileDialog(const FString& DialogTitle, FString& File)
{
#if PLATFORM_WINDOWS
	TArray<FString> files;
	FDesktopPlatformModule::Get()
		->SaveFileDialog(GetActiveWindow(),
						 DialogTitle,
						 TEXT("/"),
						 TEXT(""),
						 TEXT("BVH|*.bvh"),
						 static_cast<uint32_t>(EFileDialogFlags::None),
						 files
		);
	if (files.Num() > 0)
	{
		File = FPaths::ConvertRelativePathToFull(files[0]);
		return true;
	}
#endif

	return false;
}