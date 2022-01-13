#pragma once
#include "zivotinja.h"

class Pauk : public Animal
{
public:
	string get_typeof() { return 0; }
	int get_num_of_legs() { return 0; }
	Pauk();
	~Pauk();
};