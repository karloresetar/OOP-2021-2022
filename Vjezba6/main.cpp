#include <iostream>
#include <time.h>
#include <string>
#include <vector>
#include "Vjezba6.hpp"

using namespace std;


int main()
{
	srand(time(NULL));
	HangmanModel hangUchihaMadara;
	HangmanView hangUchihaMadaraView;
	HangmanController hangUchihaMadaraController;
	hangUchihaMadara.RandomMovie("movie.txt");
	while (hangUchihaMadara.get_lives() > 0 && hangUchihaMadara.get_inGame() == true)
	{
		system("cls"); // NAJBOLJA STVAR NA SVITU
		hangUchihaMadaraView.displayHangman(hangUchihaMadara);
		//cout << hangUchihaMadara.get_movie() << endl;
		cout << endl;
		hangUchihaMadaraView.displayCurrentProgress(hangUchihaMadara);
		hangUchihaMadaraView.displayUsedLetters(hangUchihaMadara);
		hangUchihaMadaraController.userEntry(hangUchihaMadara);
		hangUchihaMadaraController.checkIfGameIsOver(hangUchihaMadara);
	}

	if (hangUchihaMadara.get_inGame() == true)
	{
		system("cls");
		cout << "  _____                                            " << endl;
		cout << " / ____|                                           " << endl;
		cout << "| |  __  __ _ _ __ ___   ___    _____   _____ _ __ " << endl;
		cout << "| | |_ |/ _` | '_ ` _ \\ / _ \\  / _ \\ \\ / / _ \\ '__|" << endl;
		cout << "| |__| | (_| | | | | | |  __/ | (_) \\ V /  __/ |   " << endl;
		cout << " \\_____|\\__,_|_| |_| |_|\\___|  \\___/ \\_/ \\___|_|   " << endl;

		cout << endl << endl;
		cout << "Word was: " << hangUchihaMadara.get_movie() << endl;
	}
	else
	{
		system("cls");
		cout << "U WONINKS THE GAME!!!! AAAAAAAA LIPOOOOOOOOOOOOOOOOOO BRAVI RAGAZII PERFETTI BAMBINIII " << endl;
		cout << "Word was: " << hangUchihaMadara.get_movie() << endl;

	}
	
	

}
