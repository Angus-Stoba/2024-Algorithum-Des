// Player Class,
/*
    Abstract class for Human and Computer Classes
*/


#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

class Player { 
protected:
    string name;
    string move;

public:  
  
    virtual string makeMove();    // Virtual for Human and Computer Classes to alter
    virtual string getName();
};

#endif