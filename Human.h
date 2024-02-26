// Selectable Player Type,
// Can be 2 in a game.

#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>

#include "Player.h"

class Human : public Player {
public:
    Human();
    Human(std::string input);
    char makeMove();
    std::string getName();
    
};

#endif