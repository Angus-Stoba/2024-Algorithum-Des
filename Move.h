// Move is to check what moves are week / strong to others
/*
    e.g. rock is strong to paper, rock is week to paper
        - use variables to show how this works


*/

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