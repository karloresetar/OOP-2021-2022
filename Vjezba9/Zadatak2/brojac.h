#pragma once
#include "zivotinja.h"
#include <vector>
#include <iostream>
using namespace std;

class Counter
{
	vector<Animal*> animals;
public:
	void set_animals(vector<Animal*> animals);
	void calculate();
};
