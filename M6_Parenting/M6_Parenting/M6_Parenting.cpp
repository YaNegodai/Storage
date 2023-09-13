#include <iostream>
#include "Device.h"
#include "Appliances.h"
#include "IElectronics.h"


int main()
{
    setlocale(LC_ALL, "");
    IElectronics* storage[4];

    storage[0] = new Player(20, 50);
    storage[1] = new Phone(8, "iPhone", 300);
    storage[2] = new Fridge(60, 2, 1);
    storage[3] = new WashMachine(40, 4);

    bool open = true;
    while (open)
    {
        std::cout << "Выберите технику: 1 - Плеер, 2 - Телефон, 3 - Холодильник, 4 - Стиральная машина, 0 для выхода" << "\n";
        int choice;
        std::cin >> choice;
        
        switch (choice)
        {
        case 1:
            storage[0]->ShowSpec();
            break;
        case 2:
            storage[1]->ShowSpec();
            break;
        case 3:
            storage[2]->ShowSpec();
            break;
        case 4:
            storage[3]->ShowSpec();
            break;
        case 0:
            open = false;
            break;
        default:
            std::cout << "Выберите технику от 1 до 4 или 0 для выхода" << "\n";
            break;
        }
    }

    delete storage[0];
    delete storage[1];
    delete storage[2];
    delete storage[3];
    return 0;
}
