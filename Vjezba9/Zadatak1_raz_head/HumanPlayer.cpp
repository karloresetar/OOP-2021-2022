#include "HumanPlayer.h"


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
		cout << "Korisnik je odabrao 8 \n" << endl;
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

	cout << "Korisnikova suma je: \n" << sum << endl;
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