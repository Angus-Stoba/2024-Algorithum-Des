// Defines class "Computer"'s functions

#include "Computer.h"

Computer::Computer(){name = "Computer", move = 'R';};

Computer::Computer(std::string name){ name = "Computer", move = 'R';};

char Computer::makeMove(){return move;};

std::string Computer::getName(){
    name = "Computer"; 
    return name;
};

