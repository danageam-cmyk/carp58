#include "intro.h"
#include "vehicle.h"
#include <iostream>
#include <vector>

void intro() {
    car_t car("Toyota", "Corolla", 1500, 5);
    suv_t suv("BMW", "X5", 3000, true);
    truck_t truck("MAN", "TGX", 4000, 10);

    std::vector<vehicle_t*> vehicles = {
        &car, &suv, &truck
    };

    std::cout << "=== CAR RENTAL ===\n\n";

    for (std::size_t i = 0; i < vehicles.size(); ++i) {
        std::cout << vehicles[i]->to_string() << '\n';
        std::cout << "Price for 3 days: "
            << vehicles[i]->calculate_price(3)
            << " UAH\n\n";
    }
}