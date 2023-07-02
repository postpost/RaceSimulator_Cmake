#include "print_choice.h"

void print_choice(int cmd, int distance) 
{
	switch (cmd) {
	case 1:std::cout << "Гонка для наземного транспорта. Расстояние: " << distance << std::endl;
		break;
	case 2: std::cout << "Гонка для воздушного транспорта. Расстояние: " << distance << std::endl;
		break;
	case 3:std::cout << "Гонка для наземного и воздушного транспорта. Расстояние: " << distance << std::endl;
		break;
	default: std::cout << "Выбран неверный тип гонки!";
	}
};