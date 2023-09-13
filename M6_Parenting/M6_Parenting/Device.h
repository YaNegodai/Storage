#pragma once 
#include <iostream>
#include <string>
#include "IElectronics.h"
#include "Appliances.h"


//������� �����
class Device : virtual public IElectronics
{
public:
	Device(short batteryLife) : _batteryLife(batteryLife){}
	virtual ~Device() = default;
    void ShowSpec() override;
	
protected:
	short _batteryLife;
};

//�������� ����� �� ��������
class Phone final : public Device, Appliances
{
public:
    Phone(short batteryLife, std::string type, short weight) : Device(batteryLife), _type(type), Appliances(weight){}
    void ShowSpec() override;
private:
    std::string _type;
};


//�������� ����� �� ��������
class Player final : public Device
{
public:
    Player(short batteryLife, short memory) : Device(batteryLife), _memory(memory) {}

    void ShowSpec() override;
private:
    short _memory;
};