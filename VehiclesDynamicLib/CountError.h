#pragma once
#include <iostream>
#include "vehicle.h"


class CountError :public std::exception
{
public:
	CALCULATESPEEDLIBRARY_API const char* what() const override;
};
