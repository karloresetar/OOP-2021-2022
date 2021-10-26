// Zdk1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void MinMaxRef(int* niz, int& min, int& max, int n) {
    int i;

    for (int i = 0; i < n; i++)
    {
        cout << "Unesite " << i+1 << " element niza: ";
        cin >> niz[i];

    }

    min = niz[0];
    max = niz[0];


    for (i = 1; i < n; i++) {
        if (niz[i] > max) {
            max = niz[i];
        }
        else if (niz[i] < min) {
            min = niz[i];
        }
    }

}


int main()
{
    int min, max, n;
    cout << "Unesite broj elemanata za niz: " << endl;
    cin >> n;
    int* niz = new int[n];
    MinMaxRef(niz, min, max, n);
    cout << "Min je: " << min << " Max je : " << max;
    delete[] niz;
    niz = 0;



}


