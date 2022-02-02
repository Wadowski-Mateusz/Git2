//
// Created by mateu on 28.01.2022.
//

#include "../include/Other.h"

Other::Other(std::string name, int const &value, double const size) : value(value) {
    this->size = size;
    this->name = name;
    //std::cout<<"Other:\n";
}


Other::~Other() {
    //std::cout<<"Other:\n";
}

int Other::get_value() const {
    return this->value;
}

void Other::set_value(int const &value) {
    this->value = value;
}


void Other::print(std::string const separator) const {
    std::cout << name << separator<< value << separator << size;
}

std::string Other::print_to_string(std::string const &separator){
    std::string tmp = std::to_string(this->value) + separator +  std::to_string(this->size) + separator + this->name + separator + std::to_string(this->id);
    return tmp;
}
