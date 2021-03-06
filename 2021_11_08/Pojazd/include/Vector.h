//
// Created by mateu on 08.11.2021.
//

#ifndef E1NOCOPYINGCONSTRUCTOR_POJAZD_H
#define E1NOCOPYINGCONSTRUCTOR_POJAZD_H

#include <iostream>

using namespace std;

class Vector {
private:
   static string najnowsza_wersja_oprogramowania;
   string zainstalowana_wersja_oprogramowania = "v0.1 BETA";
   string numer_rejestracyjny;
   string nazwa;
   unsigned short ilosc_miejsc;
   string *godnosc;                 //tablicę alokowaną dynamicznie przechowująca imię i nazwisko pasażera, bądź informacje o tym, że miejsce jest puste
   string marka_i_typ;


public:

    //Stwórz konstruktor przyjmujący powyższe wartości.
    Vector(const string numer, const string nazwa, const unsigned short ilosc, string marka_i_typ);

    //Stwórz metodę wypisującą na ekran wszystkie informacje.
    void printData() const;

    //Stwórz metodę zmieniającą informację o pasażerze na konkretnym miejscu (pierwszy parametr, to numer miejsca, a drugi informacja o pasażerze).
    void setGodnosc(const int, const string);

    //Stwórz konstruktor kopiujący.
    Vector(const Vector &);



    //Stwórz gettery dla nazwy, numeru rejestracyjnego oraz marki i typu.
    string get_nazwa() const;
    string get_numer_rejestracyjny() const;
    string get_marka_i_Typ() const;

    //Stwórz setter dla nazwy i numeru rejestracyjnego.
    void set_nazwa(const string);
    void set_numer_rejestracyjny(const string);

    string get_najnowsza_wersja_oprogramowania()const;

    string get_zainstalowana_wersja_oprogramowania()const;
    void aktualizuj_zainstalowana_wersja_oprogramowania();

    static void opublikuj_Nowe_Oprogramowanie(const string wersja);

};



#endif //E1NOCOPYINGCONSTRUCTOR_POJAZD_H
