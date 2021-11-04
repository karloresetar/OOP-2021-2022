#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "vjezba3.h"

using namespace std;

void unos(vector <int> &vect, int br_elem) {
	
	int unos;
	for (int i = 0; i < br_elem; i++) {
		cout << "Unesite " << i+1 << " broj: " << endl;
		cin >> unos;
		vect.push_back(unos);
	}

}

void unos2(vector<int>& vect, int min, int max) {

	int x;
	x = min;
	while (x >= min && x <= max) {
		cin >> x;
		vect.push_back(x);
	}

}

void print_vector(vector<int>& vect) {
	vector<int> :: iterator it;
	cout << "Vektor se sastoji od: ";
	for (it = vect.begin(); it != vect.end(); it++)
		cout << *it << " ";
}

void komb_vect(vector<int> vect1, vector<int> vect2, vector<int>& vect3)
{
	int flag = 0;
	vector<int>::iterator i;
	vector<int>::iterator j;
	for (i = vect1.begin(); i != vect1.end(); i++) {
		for (j = vect2.begin(); j != vect2.end(); j++) {
			if (*i == *j)
				flag = 1;
		}
		if (flag == 0){
			vect3.push_back(*i);
		}
		flag = 0;
	}
}

void vect_sort(vector<int> vect) {

	int suma=0;
	sort(vect.begin(), vect.end());
	
	for (auto i: vect) {
		suma += i;
	}
	vect.insert(vect.begin(), 0);
	vect.push_back(suma);

	vector<int> ::iterator it;
	for (it = vect.begin(); it != vect.end(); it++)
		cout << *it << " ";

}

void vect_element_remove(vector<int> vect) {

	int element;
	cout << "Unesite element vektora koji zelite uklonit: " << endl;
	cin >> element;

	cout << "element koji je izbacen iz vectora: " << vect.at(element) << endl;
	vect.erase(vect.begin() + element);
	

	vector<int> ::iterator it;
	for (it = vect.begin(); it != vect.end(); it++)
		cout << *it << " ";

}


void vect_element_remove_std(vector<int> vect,int n) {

	int duljina = vect.size();
	cout << "size je: " << vect.size() << endl;

	for (int i = 0; i < duljina; i++) {
		if (i == n) {
			cout << "izbaceni broj je: " << vect[i] << endl;;
			vect[i] = vect[i + 1];
			vect[n] = vect[duljina - 1];
		}
	}
	duljina--;

	

	for (int i = 0; i < duljina; i++) {
		cout << vect[i] << " ";
	}

	cout << "size nakon je: " << duljina << endl;
}

void funk_appear(string str, string substr) {
	
	int br = 0;
	int flag = true;
	int poz = 0;
	while (flag) {
		int a = str.find(substr, poz);
		if (a == -1) {
			flag = false;
		}
		else {
			br += 1;
			poz = a + 1;
		}
	}
	cout << "Ponavlja se: " << br << " puta" << endl;
}

void funk_rev_sort(vector<string> &vstr) {


	cout << "Reversani: " << endl;
	for (int i = 0; i < vstr.size(); i++) {
		reverse(vstr[i].begin(), vstr[i].end());
	}

	for (int i = 0; i < vstr.size(); i++) {
		cout << vstr[i] << endl;
	}


	cout << endl << endl;


	cout << "Sortirani: " << endl;
	sort(vstr.begin(), vstr.end());
	
	for (int i = 0; i < vstr.size(); i++) {
		cout << vstr[i] << endl;
	}

}