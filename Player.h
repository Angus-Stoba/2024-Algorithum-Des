// Player Class,
/*
    Abstract class for Human and Computer Classes
*/


#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "Move.h"

using namespace std;

class Player { 
protected:
    string name;
    Move * move;

public:  
  
    virtual Move * makeMove();    // Virtual for Human and Computer Classes to alter
    virtual string getName();
    virtual string getMove();
};

#endif