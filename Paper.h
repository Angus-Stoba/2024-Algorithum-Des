// Paper beats Rock

#ifndef PAPER_H
#define PAPER_H

#include <iostream>
#include <vector>
#include <string>
#include "Move.h"

using namespace std;

class Paper : public Move {
public:
    Paper();
    vector<string> get_winsAgainst();
    string getName();
};

#endif