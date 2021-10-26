#pragma once
#ifndef VJ1ZAD2_h
#define VJ1ZAD2_h
#include <iostream>
using namespace std;


typedef struct {

	float** content;
	int r;
	int s;

}Matrica;

void KreirajMatricu(Matrica& m, int r, int s);
void UnistiMatricu(Matrica m, int r);
void UnosMatrice(Matrica& m);
void IspisMatrice(Matrica& m);
void ZbrojMatrica(Matrica& m1, Matrica& m2, Matrica& m3);
void OduzimanjeMatrica(Matrica& m1, Matrica m2, Matrica& m4);
void MnozenjeMatrica(Matrica& m1, Matrica m2, Matrica& m5);
void TransponiranjeMatrica(Matrica& m6, Matrica& m1);
void IspisMatKalk(Matrica& m3, Matrica& m4, Matrica& m5, Matrica& m6);



#endif // !VJ1ZAD2_h

