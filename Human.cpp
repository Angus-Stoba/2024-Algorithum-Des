// Defines class "Human"'s functions

#include "Human.h"

Human(){};

Human(std::string name){};

char makeMove(){
    std::cout >> "Choose R, P or S : ";
    std::cin << move << std::endl;
};

std::string getName(){
    if (name == ""){return "null";}
    else{return name;}
};
