#include<iostream>
#include "motor.hpp"

// Constructor: 
Motor::Motor(const std::string &name) : name_(name), power_(0) {}

void Motor::setPower(int power) {
    power_ = power;
    std::cout << name_ << " power set to " << power_ << std::endl;
}

int Motor::getPower(void) {
    return power_;
}
