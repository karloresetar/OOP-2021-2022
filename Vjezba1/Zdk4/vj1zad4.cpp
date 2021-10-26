// Zdk3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "VJ1ZAD4.h"
using namespace std;


int NapuniNiz(int niz[], int n) {

    int i;

    cout << "Napuni niz" << endl;
    for (i = 0; i < n; i++) {
        cin >> niz[i];
    }

    return niz[i];
}


void NadiMinMax(int* niz, int n, int& min, int& max) {

    if (n == 0)
        return;
    else {
        if (niz[n - 1] > max) {
            max = niz[n - 1];
            return NadiMinMax(niz, n - 1, min, max);
        }
        else if (niz[n - 1] < min) {
            min = niz[n - 1];
            return NadiMinMax(niz, n - 1, min, max);
        }
        return NadiMinMax(niz, n - 1, min, max);
    }
}


