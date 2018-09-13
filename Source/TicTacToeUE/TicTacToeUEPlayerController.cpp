// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TicTacToeUEPlayerController.h"

ATicTacToeUEPlayerController::ATicTacToeUEPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
