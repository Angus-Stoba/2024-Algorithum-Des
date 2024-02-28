// Referee.h Constructor Printout



#include "Player.h"
#include "winner.h"
#include "winningCon.h"
#include "Referee.h"

Referee::Referee(){}

Player* Referee::refGame(Player* player1, Player* player2){
    string p1move, p2move; // initialising moves
    p1move = player1->makeMove(); // ask player 1 to make a move
    p2move = player2->makeMove(); // ask player 2 to make a move

    Winner WinGame(p1move, p2move);

    string WinPlayer = WinGame.getWinner();

    if(WinPlayer == "P1"){return player1;}
    else if(WinPlayer == "P2"){return player2;}    
    else {return nullptr;}

};