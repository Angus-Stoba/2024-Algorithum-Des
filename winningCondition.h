// winnningCon is to check what moves are week / strong to others
//  i.e. all winning conditions of an inputted move
/*
    e.g. rock is strong to paper, rock is week to paper
        - use variables to show how this works
*/



#ifndef WINNINGCON_H
#define WINNINGCON_H

#include <iostream>
#include <string>

#include "Player.h"


class winningCondition {
public:
    bool winningMove(string p1moveName, vector<string> p2win);

};

#endif

