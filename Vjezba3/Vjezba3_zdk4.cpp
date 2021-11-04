// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "vjezba3.h"

using namespace std;

int main4()
{
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<string> vstr;
    int dg = 0;
    int gg = 0;

    // 4 ZAD
    unos(v1, 5);
    vect_element_remove_std(v1, 1);
    vect_element_remove(v1);


    return 0;
}


