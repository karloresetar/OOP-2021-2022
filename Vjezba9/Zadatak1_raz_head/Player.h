#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Player
{
protected:
	int num_of_points = 0;
public:
	virtual void change_num_of_points() = 0;
	virtual int get_num_of_points() = 0;
	virtual int next_move() = 0;
	virtual int guess_sum() = 0;
	Player();
	~Player();
};