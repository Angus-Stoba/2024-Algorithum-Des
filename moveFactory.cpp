// functions of moveFactory

#include "moveFactory.h"

moveFactory::moveFactory(){}

Move * moveFactory::moveTransformer(string input){
    if(input == "Rock"){return new Rock;}
    else if(input == "Paper"){return new Paper;}
    else if(input == "Scissors"){return new Scissors;}
    else if(input == "Monkey"){return new Monkey;}
    else if(input == "Ninja"){return new Ninja;}
    else if(input == "Pirate"){return new Pirate;}
    else if(input == "Robot"){return new Robot;}
    else if(input == "Zombie"){return new Zombie;}
    else{return nullptr;}
}