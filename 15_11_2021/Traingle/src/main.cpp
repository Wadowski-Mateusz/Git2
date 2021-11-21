//
// Created by mateu on 21.11.2021.
//
#include "../include/Triangle.h"
int main(){
    Node a, b(5,8), c(1,16);
    Triangle triangle(a,b,c,"First Triangle");
    triangle.display();
    return 0;
};