// Defines class "Human"'s functions

#include "Human.h"
#include "moveFactory.h"

Human::Human(){name = "Human";};

Human::Human(string input){name = input;};

Move * Human::makeMove(){
    string input;
    cout << "Enter move:";
    cin >> input;
    
    move moveFactory(input);
};

string Human::getName(){
    return name;
};
