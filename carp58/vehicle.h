#pragma once
#include <string>

class vehicle_t {
protected:
    std::string brand;
    int year;
    double price;

public:
    vehicle_t(std::string brand, int year, double price);
    virtual ~vehicle_t() = default;

    virtual std::string to_string() const;
};

class car_t : public vehicle_t {
public:
    car_t(std::string brand, int year, double price);
    std::string to_string() const override;
};

class suv_t : public vehicle_t {
public:
    suv_t(std::string brand, int year, double price);
    std::string to_string() const override;
};

class truck_t : public vehicle_t {
public:
    truck_t(std::string brand, int year, double price);
    std::string to_string() const override;
};
