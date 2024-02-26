// Referee.h Constructor Printout

#include <iostream>
using namespace std;

#include "Player.h"
#include "Referee.h"

Player* Referee::refGame(Player* player1, Player* player2){
    char p1move, p2move; // initialising moves
    p1move = player1->makeMove(); // ask player 1 to make a move
    p2move = player2->makeMove(); // ask player 2 to make a move

    if(p1move == 'R' || 'P' || 'S'){
        if(p2move == 'R' || 'P' || 'S'){    
            if(p1move == p2move){return nullptr;} // Tie Case
            else if(p1move == 'R' and p2move == 'S'){return player1;}
            else if(p1move == 'P' and p2move == 'R'){return player1;}
            else if(p1move == 'S' and p2move == 'P'){return player1;} // player 1 winning case
            else {return player2;} // all other cases
        }
        else{return 0;}
    }
    else{return 0;}
};