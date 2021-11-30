#pragma once
#include <iostream>
#include <string>
#include "HangmanModel.hpp"

using namespace std;

class HangmanView {
public:
	void displayCurrentProgress(HangmanModel& hangushi);
	void displayUsedLetters(HangmanModel& hangushi); 
	void displayHangman(HangmanModel& hangushi); 
};