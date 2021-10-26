#pragma once
#ifndef ZDK3_H
#define ZDK3_H
#include <iostream>
using namespace std;

typedef struct tocka {
	int x;
	int y;
}tocka;

typedef struct pravokutnik {
	tocka tocke[2];

}pravokutnik;

typedef struct kruznica {
	int radijus;
	tocka ishodiste;
}kruznica;





int zad3(pravokutnik* niz, const kruznica& krug, int n);
int length(int tocka1x, int tocka1y, int tocka2x, int tocka2y);




#endif // !ZDK3_H

