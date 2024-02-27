// Referee.h Constructor Printout

#include "Player.h"
#include "Referee.h"

Referee::Referee(){}

Player* Referee::refGame(Player* player1, Player* player2){
    char p1move, p2move; // initialising moves
    p1move = player1->makeMove(); // ask player 1 to make a move
    p2move = player2->makeMove(); // ask player 2 to make a move

    if(p1move == 'R' or p1move == 'P' or p1move == 'S'){        // Ensures P1 inputs valid input
        if(p2move == 'R' or p2move == 'P' or p2move == 'S'){    // Ensures P2 inputs valid input
            if(p1move == p2move){return nullptr;} // Tie Case
            else if(p1move == 'R' and p2move == 'S'){return player1;}
            else if(p1move == 'P' and p2move == 'R'){return player1;}
            else if(p1move == 'S' and p2move == 'P'){return player1;} // player 1 winning case
            else {return player2;} // all other cases
        }
        else{cout << "Invalid Input" << endl; return 0;}
    }
    else{cout << "Invalid Input" << endl; return 0;}
};