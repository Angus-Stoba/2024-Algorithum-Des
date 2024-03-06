// Human is derived from Player class
/*
    Contains constuctors: 
        - Human() 
        - Human(<input name>)
    Changes the functions of makeMove() and getName() functions from Player
*/

#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

using namespace std;

class Human : public Player {
public:
    //Constructors
    Human();
    Human(string input);

    //Functions
    Move * makeMove();
    string getName();
    
};

#endif