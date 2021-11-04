// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "vjezba3.h"

using namespace std;

int main1()
{
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<string> vstr;
    int dg=0;
    int gg=0;

    //ZAD1
    //unos(v1,5);
   /* cout << "Unesite donju granicu: " << endl;
    cin >> dg;
    cout << "Unesite gornju granicu: " << endl;
    cin >> gg;
    unos2(v1, dg, gg);
    */

    //2 ZAD
    /*unos(v1, 3);
    unos(v2, 3);
    komb_vect(v1, v2, v3);
    print_vector(v3);*/

    // 3 ZAD
    /*unos(v1, 5);
    vect_sort(v1);
    print_vector(v1);*/

    // 4 ZAD
    /*unos(v1, 5);
    vect_element_remove_std(v1, 1);
    vect_element_remove(v1);*/

    // 5 ZAD
   /* string str1("ffr kajo je kyao, asdasdfgasdga sdfasdgfasdgdasd asdasdasd");
    string str2("kayo");
    funk_appear(str1, str2);*/


    // 6 ZAD
    int n = 5;
    string unos;
    // Rijec po rijec 
    /*while (cin >> unos)
    {
        vstr.push_back(unos);
    }

    for (auto it = vstr.begin(); it != vstr.end(); it++) {
        cout << *it << " ";
    }
    cout << endl << endl;
    
    funk_rev_sort(vstr);*/


    // Cila recenica
    /*for (int i = 0; i <= n; i++) {
        getline(cin, unos);
        vstr.push_back(unos);
    }


    for (auto it = vstr.begin(); it != vstr.end(); it++) {
        cout << *it << " ";
    }
    cout << endl << endl;*/

    return 0;
}


