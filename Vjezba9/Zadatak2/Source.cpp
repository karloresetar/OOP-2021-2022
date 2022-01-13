#include <iostream>
#include "hrcak.h"
#include "orao.h"
#include "tarantula.h"
#include "brojac.h"
#include <vector>
int main()
{
	Hrcak h;
	Orao o;
	Tarantula t;

	vector<Animal*> animals;

	Animal* hrcak(&h);
	animals.push_back(hrcak);

	Animal* orao(&o);
	animals.push_back(orao);

	Animal* tarantula(&t);
	animals.push_back(tarantula);

	Counter cnt;
	cnt.set_animals(animals);
	cnt.calculate();
}
