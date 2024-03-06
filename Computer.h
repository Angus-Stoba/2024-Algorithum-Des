// Computer is derived from Player class
/*
    Contains constuctors: 
    - Computer()
    - Computer(<string>)
        - Computer class's name is always "Computer"
    Changes the functions of makeMove() and getName() functions from Player
*/

#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player {
public:
    //Constructors
    Computer();
    Computer(string name);

    //Functions
    Move * makeMove();
    string getName(); 
};


#endif