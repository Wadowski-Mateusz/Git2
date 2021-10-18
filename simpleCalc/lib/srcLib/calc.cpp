//
// Created by mateu on 17.10.2021.
//

#include "../include/calc.h"

int Calc::add(int a, int b) {
    return a + b;
}

int Calc::subtract(int a, int b){
    return a-b;
};

double Calc::volume (int a, int b, int h, int H){ //(a + b) * h * H
    return (double)(a+b)*h*H/2;
};

void Calc::help(){
    printf("Simple calculatur\n"
           "1. add [a] [b] - Sumuje dwie liczby calkowite. Zwraca liczbe int.\n"
           "2. subtract [a] [b] - Od liczby calkowitej [a] odejmuje liczbe calkowita [b]. Zwraca int.\n"
           "3. volume [a] [b] [h] [H] - Wyznacza objetosc graniastoslupa prostego o podstawie trapezu, \n\tgdzie [a] i [b] to podstawy trapezu, [h] jest wysokoscia trapezu, a [H] wysokoscia graniastoslupa.\n\tZwraca double.\n"
           "4. help - Wyswietla dokumentacje.\n");
};
