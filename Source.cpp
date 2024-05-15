#include <iostream>
#include "Cars.h"
#include "Boats.h"
#include "Bikes.h"
 
int main () 
{
    Cars car1("Nissan", "Skyline GT-R", "Sports car");
    car1.displayCarInf();
    car1.start();
    car1.accelerate(50);
    car1.brake();
    car1.turn("left");
    while (car1.speed != 0) car1.brake();
    car1.stop();
    Bikes bike1("Yamaha", "R1M", true);
    bike1.displayBikeInfo();
    bike1.start();
    bike1.accelerate(30);
    bike1.stop();
    Boats boat("Yamaha", "Jet Boat", true);
    boat.displayBoatInf();
    boat.start();
    boat.accelerate(20);
    boat.stop();

    return 0;
    //changable later
}