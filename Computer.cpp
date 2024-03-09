// Defines class "Computer"'s functions

#include "Computer.h"

Computer::Computer(){name = "Computer", movePlayer = new Rock;};

Computer::Computer(string name){ name = "Computer", movePlayer = new Rock;};

Move * Computer::makeMove(){return movePlayer;};

string Computer::getName(){
    name = "Computer"; 
    return name;
};

Move * Computer::getMove(){
    return movePlayer;
};

