//
// Created by mateu on 21.11.2021.
//
#include "../include/Triangle.h"
int main(){
    Node a, b(5,8), c(1,16);
    Triangle triangle(a,b,c,"First Triangle");
    triangle.display();

    std::cout<<triangle<<std::endl;
    std::cout<<"Distance between first and second point is "<<triangle.distance(0,1)<<std::endl;

    std::cout<<"\n&:Triangle\n";
    showTriangleData(&triangle);

    std::cout<<"\nTriangle:";
    //showTriangleData(triangle); //dwuznaczne

    Triangle *t2 = new Triangle(a,b,c,"second");
    //showTriangleData(*t2);//dwuznaczne
    delete t2;
    return 0;
};