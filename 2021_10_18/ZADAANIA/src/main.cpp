//
// Created by mateu on 25.10.2021.
//

#include <iostream>
#include <time.h>

using namespace std;

int rand(int a, int b) {
    return rand() % (b - a + 1) + a;
}

void swap(int &a, int &b) {
    int c;
    c = a;
    a = b;
    b = c;
}

int return_max(int *i, const int no) {
    int m = 0;
    for (int j = 0; j < no; j++)
        if (i[j] > m)
            m = i[j];

    return m;

}

void reverse_tab(int *tab, int  no){
    for (int i = 0; i < no/2; i++)
        swap(*(tab+i), *(tab+no-i-1));
}

int main() {
    srand(time(NULL));

    static const int no = 10;
    static const int a = -200;
    static const int b = -100;
    int max[no];
    int *tab = new int[no];

    for (int i = 0; i < no; i++)
        max[i] = rand(a, b);

    for (int i = 0; i < no; i++)
        for (int j = 0; j < no; j++)
            if (max[i] < max[j])
                swap(max[i], max[j]);

    cout << "Minimalna i maksymalna wartosc wylosowanych liczb dla liczb: " << a << " i " << b << " na przestrzeni " << no
         << " losowan: ";

    cout << max[0] << "\t" << max[no - 1] << endl;



    /////////////
    for (int i = 0; i < no; i++)
        *(tab + i) = rand(1, 100);
    cout << "Najwieksza wartosc w tablicy to: " << return_max(tab, no) << endl;


    cout<<endl<<endl<<endl<<"Tablica pierwotna:"<<endl;

    for(int i = 0; i < no; i++)
        cout<<*(tab+i)<<" ";

    cout<<endl<<endl<<"Tablica odwrocona: "<<endl;

    reverse_tab(tab, no);
    for(int i = 0; i < no; i++)
        cout<<*(tab+i)<<" ";

}