// Scissors beats Paper

#ifndef SCISSORS_H
#define SCISSORS_H

#include <iostream>
#include <vector>
#include <string>
#include "Move.h"

using namespace std;

class Scissors : public Move {
public:
    Scissors();
    vector<string> get_winsAgainst();
};

#endif