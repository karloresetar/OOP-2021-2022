// Zdk1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "VJ1ZAD2.h"
using namespace std;



void KreirajMatricu(Matrica& m, int r, int s) {


	m.r = r;
	m.s = s;

	m.content = new float* [r];
	for (int i = 0; i < r; i++) {
		m.content[i] = new float[s];
	}

}

void UnistiMatricu(Matrica m, int r) {
	for (int i = 0; i < r; i++) {
		delete[] m.content[i];
	}
	delete[] m.content;
}

void UnosMatrice(Matrica& m) {
	int i, j;
	cout << "Unesite matricu:" << endl;
	for (i = 0; i < m.r; i++) {
		for (j = 0; j < m.s; j++) {
			cin >> m.content[i][j];
		}
	}
}

void IspisMatrice(Matrica& m) {
	int i, j;
	cout << "MATRICA: " << endl;
	for (i = 0; i < m.r; i++) {
		for (j = 0; j < m.s; j++) {
			cout << setprecision(4) << fixed << setw(4) << m.content[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void ZbrojMatrica(Matrica& m1, Matrica& m2, Matrica& m3) {
	int i, j;


	if ((m1.r == m2.r) && (m1.s == m2.s)) {
		KreirajMatricu(m3, m1.r, m1.s);
		for (i = 0; i < m3.r; i++) {
			for (j = 0; j < m3.s; j++) {
				m3.content[i][j] = m1.content[i][j] + m2.content[i][j];
			}
		}
	}
	else {
		cout << " ##########MATRICE ZBRAJANJE NISU ULANCANE########## " << endl;
	}

}

void OduzimanjeMatrica(Matrica& m1, Matrica m2, Matrica& m4) {
	int i, j;

	if ((m1.r == m2.r) && (m1.s == m2.s)) {
		KreirajMatricu(m4, m1.r, m1.s);
		for (i = 0; i < m4.r; i++) {
			for (j = 0; j < m4.s; j++) {
				m4.content[i][j] = m1.content[i][j] - m2.content[i][j];
			}
		}
	}
	else {
		cout << " ##########MATRICE ZA ODUZIMANJE NISU ULANCANE########## " << endl;
	}
}

void MnozenjeMatrica(Matrica& m1, Matrica m2, Matrica& m5) {
	int i, j, k;




	if (m1.s == m2.r) {
		KreirajMatricu(m5, m1.r, m2.s);
		for (i = 0; i < m5.r; i++) {
			for (j = 0; j < m5.s; j++) {
				m5.content[i][j] = 0;
			}
		}
		for (i = 0; i < m5.r; i++) {
			for (j = 0; j < m5.s; j++) {
				for (k = 0; k < m5.r; k++) {
					m5.content[i][j] += m1.content[i][k] * m2.content[k][j];
				}
			}
		}
	}
	else {
		cout << " ##########MATRICE ZA MNOZENJE NISU ULANCANE########## " << endl;
	}
}

void TransponiranjeMatrica(Matrica& m6, Matrica& m1) {
	int i, j;
	for (i = 0; i < m6.r; i++) {
		for (j = 0; j < m6.s; j++) {
			m6.content[i][j] = m1.content[i][j];
		}
	}
}

void IspisMatKalk(Matrica& m3, Matrica& m4, Matrica& m5, Matrica& m6) {
	int i, j;
	cout << "____________________________" << endl;
	cout << endl;
	cout << "racunske operacije:" << endl;
	cout << "____________________________" << endl;
	cout << endl;
	cout << "zbrajanje matrica: " << endl;
	for (i = 0; i < m3.r; i++) {
		for (j = 0; j < m3.s; j++) {
			cout << setw(4) << right << m3.content[i][j] << " ";
		}
		cout << endl;
	}

	cout << "____________________________" << endl;
	cout << endl;
	cout << "oduzimanje matrica: " << endl;
	for (i = 0; i < m4.r; i++) {
		for (j = 0; j < m4.s; j++) {
			cout << setw(4) << right << m4.content[i][j] << " ";
		}
		cout << endl;
	}

	cout << "____________________________" << endl;
	cout << endl;
	cout << "Mnozenje matrica: " << endl;
	for (i = 0; i < m5.r; i++) {
		for (j = 0; j < m5.s; j++) {
			cout << setw(4) << right << m5.content[i][j] << " ";
		}
		cout << endl;
	}

	cout << "____________________________" << endl;
	cout << endl;
	cout << "Transponirana matrica:" << endl;
	for (i = 0; i < m6.r; i++) {
		for (j = 0; j < m6.s; j++) {
			cout << setw(4) << right << m6.content[j][i] << " ";
		}
		cout << endl;
	}

	cout << "____________________________" << endl;
}