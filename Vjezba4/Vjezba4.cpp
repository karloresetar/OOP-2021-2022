// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <regex>
#include "Vjezba4.h"

using namespace std;

int main()
{
	// ZADATAK 1
	/*string str = "Ja bih      ,ako ikako mogu , ovu recenicu napisala ispravno   asd      asd      .";
	string fixed_sent;

	fixed_sent = corr_sentence(str);
	cout << fixed_sent << endl;*/


	// ZADATAK 2

	string rec1("What time it is?"), rec2("What is your name?"), rec3("Tomorrow will be blyatiful night"); 
	vector <string> v;
	v.push_back(rec1);
	v.push_back(rec3);
	v.push_back(rec2);
	
	for (string i : v)
		cout << i << endl;

	string s1 = fun_pig_latin(v);
	cout << s1 << endl;
	
}



