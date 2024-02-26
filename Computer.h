// Alternative Player Type
// Can Have 2 in a game

#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <string>

class Computer {
protected:
    std::string name;
    char move = 'R';

public:
    std::string getName();
};

#endif