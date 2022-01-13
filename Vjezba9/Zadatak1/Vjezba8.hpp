#pragma once
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


class ComputerPlayer : public Player {
public:
	int next_move();
	int get_num_of_points();
	void change_num_of_points();
	int guess_sum();
	ComputerPlayer();
	~ComputerPlayer();
};

class Game
{
private:
	Player* p1;
	Player* p2;
	int victory_win;
public:
	Game(Player* p1, Player* p2, int vic_win);
	void start_game();
};