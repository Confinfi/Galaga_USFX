// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EscebarioDelJuego.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GALAGA_USFX_L02_API UEscebarioDelJuego : public USceneComponent
{
	GENERATED_BODY()
private: 

	float colorDeFondo;
	float animacionDeFondo;
	float posicionX;
	float posicionY;
	float posicionZ;
	FVector posicion;
public:
	FORCEINLINE float GetColorDeFondo() const { return colorDeFondo; }
	FORCEINLINE float GetAnimacionDeFondo() const { return animacionDeFondo; }
	FORCEINLINE float GetPosicionX() const { return posicionX; }
	FORCEINLINE float GetPosicionY() const { return posicionY; }
	FORCEINLINE float GetPosicionZ() const { return posicionZ; }

	FORCEINLINE void SetColorDeFondo(float _colorDeFondo) { colorDeFondo = _colorDeFondo; }
	FORCEINLINE void SetAnimacionDeFondo(float _animacionDeFondo) { animacionDeFondo = _animacionDeFondo; }
	FORCEINLINE void SetPosicionX(float _posicionX) { posicionX = _posicionX; }
	FORCEINLINE void SetPosicionY(float _posicionY) { posicionY = _posicionY; }
	FORCEINLINE void SetPosicionZ(float _posicionZ) { posicionZ = _posicionZ; }
public:	
	// Sets default values for this component's properties
	UEscebarioDelJuego();

protected:
	UEscebarioDelJuego();
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
