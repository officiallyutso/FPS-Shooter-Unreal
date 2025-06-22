#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FirstPersonCharacter.generated.h"

UCLASS()
class YOURGAME_API AFirstPersonCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    AFirstPersonCharacter();

protected:
    virtual void BeginPlay() override;

    // Movement handlers
    void MoveForward(float Value);
    void MoveRight(float Value);
    void LookUp(float Value);
    void Turn(float Value);
    void StartJump();
    void StopJump();

public:
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
    // Camera
    UPROPERTY(VisibleAnywhere)
    class UCameraComponent* FirstPersonCamera;

    // Arms mesh (1st person)
    UPROPERTY(VisibleDefaultsOnly)
    class USkeletalMeshComponent* Mesh1P;
};
