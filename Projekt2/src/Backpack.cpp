//
// Created by mateu on 28.01.2022.
//

#include "../include/Backpack.h"


Backpack::Backpack(double const &max_size) {
    this->max_size = max_size;
    this->current_size = 0;
}

Backpack::~Backpack() {
    //cout<<"destruktor plecaka\n";
}

void Backpack::print(std::string const separator1, std::string const separator2) const {

    Node<Item> *tmp = this->head;

    while (tmp != nullptr) {
        tmp->get_t()->print(separator2);
        std::cout << separator1;
        tmp = tmp->get_next();
    }
}

void Backpack::print_enum(std::string const separator) const {
    //cout<<"Backpack:\t";
    Node<Item> *tmp = this->head;
    int i = 1;
    while (tmp != nullptr) {
        std::cout << i << ": ";
        tmp->get_t()->print(separator);
        std::cout << "\n";
        tmp = tmp->get_next();
        i++;
    }
}


void Backpack::print(int const no, std::string const separator) const {
    int i = 1;
    Node<Item> *tmp = this->head;
    while (i != no && tmp != nullptr) {
        tmp = tmp->get_next();
        i++;
    }
    //try catch
    if (tmp != nullptr)
        tmp->get_t()->print(separator);
    else
        std::cout << "ERROR! NULLPTR";
    std::cout << std::endl;
}




double Backpack::get_current_size() const{
    return this -> current_size;
}
double Backpack::get_max_size() const{
    return this -> max_size;
}

Item* Backpack::get_item(int const &no) {
    Node<Item>* tmp = this -> head;
    for(int i = 1; i < no; i++){
        if(tmp == nullptr)
            return nullptr;
        tmp = tmp -> get_next();
    }
    return tmp -> get_t();
}

void Backpack::set_max_size(double const &max_size){
    this -> max_size = max_size;
}


void Backpack::push(Node<Item>* item) {

    if (this->current_size + item->get_t()->get_size() <= this->max_size) {
        current_size += item->get_t()->get_size();
        this->List<class Item>::push(item);
    } else
        delete item;
}

void Backpack::push(Item* const item) {

    if (this->current_size + item->get_size() <= this->max_size) {
        this->current_size += item->get_size();
        this->List<class Item>::push(item);
    } else {
        std::cout<<"przedmiot nie miesci sie"<<std::endl;
        delete item;
    }
}



Item* Backpack::pop(){
    if(this -> head != nullptr) {
        this->current_size -= this->head->get_t()->get_size();
        return this->List<Item>::pop();
    }
    return nullptr;
}

void Backpack::delete_head(){
    if(this -> head != nullptr)
        this -> current_size -= this -> head -> get_t() -> get_size();
    this -> List<Item>::delete_head();
}

void Backpack::clean(){
    this -> current_size = 0;
    this -> List<Item>::clean();
}

void Backpack::operator+(Item *rhs){
      Node<Item>* tmp = new Node<Item>(rhs, this -> head);
      this -> head = tmp;
}

void Backpack::operator+(Node<Item> *rhs){
    this->push(rhs);
}


void Backpack::operator-(Item* const rhs){

    if(this -> head == nullptr)
        return;

    Node<Item>* tmp = this -> head;
    if(tmp -> get_t() == rhs){
        this -> head = this -> head -> get_next();
        delete tmp;
        return;
    }

    Node<Item>* tmp_prev = tmp;
    tmp = tmp -> get_next();

    while (tmp != nullptr){

        if(tmp -> get_t() == rhs){
            tmp_prev -> set_next(tmp -> get_next());
            delete tmp;
            return;
        }

       tmp_prev = tmp;
       tmp = tmp-> get_next();
    }

    return;
}

