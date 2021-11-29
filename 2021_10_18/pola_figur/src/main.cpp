//
// Created by mateu on 18.10.2021.
//

#include <iostream>

using namespace std;


double pole (int a, int h) {return a*h/2;}
double pole (double a, double h) {return a*h/2;}
double pole (int a) {return a*a;}
double pole (double a) {return a*a;}
double pole (int a, int b, int h) {return (a+b)*h/2;}
double pole (double a, double b, double h) {return (a+b)*h/2;}

int main() {
    cout<<"Pole trojkata a = 5, h = 7\t\t\t"<<pole(5,7)<<endl;
    cout<<"Pole trojkata a = 5.2, h = 7.3\t\t\t"<<pole(5.2,7.3)<<endl;
    cout<<"Pole kwadratu a = 5\t\t\t\t"<<pole(5)<<endl;
    cout<<"Pole kwadratu a = 5.5\t\t\t\t"<<pole(5.5)<<endl;
    cout<<"Pole trapezu a = 5, b = 1, h = 1\t\t"<<pole(5,1,1)<<endl;
    cout<<"Pole trapezu a = 5.2, b = 1.3, h = 1.4\t \t"<<pole(5.2,1.3,1.4)<<endl;
    return 0;
}