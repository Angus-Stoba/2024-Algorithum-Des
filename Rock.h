// Rock beats Scissors

#ifndef ROCK_H
#define ROCK_H

#include <iostream>
#include <vector>
#include <string>
#include "Move.h"

using namespace std;

class Rock : public Move {
public:
    Rock();
    vector<string> get_winsAgainst();
    string getName();
};

#endif