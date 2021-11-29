//
// Created by mateu on 25.10.2021.
//

#ifndef FIRSTLIB_PROSTOPADLOSCIAN_H
#define FIRSTLIB_PROSTOPADLOSCIAN_H


class Prostopadloscian {
public:
    Prostopadloscian();
    Prostopadloscian(double, double, double);
    void setA(double);
    void setB(double);
    void setC(double);

private:
    double a, b, c;

};


#endif //FIRSTLIB_PROSTOPADLOSCIAN_H
