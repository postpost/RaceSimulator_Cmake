#include "vehicle.h"

Vehicle::Vehicle() : vehicle_name{ " " }, race_result{0}
{

};

Vehicle::~Vehicle() = default;


auto Vehicle::get_name()-> std::string {
	return vehicle_name;
};

auto Vehicle::calculate_time(int distance) ->double 
{
	return 0;
}

double Vehicle::get_res() 
{
	return race_result;
};
