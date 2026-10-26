#
#include <iostream>
#include "vehicle.h"
#include "intro.h"

void intro() {
    car_t car("BMW", 2022, 25000);
    suv_t suv("Toyota", 2023, 35000);
    truck_t truck("Volvo", 2021, 50000);

    vehicle_t* vehicles[] = {
        &car,
        &suv,
        &truck
    };

    int size = sizeof(vehicles) / sizeof(vehicles[0]);

    for (int i = 0; i < size; i++) {
        std::cout << vehicles[i]->to_string() << std::endl;
    }
}
