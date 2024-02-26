// Defines class "Human"'s functions

#include "Human.h"

Human::Human(){name = "Human";};

Human::Human(std::string input){name = input;};

char Human::makeMove(){
    std::cout << "Enter move:";
    std::cin >> move;
    return move;
};

std::string Human::getName(){
    return name;
};
