#include "print_registrated.h"

void print_registrated(std::vector <Vehicle*> &VC)
{
	std::cout << "«арегистрированные транспортные средства: ";//<< VC[0]->get_name();
	for (int i = 0; i < VC.size(); i++) {
		if (i == 0) 
		{
			std::cout << VC[i]->get_name();
		}
		else 
		{
			std::cout << ", " << VC[i]->get_name();
		}
		
	}
	std::cout << std::endl;
};
