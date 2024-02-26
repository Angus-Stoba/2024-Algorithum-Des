// Player Class,
/*
    Contains:
    Human & Computer Classes
    Playable Moves
*/
// 2 Player Maximum

#ifndef REFEREE_H
#define REFEREE_H

#include <iostream>
#include <string>

#include "Player.h"

using namespace std;

class Referee {
public:
    char makeMove();
    string getName();
};

#endif