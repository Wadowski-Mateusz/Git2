//
// Created by mateu on 29.01.2022.
//

#include "../include/Drink.h"

Drink::Drink(std::string const &name, double const &size, std::string const expiry_date, double const volume) {
    this->name = name;
    this->size = size;
    this->expiry_date = expiry_date;
    this->volume = volume;
}

Drink::~Drink() {

}

double Drink::get_volume() const {
    return this->volume;
}

void Drink::set_volume(double const &volume) {
    this->volume = volume;
}

void Drink::print(std::string const separator) const {
    std::cout << name << separator << size << separator << expiry_date << separator << volume;
}

std::string Drink::print_to_string(std::string const &separator){
    std::string tmp = std::to_string(this->volume) + separator + this->expiry_date + separator +  std::to_string(this->size) + separator + this->name + separator + std::to_string(this->id);
    return tmp;
}
