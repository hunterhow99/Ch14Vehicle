
//Hunter Howell
//Cis 1202
//11/25/22

#include <iostream>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Truck.cpp"

using namespace std;
int main()
{
    string manufacturer;
    int year;
    int numDoor;
    int cap;
    cout << "Vehicle program " << endl;

    cout << "\nVehicle\n";
    cout << "Enter the manufacturer:  ";
    getline(cin, manufacturer);

    cout << "Enter the year built: ";
    cin >> year;
    cin.ignore();

    Vehicle v(manufacturer, year);
    v.displayInfo();

    cout << "\nCar\n";
    cout << "Enter the manufacturer:  ";
    getline(cin, manufacturer);

    cout << "Enter the year built: ";
    cin >> year;
    cin.ignore();

    cout << "Enter the number of doors: ";
    cin >> numDoor;
    cin.ignore();

    Car c(manufacturer, year, numDoor);
    c.displayInfo();

    cout << "\nTruck\n";
    cout << "Enter the manufacturer:  ";
    getline(cin, manufacturer);

    cout << "Enter the year built: ";
    cin >> year;
    cin.ignore();

    cout << "Enter the towing capacity: ";
    cin >> cap;
    cin.ignore();

    Truck t(manufacturer, year, cap);
    t.displayInfo();

    cout << endl;
    return 0;
}
