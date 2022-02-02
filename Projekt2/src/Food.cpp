//
// Created by mateu on 28.01.2022.
//

#include "../include/Food.h"

Food::Food(){}

Food::Food(std::string const &n, double const &size, std::string const &expiry_date){
    this -> name = n;
    this -> size = size;
    this -> expiry_date = expiry_date;
    //cout<<"Food:\n";
}

Food::~Food(){
    //cout<<"Food:\n";
}

std::string Food::get_expiry_date() const {
    return this -> expiry_date;
}

void Food::set_expiry_date(std::string const &expiry_date){
    this -> expiry_date = expiry_date;
}

void Food::print(std::string const separator) const {
    std::cout << name << separator << size << separator << expiry_date;
}

std::string Food::print_to_string(std::string const &separator){

    std::string tmp = this->expiry_date + separator +  std::to_string(this->size) + separator + this->name + separator + std::to_string(this->id);
    return tmp;
}

