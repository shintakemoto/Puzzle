// Fill out your copyright notice in the Description page of Project Settings.

#include "Piece.h"
#include "Grid.h"
#include "PaperSprite.h"
#include "PaperSpriteComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "MyPawn.h"

// Sets default values
APiece::APiece()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Sprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Sprite"));
	Sprite->OnInputTouchBegin.AddDynamic(this, &APiece::OnTouchBegin);
	RootComponent = Sprite;
}

// Called when the game starts or when spawned
void APiece::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APiece::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APiece::OnTouchBegin(ETouchIndex::Type Type, UPrimitiveComponent * TouchedComponent)
{
	if (Grid) {
		Grid->AddPiece(this);
	}
	
}

int APiece::GetIndex()
{
	return Index;
}

void APiece::SetGrid(AGrid * NewGrid)
{
	Grid = NewGrid;
}

AGrid * APiece::GetGrid()
{
	return Grid;
}
