// Fill out your copyright notice in the Description page of Project Settings.

#include "Grid.h"
#include "Components/SceneComponent.h"
#include "Piece.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Engine/World.h"

// Sets default values
AGrid::AGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	ConstructorHelpers::FObjectFinder<UClass> Piece01(TEXT("Blueprint'/Game/Blueprints/Piece01.Piece01_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece02(TEXT("Blueprint'/Game/Blueprints/Piece02.Piece02_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece03(TEXT("Blueprint'/Game/Blueprints/Piece03.Piece03_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece04(TEXT("Blueprint'/Game/Blueprints/Piece04.Piece04_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece05(TEXT("Blueprint'/Game/Blueprints/Piece05.Piece05_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece06(TEXT("Blueprint'/Game/Blueprints/Piece06.Piece06_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece07(TEXT("Blueprint'/Game/Blueprints/Piece07.Piece07_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece08(TEXT("Blueprint'/Game/Blueprints/Piece08.Piece08_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece09(TEXT("Blueprint'/Game/Blueprints/Piece09.Piece09_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece10(TEXT("Blueprint'/Game/Blueprints/Piece10.Piece10_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece11(TEXT("Blueprint'/Game/Blueprints/Piece11.Piece11_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece12(TEXT("Blueprint'/Game/Blueprints/Piece12.Piece12_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece13(TEXT("Blueprint'/Game/Blueprints/Piece13.Piece13_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece14(TEXT("Blueprint'/Game/Blueprints/Piece14.Piece14_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece15(TEXT("Blueprint'/Game/Blueprints/Piece15.Piece15_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece16(TEXT("Blueprint'/Game/Blueprints/Piece16.Piece16_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece17(TEXT("Blueprint'/Game/Blueprints/Piece17.Piece17_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece18(TEXT("Blueprint'/Game/Blueprints/Piece18.Piece18_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece19(TEXT("Blueprint'/Game/Blueprints/Piece19.Piece19_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece20(TEXT("Blueprint'/Game/Blueprints/Piece20.Piece20_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece21(TEXT("Blueprint'/Game/Blueprints/Piece21.Piece21_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece22(TEXT("Blueprint'/Game/Blueprints/Piece22.Piece22_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece23(TEXT("Blueprint'/Game/Blueprints/Piece23.Piece23_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece24(TEXT("Blueprint'/Game/Blueprints/Piece24.Piece24_C'"));
	ConstructorHelpers::FObjectFinder<UClass> Piece25(TEXT("Blueprint'/Game/Blueprints/Piece25.Piece25_C'"));

	if (Piece01.Succeeded()) { P01 = Cast<UClass>(Piece01.Object); }
	if (Piece02.Succeeded()) { P02 = Cast<UClass>(Piece02.Object); }
	if (Piece03.Succeeded()) { P03 = Cast<UClass>(Piece03.Object); }
	if (Piece04.Succeeded()) { P04 = Cast<UClass>(Piece04.Object); }
	if (Piece05.Succeeded()) { P05 = Cast<UClass>(Piece05.Object); }
	if (Piece06.Succeeded()) { P06 = Cast<UClass>(Piece06.Object); }
	if (Piece07.Succeeded()) { P07 = Cast<UClass>(Piece07.Object); }
	if (Piece08.Succeeded()) { P08 = Cast<UClass>(Piece08.Object); }
	if (Piece09.Succeeded()) { P09 = Cast<UClass>(Piece09.Object); }
	if (Piece10.Succeeded()) { P10 = Cast<UClass>(Piece10.Object); }
	if (Piece11.Succeeded()) { P11 = Cast<UClass>(Piece11.Object); }
	if (Piece12.Succeeded()) { P12 = Cast<UClass>(Piece12.Object); }
	if (Piece13.Succeeded()) { P13 = Cast<UClass>(Piece13.Object); }
	if (Piece14.Succeeded()) { P14 = Cast<UClass>(Piece14.Object); }
	if (Piece15.Succeeded()) { P15 = Cast<UClass>(Piece15.Object); }
	if (Piece16.Succeeded()) { P16 = Cast<UClass>(Piece16.Object); }
	if (Piece17.Succeeded()) { P17 = Cast<UClass>(Piece17.Object); }
	if (Piece18.Succeeded()) { P18 = Cast<UClass>(Piece18.Object); }
	if (Piece19.Succeeded()) { P19 = Cast<UClass>(Piece19.Object); }
	if (Piece20.Succeeded()) { P20 = Cast<UClass>(Piece20.Object); }
	if (Piece21.Succeeded()) { P21 = Cast<UClass>(Piece21.Object); }
	if (Piece22.Succeeded()) { P22 = Cast<UClass>(Piece22.Object); }
	if (Piece23.Succeeded()) { P23 = Cast<UClass>(Piece23.Object); }
	if (Piece24.Succeeded()) { P24 = Cast<UClass>(Piece24.Object); }
	if (Piece25.Succeeded()) { P25 = Cast<UClass>(Piece25.Object); }
}

// Called when the game starts or when spawned
void AGrid::BeginPlay()
{
	Super::BeginPlay();
	Acertos = 0;
	SetCards();
}

// Called every frame
void AGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGrid::SetCards()
{
	FActorSpawnParameters SpawnParameters;
	UWorld* World = GetWorld();


	FVector pos[25] = { FVector(-600.f, 0.f, 140.f), FVector(-300.f, 0.f, 140.f), FVector(0.f, 0.f, 140.f), FVector(300.f, 0.f, 140.f), FVector(600.f, 0.f, 140.f),
					FVector(-600.f, 0.f, -60.f), FVector(-300.f, 0.f, -60.f), FVector(0.f, 0.f, -60.f), FVector(300.f, 0.f, -60.f), FVector(600.f, 0.f, -60.f),
					FVector(-600.f, 0.f, -260.f), FVector(-300.f, 0.f, -260.f), FVector(0.f, 0.f, -260.f), FVector(300.f, 0.f, -260.f), FVector(600.f, 0.f, -260.f),
					FVector(-600.f, 0.f, -460.f), FVector(-300.f, 0.f, -460.f), FVector(0.f, 0.f, -460.f), FVector(300.f, 0.f, -460.f), FVector(600.f, 0.f, -460.f),
					FVector(-600.f, 0.f, -660.f), FVector(-300.f, 0.f, -660.f), FVector(0.f, 0.f, -660.f), FVector(300.f, 0.f, -660.f), FVector(600.f, 0.f, -660.f)
	};

	APiece* Spawn1 = World->SpawnActor<APiece>(P01, pos[0], FRotator::ZeroRotator, SpawnParameters); Spawn1->SetGrid(this); Matrix.Add(Spawn1);
	APiece* Spawn2 = World->SpawnActor<APiece>(P02, pos[1], FRotator::ZeroRotator, SpawnParameters); Spawn2->SetGrid(this); Matrix.Add(Spawn2);
	APiece* Spawn3 = World->SpawnActor<APiece>(P03, pos[2], FRotator::ZeroRotator, SpawnParameters); Spawn3->SetGrid(this); Matrix.Add(Spawn3);
	APiece* Spawn4 = World->SpawnActor<APiece>(P04, pos[3], FRotator::ZeroRotator, SpawnParameters); Spawn4->SetGrid(this); Matrix.Add(Spawn4);
	APiece* Spawn5 = World->SpawnActor<APiece>(P05, pos[4], FRotator::ZeroRotator, SpawnParameters); Spawn5->SetGrid(this); Matrix.Add(Spawn5);
	APiece* Spawn6 = World->SpawnActor<APiece>(P06, pos[5], FRotator::ZeroRotator, SpawnParameters); Spawn6->SetGrid(this); Matrix.Add(Spawn6);
	APiece* Spawn7 = World->SpawnActor<APiece>(P07, pos[6], FRotator::ZeroRotator, SpawnParameters); Spawn7->SetGrid(this); Matrix.Add(Spawn7);
	APiece* Spawn8 = World->SpawnActor<APiece>(P08, pos[7], FRotator::ZeroRotator, SpawnParameters); Spawn8->SetGrid(this); Matrix.Add(Spawn8);
	APiece* Spawn9 = World->SpawnActor<APiece>(P09, pos[8], FRotator::ZeroRotator, SpawnParameters); Spawn9->SetGrid(this); Matrix.Add(Spawn9);
	APiece* Spawn10 = World->SpawnActor<APiece>(P10, pos[9], FRotator::ZeroRotator, SpawnParameters); Spawn10->SetGrid(this); Matrix.Add(Spawn10);
	APiece* Spawn11 = World->SpawnActor<APiece>(P11, pos[10], FRotator::ZeroRotator, SpawnParameters); Spawn11->SetGrid(this); Matrix.Add(Spawn11);
	APiece* Spawn12 = World->SpawnActor<APiece>(P12, pos[11], FRotator::ZeroRotator, SpawnParameters); Spawn12->SetGrid(this); Matrix.Add(Spawn12);
	APiece* Spawn13 = World->SpawnActor<APiece>(P13, pos[12], FRotator::ZeroRotator, SpawnParameters); Spawn13->SetGrid(this); Matrix.Add(Spawn13);
	APiece* Spawn14 = World->SpawnActor<APiece>(P14, pos[13], FRotator::ZeroRotator, SpawnParameters); Spawn14->SetGrid(this); Matrix.Add(Spawn14);
	APiece* Spawn15 = World->SpawnActor<APiece>(P15, pos[14], FRotator::ZeroRotator, SpawnParameters); Spawn15->SetGrid(this); Matrix.Add(Spawn15);
	APiece* Spawn16 = World->SpawnActor<APiece>(P16, pos[15], FRotator::ZeroRotator, SpawnParameters); Spawn16->SetGrid(this); Matrix.Add(Spawn16);
	APiece* Spawn17 = World->SpawnActor<APiece>(P17, pos[16], FRotator::ZeroRotator, SpawnParameters); Spawn17->SetGrid(this); Matrix.Add(Spawn17);
	APiece* Spawn18 = World->SpawnActor<APiece>(P18, pos[17], FRotator::ZeroRotator, SpawnParameters); Spawn18->SetGrid(this); Matrix.Add(Spawn18);
	APiece* Spawn19 = World->SpawnActor<APiece>(P19, pos[18], FRotator::ZeroRotator, SpawnParameters); Spawn19->SetGrid(this); Matrix.Add(Spawn19);
	APiece* Spawn20 = World->SpawnActor<APiece>(P20, pos[19], FRotator::ZeroRotator, SpawnParameters); Spawn20->SetGrid(this); Matrix.Add(Spawn20);
	APiece* Spawn21 = World->SpawnActor<APiece>(P21, pos[20], FRotator::ZeroRotator, SpawnParameters); Spawn21->SetGrid(this); Matrix.Add(Spawn21);
	APiece* Spawn22 = World->SpawnActor<APiece>(P22, pos[21], FRotator::ZeroRotator, SpawnParameters); Spawn22->SetGrid(this); Matrix.Add(Spawn22);
	APiece* Spawn23 = World->SpawnActor<APiece>(P23, pos[22], FRotator::ZeroRotator, SpawnParameters); Spawn23->SetGrid(this); Matrix.Add(Spawn23);
	APiece* Spawn24 = World->SpawnActor<APiece>(P24, pos[23], FRotator::ZeroRotator, SpawnParameters); Spawn24->SetGrid(this); Matrix.Add(Spawn24);
	APiece* Spawn25 = World->SpawnActor<APiece>(P25, pos[24], FRotator::ZeroRotator, SpawnParameters); Spawn25->SetGrid(this); Matrix.Add(Spawn25);

	
}

void AGrid::AddPiece(APiece * Piece)
{
	if (FirstPiece == nullptr) {
		FirstPiece = Piece;
		UE_LOG(LogTemp, Warning, TEXT("pegou primeira peca"));
	}
	else {
		SecondPiece = Piece;
		UE_LOG(LogTemp, Warning, TEXT("trocou com a segunda peca"));
		Swap();
	}
}

void AGrid::Swap()
{
	if (FirstPiece && SecondPiece) {
		FVector Pos1 = FirstPiece->GetActorLocation();
		FVector Pos2 = SecondPiece->GetActorLocation();
		int Index1 = Matrix.Find(FirstPiece);
		int Index2 = Matrix.Find(SecondPiece);
		FirstPiece->SetActorLocation(Pos2, false);
		SecondPiece->SetActorLocation(Pos1, false);
		Matrix[Index1] = SecondPiece;
		Matrix[Index2] = FirstPiece;
		FirstPiece = nullptr;
		SecondPiece = nullptr;
		CheckWin();
	}
}

void AGrid::CheckWin()
{
	for (int i = 0; i < 25; i++)
	{
		if (Matrix[i]->GetIndex() == i+1)
		{
			Acertos++;	
		}
	}
	if (Acertos == 25) {
		UE_LOG(LogTemp, Warning, TEXT("GANHOU!!!!!"));
	}
	UE_LOG(LogTemp, Warning, TEXT("%d"), Acertos);
	Acertos = 0;
}