#include "centaur.h"
#include "DistanceError.h"

Centaur::Centaur(): _rest_duration_01{ 2 }
{
	vehicle_name = "Кентавр";
	_speed = 15;
	_rest_distance_time = 8;
};

Centaur::~Centaur() = default;

std::string Centaur::get_name() 
{
	return vehicle_name;
}

double Centaur::calculate_time(int distance)
{
	if (distance <= 0)
	{
		throw DistanceError("Расстояние ниже нуля!");
		return 1;
	}

	double distance_time = static_cast<double>(distance) / _speed;
	int times_to_rest = distance_time / _rest_distance_time;
	int _length_rest_change = 0;
	race_result = distance_time;
	for (int i = 0; i < times_to_rest - _length_rest_change; i++)
		{
		race_result += _rest_duration_01;
		}
	
	return race_result;

};



