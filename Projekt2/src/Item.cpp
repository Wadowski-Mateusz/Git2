//
// Created by mateu on 28.01.2022.
//
#include "../include/Item.h"

Item::Item(){
    //std::cout<<"Item\n";
    allo++;
}

//if not virtual ~, then only this ~ will be called for successors classes
Item::~Item(){
    //std::cout<<"~Item\n";
    allo--;
};

std::string Item::get_name() const{
    return name;
}
double Item::get_size() const{
    return size;
}

int Item::get_id() const{
    return id;
}

void Item::set_name(std::string const &name){
    this->name = name;
}
void Item::set_size(double const &size){
    this -> size = size;
}
