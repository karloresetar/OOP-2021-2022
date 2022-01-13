#include "Player.h"

class ComputerPlayer : public Player{
public:
	int next_move();
	int get_num_of_points();
	void change_num_of_points();
	int guess_sum();
	ComputerPlayer();
	~ComputerPlayer();
};
