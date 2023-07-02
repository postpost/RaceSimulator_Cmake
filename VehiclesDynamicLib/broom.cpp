#include "broom.h"
#include "DistanceError.h"
#include <cassert>

Broom::Broom()
{
	vehicle_name = "Метла";
	_speed = 20;
};

Broom:: ~Broom() = default;

std::string Broom::get_name() 
{
	return vehicle_name;
}

double Broom:: calculate_time(int distance)
{
	_distance_reduce_coef = 0;
	
	if (distance <= 0)
	{
		throw DistanceError("Расстояние ниже нуля!");
	}

	for (size_t i = 1000; i <= distance; i+=1000)
	{
		
		_distance_reduce_coef += 1;
	}

	race_result = (static_cast<double>(distance) * ((100 - _distance_reduce_coef) / 100)) /_speed;
	return race_result;
};