// Selectable Player Type,
// Can be 2 in a game.

#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>

class Human {
protected:
    std::string name = Human;
    char move;

public:
    Human();
    Human(std::string name);
    char makeMove();
    std::string getName();
    
};

#endif