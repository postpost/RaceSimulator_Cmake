#pragma once
#include "vehicle.h"

class AirVehicle : public Vehicle {
public:
	CALCULATESPEEDLIBRARY_API AirVehicle();
	CALCULATESPEEDLIBRARY_API ~AirVehicle();
	CALCULATESPEEDLIBRARY_API auto get_name() -> std::string override;
	CALCULATESPEEDLIBRARY_API auto calculate_time(int distance) -> double override;

protected:
	int _speed;
	double _distance_reduce_coef;
};

