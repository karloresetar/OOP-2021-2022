// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "vjezba3.h"

using namespace std;

int main3()
{
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<string> vstr;
    int dg = 0;
    int gg = 0;

    // 3 ZAD
    unos(v1, 5);
    vect_sort(v1);
    print_vector(v1);

    return 0;
}


