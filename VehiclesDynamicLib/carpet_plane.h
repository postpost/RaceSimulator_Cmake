#pragma once
#include "air_vehicle.h"
#include "ground_vehicle.h"
#include "vehicle.h"


class CarpetPlane :public AirVehicle 
{
public:
	CALCULATESPEEDLIBRARY_API CarpetPlane();
	CALCULATESPEEDLIBRARY_API ~CarpetPlane();
	CALCULATESPEEDLIBRARY_API auto calculate_time(int distance) -> double final override;
	CALCULATESPEEDLIBRARY_API auto get_name() -> std::string final override;
};
