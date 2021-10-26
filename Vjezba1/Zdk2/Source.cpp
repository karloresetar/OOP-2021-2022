#include <iostream>
#include <iomanip>
#include "VJ1ZAD2.h"
using namespace std;



int main() {

	Matrica m1;
	KreirajMatricu(m1, 3, 3);
	UnosMatrice(m1);
	IspisMatrice(m1);
	Matrica m2;
	KreirajMatricu(m2, 3, 3);
	UnosMatrice(m2);
	IspisMatrice(m2);
	Matrica m3; //Zbroj
	ZbrojMatrica(m1, m2, m3);
	Matrica m4; //Razlika
	OduzimanjeMatrica(m1, m2, m4);
	Matrica m5; //Umnozak
	MnozenjeMatrica(m1, m2, m5);
	Matrica m6; //Transponiranje
	KreirajMatricu(m6, 3, 3);
	TransponiranjeMatrica(m6, m1);
	IspisMatKalk(m3, m4, m5, m6);
	UnistiMatricu(m1, 3);
	UnistiMatricu(m2, 3);
	UnistiMatricu(m3, 3);
	UnistiMatricu(m4, 3);
	UnistiMatricu(m5, 3);
	UnistiMatricu(m6, 3);

}