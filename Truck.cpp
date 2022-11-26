#ifndef TRUCK_CPP
#define TRUCK_CPP
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>

using namespace std;

Truck::Truck(string m, int y, int t) : towingCapacity(t), Vehicle(m, y)
{
}
//getters and setters
int Truck::getTowingCapacity()
{
    return towingCapacity;
}
void Truck::setTowingCapacity(int t)
{
    this->towingCapacity = t;
}

void Truck::displayInfo()
{
    Vehicle::displayInfo();
    cout << "Towing capacity:   " << towingCapacity << endl;
}
#endif
