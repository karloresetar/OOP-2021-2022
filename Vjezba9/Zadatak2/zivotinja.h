#pragma once
#include <string>
using namespace std;

class Animal
{
public:
	virtual int get_num_of_legs() = 0;
	virtual string get_typeof() = 0;
	virtual ~Animal();
};