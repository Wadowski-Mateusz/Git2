//
// Created by mateu on 22.11.2021.
//
#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;
class Scheduler;
class Task;

int main(){
    Scheduler *s = new Scheduler((unsigned)1);
}

class Task{
private:
    int kokos;
public:
    friend Scheduler;
};

class Scheduler {
private:
    vector <Task *> tasks;
    unsigned sleeptime;
    unsigned amountOfCall = 0;

public:
    Scheduler(unsigned sleeptime) : sleeptime(sleeptime){}

    //Ustawianie ilości wykonań (ile razy ma się uśpić w pętli), jeżeli 0, to ma działać w nieskończoność
    void setAmountOfCall(unsigned amountOfCall) {this->amountOfCall = amountOfCall;}

    //Dodawanie elementu do listy zadań do wykonania
    void addTask(Task task){
        this->tasks.push_back(&task);
    }

    //Uruchomienie działania (usypianie, wykonywanie wszystkich zadań i tak w kółko)
    void run(){
        while(true) {

            for(vector<Task *>::iterator it = tasks.begin(); it != tasks.end(); it++) {
                /* std::cout << *it; ... */
            }

            for (int i = 0; i < amountOfCall; i++)
                sleep(sleeptime);
        }
    }
};
/*
 * Stwórz Scheduler, którego zadaniem będzie wywoływanie wszystkich przekazanych zadań co określoną ilość czasu.


Stwórz klasę Task.

Stwórz klasy potomne, które będą pozwalały na to aby zadanie do wykonania było:
    funkcja
    klasa
    funkcja lambda

 */
