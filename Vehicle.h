#pragma once
#include <string>
#include <vector>
#include <iostream>

class Vehicle
{
protected:
    std::string brand;
    std::string model;
    bool engineStarted;
public:
    int speed;
    Vehicle(std::string _brand, std::string _model) : brand(_brand), model(_model), speed(0), engineStarted(false) {}

    void start() 
    {
        engineStarted = true;
        std::cout << "The " << brand << " " << model << "'s engine has started.\n";
    }
    void stop() 
    {
        engineStarted = false;
        speed = 0;
        std::cout << "The " << brand << " " << model << "'s engine has stopped.\n";
    }
    void accelerate(int _speed) 
    {
        if (engineStarted) {
            speed += _speed;
            std::cout << "The " << brand << " " << model << " is accelerating. Current speed: " << speed << " km/h.\n";
        }
        else {
            std::cout << "Start the engine of " << brand << " " << model << " first.\n";
        }
    }
    void brake() 
    {
        if (speed > 0) {
            speed -= 10;
            std::cout << "The " << brand << " " << model << " is braking. Current speed: " << speed << " km/h.\n";
        }
        else {
            std::cout << "The " << brand << " " << model << " is already stationary.\n";
        }
    }
    void turn(std::string direction) {
        std::cout << "The " << brand << " " << model << " is turning " << direction << ".\n";
    }
};
 


