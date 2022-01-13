#include <iostream>
#include <time.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include "Vjezba8.hpp"

using namespace std;

// PLAYER
Player::Player()
{
}

Player::~Player()
{
}

// HUMAN PLAYER
int HumanPlayer::next_move()
{
	int entry = 0;
	int sum = 0;
	do
	{
		cout << "Enter number of coins u want: " << endl;
		cin >> entry;

	} while (entry > 3 || entry < 0);

	if (entry == 3)
	{
		cout <<"Korisnik je odabrao 8 \n" << endl;
		return 8;
	}
	else
	{
		vector<int> v;
		vector<int>::iterator it;
		for (int i = 0; i < entry; i++)
		{
			while (true)
			{
				int size = v.size();
				int num = 0;

				
				cout << "Enter number 1,2 or 5 " << endl;
				cin >> num;
				while (num != 1 && num != 2 && num != 5)
				{
					num = 0;
					cout << "U have not enter 1, 2 or 5, please enter again: " << endl;
					cin >> num;
				}
				


				it = find(v.begin(), v.end(), num);
				if (it == v.end())
				{
					v.push_back(num);
				}
				else
				{
					cout << "Number already exist" << endl;
				}

				if (v.size() > size)
				{
					break;
				}
			}
			sum = 0;
			for (int j = 0; j < v.size(); j++)
			{
				sum += v[j];
			}
		}
	}

	cout <<"Korisnikova suma je: \n" << sum << endl;
	return sum;

}


int HumanPlayer::get_num_of_points()
{
	return this->num_of_points;
}

void HumanPlayer::change_num_of_points()
{
	this->num_of_points += 1;
}

int HumanPlayer::guess_sum()
{
	int sum = 0;
	cout << "Enter zeh sum wat ya think? " << endl;
	cin >> sum;

	return sum;
}


HumanPlayer::HumanPlayer()
{
}

HumanPlayer::~HumanPlayer()
{
}


// COMPUTER PLAYER
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


// GAME
Game::Game(Player* p1, Player* p2, int victory_win)
{
	this->p1 = p1;
	this->p2 = p2;
	this->victory_win = victory_win;
}

void Game::start_game()
{

	int human_sum = 0;
	int computer_sum = 0;

	int human_guess = 0;
	int computer_guess = 0;

	while (true)
	{

		human_sum = p1->next_move();
		computer_guess = p2->guess_sum();

		cout << "COMPUTER GUESS: " << computer_guess << endl;

		if (computer_guess == human_sum)
		{
			p2->change_num_of_points();
		}

		computer_sum = p2->next_move();
		human_guess = p1->guess_sum();

		if (human_guess == computer_sum)
		{
			p1->change_num_of_points();
		}

		if (p1->get_num_of_points() == this->victory_win)
		{
			cout << "Bravi ragazzi you won the game" << endl;
			return;
		}
		else if (p2->get_num_of_points() == this->victory_win)
		{
			cout << "Bravi ragazzi you won the game KOMPJUTORU" << endl;
			return;
		}

	}
}