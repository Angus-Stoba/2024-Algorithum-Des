// Alternative Player Type
// Can Have 2 in a game

#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <string>

#include "Player.h"

class Computer : public Player {
public:
    Computer();
    Computer(std::string name);
    char makeMove();
    std::string getName(); 
};


#endif