#pragma once
#include "Vehicle.h"

/*class CarType {
public:
    std::string name;
    int maxSpeed;
    double fuelEfficiency;
    
};

class Cars : public Vehicle {
public:
    CarType type;
    
}; */

class Cars : public Vehicle {
private:
    std::string carType;

public:
    Cars(std::string _brand, std::string _model, std::string _carType) : Vehicle(_brand, _model), carType(_carType) {}

    void displayCarInf() {
        std::cout << "This is a " << carType << " car: " << brand << " " << model << "\n";
    }
};

