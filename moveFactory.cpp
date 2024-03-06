// switch each case of each string to constructor of each move

#include "moveFactory.h"

moveFactory::moveFactory(){}

Move * moveFactory::winningConditions(string input){
    if(input == "Rock"){return new Rock;}
    else if(input == "Paper"){return new Paper;}
    else if(input == "Scissors"){return new Scissors;}
    else{return nullptr;}
}