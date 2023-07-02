#pragma once
#include <iostream>
#ifdef CALCULATESPEEDLIBRARYDYNAMIC_EXPORTS
#define CALCULATESPEEDLIBRARY_API __declspec(dllexport)
#else
#define CALCULATESPEEDLIBRARY_API __declspec(dllimport)
#endif //CALCULATESPEEDLIBRARYDYNAMIC_EXPORTS

class Vehicle {
protected:
	std::string vehicle_name;
	double race_result;
public:
	CALCULATESPEEDLIBRARY_API Vehicle();
	CALCULATESPEEDLIBRARY_API ~Vehicle();
	CALCULATESPEEDLIBRARY_API virtual auto get_name() -> std::string = NULL;
	CALCULATESPEEDLIBRARY_API virtual auto calculate_time(int distance)-> double = 0;
	CALCULATESPEEDLIBRARY_API double get_res();
	//CALCULATESPEEDLIBRARY_API void printRaceResults(const int size, int distance);

};
