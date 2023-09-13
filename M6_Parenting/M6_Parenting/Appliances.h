#pragma once 
#include <iostream>
#include "IElectronics.h"

class Appliances : virtual public IElectronics
{
public:
    Appliances(short weight) : _weight(weight) {}
    virtual ~Appliances() = default;
    void ShowSpec() override;
protected:
    short _weight;
};

class Fridge final : public Appliances
{
public:
    Fridge(short weight, float height, float width) : Appliances(weight), _height(height), _width(width){}
    virtual ~Fridge() = default;
    void ShowSpec() override;
private:
    float _height, _width;
};

class WashMachine final : public Appliances
{
public:
    WashMachine(short weight, float maxLoad) : Appliances(weight), _maxLoad(maxLoad) {}
    virtual ~WashMachine() = default;
    void ShowSpec() override;
private:
    float _maxLoad;
};