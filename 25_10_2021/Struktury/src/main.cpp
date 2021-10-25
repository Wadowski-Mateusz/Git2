//
// Created by mateu on 25.10.2021.
//

#include <iostream>

using namespace std;

struct samochod{

    string marka;
    string model;
    int rokProdukcji;
    string kolor;
    bool bity;

};

int main(){

    static const int no = 4;
    samochod *a = new samochod[no];

    a[0].marka = "marka1";
    a[0].model = "model1";
    a[0].rokProdukcji = 0;
    a[0].kolor = "kolor";
    a[0].bity = 0;

    delete[] a;
    return 0;
}
