// Zdk2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "VJ1ZAD3.h"
using namespace std;


void NadiMinMax(int niz[], int n) {
    int i;
    int min, max;

    cout << "Unesite niz od " << n << " elemanata " << endl;
    for (i = 0; i < n; i++) {
        cin >> niz[i];
    }

    max = niz[0];
    min = niz[0];

    for (i = 1; i < n; i++) {
        if (niz[i] > max) {
            max = niz[i];
        }
        else if (niz[i] < min) {
            min = niz[i];
        }
    }



    cout << "Najveci broj u nizu je: " << max << endl;
    cout << "Najmanji broj u nizu je: " << min << endl;
}


