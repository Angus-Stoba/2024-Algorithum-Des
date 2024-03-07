// Robot beats Ninja & Zombie

#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <vector>
#include <string>
#include "Move.h"

using namespace std;

class Robot : public Move {
public:
    Robot();
    vector<string> get_winsAgainst();
};

#endif