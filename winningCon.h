//winnningCon is to check what moves are week / strong to others
/*
    e.g. rock is strong to paper, rock is week to paper
        - use variables to show how this works
*/
#ifndef WINNINGCON_H
#define WINNINGCON_H

#include <iostream>
#include <string>

#include "Player.h"


class winningCon {
protected:
    string move = "null";

public:
    // Constructors
    winningCon();
    winningCon(string inputMove);

    // Functions
    string* getStronger();
    string* getWeeker();

    int getArrayLen(); // sizeof(arr)/sizeof(arr[0]) was not working 

    // Sub functions
    string* rpsWin(string input);
    string* rpsLoss(string input);

    string* mrnWin(string input);
    string* mrnLoss(string input);

};

#endif