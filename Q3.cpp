#include <iostream>
#include <string>
#include <stdbool.h>

class Vehicle
{
    std::string vehicleType;
    std::string registrationNumber;
    bool rented;

public:
    Vehicle(std::string type, std::string number)
    {
        vehicleType = type;
        registrationNumber = number;
        rented = false;
    }

    void rentVehicle()
    {
        rented = true;
        std::cout << "Vehicle " << registrationNumber << " is now rented.\n\n";
    }

    void returnVehicle()
    {
        rented = false;
        std::cout << "Vehicle " << registrationNumber << " is now returned.\n\n";
    }

    void displayInfo()
    {
        std::cout << "Vehicle Type: " << vehicleType << "\nRegistration number: " << registrationNumber << "\nRental status: ";
        if (rented)
        {
            std::cout << "Rented\n\n";
        }
        else
        {
            std::cout << "Not rented\n\n";
        }
    }
};

int main()
{

    Vehicle Bike("Bike", "1");
    Vehicle Car("Car", "2");
    Vehicle Truck("Truck", "3");

    Bike.rentVehicle();

    Bike.displayInfo();

    Bike.returnVehicle();

    Bike.displayInfo();

    return 0;
}