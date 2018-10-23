// Fill out your copyright notice in the Description page of Project Settings.

#include "testunrealc.h"
#include "MyActor.h"


// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TotalDamage = 200;
	DamageTimeInSeconds = 1.0f;
	DamagePerSecond = TotalDamage / DamageTimeInSeconds;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void AMyActor::PostInitProperties()
{
	Super::PostInitProperties();
	this->CalculateValues();
}

void AMyActor::CalculateValues()
{
	DamagePerSecond = TotalDamage / DamageTimeInSeconds;
}

#if WITH_EDITOR
void AMyActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	this->CalculateValues();
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif
