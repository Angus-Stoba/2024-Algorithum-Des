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

#include "Human.h"
#include "Computer.h"

using namespace std;

class Player {
public:
    char makeMove();
    string getName();
};

#endif