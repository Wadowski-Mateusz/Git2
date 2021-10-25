//
// Created by mateu on 25.10.2021.
//

#include <iostream>

using namespace std;

struct samochod {

    string marka;
    string model;
    int rokProdukcji;
    string kolor;
    bool bity;

    void printSamochod() {
        cout << marka << "\t|\t" << model << "\t|\t" << rokProdukcji << "\t|\t" << kolor << "\t|\t" << bity << endl;
    }

};

int marka(samochod *a, int no);

int najstarszy(samochod *a, int no);

int main() {

    static const int no = 4;
    samochod *a = new samochod[no];

    a[0].marka = "marka1";
    a[0].model = "model1";
    a[0].rokProdukcji = 1;
    a[0].kolor = "kolor1";
    a[0].bity = 0;

    a[1].marka = "marka2";
    a[1].model = "model2";
    a[1].rokProdukcji = 2;
    a[1].kolor = "kolor2";
    a[1].bity = 1;

    a[2].marka = "marka1";
    a[2].model = "model3";
    a[2].rokProdukcji = 3;
    a[2].kolor = "kolor3";
    a[2].bity = 0;

    a[3].marka = "marka4";
    a[3].model = "model4";
    a[3].rokProdukcji = -100;
    a[3].kolor = "kolor4";
    a[3].bity = 1;


    cout
            << "marka\t|\tmodel\t| rok Produkcji |\tkolor\t|\tbity\n______________________________________________________________________\n";
    a[0].printSamochod();
    a[1].printSamochod();
    a[2].printSamochod();
    a[3].printSamochod();


    cout << "\n\n\n\n\n";

    int m = marka (a, no);
    cout << "Liczba samochodow o takiej marce:" << m << endl;

    cout << "\n\n\n\n\n";

    cout << "Najstarszy samochod znajduje sie pod indeksem: " << najstarszy(a, no) << endl;


    delete[] a;
    return 0;
}

int marka(samochod *a, int no) {
    int index;

    //Napisz funkcję, która będzie przyjmować tablicę samochodów oraz liczbę elementów w tablicy i zwróci liczbę(sumę) samochodów, które są tej samej marki.
    //porownywanie do 1. elementu tablicy;
    string szukaj;
    cout << "Podaj szukana marke\n";
    cin >> szukaj;
    int no2 = 0;

    for (int i = 0; i < no; i++)
        if (a[i].marka == szukaj)
            no2++;

    return no2;
}

int najstarszy(samochod *a, int no) {
    int min = 0;

    for (int i = 1; i < no; i++)
        if (a[i].rokProdukcji < a[min].rokProdukcji)
            min = i;
    return min;
}