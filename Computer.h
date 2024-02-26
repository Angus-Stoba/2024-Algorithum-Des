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

#include <iostream>
#include <string>

#include "Player.h"

using namespace std;

class Computer : public Player {
public:
    //Constructors
    Computer();
    Computer(string name);

    //Functions
    char makeMove();
    string getName(); 
};


#endif