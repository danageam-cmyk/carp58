#pragma once
#include <string>

class vehicle_t {
protected:
    std::string brand;
    std::string model;
    double price;

public:
    vehicle_t(std::string, std::string, double);

    std::string get_brand() const;
    std::string get_model() const;
    double get_price() const;

    virtual double calculate_price(int days) const = 0;
    virtual std::string to_string() const;

    virtual ~vehicle_t();
};

class car_t : public vehicle_t {
private:
    int seats;

public:
    car_t(std::string, std::string, double, int);

    double calculate_price(int days) const override;
    std::string to_string() const override;
};

class suv_t : public vehicle_t {
private:
    bool four_wheel_drive;

public:
    suv_t(std::string, std::string, double, bool);

    double calculate_price(int days) const override;
    std::string to_string() const override;
};

class truck_t : public vehicle_t {
private:
    double capacity;

public:
    truck_t(std::string, std::string, double, double);

    double calculate_price(int days) const override;
    std::string to_string() const override;
};