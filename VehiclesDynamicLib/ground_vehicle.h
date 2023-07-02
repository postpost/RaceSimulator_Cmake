#pragma once
#include "vehicle.h"


class GroundVehicle:public Vehicle {
public:
	CALCULATESPEEDLIBRARY_API GroundVehicle();
	CALCULATESPEEDLIBRARY_API ~GroundVehicle();
	CALCULATESPEEDLIBRARY_API virtual auto get_name() -> std::string override;
	CALCULATESPEEDLIBRARY_API virtual auto calculate_time(int distance)->double override;
	
protected:
	int _speed;
	int _rest_distance_time;
};
