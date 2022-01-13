#include <iostream>
#include <time.h>
#include "HumanPlayer.h"
#include "ComputerPlayer.h"
#include "Game.h"
#include "Player.h"




using namespace std;

int main()
{
	srand(time(NULL));
	Player* p1 = new HumanPlayer;
	Player* p2 = new ComputerPlayer;

	Game g(p1, p2, 3);
	g.start_game();
}