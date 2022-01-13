#include <vector>
#include "Player.h"

class HumanPlayer : public Player
{
public:
	int next_move();
	int get_num_of_points();
	int guess_sum();
	void change_num_of_points();
	HumanPlayer();
	~HumanPlayer();
};