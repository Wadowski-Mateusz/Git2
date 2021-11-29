//
// Created by mateu on 08.11.2021.
//
#include "../include/Vector.h"

Vector::Vector(const string numer, const string nazwa, const unsigned short ilosc, string marka_i_typ){
    numer_rejestracyjny = numer;
    this->nazwa = nazwa;
    ilosc_miejsc = ilosc;
    godnosc = new string[ilosc_miejsc];
    for(int i = 0; i < ilosc_miejsc; i++)
       godnosc[i] = "NULL";
    this->marka_i_typ = marka_i_typ;

}

void Vector::printData() const{
    cout<<"Numer rejestracyjny: "<<this->numer_rejestracyjny<<endl;
    cout<<"Nazwa samochodu: "<<this->nazwa<<endl;
    cout<<"Ilosc miejsc: "<<this->ilosc_miejsc<<endl;
    cout<<"Godnosc pasazerow:";
    for(int i = 0; i < ilosc_miejsc; i++)
        cout<<"\t"<<godnosc[i];
    cout<<"\nMarka i typ: "<<this->marka_i_typ<<endl;
    cout<<"Wersja oprogramowania: "<<this->zainstalowana_wersja_oprogramowania<<endl<<endl;
}

void Vector::setGodnosc(const int i, const string god){
    godnosc[i] = god;
}

Vector::Vector(const Vector &pojazd){
    this->numer_rejestracyjny = pojazd.numer_rejestracyjny;
    this->nazwa = pojazd.nazwa;
    this->ilosc_miejsc = pojazd.ilosc_miejsc;
    godnosc = new string[ilosc_miejsc];
    for(int i = 0; i < ilosc_miejsc; i++)
        godnosc[i] = pojazd.godnosc[i];
    this->marka_i_typ = pojazd.marka_i_typ;
}

string Vector::get_nazwa() const{
    return nazwa;
}

string Vector::get_numer_rejestracyjny() const{
    return numer_rejestracyjny;
}
string Vector::get_marka_i_Typ() const{
    return marka_i_typ;
}

void Vector::set_nazwa(const string nazwa){
    this->nazwa = nazwa;
}
void Vector::set_numer_rejestracyjny(const string numer_rejestracyjny){
    this->numer_rejestracyjny = numer_rejestracyjny;
}

string Vector::get_najnowsza_wersja_oprogramowania() const{
    return najnowsza_wersja_oprogramowania;
}
string Vector::get_zainstalowana_wersja_oprogramowania() const{
    return zainstalowana_wersja_oprogramowania;
}
void Vector::aktualizuj_zainstalowana_wersja_oprogramowania(){
    this->zainstalowana_wersja_oprogramowania = Vector::najnowsza_wersja_oprogramowania;
}

string Vector::najnowsza_wersja_oprogramowania = "v 1.0";

void Vector::opublikuj_Nowe_Oprogramowanie(const string wersja){
    najnowsza_wersja_oprogramowania = wersja;
}