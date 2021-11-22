#include <iostream>

class Figura{
protected:
    std::string kolor;
    std::string nazwa;
public:
    void setNazwa(std::string nazwa){
        this->nazwa = nazwa;
    }
    void setKolor(std::string kolor){
        this->kolor = kolor;
    }
    std::string getNazwa(){
        return nazwa;
    }
    std::string getKolor(){
        return kolor;
    }
};

class Kwadrat : public Figura{
    double a;
public:
    Kwadrat(std::string nazwa, std::string kolor, double a) : a(a){
        this->nazwa = nazwa;
        this->kolor = kolor;
    }

    double pole(){return a*a;};
    double obwod(){return 4*a;}
};

class Prostokat : public Figura{
    double a, b;
public:
    Prostokat(std::string nazwa, std::string kolor, double a, double b) : a(a), b(b){
        this->nazwa = nazwa;
        this->kolor = kolor;
    }

    double pole(){return a*b;};
    double obwod(){return (a+b)*2;}
};

class Kolo : public Figura{
    double r;
    double PI = 3.141592;
public:
    Kolo(std::string nazwa, std::string kolor, double r) : r(r){
        this->nazwa = nazwa;
        this->kolor = kolor;
    }

    double pole(){return PI*r*r;}
    double obwod(){return PI*r*2;}
};

int main(){
    Kwadrat kwadrat = Kwadrat("nazwa", "kolor", 8);
    Prostokat prostokat = Prostokat("nazwa", "kolor", 8, 2);
    Kolo kolo = Kolo("nazwa", "kolor", 3.141592);
    std::cout<<"Kwadrat:\tPole: "<<kwadrat.pole()<<"\tObwod: "<<kwadrat.obwod()<<std::endl;
    std::cout<<"Prostokot:\tPole: "<<prostokat.pole()<<"\tObwod: "<<prostokat.obwod()<<std::endl;
    std::cout<<"Kolo:\t\tPole: "<<kolo.pole()<<"\tObwod: "<<kolo.obwod()<<std::endl;

}
