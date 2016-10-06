// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "S05_BattleGroundsHUD.generated.h"

UCLASS()
class AS05_BattleGroundsHUD : public AHUD
{
	GENERATED_BODY()

public:
	AS05_BattleGroundsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

