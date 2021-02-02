// Copyright Epic Games, Inc. All Rights Reserved.

#include "AzureTest_cppGameMode.h"
#include "AzureTest_cppCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAzureTest_cppGameMode::AAzureTest_cppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
