// Mark Hall - Following tutorial series in this sandbox UE4.

#pragma once

#include "GameFramework/Actor.h"
#include "pickitup.generated.h"

UCLASS()
class THIRDPERSONTUTORIAL_API Apickitup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Apickitup(const FObjectInitializer &ObjectInitializer);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Is this bool able to be picked up?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = Pickup)
	bool bIsActive;

	// Sphere that everything attaches to.
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, category = Pickup)
	TSubobjectPtr<USphereComponent> BaseCollisionComponent;

	// Static Mesh Property
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, category = Pickup)
	TSubobjectPtr<UStaticMeshComponent> PickupMesh;

	// When pickup is picked up, call this function.
	UFUNCTION(BlueprintNativeEvent)
	void onPickedUp();
};
