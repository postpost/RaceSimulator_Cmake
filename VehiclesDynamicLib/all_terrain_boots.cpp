#include "all_terrain_boots.h"
#include "DistanceError.h"

AllTerrainBoots::AllTerrainBoots(): _rest_duration_01{ 10 }, _rest_duration_02{5}
{
	vehicle_name = "Ботинки - вездеходы";
	_speed = 6;
	_rest_distance_time = 60;
};

AllTerrainBoots::~AllTerrainBoots() = default;

std::string AllTerrainBoots::get_name()
{
	return vehicle_name;
};
auto AllTerrainBoots::calculate_time(int distance)-> double
{
	if (distance <= 0)
	{
		throw DistanceError("Расстояние ниже нуля!");
		return 1;
	}

	double distance_time = static_cast<double>(distance)/ _speed;
	int times_to_rest = distance_time / _rest_distance_time;
	int _length_rest_change = 1;
	race_result = distance_time + _rest_duration_01;
	for (int i = 0; i < times_to_rest - _length_rest_change; i++)
		{
		race_result += _rest_duration_02;
		}
	
	return race_result;
};


