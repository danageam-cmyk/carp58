#include "vehicle.h"

vehicle_t::vehicle_t(std::string brand, int year, double price)
    : brand(brand), year(year), price(price) {
}

std::string vehicle_t::to_string() const {
    return "Vehicle: " + brand +
        ", year: " + std::to_string(year) +
        ", price: " + std::to_string(price);
}

car_t::car_t(std::string brand, int year, double price)
    : vehicle_t(brand, year, price) {
}

std::string car_t::to_string() const {
    return "Car: " + brand +
        ", year: " + std::to_string(year) +
        ", price: " + std::to_string(price);
}

suv_t::suv_t(std::string brand, int year, double price)
    : vehicle_t(brand, year, price) {
}

std::string suv_t::to_string() const {
    return "SUV: " + brand +
        ", year: " + std::to_string(year) +
        ", price: " + std::to_string(price);
}

truck_t::truck_t(std::string brand, int year, double price)
    : vehicle_t(brand, year, price) {
}

std::string truck_t::to_string() const {
    return "Truck: " + brand +
        ", year: " + std::to_string(year) +
        ", price: " + std::to_string(price);
}

