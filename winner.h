// Provides winner of rps / mrn game

#ifndef WINNER_H
#define WINNER_H

#include <iostream>
#include <string>

#include "Player.h"
#include "winningCon.h"

using namespace std;

class Winner {
protected:
    string move1;
    string move2;
public:
    // Constructor
    Winner();
    Winner(string input1, string input2);

    //Function
    string getWinner();

};

#endif