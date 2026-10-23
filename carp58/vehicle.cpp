#include "vehicle.h"

vehicle_t::vehicle_t(std::string brand, std::string model, double price)
    : brand(brand), model(model), price(price) {
}

std::string vehicle_t::get_brand() const {
    return brand;
}

std::string vehicle_t::get_model() const {
    return model;
}

double vehicle_t::get_price() const {
    return price;
}

std::string vehicle_t::to_string() const {
    return brand + " " + model +
        ", price per day: " + std::to_string(price);
}

vehicle_t::~vehicle_t() {
}

car_t::car_t(std::string brand, std::string model,
    double price, int seats)
    : vehicle_t(brand, model, price), seats(seats) {
}

double car_t::calculate_price(int days) const {
    return price * days;
}

std::string car_t::to_string() const {
    return "Car: " + vehicle_t::to_string() +
        ", seats: " + std::to_string(seats);
}

suv_t::suv_t(std::string brand, std::string model,
    double price, bool four_wheel_drive)
    : vehicle_t(brand, model, price),
    four_wheel_drive(four_wheel_drive) {
}

double suv_t::calculate_price(int days) const {
    return (price + (four_wheel_drive ? 200 : 0)) * days;
}

std::string suv_t::to_string() const {
    return "SUV: " + vehicle_t::to_string() +
        ", 4WD: " + std::string(four_wheel_drive ? "yes" : "no");
}

truck_t::truck_t(std::string brand, std::string model,
    double price, double capacity)
    : vehicle_t(brand, model, price), capacity(capacity) {
}

double truck_t::calculate_price(int days) const {
    return (price + 300) * days;
}

std::string truck_t::to_string() const {
    return "Truck: " + vehicle_t::to_string() +
        ", capacity: " + std::to_string(capacity) + " tons";
}