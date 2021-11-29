//
// Created by mateu on 08.11.2021.
//

#ifndef __VECTOR_H__
#define __VECTOR_H__

#include <iostream>
#include <cstdio>
#include <math.h>

class Vector{
private:
    double x, y;

public:
    Vector();
    Vector(double x, double y);

//Vec
    Vector operator+(const Vector &rhs) const;
    Vector &operator+=(const Vector &rhs);

    Vector operator-(const Vector &rhs) const;
    Vector &operator-=(const Vector &rhs);

    double operator*(const Vector &rhs) const;

    double operator/(const Vector &rhs) const;

//Const
    Vector operator+(const double rhs);
    friend Vector operator+(const double lhs, const Vector& rhs);
    Vector &operator+=(const double rhs);

    Vector operator-(const double rhs);
    friend Vector operator-(const double lhs, const Vector& rhs);
    Vector &operator-=(const double rhs);

    Vector operator*(const double rhs);
    friend Vector operator*(const double lhs, const Vector& rhs);
    Vector &operator*=(const double rhs);

    Vector operator/(const double rhs);
    friend Vector operator/(const double lhs, const Vector& rhs);
    Vector &operator/=(const double rhs);

//logic

    bool operator==(const Vector& rhs) const;
    bool operator!=(const Vector& rhs) const;

//out
friend std::ostream & operator<<(std::ostream& output, const Vector &v);
    //std::ostream & operator<<(std::ostream& output, const Vector &v);
//methods
    double length();
    friend void print(const Vector &rhs);
    double get_x() const;
    double get_y() const;
};
//std::ostream & operator<<(std::ostream& output, const Vector &v);



#endif //__VECTOR_H__

/*
    + Stwórz metodę print wypisująca dane o wektorze na ekran.
    - Zaimplementuj pozostałe metody przy użyciu operatorów.
    - <<
    - Zaplanuj implementację klasy dla liczb urojonych.
    - Zaimplementuj klasę dla liczb urojonych.
 */