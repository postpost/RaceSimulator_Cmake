#pragma once
#include "air_vehicle.h"
#include "vehicle.h"

class Eagle :public AirVehicle 
{
public:
	CALCULATESPEEDLIBRARY_API Eagle();
	CALCULATESPEEDLIBRARY_API ~Eagle();
	CALCULATESPEEDLIBRARY_API auto calculate_time(int distance) -> double final override;
	CALCULATESPEEDLIBRARY_API auto get_name() -> std::string final override;
};