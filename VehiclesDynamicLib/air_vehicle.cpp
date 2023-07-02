#include "air_vehicle.h"

AirVehicle::AirVehicle() : _distance_reduce_coef{0}
{
	
};

AirVehicle::~AirVehicle() = default;

std::string AirVehicle::get_name() {
	return vehicle_name;
}

double AirVehicle::calculate_time(int distance) 
{
	return race_result;
};

