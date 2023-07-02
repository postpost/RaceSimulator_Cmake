#include "camel.h"
#include "DistanceError.h"

Camel::Camel(): _rest_duration_01{ 5 }, _rest_duration_02{ 8 }
{
	vehicle_name = "Верблюд";
	_speed = 10;
	_rest_distance_time = 30;
	
};

Camel::~Camel() = default;

std::string Camel::get_name() 
{
	return vehicle_name;
}

double Camel::calculate_time(int distance) 
{
	if (distance <= 0)
	{
		throw DistanceError("Расстояние ниже нуля!");
		return 1;
	}

	double distance_time = static_cast<double>(distance) / _speed;
	int times_to_rest = distance_time / _rest_distance_time;
	int _length_rest_change = 1;
	race_result = distance_time+ _rest_duration_01;
	for (int i = 0; i < times_to_rest - _length_rest_change; i++)
		{
		race_result += _rest_duration_02;
		}
	return race_result;
};
