// Copyright sf5gaming.asia

#include "AbilitySystem/Abilities/AuraSummonAbility.h"

#include "Aura/Aura.h"
#include "Kismet/KismetSystemLibrary.h"

TArray<FVector> UAuraSummonAbility::GetSpawnLocations()
{
	const FVector Forward = GetAvatarActorFromActorInfo()->GetActorForwardVector();
	const FVector Location = GetAvatarActorFromActorInfo()->GetActorLocation();
	const float DeltaSpread = SpawnSpread / NumMinions;
	const FVector RightOfSpread = Forward.RotateAngleAxis(SpawnSpread / 2.f, FVector::UpVector);



	TArray<FVector> SpawnLocations;

	for (int32 i = 0; i < NumMinions; ++i)
	{
		const FVector Direction = RightOfSpread.
			RotateAngleAxis(-(DeltaSpread * i + DeltaSpread / 2), FVector::UpVector);

		FVector ChosenSpawnLocation = Location + Direction * FMath::RandRange(MinSpawnDistance, MaxSpawnDistance);

		UKismetSystemLibrary::DrawDebugArrow(GetAvatarActorFromActorInfo(),
		                                     Location,
		                                     Location + Direction * MaxSpawnDistance,
		                                     8.f,
		                                     FLinearColor::Yellow,
		                                     1.f);


		FHitResult Hit;
		GetWorld()->LineTraceSingleByChannel(Hit, ChosenSpawnLocation + FVector(0.f, 0.f, 400.f),
		                                     ChosenSpawnLocation + FVector(0.f, 0.f, -400.f),
		                                     ECC_Visibility);

		if (Hit.bBlockingHit)
			ChosenSpawnLocation = Hit.ImpactPoint;

		SpawnLocations.Add(ChosenSpawnLocation);
	}

	const FVector LeftOfSpread = Forward.RotateAngleAxis(-SpawnSpread / 2.f, FVector::UpVector);
	return SpawnLocations;
}

TSubclassOf<APawn> UAuraSummonAbility::GetRandomMinionClass()
{
	const int32 Selection = FMath::RandRange(0, MinionClasses.Num()-1);
	return MinionClasses[Selection];
}
