// Referee.h Constructor Printout

#include "Player.h"
#include "winner.h"
#include "winningCon.h"
#include "Referee.h"

Referee::Referee(){}

Player* Referee::refGame(Player* player1, Player* player2){
    Move * p1move;
    Move * p2move; // initialising moves
    p1move = player1->makeMove(); // ask player 1 to make a move
    p2move = player2->makeMove(); // ask player 2 to make a move

    if(p1move->getName() == p2move->getName()){return nullptr;}
    else{return player1;}

    /*
    if(WinPlayer == "P1"){return player1;}
    else if(WinPlayer == "P2"){return player2;}    
    else {return nullptr;}
    */
};