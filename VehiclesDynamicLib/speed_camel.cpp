#include "speed_camel.h"
#include "DistanceError.h"

SpeedCamel::SpeedCamel() : _rest_duration_01{ 5 }, _rest_duration_02{ 6.5 }, _rest_duration_03{ 8 }
{
	vehicle_name = "Верблюд-быстроход";
	_speed = 40;
	_rest_distance_time = 10;
}

SpeedCamel::~SpeedCamel() = default;

std::string SpeedCamel::get_name() 
{
	return vehicle_name;
}

double SpeedCamel::calculate_time(int distance)
{
	if (distance <= 0)
	{
		throw DistanceError("Расстояние ниже нуля!");
		return 1;
	}

	double distance_time = static_cast<double> (distance) / _speed;
	int times_to_rest = distance_time / _rest_distance_time;
	int _length_rest_change = 2;
	race_result = distance_time + _rest_duration_01 + _rest_duration_02;
			for (int i = 0; i < times_to_rest - _length_rest_change; i++)
		{
				race_result += _rest_duration_03;
		}
		
	return race_result;
};