//
// Created by mateu on 15.11.2021.
//
#include "../include/Imaginary.h"

Imaginary::Imaginary() : i(0){};

Imaginary::Imaginary(double i) : i(i){};

//Vec
Imaginary Imaginary::operator+(const Imaginary &rhs) const{
    return i + rhs.i;
}

Imaginary &Imaginary::operator+=(const Imaginary &rhs){
    this->i = this->i + rhs.i;
    return *this;
}

Imaginary Imaginary::operator-(const Imaginary &rhs) const{
    return i - rhs.i;
}

Imaginary &Imaginary::operator-=(const Imaginary &rhs){
    this->i = this->i - rhs.i;
    return *this;
}

double Imaginary::operator*(const Imaginary &rhs) const{
    return -(this->i * rhs.i);
}

double Imaginary::operator/(const Imaginary &rhs) const{
    return this->i / rhs.i;
}

//logic

bool Imaginary::operator==(const Imaginary &rhs) const{
    if(this->i == rhs.i)
        return true;
    return false;
}

bool Imaginary::operator!=(const Imaginary &rhs) const{
    if(this->i == rhs.i)
        return false;
    return true;
}

//methods
void print(const Imaginary &rhs) {
    std::cout<<"sqrt(-"<<rhs.get_i()<< ")\n";
}

double Imaginary::get_i() const{
    return this->i;
}

std::ostream &operator<<(std::ostream &output, const Imaginary &i){
    output<<"sqrt(-"<<i.get_i()<< ")";
    return output;
}
