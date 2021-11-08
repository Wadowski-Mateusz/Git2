//
// Created by mateu on 08.11.2021.
//
#include "../include/Pojazd.h"

Pojazd::Pojazd(const string numer, const string nazwa, const unsigned short ilosc, string marka_i_typ){
    numer_rejestracyjny = numer;
    this->nazwa = nazwa;
    ilosc_miejsc = ilosc;
    godnosc = new string[ilosc_miejsc];
    for(int i = 0; i < ilosc_miejsc; i++)
       godnosc[i] = "NULL";
    this->marka_i_typ = marka_i_typ;

}

void Pojazd::printData() const{
    cout<<"Numer rejestracyjny: "<<this->numer_rejestracyjny<<endl;
    cout<<"Nazwa samochodu: "<<this->nazwa<<endl;
    cout<<"Ilosc miejsc: "<<this->ilosc_miejsc<<endl;
    cout<<"Godnosc pasazerow:";
    for(int i = 0; i < ilosc_miejsc; i++)
        cout<<"\t"<<godnosc[i];
    cout<<"\nMarka i typ: "<<this->marka_i_typ<<endl;
}

void Pojazd::setGodnosc(const int i, const string god){
    godnosc[i] = god;
}

Pojazd::Pojazd(const Pojazd &pojazd){
    this->numer_rejestracyjny = pojazd.numer_rejestracyjny;
    this->nazwa = pojazd.nazwa;
    this->ilosc_miejsc = pojazd.ilosc_miejsc;
    godnosc = new string[ilosc_miejsc];
    for(int i = 0; i < ilosc_miejsc; i++)
        godnosc[i] = pojazd.godnosc[i];
    this->marka_i_typ = pojazd.marka_i_typ;
}

string Pojazd::get_nazwa() const{
    return nazwa;
}

string Pojazd::get_numer_rejestracyjny() const{
    return numer_rejestracyjny;
}
string Pojazd::get_marka_i_Typ() const{
    return marka_i_typ;
}

void Pojazd::set_nazwa(const string nazwa){
    this->nazwa = nazwa;
}
void Pojazd::set_numer_rejestracyjny(const string numer_rejestracyjny){
    this->numer_rejestracyjny = numer_rejestracyjny;
}

