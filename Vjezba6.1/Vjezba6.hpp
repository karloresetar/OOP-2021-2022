#pragma once
#include <iostream>
#include <string>

using namespace std;

class HangmanModel {
	string movie;
	string guessMovie;
	string usedLetters;
	int lives = 8;
	bool inGame;
	
public:
	HangmanModel();
	void RandomMovie(string fd);
	void set_movie(string movie);
	void set_guess_movie(string guessMovie);
	string get_movie();
	string get_guess_movie();
	int get_lives();
	void set_lives(int lives);
	bool get_inGame();
	void set_inGame(bool current);
	void set_usedLetters(string usedLetters);
	string get_usedLetters();
};

class HangmanView {
	HangmanModel& model;
public:
	HangmanView(HangmanModel& model);
	void displayCurrentProgress();
	void displayUsedLetters();
	void displayHangman();
};


class HangmanController {
	HangmanModel &model;
	HangmanView &view;
public:
	HangmanController(HangmanModel& model, HangmanView& view);
	void userEntry();
	void checkLetter(string letter);
	void updateLives();
	void checkIfGameIsOver();
	void playGame();
};





