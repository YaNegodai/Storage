#include "Appliances.h"

void Appliances::ShowSpec()
{
	std::cout << "Вес (в кг): " << _weight << "\n";
}

void Fridge::ShowSpec()
{
	std::cout << "Вес (в кг): " << _weight << "\n";
	std::cout << "Высота и ширина (в метрах): " << _height << "x" << _width << "\n";
}

void WashMachine::ShowSpec()
{
	std::cout << "Вес (в кг): " << _weight << "\n";
	std::cout << "Максимальная вместимость белья (в кг): " << _maxLoad << "\n";
}
