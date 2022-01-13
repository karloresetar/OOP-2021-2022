#include "Game.h"

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