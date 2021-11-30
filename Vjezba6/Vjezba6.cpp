#include <iostream>
#include <time.h>
#include <string>
#include <vector>
#include <fstream>
#include <Windows.h>
#include "Vjezba6.hpp"

using namespace std;


HangmanModel::HangmanModel() {
    this->guessMovie = "";
	this->inGame = true;
	this->usedLetters = "";
}

void HangmanModel::RandomMovie(string fd)
{
    int lineCount = 0;
    string word;
    vector<string> vec;
    ifstream reader(fd);
    if (reader.is_open())
    {
        while (getline(reader, word))
            vec.push_back(word);

        int randomLine = rand() % vec.size();

        word = vec.at(randomLine);
        reader.close();
    }
    set_movie(word);
}

void HangmanModel::set_movie(string movie)
{
    for (int i = 0; i < movie.length(); i++)
    {
        if (movie[i] != ' ')
        {
            this->guessMovie.append("_");
        }
        else
        {
            this->guessMovie.append(" ");
        }
        
    }
    this->movie = movie;
}

// MOVIEZZZ EZ KATOSHKA CYKA BLYATOSHKA

string HangmanModel::get_movie()
{
    return this->movie;
}

string HangmanModel::get_guess_movie()
{
    return this->guessMovie;
}

void HangmanModel::set_guess_movie(string guessMovie)
{
    this->guessMovie = guessMovie;
}

// LIVES

void HangmanModel::set_lives(int lives)
{
    this->lives = lives;
}

int HangmanModel::get_lives()
{
    return this->lives;
}

// INGAME

void HangmanModel::set_inGame(bool current)
{
    this->inGame = current;
}

bool HangmanModel::get_inGame()
{
    return this->inGame;
}

// iskoristeni lejtersi
void HangmanModel::set_usedLetters(string usedLetters)
{
	this->usedLetters = usedLetters;
}

string HangmanModel::get_usedLetters()
{
	return this->usedLetters;
}

//HANGMANCONTROLLER

void HangmanController::userEntry(HangmanModel& hangushi)
{
	string temp;
	string letter;
	cout << "Enter zeh letter ( dobra rima ): ";
	cin >> letter;

	if (hangushi.get_usedLetters().find(toupper(letter[0]),0) != string::npos) // Popravil sam xd xd xd HEH#HEH#HHEHAHEHAH MUAHAHA
	{
		system("cls");
		cout << "You already hef used that letterinho" << endl;
		Sleep(1000);
	}
	else
	{
		temp = hangushi.get_usedLetters().append(1,toupper(letter[0]));
		temp.append(" ");
		hangushi.set_usedLetters(temp);
		checkLetter(letter, hangushi);
	}
}

void HangmanController::checkLetter(string letter, HangmanModel& hangushi)
{
	for (int i = 0; i < hangushi.get_movie().length(); i++) // TRAZENJE SLOVA I MINJAMO SLOVO NA TOJ POZICIJI TJ ( NA _ )
	{
		if (toupper(letter[0]) == toupper(hangushi.get_movie()[i]))
		{

			string temp = hangushi.get_guess_movie();
			temp[i] = toupper(letter[0]);
			hangushi.set_guess_movie(temp);
		}
	}



	if (hangushi.get_guess_movie().find(toupper(letter[0])) == string::npos) // SMANJIVANJE LIFERONIAAAA
	{
		HangmanController::updateLives(hangushi);
	}
}

void HangmanController::updateLives(HangmanModel& hangushi)
{
	
		int temp = hangushi.get_lives();
		temp--;
		hangushi.set_lives(temp);
	
}


void HangmanController::checkIfGameIsOver(HangmanModel& hangushi)
{
	if (hangushi.get_guess_movie().find('_') == string::npos)
	{
		hangushi.set_inGame(false);
	}

}



// HANGMANVIEW

void HangmanView::displayCurrentProgress(HangmanModel& hangushi)
{
	cout << hangushi.get_guess_movie() << endl;
}

void HangmanView::displayUsedLetters(HangmanModel& hangushi)
{
	cout << "Used letters: " << hangushi.get_usedLetters() << endl;
}

void HangmanView::displayHangman(HangmanModel& hangushi)
{
	switch (hangushi.get_lives())
	{
	case 0:
		cout << "\t\t\t|--------|\t\t LIVES: " << hangushi.get_lives() << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|       /|\\" << endl;
		cout << "\t\t\t|        |" << endl;
		cout << "\t\t\t|       / \\" << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;

	case 1:
		cout << "\t\t\t|--------|\t\t LIVES: " << hangushi.get_lives() << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|       /|\\" << endl;
		cout << "\t\t\t|        |" << endl;
		cout << "\t\t\t|         \\" << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	case 2:
		cout << "\t\t\t|--------|\t\t LIVES: " << hangushi.get_lives() << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|       /|\\" << endl;
		cout << "\t\t\t|        |" << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	case 3:
		cout << "\t\t\t|--------|\t\t LIVES: " << hangushi.get_lives() << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|       /|\\" << endl;
		cout << "\t\t\t|         " << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	case 4:
		cout << "\t\t\t|--------|\t\t LIVES: " << hangushi.get_lives() << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|        |\\" << endl;
		cout << "\t\t\t|         " << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	case 5:
		cout << "\t\t\t|--------|\t\t LIVES: " << hangushi.get_lives() << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|        |  " << endl;
		cout << "\t\t\t|         " << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	case 6:
		cout << "\t\t\t|--------|\t\t LIVES: " << hangushi.get_lives() << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|         " << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	case 7:
		cout << "\t\t\t|--------|\t\t LIVES: " << hangushi.get_lives() << endl;
		cout << "\t\t\t|         " << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|         " << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	case 8:
		cout << "\t\t\t|--------\t\t LIVES: " << hangushi.get_lives() << endl;
		cout << "\t\t\t|         " << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|         " << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	default:
		break;
	}
}


