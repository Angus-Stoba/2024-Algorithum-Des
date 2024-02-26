// Defines class "Computer"'s functions

#include "Computer.h"

using namespace std;

Computer::Computer(){name = "Computer", move = 'R';};

Computer::Computer(string name){ name = "Computer", move = 'R';};

char Computer::makeMove(){return move;};

string Computer::getName(){
    name = "Computer"; 
    return name;
};

