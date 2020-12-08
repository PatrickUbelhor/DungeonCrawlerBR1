// Fill out your copyright notice in the Description page of Project Settings.


#include "MockZombie.h"

// Sets default values
AMockZombie::AMockZombie()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMockZombie::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMockZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

