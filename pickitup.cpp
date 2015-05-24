// Mark Hall - Following tutorial series in this sandbox UE4.

#include "ThirdPersonTutorial.h"
#include "pickitup.h"


// Sets default values
Apickitup::Apickitup(const FObjectInitializer &ObjectInitializer)
	: Super(ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// set it to active in the beginning.
	bIsActive = true;

	// Set the base collision component up m'howdy.
	BaseCollisionComponent = ObjectInitializer.CreateDefaultSubobject<USphereComponent>(this, TEXT("Base Sphere Component"));

	// Make the root like the base component.
	RootComponent = BaseCollisionComponent;

	// setup the pickup mesh I suppose.
	PickupMesh = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("Pickup Mesh"));

	// Initialize Physics!
	PickupMesh->SetSimulatePhysics(true);

	// Attach static mesh to the root component.
	PickupMesh->AttachTo(RootComponent);


}

// Called when the game starts or when spawned
void Apickitup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Apickitup::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void Apickitup::onPickedUp()
{
	// Nothing for now

}

