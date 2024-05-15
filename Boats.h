#pragma once
#include "Vehicle.h"
class Boats : public Vehicle {
private:
    bool hasSail;
public:
    Boats(std::string _brand, std::string _model, bool _hasSail) : Vehicle(_brand, _model), hasSail(_hasSail) {}

    void displayBoatInf() {
        if (hasSail) {
            std::cout << "This boat has a sail: " << brand << " " << model << "\n";
        }
        else {
            std::cout << "This boat doesn't have a sail: " << brand << " " << model << "\n";
        }
    }
};
