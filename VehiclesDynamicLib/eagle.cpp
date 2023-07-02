#include "eagle.h"
#include "DistanceError.h"

Eagle::Eagle()
{
	vehicle_name = "Орёл";
	_speed = 8;
	_distance_reduce_coef = 6;
};

Eagle::~Eagle() = default;

std::string Eagle::get_name()
{
	return vehicle_name;
}

double Eagle::calculate_time(int distance)
{
	if (distance <= 0)
	{
		throw DistanceError("Расстояние ниже нуля!");
	}
	race_result = (static_cast<double>(distance) * ((100 -_distance_reduce_coef) / 100))/_speed;
	return race_result;
};