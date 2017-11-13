// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Piece.generated.h"

UCLASS()
class PUZZLE_API APiece : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APiece();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int GetIndex();

private:
	UPROPERTY(EditAnywhere)
		class UPaperSpriteComponent* Sprite;
	

	UPROPERTY(EditAnywhere)
		int Index;

	class AGrid* Grid;

public:
	UFUNCTION()
		void OnTouchBegin(ETouchIndex::Type Type, UPrimitiveComponent* TouchedComponent);

	void SetGrid(class AGrid* NewGrid);
	class AGrid* GetGrid();
};
