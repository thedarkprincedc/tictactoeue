// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TicTacToeUEGameMode.h"
#include "TicTacToeUEPlayerController.h"
#include "TicTacToeUEPawn.h"

ATicTacToeUEGameMode::ATicTacToeUEGameMode()
{
	// no pawn by default
	DefaultPawnClass = ATicTacToeUEPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = ATicTacToeUEPlayerController::StaticClass();
}
