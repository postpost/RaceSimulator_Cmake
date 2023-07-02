#include "check_unique.h"

bool check_unique(std::vector <Vehicle*> &vehicles, Vehicle* vc)
{
	for (int i = 0; i < vehicles.size(); i++) {
		if (vehicles[i]->get_name() != vc->get_name()) {
			continue;
		}
		else { 
			std::cout << vehicles[i]->get_name() << " уже зарегистрирован!" << std::endl;
			return false;}
	}
	//vehicles.push_back(vc);
	return true;
};