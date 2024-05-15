#pragma once

#include "Vehicle.h"

class Bikes : public Vehicle {
private:
    bool engine;
public:
    Bikes(std::string _brand, std::string _model, bool _engine) : Vehicle(_brand, _model), engine(_engine) {}
    void displayBikeInfo() {
        if (engine) {
            std::cout << "This bike has an engine: " << brand << " " << model << "\n";
        }
        else {
            std::cout << "This bike has no engine (you have to use own legs): " << brand << " " << model << "\n";
        }
    }
};

