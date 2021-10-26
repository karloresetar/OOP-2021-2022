// Zdk2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int &PovElNiza(int *niz, int element) {
    return niz[element];
}
int main()
{
    int niz[5] = { 1,2,3,4,5 };
    int element;
    cout << "Unesite lement niza ";
    cin >> element;
    cout << "Element niza: " << niz[element] - 1 << " Je povecan na " << (PovElNiza(niz, element)+=1) << endl;

}


