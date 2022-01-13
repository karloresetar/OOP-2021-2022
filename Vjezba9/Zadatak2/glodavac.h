#pragma once
#include "zivotinja.h"

class Glodavac : public Animal
{
public:
	string get_typeof() { return 0; }
	int get_num_of_legs() { return 0; }
	Glodavac();
	~Glodavac();
};