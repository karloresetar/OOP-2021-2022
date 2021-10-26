// Zdk3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include "Zdk3.h"

int length(int tocka1x, int tocka1y, int tocka2x, int tocka2y) {

    return sqrt((tocka1x - tocka2x) * (tocka1x - tocka2x) + (tocka1y - tocka2y) * (tocka1y - tocka2y));

}



int zad3(pravokutnik* niz, const kruznica& krug, int n) {
    int sijece = 0;
    int counter = 0;
    for (int i = 0; i < n; i++) {
        counter = 0;
        for (int k = 0; k <= 1; k++) {
            if ((length(niz[i].tocke[k].x, niz[i].tocke[k].y, krug.ishodiste.x, krug.ishodiste.y) < krug.radijus))
                counter++;
        }
        if (counter == 1)
            sijece++;
    }
    return sijece;

}


