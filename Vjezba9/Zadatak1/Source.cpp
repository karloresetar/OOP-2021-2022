#include <iostream>
#include <time.h>
#include <string.h>
#include "Vjezba8.hpp"




using namespace std;

int main()
{
	srand(time(NULL));
	Player* p1 = new HumanPlayer;
	Player* p2 = new ComputerPlayer;

	Game g(p1, p2, 3);
	g.start_game();
}