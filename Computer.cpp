// Defines class "Computer"'s functions

#include "Computer.h"

Computer::Computer(){name = "Computer", move = 'R';};

Computer::Computer(string name){ name = "Computer", move = 'R';};

string Computer::makeMove(){return move;};

string Computer::getName(){
    name = "Computer"; 
    return name;
};

