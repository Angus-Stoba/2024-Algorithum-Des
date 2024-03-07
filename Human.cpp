// Defines class "Human"'s functions

#include "Human.h"
#include "moveFactory.h"

Human::Human(){name = "Human";};

Human::Human(string input){name = input;};

Move * Human::makeMove(){
    string input;
    moveFactory factory; 
    
    cout << "Enter move:";
    cin >> input;
    
    movePlayer = factory.moveTransformer(input);

    return movePlayer;
};

string Human::getName(){
    return name;
};
