#include <iostream>
using namespace std;

int main(){

    const int *k;
    //int *const k1; // nie kompiluje sie



    {
        int cVal = 314;
        const int *p = &cVal;

        //*p = 628; //blad kompilacji

        const int cVal2 = 666;

        p = &cVal2;

    }

    {
        int cVal = 314;
        int *const p = &cVal;
    }

    {
        int cVal = 314;
        int *const p = &cVal;

        *p = 628;

        int cVal2 = 666;
        //p = &cVal2; //blad kompilacji
    }
    int cVal = 314;
    //const int* const youCantModifyMe = cVal;
}

