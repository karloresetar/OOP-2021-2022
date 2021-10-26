#include <iostream>
#include "VJ1ZAD3.h"
using namespace std;



int main()
{
    int n;
    int* niz;
    cout << "Unesite broj elemenata za niz: " << endl;
    cin >> n;
    niz = new int[n];
    NadiMinMax(niz, n);
    delete[] niz;
}