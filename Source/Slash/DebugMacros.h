#pragma once

#include "DrawDebugHelpers.h"

#define DRAW_SPHERE(LOCATION) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 12, FColor::Emerald, false, 60.f)
#define DRAW_VECTOR(StartLocation, EndLocation) if (GetWorld()) \
	{ \
		DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 1.f); \
		DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Red, true); \
	}

