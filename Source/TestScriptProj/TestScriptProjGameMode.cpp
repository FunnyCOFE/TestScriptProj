// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestScriptProjGameMode.h"
#include "TestScriptProjCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestScriptProjGameMode::ATestScriptProjGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
