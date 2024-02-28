// Functions of winner.h

#include "winner.h"
#include "Player.h"
#include "winningCon.h"

using namespace std;



// Constructors
Winner::Winner(){}
Winner::Winner(string input1, string input2){move1 = input1; move2 = input2;}

//Function
string Winner::getWinner(){
    
    // just so the program doesn't do anything unneeded
    if(move2 == move1){return "TIE";}

    winningCon player1(move1);

    for (int i=0; i < player1.getArrayLen(); i++){ // for length of array based on move1 input type
        if(move2 == player1.getStronger()[i]){return "P1";} // checks if move1 beats move2
        else if(move2 == player1.getWeeker()[i]){return "P2";} // checks if move2 beats move1
    }

    return "INV";

}