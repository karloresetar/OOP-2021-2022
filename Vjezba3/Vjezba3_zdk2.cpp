// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "vjezba3.h"

using namespace std;

int main2()
{
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<string> vstr;
    int dg = 0;
    int gg = 0;


    //2 ZAD
    unos(v1, 3);
    unos(v2, 3);
    komb_vect(v1, v2, v3);
    print_vector(v3);

    return 0;
}


