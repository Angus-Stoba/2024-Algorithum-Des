// Move returns the move name 

#ifndef MOVE_H
#define MOVE_H

#include <iostream>
#include <vector>
#include <string>

#include "Player.h"

using namespace std;


class Move {
private:
    string moveName;
public:
    vector<string> winsAgainst;
    string getName(); // returns player's move
    //string getMove(); // should be the name of getName()


};

#endif