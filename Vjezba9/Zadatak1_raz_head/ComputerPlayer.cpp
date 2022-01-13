#include <stdlib.h>
#include "ComputerPlayer.h"


int ComputerPlayer::next_move()
{
	int num_of_coins = rand() % 4;
	int sum = 0;
	int coin_arr[3] = { 1,2,5 };
	for (int i = 0; i < num_of_coins; i++)
	{
		sum += coin_arr[rand() % 3];
	}
	cout << "Suma od kompjutera: " << sum << endl;
	return sum;
}


int ComputerPlayer::get_num_of_points()
{
	return this->num_of_points;
}

void ComputerPlayer::change_num_of_points()
{
	this->num_of_points += 1;
}

int ComputerPlayer::guess_sum()
{
	return rand() % 9;
}


ComputerPlayer::ComputerPlayer()
{
}

ComputerPlayer::~ComputerPlayer()
{
}