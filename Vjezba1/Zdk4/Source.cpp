#include <iostream>
#include "VJ1ZAD4.h"
using namespace std;

int main()
{
    int n;
    int* niz;
    int min = 0;
    int max = 0;
    cout << "Unesi broj elemenata niza: " << endl;
    cin >> n;
    niz = new int[n];
    NapuniNiz(niz, n);
    min = niz[0];
    max = niz[0];
    NadiMinMax(niz, n, min, max);
    cout << "Najmanji: " << min << endl;
    cout << "Najveci: " << max << endl;
    delete[] niz;
    niz = 0;
}