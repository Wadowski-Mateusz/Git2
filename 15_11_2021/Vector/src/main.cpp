//
// Created by filip on 07.11.2021.
//

//#include <iostream>
#include "Vector.h"

using namespace std;

int main() {

    Vector v0 = Vector(1,2);
    print(v0);

    Vector v1 = Vector(2, 3);
    print(v1);

    std::cout<<"\n\n";

    if(v1 == v0)
        std::cout<<"T1";
    else
        std::cout<<"F1";
    std::cout<<"\n\n";
    if(v1 != v0)
        std::cout<<"T2\n";
    else
        std::cout<<"F2\n";



    cout<<"cout1: "<<v1<<endl;
    v1 = v1 * 3;
    cout<<"cout2: "<<v1<<endl;
    v1 = 3 * v1;
    cout<<"cout3: "<<v1<<endl;


    return 0;
}