// Pirate beats Robot & Monkey

#ifndef PIRATE_H
#define PIRATE_H

#include <iostream>
#include <vector>
#include <string>
#include "Move.h"

using namespace std;

class Pirate : public Move {
public:
    Pirate();
    vector<string> get_winsAgainst();
};

#endif