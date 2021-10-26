#include <iostream>
#include <iomanip>
#include "Zdk3.h"
using namespace std;



int main() {
	
	int n = 5;
	pravokutnik mojpravokutnik[5];
	for (int i = 0; i < n; i++) {
		cout << "Pravokutnik " << i + 1 << endl;
		cout << "Unesite koordinate prve tocke: " << endl;
		cin >> mojpravokutnik[i].tocke[0].x;
		cin >> mojpravokutnik[i].tocke[0].y;
		cout << "Unesite koordinate druge tocke: " << endl;
		cin >> mojpravokutnik[i].tocke[1].x;
		cin >> mojpravokutnik[i].tocke[1].y;
	}
	kruznica k1;
	cout << "Unesite srediste kruznice: " << endl;
	cin >> k1.ishodiste.x;
	cin >> k1.ishodiste.y;
	cout << "Unesite radijus kruznice: " << endl;
	cin >> k1.radijus;

	int sijeceprovj = zad3(mojpravokutnik, k1, n);
	cout << "Sijece " << sijeceprovj << endl;
}