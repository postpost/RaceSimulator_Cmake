#pragma once
#include "ground_vehicle.h"
#include "vehicle.h"

class Centaur final :public GroundVehicle 
{
public:
	CALCULATESPEEDLIBRARY_API Centaur();
	CALCULATESPEEDLIBRARY_API ~Centaur();
	CALCULATESPEEDLIBRARY_API auto calculate_time(int distance) -> double final override;
	CALCULATESPEEDLIBRARY_API auto get_name() -> std::string final override;
protected:
	double _rest_duration_01;
};
