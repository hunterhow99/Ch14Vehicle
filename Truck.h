#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
#include <iostream>

using namespace std;

class Truck : public Vehicle
{
private:
    int towingCapacity;

public:
    Truck(string manufacturer, int yearBuilt, int towing_capacity);
    //getters and setters
    int getTowingCapacity();
    void setTowingCapacity(int numDoors);

    void displayInfo();
};

#endif
