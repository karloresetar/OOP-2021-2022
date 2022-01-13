#pragma once
#include "glodavac.h"

class Hrcak : public Glodavac
{
	string type_of = "sirijski hrcak";
	int num_of_legs = 4;
public:
	string get_typeof();
	int get_num_of_legs();
	Hrcak();
	~Hrcak();
};