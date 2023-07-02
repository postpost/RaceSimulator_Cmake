#include "print_race_results.h"
//#include "iostream"
//#include <algorithm>


void printRaceResults(std::vector <Vehicle*> vehicles, int distance)
{
	for (int i = 0; i < vehicles.size(); i++) {
		vehicles[i]->calculate_time(distance);
	}

	for (int i = 0; i < vehicles.size(); i++) {
		for (int j = 0; j < vehicles.size() - 1 -i; j++) {
			if (vehicles[j]->get_res() > vehicles[j + 1]->get_res()) {
				std::swap(vehicles[j], vehicles[j + 1]);
			}
		}
	}
	std::cout << "Результаты гонки:" << std::endl;
	for (int i = 0; i < vehicles.size(); i++) {
		std::cout << vehicles[i]->get_name()
			<< ". Время: "
			<< vehicles[i]->get_res() << std::endl;
	}
	
	
	
};