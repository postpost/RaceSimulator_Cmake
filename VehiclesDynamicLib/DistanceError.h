#pragma once
#include <iostream>
#include "vehicle.h"

class DistanceError :public std::exception 
{
public:
	CALCULATESPEEDLIBRARY_API DistanceError(const char* msg);
};