// Move returns the move name 

#ifndef MOVE_H
#define MOVE_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Move {
protected:
    string moveName; // A self label of the move
public:
    Move();
    vector<string> winsAgainst; // a vector of the possible moves the class can beat
    virtual string getName(); // returns player's move
    //string getMove(); // should be the name of getName()


};

#endif