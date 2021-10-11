//
// Created by mateu on 11.10.2021.
//

#include <iostream>

using namespace std;

//class math{
//public:
//    math::add(double a, double b);
//    subrstract();
//    volume();
//    help();
//};


int main(int argc, char *argv[]) { // liczba argumentow, argumenty

////    int *n = new int;
////    int k;
////
////    cout << "n: "<< n << endl << "*n: "<< *n << endl << "&n: "<< &n << endl << "&k: "<< & k << endl;
////
////    delete n;
////
////    int *tab = new int [5];
////    delete[] tab;
////    int **tab2 = new int*[5];
////
////    for(int i=0; i<5; ++i){
////        tab2[i] = new int[5];
////    }
////
////    for(int i=0; i<5; ++i){
////        delete[] tab2[i];
////    }
////
////    delete[] tab2;
//    int tab3[5] = {0,1,2,3};
//
//    for(int i=0; i<5; ++i){
//        cout<<*(tab3+i)<< "\t";
//    }
//    cout<<endl;
//
//
////    tab3[5] = {3,3,3,3,3}; //Tak nie da sie
////
////    for(int i=0; i<5; ++i){
////        cout<<*(tab3+i)<< "\t";
////    }
////    cout<<endl;
//
//
    cout<<"ARGUMENTY: "<<endl;

    for (int i = 0; i<argc; i++)
        cout<<i<<": "<<argv[i]<<endl;

    cout<<endl;




    return 0;
}