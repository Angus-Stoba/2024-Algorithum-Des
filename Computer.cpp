// Defines class "Computer"'s functions

#include "Computer.h"

Computer::Computer(){name = "Computer", move = "Rock";};

Computer::Computer(string name){ name = "Computer", move = "Rock";};

string Computer::makeMove(){return move;};

string Computer::getName(){
    name = "Computer"; 
    return name;
};

