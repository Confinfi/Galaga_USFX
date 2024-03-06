// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroDeProteccion.h"

// Sets default values
AMuroDeProteccion::AMuroDeProteccion()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMuroDeProteccion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMuroDeProteccion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMuroDeProteccion::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

