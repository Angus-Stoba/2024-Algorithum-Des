// Referee.h Constructor Printout

#include "Referee.h"

Referee::Referee(){}

Player* Referee::refGame(Player* player1, Player* player2){
    // initialising moves
    Move * p1move;
    Move * p2move;
    p1move = player1->makeMove(); // ask player 1 to make a move
    p2move = player2->makeMove(); // ask player 2 to make a move

    // creating the brain of checking which player beat the other
    winningCondition game; 

    if(p1move->getName() == p2move->getName()){return nullptr;} // tie case
    else if(game.winningMove(p2move->getName(),p1move->winsAgainst) == true){return player1;} // player2's move was in player1's winsAgainst vector, meaning player1 wins
    else if(game.winningMove(p1move->getName(),p2move->winsAgainst) == true){return player2;} // same as above but inversed
    {return nullptr;} // returns tie if no case was valid (i.e. p1move = "Rock", p2move = "Ninja" >> It's a Tie)
    
};