#pragma once
#include "pauk.h"

class Tarantula : public Pauk
{
	string type_of = "tarantula";
	int num_of_legs = 10;
public:
	string get_typeof();
	int get_num_of_legs();
	Tarantula();
	~Tarantula();
};