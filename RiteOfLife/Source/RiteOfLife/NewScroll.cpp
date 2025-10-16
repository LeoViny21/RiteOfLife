// Fill out your copyright notice in the Description page of Project Settings.


#include "NewScroll.h"

// Sets default values
ANewScroll::ANewScroll()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UPROPERTY(EDitAnywhere, Interp)
	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(Text("My Good Mesh"));


}

// Called when the game starts or when spawned
void ANewScroll::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANewScroll::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

