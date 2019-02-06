// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class MrpoopybuttholeTarget : TargetRules
{
	public MrpoopybuttholeTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Mrpoopybutthole" } );
	}
}
