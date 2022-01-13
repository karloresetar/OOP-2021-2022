#include "Player.h"

class Game
{
private:
	Player* p1;
	Player* p2;
	int victory_win;
public:
	Game(Player* p1, Player* p2,int vic_win);
	void start_game();
};