#include "brojac.h"
#include "zivotinja.h"
using namespace std;

void Counter::set_animals(vector<Animal*> animals)
{
	this->animals = animals;
}

void Counter::calculate()
{
	int cntr = 0;
	for (auto it = animals.begin(); it != animals.end(); it++)
	{
		cout << "Added: " << (*it)->get_typeof() << " ~ With: " << (*it)->get_num_of_legs() << " legs" << endl;
		cntr += (*it)->get_num_of_legs();
	}
	cout << "Total legs: " << cntr << endl;
}