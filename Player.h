// Player Class,
/*
    Contains:
    Human & Computer Classes
    Playable Moves
*/
// 2 Player Maximum

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

class Player { // : public human & computer
protected:
    string name;
    char move;

public:    
    virtual char makeMove();
    virtual string getName();
};

#endif