#pragma once
#include "ground_vehicle.h"
#include "vehicle.h"

class AllTerrainBoots final : public GroundVehicle
{
public:
	CALCULATESPEEDLIBRARY_API AllTerrainBoots();
	CALCULATESPEEDLIBRARY_API ~AllTerrainBoots();
	CALCULATESPEEDLIBRARY_API virtual auto get_name()->std::string final override;
	CALCULATESPEEDLIBRARY_API virtual auto calculate_time(int distance)->double final override;
protected:
	double _rest_duration_01;
	double _rest_duration_02;
};
