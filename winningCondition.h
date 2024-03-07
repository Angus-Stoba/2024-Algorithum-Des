// winnningCondition is to check who wins based on the player"x"'s move and player"y"'s winsAgainst vector 
//  i.e. if player"x"'s move is in player"y"'s winsAgainst vector player"y" wins
//       bool will be used for the sake of simplisity in if x's move is in y's vector

#ifndef WINNINGCON_H
#define WINNINGCON_H

#include <iostream>
#include <string>

#include "Player.h"

class winningCondition {
public:
    bool winningMove(string p1moveName, vector<string> p2winsAgainst); // to check if p1moveName is in the p2winsAgainst vector
};

#endif

