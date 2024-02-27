// Defines class "Human"'s functions

#include "Human.h"

Human::Human(){name = "Human";};

Human::Human(string input){name = input;};

char Human::makeMove(){
    cout << "Enter move:";
    cin >> move;
    return move;
};

string Human::getName(){
    return name;
};
