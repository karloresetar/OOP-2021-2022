#pragma once

#include <iostream>
#include <string>
#include "HangmanModel.hpp";

using namespace std;


class HangmanController {
public:
	void userEntry(HangmanModel& hangushi);
	void checkLetter(string letter, HangmanModel& hangushi);
	void updateLives(HangmanModel& hangushi);
	void checkIfGameIsOver(HangmanModel& hangushi);

};