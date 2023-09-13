#pragma once 
#include <iostream>
#include <string>
#include "IElectronics.h"
#include "Appliances.h"


//Базовый класс
class Device : virtual public IElectronics
{
public:
	Device(short batteryLife) : _batteryLife(batteryLife){}
	virtual ~Device() = default;
    void ShowSpec() override;
	
protected:
	short _batteryLife;
};

//Дочерний класс от базового
class Phone final : public Device, Appliances
{
public:
    Phone(short batteryLife, std::string type, short weight) : Device(batteryLife), _type(type), Appliances(weight){}
    void ShowSpec() override;
private:
    std::string _type;
};


//Дочерний класс от базового
class Player final : public Device
{
public:
    Player(short batteryLife, short memory) : Device(batteryLife), _memory(memory) {}

    void ShowSpec() override;
private:
    short _memory;
};