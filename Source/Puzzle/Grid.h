// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Grid.generated.h"

UCLASS()
class PUZZLE_API AGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrid();

	int Acertos;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	int GetHandIndex();
	void SetCards();
	void AddPiece(class APiece* Piece);
	void Swap();
	void CheckWin();
	TArray<class APiece*> Matrix;

private:
	UPROPERTY(EditAnywhere)
		class USceneComponent* Root;
	UPROPERTY(EditAnywhere)
		FVector Position;

	UPROPERTY(EditAnywhere)
		class APiece* FirstPiece;

	UPROPERTY(EditAnywhere)
		class APiece* SecondPiece;
	
	TSubclassOf<class APiece> P01;
	TSubclassOf<class APiece> P02;
	TSubclassOf<class APiece> P03;
	TSubclassOf<class APiece> P04;
	TSubclassOf<class APiece> P05;
	TSubclassOf<class APiece> P06;
	TSubclassOf<class APiece> P07;
	TSubclassOf<class APiece> P08;
	TSubclassOf<class APiece> P09;
	TSubclassOf<class APiece> P10;
	TSubclassOf<class APiece> P11;
	TSubclassOf<class APiece> P12;
	TSubclassOf<class APiece> P13;
	TSubclassOf<class APiece> P14;
	TSubclassOf<class APiece> P15;
	TSubclassOf<class APiece> P16;
	TSubclassOf<class APiece> P17;
	TSubclassOf<class APiece> P18;
	TSubclassOf<class APiece> P19;
	TSubclassOf<class APiece> P20;
	TSubclassOf<class APiece> P21;
	TSubclassOf<class APiece> P22;
	TSubclassOf<class APiece> P23;
	TSubclassOf<class APiece> P24;
	TSubclassOf<class APiece> P25;
	
	
};
