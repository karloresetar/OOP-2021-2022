#include <iostream>
#include <time.h>
#include <string>
#include <vector>
#include "Vjezba6.hpp"

using namespace std;


int main()
{
	srand(time(NULL));
	HangmanModel hangUchihaMadara;
	HangmanView hangUchihaMadaraView(hangUchihaMadara);
	HangmanController hangUchihaMadaraController(hangUchihaMadara,hangUchihaMadaraView);
	hangUchihaMadara.RandomMovie("movie.txt");
	hangUchihaMadaraController.playGame();
	
	

}
