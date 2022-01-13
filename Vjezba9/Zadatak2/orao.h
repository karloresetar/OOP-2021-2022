#pragma once
#include "ptica.h"

class Orao : public Ptica
{
	string type_of = "orao";
	int num_of_legs = 2;
public:
	string get_typeof();
	int get_num_of_legs();
	Orao();
	~Orao();
};