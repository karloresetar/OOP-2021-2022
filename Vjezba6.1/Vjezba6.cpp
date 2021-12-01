#include <iostream>
#include <time.h>
#include <string>
#include <vector>
#include <fstream>
#include <Windows.h> // nez sta da koristin za linux npr koju biblioteku da mi radi sleep()
#include "Vjezba6.hpp"
//-----------------------------------------------------------------------------------------
//#include <chrono>
//#include <thread>
//
//std::this_thread::sleep_for(std::chrono::milliseconds(x)); // Mozda ovo za linux <----
// ----------------------------------------------------------------------------------------


using namespace std;


HangmanModel::HangmanModel() {
    this->guessMovie = "";
	this->inGame = true;
	this->usedLetters = "";
}

HangmanView::HangmanView(HangmanModel& model) :model(model)
{
}

HangmanController::HangmanController(HangmanModel& model, HangmanView& view) : model(model), view(view)
{
}

void HangmanModel::RandomMovie(string fd)
{
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

void HangmanController::userEntry()
{
	string temp;
	string letter;
	cout << "Enter zeh letter ( dobra rima ): ";
	cin >> letter;

	if (model.get_usedLetters().find(toupper(letter[0]),0) != string::npos)
	{
		system("cls");
		cout << "You already hef used that letterinho" << endl;
		Sleep(1000);
	}
	else
	{
		temp = model.get_usedLetters().append(1,toupper(letter[0]));
		temp.append(" ");
		model.set_usedLetters(temp);
		checkLetter(letter);
	}
}

void HangmanController::checkLetter(string letter)
{
	for (int i = 0; i < model.get_movie().length(); i++) // TRAZENJE SLOVA I MINJAMO SLOVO NA TOJ POZICIJI TJ ( NA _ )
	{
		if (toupper(letter[0]) == toupper(model.get_movie()[i]))
		{

			string temp = model.get_guess_movie();
			temp[i] = toupper(letter[0]);
			model.set_guess_movie(temp);
		}
	}



	if (model.get_guess_movie().find(toupper(letter[0])) == string::npos) // SMANJIVANJE LIFERONIAAAA
	{
		HangmanController::updateLives();
	}
}

void HangmanController::updateLives()
{
	
		int temp = model.get_lives();
		temp--;
		model.set_lives(temp);
	
}


void HangmanController::checkIfGameIsOver()
{
	if (model.get_guess_movie().find('_') == string::npos)
	{
		model.set_inGame(false);
	}

}

void HangmanController::playGame()
{
	while (model.get_lives() > 0 && model.get_inGame() == true)
	{
		system("cls");
		view.displayHangman();
		cout << model.get_movie() << endl;
		cout << endl;
		view.displayCurrentProgress();
		view.displayUsedLetters();
		this->userEntry();
		this->checkIfGameIsOver();
	}

	if (model.get_inGame() == true)
	{
		system("cls");
		cout << "  _____                                            " << endl;
		cout << " / ____|                                           " << endl;
		cout << "| |  __  __ _ _ __ ___   ___    _____   _____ _ __ " << endl;
		cout << "| | |_ |/ _` | '_ ` _ \\ / _ \\  / _ \\ \\ / / _ \\ '__|" << endl;
		cout << "| |__| | (_| | | | | | |  __/ | (_) \\ V /  __/ |   " << endl;
		cout << " \\_____|\\__,_|_| |_| |_|\\___|  \\___/ \\_/ \\___|_|   " << endl;

		cout << endl << endl;
		cout << "Word was: " << model.get_movie() << endl;
	}
	else
	{
		system("cls");
		cout << "U WONINKS THE GAME!!!! AAAAAAAA LIPOOOOOOOOOOOOOOOOOO BRAVI RAGAZII PERFETTI BAMBINIII " << endl;
		cout << "Word was: " << model.get_movie() << endl;

	}
}



// HANGMANVIEW

void HangmanView::displayCurrentProgress()
{
	cout << model.get_guess_movie() << endl;
}

void HangmanView::displayUsedLetters()
{
	cout << "Used letters: " << model.get_usedLetters() << endl;
}

void HangmanView::displayHangman()
{
	switch (model.get_lives())
	{
	case 0:
		cout << "\t\t\t|--------|\t\t LIVES: " << model.get_lives() << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|       /|\\" << endl;
		cout << "\t\t\t|        |" << endl;
		cout << "\t\t\t|       / \\" << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;

	case 1:
		cout << "\t\t\t|--------|\t\t LIVES: " << model.get_lives() << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|       /|\\" << endl;
		cout << "\t\t\t|        |" << endl;
		cout << "\t\t\t|         \\" << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	case 2:
		cout << "\t\t\t|--------|\t\t LIVES: " << model.get_lives() << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|       /|\\" << endl;
		cout << "\t\t\t|        |" << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	case 3:
		cout << "\t\t\t|--------|\t\t LIVES: " << model.get_lives() << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|       /|\\" << endl;
		cout << "\t\t\t|         " << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	case 4:
		cout << "\t\t\t|--------|\t\t LIVES: " << model.get_lives() << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|        |\\" << endl;
		cout << "\t\t\t|         " << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	case 5:
		cout << "\t\t\t|--------|\t\t LIVES: " << model.get_lives() << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|        |  " << endl;
		cout << "\t\t\t|         " << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	case 6:
		cout << "\t\t\t|--------|\t\t LIVES: " << model.get_lives() << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|         " << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	case 7:
		cout << "\t\t\t|--------|\t\t LIVES: " << model.get_lives() << endl;
		cout << "\t\t\t|         " << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|         " << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	case 8:
		cout << "\t\t\t|--------\t\t LIVES: " << model.get_lives() << endl;
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


