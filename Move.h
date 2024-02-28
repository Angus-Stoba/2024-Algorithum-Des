// Move returns the move name 

#ifndef MOVE_H
#define MOVE_H

#include <iostream>
#include <string>

#include "Player.h"


class Move {
private:
    Player* inputPlayer;

public:
    // Constructors
    Move();
    Move(Player* playerInput);

    string getName(); // returns player's move
    //string getMove(); // should be the name of getName()


};

#endif