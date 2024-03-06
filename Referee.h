// Referee Class
/*
    Contains constuctor:
    - Referee()
    Function:
    - Player* refGame(Player* player1, Player* player2);
        - Function takes 'move' variable from 2 players and determins which of the two wins (if not ties)
*/
// 2 Player Maximum

#ifndef REFEREE_H
#define REFEREE_H

#include <iostream>
#include <string>

#include "Player.h"
#include "winningCon.h"

//using namespace std;

class Referee {
public:
    // Constructor
    Referee();

    //Function
    Player* refGame(Player* player1, Player* player2);
};

#endif