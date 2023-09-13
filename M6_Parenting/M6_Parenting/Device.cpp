#include "Device.h"

void Device::ShowSpec()
{
	std::cout << "Время работы аккумулятора (в часах): " << _batteryLife << "\n";
}

void Player::ShowSpec() 
{
    std::cout << "Время работы аккумулятора (в часах): " << _batteryLife << "\n";
    std::cout << "Объем памяти (в Гб): " << _memory << "\n";
}

void Phone::ShowSpec()
{
	std::cout << "Время работы аккумулятора (в часах): " << _batteryLife << "\n";
	std::cout << "Тип телефона: " << _type << "\n";
	std::cout << "Вес телефона (в граммах): " << _weight << "\n";
}
