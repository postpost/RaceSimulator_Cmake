#include "ground_vehicle.h"
#include "vehicle.h"
#include "check_unique.h"
#include "print_race_results.h"
#include "print_registrated.h"

GroundVehicle::GroundVehicle() : _speed{ 0 }, _rest_distance_time{0}
{
};

GroundVehicle::~GroundVehicle() = default;

auto GroundVehicle::get_name()-> std::string {
	return vehicle_name;
};

auto GroundVehicle::calculate_time(int distance) ->double
{
	return 0;
}



