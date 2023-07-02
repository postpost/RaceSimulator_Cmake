#include "check_distance.h"
#include "DistanceError.h"

void checkDistance(int distance) 
{
	if (distance <= 0) throw  DistanceError("Расстояние меньше нуля!");
};