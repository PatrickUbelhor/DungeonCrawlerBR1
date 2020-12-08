// Fill out your copyright notice in the Description page of Project Settings.


#include "DungeonPlayer.h"

// Sets default values
ADungeonPlayer::ADungeonPlayer() {
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Bind camera to player's capsule component
	DungeonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	check(DungeonCameraComponent != nullptr);
	DungeonCameraComponent->SetupAttachment(CastChecked<USceneComponent, UCapsuleComponent>(GetCapsuleComponent()));
	DungeonCameraComponent->SetRelativeLocation(FVector(-400.0f, -0.0f, 750.0f));
	DungeonCameraComponent->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
}

// Called when the game starts or when spawned
void ADungeonPlayer::BeginPlay() {
	Super::BeginPlay();
}

// Called every frame
void ADungeonPlayer::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ADungeonPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ADungeonPlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ADungeonPlayer::MoveRight);
}

void ADungeonPlayer::MoveForward(float Value) {
	AddMovementInput(FVector::ForwardVector, Value);
}

void ADungeonPlayer::MoveRight(float Value) {
	AddMovementInput(FVector::RightVector, Value);
}
