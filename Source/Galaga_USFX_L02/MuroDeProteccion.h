// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MuroDeProteccion.generated.h"

UCLASS()
class GALAGA_USFX_L02_API AMuroDeProteccion : public APawn
{
	GENERATED_BODY()
private:
	float resistencia;
	float vidaMaxima;
	float posicionX;
	float posicionY;
	float posicionZ;
	FVector posicion;
public:
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE float GetVidaMaxima() const { return vidaMaxima; }
	FORCEINLINE float GetPosicionX() const { return posicionX; }
	FORCEINLINE float GetPosicionY() const { return posicionY; }
	FORCEINLINE float GetPosicionZ() const { return posicionZ; }

	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetVidaMaxima(float _vidaMaxima) { vidaMaxima = _vidaMaxima; }
	FORCEINLINE void SetPosicionX(float _posicionX) { posicionX = _posicionX; }
	FORCEINLINE void SetPosicionY(float _posicionY) { posicionY = _posicionY; }
	FORCEINLINE void SetPosicionZ(float _posicionZ) { posicionZ = _posicionZ; }
public:
	// Sets default values for this pawn's properties
	AMuroDeProteccion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
