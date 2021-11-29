//
// Created by mateu on 21.11.2021.
//

#ifndef __IMAGINARY_H__
#define __IMAGINARY_H__

#include <iostream>
#include <cstdio>
#include <math.h>

class Imaginary{
private:
    double i;   // sqrt(-1)*x

public:
    Imaginary();
    Imaginary(double i);

//Vec
    Imaginary operator+(const Imaginary &rhs) const;
    Imaginary &operator+=(const Imaginary &rhs);

    Imaginary operator-(const Imaginary &rhs) const;
    Imaginary &operator-=(const Imaginary &rhs);

    double operator*(const Imaginary &rhs) const;

    double operator/(const Imaginary &rhs) const;

//logic

    bool operator==(const Imaginary& rhs) const;
    bool operator!=(const Imaginary& rhs) const;

//methods
    friend void print(const Imaginary &rhs);
    double get_i() const;
};
std::ostream & operator<<(std::ostream& output, const Imaginary &v);



#endif //__IMAGINARY_H__